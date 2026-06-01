__int64 __fastcall sub_3C4360(__int64 a1, __int64 a2, int a3)
{
  char v3; // cl
  __int64 v4; // rax

  if ( (a2 & 0x600) == 0x200 || a3 > 7 )
    return get_default_radix(a1);
  if ( (unsigned int)a3 > 7 )
    return 16;
  v3 = 4 * (a3 + ((unsigned int)a3 > 1) + 5);
  v4 = a2 & (15LL << v3);
  if ( v4 == 1LL << v3 )
    return 16;
  if ( v4 == 2LL << v3 )
    return 10;
  if ( v4 == 7LL << v3 )
    return 8;
  if ( v4 != 6LL << v3 )
    return get_default_radix(a1);
  return 2;
}
