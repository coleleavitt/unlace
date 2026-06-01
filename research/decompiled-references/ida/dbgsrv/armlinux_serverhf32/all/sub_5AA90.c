/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AA90
// Address: 0x0005AA90

//----- (0005AA90) --------------------------------------------------------
int __fastcall sub_5AA90(int a1, _DWORD *a2)
{
  int v3; // r5
  int v5; // r6
  char *v6; // r8
  char *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r2
  int v10; // r5
  int v11; // r1
  const char *v12; // r0

  v3 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)(v3 + 56);
  v6 = *(char **)(v3 + 52);
  if ( (unsigned int)(v5 + 1) > *(_DWORD *)(v3 + 60) )
  {
    v7 = (char *)sub_77EB0(v3 + 52, *(void **)(v3 + 52), v5 + 1, 0x68u);
    v5 = *(_DWORD *)(v3 + 56);
    v6 = v7;
    *(_DWORD *)(v3 + 52) = v7;
  }
  v8 = &v6[104 * v5];
  memset(v8, 0, 0x68u);
  ++*(_DWORD *)(v3 + 56);
  v9 = *(_DWORD **)(a1 + 8);
  *(_DWORD *)v8 = a2[3];
  *((_DWORD *)v8 + 1) = 0;
  v10 = a2[2];
  *((_DWORD *)v8 + 6) = 0;
  *((_DWORD *)v8 + 7) = 0;
  *((_DWORD *)v8 + 2) = v10;
  *((_QWORD *)v8 + 4) = (int)a2[5];
  sub_5A9B0((int)(v8 + 12), a2, v9);
  v11 = *((_DWORD *)v8 + 4);
  *((_QWORD *)v8 + 5) = 0;
  *((_QWORD *)v8 + 6) = 0;
  if ( v11 )
    v12 = *((const char **)v8 + 3);
  else
    v12 = (const char *)&dword_8DA5C;
  if ( !strncmp(v12, ".debug_", 7u) )
    *(_BYTE *)(a1 + 12) = 1;
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
