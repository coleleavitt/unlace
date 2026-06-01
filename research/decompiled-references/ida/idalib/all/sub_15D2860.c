__int64 __fastcall sub_15D2860(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  unsigned int v3; // eax

  v2 = *(_DWORD *)(a2 + 248);
  v3 = v2 - 1;
  LOBYTE(v3) = v2 - 1 <= 4;
  v2 -= 35;
  LOBYTE(v2) = v2 <= 1;
  return v2 | v3;
}
