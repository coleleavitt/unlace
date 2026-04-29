__int64 __fastcall sub_2ADB00(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = &off_4DB5D0;
  result = merge_handler_dtr();
  v3 = a1[12];
  if ( v3 )
  {
    a1[13] = 0;
    result = qfree(v3);
  }
  v4 = a1[2];
  if ( v4 )
  {
    a1[3] = 0;
    return qfree(v4);
  }
  return result;
}
