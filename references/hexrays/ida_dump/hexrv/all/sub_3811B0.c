bool __fastcall sub_3811B0(__int64 a1, __int64 a2, char *a3)
{
  int v3; // eax

  v3 = sub_381020(a3, (const char *)*(unsigned int *)(a1 + 20));
  *(_DWORD *)(a1 + 20) = v3;
  return v3 != 0;
}
