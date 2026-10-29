__int64 __fastcall ClpSimplex::loadProblem(
        ClpSimplex *this,
        int a2,
        int a3,
        const int *a4,
        const int *a5,
        const double *a6,
        double *a7,
        double *a8,
        double *a9,
        double *a10,
        double *a11,
        double *a12)
{
  ClpModel::loadProblem(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  return ClpSimplex::createStatus(this);
}

