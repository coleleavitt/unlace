__int64 __fastcall ClpSimplex::initialDualSolve(ClpSimplex *this)
{
  unsigned int v1; // ebp
  _BYTE v3[104]; // [rsp+0h] [rbp-68h] BYREF

  ClpSolve::ClpSolve((ClpSolve *)v3);
  ClpSolve::setSolveType(v3, 0, 0xFFFFFFFFLL);
  v1 = ClpSimplex::initialSolve(this, (ClpSolve *)v3);
  ClpSolve::~ClpSolve((ClpSolve *)v3);
  return v1;
}

