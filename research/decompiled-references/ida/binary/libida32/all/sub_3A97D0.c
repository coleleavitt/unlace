void __fastcall sub_3A97D0(__int64 a1, __int64 a2, void **a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // rdi
  char *v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rdx
  const char *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  void *v16; // rdi

  v6 = *(char **)(a2 + 8);
  v7 = v6;
  v8 = (unsigned __int64)&v6[*(unsigned int *)(a2 + 4)];
  while ( (unsigned __int64)v7 < v8 )
  {
    if ( !*v7++ )
      goto LABEL_5;
  }
  v6 = nullptr;
LABEL_5:
  if ( (_DWORD)a3 )
  {
    sub_3A9350(v6, (void **)((char *)&dword_0 + 1), a3, v8, a5, a6);
  }
  else
  {
    v9 = *(_QWORD *)(qword_2CA1698 + 1384);
    v10 = *(_QWORD *)(v9 + 224);
    if ( !v10 )
      goto LABEL_14;
    v11 = *(_QWORD *)(v9 + 216);
    v12 = v11 + 24 * v10 - 24;
    v13 = haystack;
    if ( *(_QWORD *)(v12 + 8) )
      v13 = *(const char **)v12;
    if ( strcmp(v13, v6) )
    {
LABEL_14:
      if ( !under_debugger )
        interr(40712);
      BUG();
    }
    v14 = v10 - 1;
    *(_QWORD *)(v9 + 224) = v14;
    v15 = v11 + 24 * v14;
    v16 = *(void **)v15;
    if ( *(_QWORD *)v15 )
    {
      *(_QWORD *)(v15 + 8) = 0;
      qfree(v16);
    }
  }
}

