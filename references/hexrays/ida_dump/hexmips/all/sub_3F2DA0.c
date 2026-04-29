__int64 __fastcall sub_3F2DA0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    a1[1] = 0;
    result = qfree(v2);
    *a1 = 0;
    a1[2] = 0;
  }
  return result;
}
