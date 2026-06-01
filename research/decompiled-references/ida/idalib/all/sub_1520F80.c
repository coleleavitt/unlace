__int64 __fastcall sub_1520F80(_QWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = 0;
  if ( a3 )
  {
    if ( a2 == 8 && *a1 == 0x6E6F696E755F7369LL )
      return 0x10000000FLL;
    else
      return 15;
  }
  return result;
}
