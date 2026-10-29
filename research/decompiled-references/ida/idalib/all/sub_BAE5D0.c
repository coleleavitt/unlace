bool __fastcall sub_BAE5D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  char v34; // al
  char v35; // al
  __int64 v36[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = sub_B8E970(a1 + 48);
  if ( v4 )
  {
    while ( (*(_BYTE *)(v4 + 28) & 0x7F) != 0x12 || (*(_BYTE *)(v4 + 58) & 2) == 0 )
    {
      v4 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v4 )
        goto LABEL_11;
    }
LABEL_6:
    if ( (unsigned int)sub_BA8080(v4, a2, v2, v3, v5, v6) == 3 && (*(_BYTE *)(v4 + 60) & 0x10) == 0 )
      goto LABEL_30;
    while ( 1 )
    {
      v4 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v4 )
        break;
      while ( (*(_BYTE *)(v4 + 28) & 0x7F) == 0x12 )
      {
        if ( (*(_BYTE *)(v4 + 58) & 2) != 0 )
          goto LABEL_6;
        v4 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v4 )
          goto LABEL_11;
      }
    }
  }
LABEL_11:
  v7 = *(_QWORD *)(a1 + 120);
  if ( v7 )
  {
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v8 )
    {
LABEL_13:
      if ( (*(_BYTE *)(v8 + 72) & 1) != 0 )
      {
        sub_BA8900(a1);
        v8 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v9 = *(_QWORD *)(v8 + 56);
      goto LABEL_16;
    }
  }
  else
  {
    a2 = *(_QWORD *)(a1 + 96);
    sub_A794E0((__int64 *)(a2 + 88), a2, v2, v3, v5, v6);
    v8 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v8 )
      goto LABEL_13;
  }
  v9 = 0;
LABEL_16:
  for ( v36[0] = v9; ; v36[0] = *(_QWORD *)(v36[0] + 128) )
  {
    sub_BA6800(v36);
    if ( !v36[0] )
      break;
    v16 = sub_B8E970(v36[0] + 48);
    if ( v16 )
    {
      while ( (*(_BYTE *)(v16 + 28) & 0x7F) != 0x12 || (*(_BYTE *)(v16 + 58) & 2) == 0 )
      {
        v16 = *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v16 )
          goto LABEL_28;
      }
LABEL_23:
      if ( (unsigned int)sub_BA8080(v16, a2, v14, v15, v17, v18) == 3 && (*(_BYTE *)(v16 + 60) & 0x10) == 0 )
        goto LABEL_30;
      while ( 1 )
      {
        v16 = *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v16 )
          break;
        while ( (*(_BYTE *)(v16 + 28) & 0x7F) == 0x12 )
        {
          if ( (*(_BYTE *)(v16 + 58) & 2) != 0 )
            goto LABEL_23;
          v16 = *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v16 )
            goto LABEL_28;
        }
      }
    }
LABEL_28:
    ;
  }
  v20 = sub_BAC6C0(a1, a2, v10, v11, v12, v13);
  if ( v20 )
  {
    v25 = sub_BA79C0(v20);
    if ( v25 )
    {
LABEL_38:
      if ( (unsigned int)sub_BA8080(v25, a2, v21, v22, v23, v24) == 3 && (*(_BYTE *)(v25 + 60) & 0x10) == 0 )
        goto LABEL_30;
      while ( 1 )
      {
        v25 = *(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v25 )
          break;
        while ( (*(_BYTE *)(v25 + 28) & 0x7F) == 0x12 )
        {
          if ( (*(_BYTE *)(v25 + 58) & 2) != 0 )
            goto LABEL_38;
          v25 = *(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v25 )
            goto LABEL_43;
        }
      }
    }
  }
LABEL_43:
  v26 = sub_BAB630(a1, a2, v21, v22, v23, v24);
  v31 = v26;
  if ( !v26 )
  {
LABEL_30:
    *(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) = *(_BYTE *)((*(_QWORD *)(a1 + 120)
                                                                                & 0xFFFFFFFFFFFFFFF8LL)
                                                                               + 72)
                                                                    & 0xE7
                                                                    | 0x10;
    return (*(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) & 0x18) == 8;
  }
  v32 = *(_QWORD *)(v26 + 120);
  if ( !v32 )
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(v31 + 96) + 88LL), *(_QWORD *)(v31 + 96), v27, v28, v29, v30);
    v32 = *(_QWORD *)(v31 + 120);
  }
  v33 = v32 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v33 && v31 == *(_QWORD *)v33 )
  {
    v34 = *(_BYTE *)(v33 + 72);
    if ( (v34 & 1) != 0 )
    {
      sub_BA8900(v31);
      v34 = *(_BYTE *)((*(_QWORD *)(v31 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72);
    }
    if ( (v34 & 4) != 0 )
      goto LABEL_51;
  }
  if ( (unsigned __int8)sub_BAE8D0(v31) )
LABEL_51:
    v35 = 1;
  else
    v35 = 2;
  *(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) = (8 * v35)
                                                                  | *(_BYTE *)((*(_QWORD *)(a1 + 120)
                                                                              & 0xFFFFFFFFFFFFFFF8LL)
                                                                             + 72)
                                                                  & 0xE7;
  return (*(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) & 0x18) == 8;
}
