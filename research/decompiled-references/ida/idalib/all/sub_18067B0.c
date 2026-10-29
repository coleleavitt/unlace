__int64 __fastcall sub_18067B0(__int64 a1, __int64 a2)
{
  char v2; // al
  unsigned int v3; // edx

  v2 = sub_15EB880(a2, a1, 0);
  v3 = 0;
  if ( !v2 )
  {
    *(_BYTE *)(a2 + 58) |= 1u;
    return 1;
  }
  return v3;
}
