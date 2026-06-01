__int64 __fastcall sub_6408F0(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rbx
  void *v9; // rdi

  v2 = a1[50];
  v3 = a1[49];
  *a1 = &off_4992FC8;
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v3 + 40);
      if ( v4 != (void *)(v3 + 56) )
        operator delete(v4, *(_QWORD *)(v3 + 56) + 1LL);
      if ( *(_QWORD *)v3 != v3 + 16 )
        operator delete(*(void **)v3, *(_QWORD *)(v3 + 16) + 1LL);
      v3 += 80;
    }
    while ( v2 != v3 );
    v3 = a1[49];
  }
  if ( v3 )
    operator delete((void *)v3, a1[51] - v3);
  v5 = a1[47];
  v6 = a1[46];
  if ( v5 != v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 40);
      v8 = *(_QWORD *)(v6 + 32);
      if ( v7 != v8 )
      {
        do
        {
          v9 = *(void **)(v8 + 40);
          if ( v9 != (void *)(v8 + 56) )
            operator delete(v9, *(_QWORD *)(v8 + 56) + 1LL);
          if ( *(_QWORD *)v8 != v8 + 16 )
            operator delete(*(void **)v8, *(_QWORD *)(v8 + 16) + 1LL);
          v8 += 80;
        }
        while ( v7 != v8 );
        v8 = *(_QWORD *)(v6 + 32);
      }
      if ( v8 )
        operator delete((void *)v8, *(_QWORD *)(v6 + 48) - v8);
      if ( *(_QWORD *)v6 != v6 + 16 )
        operator delete(*(void **)v6, *(_QWORD *)(v6 + 16) + 1LL);
      v6 += 56;
    }
    while ( v5 != v6 );
    v6 = a1[46];
  }
  if ( v6 )
    operator delete((void *)v6, a1[48] - v6);
  return sub_FC94A0(a1);
}

