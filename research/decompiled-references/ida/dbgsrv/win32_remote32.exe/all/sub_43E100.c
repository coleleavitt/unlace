/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E100
// Address: 0x0043E100

//----- (0043E100) --------------------------------------------------------
bool __thiscall sub_43E100(_DWORD *this)
{
  bool result; // al
  void *v3; // [esp-4h] [ebp-18h]

  v3 = (void *)*(this + 2);
  *this = &off_48DA64;
  result = sub_456330(v3);
  *(this + 2) = 0;
  *(this + 1) = 0;
  return result;
}
// 48DA64: using guessed type void (__noreturn *off_48DA64)();
