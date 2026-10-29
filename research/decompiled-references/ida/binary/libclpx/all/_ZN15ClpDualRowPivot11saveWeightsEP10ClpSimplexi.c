void __fastcall ClpDualRowPivot::saveWeights(ClpDualRowPivot *this, ClpSimplex *a2)
{
  *((_QWORD *)this + 1) = a2;
}

