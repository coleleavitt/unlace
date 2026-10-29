double __fastcall sub_531D60(__int64 *a1)
{
  __int64 *v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rdi
  double result; // xmm0_8

  v1 = (__int64 *)(*a1 + 96);
  sub_531C60(a1 + 1, v1);
  v3 = *(_QWORD *)(v2 + 8);
  if ( v3 )
  {
    *(_QWORD *)(v2 + 16) = 0;
    return qfree(v3, (const char *)v1);
  }
  return result;
}
