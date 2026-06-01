__int64 __fastcall sub_665E90(__int64 a1, unsigned int a2, unsigned int a3, int a4, int a5, char a6)
{
  __int64 result; // rax

  result = a2;
  if ( a2 != -1 && (a6 || a2 >= a3 && a2 < a3 + a5) )
    return a4 - a3 + a2;
  return result;
}

