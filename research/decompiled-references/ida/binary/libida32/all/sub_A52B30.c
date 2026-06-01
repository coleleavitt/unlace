unsigned __int64 __fastcall sub_A52B30(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 *v10; // r10
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+0h] [rbp-F8h]
  __int64 v21; // [rsp+10h] [rbp-E8h]
  __int64 v22; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v24[184]; // [rsp+40h] [rbp-B8h] BYREF

  v8 = a2 & 7;
  ptr[0] = v24;
  ptr[1] = (void *)0x2000000000LL;
  sub_F33600(
    ptr,
    a1,
    *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
  | v8
  | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7LL,
    a3);
  v22 = 0;
  v21 = a1 + 304;
  v9 = sub_21FF620(a1 + 304, ptr, &v22, &off_2B17300);
  v10 = (__int64 *)(a1 + 2352);
  v11 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v9 )
  {
    v12 = v9 - 24;
    if ( v12 )
    {
      v19 = v12 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_4:
      v13 = sub_A4C290(v10, 64, 4u);
      sub_F33530(v13, a2, v19, a3, a4, a5);
      goto LABEL_5;
    }
  }
  v17 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7LL
      | v8
      | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2 != v17 )
  {
    v18 = sub_A52B30(a1, v17, a3, 0, a5, v11);
    v10 = (__int64 *)(a1 + 2352);
    v19 = v18;
    goto LABEL_4;
  }
  v13 = sub_A4C290((__int64 *)(a1 + 2352), 64, 4u);
  sub_F33530(v13, a2, 0, a3, a4, a5);
  sub_21FF620(v21, ptr, &v22, &off_2B17300);
  sub_21FF4D0(v21, v13 + 24, v22, &off_2B17300);
LABEL_5:
  v14 = v13;
  v15 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  sub_A469E0(a1 + 8, v14);
  if ( ptr[0] != v24 )
    free(ptr[0]);
  return v15;
}

