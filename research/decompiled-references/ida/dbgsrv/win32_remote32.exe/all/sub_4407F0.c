/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4407F0
// Address: 0x004407F0

//----- (004407F0) --------------------------------------------------------
void __thiscall sub_4407F0(void **this)
{
  int v2; // ebx
  int v3; // edi
  void *v4; // [esp-4h] [ebp-20h]

  if ( *this )
  {
    v2 = (int)*(this + 1);
    if ( v2 )
    {
      v3 = 0;
      do
      {
        sub_439B60((void **)((char *)*this + v3));
        v3 += 40;
        --v2;
      }
      while ( v2 );
    }
    v4 = *this;
    *(this + 1) = nullptr;
    sub_453A20(v4);
    *this = nullptr;
    *(this + 2) = nullptr;
  }
}
