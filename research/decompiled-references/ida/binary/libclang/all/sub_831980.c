__int64 __fastcall sub_831980(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)result > 0x40 )
    return sub_2587400(a1);
  if ( *(_QWORD *)a1 )
  {
    _BitScanReverse64(&v2, *(_QWORD *)a1);
    return (unsigned int)result + ((unsigned int)v2 ^ 0x3F) - 64;
  }
  return result;
}

