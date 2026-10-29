__int64 __fastcall sub_3CB360(_QWORD *a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rdi

  if ( a1[7] )
    result = qfree();
  v3 = (volatile signed __int32 *)a1[6];
  if ( v3 )
    result = sub_3CB2E0(v3);
  if ( a1[2] )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}
