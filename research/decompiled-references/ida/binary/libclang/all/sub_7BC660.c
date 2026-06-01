bool __fastcall sub_7BC660(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  char v18; // al
  char v19; // al
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = sub_79C190(a1 + 48);
  if ( v1 )
  {
    while ( (*(_BYTE *)(v1 + 28) & 0x7F) != 0x10 || (*(_BYTE *)(v1 + 58) & 2) == 0 )
    {
      v2 = *(_QWORD *)(v1 + 8);
      v1 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v2 <= 7 )
        goto LABEL_11;
    }
LABEL_6:
    if ( (unsigned int)sub_7B6F20(v1) == 3 && (*(_BYTE *)(v1 + 60) & 0x10) == 0 )
      goto LABEL_46;
    while ( 1 )
    {
      v3 = *(_QWORD *)(v1 + 8);
      v1 = v3 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v3 <= 7 )
        break;
      if ( (*(_BYTE *)(v1 + 28) & 0x7F) == 0x10 && (*(_BYTE *)(v1 + 58) & 2) != 0 )
        goto LABEL_6;
    }
  }
LABEL_11:
  v4 = *(_QWORD *)(a1 + 120);
  if ( !v4 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v4 = *(_QWORD *)(a1 + 120);
    if ( v4 > 7 )
      goto LABEL_13;
LABEL_62:
    v6 = 0;
    goto LABEL_16;
  }
  if ( v4 <= 7 )
    goto LABEL_62;
LABEL_13:
  v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v5 + 72) & 1) != 0 )
  {
    sub_7B7DB0(a1);
    v5 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v6 = *(_QWORD *)(v5 + 56);
LABEL_16:
  v23[0] = v6;
  sub_7BC620(v23);
  v7 = v23[0];
  if ( v23[0] )
  {
LABEL_17:
    v8 = sub_79C190(v7 + 48);
    if ( v8 )
    {
      while ( (*(_BYTE *)(v8 + 28) & 0x7F) != 0x10 || (*(_BYTE *)(v8 + 58) & 2) == 0 )
      {
        v9 = *(_QWORD *)(v8 + 8);
        v8 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v9 <= 7 )
          goto LABEL_27;
      }
LABEL_22:
      if ( (unsigned int)sub_7B6F20(v8) == 3 && (*(_BYTE *)(v8 + 60) & 0x10) == 0 )
        goto LABEL_46;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v8 + 8);
        v8 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v10 <= 7 )
          break;
        if ( (*(_BYTE *)(v8 + 28) & 0x7F) == 0x10 && (*(_BYTE *)(v8 + 58) & 2) != 0 )
          goto LABEL_22;
      }
    }
LABEL_27:
    while ( 1 )
    {
      v7 = *(_QWORD *)(v7 + 128);
      if ( !v7 )
        break;
      while ( *(char *)(v7 + 28) >= 0 )
      {
        v11 = *(_QWORD *)(v7 + 40);
        if ( (v11 & 7) == 0 && v11 > 7 )
          break;
        if ( (*(_BYTE *)(v7 + 8) & 6) == 0 )
          goto LABEL_17;
        v7 = *(_QWORD *)(v7 + 128);
        if ( !v7 )
          goto LABEL_33;
      }
    }
  }
LABEL_33:
  v12 = sub_7BB160(a1);
  if ( v12 )
  {
    v13 = sub_79C190(v12 + 48);
    if ( v13 )
    {
      while ( (*(_BYTE *)(v13 + 28) & 0x7F) != 0x10 || (*(_BYTE *)(v13 + 58) & 2) == 0 )
      {
        v21 = *(_QWORD *)(v13 + 8);
        v13 = v21 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v21 <= 7 )
          goto LABEL_35;
      }
LABEL_55:
      if ( (unsigned int)sub_7B6F20(v13) == 3 && (*(_BYTE *)(v13 + 60) & 0x10) == 0 )
        goto LABEL_46;
      while ( 1 )
      {
        v22 = *(_QWORD *)(v13 + 8);
        v13 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v22 <= 7 )
          break;
        if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0x10 && (*(_BYTE *)(v13 + 58) & 2) != 0 )
          goto LABEL_55;
      }
    }
  }
LABEL_35:
  v14 = sub_7BACE0(a1);
  v15 = v14;
  if ( !v14 )
  {
LABEL_46:
    *(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) = *(_BYTE *)((*(_QWORD *)(a1 + 120)
                                                                                & 0xFFFFFFFFFFFFFFF8LL)
                                                                               + 72)
                                                                    & 0xE7
                                                                    | 0x10;
    return (*(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) & 0x18) == 8;
  }
  v16 = *(_QWORD *)(v14 + 120);
  if ( !v16 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v15 + 96) + 88LL), *(_QWORD *)(v15 + 96));
    v16 = *(_QWORD *)(v15 + 120);
  }
  if ( v16 <= 7 )
    goto LABEL_63;
  v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v15 != *(_QWORD *)v17 )
    goto LABEL_63;
  v18 = *(_BYTE *)(v17 + 72);
  if ( (v18 & 1) != 0 )
  {
    sub_7B7DB0(v15);
    v18 = *(_BYTE *)((*(_QWORD *)(v15 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72);
  }
  if ( (v18 & 4) != 0 )
    v19 = 1;
  else
LABEL_63:
    v19 = (2 - sub_7BCA00(v15)) & 3;
  *(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) = *(_BYTE *)((*(_QWORD *)(a1 + 120)
                                                                              & 0xFFFFFFFFFFFFFFF8LL)
                                                                             + 72)
                                                                  & 0xE7
                                                                  | (8 * (v19 & 3));
  return (*(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) & 0x18) == 8;
}

