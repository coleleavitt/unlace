__int64 __fastcall sub_1EBFA0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi

  v2 = a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    qfree(v2);
  }
  result = qfree(a1[7]);
  v4 = a1[4];
  if ( v4 )
  {
    a1[5] = 0;
    result = qfree(v4);
  }
  v5 = a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    return qfree(v5);
  }
  return result;
}
