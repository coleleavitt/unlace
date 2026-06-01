void __fastcall sub_677A70(__int64 *a1)
{
  void ***v2; // rbx
  void ***v3; // r12
  void **v4; // rbp
  void *v5; // rdi

  v2 = (void ***)a1[21];
  *a1 = (__int64)&off_1C52CD0;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 == v3 )
      goto LABEL_9;
    do
    {
      v4 = *v2;
      if ( *v2 )
      {
        if ( *v4 )
          sub_186B220(*v4);
        sub_186B220(v4);
      }
      ++v2;
    }
    while ( v3 != v2 );
    v3 = (void ***)a1[21];
    if ( v3 )
    {
LABEL_9:
      *((_DWORD *)v3 - 1) = 0;
      sub_186B220(v3 - 1);
    }
  }
  v5 = (void *)a1[18];
  if ( v5 )
    sub_186B220(v5);
  sub_6775C0(a1);
  operator delete(a1, 0xB0u);
}

