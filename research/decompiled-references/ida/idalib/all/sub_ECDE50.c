bool __fastcall sub_ECDE50(__int64 a1)
{
  bool result; // al
  unsigned int v2; // ecx

  result = 1;
  if ( *(_DWORD *)(a1 + 356) )
  {
    v2 = *(_DWORD *)(a1 + 64);
    result = 0;
    if ( v2 <= 0x25 )
      return ((1LL << v2) & 0x31E83FFFFCLL) != 0;
  }
  return result;
}
