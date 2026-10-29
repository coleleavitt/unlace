const char *__fastcall sub_22B0A20(unsigned int a1)
{
  char **v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rax
  char **v5; // rcx

  switch ( a1 )
  {
    case '?':
    case 'D':
      return "gfx9";
    case '@':
    case 'A':
      return "gfx10";
    case 'B':
      return "gfx11";
    case 'C':
      return "gfx12";
    default:
      v2 = &off_2BF5820;
      v3 = 70;
      break;
  }
  while ( 1 )
  {
    v4 = v3 >> 1;
    v5 = &v2[5 * (v3 >> 1)];
    if ( a1 <= *((_DWORD *)v5 + 8) )
      break;
    v2 = v5 + 5;
    v4 = v3 - v4 - 1;
    if ( v4 <= 0 )
      goto LABEL_11;
LABEL_8:
    v3 = v4;
  }
  if ( v4 )
    goto LABEL_8;
LABEL_11:
  if ( v2 != (char **)&unk_2BF6310 && a1 == *((_DWORD *)v2 + 8) && v2[3] )
    return v2[2];
  else
    return &byte_22F0C30;
}
