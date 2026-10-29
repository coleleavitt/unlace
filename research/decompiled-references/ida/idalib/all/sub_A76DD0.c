unsigned __int64 __fastcall sub_A76DD0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // [rsp+0h] [rbp-E8h]
  __int64 v16; // [rsp+8h] [rbp-E0h]
  __int64 v17; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v19[184]; // [rsp+30h] [rbp-B8h] BYREF

  v6 = a1 + 328;
  ptr[0] = v19;
  ptr[1] = (void *)0x2000000000LL;
  sub_9B7040((__int64)ptr, a2);
  sub_9B7040((__int64)ptr, SHIDWORD(a2));
  sub_9B7040((__int64)ptr, a3);
  sub_9B7040((__int64)ptr, a4);
  sub_9B7040((__int64)ptr, 31);
  v17 = 0;
  v7 = sub_2223360(a1 + 328, ptr, &v17, &off_2B41260);
  if ( v7 && (v8 = v7 - 24) != 0 )
  {
    v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v11 = 0;
    if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL) )
    {
      v16 = sub_A76DD0(
              a1,
              *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)a2 | (unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL]) & 7,
              a3,
              a4,
              0);
      sub_2223360(v6, ptr, &v17, &off_2B41260);
      v11 = v16;
    }
    v15 = v11;
    v12 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
    v13 = a3;
    v14 = v12;
    sub_F57700(v12, a2, v13, a4, v15);
    v9 = v14 & 0xFFFFFFFFFFFFFFF0LL;
    sub_2223210(v6, v14 + 24, v17, &off_2B41260);
    sub_A6A720(a1 + 8, v14);
  }
  if ( ptr[0] != v19 )
    free(ptr[0]);
  return v9;
}
