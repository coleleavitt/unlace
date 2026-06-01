void __fastcall ClpPresolve::destroyPresolve(ClpPresolve *this)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  v2 = *((_QWORD **)this + 7);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)v2[1];
      (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *((void **)this + 4);
  if ( v4 )
    operator delete[](v4);
  v5 = *((void **)this + 5);
  if ( v5 )
    operator delete[](v5);
  v6 = *((void **)this + 6);
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  if ( v6 )
    operator delete[](v6);
  *((_QWORD *)this + 6) = 0;
}

