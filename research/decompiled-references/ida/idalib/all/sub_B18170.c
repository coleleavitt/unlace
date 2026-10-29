char *__fastcall sub_B18170(__int64 a1)
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
      result = "release_capability";
      break;
    case 2:
    case 3:
      result = "release_shared_capability";
      break;
    case 4:
    case 5:
      result = "release_generic_capability";
      break;
    case 6:
    case 7:
      result = "unlock_function";
      break;
  }
  return result;
}
