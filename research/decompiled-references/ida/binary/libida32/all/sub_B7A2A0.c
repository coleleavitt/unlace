unsigned __int64 __fastcall sub_B7A2A0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  unsigned __int64 i; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rax

  v6 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 60 <= 1 && (*(_BYTE *)(a1 + 180) & 5) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 152);
    if ( v7 )
    {
      v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v7 & 4) != 0 )
      {
        if ( v8 )
        {
          v9 = *v8 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v9 )
          {
            v10 = *(_QWORD *)(v9 + 104);
            v11 = *(_QWORD *)(v10 + 192);
            while ( 1 )
            {
              v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
              v13 = v12;
              if ( !v12 )
                break;
              a4 = *(_QWORD *)(v12 + 104);
              v11 = *(_QWORD *)(a4 + 192);
              if ( (v11 & 4) != 0 )
                break;
              v10 = a4;
              v9 = v13;
            }
            v14 = *(_QWORD *)(v9 + 128);
            if ( !v14 )
            {
LABEL_12:
              sub_6E4DB0((__int64 *)(v10 + 96), v10, v13, a4, a5, a6);
              v14 = *(_QWORD *)(v9 + 128);
              if ( !v14 )
                return v9;
              goto LABEL_32;
            }
            goto LABEL_32;
          }
        }
      }
      else if ( v8 )
      {
        for ( i = v7 & 0xFFFFFFFFFFFFFFF8LL; ; v8 = (_QWORD *)i )
        {
          v23 = (_QWORD *)sub_B9F900(i);
          i = *v23 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !i || (*(_BYTE *)sub_B9F900(*v23 & 0xFFFFFFFFFFFFFFF8LL) & 4) != 0 )
            break;
        }
        v9 = v8[6];
        v14 = *(_QWORD *)(v9 + 128);
        if ( !v14 )
        {
          v10 = *(_QWORD *)(v9 + 104);
          goto LABEL_12;
        }
LABEL_32:
        v24 = *(_QWORD *)(v14 + 88);
        if ( v24 )
          return v24;
        return v9;
      }
    }
  }
  v16 = *(_QWORD *)(a1 + 136);
  v9 = 0;
  if ( !v16 )
    return v9;
  if ( (v16 & 4) == 0 )
    return v9;
  if ( (v16 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return v9;
  v17 = (*(__int64 *)(v16 & 0xFFFFFFFFFFFFFFF8LL) >> 1) & 3;
  if ( v17 == 1 )
    return v9;
  do
  {
    if ( (v16 & 4) == 0 )
      break;
    v18 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v18 )
      break;
    v19 = *v18 & 0xFFFFFFFFFFFFFFF8LL;
    v17 = v19;
    if ( !v19 )
      break;
    v16 = *(_QWORD *)(v19 + 136);
    v6 = v17;
  }
  while ( v16 );
  v20 = *(_QWORD *)(v6 + 128);
  if ( !v20 )
  {
    v9 = v6;
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v6 + 104) + 96LL), *(_QWORD *)(v6 + 104), v17, a4, a5, a6);
    v20 = *(_QWORD *)(v6 + 128);
    if ( !v20 )
      return v9;
  }
  v21 = *(_QWORD *)(v20 + 88);
  if ( !v21 )
    return v6;
  return v21;
}

