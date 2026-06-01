__int64 __fastcall sub_B5AE10(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v5; // rax
  __int64 v6; // r8
  _WORD *v7; // rdx
  _WORD *v8; // rcx
  _WORD **v9; // rax
  __int64 v10; // rdx
  _WORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rax

  v3 = *(_BYTE *)(a1 + 68);
  if ( (v3 & 1) == 0 || *(_QWORD *)(a1 + 40) )
    goto LABEL_3;
  v10 = *(_QWORD *)(a1 + 72);
  if ( (v3 & 0xC) != 0xC && (v3 & 0xC) != 0 )
    v10 = *(_QWORD *)(v10 + 8);
  if ( (*(_DWORD *)v10 & 0x20000) != 0 || (unsigned int)sub_B54430(a1) )
  {
LABEL_3:
    if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
      return 0;
    v5 = sub_B68690(a1);
    v7 = *(_WORD **)v5;
    v8 = (_WORD *)(*(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 8));
    if ( *(_QWORD *)v5 < (unsigned __int64)v8 )
    {
      v11 = *(_WORD **)v5;
      while ( 1 )
      {
        v7 = *(_WORD **)v11;
        if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 288 )
          break;
        v11 += 4;
        if ( v8 == v11 )
          return 0;
      }
      if ( v8 == v11 )
        return 0;
    }
    else
    {
      if ( v7 == v8 )
        return 0;
      if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 288 )
      {
        v9 = (_WORD **)(v8 + 4);
        while ( v7 != (_WORD *)v9 )
        {
          v8 = *v9++;
          if ( v8[18] == 288 )
            goto LABEL_23;
        }
        return 0;
      }
    }
LABEL_23:
    v12 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v12 + 16LL) != 48 )
      return 0;
    v13 = sub_F3D1D0(*v12, a2, v7, v8, v6);
    v18 = (_QWORD *)v13;
    if ( (*(_BYTE *)(v13 + 74) & 1) == 0 )
      v18 = sub_B5AA70(v13, a2, v14, v15, v16, v17);
    if ( !v18 )
      return 0;
    v19 = v18[13];
    sub_6E4DB0((__int64 *)(v19 + 96), v19, v14, v15, v16, v17);
    if ( (*(_BYTE *)(v18[16] + 1LL) & 2) == 0 )
      return 0;
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 17448) + 340LL) == 10 )
    {
      v24 = sub_B5ABC0((__int64)v18, v19, v20, v21, v22, v23);
      v25 = v24;
      if ( v24 )
      {
        v26 = *(_QWORD *)(v24 + 48);
LABEL_32:
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 48 )
          return 0;
        while ( 1 )
        {
          v27 = *(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v25 = v27;
          if ( !v27 )
            break;
          if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 49 <= 2 )
          {
            v26 = *(_QWORD *)(v27 + 48);
            goto LABEL_32;
          }
        }
      }
    }
  }
  return 1;
}

