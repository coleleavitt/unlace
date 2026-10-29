char __fastcall sub_FFE580(int a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  char result; // al
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = (unsigned int)(a1 - 21);
  if ( (unsigned int)v1 > 0x39 )
  {
    v4 = (unsigned int)(a1 - 84);
    if ( (unsigned int)v4 > 0x1A )
      return (unsigned int)(a1 - 112) <= 2;
    v5 = 67158019;
    result = 1;
    if ( !_bittest64(&v5, v4) )
      return (unsigned int)(a1 - 112) <= 2;
  }
  else
  {
    v2 = 0x300B040C0030003LL;
    if ( !_bittest64(&v2, v1) )
      return (unsigned int)(a1 - 112) <= 2;
    return 1;
  }
  return result;
}
