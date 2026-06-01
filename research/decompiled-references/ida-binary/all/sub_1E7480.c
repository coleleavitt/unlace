__int64 __fastcall sub_1E7480(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi

  v3 = a1[5];
  if ( v3 )
  {
    result = qfree(v3, a2);
    a1[5] = 0;
  }
  v5 = a1[6];
  if ( v5 )
  {
    a1[7] = 0;
    result = qfree(v5, a2);
    a1[6] = 0;
    a1[8] = 0;
  }
  v6 = a1[9];
  if ( v6 )
  {
    a1[10] = 0;
    result = qfree(v6, a2);
  }
  v7 = a1[6];
  if ( v7 )
  {
    a1[7] = 0;
    result = qfree(v7, a2);
  }
  v8 = a1[5];
  if ( v8 )
    return qfree(v8, a2);
  return result;
}
