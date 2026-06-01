void __fastcall sub_3ADEB0(__int64 a1, __int64 a2, int a3)
{
  char *v3; // rdi
  char *v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdx
  const char *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  void *v12; // rdi

  v3 = *(char **)(a2 + 8);
  v4 = v3;
  while ( v4 < &v3[*(unsigned int *)(a2 + 4)] )
  {
    if ( !*v4++ )
      goto LABEL_5;
  }
  v3 = nullptr;
LABEL_5:
  if ( a3 )
  {
    sub_3ADA30(v3, (void **)((char *)&dword_0 + 1));
  }
  else
  {
    v5 = *(_QWORD *)(qword_2CCB598 + 1576);
    v6 = *(_QWORD *)(v5 + 224);
    if ( !v6 )
      goto LABEL_14;
    v7 = *(_QWORD *)(v5 + 216);
    v8 = v7 + 24 * v6 - 24;
    v9 = haystack;
    if ( *(_QWORD *)(v8 + 8) )
      v9 = *(const char **)v8;
    if ( strcmp(v9, v3) )
    {
LABEL_14:
      if ( !under_debugger )
        interr(40712);
      BUG();
    }
    v10 = v6 - 1;
    *(_QWORD *)(v5 + 224) = v10;
    v11 = v7 + 24 * v10;
    v12 = *(void **)v11;
    if ( *(_QWORD *)v11 )
    {
      *(_QWORD *)(v11 + 8) = 0;
      qfree(v12);
    }
  }
}
