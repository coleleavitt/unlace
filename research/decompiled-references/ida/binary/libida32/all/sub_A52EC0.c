unsigned __int64 __fastcall sub_A52EC0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 *v9; // r9
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v20; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v22[184]; // [rsp+40h] [rbp-B8h] BYREF

  v6 = a2 & 7;
  v7 = a1 + 240;
  ptr[0] = v22;
  ptr[1] = (void *)0x2000000000LL;
  sub_F337C0(
    ptr,
    a1,
    *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
  | v6
  | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7LL,
    a3);
  v20 = 0;
  v8 = sub_21FF620(a1 + 240, ptr, &v20, &off_2B172E0);
  v9 = (__int64 *)(a1 + 2352);
  v10 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v8 )
  {
    v11 = v8 - 24;
    if ( v11 )
    {
      v12 = v11 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_4:
      v13 = sub_A4C290(v9, 64, 4u);
      sub_F33700(v13, a2, v12, a3, a4);
      goto LABEL_5;
    }
  }
  v17 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7LL
      | v6
      | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2 != v17 )
  {
    v18 = sub_A52EC0(a1, v17, a3, 0, v10);
    v9 = (__int64 *)(a1 + 2352);
    v12 = v18;
    goto LABEL_4;
  }
  v13 = sub_A4C290((__int64 *)(a1 + 2352), 64, 4u);
  sub_F33700(v13, a2, 0, a3, a4);
  sub_21FF620(v7, ptr, &v20, &off_2B172E0);
  sub_21FF4D0(v7, v13 + 24, v20, &off_2B172E0);
LABEL_5:
  v14 = v13;
  v15 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  sub_A469E0(a1 + 8, v14);
  if ( ptr[0] != v22 )
    free(ptr[0]);
  return v15;
}

