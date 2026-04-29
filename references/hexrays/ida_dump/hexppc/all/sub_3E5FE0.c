__int64 __fastcall sub_3E5FE0(__int64 a1, int a2)
{
  __int64 result; // rax

  result = 255;
  if ( a2 <= 8 )
  {
    result = 63;
    if ( a2 == 8 )
      return 127;
  }
  return result;
}
