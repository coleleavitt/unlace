/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C050
// Address: 0x0041C050

//----- (0041C050) --------------------------------------------------------
char *__thiscall sub_41C050(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  sub_464C7B(a2 + 4, (int)(this + 4));
  *(_DWORD *)this = &off_48BB78;
  return this;
}
// 48BB78: using guessed type int (__stdcall *off_48BB78)(char);
// 4A4474: using guessed type void *std::exception::`vftable';
