/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A3FC
// Address: 0x0003A3FC

//----- (0003A3FC) --------------------------------------------------------
_BYTE *__fastcall sub_3A3FC(int a1, char a2, unsigned int a3)
{
  char v3; // r8
  int v5; // r4
  char v8; // r6
  int v9; // r3
  _BYTE *v10; // r0
  _BYTE *result; // r0
  int v12; // r3
  _BYTE *v13; // r0
  int v14; // r4
  int v15; // r3

  v3 = a3;
  v5 = *(_DWORD *)(a1 + 112);
  if ( (unsigned __int8)a3 == a3 )
  {
    *(_BYTE *)(a1 + 120) = a2;
    v12 = *(_DWORD *)(v5 + 4);
    if ( (unsigned int)(v12 + 1) > *(_DWORD *)(v5 + 8) )
    {
      v13 = sub_77EB0(v5, *(void **)v5, v12 + 1, 1u);
      v12 = *(_DWORD *)(v5 + 4);
      *(_DWORD *)v5 = v13;
    }
    else
    {
      v13 = *(_BYTE **)v5;
    }
    v13[v12] = a2;
    ++*(_DWORD *)(v5 + 4);
    v14 = *(_DWORD *)(a1 + 112);
    ++*(_DWORD *)(a1 + 116);
    v15 = *(_DWORD *)(v14 + 4);
    if ( (unsigned int)(v15 + 1) > *(_DWORD *)(v14 + 8) )
    {
      result = sub_77EB0(v14, *(void **)v14, v15 + 1, 1u);
      v15 = *(_DWORD *)(v14 + 4);
      *(_DWORD *)v14 = result;
    }
    else
    {
      result = *(_BYTE **)v14;
    }
    result[v15] = v3;
    ++*(_DWORD *)(v14 + 4);
    ++*(_DWORD *)(a1 + 116);
  }
  else
  {
    v8 = a2 + 1;
    *(_BYTE *)(a1 + 120) = a2 + 1;
    v9 = *(_DWORD *)(v5 + 4);
    if ( (unsigned int)(v9 + 1) > *(_DWORD *)(v5 + 8) )
    {
      v10 = sub_77EB0(v5, *(void **)v5, v9 + 1, 1u);
      v9 = *(_DWORD *)(v5 + 4);
      *(_DWORD *)v5 = v10;
    }
    else
    {
      v10 = *(_BYTE **)v5;
    }
    v10[v9] = v8;
    ++*(_DWORD *)(v5 + 4);
    ++*(_DWORD *)(a1 + 116);
    return sub_39B10(a1, a3);
  }
  return result;
}
