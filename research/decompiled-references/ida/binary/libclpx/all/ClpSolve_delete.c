void __fastcall ClpSolve_delete(ClpSolve *a1)
{
  if ( a1 )
  {
    ClpSolve::~ClpSolve(a1);
    operator delete(a1);
  }
}

