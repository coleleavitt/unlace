__int64 __fastcall sub_51F060(char a1)
{
  __int64 result; // rax

  result = (a1 & 1) == 0 ? 9 : 11;
  if ( (a1 & 4) != 0 )
    return ((a1 & 1) == 0 ? 9 : 11) | 4u;
  return result;
}
