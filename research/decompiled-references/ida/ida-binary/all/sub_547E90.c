double __fastcall sub_547E90(__int64 a1, const char *a2)
{
  __int64 v2; // rdi
  double result; // xmm0_8
  __int64 v4; // rdi

  v2 = *((_QWORD *)a2 + 3);
  if ( v2 )
  {
    *((_QWORD *)a2 + 4) = 0;
    result = qfree(v2, a2);
  }
  v4 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    *((_QWORD *)a2 + 1) = 0;
    return qfree(v4, a2);
  }
  return result;
}
