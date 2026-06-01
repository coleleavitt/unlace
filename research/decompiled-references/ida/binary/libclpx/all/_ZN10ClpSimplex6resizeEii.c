void __fastcall ClpSimplex::resize(ClpSimplex *this, int a2, int a3)
{
  void *v4; // rdi
  bool v5; // zf
  int v6; // ebp

  ClpModel::resize(this, a2, a3);
  v4 = *((void **)this + 174);
  if ( v4 )
    operator delete[](v4);
  v5 = *((_QWORD *)this + 164) == 0;
  *((_QWORD *)this + 174) = 0;
  *((_DWORD *)this + 347) = 0;
  if ( !v5 )
  {
    v6 = *((_DWORD *)this + 84);
    *((_DWORD *)this + 84) = 0;
    ClpSimplex::gutsOfDelete(this, 2);
    *((_DWORD *)this + 84) = v6;
  }
}

