__int64 __fastcall sub_783E30(_QWORD *a1)
{
  const char *v2; // rbx
  unsigned __int64 v3; // rbp
  __int64 v4; // r13
  int v5; // r15d
  __int64 v6; // rax
  const char *v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // r12
  int v12; // r15d
  __int64 v13; // rax
  const char *v14; // rdi
  __int64 v15; // rax
  int v16; // r15d
  __int64 v17; // rax
  const char *v18; // rdi
  __int64 v19; // rax

  v2 = haystack;
  if ( a1[6] )
    v2 = (const char *)a1[5];
  v3 = a1[18];
  if ( v3 )
  {
    v4 = a1[17];
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = haystack;
      v8 = v4 + 24 * v6;
      if ( *(_QWORD *)(v8 + 8) )
        v7 = *(const char **)v8;
      if ( !strcmp(v7, v2) )
        goto LABEL_9;
      v6 = ++v5;
    }
    while ( v5 < v3 );
  }
  v10 = a1[15];
  if ( v10 )
  {
    v11 = a1[14];
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = haystack;
      v15 = v11 + 24 * v13;
      if ( *(_QWORD *)(v15 + 8) )
        v14 = *(const char **)v15;
      if ( !strcmp(v14, v2) )
        goto LABEL_9;
      v13 = ++v12;
      if ( v12 >= v10 )
      {
        v16 = 0;
        v17 = 0;
        while ( 1 )
        {
          v18 = haystack;
          v19 = v11 + 24 * v17;
          if ( *(_QWORD *)(v19 + 8) )
            v18 = *(const char **)v19;
          if ( !strcmp(v18, v2) )
            goto LABEL_9;
          v17 = ++v16;
          if ( v16 >= v10 )
            goto LABEL_23;
        }
      }
    }
  }
LABEL_23:
  if ( sub_783C00(a1 + 14, v2) == -1 )
  {
LABEL_9:
    set_error_string(0, v2);
    return set_qerrno(52);
  }
  return 0;
}
