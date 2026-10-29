void __fastcall sub_15421C0(_QWORD *a1)
{
  void **v1; // r12
  void **v2; // rbx

  v1 = (void **)a1[27];
  v2 = (void **)a1[26];
  *a1 = &off_2BE8D00;
  if ( v1 != v2 )
  {
    do
    {
      while ( *v2 )
      {
        operator delete(*v2);
        v2 += 3;
        if ( v1 == v2 )
          goto LABEL_4;
      }
      v2 += 3;
    }
    while ( v1 != v2 );
LABEL_4:
    v2 = (void **)a1[26];
  }
  if ( v2 )
    operator delete(v2);
  operator delete(a1[23], 8LL * *((unsigned int *)a1 + 50), 4);
  operator delete(a1[20], 8LL * *((unsigned int *)a1 + 44), 4);
  operator delete(a1, 0xE8u);
}
