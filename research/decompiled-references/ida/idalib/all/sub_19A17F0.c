bool __fastcall sub_19A17F0(int *a1)
{
  int v1; // edx
  bool result; // al
  unsigned int v3; // ecx

  v1 = *a1;
  if ( *a1 == 2 )
    return (unsigned int)a1[1] > 8;
  if ( v1 == 3 )
    return (unsigned int)a1[1] > 1;
  result = 0;
  if ( !v1 )
  {
    v3 = a1[1];
    if ( v3 > 9 )
      return v3 != 10 || (a1[2] & 0x7FFFFFFFu) > 0xA;
  }
  return result;
}
