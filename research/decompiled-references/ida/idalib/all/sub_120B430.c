unsigned __int64 __fastcall sub_120B430(__int64 a1)
{
  unsigned __int64 result; // rax
  int v2; // edx

  result = 0x400000000000000LL;
  v2 = *(_DWORD *)(a1 + 48);
  if ( v2 != 28 )
  {
    result = 0x200000000000000LL;
    if ( v2 != 38 )
      return (unsigned __int64)(v2 == 3) << 58;
  }
  return result;
}
