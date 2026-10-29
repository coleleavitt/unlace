/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41BC00
// Address: 0x0041BC00

//----- (0041BC00) --------------------------------------------------------
char *__thiscall sub_41BC00(char *this, int a2)
{
  *this = 2;
  *(_OWORD *)(this + 8) = 0;
  *((_DWORD *)this + 2) = a2;
  return this;
}
