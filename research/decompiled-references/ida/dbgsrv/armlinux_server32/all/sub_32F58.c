/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32F58
// Address: 0x00032F58

//----- (00032F58) --------------------------------------------------------
int __fastcall sub_32F58(int *a1, int a2, __int64 a3)
{
  _DWORD *v4; // r8
  int v7; // r0
  char *v8; // r1
  char *v9; // r1
  int v10; // r6
  int v11; // r3
  char *v12; // r0
  char *v13; // r2

  v4 = (_DWORD *)a1[2];
  v7 = v4[4];
  v8 = (char *)v4[3];
  if ( (unsigned int)(v7 + 1) > v4[5] )
  {
    v8 = (char *)sub_78018((int)(v4 + 3), v8, v7 + 1, 0x18u);
    v7 = v4[4];
    v4[3] = v8;
  }
  v9 = &v8[24 * v7];
  *((_DWORD *)v9 + 3) = 0;
  *((_DWORD *)v9 + 4) = 0;
  *((_DWORD *)v9 + 5) = 0;
  ++v4[4];
  *(_QWORD *)v9 = a3;
  *((_DWORD *)v9 + 2) = *(_DWORD *)(a1[2] + 44);
  v10 = a1[2];
  v11 = *(_DWORD *)(v10 + 44);
  if ( (unsigned int)(v11 + 1) > *(_DWORD *)(v10 + 48) )
  {
    v12 = (char *)sub_78018(v10 + 40, *(void **)(v10 + 40), v11 + 1, 0xCu);
    v11 = *(_DWORD *)(v10 + 44);
    *(_DWORD *)(v10 + 40) = v12;
  }
  else
  {
    v12 = *(char **)(v10 + 40);
  }
  v13 = &v12[12 * v11];
  *(_DWORD *)v13 = 0;
  *((_DWORD *)v13 + 1) = 0;
  *((_DWORD *)v13 + 2) = 0;
  ++*(_DWORD *)(v10 + 44);
  return sub_32788(a1[1], (int)v13, a1[3], *(_DWORD *)(a2 + 4));
}
