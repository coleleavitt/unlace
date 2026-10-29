bool __fastcall sub_12FE940(_DWORD *a1)
{
  unsigned int v1; // ecx
  bool result; // al
  unsigned int v3; // ecx

  switch ( *a1 )
  {
    case 0:
    case 1:
      v1 = a1[1];
      result = 0;
      if ( v1 > 9 )
        result = v1 != 10 || (a1[2] & 0x7FFFFFFFu) > 6;
      break;
    case 2:
      result = a1[1] > 4u;
      break;
    case 3:
    case 6:
      result = 1;
      break;
    case 4:
      result = 0;
      break;
    case 5:
      v3 = a1[1];
      result = 0;
      if ( v3 )
        result = v3 > 1 || (a1[2] & 0x7FFFFFFFu) > 5;
      break;
  }
  return result;
}
