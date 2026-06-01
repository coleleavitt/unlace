__int64 __fastcall sub_A808D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9)
{
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // [rsp+8h] [rbp-E0h]
  __int64 v13; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v16[184]; // [rsp+30h] [rbp-B8h] BYREF

  result = a2;
  if ( a9 )
  {
    ptr[0] = v16;
    ptr[1] = (void *)0x2000000000LL;
    sub_F21FC0(ptr, a1, a2, &a7);
    v13 = 0;
    v10 = sub_2223360(a1 + 1000, ptr, &v13, &off_2B40DE0);
    if ( !v10 || (v11 = v10 - 8, v10 == 8) )
    {
      v11 = sub_A794A0((__int64 *)(a1 + 2352), 8 * (3 * a9 + 3), 3u);
      sub_F21D60(v11, a2, &a7);
      sub_2223210(a1 + 1000, v11 + 8, v13, &off_2B40DE0);
    }
    sub_F22B20(&v14, v11);
    result = v14;
    if ( ptr[0] != v16 )
    {
      v12 = v14;
      free(ptr[0]);
      return v12;
    }
  }
  return result;
}
