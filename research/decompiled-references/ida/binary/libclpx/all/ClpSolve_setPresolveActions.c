__int64 __fastcall ClpSolve_setPresolveActions(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a1 + 72) & 0xFF000000;
  *(_DWORD *)(a1 + 72) = result | a2 & 0xFFFFFF;
  return result;
}

