void __fastcall sub_2015CF0(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  void *v4; // rdi

  v2 = a1[1];
  v3 = *a1;
  if ( v2 != *a1 )
  {
    do
    {
      while ( 1 )
      {
        v4 = *(void **)(v3 + 40);
        if ( v4 )
          operator delete(v4);
        if ( *(_QWORD *)v3 == v3 + 16 )
          break;
        operator delete(*(void **)v3);
        v3 += 80;
        if ( v2 == v3 )
          goto LABEL_6;
      }
      v3 += 80;
    }
    while ( v2 != v3 );
LABEL_6:
    v3 = *a1;
  }
  if ( v3 )
    operator delete((void *)v3);
}
