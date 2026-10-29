/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453950
// Address: 0x00453950

//----- (00453950) --------------------------------------------------------
char *__thiscall sub_453950(char *this)
{
  *(_QWORD *)(this + 4) = 0;
  *((_DWORD *)this + 1) = "bad allocation";
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
// 4A4480: using guessed type void *std::bad_alloc::`vftable';
