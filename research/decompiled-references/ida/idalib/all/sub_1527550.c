char __fastcall sub_1527550(__int64 a1)
{
  int *v1; // rbp
  int v2; // eax
  unsigned int v4; // r12d
  __int16 v5; // ax
  __int64 v6; // rsi
  __int64 *v7; // rdi

  v1 = (int *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 20);
  v4 = *(_DWORD *)(a1 + 16);
  if ( !v2 )
    v2 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v2;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v5 = *(_WORD *)(a1 + 32);
  v6 = 0;
  if ( (unsigned __int16)(v5 - 7) > 0xCu && v5 != 1 )
    v6 = *(_QWORD *)(a1 + 24);
  sub_17F10F0(*(_QWORD *)(a1 + 96), v6, v4, *(unsigned int *)(a1 + 16));
  v7 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  return sub_14634E0(v7, v1);
}
