void __fastcall ClpPrimalColumnPivot::saveWeights(ClpPrimalColumnPivot *this, ClpSimplex *a2)
{
  *((_QWORD *)this + 1) = a2;
}

