void __fastcall ClpSimplex::setNumberRefinements(ClpSimplex *this, unsigned int a2)
{
  if ( a2 <= 9 )
    *((_DWORD *)this + 309) = a2;
}

