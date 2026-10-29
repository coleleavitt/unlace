__int64 __fastcall sub_12E8B50(__int64 a1)
{
  int v2; // eax
  char *v3; // rdi
  __int64 v4; // r12
  __int64 v5; // r14
  _QWORD *v6; // rbp
  _QWORD *v7; // rdi
  __int64 v8; // r13
  void *v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rbp
  void *v12; // rdi
  char *v13; // rdi
  int v14; // eax
  __int64 v15; // rbp
  __int64 v16; // r12
  _QWORD *v17; // rax
  void *v18; // rdi

  *(_QWORD *)a1 = &off_2C44038;
  sub_1390CD0();
  if ( *(_DWORD *)(a1 + 196) )
  {
    v2 = *(_DWORD *)(a1 + 192);
    v3 = *(char **)(a1 + 184);
    if ( v2 )
    {
      v4 = 0;
      v5 = 8LL * (unsigned int)(v2 - 1) + 8;
      do
      {
        v6 = *(_QWORD **)&v3[v4];
        if ( v6 && v6 != (_QWORD *)-8LL )
        {
          v7 = (_QWORD *)v6[1];
          v8 = *v6 + 41LL;
          if ( v7 != v6 + 3 )
            operator delete(v7);
          operator delete(v6, v8, 8);
          v3 = *(char **)(a1 + 184);
        }
        v4 += 8;
      }
      while ( v5 != v4 );
    }
  }
  else
  {
    v3 = *(char **)(a1 + 184);
  }
  free(v3);
  v9 = *(void **)(a1 + 152);
  if ( v9 != (void *)(a1 + 168) )
    operator delete(v9);
  v10 = *(_QWORD *)(a1 + 128);
  v11 = *(_QWORD *)(a1 + 120);
  if ( v10 != v11 )
  {
    do
    {
      while ( 1 )
      {
        v12 = *(void **)(v11 + 32);
        if ( v12 != (void *)(v11 + 48) )
          operator delete(v12);
        if ( *(_QWORD *)v11 == v11 + 16 )
          break;
        operator delete(*(void **)v11);
        v11 += 72;
        if ( v11 == v10 )
          goto LABEL_17;
      }
      v11 += 72;
    }
    while ( v10 != v11 );
LABEL_17:
    v11 = *(_QWORD *)(a1 + 120);
  }
  if ( v11 )
    operator delete((void *)v11);
  v13 = *(char **)(a1 + 96);
  if ( *(_DWORD *)(a1 + 108) )
  {
    v14 = *(_DWORD *)(a1 + 104);
    if ( v14 )
    {
      v15 = 0;
      v16 = 8LL * (unsigned int)(v14 - 1) + 8;
      do
      {
        v17 = *(_QWORD **)&v13[v15];
        if ( v17 != (_QWORD *)-8LL && v17 )
        {
          operator delete(*(_QWORD *)&v13[v15], *v17 + 9LL, 8);
          v13 = *(char **)(a1 + 96);
        }
        v15 += 8;
      }
      while ( v16 != v15 );
    }
  }
  free(v13);
  v18 = *(void **)(a1 + 56);
  if ( v18 != (void *)(a1 + 72) )
    operator delete(v18);
  return sub_1357560(a1);
}
