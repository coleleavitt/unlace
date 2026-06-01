unsigned __int64 __fastcall sub_A77500(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  __int64 v8; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v10[184]; // [rsp+20h] [rbp-B8h] BYREF

  ptr[0] = v10;
  ptr[1] = (void *)0x2000000000LL;
  sub_F57B60(ptr, a1, a2, a3);
  v8 = 0;
  v4 = sub_2223360(a1 + 840, ptr, &v8, off_2B41180);
  if ( !v4 || (v5 = v4 - 24, v4 == 24) )
  {
    v5 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
    sub_F57A80(v5, a2, a3);
    sub_2223210(a1 + 840, v5 + 24, v8, off_2B41180);
    sub_A6A720(a1 + 8, v5);
  }
  v6 = v5 & 0xFFFFFFFFFFFFFFF0LL;
  if ( ptr[0] != v10 )
    free(ptr[0]);
  return v6;
}
