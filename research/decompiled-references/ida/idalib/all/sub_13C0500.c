__int64 __fastcall sub_13C0500(char *a1, unsigned int a2)
{
  char v2; // cl
  __int64 result; // rax
  char v4; // dl

  v2 = sub_13F3060(a2) | ((unsigned __int8)*a1 >> 7);
  result = 0;
  v4 = (v2 << 7) | *a1 & 0x7F;
  *a1 = v4;
  if ( v4 >= 0 )
    result = (unsigned __int8)a1[1] & 1u | ((a2 & 2) != 0);
  a1[1] = result | a1[1] & 0xFE;
  return result;
}
