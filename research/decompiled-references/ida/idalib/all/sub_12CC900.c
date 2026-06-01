__int64 __fastcall sub_12CC900(int a1)
{
  __int64 result; // rax

  if ( (unsigned int)(a1 - 35) <= 1 )
    return 51;
  result = 52;
  if ( (unsigned int)(a1 - 29) > 3 )
  {
    result = *((_DWORD *)&unk_2BAF294 + 6 * (unsigned int)(a1 - 1)) & 2;
    if ( (*((_DWORD *)&unk_2BAF294 + 6 * (unsigned int)(a1 - 1)) & 2) != 0 )
      return 57;
  }
  return result;
}
