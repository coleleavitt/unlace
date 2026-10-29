__int64 __fastcall sub_FBFF30(int a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 != 1 )
  {
    result = 1;
    if ( (unsigned int)(a1 - 29) > 0x34 )
      return dword_2411960[a1 - 2];
  }
  return result;
}
