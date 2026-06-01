__int64 __fastcall sub_1A675A0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  bool v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v22; // rax
  unsigned __int64 i; // [rsp+8h] [rbp-40h] BYREF
  __int64 v24[6]; // [rsp+18h] [rbp-30h] BYREF

  v3 = a2;
  for ( i = a2; ; i = v3 )
  {
    if ( (*(_BYTE *)(v3 + 8) & 0x7F) == 0x18 || (*(_BYTE *)(v3 + 8) & 0x7F) == 0 )
    {
      v4 = sub_B8E160(v3);
      v3 = i;
      if ( !v4 )
        break;
    }
    v9 = *(_QWORD *)(sub_B8C1B0(v3) + 16);
    if ( (v9 & 4) != 0 )
      v3 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v3 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v24[0] = sub_B91570(i, a2, v5, v6, v7, v8);
  v10 = sub_B8C1B0(v24[0]);
  v11 = sub_B8C1B0(i);
  v12 = sub_B8C330(v11);
  if ( !sub_B8DA40(v11) )
    return sub_1A66F90(a1, v24, v13, v14, v15, v16);
  v17 = *(_QWORD *)(v10 + 8) & 7LL;
  if ( *(char *)(v10 + 29) >= 0 )
  {
    if ( v17 )
      v18 = *(_QWORD *)(v10 - 8);
    else
      v18 = 0;
LABEL_13:
    v19 = *(_QWORD *)(v11 + 8) & 7LL;
    if ( *(char *)(v11 + 29) >= 0 )
      goto LABEL_14;
    goto LABEL_20;
  }
  v18 = 0;
  if ( !v17 )
    goto LABEL_13;
  v18 = sub_B8C660(v10);
  v19 = *(_QWORD *)(v11 + 8) & 7LL;
  if ( *(char *)(v11 + 29) >= 0 )
  {
LABEL_14:
    if ( v19 )
      v20 = *(_QWORD *)(v11 - 8);
    else
      v20 = 0;
    goto LABEL_16;
  }
LABEL_20:
  v20 = 0;
  if ( v19 )
  {
    v22 = sub_B8C660(v11);
    if ( sub_A956B0(v12, v22, v18) )
      return sub_1A66F90(a1, v24, v13, v14, v15, v16);
    return sub_1A66F90(a1, (__int64 *)&i, v13, v14, v15, v16);
  }
LABEL_16:
  if ( sub_A956B0(v12, v20, v18) )
    return sub_1A66F90(a1, v24, v13, v14, v15, v16);
  return sub_1A66F90(a1, (__int64 *)&i, v13, v14, v15, v16);
}
