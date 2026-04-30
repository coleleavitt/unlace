unsigned __int64 __fastcall sub_2377C0(_QWORD *a1)
{
  __int64 v1; // rbp
  unsigned __int64 v3; // rdx
  int *v4; // rax
  unsigned __int64 v5; // rbx
  int *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  const char *v10; // rdi
  __int64 v11; // rax
  char *v12; // rax
  size_t v13; // rax
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  _QWORD *v18; // rbx
  char *v19; // r13
  size_t v20; // rax
  __int64 v21; // rdx
  size_t v22; // r8
  __int64 v24; // rax
  size_t n; // [rsp+0h] [rbp-468h]
  bool v26; // [rsp+Fh] [rbp-459h]
  size_t v27; // [rsp+10h] [rbp-458h]
  __int64 v28; // [rsp+10h] [rbp-458h]
  size_t v29; // [rsp+18h] [rbp-450h]
  char s[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v31; // [rsp+428h] [rbp-40h]

  v1 = a1[24];
  v31 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(v1 + 32);
  if ( !v3 )
  {
    v4 = (int *)qword_8CC4F0;
    v5 = *(_QWORD *)(v1 + 24);
    if ( !qword_8CC4F0 )
      goto LABEL_9;
    v6 = &dword_8CC4E8;
    do
    {
      while ( 1 )
      {
        v7 = *((_QWORD *)v4 + 2);
        v8 = *((_QWORD *)v4 + 3);
        if ( *((_QWORD *)v4 + 4) < v5 )
          break;
        v6 = v4;
        v4 = *((int **)v4 + 2);
        if ( !v7 )
          goto LABEL_7;
      }
      v4 = *((int **)v4 + 3);
    }
    while ( v8 );
LABEL_7:
    if ( v6 != &dword_8CC4E8 && v5 >= *((_QWORD *)v6 + 4) )
      v3 = *(_QWORD *)(std::_Rb_tree_increment(v6) + 64) - v5;
    else
LABEL_9:
      v3 = -1LL - v5;
  }
  get_debug_names(a1 + 28, *(_QWORD *)(v1 + 24), *(_QWORD *)(v1 + 24) + v3);
  v9 = a1[24];
  v10 = &s1;
  if ( *(_QWORD *)(v9 + 8) )
    v10 = *(const char **)v9;
  v11 = qbasename(v10);
  qstrncpy(s, v11, 1024);
  set_file_ext(s, 1024, s, &unk_5C2F25);
  v12 = strrchr(s, 46);
  if ( v12 )
    *v12 = 95;
  v13 = strlen(s);
  n = v13;
  if ( a1[29] )
  {
    v26 = v13 != 0;
    v14 = 0;
    v15 = 0;
    do
    {
      while ( 1 )
      {
        v16 = a1[28] + 32 * v15;
        v17 = *(_QWORD *)(v16 + 16);
        v18 = (_QWORD *)v16;
        if ( v17 )
        {
          v19 = *(char **)(v16 + 8);
          if ( !strncmp(v19, s, n) )
          {
            v20 = v17 - 1;
            if ( v17 != 1 && v26 )
              break;
          }
        }
        v15 = ++v14;
        if ( (unsigned __int64)v14 >= a1[29] )
          return v31 - __readfsqword(0x28u);
      }
      v21 = 1;
      v22 = 0;
      if ( n < v20 )
      {
        v27 = v20 - n;
        memmove(v19, &v19[n], v20 - n);
        v22 = v27;
        v19 = (char *)v18[1];
        v21 = v27 + 1;
        if ( v18[3] < v27 + 1 )
        {
LABEL_27:
          v29 = v22;
          v28 = v21;
          v24 = qvector_reserve(v18 + 1, v19, v21, 1);
          v22 = v29;
          v21 = v28;
          v18[1] = v24;
          v19 = (char *)v24;
        }
      }
      else if ( !v18[3] )
      {
        goto LABEL_27;
      }
      ++v14;
      v18[2] = v21;
      v15 = v14;
      v19[v22] = 0;
    }
    while ( (unsigned __int64)v14 < a1[29] );
  }
  return v31 - __readfsqword(0x28u);
}
