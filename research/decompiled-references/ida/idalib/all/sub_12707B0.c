__int64 __fastcall sub_12707B0(__int64 a1)
{
  unsigned int v1; // eax
  int v2; // edx

  v2 = *(_DWORD *)(a1 + 48);
  LOBYTE(v1) = v2 == 3;
  LOBYTE(v2) = v2 == 38;
  return v2 | v1;
}
