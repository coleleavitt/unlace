/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::align
// Address: 0x00000000000CEC60

//----- (00000000000CEC60) ----------------------------------------------------
_BYTE *__fastcall std::align(__int64 a1, unsigned __int64 a2, void **a3, unsigned __int64 *a4)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  _BYTE *v7; // rdi
  unsigned __int64 v8; // rsi

  v4 = *a4;
  v5 = *a4 - a2;
  if ( *a4 < a2 )
    return nullptr;
  v7 = (_BYTE *)(((unsigned __int64)*a3 + a1 - 1) & -a1);
  v8 = v7 - (_BYTE *)*a3;
  if ( v8 > v5 )
    return nullptr;
  *a3 = v7;
  *a4 = v4 - v8;
  return v7;
}
