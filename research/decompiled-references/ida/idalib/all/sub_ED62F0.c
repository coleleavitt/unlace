bool __fastcall sub_ED62F0(_DWORD *a1)
{
  int v1; // edx
  bool result; // al

  v1 = a1[65];
  if ( a1[62] != 38 || a1[64] != 3 || (result = 1, (unsigned int)(v1 - 24) > 1) )
  {
    result = 0;
    if ( v1 == 15 && a1[66] == 28 )
      return a1[64] == 3;
  }
  return result;
}
