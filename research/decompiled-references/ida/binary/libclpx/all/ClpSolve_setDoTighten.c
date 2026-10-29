__int64 __fastcall ClpSolve_setDoTighten(__int64 a1, int a2)
{
  int v2; // edx
  __int64 result; // rax
  unsigned int v4; // edx

  v2 = *(_DWORD *)(a1 + 72);
  result = v2 | 0x10u;
  v4 = v2 & 0xFFFFFFEF;
  if ( a2 )
    result = v4;
  *(_DWORD *)(a1 + 72) = result;
  return result;
}

