void __fastcall sub_1304960(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v3; // rdi
  __int64 v4; // rbp

  v1 = a1[2];
  if ( v1 )
  {
    while ( 1 )
    {
      sub_13048F0((__int64)a1, *(_QWORD **)(v1 + 24));
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
        operator delete(v3);
        operator delete((void *)v1);
        if ( !v4 )
          return;
      }
      v1 = v4;
    }
  }
}
