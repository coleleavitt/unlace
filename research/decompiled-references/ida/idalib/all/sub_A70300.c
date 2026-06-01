unsigned __int64 __fastcall sub_A70300(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // [rsp+8h] [rbp-E0h]
  __int64 v15; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v17[184]; // [rsp+30h] [rbp-B8h] BYREF

  v6 = a1 + 288;
  ptr[0] = v17;
  ptr[1] = (void *)0x2000000000LL;
  sub_9B7040((__int64)ptr, a2);
  sub_9B7040((__int64)ptr, SHIDWORD(a2));
  sub_9B7040((__int64)ptr, a3);
  sub_9B7040((__int64)ptr, 57);
  sub_9B7040((__int64)ptr, a4);
  v15 = 0;
  v7 = sub_2223360(a1 + 288, ptr, &v15, &off_2B412C0);
  if ( v7 && (v8 = v7 - 24) != 0 )
  {
    v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v14 = 0;
    if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL) )
    {
      v14 = sub_A70300(
              a1,
              *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)a2 | (unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL]) & 7,
              a3,
              a4);
      sub_2223360(v6, ptr, &v15, &off_2B412C0);
    }
    v11 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
    v12 = a3;
    v13 = v11;
    sub_F578F0(v11, a2, v12, v14, a4);
    v9 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    sub_2223210(v6, v13 + 24, v15, &off_2B412C0);
    sub_A6A720(a1 + 8, v13);
  }
  if ( ptr[0] != v17 )
    free(ptr[0]);
  return v9;
}
