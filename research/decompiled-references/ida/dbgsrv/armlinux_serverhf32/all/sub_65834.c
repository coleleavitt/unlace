/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65834
// Address: 0x00065834

//----- (00065834) --------------------------------------------------------
const char *__fastcall sub_65834(const char *result, int a2)
{
  const char *v3; // r6
  size_t v4; // r5
  unsigned int v5; // r7
  void *v6; // r0

  if ( result && (v3 = result, result = (const char *)strlen(result), (v4 = (size_t)result) != 0) )
  {
    v5 = (unsigned int)(result + 1);
    v6 = *(void **)(a2 + 16);
    if ( v5 > *(_DWORD *)(a2 + 24) )
    {
      v6 = sub_77EB0(a2 + 16, *(void **)(a2 + 16), v5, 1u);
      *(_DWORD *)(a2 + 16) = v6;
    }
    *(_DWORD *)(a2 + 20) = v5;
    result = (const char *)memmove(v6, v3, v4);
    *(_BYTE *)(*(_DWORD *)(a2 + 16) + v4) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 20) = 0;
  }
  return result;
}
