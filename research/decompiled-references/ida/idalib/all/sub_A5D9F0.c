unsigned __int64 __fastcall sub_A5D9F0(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 result; // rax

  v2 = *a1;
  if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    result = v2 & ~(a2 & 7);
    if ( ((a2 >> 4) & 3) == ((result >> 4) & 3) )
      result &= 0xFFFFFFFFFFFFFFCFLL;
    *a1 = result;
    if ( ((a2 >> 6) & 7) == ((result >> 6) & 7) )
    {
      result &= 0xFFFFFFFFFFFFFE3FLL;
      *a1 = result;
    }
    if ( (unsigned int)a2 >> 9 == (unsigned int)result >> 9 )
    {
      result &= 0xFFFFFFFF000001FFLL;
      *a1 = result;
    }
    if ( HIDWORD(result) == HIDWORD(a2) )
    {
      result = (unsigned int)result;
      *a1 = (unsigned int)result;
    }
  }
  else
  {
    result = v2 & ~a2;
    *a1 = result;
  }
  return result;
}
