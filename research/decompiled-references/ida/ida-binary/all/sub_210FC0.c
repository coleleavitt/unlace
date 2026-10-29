bool __fastcall sub_210FC0(__int64 a1, char a2)
{
  int v2; // ebp
  char v3; // si
  unsigned int v4; // ebx
  bool result; // al

  v2 = 4;
  v3 = *(_BYTE *)(a1 + 153) | a2;
  v4 = 1;
  *(_BYTE *)(a1 + 153) = v3;
  while ( 1 )
  {
    result = sub_210D40((unsigned int *)a1, v4, (v4 & v3) == 0 ? -1 : 1, 0);
    if ( !--v2 )
      break;
    v3 = *(_BYTE *)(a1 + 153);
    v4 *= 2;
  }
  return result;
}
