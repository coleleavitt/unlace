/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::runtime_error
// Address: 0x00000000000CF190

//----- (00000000000CF190) ----------------------------------------------------
// Alternative name is '_ZNSt13runtime_errorC1EPKc'
void *__fastcall std::runtime_error::runtime_error(std::runtime_error *this, const char *a2)
{
  size_t v2; // r12
  _QWORD *v3; // rax
  char *v4; // rbx
  void *result; // rax

  *(_QWORD *)this = off_1515E0;
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
// 1515E0: using guessed type void (__fastcall *off_1515E0[2])(std::overflow_error *__hidden this);
