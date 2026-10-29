_BOOL8 __fastcall sub_2181380(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax
  char v3; // dl

  result = 0;
  v3 = _byteswap_ulong(*(_DWORD *)(a2 + 8));
  if ( (v3 & 2) != 0 )
  {
    result = (v3 & 1) == 0;
    if ( (v3 & 4) != 0 )
      return 1;
  }
  return result;
}
