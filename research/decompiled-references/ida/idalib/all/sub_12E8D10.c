__int64 __fastcall sub_12E8D10(__int64 a1)
{
  __int64 v1; // r12
  __int64 (__fastcall *v2)(__int64); // rax
  int v4; // eax
  char *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r15
  _QWORD *v8; // rbp
  _QWORD *v9; // rdi
  __int64 v10; // r14
  void *v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rbp
  void *v14; // rdi
  char *v15; // rdi
  int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // r13
  _QWORD *v19; // rax
  void *v20; // rdi

  v1 = a1 + 16;
  v2 = **(__int64 (__fastcall ***)(__int64))(a1 + 16);
  if ( v2 != sub_12E8B50 )
    return v2(a1 + 16);
  *(_QWORD *)(a1 + 16) = &off_2C44038;
  sub_1390CD0(a1 + 16);
  if ( *(_DWORD *)(a1 + 212) )
  {
    v4 = *(_DWORD *)(a1 + 208);
    v5 = *(char **)(a1 + 200);
    if ( v4 )
    {
      v6 = 0;
      v7 = 8LL * (unsigned int)(v4 - 1) + 8;
      do
      {
        v8 = *(_QWORD **)&v5[v6];
        if ( v8 != (_QWORD *)-8LL && v8 )
        {
          v9 = (_QWORD *)v8[1];
          v10 = *v8 + 41LL;
          if ( v9 != v8 + 3 )
            operator delete(v9);
          operator delete(v8, v10, 8);
          v5 = *(char **)(a1 + 200);
        }
        v6 += 8;
      }
      while ( v7 != v6 );
    }
  }
  else
  {
    v5 = *(char **)(a1 + 200);
  }
  free(v5);
  v11 = *(void **)(a1 + 168);
  if ( v11 != (void *)(a1 + 184) )
    operator delete(v11);
  v12 = *(_QWORD *)(a1 + 144);
  v13 = *(_QWORD *)(a1 + 136);
  if ( v12 != v13 )
  {
    do
    {
      while ( 1 )
      {
        v14 = *(void **)(v13 + 32);
        if ( v14 != (void *)(v13 + 48) )
          operator delete(v14);
        if ( *(_QWORD *)v13 == v13 + 16 )
          break;
        operator delete(*(void **)v13);
        v13 += 72;
        if ( v13 == v12 )
          goto LABEL_20;
      }
      v13 += 72;
    }
    while ( v12 != v13 );
LABEL_20:
    v13 = *(_QWORD *)(a1 + 136);
  }
  if ( v13 )
    operator delete((void *)v13);
  v15 = *(char **)(a1 + 112);
  if ( *(_DWORD *)(a1 + 124) )
  {
    v16 = *(_DWORD *)(a1 + 120);
    if ( v16 )
    {
      v17 = 0;
      v18 = 8LL * (unsigned int)(v16 - 1) + 8;
      do
      {
        v19 = *(_QWORD **)&v15[v17];
        if ( v19 != (_QWORD *)-8LL && v19 )
        {
          operator delete(*(_QWORD *)&v15[v17], *v19 + 9LL, 8);
          v15 = *(char **)(a1 + 112);
        }
        v17 += 8;
      }
      while ( v18 != v17 );
    }
  }
  free(v15);
  v20 = *(void **)(a1 + 72);
  if ( v20 != (void *)(a1 + 88) )
    operator delete(v20);
  return sub_1357560(v1);
}
