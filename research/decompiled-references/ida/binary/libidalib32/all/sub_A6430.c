void __fastcall sub_A6430(__int64 a1)
{
  void *v2; // rdi
  void **v3; // rbx
  unsigned __int64 v4; // rbp
  void *v5; // rdi

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = *(void ***)(a1 + 40);
    v4 = *(_QWORD *)(a1 + 72) + 8LL;
    if ( (unsigned __int64)v3 < v4 )
    {
      do
      {
        v5 = *v3++;
        operator delete(v5, 0x200u);
      }
      while ( (unsigned __int64)v3 < v4 );
      v2 = *(void **)a1;
    }
    operator delete(v2, 8LL * *(_QWORD *)(a1 + 8));
  }
}

