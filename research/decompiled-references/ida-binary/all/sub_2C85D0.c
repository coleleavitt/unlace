double __fastcall text_enc_ah_t__::vfunc_3(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi

  *a1 = text_enc_ah_t___vtable;
  v3 = a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3, a2);
  }
  return qfree(a1, a2);
}
