void __fastcall sub_117F230(__int64 a1)
{
  void **v2; // r12
  void **v3; // rbx
  void *v4; // rdi
  void *v5; // rdi

  v2 = *(void ***)(a1 + 104);
  v3 = *(void ***)(a1 + 96);
  if ( v2 != v3 )
  {
    do
    {
      while ( *v3 != v3 + 2 )
      {
        operator delete(*v3);
        v3 += 4;
        if ( v2 == v3 )
          goto LABEL_4;
      }
      v3 += 4;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = *(void ***)(a1 + 96);
  }
  if ( v3 )
    operator delete(v3);
  v4 = *(void **)(a1 + 64);
  if ( v4 != (void *)(a1 + 80) )
    operator delete(v4);
  v5 = *(void **)(a1 + 32);
  if ( v5 != (void *)(a1 + 48) )
    operator delete(v5);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
}
