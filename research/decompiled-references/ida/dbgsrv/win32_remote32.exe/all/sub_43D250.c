/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D250
// Address: 0x0043D250

//----- (0043D250) --------------------------------------------------------
int __thiscall sub_43D250(unsigned int *this, unsigned int a2)
{
  unsigned int v2; // eax

  v2 = *(this + 67);
  if ( !v2 )
    sub_404C90((int)"debmod_t::get_reginfo is not implemented");
  if ( a2 >= v2 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(3256);
  }
  return *(this + 66) + 20 * a2;
}
// 4B70F0: using guessed type char byte_4B70F0;
