unsigned __int64 *__fastcall lsl::AllocationMetadata::setType(unsigned __int64 *result, unsigned __int8 a2)
{
  *result = *result & 0x3FFFFFFFFFFFFFFFLL | ((unsigned __int64)a2 << 62);
  return result;
}
