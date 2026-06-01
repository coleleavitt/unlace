/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3ADF0
// Address: 0x0003ADF0

//----- (0003ADF0) --------------------------------------------------------
char __cdecl sub_3ADF0(_DWORD *a1, int a2)
{
  size_t v2; // esi
  void *v3; // eax
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // eax
  size_t v7; // edi
  void *v8; // eax
  size_t v9; // edx
  char result; // al
  __int64 v11; // xmm0_8
  size_t v12; // [esp+18h] [ebp-14h]

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 )
  {
    v3 = qalloc_or_throw(*(_DWORD *)(a2 + 4));
    *a1 = v3;
    a1[2] = v2;
    memcpy(v3, *(const void **)a2, v2);
    a1[1] = v2;
  }
  sub_42670(a1 + 3, (int *)(a2 + 12));
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  v4 = a1;
  v5 = a2;
  v6 = *(_DWORD *)(a2 + 28);
  if ( v6 )
  {
    v7 = *(_DWORD *)(a2 + 28);
    v8 = qalloc_or_throw(v6);
    v4 = a1;
    a1[6] = v8;
    v9 = v7;
    v12 = v7;
    a1[8] = v7;
    v5 = a2;
    memcpy(v8, *(const void **)(a2 + 24), v9);
    a1[7] = v12;
  }
  result = *(_BYTE *)(v5 + 60);
  *((_BYTE *)v4 + 60) = result;
  *(_QWORD *)(v4 + 13) = *(_QWORD *)(v5 + 52);
  v11 = *(_QWORD *)(v5 + 36);
  *(_QWORD *)(v4 + 11) = *(_QWORD *)(v5 + 44);
  *(_QWORD *)(v4 + 9) = v11;
  return result;
}
