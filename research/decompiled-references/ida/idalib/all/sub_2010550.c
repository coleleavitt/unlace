void __fastcall sub_2010550(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v3; // rdi
  __int64 v4; // rbp

  v1 = a1[2];
  if ( v1 )
  {
    while ( 1 )
    {
      sub_20104E0((__int64)a1, *(_QWORD **)(v1 + 24));
      v3 = *(void **)(v1 + 40);
      v4 = *(_QWORD *)(v1 + 16);
      if ( v3 == (void *)(v1 + 56) )
      {
        operator delete((void *)v1);
        if ( !v4 )
          return;
      }
      else
      {
        free(v3);
        operator delete((void *)v1);
        if ( !v4 )
          return;
      }
      v1 = v4;
    }
  }
}
