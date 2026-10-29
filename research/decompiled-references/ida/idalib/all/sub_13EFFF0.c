__int64 __fastcall sub_13EFFF0(_QWORD *ptr)
{
  void **v1; // r12
  void **v2; // rbx
  __int64 v3; // r13

  v1 = (void **)ptr[2];
  v2 = (void **)ptr[1];
  v3 = ptr[4];
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
    v2 = (void **)ptr[1];
  }
  if ( v2 )
    operator delete(v2);
  free(ptr);
  return v3;
}
