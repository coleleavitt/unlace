__int64 __fastcall ClpSimplexDual::perturb(
        __int64 this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  if ( *(int *)(this + 1308) > 100 )
    return 0;
  if ( *(_DWORD *)(this + 1308) == 100 )
    *(_DWORD *)(this + 1308) = 50;
  return sub_1350F0(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}

