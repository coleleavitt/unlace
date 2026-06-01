void __fastcall sub_3D4D0(_QWORD *a1)
{
  char *v1; // rdx
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 i; // rbx
  void *v6; // rdi

  v1 = (char *)a1[2];
  *a1 = &off_162678;
  if ( v1 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = *(void **)&v1[v4];
        if ( v6 )
        {
          *(_QWORD *)&v1[v4 + 8] = 0;
          j__free(v6);
          v1 = (char *)a1[2];
        }
        v4 += 56;
      }
    }
    a1[3] = 0;
    j__free(v1);
  }
}

