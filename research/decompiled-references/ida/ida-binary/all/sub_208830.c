void __fastcall forms::vlayout_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp

  v2 = (_QWORD *)a1[1];
  *a1 = &forms::layout_t___vtable;
  v3 = &v2[a1[2]];
  if ( v2 != v3 )
  {
    do
    {
      if ( *v2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
      ++v2;
    }
    while ( v3 != v2 );
    v3 = (_QWORD *)a1[1];
  }
  if ( v3 )
  {
    a1[2] = 0;
    qfree(v3, a2);
  }
  operator delete(a1, 0x28u);
}
