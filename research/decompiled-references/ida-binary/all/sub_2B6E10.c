__int64 __fastcall sub_2B6E10(double a1, __int64 a2, int a3, int a4, unsigned int a5, int a6)
{
  __int64 result; // rax

  result = a5;
  if ( a3 - a4 >= 0 )
    return a5 - (a3 - a4) / 2;
  if ( a4 > 0 )
    return (unsigned int)(int)((double)(int)(a6 - a5) / (double)a4 * (double)((int)((double)word_8BCE1C * a1) + a4 - a3)
                             + (double)(int)(a5 - (int)((double)word_8BCE1C * a1)));
  return result;
}
