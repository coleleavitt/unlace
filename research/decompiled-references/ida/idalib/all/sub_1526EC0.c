char __fastcall sub_1526EC0(__int64 a1)
{
  int *v1; // rbp
  int v2; // eax
  unsigned int v4; // r12d
  __int64 *v5; // rdi

  v1 = (int *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 20);
  v4 = *(_DWORD *)(a1 + 16);
  if ( !v2 )
    v2 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v2;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  sub_166CCF0(*(_QWORD *)(a1 + 96), v1, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v4);
  v5 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  return sub_14634E0(v5, v1);
}
