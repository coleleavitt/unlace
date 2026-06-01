unsigned __int64 __fastcall sub_EFF210(__int64 *a1)
{
  unsigned __int64 result; // rax

  result = 0;
  if ( *a1 )
  {
    if ( ((*a1 >> 1) & 3) == 2 )
      return *a1 & 0xFFFFFFFFFFFFFFF8LL;
  }
  return result;
}

