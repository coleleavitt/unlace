double __fastcall sub_1FE3E0(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax
  double result; // xmm0_8

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = i;
        qfree(*(_QWORD *)(v3 + 16 * v6), a2);
        v3 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v3, a2);
  }
  return result;
}
