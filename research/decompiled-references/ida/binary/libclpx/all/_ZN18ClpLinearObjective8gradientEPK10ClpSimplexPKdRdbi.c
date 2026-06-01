__int64 __fastcall ClpLinearObjective::gradient(
        ClpLinearObjective *this,
        const ClpSimplex *a2,
        const double *a3,
        double *a4)
{
  *a4 = 0.0;
  return *((_QWORD *)this + 3);
}

