__int64 __fastcall ClpPresolve::presolvedModelToFile(
        __int64 a1,
        __int64 a2,
        const std::string *a3,
        unsigned __int8 a4,
        unsigned int a5,
        unsigned __int8 a6,
        double a7,
        unsigned __int8 a8)
{
  char v11; // al
  unsigned int v12; // edx
  __int64 v13; // rax

  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, double, double))(**(_QWORD **)(a2 + 192) + 184LL))(
          *(_QWORD *)(a2 + 192),
          a2,
          15,
          *(double *)(a2 + 80),
          1.0e20);
  v12 = 2;
  if ( v11 )
  {
    std::string::assign((std::string *)(a1 + 88), a3);
    ClpSimplex::saveModel((ClpSimplex *)a2, *(const char **)(a1 + 88));
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, double, _QWORD, _QWORD))(*(_QWORD *)a1 + 40LL))(
            a1,
            a2,
            a4,
            a5,
            a6,
            a8,
            a7,
            0,
            0);
    v12 = 0;
    if ( a2 != v13 )
    {
      ClpSimplex::restoreModel((ClpSimplex *)a2, *(const char **)(a1 + 88));
      remove(*(const char **)(a1 + 88));
      return 1;
    }
  }
  return v12;
}

