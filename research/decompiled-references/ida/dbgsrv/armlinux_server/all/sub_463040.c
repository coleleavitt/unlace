/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463040
// Address: 0x0000000000463040

//----- (0000000000463040) ----------------------------------------------------
const char *__fastcall sub_463040(__int64 a1, __int64 a2)
{
  __int64 *v3; // x0
  const char *result; // x0
  const char *v5; // x20
  size_t v6; // x21
  unsigned __int64 v7; // x22
  void *v8; // x0

  if ( *(_QWORD *)(a1 + 24) )
    v3 = *(__int64 **)(a1 + 16);
  else
    v3 = &qword_4B2D48;
  result = sub_48F420(v3);
  v5 = result;
  if ( result && (result = (const char *)strlen(result), (v6 = (size_t)result) != 0) )
  {
    v7 = (unsigned __int64)(result + 1);
    v8 = *(void **)a2;
    if ( v7 > *(_QWORD *)(a2 + 16) )
    {
      v8 = sub_491288(a2, *(void **)a2, v7, 1u);
      *(_QWORD *)a2 = v8;
    }
    *(_QWORD *)(a2 + 8) = v7;
    memmove(v8, v5, v6);
    result = *(const char **)a2;
    *(_BYTE *)(*(_QWORD *)a2 + v6) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0;
  }
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
