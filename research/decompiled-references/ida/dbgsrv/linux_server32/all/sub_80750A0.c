/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80750A0
// Address: 0x080750A0

//----- (080750A0) --------------------------------------------------------
int __cdecl sub_80750A0(int a1)
{
  char *v1; // edx
  int v2; // edi
  __int64 v3; // xmm0_8
  int v4; // ebp
  int v5; // eax
  char *v6; // eax
  int v7; // edx
  int v8; // eax
  char *v10; // eax
  int v11; // [esp+0h] [ebp-28h]
  __int64 v12; // [esp+4h] [ebp-24h]

  v1 = *(char **)(a1 + 212);
  v2 = *(_DWORD *)(a1 + 200) + 16 * (*(_DWORD *)(a1 + 204) + 0xFFFFFFF);
  v3 = *(_QWORD *)v2;
  v4 = *(_DWORD *)(v2 + 8);
  v11 = *(_DWORD *)(v2 + 12);
  v5 = *(_DWORD *)(a1 + 216);
  if ( *(_DWORD *)(a1 + 220) < (unsigned int)(v5 + 1) )
  {
    v12 = *(_QWORD *)(*(_DWORD *)(a1 + 200) + 16 * (*(_DWORD *)(a1 + 204) + 0xFFFFFFF));
    v10 = (char *)sub_80CF920(a1 + 212, v1, v5 + 1, 0x10u);
    *(_DWORD *)(a1 + 212) = v10;
    v1 = v10;
    v5 = *(_DWORD *)(a1 + 216);
  }
  v6 = &v1[16 * v5];
  *((_DWORD *)v6 + 2) = v4;
  *((_DWORD *)v6 + 3) = v11;
  *(_QWORD *)v6 = v3;
  v7 = *(_DWORD *)(a1 + 112);
  ++*(_DWORD *)(a1 + 216);
  sub_807FB60(*(int **)(a1 + 108), *(_DWORD *)(v2 + 4) - 4, v7 - *(_DWORD *)(v2 + 4));
  v8 = *(_DWORD *)(a1 + 204);
  if ( v8 )
    *(_DWORD *)(a1 + 204) = v8 - 1;
  return 0;
}
