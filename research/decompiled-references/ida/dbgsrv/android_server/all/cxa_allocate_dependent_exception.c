/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_allocate_dependent_exception
// Address: 0x00000000000D62B8

//----- (00000000000D62B8) ----------------------------------------------------
long double _cxa_allocate_dependent_exception()
{
  unsigned __int16 *v0; // x0
  long double result; // q0

  v0 = sub_D7A6C(0x80u);
  if ( !v0 )
    std::terminate();
  *((_OWORD *)v0 + 6) = 0u;
  *((_OWORD *)v0 + 7) = 0u;
  *((_OWORD *)v0 + 4) = 0u;
  *((_OWORD *)v0 + 5) = 0u;
  *((_OWORD *)v0 + 2) = 0u;
  *((_OWORD *)v0 + 3) = 0u;
  *(_OWORD *)v0 = 0u;
  *((_OWORD *)v0 + 1) = 0u;
  *(_OWORD *)&result = 0u;
  return result;
}
