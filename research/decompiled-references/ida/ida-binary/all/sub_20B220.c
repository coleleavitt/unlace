void __fastcall sub_20B220(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + 32 * i;
        if ( *(int *)v6 >= -1 )
        {
          v7 = *(_QWORD *)(v6 + 8);
          if ( v7 )
          {
            *(_QWORD *)(v6 + 16) = 0;
            qfree(v7, a2);
            v3 = *a1;
          }
        }
      }
    }
    a1[1] = 0;
    qfree(v3, a2);
  }
}
