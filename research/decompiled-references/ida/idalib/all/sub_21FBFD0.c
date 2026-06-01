void __fastcall sub_21FBFD0(__int64 a1, double a2)
{
  void *v2; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v3; // [rsp+8h] [rbp-10h]

  v3 = 64;
  v2 = *(void **)&a2;
  sub_21FBE00(a1, (__int64 *)&v2);
  if ( v3 > 0x40 )
  {
    if ( v2 )
      operator delete[](v2);
  }
}
