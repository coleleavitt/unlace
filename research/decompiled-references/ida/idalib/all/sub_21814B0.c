bool __fastcall sub_21814B0(__int64 a1, __int64 a2)
{
  bool result; // al
  char v3; // dl

  result = 0;
  v3 = _byteswap_ulong(*(_DWORD *)(a2 + 8));
  if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
    return *(_DWORD *)(a2 + 4) != 0x8000000;
  return result;
}
