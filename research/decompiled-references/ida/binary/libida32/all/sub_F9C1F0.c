__int64 __fastcall sub_F9C1F0(int a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 != 1 )
  {
    result = 1;
    if ( (unsigned int)(a1 - 29) > 0x34 )
      return dword_23ED800[a1 - 2];
  }
  return result;
}

