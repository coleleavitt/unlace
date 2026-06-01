double __fastcall sub_459A00(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  double result; // xmm0_8

  v2 = *(_QWORD *)(a2 + 40);
  if ( v2 )
    return qfree(v2, (const char *)a2);
  return result;
}
