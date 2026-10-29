__int64 __fastcall sub_D35990(__int64 *a1, __int64 *a2, __int64 a3, void **a4)
{
  void *v6; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-50h]
  void *v8; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+18h] [rbp-40h]
  void *src; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-30h]

  sub_D23F70((__int64)&v8, a2);
  sub_D23F70((__int64)&v6, a1);
  sub_21E5FA0(&src, &v6, &v8);
  if ( v11 > 0x40 )
  {
    memcpy(*a4, src, 8 * (((unsigned __int64)v11 + 63) >> 6));
    if ( v11 > 0x40 && src )
      operator delete[](src);
  }
  else
  {
    *a4 = src;
  }
  if ( v7 > 0x40 && v6 )
    operator delete[](v6);
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  return 0;
}

