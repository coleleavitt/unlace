__int64 __fastcall sub_106F700(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = 1;
  if ( a2 <= 0x11 )
  {
    result = 0;
    if ( ((1LL << a2) & 0x3E001) == 0 )
      return (unsigned int)(((1LL << a2) & 0x1E) != 0) + 1;
  }
  return result;
}
