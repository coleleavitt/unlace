_QWORD *Clp_newModel()
{
  _QWORD *v0; // rbx
  ClpSimplex *v1; // rbp

  v0 = (_QWORD *)operator new(0x10u);
  v1 = (ClpSimplex *)operator new(0x6F0u);
  ClpSimplex::ClpSimplex(v1, 0);
  *v0 = v1;
  v0[1] = 0;
  return v0;
}

