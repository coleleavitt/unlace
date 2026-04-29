__int64 __fastcall sub_CBE30(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi

  v2 = a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    result = qfree(v2);
  }
  v4 = a1[1];
  if ( v4 )
  {
    a1[2] = 0;
    return qfree(v4);
  }
  return result;
}
