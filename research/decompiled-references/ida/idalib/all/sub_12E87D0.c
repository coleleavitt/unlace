void __fastcall sub_12E87D0(_QWORD *a1)
{
  __int64 v1; // rbx
  void **v2; // r12
  void **v3; // rbx

  v1 = *((unsigned int *)a1 + 6);
  v2 = (void **)a1[2];
  *a1 = &off_2BAFAE0;
  v3 = &v2[4 * v1];
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 4;
        if ( *v3 == v3 + 2 )
          break;
        operator delete(*v3);
        if ( v2 == v3 )
          goto LABEL_4;
      }
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = (void **)a1[2];
  }
  if ( v3 != a1 + 4 )
    free(v3);
  nullsub_1231(a1);
  operator delete(a1, 0x120u);
}
