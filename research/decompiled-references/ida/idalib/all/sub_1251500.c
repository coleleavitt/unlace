void __fastcall sub_1251500(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void **v4; // r12
  void **v5; // rbx

  v2 = *(void **)(a1 + 72);
  if ( v2 )
    operator delete(v2);
  v3 = *(void **)(a1 + 48);
  if ( v3 )
    operator delete(v3);
  v4 = *(void ***)(a1 + 32);
  v5 = *(void ***)(a1 + 24);
  if ( v4 != v5 )
  {
    do
    {
      while ( *v5 != v5 + 2 )
      {
        operator delete(*v5);
        v5 += 4;
        if ( v4 == v5 )
          goto LABEL_8;
      }
      v5 += 4;
    }
    while ( v4 != v5 );
LABEL_8:
    v5 = *(void ***)(a1 + 24);
  }
  if ( v5 )
    operator delete(v5);
  if ( *(_QWORD *)a1 )
    operator delete(*(void **)a1);
}
