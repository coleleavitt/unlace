unsigned __int64 __fastcall sub_C9140(_QWORD *a1)
{
  __int64 v1; // rbp
  int *v3; // rax
  unsigned __int64 v4; // rbx
  int *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  char *v8; // rax
  size_t v9; // rax
  int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  _QWORD *v14; // rbx
  char *v15; // r13
  size_t v16; // rax
  __int64 v17; // rdx
  size_t v18; // r8
  __int64 v20; // rax
  size_t n; // [rsp+0h] [rbp-468h]
  bool v22; // [rsp+Fh] [rbp-459h]
  size_t v23; // [rsp+10h] [rbp-458h]
  __int64 v24; // [rsp+10h] [rbp-458h]
  size_t v25; // [rsp+18h] [rbp-450h]
  char s[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v27; // [rsp+428h] [rbp-40h]

  v1 = a1[24];
  v27 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(v1 + 32) )
  {
    v3 = (int *)qword_252650;
    v4 = *(_QWORD *)(v1 + 24);
    if ( qword_252650 )
    {
      v5 = &dword_252648;
      do
      {
        while ( 1 )
        {
          v6 = *((_QWORD *)v3 + 2);
          v7 = *((_QWORD *)v3 + 3);
          if ( *((_QWORD *)v3 + 4) < v4 )
            break;
          v5 = v3;
          v3 = *((int **)v3 + 2);
          if ( !v6 )
            goto LABEL_7;
        }
        v3 = *((int **)v3 + 3);
      }
      while ( v7 );
LABEL_7:
      if ( v5 != &dword_252648 && v4 >= *((_QWORD *)v5 + 4) )
        std::_Rb_tree_increment();
    }
  }
  get_debug_names();
  qbasename();
  qstrncpy();
  set_file_ext();
  v8 = strrchr(s, 46);
  if ( v8 )
    *v8 = 95;
  v9 = strlen(s);
  n = v9;
  if ( a1[29] )
  {
    v22 = v9 != 0;
    v10 = 0;
    v11 = 0;
    do
    {
      while ( 1 )
      {
        v12 = a1[28] + 32 * v11;
        v13 = *(_QWORD *)(v12 + 16);
        v14 = (_QWORD *)v12;
        if ( v13 )
        {
          v15 = *(char **)(v12 + 8);
          if ( !strncmp(v15, s, n) )
          {
            v16 = v13 - 1;
            if ( v13 != 1 && v22 )
              break;
          }
        }
        v11 = ++v10;
        if ( (unsigned __int64)v10 >= a1[29] )
          return v27 - __readfsqword(0x28u);
      }
      v17 = 1;
      v18 = 0;
      if ( n < v16 )
      {
        v23 = v16 - n;
        memmove(v15, &v15[n], v16 - n);
        v18 = v23;
        v15 = (char *)v14[1];
        v17 = v23 + 1;
        if ( v14[3] < v23 + 1 )
        {
LABEL_24:
          v25 = v18;
          v24 = v17;
          v20 = qvector_reserve();
          v18 = v25;
          v17 = v24;
          v14[1] = v20;
          v15 = (char *)v20;
        }
      }
      else if ( !v14[3] )
      {
        goto LABEL_24;
      }
      ++v10;
      v14[2] = v17;
      v11 = v10;
      v15[v18] = 0;
    }
    while ( (unsigned __int64)v10 < a1[29] );
  }
  return v27 - __readfsqword(0x28u);
}

