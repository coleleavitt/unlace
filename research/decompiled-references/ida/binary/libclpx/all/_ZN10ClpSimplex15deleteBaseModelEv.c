void __fastcall ClpSimplex::deleteBaseModel(ClpSimplex *this)
{
  void *v1; // rbx

  v1 = *((void **)this + 175);
  if ( v1 )
  {
    ClpSimplex::~ClpSimplex(*((ClpSimplex **)this + 175));
    operator delete(v1);
  }
  *((_QWORD *)this + 175) = 0;
}

