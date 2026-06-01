/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_658BC
// Address: 0x000658BC

//----- (000658BC) --------------------------------------------------------
const char *__fastcall sub_658BC(const char *result, int a2)
{
  const char *v3; // r6
  size_t v4; // r5
  unsigned int v5; // r7
  void *v6; // r0

  if ( result && (v3 = result, result = (const char *)strlen(result), (v4 = (size_t)result) != 0) )
  {
    v5 = (unsigned int)(result + 1);
    v6 = *(void **)(a2 + 4);
    if ( v5 > *(_DWORD *)(a2 + 12) )
    {
      v6 = sub_77EB0(a2 + 4, *(void **)(a2 + 4), v5, 1u);
      *(_DWORD *)(a2 + 4) = v6;
    }
    *(_DWORD *)(a2 + 8) = v5;
    result = (const char *)memmove(v6, v3, v4);
    *(_BYTE *)(*(_DWORD *)(a2 + 4) + v4) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = 0;
  }
  return result;
}
