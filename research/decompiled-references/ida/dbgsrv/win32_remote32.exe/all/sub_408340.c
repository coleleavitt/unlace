/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408340
// Address: 0x00408340

//----- (00408340) --------------------------------------------------------
int __thiscall sub_408340(int *this, int *a2)
{
  int v3; // ecx
  int v4; // edi
  int v5; // esi
  int result; // eax

  v3 = *this;
  v4 = *(this + 1);
  v5 = *(this + 2);
  *this = *a2;
  *(this + 1) = a2[1];
  result = a2[2];
  *(this + 2) = result;
  a2[1] = v4;
  a2[2] = v5;
  *a2 = v3;
  return result;
}
