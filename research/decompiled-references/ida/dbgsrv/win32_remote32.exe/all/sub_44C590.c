/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44C590
// Address: 0x0044C590

//----- (0044C590) --------------------------------------------------------
void __thiscall sub_44C590(_DWORD *this)
{
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax

  v2 = (void *)*(this + 8);
  if ( v2 )
  {
    *(this + 9) = 0;
    sub_453A20(v2);
    *(this + 8) = 0;
    *(this + 10) = 0;
  }
  v3 = (void *)*(this + 5);
  if ( v3 )
  {
    *(this + 6) = 0;
    sub_453A20(v3);
    *(this + 5) = 0;
    *(this + 7) = 0;
  }
  v4 = (void *)*(this + 1);
  if ( v4 )
  {
    *(this + 2) = 0;
    sub_453A20(v4);
    *(this + 1) = 0;
    *(this + 3) = 0;
  }
}
