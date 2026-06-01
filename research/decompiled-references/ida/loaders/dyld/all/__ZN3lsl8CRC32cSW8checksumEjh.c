__int64 __fastcall lsl::CRC32cSW::checksum(lsl::CRC32cSW *this, unsigned int a2, char a3)
{
  return lsl::CRC32cSW::sCRC32cTable[(unsigned __int8)(a2 ^ a3)] ^ (a2 >> 8);
}
