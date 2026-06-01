char *__fastcall sub_B17330(__int64 a1)
{
  int v1; // eax
  char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_FA77D0(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  switch ( v1 )
  {
    case 0:
    case 1:
    case 2:
      result = "ownership_holds";
      break;
    case 3:
    case 4:
    case 5:
      result = "ownership_returns";
      break;
    case 6:
    case 7:
    case 8:
      result = "ownership_takes";
      break;
  }
  return result;
}
