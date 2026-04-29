__int64 __fastcall sub_20EC90(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi

  *a1 = off_4ABF20;
  v2 = a1[12];
  if ( v2 )
  {
    a1[13] = 0;
    qfree(v2);
  }
  v3 = a1[9];
  if ( v3 )
  {
    v4 = a1[10];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7);
          v3 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree(v3);
  }
  v8 = a1[6];
  if ( v8 )
  {
    a1[7] = 0;
    qfree(v8);
  }
  return j__qfree(a1);
}
