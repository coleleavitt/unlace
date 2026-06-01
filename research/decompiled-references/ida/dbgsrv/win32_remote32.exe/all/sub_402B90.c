/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402B90
// Address: 0x00402B90

//----- (00402B90) --------------------------------------------------------
char *__thiscall sub_402B90(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  sub_464C7B(a2 + 4, (int)(this + 4));
  *(_DWORD *)this = &std::bad_array_new_length::`vftable';
  return this;
}
// 4A4474: using guessed type void *std::exception::`vftable';
// 4A44FC: using guessed type void *std::bad_array_new_length::`vftable';
