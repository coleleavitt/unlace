void __fastcall sub_5F8C40(__int64 a1)
{
  __int64 *v1; // r12
  __int64 v2; // rbp
  __int64 v3; // rbx

  v1 = *(__int64 **)(a1 + 40);
  if ( v1 )
  {
    v2 = v1[1];
    v3 = *v1;
    if ( v2 != *v1 )
    {
      do
      {
        if ( *(_QWORD *)v3 != v3 + 16 )
          operator delete(*(void **)v3, *(_QWORD *)(v3 + 16) + 1LL);
        v3 += 40;
      }
      while ( v2 != v3 );
      v3 = *v1;
    }
    if ( v3 )
      operator delete((void *)v3, v1[2] - v3);
    operator delete(v1, 0x18u);
  }
}

