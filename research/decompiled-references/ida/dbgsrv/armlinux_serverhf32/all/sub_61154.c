/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61154
// Address: 0x00061154

//----- (00061154) --------------------------------------------------------
size_t __fastcall sub_61154(int a1, __int64 *a2)
{
  unsigned int v4; // r7
  unsigned int v5; // r6
  signed int v6; // r0
  int v7; // r3
  size_t result; // r0
  __int64 v9; // kr00_8
  unsigned __int8 *v10; // r3
  __int64 v12; // kr08_8
  unsigned __int8 *v13; // r3
  size_t v15; // r7
  unsigned int v16; // r8
  void *v17; // r0
  size_t v18; // r4
  unsigned int v19; // r7
  void *v20; // r0

  v4 = sub_76244((unsigned __int8 **)a2, *((_DWORD *)a2 + 1)) - 1;
  *(_DWORD *)(a1 + 32) = v4;
  v5 = sub_76244((unsigned __int8 **)a2, *((_DWORD *)a2 + 1)) - 1 + 16 * v4;
  *(_DWORD *)a1 = v5;
  *(_DWORD *)(a1 + 4) = v5 + sub_76244((unsigned __int8 **)a2, *((_DWORD *)a2 + 1)) - 1;
  v6 = sub_7617C((unsigned __int8 **)a2, *((_DWORD *)a2 + 1));
  v7 = v6 >> 4;
  result = v6 & 7;
  *(_BYTE *)(a1 + 37) = result;
  *(_BYTE *)(a1 + 36) = v7;
  v9 = *a2;
  if ( HIDWORD(v9) > (unsigned int)v9 )
  {
    v10 = (unsigned __int8 *)(v9 + 1);
    if ( *(_BYTE *)v9 )
    {
      while ( (unsigned __int8 *)HIDWORD(v9) != v10 )
      {
        if ( !*v10++ )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      *(_DWORD *)a2 = v10;
      if ( (_DWORD)v9 )
      {
        result = strlen((const char *)v9);
        v15 = result;
        if ( result )
        {
          v16 = result + 1;
          v17 = *(void **)(a1 + 8);
          if ( v16 > *(_DWORD *)(a1 + 16) )
          {
            v17 = sub_77EB0(a1 + 8, *(void **)(a1 + 8), v16, 1u);
            *(_DWORD *)(a1 + 8) = v17;
          }
          *(_DWORD *)(a1 + 12) = v16;
          result = (size_t)memmove(v17, (const void *)v9, v15);
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + v15) = 0;
          goto LABEL_7;
        }
      }
    }
  }
  *(_DWORD *)(a1 + 12) = 0;
LABEL_7:
  v12 = *a2;
  if ( HIDWORD(v12) <= (unsigned int)v12 )
    goto LABEL_12;
  v13 = (unsigned __int8 *)(v12 + 1);
  if ( *(_BYTE *)v12 )
  {
    while ( (unsigned __int8 *)HIDWORD(v12) != v13 )
    {
      if ( !*v13++ )
        goto LABEL_18;
    }
    goto LABEL_12;
  }
LABEL_18:
  *(_DWORD *)a2 = v13;
  if ( !(_DWORD)v12 || (result = strlen((const char *)v12), (v18 = result) == 0) )
  {
LABEL_12:
    *(_DWORD *)(a1 + 24) = 0;
    return result;
  }
  v19 = result + 1;
  v20 = *(void **)(a1 + 20);
  if ( v19 > *(_DWORD *)(a1 + 28) )
  {
    v20 = sub_77EB0(a1 + 20, *(void **)(a1 + 20), v19, 1u);
    *(_DWORD *)(a1 + 20) = v20;
  }
  *(_DWORD *)(a1 + 24) = v19;
  result = (size_t)memmove(v20, (const void *)v12, v18);
  *(_BYTE *)(*(_DWORD *)(a1 + 20) + v18) = 0;
  return result;
}
