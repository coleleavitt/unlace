__int64 __fastcall ClpModel::addColumn(
        ClpModel *this,
        int a2,
        const int *a3,
        const double *a4,
        double a5,
        double a6,
        double a7)
{
  double v8; // [rsp+8h] [rbp-30h] BYREF
  double v9; // [rsp+10h] [rbp-28h] BYREF
  double v10[2]; // [rsp+18h] [rbp-20h] BYREF
  int v11[4]; // [rsp+28h] [rbp-10h] BYREF

  v11[1] = a2;
  v10[0] = a5;
  v11[0] = 0;
  v9 = a6;
  v8 = a7;
  return ClpModel::addColumns(this, 1, v10, &v9, &v8, v11, a3, a4);
}

