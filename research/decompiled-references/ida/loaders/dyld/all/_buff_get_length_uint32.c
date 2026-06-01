unsigned __int64 __fastcall buff_get_length_uint32(__int64 a1)
{
  unsigned __int64 result; // x0

  result = *(_QWORD *)(a1 + 8);
  if ( HIDWORD(result) )
    dyld_halt("buffer length not expressible as unsigned 32-bit integer: %lu", result);
  return result;
}
