/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43ACB0
// Address: 0x0043ACB0

//----- (0043ACB0) --------------------------------------------------------
void __thiscall sub_43ACB0(void ***this)
{
  void **v2; // esi
  void **i; // ebx
  void *v4; // [esp-4h] [ebp-8h]
  void *v5; // [esp-4h] [ebp-8h]

  if ( *(this + 10) )
  {
    v2 = *(this + 12);
    for ( i = &v2[(_DWORD)*(this + 13)]; v2 != i; ++v2 )
      sub_453A20(*v2);
    if ( *(this + 12) )
    {
      v4 = *(this + 12);
      *(this + 13) = nullptr;
      sub_453A20(v4);
      *(this + 12) = nullptr;
      *(this + 14) = nullptr;
    }
    if ( *(this + 9) )
    {
      v5 = *(this + 9);
      *(this + 10) = nullptr;
      sub_453A20(v5);
      *(this + 9) = nullptr;
      *(this + 11) = nullptr;
    }
  }
}
