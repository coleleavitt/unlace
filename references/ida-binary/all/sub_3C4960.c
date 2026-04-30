double __fastcall forms::hlayout_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  double result; // xmm0_8

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
    return qfree(v3, a2);
  }
  return result;
}
