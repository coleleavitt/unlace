/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427770
// Address: 0x00427770

//----- (00427770) --------------------------------------------------------
void __thiscall sub_427770(unsigned int *this)
{
  void *v2; // [esp-4h] [ebp-Ch]
  void *v3; // [esp-4h] [ebp-Ch]

  if ( *(this + 4) )
  {
    v2 = (void *)*(this + 4);
    *(this + 5) = 0;
    sub_453A20(v2);
    *(this + 4) = 0;
    *(this + 6) = 0;
  }
  if ( *(this + 11) )
  {
    sub_428990(this + 11, 0);
    sub_453A20((void *)*(this + 11));
    *(this + 11) = 0;
    *(this + 13) = 0;
  }
  if ( *(this + 14) )
  {
    v3 = (void *)*(this + 14);
    *(this + 15) = 0;
    sub_453A20(v3);
    *(this + 14) = 0;
    *(this + 16) = 0;
  }
  if ( *(this + 8) )
  {
    sub_422F80(this + 8, 0);
    sub_453A20((void *)*(this + 8));
    *(this + 8) = 0;
    *(this + 10) = 0;
  }
  *(this + 3) = 0;
}
