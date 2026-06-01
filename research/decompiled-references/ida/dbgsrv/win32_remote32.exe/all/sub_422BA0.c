/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422BA0
// Address: 0x00422BA0

//----- (00422BA0) --------------------------------------------------------
int __thiscall sub_422BA0(int *this, int a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx

  v3 = 3 * *(this + 1);
  v4 = *this;
  *(_BYTE *)a2 = 2;
  *(_OWORD *)(a2 + 8) = 0;
  sub_423670((char *)a2, (char *)(v4 + 8 * v3 - 24));
  v5 = *(this + 1);
  if ( v5 )
  {
    v6 = v5 - 1;
    *(this + 1) = v6;
    sub_423B70(*this + 24 * v6);
  }
  return a2;
}
