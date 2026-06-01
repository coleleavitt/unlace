/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39CA8
// Address: 0x00039CA8

//----- (00039CA8) --------------------------------------------------------
_BYTE *__fastcall sub_39CA8(int a1, unsigned int a2)
{
  void **v3; // r4
  char v5; // r7
  _BYTE *v6; // r3
  void *v7; // r1
  void *v8; // r0
  unsigned int v9; // r6
  int v10; // r4
  int v11; // r3
  _BYTE *result; // r0

  v3 = *(void ***)(a1 + 112);
  v5 = a2;
  v6 = v3[1];
  v7 = *v3;
  if ( v6 + 1 > v3[2] )
  {
    v8 = sub_78018((int)v3, v7, (unsigned int)(v6 + 1), 1u);
    v6 = v3[1];
    v7 = v8;
    *v3 = v8;
  }
  v6[(_DWORD)v7] = v5;
  v9 = a2 >> 8;
  v3[1] = (char *)v3[1] + 1;
  v10 = *(_DWORD *)(a1 + 112);
  ++*(_DWORD *)(a1 + 116);
  v11 = *(_DWORD *)(v10 + 4);
  if ( (unsigned int)(v11 + 1) > *(_DWORD *)(v10 + 8) )
  {
    result = sub_78018(v10, *(void **)v10, v11 + 1, 1u);
    v11 = *(_DWORD *)(v10 + 4);
    *(_DWORD *)v10 = result;
  }
  else
  {
    result = *(_BYTE **)v10;
  }
  result[v11] = v9;
  ++*(_DWORD *)(v10 + 4);
  ++*(_DWORD *)(a1 + 116);
  return result;
}
