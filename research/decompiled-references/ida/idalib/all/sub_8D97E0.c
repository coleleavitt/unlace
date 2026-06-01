void __fastcall sub_8D97E0(_QWORD *a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi

  v2 = (char *)a1[2];
  *a1 = &off_2B3EC98;
  if ( v2 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[32 * i];
        v6 = *((void **)v5 + 1);
        if ( v6 )
        {
          *((_QWORD *)v5 + 2) = 0;
          qfree(v6);
          v2 = (char *)a1[2];
        }
      }
    }
    a1[3] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x28u);
}
