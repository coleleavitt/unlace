__int64 __fastcall expidc_ah_t__::vfunc_3(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi

  *a1 = &off_86FEF0;
  v6 = a1[2];
  if ( v6 )
  {
    a1[3] = 0;
    qfree(v6, a2, a3, a4, a5);
  }
  return qfree(a1, a2, a3, a4, a5);
}
