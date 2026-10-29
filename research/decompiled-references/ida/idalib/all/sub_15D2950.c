__int64 __fastcall sub_15D2950(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(unsigned int *)(a2 + 248);
  result = 0;
  if ( (unsigned int)v2 <= 0x33 )
  {
    v4 = 0xE06680400000ALL;
    if ( _bittest64(&v4, v2) )
      return *(unsigned __int8 *)(a2 + 472);
  }
  return result;
}
