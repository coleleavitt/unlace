unsigned __int64 __fastcall sub_A70C40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // r14
  __int64 v17; // rdx
  char v18; // [rsp+8h] [rbp-F0h]
  __int64 v19; // [rsp+8h] [rbp-F0h]
  __int64 v20; // [rsp+8h] [rbp-F0h]
  __int64 v21; // [rsp+18h] [rbp-E0h]
  __int64 v22; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v24[184]; // [rsp+40h] [rbp-B8h] BYREF

  v3 = a1 + 24;
  v5 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  v18 = a3;
  ptr[0] = v24;
  ptr[1] = (void *)0x2000000000LL;
  sub_9B7040((__int64)ptr, a2);
  sub_9B7040((__int64)ptr, SHIDWORD(a2));
  sub_9B7040((__int64)ptr, v5);
  sub_9B7040((__int64)ptr, SHIDWORD(v5));
  v22 = 0;
  v6 = sub_2223360(a1 + 24, ptr, &v22, &off_2B41460);
  if ( v6 )
  {
    v7 = v6 - 16;
    if ( v7 )
    {
      v8 = v18 & 7 | v7 & 0xFFFFFFFFFFFFFFF0LL | 8;
      goto LABEL_4;
    }
  }
  v10 = *(_QWORD *)(a2 + 8);
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == v10 )
  {
    v13 = sub_A6FFD0((__int64 *)(a1 + 2352), 32, 4u);
    v15 = v18 & 7;
LABEL_14:
    v16 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    v14 = v13 & 0xFFFFFFFFFFFFFFF0LL | 8;
    goto LABEL_12;
  }
  v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(_QWORD *)(a2 + 8) & 7LL;
  if ( (v10 & 8) != 0 )
  {
    v12 |= *(__int64 *)((char *)&qword_18 + (v10 & 0xFFFFFFFFFFFFFFF0LL));
    v11 = (_QWORD *)*v11;
  }
  v21 = v18 & 7;
  v19 = sub_A70C40(a1, v11, v5 | v12);
  sub_2223360(v3, ptr, &v22, &off_2B41460);
  v13 = sub_A6FFD0((__int64 *)(a1 + 2352), 32, 4u);
  v14 = v19;
  v15 = v21;
  if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_14;
  v16 = v13 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_12:
  *(_QWORD *)v13 = a2;
  v17 = v22;
  *(_QWORD *)(v13 + 8) = v14;
  *(_QWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 24) = v5;
  v20 = v15;
  sub_2223210(v3, v13 + 16, v17, &off_2B41460);
  v8 = v20 | v16 | 8;
LABEL_4:
  if ( ptr[0] != v24 )
    free(ptr[0]);
  return v8;
}
