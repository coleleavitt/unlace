__int64 __fastcall sub_25D800(const char *a1)
{
  char *v1; // rax
  int *v2; // rbx
  char *v3; // r13
  int *v4; // r15
  __int64 v5; // rbp
  const char *v6; // r14
  int *v7; // r12
  const char *v8; // rsi
  const char *v9; // rdi
  int v10; // eax
  int *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  const char *v14; // rsi
  size_t v15; // rax
  size_t v16; // rbp
  void *v18; // rdi
  size_t v19; // r12
  __int64 v20; // rax
  char **p_s2; // [rsp+18h] [rbp-60h] BYREF
  char *s2; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v24 = 0;
  s2 = nullptr;
  v1 = (char *)qvector_reserve(&s2, 0, 10, 1);
  s2 = v1;
  v2 = &dword_8CC088;
  *(_QWORD *)&v24 = 10;
  *(_QWORD *)v1 = 0x6C69467475706E49LL;
  v3 = s2;
  v1[8] = 101;
  v3[9] = 0;
  v4 = (int *)qword_8CC090;
  if ( !qword_8CC090 )
    goto LABEL_21;
  v5 = v24;
  v6 = &s1;
  v2 = &dword_8CC088;
  if ( (_QWORD)v24 )
    v6 = v3;
  while ( 1 )
  {
    v12 = *((_QWORD *)v4 + 5);
    if ( !v5 )
      break;
    v7 = v4;
    v8 = v3;
    v9 = &s1;
    if ( v12 )
      goto LABEL_6;
LABEL_7:
    v10 = strcmp(v9, v8);
    v11 = *((int **)v4 + 2);
    v4 = *((int **)v4 + 3);
    if ( v10 >= 0 )
    {
      v2 = v7;
      v4 = v11;
    }
    if ( !v4 )
      goto LABEL_16;
  }
  if ( v12 )
  {
LABEL_14:
    v7 = v4;
LABEL_6:
    v9 = *((const char **)v4 + 4);
    v8 = v6;
    goto LABEL_7;
  }
  while ( 1 )
  {
    v13 = *((_QWORD *)v4 + 2);
    if ( !v13 )
      break;
    v2 = v4;
    v4 = *((int **)v4 + 2);
    if ( *(_QWORD *)(v13 + 40) )
      goto LABEL_14;
  }
  v2 = v4;
LABEL_16:
  if ( v2 == &dword_8CC088 )
    goto LABEL_21;
  if ( *((_QWORD *)v2 + 5) )
  {
    v14 = *((const char **)v2 + 4);
    if ( !v5 )
      v3 = (char *)&s1;
LABEL_20:
    if ( strcmp(v3, v14) < 0 )
    {
LABEL_21:
      v14 = (const char *)v2;
      p_s2 = &s2;
      v2 = (int *)sub_258400(&qword_8CC080, (char *)v2, (__int64 **)&p_s2);
    }
  }
  else
  {
    v14 = &s1;
    if ( v5 )
      goto LABEL_20;
  }
  if ( a1 && (v15 = strlen(a1), (v16 = v15) != 0) )
  {
    v18 = *((void **)v2 + 7);
    v19 = v15 + 1;
    if ( *((_QWORD *)v2 + 9) < v15 + 1 )
    {
      v20 = qvector_reserve(v2 + 14, *((_QWORD *)v2 + 7), v19, 1);
      *((_QWORD *)v2 + 7) = v20;
      v18 = (void *)v20;
    }
    *((_QWORD *)v2 + 8) = v19;
    v14 = a1;
    memmove(v18, a1, v16);
    *(_BYTE *)(*((_QWORD *)v2 + 7) + v16) = 0;
  }
  else
  {
    *((_QWORD *)v2 + 8) = 0;
  }
  if ( s2 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(s2, v14);
  }
  return setinf_buf(97, a1, 0);
}
