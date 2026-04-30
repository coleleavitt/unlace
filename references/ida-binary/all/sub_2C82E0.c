double __fastcall text_enc_ah_t__::vfunc_2(_QWORD *a1, const char *a2)
{
  __int64 v2; // rax
  double result; // xmm0_8

  *a1 = text_enc_ah_t___vtable;
  v2 = a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    return qfree(v2, a2);
  }
  return result;
}
