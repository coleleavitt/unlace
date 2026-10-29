__int64 __fastcall sub_62DD90(__int64 a1)
{
  char *v2; // rdi
  __int64 v3; // rdx
  char *v4; // rcx
  unsigned int i; // eax
  unsigned int v6; // eax
  int v7; // ebp
  unsigned int v8; // esi
  unsigned int v9; // ebx
  size_t v10; // r13
  char *v11; // rax
  char *v12; // rcx
  char *v13; // rax
  int v14; // esi
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  size_t v22; // rbx
  char *v23; // rax

  if ( *(_QWORD *)(a1 + 64) )
  {
    qfree(*(void **)(a1 + 56));
    qfree(*(void **)(a1 + 64));
    *(_QWORD *)(a1 + 72) = 0;
    *(_OWORD *)(a1 + 56) = 0;
  }
  v2 = *(char **)(a1 + 32);
  v3 = *(int *)(a1 + 52);
  v4 = &v2[v3];
  for ( i = *(_DWORD *)&v2[v3 + 12]; i < (unsigned int)v3; i = *((_DWORD *)v4 + 3) )
  {
    LODWORD(v3) = i;
    v4 = &v2[i];
  }
  v6 = *((_DWORD *)v4 + 2);
  v7 = 1;
  v8 = v3 + *((_DWORD *)v4 + 1);
  if ( (unsigned int)v3 < v6 )
  {
    do
    {
      v9 = v6;
      ++v7;
      v10 = (int)(v6 - v8);
      v11 = (char *)memmove(v4, &v2[v8], v10);
      v2 = *(char **)(a1 + 32);
      v12 = v11;
      v13 = &v2[v9];
      v4 = &v12[v10];
      v14 = *((_DWORD *)v13 + 1);
      v6 = *((_DWORD *)v13 + 2);
      v8 = v9 + v14;
    }
    while ( v9 < v6 );
  }
  v15 = *(_DWORD *)(a1 + 20);
  if ( v8 < v15 )
  {
    v22 = v15 - v8;
    v23 = (char *)memmove(v4, &v2[v8], v22);
    v2 = *(char **)(a1 + 32);
    v4 = &v23[v22];
  }
  *(_DWORD *)(a1 + 12) -= v7;
  if ( v2 >= v4 )
  {
    qfree(v2);
    *(_QWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 20) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 20) = (_DWORD)v4 - (_DWORD)v2;
    v16 = qrealloc(v2);
    *(_QWORD *)(a1 + 32) = v16;
    if ( !v16 )
    {
      if ( !under_debugger )
        interr(132);
      BUG();
    }
  }
  *(_DWORD *)(a1 + 52) = 0x7FFFFFFF;
  sub_62DB00(a1, 0, v17, v18, v19, v20);
  return 1;
}

