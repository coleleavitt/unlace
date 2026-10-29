bool __fastcall sub_C1BE80(int *a1)
{
  int v1; // ecx
  bool result; // al
  int v3; // ecx

  v1 = *a1;
  if ( (((unsigned int)*a1 >> 3) & 7) == 7 )
  {
    if ( (v1 & 0x104) != 0 )
      return 1;
  }
  else
  {
    result = 1;
    if ( (((unsigned int)*a1 >> 3) & 7) != 1 )
      return result;
  }
  result = 1;
  if ( (unsigned __int8)v1 >> 6 == 3 )
  {
    v3 = *a1 & 0x100;
    if ( v3 )
      return result;
    return v3 != 0;
  }
  if ( !((unsigned __int8)v1 >> 6) )
  {
    v3 = *a1 & 0x100;
    return v3 != 0;
  }
  return result;
}
