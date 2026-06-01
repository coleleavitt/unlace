/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402B20
// Address: 0x00402B20

//----- (00402B20) --------------------------------------------------------
char *__thiscall sub_402B20(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  sub_464C7B(a2 + 4, (int)(this + 4));
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
// 4A4474: using guessed type void *std::exception::`vftable';
// 4A4480: using guessed type void *std::bad_alloc::`vftable';
