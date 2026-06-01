unsigned __int64 __fastcall sub_A77600(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rsi
  __int64 v14; // [rsp+8h] [rbp-E0h]
  __int64 v15; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v17[184]; // [rsp+30h] [rbp-B8h] BYREF

  v3 = a3;
  ptr[0] = v17;
  ptr[1] = (void *)0x2000000000LL;
  sub_9B7040((__int64)ptr, a2);
  sub_9B7040((__int64)ptr, SHIDWORD(a2));
  sub_9B7040((__int64)ptr, a3);
  sub_9B7040((__int64)ptr, SHIDWORD(a3));
  v15 = 0;
  v6 = sub_2223360(a1 + 584, ptr, &v15, off_2B41140);
  if ( v6 && (v7 = v6 - 24) != 0 )
  {
    v8 = v7 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v10 = a3 & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 64) + 48LL) == *(_QWORD *)v10 )
    {
      v11 = 48;
      v3 = 0;
    }
    else
    {
      v11 = 8LL * (v10 != 0) + 48;
    }
    v14 = *(_QWORD *)(*(_QWORD *)v10 + 8LL);
    v12 = sub_A6FFD0((__int64 *)(a1 + 2352), v11, 4u);
    sub_F5DAF0(v12, a2, v3, v14);
    sub_A6A720(a1 + 8, v12);
    v13 = v12 + 24;
    v8 = v12 & 0xFFFFFFFFFFFFFFF0LL;
    sub_2223210(a1 + 584, v13, v15, off_2B41140);
  }
  if ( ptr[0] != v17 )
    free(ptr[0]);
  return v8;
}
