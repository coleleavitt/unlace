/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402C00
// Address: 0x00402C00

//----- (00402C00) --------------------------------------------------------
char *__thiscall sub_402C00(char *this)
{
  *(_QWORD *)(this + 4) = 0;
  *((_DWORD *)this + 1) = "bad array new length";
  *(_DWORD *)this = &std::bad_array_new_length::`vftable';
  return this;
}
// 4A44FC: using guessed type void *std::bad_array_new_length::`vftable';
