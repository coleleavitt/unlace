double __fastcall sub_5467D0(__int64 a1, const char *a2)
{
  __int64 v2; // rdi
  double result; // xmm0_8

  v2 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    *((_QWORD *)a2 + 1) = 0;
    return qfree(v2, a2);
  }
  return result;
}
