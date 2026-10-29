char __fastcall sub_1526F60(__int64 a1)
{
  unsigned __int64 v1; // r9
  unsigned int *v2; // rbp
  unsigned int v4; // r12d
  __int64 v5; // rdi
  int v6; // eax
  __int64 *v7; // rdi
  __int64 v9; // rax

  v1 = 0;
  v2 = *(unsigned int **)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 96);
  if ( *((_WORD *)v2 + 20) != 7 )
    goto LABEL_2;
  v9 = sub_18F1880(v5, v2 + 6, 0);
  if ( v9 != 1 )
  {
    v5 = *(_QWORD *)(a1 + 96);
    v1 = v9 & 0xFFFFFFFFFFFFFFFELL;
LABEL_2:
    sub_166A770(v5, v4, *v2, *((_QWORD *)v2 + 1), *((_QWORD *)v2 + 2), v1);
  }
  v6 = *(_DWORD *)(a1 + 20);
  v7 = *(__int64 **)(a1 + 8);
  if ( !v6 )
    v6 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v6;
  return sub_14634E0(v7, (int *)(a1 + 16));
}
