__int64 __fastcall ClpSimplex::loadProblem(
        ClpSimplex *this,
        const ClpMatrixBase *a2,
        const double *a3,
        const double *a4,
        const double *a5,
        const double *a6,
        double *a7,
        double *a8)
{
  ClpModel::loadProblem(this, a2, a3, a4, a5, a6, a7, a8);
  return ClpSimplex::createStatus(this);
}

