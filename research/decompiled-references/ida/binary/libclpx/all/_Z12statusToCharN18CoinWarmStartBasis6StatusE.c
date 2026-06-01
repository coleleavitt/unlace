__int64 __fastcall statusToChar(unsigned int a1)
{
  __int64 result; // rax

  result = 73;
  if ( a1 <= 4 )
    return (unsigned __int8)aFbuls[a1];
  return result;
}

