/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::runtime_error
// Address: 0x000BCD40

//----- (000BCD40) --------------------------------------------------------
// Alternative name is '_ZNSt13runtime_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE'
std::exception *__cdecl std::runtime_error::runtime_error(std::exception *a1, int a2)
{
  const char *v2; // edx
  size_t v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  const char *v7; // [esp+18h] [ebp-14h]

  *(_DWORD *)a1 = off_139B00;
  if ( (*(_BYTE *)a2 & 1) != 0 )
    v2 = *(const char **)(a2 + 8);
  else
    v2 = (const char *)(a2 + 1);
  v7 = v2;
  v3 = strlen(v2);
  v4 = operator new(v3 + 13);
  *v4 = v3;
  v4[1] = v3;
  v4[2] = 0;
  v5 = v4 + 3;
  memcpy(v4 + 3, v7, v3 + 1);
  *((_DWORD *)a1 + 1) = v5;
  return a1;
}
// 139B00: using guessed type void (__cdecl *off_139B00[2])(std::overflow_error *__hidden this);
