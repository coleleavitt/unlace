/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475CA0
// Address: 0x0000000000475CA0

//----- (0000000000475CA0) ----------------------------------------------------
const char *__fastcall sub_475CA0(const char *result, __int64 a2)
{
  const char *v3; // x20
  size_t v4; // x21
  unsigned __int64 v5; // x23
  void *v6; // x0

  if ( result && (v3 = result, result = (const char *)strlen(result), (v4 = (size_t)result) != 0) )
  {
    v5 = (unsigned __int64)(result + 1);
    v6 = *(void **)(a2 + 56);
    if ( v5 > *(_QWORD *)(a2 + 72) )
    {
      v6 = sub_491288(a2 + 56, *(void **)(a2 + 56), v5, 1u);
      *(_QWORD *)(a2 + 56) = v6;
    }
    *(_QWORD *)(a2 + 64) = v5;
    memmove(v6, v3, v4);
    result = *(const char **)(a2 + 56);
    result[v4] = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 64) = 0;
  }
  return result;
}
