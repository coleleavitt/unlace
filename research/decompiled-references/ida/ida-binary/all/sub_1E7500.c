__int64 __fastcall sub_1E7500(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 result; // rax
  __int64 i; // rbx
  void *v7; // rdi

  v3 = a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3, a2);
  }
  v4 = a1[1];
  result = *a1;
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v7 = *(void **)(result + 8 * i);
      if ( v7 )
      {
        a2 = (const char *)&off_18;
        operator delete(v7, 0x18u);
        result = *a1;
      }
    }
  }
  if ( result )
  {
    a1[1] = 0;
    return qfree(result, a2);
  }
  return result;
}
