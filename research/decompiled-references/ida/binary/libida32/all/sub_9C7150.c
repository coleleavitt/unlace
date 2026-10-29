void __fastcall sub_9C7150(_QWORD *a1)
{
  void **v1; // r12
  void **v2; // rbx

  v1 = (void **)a1[2];
  v2 = (void **)a1[1];
  *a1 = &off_2B16CE0;
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
    v2 = (void **)a1[1];
  }
  if ( v2 )
    operator delete(v2);
}

