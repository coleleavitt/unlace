unsigned __int64 __fastcall sub_A76700(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // r15d
  int v9; // r14d
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  unsigned __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rdi
  unsigned __int64 v19; // r14
  int v20; // [rsp+Ch] [rbp-ECh]
  unsigned __int64 v21; // [rsp+18h] [rbp-E0h]
  __int64 v22; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v24[184]; // [rsp+40h] [rbp-B8h] BYREF

  v8 = a5;
  v9 = a3;
  v11 = a1 + 912;
  ptr[0] = v24;
  ptr[1] = (void *)0x2000000000LL;
  v20 = a4;
  sub_F5FD10(ptr, a2, a3, a4, a5);
  v22 = 0;
  v12 = sub_2223360(a1 + 912, ptr, &v22, &off_2B41440);
  if ( v12 && (v13 = v12 - 24) != 0 )
  {
    v14 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v21 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)a2 | (unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
    v16 = sub_A6FFD0((__int64 *)(a1 + 2352), 8 * a8 + 64, 4u);
    v17 = v9;
    v18 = v16;
    v19 = v16;
    sub_F5D7A0(v16, a2, v21, v17, v20, v8, a7, a8);
    sub_A6A720(a1 + 8, v18);
    v14 = v19 & 0xFFFFFFFFFFFFFFF0LL;
    sub_2223210(v11, v19 + 24, v22, &off_2B41440);
  }
  if ( ptr[0] != v24 )
    free(ptr[0]);
  return v14;
}
