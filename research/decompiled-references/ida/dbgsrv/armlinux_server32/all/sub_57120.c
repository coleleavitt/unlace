/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57120
// Address: 0x00057120

//----- (00057120) --------------------------------------------------------
const char *__fastcall sub_57120(const char *result, int a2)
{
  const char *v3; // r6
  size_t v4; // r5
  unsigned int v5; // r7
  void *v6; // r0

  if ( result && (v3 = result, result = (const char *)strlen(result), (v4 = (size_t)result) != 0) )
  {
    v5 = (unsigned int)(result + 1);
    v6 = *(void **)(a2 + 60);
    if ( v5 > *(_DWORD *)(a2 + 68) )
    {
      v6 = sub_78018(a2 + 60, *(void **)(a2 + 60), v5, 1u);
      *(_DWORD *)(a2 + 60) = v6;
    }
    *(_DWORD *)(a2 + 64) = v5;
    result = (const char *)memmove(v6, v3, v4);
    *(_BYTE *)(*(_DWORD *)(a2 + 60) + v4) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 64) = 0;
  }
  return result;
}
