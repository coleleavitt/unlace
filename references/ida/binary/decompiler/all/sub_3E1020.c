__int64 __fastcall sub_3E1020(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = 8;
  v2 = a1 & 0x1018;
  if ( v2 != 4112 )
  {
    if ( (a1 & 0x1008) == 0 || v2 == 4104 )
      return 4;
    else
      return 2;
  }
  return result;
}
