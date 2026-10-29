__int64 __fastcall sub_26E40(unsigned int a1)
{
  if ( a1 == -1 )
    return sub_26E20();
  *(_DWORD *)(__readfsqword(0) - 8) = a1;
  return a1;
}

