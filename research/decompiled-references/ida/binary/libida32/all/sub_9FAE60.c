__int64 __fastcall sub_9FAE60(_WORD *a1, unsigned __int8 a2, char a3)
{
  int v3; // r8d
  char v4; // al
  int v5; // esi
  __int16 v6; // dx
  unsigned int v7; // r8d

  v3 = -(1 << a3);
  v4 = *a1 & ((1 << a3) - 1) | ((unsigned __int8)(a2 & ((1 << (8 - a3)) - 1)) << a3);
  v5 = ((1 << a3) - 1) & ((int)a2 >> (8 - a3));
  LOBYTE(v6) = v4;
  v7 = v5 | (unsigned __int8)(HIBYTE(*a1) & v3);
  HIBYTE(v6) = v7;
  *a1 = v6;
  return v7;
}

