__int64 __fastcall sub_63F990(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rbx
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rbx
  void *v10; // rdi

  v2 = *(unsigned int *)(a1 + 496);
  v3 = *(_QWORD *)(a1 + 488);
  *(_QWORD *)a1 = &off_49F4BC8;
  v4 = v3 + (v2 << 7);
  if ( v3 != v4 )
  {
    do
    {
      v4 -= 128;
      v5 = *(void **)(v4 + 96);
      if ( v5 != (void *)(v4 + 112) )
        operator delete(v5, *(_QWORD *)(v4 + 112) + 1LL);
      v6 = *(void **)(v4 + 64);
      if ( v6 != (void *)(v4 + 80) )
        operator delete(v6, *(_QWORD *)(v4 + 80) + 1LL);
      v7 = *(void **)(v4 + 32);
      if ( v7 != (void *)(v4 + 48) )
        operator delete(v7, *(_QWORD *)(v4 + 48) + 1LL);
      if ( *(_QWORD *)v4 != v4 + 16 )
        operator delete(*(void **)v4, *(_QWORD *)(v4 + 16) + 1LL);
    }
    while ( v3 != v4 );
    v4 = *(_QWORD *)(a1 + 488);
  }
  if ( v4 != a1 + 504 )
    free((void *)v4);
  v8 = *(_QWORD *)(a1 + 392);
  v9 = v8 + 80LL * *(unsigned int *)(a1 + 400);
  if ( v8 != v9 )
  {
    do
    {
      v9 -= 80;
      v10 = *(void **)(v9 + 32);
      if ( v10 != (void *)(v9 + 48) )
        operator delete(v10, *(_QWORD *)(v9 + 48) + 1LL);
      if ( *(_QWORD *)v9 != v9 + 16 )
        operator delete(*(void **)v9, *(_QWORD *)(v9 + 16) + 1LL);
    }
    while ( v8 != v9 );
    v9 = *(_QWORD *)(a1 + 392);
  }
  if ( v9 != a1 + 408 )
    free((void *)v9);
  *(_QWORD *)a1 = &off_4992FF0;
  return sub_FC94A0(a1);
}

