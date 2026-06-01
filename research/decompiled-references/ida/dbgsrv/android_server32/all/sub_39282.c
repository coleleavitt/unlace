/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39282
// Address: 0x00039282

//----- (00039282) --------------------------------------------------------
int __fastcall sub_39282(int a1, unsigned int a2, unsigned int a3)
{
  char v5; // r6
  int v6; // r5
  int v7; // r1
  _BYTE *v8; // r0
  unsigned int v9; // r7
  char v10; // r7
  int v11; // r6
  int v12; // r1
  _BYTE *v13; // r0
  char v14; // r7
  int v15; // r6
  int v16; // r1
  _BYTE *v17; // r0
  int v18; // r6
  int v19; // r1
  _BYTE *v20; // r0
  int result; // r0

  if ( a3 <= 0xF )
  {
    v5 = a3 + a2;
    *(_BYTE *)(a1 + 120) = a3 + a2;
    v6 = *(_DWORD *)(a1 + 112);
    v7 = *(_DWORD *)(v6 + 4);
    if ( *(_DWORD *)(v6 + 8) >= (unsigned int)(v7 + 1) )
    {
      v8 = *(_BYTE **)v6;
    }
    else
    {
      v8 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v6, v7 + 1, 1u);
      *(_DWORD *)v6 = v8;
      v7 = *(_DWORD *)(v6 + 4);
    }
    v8[v7] = v5;
    ++*(_DWORD *)(v6 + 4);
LABEL_18:
    result = *(_DWORD *)(a1 + 116) + 1;
    *(_DWORD *)(a1 + 116) = result;
    return result;
  }
  v9 = a2 >> 3;
  if ( a3 <= 0xFF )
  {
    v10 = v9 + 0x80;
    *(_BYTE *)(a1 + 120) = v10;
    v11 = *(_DWORD *)(a1 + 112);
    v12 = *(_DWORD *)(v11 + 4);
    if ( *(_DWORD *)(v11 + 8) >= (unsigned int)(v12 + 1) )
    {
      v13 = *(_BYTE **)v11;
    }
    else
    {
      v13 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v11, v12 + 1, 1u);
      *(_DWORD *)v11 = v13;
      v12 = *(_DWORD *)(v11 + 4);
    }
    v13[v12] = v10;
    ++*(_DWORD *)(v11 + 4);
    ++*(_DWORD *)(a1 + 116);
    v18 = *(_DWORD *)(a1 + 112);
    v19 = *(_DWORD *)(v18 + 4);
    if ( *(_DWORD *)(v18 + 8) >= (unsigned int)(v19 + 1) )
    {
      v20 = *(_BYTE **)v18;
    }
    else
    {
      v20 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v18, v19 + 1, 1u);
      *(_DWORD *)v18 = v20;
      v19 = *(_DWORD *)(v18 + 4);
    }
    v20[v19] = a3;
    ++*(_DWORD *)(v18 + 4);
    goto LABEL_18;
  }
  v14 = v9 - 127;
  *(_BYTE *)(a1 + 120) = v14;
  v15 = *(_DWORD *)(a1 + 112);
  v16 = *(_DWORD *)(v15 + 4);
  if ( *(_DWORD *)(v15 + 8) >= (unsigned int)(v16 + 1) )
  {
    v17 = *(_BYTE **)v15;
  }
  else
  {
    v17 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v15, v16 + 1, 1u);
    *(_DWORD *)v15 = v17;
    v16 = *(_DWORD *)(v15 + 4);
  }
  v17[v16] = v14;
  ++*(_DWORD *)(v15 + 4);
  ++*(_DWORD *)(a1 + 116);
  return sub_390C4(a1, a3);
}
