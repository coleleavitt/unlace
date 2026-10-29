__int64 __fastcall Clp_addRows(
        ClpModel **a1,
        int a2,
        const double *a3,
        const double *a4,
        const int *a5,
        const int *a6,
        const double *a7)
{
  return ClpModel::addRows(*a1, a2, a3, a4, a5, a6, a7);
}

