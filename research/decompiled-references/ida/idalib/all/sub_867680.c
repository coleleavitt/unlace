__int64 __fastcall sub_867680(char *a1)
{
  char v1; // cl
  __int64 result; // rax
  __int16 v3; // ax

  v1 = *a1;
  switch ( *a1 )
  {
    case 'b':
    case 'd':
      result = 2;
      break;
    case 'c':
    case 'e':
    case 'f':
    case 'g':
      result = 1;
      break;
    case 'h':
    case 'i':
      v3 = *(_WORD *)(a1 + 3);
      if ( v3 )
      {
        result = (unsigned __int16)__ROL2__(v3, 8) - (unsigned int)(unsigned __int16)__ROL2__(*(_WORD *)(a1 + 1), 8);
        if ( (v1 != 104) < (unsigned int)result )
          result = 2;
      }
      else
      {
        result = (unsigned int)(v1 == 104) + 1;
      }
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
