_QWORD *__fastcall sub_24EFB0(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v11; // ebp
  _QWORD *v12; // rax
  __int64 v13; // rdi
  _QWORD *result; // rax

  sub_1FDB10(a3, a4, a5, a6, a7, a8, a9, a10, a1, a2);
  if ( byte_8BA544 && sub_24EF00(a1, (int)a2) )
  {
    byte_8CC5E3 = 1;
    v11 = 0;
  }
  else
  {
    v11 = (sub_384360() != 0) | (unsigned int)a2;
  }
  if ( dword_8BA594 >= 0 && dword_8BA594 < (unsigned __int64)xmmword_8CC398 )
  {
    v12 = (_QWORD *)(qword_8CC390 + 56LL * dword_8BA594);
    if ( v12 )
    {
      if ( v12[1] )
      {
        v13 = sub_2E09C0(*v12);
        if ( v13 )
          return (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 1104LL))(
                             v13,
                             a1,
                             v11,
                             0);
      }
      else
      {
        v13 = sub_2E09C0(&s1);
        if ( v13 )
          return (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 1104LL))(
                             v13,
                             a1,
                             v11,
                             0);
      }
    }
  }
  result = &qword_8CD7E8;
  v13 = qword_8CD7E8;
  if ( qword_8CD7E8 )
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 1104LL))(
                       v13,
                       a1,
                       v11,
                       0);
  return result;
}
