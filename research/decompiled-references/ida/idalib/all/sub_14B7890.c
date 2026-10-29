__int64 __fastcall sub_14B7890(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v2; // rbp

  v1 = *(unsigned __int16 *)(a1 + 32);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  return sub_19D27B0(v2, *(unsigned int *)(a1 + 40), v1);
}
