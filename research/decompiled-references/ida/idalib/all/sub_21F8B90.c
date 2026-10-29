__int64 __fastcall sub_21F8B90(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v4; // ecx
  __int64 result; // rax

  v4 = sub_2209840();
  result = 0;
  if ( v4 < a3 )
  {
    if ( v4 + 1 == a3 )
    {
      return 2;
    }
    else if ( a2 << 6 >= a3 && (unsigned int)sub_22097E0(a1, a3 - 1) )
    {
      return 3;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
