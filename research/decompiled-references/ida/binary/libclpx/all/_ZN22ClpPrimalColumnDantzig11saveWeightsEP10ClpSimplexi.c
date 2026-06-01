void __fastcall ClpPrimalColumnDantzig::saveWeights(ClpPrimalColumnDantzig *this, ClpSimplex *a2)
{
  *((_QWORD *)this + 1) = a2;
}

