void __fastcall sub_BFF870(__int64 a1)
{
  int *v1; // rbp
  int *v2; // rbx

  v1 = *(int **)a1;
  v2 = (int *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
  if ( *(int **)a1 != v2 )
  {
    do
    {
      while ( 1 )
      {
        v2 -= 14;
        if ( (unsigned int)*v2 > 1 )
          break;
        if ( v2 == v1 )
          goto LABEL_4;
      }
      sub_A2BBA0(v2);
    }
    while ( v2 != v1 );
LABEL_4:
    v2 = *(int **)a1;
  }
  if ( v2 != (int *)(a1 + 16) )
    free(v2);
}

