/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_find_short
// Address: 0x00000000000B3280

//----- (00000000000B3280) ----------------------------------------------------
_BYTE *__fastcall cliopts_t_find_short(__int64 a1, char a2)
{
  unsigned __int64 v2; // rcx
  _BYTE *result; // rax
  unsigned __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    return nullptr;
  result = *(_BYTE **)a1;
  v4 = 0;
  while ( *result != a2 )
  {
    ++v4;
    result += 40;
    if ( v4 >= v2 )
      return nullptr;
  }
  return result;
}
