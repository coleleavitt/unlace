/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4029F0
// Address: 0x004029F0

//----- (004029F0) --------------------------------------------------------
unsigned int __thiscall sub_4029F0(unsigned int *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edx
  unsigned int v4; // eax

  v3 = *this;
  v4 = *this + a3;
  if ( v4 < *this || v4 > *(this + 1) )
    return 0;
  *this = v4;
  return sub_464310(a2, v3, a3);
}
