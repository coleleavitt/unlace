__int64 __fastcall Idiot::dropping(
        double a1,
        double a2,
        __int64 a3,
        int *a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13)
{
  int v11; // eax
  bool v12; // sf

  if ( a2 < a11 || a13 > a1 * (fmax(fabs(a12), fabs(a13)) + 1.0) )
  {
    *a4 = 0;
    return 1;
  }
  else
  {
    v11 = *a4 + 1;
    v12 = *a4 - 3 < 0;
    *a4 = v11;
    return (unsigned __int8)(v12 ^ __OFSUB__(v11, 4)) | (v11 == 4);
  }
}

