/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_391D4
// Address: 0x000391D4

//----- (000391D4) --------------------------------------------------------
int __fastcall sub_391D4(int a1, char a2, unsigned int a3)
{
  int v6; // r7
  int v7; // r1
  _BYTE *v8; // r0
  char v9; // r7
  int v10; // r6
  int v11; // r1
  _BYTE *v12; // r0
  int v13; // r6
  int v14; // r1
  _BYTE *v15; // r0
  int result; // r0

  if ( a3 > 0xFF )
  {
    v9 = a2 + 1;
    *(_BYTE *)(a1 + 120) = a2 + 1;
    v10 = *(_DWORD *)(a1 + 112);
    v11 = *(_DWORD *)(v10 + 4);
    if ( *(_DWORD *)(v10 + 8) >= (unsigned int)(v11 + 1) )
    {
      v12 = *(_BYTE **)v10;
    }
    else
    {
      v12 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v10, v11 + 1, 1u);
      *(_DWORD *)v10 = v12;
      v11 = *(_DWORD *)(v10 + 4);
    }
    v12[v11] = v9;
    ++*(_DWORD *)(v10 + 4);
    ++*(_DWORD *)(a1 + 116);
    return sub_390C4(a1, a3);
  }
  else
  {
    *(_BYTE *)(a1 + 120) = a2;
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
    v8[v7] = a2;
    ++*(_DWORD *)(v6 + 4);
    ++*(_DWORD *)(a1 + 116);
    v13 = *(_DWORD *)(a1 + 112);
    v14 = *(_DWORD *)(v13 + 4);
    if ( *(_DWORD *)(v13 + 8) >= (unsigned int)(v14 + 1) )
    {
      v15 = *(_BYTE **)v13;
    }
    else
    {
      v15 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v13, v14 + 1, 1u);
      *(_DWORD *)v13 = v15;
      v14 = *(_DWORD *)(v13 + 4);
    }
    v15[v14] = a3;
    ++*(_DWORD *)(v13 + 4);
    result = *(_DWORD *)(a1 + 116) + 1;
    *(_DWORD *)(a1 + 116) = result;
  }
  return result;
}
