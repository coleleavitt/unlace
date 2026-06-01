__int64 __fastcall sub_277CE0(int a1, int a2)
{
  __int64 result; // rax

  if ( a2 == 2 )
    return a1 != 1;
  result = 2;
  if ( a2 != 3 )
  {
    result = 0xFFFFFFFFLL;
    if ( a2 == 1 )
      return a1 != 0;
  }
  return result;
}
