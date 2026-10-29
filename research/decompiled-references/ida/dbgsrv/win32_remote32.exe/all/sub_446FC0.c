/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_446FC0
// Address: 0x00446FC0

//----- (00446FC0) --------------------------------------------------------
void __thiscall sub_446FC0(unsigned int *this, unsigned int a2)
{
  unsigned int v3; // edi
  int v4; // esi
  unsigned int v5; // edi

  v3 = *(this + 1);
  if ( a2 < v3 )
  {
    v4 = a2 << 8;
    v5 = v3 - a2;
    do
    {
      sub_40AD70((_DWORD *)(v4 + *this));
      v4 += 256;
      --v5;
    }
    while ( v5 );
  }
  *(this + 1) = a2;
}
