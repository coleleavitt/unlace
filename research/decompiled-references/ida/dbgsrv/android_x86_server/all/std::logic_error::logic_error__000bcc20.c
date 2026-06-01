/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::logic_error::logic_error
// Address: 0x000BCC20

//----- (000BCC20) --------------------------------------------------------
// Alternative name is '_ZNSt11logic_errorC1EPKc'
std::logic_error *__cdecl std::logic_error::logic_error(std::logic_error *this, char *s)
{
  size_t v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi

  *(_DWORD *)this = off_139AEC;
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
// 139AEC: using guessed type void (__cdecl *off_139AEC[2])(std::length_error *__hidden this);
