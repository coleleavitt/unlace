/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::runtime_error
// Address: 0x000BCDE0

//----- (000BCDE0) --------------------------------------------------------
// Alternative name is '_ZNSt13runtime_errorC1EPKc'
std::runtime_error *__cdecl std::runtime_error::runtime_error(std::runtime_error *this, char *s)
{
  size_t v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi

  *(_DWORD *)this = off_139B00;
  v2 = strlen(s);
  v3 = operator new(v2 + 13);
  *v3 = v2;
  v3[1] = v2;
  v3[2] = 0;
  v4 = v3 + 3;
  memcpy(v3 + 3, s, v2 + 1);
  *((_DWORD *)this + 1) = v4;
  return this;
}
// 139B00: using guessed type void (__cdecl *off_139B00[2])(std::overflow_error *__hidden this);
