/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003060
// Address: 0x0000000140003060

//----- (0000000140003060) ----------------------------------------------------
_QWORD *__fastcall sub_140003060(size_t a1)
{
  _QWORD *result; // rax
  void *v2; // rax
  void *v3; // rcx

  if ( !a1 )
    return nullptr;
  if ( a1 < 0x1000 )
    return operator new(a1);
  if ( a1 + 39 < a1 )
    sub_140004220();
  v2 = operator new(a1 + 39);
  v3 = v2;
  if ( !v2 )
    invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  result = (_QWORD *)(((unsigned __int64)v2 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *(result - 1) = v3;
  return result;
}
