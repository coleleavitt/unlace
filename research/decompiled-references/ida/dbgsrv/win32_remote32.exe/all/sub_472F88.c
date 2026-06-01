/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472F88
// Address: 0x00472F88

//----- (00472F88) --------------------------------------------------------
int *__thiscall sub_472F88(int *this, int a2, __int64 a3)
{
  int v4; // edx
  __int64 v5; // rax

  *this = sub_474CB1(0, (int)this, a2, 0, 0, 1u);
  *(this + 1) = v4;
  LODWORD(v5) = sub_474CB1(0, (int)this, a2, 0, 0, 2u);
  *(this + 2) = v5;
  *(this + 6) = a2;
  *(this + 5) = (unsigned __int64)(a3 - v5) >> 32;
  *(this + 3) = HIDWORD(v5);
  *(this + 4) = a3 - v5;
  return this;
}
// 472FA8: variable 'v4' is possibly undefined
// 472FB9: variable 'v5' is possibly undefined
