__int64 __fastcall sub_D8C2C0(unsigned __int64 a1, unsigned int a2)
{
  void *v2; // rbp
  void *v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-20h]

  if ( !a2 )
  {
    LOBYTE(a2) = 64;
    return (__int64)(a1 << (64 - (unsigned __int8)a2)) >> (64 - (unsigned __int8)a2);
  }
  v5 = a2;
  if ( a2 <= 0x40 )
  {
    v4 = (void *)(a1 & (0xFFFFFFFFFFFFFFFFLL >> -(char)a2));
    goto LABEL_7;
  }
  sub_2205470(&v4, a1, 1);
  a2 = v5;
  if ( v5 <= 0x40 )
  {
LABEL_7:
    a1 = (unsigned __int64)v4;
    if ( !a2 )
      return 0;
    return (__int64)(a1 << (64 - (unsigned __int8)a2)) >> (64 - (unsigned __int8)a2);
  }
  v2 = v4;
  if ( !v4 )
    return (__int64)v2;
  operator delete[](v4);
  return (__int64)v2;
}
