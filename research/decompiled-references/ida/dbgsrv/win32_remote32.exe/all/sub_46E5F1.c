/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E5F1
// Address: 0x0046E5F1

//----- (0046E5F1) --------------------------------------------------------
int *__thiscall sub_46E5F1(int *this, int *a2, int a3, int a4, int a5, int a6, int a7)
{
  *this = a3;
  *(this + 1) = a4;
  *(this + 2) = *a2;
  *(this + 3) = a2[1];
  *(this + 4) = a2[2];
  sub_46E576(this + 6, a3, a4, a5);
  *(this + 28) = 0;
  *(this + 26) = a6;
  *(this + 27) = a7;
  return this;
}
