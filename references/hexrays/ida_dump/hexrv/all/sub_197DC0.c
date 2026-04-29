__int64 __fastcall sub_197DC0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdi

  v2 = a1[27];
  if ( v2 )
  {
    a1[28] = 0;
    qfree(v2);
  }
  qfree(a1[25]);
  v3 = a1[22];
  if ( v3 )
  {
    a1[23] = 0;
    qfree(v3);
  }
  qfree(a1[20]);
  v4 = a1[17];
  if ( v4 )
  {
    a1[18] = 0;
    qfree(v4);
  }
  result = qfree(a1[15]);
  v6 = a1[10];
  if ( v6 )
  {
    a1[11] = 0;
    return qfree(v6);
  }
  return result;
}
