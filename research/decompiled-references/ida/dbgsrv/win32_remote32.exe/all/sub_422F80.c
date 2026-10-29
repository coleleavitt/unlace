/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422F80
// Address: 0x00422F80

//----- (00422F80) --------------------------------------------------------
unsigned int __thiscall sub_422F80(unsigned int *this, unsigned int a2)
{
  unsigned int v3; // edi
  unsigned int result; // eax
  unsigned int v5; // esi
  int v6; // edi

  v3 = *(this + 1);
  result = a2;
  if ( a2 < v3 )
  {
    v5 = 24 * a2;
    v6 = v3 - a2;
    do
    {
      sub_423B70(v5 + *this);
      v5 += 24;
      --v6;
    }
    while ( v6 );
    result = a2;
  }
  *(this + 1) = result;
  return result;
}
