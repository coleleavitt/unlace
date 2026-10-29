void __fastcall sub_6CED10(__int64 a1)
{
  char *v2; // rbp
  char *v3; // rbx
  __int64 v4; // rdi
  char *v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rdi
  char *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rdi

  v2 = *(char **)(a1 + 64);
  v3 = &v2[8 * *(unsigned int *)(a1 + 72)];
  if ( v2 != v3 )
  {
    do
    {
      v4 = *((_QWORD *)v3 - 1);
      v3 -= 8;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    }
    while ( v2 != v3 );
    v3 = *(char **)(a1 + 64);
  }
  if ( v3 != (char *)(a1 + 80) )
    free(v3);
  v5 = *(char **)(a1 + 40);
  if ( *(_DWORD *)(a1 + 52) )
  {
    v6 = *(unsigned int *)(a1 + 48);
    if ( (_DWORD)v6 )
    {
      v7 = 8 * v6;
      v8 = 0;
      do
      {
        v9 = *(_QWORD *)&v5[v8];
        if ( v9 && v9 != -8 )
        {
          operator delete();
          v5 = *(char **)(a1 + 40);
        }
        v8 += 8;
      }
      while ( v7 != v8 );
    }
  }
  free(v5);
  v10 = *(char **)(a1 + 16);
  if ( *(_DWORD *)(a1 + 28) )
  {
    v11 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v11 )
    {
      v12 = 8 * v11;
      v13 = 0;
      do
      {
        v14 = *(_QWORD *)&v10[v13];
        if ( v14 != -8 && v14 )
        {
          v15 = *(_QWORD *)(v14 + 8);
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
          operator delete();
          v10 = *(char **)(a1 + 16);
        }
        v13 += 8;
      }
      while ( v12 != v13 );
    }
  }
  free(v10);
}

