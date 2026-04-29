__int64 __fastcall sub_9D2D0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  result = clear_tinfo_t(a1 + 8);
  v3 = a1[5];
  if ( v3 )
  {
    a1[6] = 0;
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
