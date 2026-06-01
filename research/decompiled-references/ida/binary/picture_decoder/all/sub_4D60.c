__int64 __fastcall sub_4D60(unsigned int a1)
{
  if ( a1 == -1 )
    return sub_4D40();
  *(_DWORD *)(__readfsqword(0) - 8) = a1;
  return a1;
}

