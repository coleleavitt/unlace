unsigned __int64 __fastcall sub_FDB1E0(int a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned __int64 result; // rax

  v1 = (unsigned int)(a1 - 36);
  if ( (unsigned int)v1 > 0x2E || (v2 = 0x400000030001LL, result = 1, !_bittest64(&v2, v1)) )
  {
    result = 0;
    if ( (unsigned int)(a1 - 45) <= 0x35 )
      return (0x20010000000001uLL >> ((unsigned __int8)a1 - 45)) & 1;
  }
  return result;
}

