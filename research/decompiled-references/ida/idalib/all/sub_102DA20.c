char *__fastcall sub_102DA20(__int64 a1, int a2)
{
  char *result; // rax
  unsigned __int8 v3; // dl

  switch ( a2 )
  {
    case 0:
    case 10:
      result = "ULL";
      break;
    case 1:
    case 3:
    case 5:
      result = (char *)&byte_22F0C30;
      break;
    case 2:
      v3 = *(_BYTE *)(a1 + 14);
      result = (char *)&byte_22F0C30;
      if ( v3 <= 8u )
        goto LABEL_5;
      break;
    case 4:
      v3 = *(_BYTE *)(a1 + 14);
LABEL_5:
      result = "U";
      if ( *(_BYTE *)(a1 + 12) < v3 )
        result = (char *)&byte_22F0C30;
      break;
    case 6:
      result = "U";
      break;
    case 7:
      result = (char *)"L";
      break;
    case 8:
      result = "UL";
      break;
    case 9:
      result = (char *)"LL";
      break;
  }
  return result;
}
