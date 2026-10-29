__int64 __fastcall ClpPresolve::presolvedModel(
        ClpPresolve *this,
        ClpSimplex *a2,
        double a3,
        unsigned __int8 a4,
        unsigned int a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        const char *a8,
        const char *a9)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, ClpSimplex *, _QWORD, double, double))(**((_QWORD **)a2 + 24) + 184LL))(
         *((_QWORD *)a2 + 24),
         a2,
         (unsigned int)(*((_BYTE *)a2 + 336) >= 0) + 14,
         *((double *)a2 + 10),
         1.0e20) )
  {
    return (*(__int64 (__fastcall **)(ClpPresolve *, ClpSimplex *, _QWORD, _QWORD, _QWORD, _QWORD, double, const char *, const char *))(*(_QWORD *)this + 40LL))(
             this,
             a2,
             a4,
             a5,
             a6,
             a7,
             a3,
             a8,
             a9);
  }
  else
  {
    return 0;
  }
}

