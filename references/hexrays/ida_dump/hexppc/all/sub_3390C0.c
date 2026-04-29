__int64 __fastcall sub_3390C0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi

  v2 = a1[15];
  if ( v2 )
  {
    a1[16] = 0;
    result = qfree(v2);
  }
  v4 = a1[12];
  if ( v4 )
  {
    a1[13] = 0;
    return qfree(v4);
  }
  return result;
}
