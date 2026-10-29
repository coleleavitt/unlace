/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A078
// Address: 0x0003A078

//----- (0003A078) --------------------------------------------------------
int __fastcall sub_3A078(int a1)
{
  int v2; // r3
  int v3; // r1
  unsigned int v4; // r5
  char **v6; // r6
  unsigned int v7; // r5
  char *v8; // r0
  char *v9; // r2
  int v10; // r7
  int v11; // r5
  int v12; // r3
  _BYTE *v13; // r0

  v2 = *(_DWORD *)(a1 + 136);
  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 132) + 4 * (v2 + 0x3FFFFFFF));
  if ( v2 )
    *(_DWORD *)(a1 + 136) = v2 - 1;
  v4 = *(_DWORD *)(a1 + 116);
  if ( v4 - 4 != v3 )
  {
    sub_3E5A4(*(int **)(a1 + 112), v3, v4 - 4 - v3);
    *(_BYTE *)(a1 + 120) = -1;
    return 0;
  }
  if ( v4 <= 4 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(708);
  }
  v6 = *(char ***)(a1 + 112);
  v7 = v4 - 5;
  *(_DWORD *)(a1 + 116) = v7;
  v9 = v6[1];
  v8 = *v6;
  v10 = (unsigned __int8)(*v6)[v7];
  if ( v7 > (unsigned int)v9 )
  {
    if ( v7 > (unsigned int)v6[2] )
    {
      v8 = (char *)sub_77EB0((int)v6, v8, v7, 1u);
      v9 = v6[1];
      *v6 = v8;
    }
    memset(&v9[(_DWORD)v8], 0, v7 - (_DWORD)v9);
    v6[1] = (char *)v7;
  }
  else if ( v7 < (unsigned int)v6[1] )
  {
    v6[1] = (char *)v7;
  }
  *(_BYTE *)(a1 + 120) = -87;
  if ( v10 == 171 )
  {
    v11 = *(_DWORD *)(a1 + 112);
    *(_BYTE *)(a1 + 120) = -85;
    v12 = *(_DWORD *)(v11 + 4);
    if ( (unsigned int)(v12 + 1) > *(_DWORD *)(v11 + 8) )
    {
      v13 = sub_77EB0(v11, *(void **)v11, v12 + 1, 1u);
      v12 = *(_DWORD *)(v11 + 4);
      *(_DWORD *)v11 = v13;
    }
    else
    {
      v13 = *(_BYTE **)v11;
    }
    v13[v12] = -85;
    ++*(_DWORD *)(v11 + 4);
    ++*(_DWORD *)(a1 + 116);
    sub_39B10(a1, 0);
    sub_39B10(a1, 0);
    return 0;
  }
  return sub_38D00(a1);
}
// D5C00: using guessed type char under_debugger;
