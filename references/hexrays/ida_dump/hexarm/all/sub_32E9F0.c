bool __fastcall sub_32E9F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi

  v3 = 29;
  if ( !*(_BYTE *)(a2 + 51) )
    v3 = 13;
  create_tinfo(a1, v3, 13, a2);
  return set_tinfo_property(a1, 2, 4) != 0;
}
