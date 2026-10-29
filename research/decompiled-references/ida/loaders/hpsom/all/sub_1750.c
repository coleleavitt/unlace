__int64 __fastcall sub_1750(unsigned int *a1)
{
  __int64 result; // rax

  *a1 = _byteswap_ulong(*a1);
  result = _byteswap_ulong(a1[1]);
  a1[1] = result;
  return result;
}

