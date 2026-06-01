/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::runtime_error
// Address: 0x00000000000D6140

//----- (00000000000D6140) ----------------------------------------------------
// Alternative name is '_ZNSt13runtime_errorC1EPKc'
void *__fastcall std::runtime_error::runtime_error(std::runtime_error *this, const char *s)
{
  size_t v4; // x21
  _QWORD *v5; // x0
  char *v6; // x22
  void *result; // x0

  *(_QWORD *)this = off_161460;
  v4 = strlen(s);
  v5 = operator new(v4 + 25);
  v6 = (char *)(v5 + 3);
  *v5 = v4;
  v5[1] = v4;
  *((_DWORD *)v5 + 4) = 0;
  result = memcpy(v5 + 3, s, v4 + 1);
  *((_QWORD *)this + 1) = v6;
  return result;
}
// 161460: using guessed type void (__fastcall *off_161460[2])(std::overflow_error *__hidden this);
