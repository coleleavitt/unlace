/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::runtime_error
// Address: 0x0008FF10

//----- (0008FF10) --------------------------------------------------------
// Alternative name is '_ZNSt13runtime_errorC2ERKS_'
_DWORD *__fastcall std::runtime_error::runtime_error(_DWORD *result, int a2)
{
  int v2; // r1
  unsigned int *v3; // r1
  unsigned int v4; // r2

  *result = &off_DBA84;
  v2 = *(_DWORD *)(a2 + 4);
  result[1] = v2;
  v3 = (unsigned int *)(v2 - 4);
  __dmb(0xBu);
  do
    v4 = __ldrex(v3);
  while ( __strex(v4 + 1, v3) );
  __dmb(0xBu);
  return result;
}
// DBA84: using guessed type _UNKNOWN *;
