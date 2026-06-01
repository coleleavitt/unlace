unsigned __int64 __fastcall sub_7AB340(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax

  v4 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 58 <= 1 && (*(_BYTE *)(a1 + 180) & 5) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 152);
    if ( v11 )
    {
      v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      v13 = *(_QWORD *)(a1 + 152) & 4LL;
      if ( (_DWORD)v13 )
      {
        if ( v12 )
        {
          v20 = *v12 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v20 )
          {
            v19 = *(_QWORD *)(v20 + 104);
            v21 = *(_QWORD *)(v19 + 192);
            while ( 1 )
            {
              v4 = v20;
              v20 = v21 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v21 <= 7 )
                break;
              v21 = *(_QWORD *)(*(_QWORD *)(v20 + 104) + 192LL);
              if ( (v21 & 4) != 0 )
                break;
              v19 = *(_QWORD *)(v20 + 104);
            }
            v9 = *(_QWORD *)(v4 + 128);
            if ( v9 )
              goto LABEL_12;
            goto LABEL_23;
          }
        }
      }
      else if ( v12 )
      {
        v14 = (unsigned __int64)v12;
        do
        {
          v15 = v14;
          v16 = *(_QWORD *)sub_7D2DE0(v14, a2, v13, a4);
          v14 = v16 & 0xFFFFFFFFFFFFFFF8LL;
        }
        while ( v16 > 7 && (*(_BYTE *)sub_7D2DE0(v16 & 0xFFFFFFFFFFFFFFF8LL, a2, v17, v18) & 4) == 0 );
        v4 = *(_QWORD *)(v15 + 48);
        v9 = *(_QWORD *)(v4 + 128);
        if ( v9 )
          goto LABEL_12;
        goto LABEL_22;
      }
    }
  }
  v5 = *(_QWORD *)(a1 + 136);
  v6 = 0;
  if ( !v5 || (v5 & 4) == 0 || (v5 & 0xFFFFFFFFFFFFFFF8LL) == 0 || (*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL) & 6LL) == 2 )
    return v6;
  do
  {
    if ( (v5 & 4) == 0 )
      break;
    v7 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v7 )
      break;
    v8 = *v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v8 )
      break;
    v5 = *(_QWORD *)(v8 + 136);
    v4 = v8;
  }
  while ( v5 );
  v9 = *(_QWORD *)(v4 + 128);
  if ( !v9 )
  {
LABEL_22:
    v19 = *(_QWORD *)(v4 + 104);
LABEL_23:
    sub_6E77B0((unsigned __int64 *)(v19 + 96), v19);
    v9 = *(_QWORD *)(v4 + 128);
    if ( !v9 )
      return v4;
  }
LABEL_12:
  v6 = *(_QWORD *)(v9 + 88);
  if ( !v6 )
    return v4;
  return v6;
}

