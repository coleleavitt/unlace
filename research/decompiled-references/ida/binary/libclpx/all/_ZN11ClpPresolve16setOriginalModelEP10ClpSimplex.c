void __fastcall ClpPresolve::setOriginalModel(ClpPresolve *this, ClpSimplex *a2)
{
  *((_QWORD *)this + 1) = a2;
}

