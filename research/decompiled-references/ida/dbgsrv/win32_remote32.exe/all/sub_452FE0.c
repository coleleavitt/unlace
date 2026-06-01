/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452FE0
// Address: 0x00452FE0

//----- (00452FE0) --------------------------------------------------------
char *__thiscall sub_452FE0(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  sub_464C7B(a2 + 4, (int)(this + 4));
  *(_DWORD *)this = &off_4A14DC;
  *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 12);
  return this;
}
// 4A14DC: using guessed type int (__stdcall *off_4A14DC)(char);
// 4A4474: using guessed type void *std::exception::`vftable';
