__int64 __fastcall correct_address(unsigned int a1, unsigned int a2, int a3, int a4, char a5)
{
  __int64 result; // rax

  result = a1;
  if ( a1 != -1 && (a5 || a1 >= a2 && a1 < a2 + a4) )
    return a3 + a1 - a2;
  return result;
}

