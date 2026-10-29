unsigned __int64 __fastcall correct_address(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 result; // rax

  result = a1;
  if ( a1 != -1 && (a5 || a1 >= a2 && a1 < a2 + a4) )
    return a3 + a1 - a2;
  return result;
}
