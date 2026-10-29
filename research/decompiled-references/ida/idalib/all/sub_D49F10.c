__int64 __fastcall sub_D49F10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, void **a6)
{
  __int64 v8[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v9[2]; // [rsp+10h] [rbp-58h] BYREF
  void *v10; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-40h]
  void *v12; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-30h]
  void *src; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-20h]

  v9[0] = a1;
  v9[1] = a2;
  v8[0] = a3;
  v8[1] = a4;
  sub_D47CB0((__int64)&v10, v9);
  sub_D47CB0((__int64)&v12, v8);
  sub_22078F0(&src);
  if ( v15 > 0x40 )
  {
    memcpy(*a6, src, 8 * (((unsigned __int64)v15 + 63) >> 6));
    if ( v15 > 0x40 && src )
      operator delete[](src);
  }
  else
  {
    *a6 = src;
  }
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  return 0;
}
