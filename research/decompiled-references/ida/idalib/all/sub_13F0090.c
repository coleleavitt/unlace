__int64 __fastcall sub_13F0090(__int64 a1, int a2)
{
  __int64 result; // rax

  for ( result = a1 + 48; a2; --a2 )
  {
    for ( ; *(_WORD *)(result + 16) != 1; result += 24 )
      ;
    result += 24;
  }
  return result;
}
