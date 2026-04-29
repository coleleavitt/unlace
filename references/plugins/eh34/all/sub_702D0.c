__int64 __fastcall sub_702D0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  *a1 = off_8CA90;
  result = sub_6D1D0(a1);
  v3 = a1[8];
  if ( v3 )
  {
    a1[9] = 0;
    result = qfree(v3);
  }
  v4 = a1[5];
  if ( v4 )
  {
    a1[6] = 0;
    result = qfree(v4);
  }
  v5 = a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    return qfree(v5);
  }
  return result;
}
