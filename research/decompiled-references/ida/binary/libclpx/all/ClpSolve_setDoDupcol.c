char __fastcall ClpSolve_setDoDupcol(__int64 a1, int a2)
{
  int v2; // eax
  int v3; // edx

  v2 = *(_DWORD *)(a1 + 72);
  v3 = v2;
  LOBYTE(v2) = v2 | 0x80;
  LOBYTE(v3) = v3 & 0x7F;
  if ( a2 )
    v2 = v3;
  *(_DWORD *)(a1 + 72) = v2;
  return v2;
}

