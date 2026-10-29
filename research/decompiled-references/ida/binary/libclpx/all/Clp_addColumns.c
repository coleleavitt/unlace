__int64 __fastcall Clp_addColumns(
        ClpModel **a1,
        int a2,
        const double *a3,
        const double *a4,
        const double *a5,
        const int *a6,
        const int *a7,
        const double *a8)
{
  return ClpModel::addColumns(*a1, a2, a3, a4, a5, a6, a7, a8);
}

