__int64 __fastcall sub_8F860(unsigned int a1)
{
  if ( a1 == -1 )
    return sub_8F840();
  *(_DWORD *)(__readfsqword(0) - 8) = a1;
  return a1;
}

