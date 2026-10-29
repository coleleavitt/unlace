/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::align
// Address: 0x00000000000D5C98

//----- (00000000000D5C98) ----------------------------------------------------
_BYTE *__fastcall std::align(__int64 a1, unsigned __int64 a2, void **a3, unsigned __int64 *a4)
{
  _BYTE *result; // x0
  _BYTE *v5; // x9
  unsigned __int64 v6; // x11
  unsigned __int64 v7; // x8

  if ( *a4 < a2 )
    return nullptr;
  v5 = (_BYTE *)(((unsigned __int64)*a3 + a1 - 1) & -a1);
  v6 = v5 - (_BYTE *)*a3;
  result = nullptr;
  if ( v6 <= *a4 - a2 )
  {
    v7 = *a4 - v6;
    *a3 = v5;
    *a4 = v7;
    return v5;
  }
  return result;
}
