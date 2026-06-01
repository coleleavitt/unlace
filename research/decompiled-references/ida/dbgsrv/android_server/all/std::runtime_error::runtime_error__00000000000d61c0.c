/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::runtime_error
// Address: 0x00000000000D61C0

//----- (00000000000D61C0) ----------------------------------------------------
// Alternative name is '_ZNSt13runtime_errorC2ERKS_'
_QWORD *__fastcall std::runtime_error::runtime_error(_QWORD *result, __int64 a2)
{
  __int64 v2; // x8
  unsigned int *v3; // x8
  unsigned int v4; // w9

  *result = off_161460;
  v2 = *(_QWORD *)(a2 + 8);
  result[1] = v2;
  v3 = (unsigned int *)(v2 - 8);
  do
    v4 = __ldaxr(v3);
  while ( __stlxr(v4 + 1, v3) );
  return result;
}
// 161460: using guessed type void (__fastcall *[2])(std::overflow_error *__hidden this);
