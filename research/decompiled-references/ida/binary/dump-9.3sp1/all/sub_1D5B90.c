__int64 __fastcall sub_1D5B90(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
    {
      a1[1] = 0;
      qfree(v2);
    }
    return qfree((__int64)a1);
  }
  return result;
}
