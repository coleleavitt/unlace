void __fastcall sub_435B00(__int64 a1)
{
  void **v2; // rbp
  void **v3; // rbx
  void *v4; // rdi

  v2 = *(void ***)(a1 + 8);
  v3 = *(void ***)a1;
  if ( v2 != *(void ***)a1 )
  {
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v3[1] = nullptr;
        qfree(v4);
      }
      v3 += 3;
    }
    while ( v2 != v3 );
    v3 = *(void ***)a1;
  }
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
}
