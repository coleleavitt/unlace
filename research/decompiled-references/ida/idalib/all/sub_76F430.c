__int64 __fastcall sub_76F430(unsigned __int8 *a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax

  v1 = *a1;
  result = 0;
  if ( (unsigned __int8)(*a1 + 62) <= 0x2Du && (a1[1] & 0xC0) == 0x80 )
  {
    result = 2;
    if ( v1 > 0xDFu )
    {
      if ( v1 != 0xE0 )
        return 3 * (unsigned int)((a1[2] & 0xC0) == 128);
      result = 0;
      if ( (a1[1] & 0x20) != 0 )
        return 3 * (unsigned int)((a1[2] & 0xC0) == 128);
    }
  }
  return result;
}
