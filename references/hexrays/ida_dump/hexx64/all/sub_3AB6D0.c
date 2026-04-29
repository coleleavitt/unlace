__int64 __fastcall sub_3AB6D0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi

  v2 = a1[10];
  *a1 = off_4E7450;
  if ( v2 )
  {
    v3 = a1[11];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 40 * i;
        v6 = *(_QWORD *)(v5 + 16);
        if ( v6 )
        {
          *(_QWORD *)(v5 + 24) = 0;
          qfree(v6);
          v2 = a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree(v2);
  }
  v7 = a1[5];
  *a1 = off_4DBCF8;
  if ( v7 )
  {
    a1[6] = 0;
    qfree(v7);
  }
  v8 = a1[2];
  if ( v8 )
  {
    a1[3] = 0;
    qfree(v8);
  }
  return j__qfree(a1);
}
