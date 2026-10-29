/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::logic_error::logic_error
// Address: 0x00000000000CF020

//----- (00000000000CF020) ----------------------------------------------------
// Alternative name is '_ZNSt11logic_errorC1EPKc'
void *__fastcall std::logic_error::logic_error(std::logic_error *this, const char *a2)
{
  size_t v2; // r12
  _QWORD *v3; // rax
  char *v4; // rbx
  void *result; // rax

  *(_QWORD *)this = off_1515B8;
  v2 = strlen(a2);
  v3 = operator new(v2 + 25);
  *v3 = v2;
  v3[1] = v2;
  *((_DWORD *)v3 + 4) = 0;
  v4 = (char *)(v3 + 3);
  result = memcpy(v3 + 3, a2, v2 + 1);
  *((_QWORD *)this + 1) = v4;
  return result;
}
// 1515B8: using guessed type void (__fastcall *off_1515B8[2])(std::length_error *__hidden this);
