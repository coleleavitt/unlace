__int64 __fastcall ClpModel::addRow(ClpModel *this, int a2, const int *a3, const double *a4, double a5, double a6)
{
  double v7; // [rsp+0h] [rbp-28h] BYREF
  double v8[2]; // [rsp+8h] [rbp-20h] BYREF
  int v9[4]; // [rsp+18h] [rbp-10h] BYREF

  v9[1] = a2;
  v8[0] = a5;
  v9[0] = 0;
  v7 = a6;
  return ClpModel::addRows(this, 1, v8, &v7, v9, a3, a4);
}

