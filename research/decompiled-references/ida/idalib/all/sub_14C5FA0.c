__int64 __fastcall sub_14C5FA0(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // r12d

  v1 = *(_QWORD *)(a1 + 96);
  v2 = *(unsigned __int16 *)(a1 + 32);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  return sub_19A26C0(v1, *(unsigned int *)(a1 + 40), v2);
}
