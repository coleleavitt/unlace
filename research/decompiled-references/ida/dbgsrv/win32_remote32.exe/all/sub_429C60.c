/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429C60
// Address: 0x00429C60

//----- (00429C60) --------------------------------------------------------
int __stdcall sub_429C60(int a1)
{
  int v2; // eax
  int v3; // esi
  _DWORD *v4; // ecx
  int v5; // ebp
  int v6; // edx
  bool v7; // zf
  int v8; // ebx
  unsigned int v9; // eax
  int v10; // edx
  int v11; // eax
  unsigned int v12; // eax
  int v13; // esi
  unsigned int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v18; // [esp+14h] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 164);
  v3 = a1 + 160;
  v4 = *(_DWORD **)(a1 + 160);
  v5 = v4[v2 - 1];
  if ( v2 )
    *(_DWORD *)(a1 + 164) = --v2;
  v6 = v4[v2 - 1];
  v18 = v6;
  if ( v2 )
  {
    v7 = v2-- == 1;
    *(_DWORD *)(a1 + 164) = v2;
    v8 = v4[v2 - 1];
    if ( !v7 )
    {
      --v2;
      v3 = a1 + 160;
      *(_DWORD *)(a1 + 164) = v2;
    }
  }
  else
  {
    v8 = v6;
  }
  v9 = v2 + 1;
  v10 = v5 + 4;
  if ( v9 > *(_DWORD *)(v3 + 8) )
  {
    *(_DWORD *)v3 = sub_453B00(v3, v4, v9, 4u);
    v10 = v5 + 4;
  }
  *(_DWORD *)(*(_DWORD *)v3 + 4 * *(_DWORD *)(v3 + 4)) = v10;
  v11 = *(_DWORD *)(v3 + 4) + 1;
  *(_DWORD *)(v3 + 4) = v11;
  v12 = v11 + 1;
  if ( v12 > *(_DWORD *)(v3 + 8) )
    *(_DWORD *)v3 = sub_453B00(v3, *(void **)v3, v12, 4u);
  *(_DWORD *)(*(_DWORD *)v3 + 4 * (*(_DWORD *)(v3 + 4))++) = v18;
  if ( v18 )
  {
    v13 = *(_DWORD *)(a1 + 104);
    *(_BYTE *)(a1 + 112) = -85;
    v14 = *(_DWORD *)(v13 + 4) + 1;
    if ( v14 > *(_DWORD *)(v13 + 8) )
      *(_DWORD *)v13 = sub_453B00(v13, *(void **)v13, v14, 1u);
    *(_BYTE *)(*(_DWORD *)v13 + (*(_DWORD *)(v13 + 4))++) = -85;
    v15 = *(_DWORD *)(a1 + 108) + 1;
    *(_DWORD *)(a1 + 108) = v15;
    v16 = v8 - v15 - 4;
    sub_42E320((int *)a1, v16);
    sub_42E320((int *)a1, SHIWORD(v16));
  }
  sub_428740(*(_DWORD **)(a1 + 104), v5, *(_DWORD *)(a1 + 108) - v5 - 4);
  return 0;
}
