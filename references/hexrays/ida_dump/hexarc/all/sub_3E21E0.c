__int64 __fastcall sub_3E21E0(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // esi
  __int64 result; // rax

  v2 = a2 - 8;
  v3 = a2;
  if ( a2 - 8 <= 0xFC )
  {
    a2 -= 8;
    v3 = v2;
    if ( (v2 & 3) == 0 )
      return (unsigned int)(v2 >> 2);
  }
  v4 = a2 + 64;
  result = 0xFFFFFFFFLL;
  if ( v3 < 4 )
    return v4;
  return result;
}
