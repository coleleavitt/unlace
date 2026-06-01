__int64 __fastcall sub_3EBDA0(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = 7;
  v2 = a1 & 0x1018;
  if ( v2 != 4112 )
  {
    LOBYTE(result) = (a1 & 0x1008) == 0;
    LOBYTE(v2) = v2 == 4104;
    return (v2 | (unsigned int)result) + 1;
  }
  return result;
}
