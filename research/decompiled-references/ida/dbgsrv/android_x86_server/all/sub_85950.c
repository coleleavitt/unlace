/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85950
// Address: 0x00085950

//----- (00085950) --------------------------------------------------------
int __cdecl sub_85950(int a1, int a2)
{
  int v2; // edi
  int v3; // eax
  char *v4; // esi
  int v5; // ecx
  int v6; // edi
  _DWORD *v7; // eax
  const char *v8; // eax

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(v2 + 56);
  if ( *(_DWORD *)(v2 + 60) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(char **)(v2 + 52);
  }
  else
  {
    v4 = (char *)qvector_reserve(v2 + 52, *(void **)(v2 + 52), v3 + 1, 0x64u);
    *(_DWORD *)(v2 + 52) = v4;
    v3 = *(_DWORD *)(v2 + 56);
  }
  v5 = v2;
  v6 = 100 * v3;
  *(_DWORD *)&v4[v6 + 12] = 0;
  *(_DWORD *)&v4[v6 + 16] = 0;
  *(_DWORD *)&v4[v6 + 20] = 0;
  *(_DWORD *)&v4[v6 + 4] = 0;
  *(_DWORD *)&v4[v6] = 0;
  *(_DWORD *)&v4[v6 + 8] = 0;
  *(_DWORD *)&v4[v6 + 28] = 0;
  *(_DWORD *)&v4[v6 + 24] = 0;
  *(_DWORD *)&v4[v6 + 36] = 0;
  *(_DWORD *)&v4[v6 + 32] = 0;
  *(_DWORD *)&v4[v6 + 44] = 0;
  *(_DWORD *)&v4[v6 + 40] = 0;
  *(_DWORD *)&v4[v6 + 52] = 0;
  *(_DWORD *)&v4[v6 + 48] = 0;
  *(_DWORD *)&v4[v6 + 60] = 0;
  *(_DWORD *)&v4[v6 + 56] = 0;
  *(_DWORD *)&v4[v6 + 68] = 0;
  *(_DWORD *)&v4[v6 + 64] = 0;
  *(_DWORD *)&v4[v6 + 76] = 0;
  *(_DWORD *)&v4[v6 + 72] = 0;
  *(_DWORD *)&v4[v6 + 84] = 0;
  *(_DWORD *)&v4[v6 + 80] = 0;
  *(_DWORD *)&v4[v6 + 96] = 0;
  *(_DWORD *)&v4[v6 + 92] = 0;
  *(_DWORD *)&v4[v6 + 88] = 0;
  ++*(_DWORD *)(v5 + 56);
  v7 = *(_DWORD **)(a1 + 8);
  *(_DWORD *)&v4[v6] = *(_DWORD *)(a2 + 12);
  *(_DWORD *)&v4[v6 + 4] = 0;
  *(_DWORD *)&v4[v6 + 8] = *(_DWORD *)(a2 + 8);
  *(_DWORD *)&v4[v6 + 24] = 0;
  *(_DWORD *)&v4[v6 + 28] = 0;
  *(_QWORD *)&v4[v6 + 32] = *(int *)(a2 + 20);
  sub_79700((int)&v4[v6 + 12], (_QWORD *)a2, v7);
  *(_DWORD *)&v4[v6 + 44] = 0;
  *(_DWORD *)&v4[v6 + 40] = 0;
  *(_DWORD *)&v4[v6 + 52] = 0;
  *(_DWORD *)&v4[v6 + 48] = 0;
  if ( *(_DWORD *)&v4[v6 + 16] )
    v8 = *(const char **)&v4[v6 + 12];
  else
    v8 = byte_EF875;
  if ( !strncmp(v8, ".debug_", 7u) )
    *(_BYTE *)(a1 + 12) = 1;
  return 0;
}
