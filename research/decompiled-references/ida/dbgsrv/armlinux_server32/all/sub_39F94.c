/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39F94
// Address: 0x00039F94

//----- (00039F94) --------------------------------------------------------
int __fastcall sub_39F94(int a1)
{
  int v1; // r5
  int v3; // r3
  _BYTE *v4; // r0
  unsigned int v5; // r0
  int v6; // r1
  _DWORD *v7; // r0
  __int64 v8; // kr10_8
  int v9; // r5
  int v10; // r3
  _DWORD *v11; // r0

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
  v5 = *(_DWORD *)(a1 + 176);
  v6 = *(_DWORD *)(a1 + 172);
  ++*(_DWORD *)(a1 + 116);
  if ( v6 + 1 > v5 )
  {
    v7 = sub_78018(a1 + 168, *(void **)(a1 + 168), v6 + 1, 4u);
    v6 = *(_DWORD *)(a1 + 172);
    *(_DWORD *)(a1 + 168) = v7;
  }
  else
  {
    v7 = *(_DWORD **)(a1 + 168);
  }
  v7[v6] = 0;
  v8 = *(_QWORD *)(a1 + 172);
  v9 = *(_DWORD *)(a1 + 116);
  v10 = v8 + 1;
  *(_DWORD *)(a1 + 172) = v8 + 1;
  if ( (unsigned int)(v8 + 2) > HIDWORD(v8) )
  {
    v11 = sub_78018(a1 + 168, *(void **)(a1 + 168), v8 + 2, 4u);
    v10 = *(_DWORD *)(a1 + 172);
    *(_DWORD *)(a1 + 168) = v11;
  }
  else
  {
    v11 = *(_DWORD **)(a1 + 168);
  }
  v11[v10] = v9;
  ++*(_DWORD *)(a1 + 172);
  sub_8DB88(a1, 0);
  sub_39CA8(a1, 0);
  return 0;
}
