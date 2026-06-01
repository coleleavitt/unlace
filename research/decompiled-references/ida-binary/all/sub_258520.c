unsigned __int64 __fastcall sub_258520(const char *a1, const char *a2, char a3)
{
  size_t v3; // rax
  size_t v4; // rbp
  size_t v5; // rbx
  int *v6; // r13
  int *v7; // rbx
  __int64 v8; // rbp
  char *v9; // r14
  char *v10; // r15
  int *v11; // r12
  const char *v12; // rsi
  const char *v13; // rdi
  int v14; // eax
  int *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  const char *v18; // rsi
  size_t v19; // rax
  size_t v20; // rbp
  void *v22; // rdi
  size_t v23; // r12
  size_t v24; // rax
  __int64 v25; // rax
  __int64 p_s2; // [rsp+28h] [rbp-60h] BYREF
  char *s2; // [rsp+30h] [rbp-58h] BYREF
  __int128 v31; // [rsp+38h] [rbp-50h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v31 = 0;
  s2 = nullptr;
  v3 = strlen(a2);
  v4 = v3 + 1;
  v5 = v3;
  s2 = (char *)qvector_reserve(&s2, 0, v3 + 1, 1);
  *(_QWORD *)&v31 = v4;
  memmove(s2, a2, v5);
  s2[v5] = 0;
  v6 = (int *)qword_8CC090;
  v7 = &dword_8CC088;
  if ( !qword_8CC090 )
    goto LABEL_21;
  v8 = v31;
  v9 = s2;
  v10 = (char *)&s1;
  v7 = &dword_8CC088;
  if ( (_QWORD)v31 )
    v10 = s2;
  while ( 1 )
  {
    v16 = *((_QWORD *)v6 + 5);
    if ( !v8 )
      break;
    if ( v16 )
      goto LABEL_14;
    v11 = v6;
    v12 = v9;
    v13 = &s1;
LABEL_7:
    v14 = strcmp(v13, v12);
    v15 = *((int **)v6 + 2);
    v6 = *((int **)v6 + 3);
    if ( v14 >= 0 )
    {
      v7 = v11;
      v6 = v15;
    }
    if ( !v6 )
      goto LABEL_16;
  }
  if ( v16 )
  {
LABEL_14:
    v13 = *((const char **)v6 + 4);
    v11 = v6;
    v12 = v10;
    goto LABEL_7;
  }
  while ( 1 )
  {
    v17 = *((_QWORD *)v6 + 2);
    if ( !v17 )
      break;
    v7 = v6;
    v6 = *((int **)v6 + 2);
    if ( *(_QWORD *)(v17 + 40) )
      goto LABEL_14;
  }
  v7 = v6;
LABEL_16:
  if ( v7 == &dword_8CC088 )
    goto LABEL_21;
  if ( *((_QWORD *)v7 + 5) )
  {
    v18 = *((const char **)v7 + 4);
    if ( !v8 )
      v9 = (char *)&s1;
LABEL_20:
    if ( strcmp(v9, v18) < 0 )
    {
LABEL_21:
      v18 = (const char *)v7;
      p_s2 = (__int64)&s2;
      v7 = (int *)sub_258400(&qword_8CC080, (char *)v7, (__int64 **)&p_s2);
    }
  }
  else
  {
    v18 = &s1;
    if ( v8 )
      goto LABEL_20;
  }
  if ( a1 && (v19 = strlen(a1), (v20 = v19) != 0) )
  {
    v22 = *((void **)v7 + 7);
    v23 = v19 + 1;
    if ( *((_QWORD *)v7 + 9) < v19 + 1 )
    {
      v25 = qvector_reserve(v7 + 14, *((_QWORD *)v7 + 7), v23, 1);
      *((_QWORD *)v7 + 7) = v25;
      v22 = (void *)v25;
    }
    *((_QWORD *)v7 + 8) = v23;
    v18 = a1;
    memmove(v22, a1, v20);
    *(_BYTE *)(*((_QWORD *)v7 + 7) + v20) = 0;
  }
  else
  {
    *((_QWORD *)v7 + 8) = 0;
  }
  if ( s2 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(s2, v18);
  }
  if ( (unsigned __int8)netnode_inited() )
  {
    p_s2 = -1;
    netnode_check(&p_s2, "$ debugger application", 0, 1);
    if ( a1 && (a3 || *a1) )
    {
      netnode_check(&s2, "$ debugger application", 0, 0);
      v24 = strlen(a1);
      netnode_hashset(s2, a2, a1, v24 + 1, 72);
    }
    else
    {
      netnode_check(&s2, "$ debugger application", 0, 0);
      netnode_hashdel(s2, a2, 72);
    }
  }
  return v32 - __readfsqword(0x28u);
}
