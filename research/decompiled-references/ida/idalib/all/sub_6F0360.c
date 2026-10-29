void __fastcall sub_6F0360(_QWORD *a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi

  v2 = (char *)a1[3];
  *a1 = &off_2BFB670;
  a1[2] = 0;
  if ( v2 )
  {
    v3 = a1[4];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[24 * i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v6);
          v2 = (char *)a1[3];
        }
      }
    }
    a1[4] = 0;
    qfree(v2);
  }
  nullsub_469(a1);
  operator delete(a1, 0x38u);
}
