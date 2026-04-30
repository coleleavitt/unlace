__int64 __fastcall sub_1B3480(_QWORD *a1, const char *a2)
{
  __int64 result; // rax
  __int64 v4; // rdi

  qfree(a1[6], a2);
  a1[6] = 0;
  result = qfree(a1[7], a2);
  v4 = a1[5];
  a1[7] = 0;
  if ( v4 )
    return qfree(v4, a2);
  return result;
}
