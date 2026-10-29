/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57E90
// Address: 0x00057E90

//----- (00057E90) --------------------------------------------------------
const char *__fastcall sub_57E90(int a1, int a2)
{
  int *v3; // r0
  const char *result; // r0
  const char *v5; // r6
  size_t v6; // r5
  unsigned int v7; // r7
  void *v8; // r0

  if ( *(_DWORD *)(a1 + 12) )
    v3 = *(int **)(a1 + 8);
  else
    v3 = &dword_8DA5C;
  result = sub_76B04(v3);
  v5 = result;
  if ( result && (result = (const char *)strlen(result), (v6 = (size_t)result) != 0) )
  {
    v7 = (unsigned int)(result + 1);
    v8 = *(void **)a2;
    if ( v7 > *(_DWORD *)(a2 + 8) )
    {
      v8 = sub_77EB0(a2, *(void **)a2, v7, 1u);
      *(_DWORD *)a2 = v8;
    }
    *(_DWORD *)(a2 + 4) = v7;
    result = (const char *)memmove(v8, v5, v6);
    *(_BYTE *)(*(_DWORD *)a2 + v6) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 4) = 0;
  }
  return result;
}
// 8DA5C: using guessed type int dword_8DA5C;
