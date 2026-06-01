ClpSolve *ClpSolve_new()
{
  ClpSolve *v0; // rbx

  v0 = (ClpSolve *)operator new(0x50u);
  *(_OWORD *)v0 = 0;
  *((_OWORD *)v0 + 1) = 0;
  *((_OWORD *)v0 + 2) = 0;
  *((_OWORD *)v0 + 3) = 0;
  *((_OWORD *)v0 + 4) = 0;
  ClpSolve::ClpSolve(v0);
  return v0;
}

