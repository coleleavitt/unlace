__int64 __fastcall lsl::CRC32cSW::checksum(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 result; // x0
  char v5; // t1

  for ( result = a2; a4; --a4 )
  {
    v5 = *a3++;
    result = lsl::CRC32cSW::sCRC32cTable[(unsigned __int8)(v5 ^ result)] ^ ((unsigned int)result >> 8);
  }
  return result;
}
