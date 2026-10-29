/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4272C0
// Address: 0x004272C0

//----- (004272C0) --------------------------------------------------------
void __thiscall sub_4272C0(unsigned int *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx

  v3 = a3;
  if ( a3 )
  {
    v5 = *(this + 1);
    LOBYTE(a3) = 0;
    if ( v5 + v3 >= v5 )
    {
      if ( v5 + v3 > v5 )
        sub_402900((int)this, v5 + v3, &a3);
    }
    else
    {
      *(this + 1) = v5 + v3;
    }
    sub_464310(v5 + *this, a2, v3);
  }
}
