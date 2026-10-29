__int64 __fastcall sub_1AE65A0(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = 1;
  if ( a2 != 36 )
  {
    LOBYTE(result) = a2 == 85;
    return a3 & (unsigned int)result;
  }
  return result;
}
