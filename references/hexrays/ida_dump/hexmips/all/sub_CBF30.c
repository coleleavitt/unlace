__int64 __fastcall sub_CBF30(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  v2 = a1[14];
  if ( v2 )
  {
    a1[15] = 0;
    result = qfree(v2);
  }
  v4 = a1[11];
  if ( v4 )
  {
    a1[12] = 0;
    result = qfree(v4);
  }
  v5 = a1[4];
  if ( v5 )
  {
    a1[5] = 0;
    result = qfree(v5);
  }
  v6 = a1[1];
  if ( v6 )
  {
    a1[2] = 0;
    return qfree(v6);
  }
  return result;
}
