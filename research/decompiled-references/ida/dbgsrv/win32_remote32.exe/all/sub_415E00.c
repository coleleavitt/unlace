/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415E00
// Address: 0x00415E00

//----- (00415E00) --------------------------------------------------------
void __thiscall sub_415E00(unsigned int *this, unsigned int a2)
{
  unsigned int v3; // edi
  int v4; // esi
  unsigned int v5; // edi

  v3 = *(this + 1);
  if ( a2 < v3 )
  {
    v4 = 40 * a2;
    v5 = v3 - a2;
    do
    {
      sub_40ACD0((_DWORD *)(v4 + *this));
      v4 += 40;
      --v5;
    }
    while ( v5 );
  }
  *(this + 1) = a2;
}
