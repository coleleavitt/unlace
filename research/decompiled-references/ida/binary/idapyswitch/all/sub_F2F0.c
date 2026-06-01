__int64 __fastcall sub_F2F0(unsigned int a1)
{
  if ( a1 == -1 )
    return sub_F2D0();
  *(_DWORD *)(__readfsqword(0) - 8) = a1;
  return a1;
}

