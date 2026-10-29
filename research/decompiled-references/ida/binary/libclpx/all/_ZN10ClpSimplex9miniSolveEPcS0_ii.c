void __fastcall ClpSimplex::miniSolve(ClpSimplex *this, char *a2, char *a3, int a4, int a5)
{
  ClpSimplex *v7; // rax
  const ClpSimplex *v8; // rbp
  void *v9; // [rsp+8h] [rbp-30h] BYREF

  v9 = nullptr;
  v7 = (ClpSimplex *)ClpSimplex::miniPresolve(this, a2, a3, &v9);
  v8 = v7;
  if ( a4 < 0 )
    ClpSimplex::dual(v7, a5, 0);
  else
    ClpSimplex::primal(v7, a5, 0);
  ClpSimplex::miniPostsolve(this, v8, v9);
  operator delete(v9);
}

