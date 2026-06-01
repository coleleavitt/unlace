/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453060
// Address: 0x00453060

//----- (00453060) --------------------------------------------------------
char *__thiscall sub_453060(char *this, int a2)
{
  *(_QWORD *)(this + 4) = 0;
  *((_DWORD *)this + 3) = a2;
  *(_DWORD *)this = &off_4A14DC;
  return this;
}
// 4A14DC: using guessed type int (__stdcall *off_4A14DC)(char);
