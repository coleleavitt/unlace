__int64 __fastcall sub_C16760(__int64 a1)
{
  __int64 result; // rax
  int v2; // ecx
  unsigned __int64 v3; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)result > 0x40 )
    return sub_2206780(a1);
  v2 = result - 64;
  if ( *(_QWORD *)a1 )
  {
    _BitScanReverse64(&v3, *(_QWORD *)a1);
    return v2 + ((unsigned int)v3 ^ 0x3F);
  }
  return result;
}
