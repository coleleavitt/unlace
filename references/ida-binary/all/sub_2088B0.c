double __fastcall forms::glayout_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  _QWORD *v5; // rbx
  _QWORD *v6; // rbp

  *a1 = &forms::glayout_t___vtable;
  v3 = a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    result = qfree(v3, a2);
  }
  v5 = (_QWORD *)a1[1];
  *a1 = &forms::layout_t___vtable;
  v6 = &v5[a1[2]];
  if ( v5 != v6 )
  {
    do
    {
      if ( *v5 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
      ++v5;
    }
    while ( v6 != v5 );
    v6 = (_QWORD *)a1[1];
  }
  if ( v6 )
  {
    a1[2] = 0;
    return qfree(v6, a2);
  }
  return result;
}
