/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461970
// Address: 0x0000000000461970

//----- (0000000000461970) ----------------------------------------------------
const char *__fastcall sub_461970(const char *result, __int64 a2)
{
  const char *v3; // x20
  size_t v4; // x21
  unsigned __int64 v5; // x23
  void *v6; // x0

  if ( result && (v3 = result, result = (const char *)strlen(result), (v4 = (size_t)result) != 0) )
  {
    v5 = (unsigned __int64)(result + 1);
    v6 = *(void **)(a2 + 112);
    if ( v5 > *(_QWORD *)(a2 + 128) )
    {
      v6 = sub_491288(a2 + 112, *(void **)(a2 + 112), v5, 1u);
      *(_QWORD *)(a2 + 112) = v6;
    }
    *(_QWORD *)(a2 + 120) = v5;
    memmove(v6, v3, v4);
    result = *(const char **)(a2 + 112);
    result[v4] = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 120) = 0;
  }
  return result;
}
