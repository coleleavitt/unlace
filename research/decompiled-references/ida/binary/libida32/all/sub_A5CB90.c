__int64 __fastcall sub_A5CB90(
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
    sub_EFE280(ptr, a1, a2, &a7);
    v13 = 0;
    v10 = sub_21FF620(a1 + 1000, ptr, &v13, &off_2B16E40);
    if ( !v10 || (v11 = v10 - 8, v10 == 8) )
    {
      v11 = sub_A55760((__int64 *)(a1 + 2352), 8 * (3 * a9 + 3), 3u);
      sub_EFE020(v11, a2, &a7);
      sub_21FF4D0(a1 + 1000, v11 + 8, v13, &off_2B16E40);
    }
    sub_EFEDE0(&v14, v11);
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

