__int64 __fastcall lsl::CRC32c::operator unsigned int(__int64 a1)
{
  return (unsigned int)~*(_DWORD *)(a1 + 8);
}
