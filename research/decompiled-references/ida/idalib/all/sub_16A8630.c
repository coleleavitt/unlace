__int64 __fastcall sub_16A8630(__int64 a1, _QWORD *a2, __int64 a3, char a4, _DWORD *a5)
{
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // r14
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  int v15; // r9d
  unsigned __int8 v16; // dl
  __int64 v17; // r15
  __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // r12d
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  char v30; // [rsp+8h] [rbp-50h]
  __int64 *v31; // [rsp+8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+10h] [rbp-48h]

  v9 = *a2 & 0xFFFFFFFFFFFFFFFELL;
  v10 = *(_QWORD *)(v9 + 8);
  v11 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a3) & 7;
  v12 = v10;
  v13 = v11 & 0xFFFFFFFFFFFFFFF0LL;
  v14 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(unsigned __int8 *)(v14 + 16);
  if ( (unsigned int)(v15 - 43) > 1 )
  {
    v22 = v11;
    v24 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned int)(v24 - 43) > 1 )
    {
      v30 = 0;
      goto LABEL_11;
    }
    v31 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
    v14 = sub_F63050(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL), v10, v11, v24);
    v13 = (unsigned __int64)v31;
    if ( !v14 )
    {
      v14 = *v31;
      v30 = 0;
      v24 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      goto LABEL_11;
    }
    LOBYTE(v15) = *(_BYTE *)(v14 + 16);
    v9 = *a2 & 0xFFFFFFFFFFFFFFFELL;
  }
  if ( (_BYTE)v15 == 43 )
  {
    v16 = *(_BYTE *)(v9 + 1);
    v9 = (v16 >> 1) & 3;
    if ( (_BYTE)v9 != 1 )
      goto LABEL_20;
  }
  else
  {
    if ( (_BYTE)v15 != 44 )
    {
      v30 = 0;
      v16 = *(_BYTE *)(v9 + 1);
      goto LABEL_5;
    }
    v16 = *(_BYTE *)(v9 + 1);
    if ( (v16 & 6) == 0 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v9 + 16) == 48 )
      {
        v30 = 1;
LABEL_5:
        if ( ((v16 >> 3) & 7) != 1 )
          goto LABEL_6;
LABEL_22:
        *a5 = 3282;
        return 0;
      }
LABEL_20:
      *a5 = 3286;
      return 0;
    }
  }
  v30 = 0;
  if ( ((v16 >> 3) & 7) == 1 )
    goto LABEL_22;
LABEL_6:
  v17 = *(_QWORD *)(a1 + 248);
  while ( 1 )
  {
    v18 = *(_QWORD *)(v14 + 32);
    if ( (*(_BYTE *)(v14 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v19 = v18 & 0xFFFFFFFFFFFFFFF0LL;
      v14 = *(_QWORD *)v19;
      v20 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v19 + 16LL) - 43;
      if ( (unsigned int)v20 <= 1 )
        break;
      v21 = sub_F63050(v14, v19, v20, v9);
      v18 = *(_QWORD *)(v21 + 32);
      if ( (*(_BYTE *)(v21 + 18) & 0x10) == 0 )
        goto LABEL_10;
    }
  }
LABEL_10:
  v22 = sub_A70010(v17, v18);
  v23 = sub_A70010(*(_QWORD *)(a1 + 248), v12);
  v13 = v22 & 0xFFFFFFFFFFFFFFF0LL;
  v10 = v23;
  v14 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
  v24 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_11:
  if ( (_BYTE)v24 == 42 )
  {
    if ( *(_BYTE *)(v14 + 16) != 42 )
    {
      v32 = v13;
      v14 = sub_F63050(v14, v10, v11, v24);
      v13 = v32;
      if ( !v14 )
      {
LABEL_28:
        v14 = *(_QWORD *)v13;
        v25 = *(unsigned __int8 *)(*(_QWORD *)v13 + 16LL);
        goto LABEL_29;
      }
    }
LABEL_14:
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 32)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1 )
    {
LABEL_15:
      if ( !a4 )
        *a5 = 3279;
      return 0;
    }
    goto LABEL_28;
  }
  if ( (unsigned __int8)(v24 - 33) > 1u )
    goto LABEL_15;
  v25 = *(unsigned __int8 *)(v14 + 16);
  if ( (_BYTE)v25 == 42 )
    goto LABEL_14;
LABEL_29:
  if ( (_BYTE)v25 == 33
    || (v25 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v25 + 16) == 33)
    && (v14 = sub_F63050(v14, v10, v11, v25)) != 0 )
  {
    v28 = *(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF0LL;
    v29 = *(_QWORD *)v28;
    if ( *(_BYTE *)(*(_QWORD *)v28 + 16LL) == 26
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
      && sub_F63050(v29, v10, v11, v25) )
    {
      goto LABEL_15;
    }
  }
  if ( !(unsigned __int8)sub_ABFF60(*(_QWORD **)(a1 + 248), v10, v22, v25, v13) )
    return 0;
  v26 = 1;
  if ( v30 )
    *a2 = sub_1A0BDC0(a1, *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8), *a2 & 0xFFFFFFFFFFFFFFFELL, 0);
  return v26;
}
