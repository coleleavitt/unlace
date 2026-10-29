void __fastcall ClpSimplex::makeBaseModel(ClpSimplex *this)
{
  void *v1; // rbp
  ClpSimplex *v2; // rbp

  v1 = *((void **)this + 175);
  if ( v1 )
  {
    ClpSimplex::~ClpSimplex(*((ClpSimplex **)this + 175));
    operator delete(v1);
  }
  v2 = (ClpSimplex *)operator new(0x6F0u);
  ClpSimplex::ClpSimplex(v2, this, -1);
  *((_QWORD *)this + 175) = v2;
}

