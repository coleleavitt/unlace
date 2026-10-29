bool __fastcall sub_21814D0(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( (_byteswap_uint64(*(_QWORD *)(a2 + 8)) & 2) != 0 )
    return *(_DWORD *)(a2 + 4) == 0x8000000;
  return result;
}
