void __fastcall sub_690750(__int64 a1)
{
  void ***v1; // rbx
  void ***v2; // r12
  void **v3; // rbp

  v1 = *(void ****)a1;
  v2 = *(void ****)(a1 + 8);
  if ( v2 != *(void ****)a1 )
  {
    do
    {
      v3 = *v1;
      if ( *v1 )
      {
        if ( *v3 != v3 + 3 )
          free(*v3);
        operator delete(v3, 0xA0u);
      }
      ++v1;
    }
    while ( v2 != v1 );
    v1 = *(void ****)a1;
  }
  if ( v1 )
    operator delete(v1, *(_QWORD *)(a1 + 16) - (_QWORD)v1);
}

