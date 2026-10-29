/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4FD90
// Address: 0x0004FD90

//----- (0004FD90) --------------------------------------------------------
int __fastcall sub_4FD90(int a1, int a2)
{
  size_t v4; // r5
  void *v5; // r6
  __int16 v6; // r7
  int v7; // r1
  char *v8; // r0
  int v9; // r1
  char *v10; // r0
  int result; // r0

  v4 = *(_DWORD *)(a2 + 4);
  v5 = nullptr;
  if ( v4 )
  {
    v5 = qalloc_or_throw(*(_DWORD *)(a2 + 4));
    qmemcpy(v5, *(const void **)a2, v4);
  }
  v6 = *(_WORD *)(a2 + 12);
  v7 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v7 + 1) )
  {
    v8 = *(char **)a1;
  }
  else
  {
    v8 = (char *)qvector_reserve(a1, *(void **)a1, v7 + 1, 0x10u);
    *(_DWORD *)a1 = v8;
    v7 = *(_DWORD *)(a1 + 4);
  }
  v9 = 16 * v7;
  *(_DWORD *)&v8[v9] = v5;
  v10 = &v8[v9];
  *((_DWORD *)v10 + 1) = v4;
  *((_DWORD *)v10 + 2) = v4;
  *((_WORD *)v10 + 6) = v6;
  result = *(_DWORD *)(a1 + 4) + 1;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
