char __fastcall sub_1A86660(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // r14
  __int64 *v10; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rcx
  char result; // al
  __int64 v17; // rdx
  __int64 v18; // r15
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r14
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  _QWORD *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // [rsp+0h] [rbp-68h]
  __int64 v30; // [rsp+0h] [rbp-68h]
  char v31; // [rsp+Fh] [rbp-59h]
  char v32; // [rsp+1Fh] [rbp-49h] BYREF
  unsigned __int64 v33; // [rsp+20h] [rbp-48h] BYREF
  __int64 v34[8]; // [rsp+28h] [rbp-40h] BYREF

  v6 = sub_168B6C0((__int64)a1);
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) == 0 )
    return 0;
  v9 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = (_QWORD *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *v11 == *(_QWORD *)(v10[1] & 0xFFFFFFFFFFFFFFF0LL) )
    return 0;
  v33 = 0;
  v12 = *v10;
  if ( *(_BYTE *)(*v10 + 16) != 42 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v17 + 16) != 42 )
      return 0;
    v12 = sub_F63050(*v10, a2, v17, v11);
    if ( !v12 )
      return 0;
  }
  v13 = *(_QWORD *)(v12 + 32);
  v33 = v13;
  v14 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v15 & 8) == 0 )
    goto LABEL_5;
  v29 = *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL];
  v18 = *(__int64 *)((char *)&qword_18 + (v15 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !sub_F6ACC0(*v14, a2, v15 & 0xFFFFFFFFFFFFFFF0LL, v15, v8) )
    return 0;
  v15 = ((unsigned __int8)v13 | (unsigned __int8)v29) & 7;
  v19 = v15 | v18;
  if ( ((v19 >> 6) & 7) != 4 )
    return 0;
  if ( (v19 & 0xFFFFFFFFFFFFFE3FLL) != 0 )
    return 0;
  v34[0] = 0;
  v20 = *v9;
  if ( *(_BYTE *)(*v9 + 16) != 42 )
  {
    v28 = *(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v28 + 16) != 42 )
      return 0;
    v20 = sub_F63050(*v9, a2, v28, v15);
    if ( !v20 )
      return 0;
  }
  v21 = *(_QWORD *)(v20 + 32);
  v34[0] = v21;
  v14 = (__int64 *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
  v22 = *(_QWORD *)&byte_8[v21 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v22 & 8) == 0 )
  {
LABEL_5:
    sub_F6ACC0(*v14, a2, v7, v15, v8);
    return 0;
  }
  v30 = *(__int64 *)((char *)&qword_18 + (v22 & 0xFFFFFFFFFFFFFFF0LL));
  v31 = sub_F6ACC0(*v14, v30, v7, v15, v8);
  if ( !v31 )
    return 0;
  v23 = v30 | ((unsigned __int8)v22 | (unsigned __int8)v21) & 7;
  if ( ((v23 >> 6) & 7) - 2 > 1 )
    return 0;
  v24 = sub_168B6C0((__int64)a1);
  v25 = v23 & 0xFFFFFFFFFFFFFE3FLL | 0x100;
  if ( (unsigned int)v25 >> 9 )
  {
    result = sub_F56A30(0, (unsigned int)v25 >> 9, v24);
    if ( !result )
      return result;
  }
  if ( ((v19 >> 4) & 3) != ((v25 >> 4) & 3) && (v19 & 0x30) != 0 && (v23 & 0x30) != 0
    || ((v23 & 0xFFFFFFFFFFFFFE3FLL | 0x100) >> 32) | v23 & 0x3F & (unsigned __int8)~(_BYTE)v19 & 7
    || (v23 & 8) != 0 && (v19 & 8) == 0 )
  {
    return 0;
  }
  v34[0] = sub_6D5440(v34);
  v33 = sub_6D5440(&v33);
  if ( !sub_AAC110(v6, v34[0], v33, 0) )
  {
    if ( (unsigned __int8)sub_1BD2CB0(*a1, v34[0], v33, v34, &v32) )
      goto LABEL_28;
    return 0;
  }
  v34[0] = v33;
LABEL_28:
  v26 = (_QWORD *)(v34[0] & 0xFFFFFFFFFFFFFFF0LL);
  v27 = v25 | v34[0] & 7;
  if ( (v34[0] & 8) != 0 )
  {
    v27 |= *(__int64 *)((char *)&qword_18 + (v34[0] & 0xFFFFFFFFFFFFFFF0LL));
    v26 = (_QWORD *)*v26;
  }
  v34[0] = sub_A70C40(v6, (__int64)v26, v27);
  *a4 = sub_A70010(v6, v34[0]);
  return v31;
}
