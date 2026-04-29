__int64 (__fastcall **__fastcall sub_212990(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax

  result = off_4D9C20;
  *a1 = off_4D9C20;
  v3 = a1[6];
  if ( v3 )
  {
    v4 = a1[7];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = i;
        sub_11C7E0(16 * v6 + v3);
        v3 = a1[6];
      }
    }
    a1[7] = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
