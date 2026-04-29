__int64 __fastcall sub_C8A20(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  *a1 = &off_4A9420;
  result = qfree(a1[5]);
  v3 = a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    return qfree(v3);
  }
  return result;
}
