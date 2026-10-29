__int16 __fastcall ClpSolve_setDoSingletonColumn(__int64 a1, int a2)
{
  int v2; // eax
  int v3; // edx

  v2 = *(_DWORD *)(a1 + 72);
  v3 = v2;
  BYTE1(v2) |= 2u;
  BYTE1(v3) &= ~2u;
  if ( a2 )
    v2 = v3;
  *(_DWORD *)(a1 + 72) = v2;
  return v2;
}

