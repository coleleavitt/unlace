char *__fastcall sub_B09040(__int64 a1)
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
      result = "aligned";
      break;
    case 3:
      result = "align";
      break;
    case 4:
      result = "alignas";
      break;
    case 5:
      result = "_Alignas";
      break;
  }
  return result;
}
