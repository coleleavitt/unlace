__int64 __fastcall GUIDGenerator::BytesToUInt32(GUIDGenerator *this, const unsigned __int8 *a2)
{
  return (*((unsigned __int8 *)this + 2) << 16) | *(unsigned __int16 *)this | (*((unsigned __int8 *)this + 3) << 24);
}

