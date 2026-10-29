unsigned __int64 __fastcall ZSTD_decodingBufferSize_min(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax

  v2 = 2 * a1;
  if ( a1 >= (unsigned __int64)&loc_20000 )
    v2 = 0x40000;
  result = v2 + a1 + 64;
  if ( result > a2 )
    return a2;
  return result;
}

