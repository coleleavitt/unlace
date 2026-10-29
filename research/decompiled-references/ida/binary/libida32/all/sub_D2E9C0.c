__int64 __fastcall sub_D2E9C0(__int64 *a1, __int64 *a2, __int64 a3, void **a4)
{
  void *v5; // rbx
  void *v7; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-50h]
  void *v9; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-40h]
  void *src; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-30h]

  sub_D23F70((__int64)&v9, a2);
  sub_D23F70((__int64)&v7, a1);
  v12 = v8;
  if ( v8 > 0x40 )
    sub_21E17D0(&src);
  else
    src = v7;
  sub_21E1C60(&src, &v9);
  v5 = src;
  if ( v12 > 0x40 )
  {
    memcpy(*a4, src, 8 * (((unsigned __int64)v12 + 63) >> 6));
    operator delete[](v5);
  }
  else
  {
    *a4 = src;
  }
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  return 0;
}

