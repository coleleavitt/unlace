__int64 __fastcall sub_2198460(unsigned int *a1)
{
  __int64 result; // rax

  a1[8] = _byteswap_ulong(a1[8]);
  a1[9] = _byteswap_ulong(a1[9]);
  a1[10] = _byteswap_ulong(a1[10]);
  a1[11] = _byteswap_ulong(a1[11]);
  a1[12] = _byteswap_ulong(a1[12]);
  a1[13] = _byteswap_ulong(a1[13]);
  a1[14] = _byteswap_ulong(a1[14]);
  a1[15] = _byteswap_ulong(a1[15]);
  result = _byteswap_ulong(a1[16]);
  a1[16] = result;
  return result;
}
