__int64 __fastcall sub_21983E0(unsigned int *a1)
{
  __int64 result; // rax

  *a1 = _byteswap_ulong(*a1);
  a1[1] = _byteswap_ulong(a1[1]);
  a1[2] = _byteswap_ulong(a1[2]);
  a1[3] = _byteswap_ulong(a1[3]);
  a1[4] = _byteswap_ulong(a1[4]);
  result = _byteswap_ulong(a1[5]);
  a1[5] = result;
  return result;
}
