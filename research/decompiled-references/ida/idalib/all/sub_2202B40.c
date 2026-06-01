void __fastcall sub_2202B40(void **a1, __int64 a2)
{
  void *v2; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+8h] [rbp-20h]

  if ( *a1 == &unk_26F7B20 )
    sub_22010F0((__int64)&v2, (__int64)a1);
  else
    sub_21FEE00((__int64)&v2, (__int64)a1);
  sub_2205760(&v2, a2);
  if ( v3 > 0x40 )
  {
    if ( v2 )
      operator delete[](v2);
  }
}
