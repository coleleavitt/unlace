__int64 __fastcall sub_40650(__int64 a1, int a2)
{
  unsigned int v2; // eax
  char v3; // cl
  __int64 result; // rax

  if ( a2 == 176 || a2 == 256 )
    return 0;
  v2 = sub_4E2D0(a1);
  if ( v2 > 9 )
    return 0;
  v3 = v2;
  result = 64;
  if ( ((1LL << v3) & 0x254) == 0 )
    return 32 * (unsigned int)(((1LL << v3) & 0xA2) != 0);
  return result;
}
