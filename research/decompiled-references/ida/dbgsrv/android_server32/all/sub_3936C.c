/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3936C
// Address: 0x0003936C

//----- (0003936C) --------------------------------------------------------
int __fastcall sub_3936C(int a1, unsigned int a2)
{
  unsigned int v2; // r5
  int v4; // r6
  int v5; // r1
  _BYTE *v6; // r0
  int v7; // r6
  int v8; // r1
  _BYTE *v9; // r0
  int v10; // r6
  int v11; // r1
  _BYTE *v12; // r0
  int result; // r0
  int v14; // r6
  int v15; // r1
  _BYTE *v16; // r0
  int v17; // r0
  unsigned int v18; // r1

  v2 = a2;
  if ( a2 <= 0xF )
  {
    LOBYTE(v2) = a2 - 32;
    *(_BYTE *)(a1 + 120) = a2 - 32;
LABEL_11:
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
    v12[v11] = v2;
    ++*(_DWORD *)(v10 + 4);
    result = *(_DWORD *)(a1 + 116) + 1;
    *(_DWORD *)(a1 + 116) = result;
    return result;
  }
  if ( a2 <= 0xFF )
  {
    *(_BYTE *)(a1 + 120) = -96;
    v4 = *(_DWORD *)(a1 + 112);
    v5 = *(_DWORD *)(v4 + 4);
    if ( *(_DWORD *)(v4 + 8) >= (unsigned int)(v5 + 1) )
    {
      v6 = *(_BYTE **)v4;
    }
    else
    {
      v6 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v4, v5 + 1, 1u);
      *(_DWORD *)v4 = v6;
      v5 = *(_DWORD *)(v4 + 4);
    }
    v6[v5] = -96;
    ++*(_DWORD *)(v4 + 4);
    ++*(_DWORD *)(a1 + 116);
    goto LABEL_11;
  }
  if ( (a2 + 0x8000) >> 16 )
  {
    *(_BYTE *)(a1 + 120) = -89;
    v14 = *(_DWORD *)(a1 + 112);
    v15 = *(_DWORD *)(v14 + 4);
    if ( *(_DWORD *)(v14 + 8) >= (unsigned int)(v15 + 1) )
    {
      v16 = *(_BYTE **)v14;
    }
    else
    {
      v16 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v14, v15 + 1, 1u);
      *(_DWORD *)v14 = v16;
      v15 = *(_DWORD *)(v14 + 4);
    }
    v16[v15] = -89;
    ++*(_DWORD *)(v14 + 4);
    ++*(_DWORD *)(a1 + 116);
    sub_390C4(a1, (unsigned __int16)v2);
    v18 = HIWORD(v2);
    v17 = a1;
  }
  else
  {
    *(_BYTE *)(a1 + 120) = -95;
    v7 = *(_DWORD *)(a1 + 112);
    v8 = *(_DWORD *)(v7 + 4);
    if ( *(_DWORD *)(v7 + 8) >= (unsigned int)(v8 + 1) )
    {
      v9 = *(_BYTE **)v7;
    }
    else
    {
      v9 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v7, v8 + 1, 1u);
      *(_DWORD *)v7 = v9;
      v8 = *(_DWORD *)(v7 + 4);
    }
    v9[v8] = -95;
    ++*(_DWORD *)(v7 + 4);
    ++*(_DWORD *)(a1 + 116);
    v17 = a1;
    v18 = (unsigned __int16)v2;
  }
  return sub_390C4(v17, v18);
}
