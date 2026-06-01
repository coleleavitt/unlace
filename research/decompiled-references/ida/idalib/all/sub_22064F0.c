__int64 __fastcall sub_22064F0(_BYTE *a1, __int64 a2, char a3)
{
  _BOOL4 v3; // ecx
  unsigned __int64 v4; // rax

  v3 = 0;
  if ( ((*a1 - 43) & 0xFD) == 0 )
  {
    v3 = *a1 == 45;
    --a2;
  }
  switch ( a3 )
  {
    case 2:
      return (unsigned int)(a2 + v3);
    case 8:
      LODWORD(a2) = 3 * a2;
      return (unsigned int)(a2 + v3);
    case 16:
      return (unsigned int)(v3 + 4 * a2);
    case 10:
      LODWORD(v4) = 4;
      if ( a2 != 1 )
        v4 = (a2 << 6) / 0x12uLL;
      break;
    default:
      LODWORD(v4) = 7;
      if ( a2 != 1 )
        v4 = 16 * a2 / 3uLL;
      break;
  }
  return (unsigned int)(v3 + v4);
}
