__int64 __fastcall sub_3CE0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi

  v2 = a1[3];
  if ( v2 )
  {
    a1[4] = 0;
    result = qfree(v2);
  }
  v4 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree(v4);
  }
  return result;
}

