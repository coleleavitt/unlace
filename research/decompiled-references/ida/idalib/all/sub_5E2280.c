void __fastcall sub_5E2280(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax

  *a1 = &off_2BFB408;
  a1[1] = 0;
  v2 = (char *)a1[2];
  if ( v2 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = i;
        clear_tinfo_t(&v2[16 * v5]);
        v2 = (char *)a1[2];
      }
    }
    a1[3] = 0;
    qfree(v2);
  }
}
