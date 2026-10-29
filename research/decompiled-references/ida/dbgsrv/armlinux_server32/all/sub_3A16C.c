/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A16C
// Address: 0x0003A16C

//----- (0003A16C) --------------------------------------------------------
int __fastcall sub_3A16C(int a1)
{
  int v1; // r5
  int v3; // r3
  _BYTE *v4; // r0
  int v5; // r5
  __int64 v6; // kr08_8
  int v7; // r2
  int v8; // r3
  _DWORD *v9; // r0

  v1 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = -85;
  v3 = *(_DWORD *)(v1 + 4);
  if ( (unsigned int)(v3 + 1) > *(_DWORD *)(v1 + 8) )
  {
    v4 = sub_78018(v1, *(void **)v1, v3 + 1, 1u);
    v3 = *(_DWORD *)(v1 + 4);
    *(_DWORD *)v1 = v4;
  }
  else
  {
    v4 = *(_BYTE **)v1;
  }
  v4[v3] = -85;
  ++*(_DWORD *)(v1 + 4);
  v5 = *(_DWORD *)(a1 + 116) + 1;
  *(_DWORD *)(a1 + 116) = v5;
  sub_39CA8(a1, 0);
  sub_39CA8(a1, 0);
  v6 = *(_QWORD *)(a1 + 132);
  v7 = *(_DWORD *)(v6 + 4 * (HIDWORD(v6) + 0x3FFFFFFF));
  if ( HIDWORD(v6) )
    *(_DWORD *)(a1 + 136) = HIDWORD(v6) - 1;
  sub_3E73C(*(int **)(a1 + 112), v7, *(_DWORD *)(a1 + 116) - 4 - v7);
  v8 = *(_DWORD *)(a1 + 136);
  if ( (unsigned int)(v8 + 1) > *(_DWORD *)(a1 + 140) )
  {
    v9 = sub_78018(a1 + 132, *(void **)(a1 + 132), v8 + 1, 4u);
    v8 = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 132) = v9;
  }
  else
  {
    v9 = *(_DWORD **)(a1 + 132);
  }
  v9[v8] = v5;
  ++*(_DWORD *)(a1 + 136);
  return 0;
}
