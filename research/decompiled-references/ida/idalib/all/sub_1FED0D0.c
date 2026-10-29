void __fastcall sub_1FED0D0(__int64 a1)
{
  _QWORD *v1; // r12
  _QWORD *v3; // rbp
  char *v4; // rdi
  int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // r12
  _QWORD *v8; // rax
  int v9; // eax
  char *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // r14
  _QWORD *v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // r13

  v1 = *(_QWORD **)(a1 + 64);
  v3 = &v1[*(unsigned int *)(a1 + 72)];
  if ( v1 != v3 )
  {
    do
    {
      while ( *--v3 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
        if ( v1 == v3 )
          goto LABEL_4;
      }
    }
    while ( v1 != v3 );
LABEL_4:
    v3 = *(_QWORD **)(a1 + 64);
  }
  if ( v3 != (_QWORD *)(a1 + 80) )
    free(v3);
  v4 = *(char **)(a1 + 40);
  if ( *(_DWORD *)(a1 + 52) )
  {
    v5 = *(_DWORD *)(a1 + 48);
    if ( v5 )
    {
      v6 = 0;
      v7 = 8LL * (unsigned int)(v5 - 1) + 8;
      do
      {
        v8 = *(_QWORD **)&v4[v6];
        if ( v8 != (_QWORD *)-8LL && v8 )
        {
          operator delete(*(_QWORD *)&v4[v6], *v8 + 17LL, 8);
          v4 = *(char **)(a1 + 40);
        }
        v6 += 8;
      }
      while ( v7 != v6 );
    }
  }
  free(v4);
  if ( *(_DWORD *)(a1 + 28) )
  {
    v9 = *(_DWORD *)(a1 + 24);
    v10 = *(char **)(a1 + 16);
    if ( v9 )
    {
      v11 = 0;
      v12 = 8LL * (unsigned int)(v9 - 1) + 8;
      do
      {
        v13 = *(_QWORD **)&v10[v11];
        if ( v13 && v13 != (_QWORD *)-8LL )
        {
          v14 = v13[1];
          v15 = *v13 + 17LL;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          operator delete(v13, v15, 8);
          v10 = *(char **)(a1 + 16);
        }
        v11 += 8;
      }
      while ( v12 != v11 );
    }
  }
  else
  {
    v10 = *(char **)(a1 + 16);
  }
  free(v10);
}
