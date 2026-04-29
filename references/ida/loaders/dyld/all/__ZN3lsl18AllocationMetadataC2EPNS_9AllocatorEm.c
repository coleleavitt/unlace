unsigned __int64 *__fastcall lsl::AllocationMetadata::AllocationMetadata(
        unsigned __int64 *result,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // x9
  __int64 v4; // x8
  char v5; // w14

  v3 = 0;
  v4 = 0;
  *result = *result & 0x3FFE000000000000LL | (a2 >> 3) & 0x1FFFFFFFFFFFFLL;
  result[1] = 0;
  while ( 1 )
  {
    v5 = lsl::AllocationMetadata::granules[v3];
    if ( 2048LL << v5 > a3 )
      break;
    v4 += 0x1000000000000000LL;
    if ( ++v3 == 4 )
      return result;
  }
  *result = v4 | (a2 >> 3) & 0x1FFFFFFFFFFFFLL | (((a3 >> v5) & 0x7FF) << 49);
  return result;
}
