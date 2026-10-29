void __fastcall forms::glayout_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp

  *a1 = &forms::glayout_t___vtable;
  v3 = a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    qfree(v3, a2);
  }
  v4 = (_QWORD *)a1[1];
  *a1 = &forms::layout_t___vtable;
  v5 = &v4[a1[2]];
  if ( v4 != v5 )
  {
    do
    {
      if ( *v4 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8LL))(*v4);
      ++v4;
    }
    while ( v5 != v4 );
    v5 = (_QWORD *)a1[1];
  }
  if ( v5 )
  {
    a1[2] = 0;
    qfree(v5, a2);
  }
  operator delete(a1, 0x50u);
}
