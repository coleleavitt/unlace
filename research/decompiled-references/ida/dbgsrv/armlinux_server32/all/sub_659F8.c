/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_659F8
// Address: 0x000659F8

//----- (000659F8) --------------------------------------------------------
const char *__fastcall sub_659F8(const char *result, int a2)
{
  const char *v3; // r6
  size_t v4; // r5
  unsigned int v5; // r7
  void *v6; // r0

  if ( result && (v3 = result, result = (const char *)strlen(result), (v4 = (size_t)result) != 0) )
  {
    v5 = (unsigned int)(result + 1);
    v6 = *(void **)(a2 + 28);
    if ( v5 > *(_DWORD *)(a2 + 36) )
    {
      v6 = sub_78018(a2 + 28, *(void **)(a2 + 28), v5, 1u);
      *(_DWORD *)(a2 + 28) = v6;
    }
    *(_DWORD *)(a2 + 32) = v5;
    result = (const char *)memmove(v6, v3, v4);
    *(_BYTE *)(*(_DWORD *)(a2 + 28) + v4) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 32) = 0;
  }
  return result;
}
