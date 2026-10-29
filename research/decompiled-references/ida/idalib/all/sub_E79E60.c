void __fastcall sub_E79E60(__int64 a1, void *a2)
{
  void *v2; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v3; // [rsp+8h] [rbp-10h]
  char v4; // [rsp+Ch] [rbp-Ch]

  v2 = a2;
  v3 = 64;
  v4 = 0;
  sub_E79C70(a1, (__int64)&v2);
  if ( v3 > 0x40 )
  {
    if ( v2 )
      operator delete[](v2);
  }
}
