__int64 __fastcall sub_F56E50(__int64 a1)
{
  void *v2; // rdi
  _QWORD *v3; // rbp
  __int64 v4; // rdx
  _QWORD *v5; // r12
  _QWORD *v6; // rdi
  void *v7; // rdi
  unsigned int v8; // esi
  _QWORD *v9; // r12
  _QWORD *v10; // rbp
  _QWORD *v11; // rdi

  v2 = *(void **)(a1 + 864);
  if ( v2 != (void *)(a1 + 880) )
    free(v2);
  if ( !*(_BYTE *)(a1 + 828) )
    free(*(void **)(a1 + 808));
  v3 = *(_QWORD **)(a1 + 784);
  v4 = *(unsigned int *)(a1 + 800);
  if ( (_DWORD)v4 )
  {
    v5 = &v3[10 * v4];
    do
    {
      if ( *v3 != -8192 && *v3 != -4096 )
      {
        v6 = (_QWORD *)v3[1];
        if ( v6 != v3 + 3 )
          free(v6);
      }
      v3 += 10;
    }
    while ( v5 != v3 );
  }
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  v7 = *(void **)(a1 + 160);
  if ( v7 != (void *)(a1 + 176) )
    free(v7);
  operator delete();
  v8 = *(_DWORD *)(a1 + 128);
  if ( v8 )
  {
    v9 = *(_QWORD **)(a1 + 112);
    v10 = &v9[35 * v8];
    do
    {
      if ( *v9 != -4096 && *v9 != -8192 )
      {
        v11 = (_QWORD *)v9[1];
        if ( v11 != v9 + 3 )
          free(v11);
      }
      v9 += 35;
    }
    while ( v10 != v9 );
  }
  operator delete();
  return operator delete();
}

