__int64 __fastcall sub_21984B0(unsigned int *a1)
{
  __int64 result; // rax

  *a1 = _byteswap_ulong(*a1);
  a1[1] = _byteswap_ulong(a1[1]);
  a1[2] = _byteswap_ulong(a1[2]);
  a1[3] = _byteswap_ulong(a1[3]);
  a1[4] = _byteswap_ulong(a1[4]);
  a1[5] = _byteswap_ulong(a1[5]);
  a1[6] = _byteswap_ulong(a1[6]);
  a1[7] = _byteswap_ulong(a1[7]);
  a1[8] = _byteswap_ulong(a1[8]);
  a1[9] = _byteswap_ulong(a1[9]);
  a1[10] = _byteswap_ulong(a1[10]);
  result = _byteswap_ulong(a1[11]);
  a1[11] = result;
  return result;
}
