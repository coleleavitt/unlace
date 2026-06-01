/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::runtime_error
// Address: 0x00000000000CF100

//----- (00000000000CF100) ----------------------------------------------------
// Alternative name is '_ZNSt13runtime_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE'
void *__fastcall std::runtime_error::runtime_error(_QWORD *a1, __int64 a2)
{
  const char *v2; // r15
  size_t v3; // r12
  _QWORD *v4; // rax
  char *v5; // rbx
  void *result; // rax

  *a1 = off_1515E0;
  if ( (*(_BYTE *)a2 & 1) != 0 )
    v2 = *(const char **)(a2 + 16);
  else
    v2 = (const char *)(a2 + 1);
  v3 = strlen(v2);
  v4 = operator new(v3 + 25);
  *v4 = v3;
  v4[1] = v3;
  *((_DWORD *)v4 + 4) = 0;
  v5 = (char *)(v4 + 3);
  result = memcpy(v4 + 3, v2, v3 + 1);
  a1[1] = v5;
  return result;
}
// 1515E0: using guessed type void (__fastcall *off_1515E0[2])(std::overflow_error *__hidden this);
