/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::logic_error::logic_error
// Address: 0x00000000000D5F18

//----- (00000000000D5F18) ----------------------------------------------------
// Alternative name is '_ZNSt11logic_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE'
void *__fastcall std::logic_error::logic_error(_QWORD *a1, __int64 a2)
{
  const char *v3; // x20
  size_t v4; // x21
  _QWORD *v5; // x0
  char *v6; // x22
  void *result; // x0

  *a1 = off_161438;
  if ( (*(_BYTE *)a2 & 1) != 0 )
    v3 = *(const char **)(a2 + 16);
  else
    v3 = (const char *)(a2 + 1);
  v4 = strlen(v3);
  v5 = operator new(v4 + 25);
  v6 = (char *)(v5 + 3);
  *v5 = v4;
  v5[1] = v4;
  *((_DWORD *)v5 + 4) = 0;
  result = memcpy(v5 + 3, v3, v4 + 1);
  a1[1] = v6;
  return result;
}
// 161438: using guessed type void (__fastcall *off_161438[2])(std::out_of_range *__hidden this);
