__int64 __fastcall sub_EB790(const void *a1)
{
  char *v1; // rax
  int *v2; // rbx
  char *v3; // r13
  int *v4; // r15
  const char *v5; // r14
  int *v6; // r12
  const char *v7; // rsi
  const char *v8; // rdi
  int v9; // eax
  int *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rsi
  size_t v14; // rax
  size_t v15; // rbp
  void *v17; // rdi
  size_t v18; // r12
  __int64 v19; // rax
  char **p_s2; // [rsp+18h] [rbp-60h] BYREF
  char *s2; // [rsp+20h] [rbp-58h] BYREF
  __int128 v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v23 = 0;
  v1 = (char *)qvector_reserve();
  s2 = v1;
  v2 = &dword_251128;
  *(_QWORD *)&v23 = 10;
  *(_QWORD *)v1 = 0x6C69467475706E49LL;
  v3 = s2;
  v1[8] = 101;
  v3[9] = 0;
  v4 = (int *)qword_251130;
  if ( !qword_251130 )
    goto LABEL_21;
  v5 = s1;
  v2 = &dword_251128;
  if ( (_QWORD)v23 )
    v5 = v3;
  while ( 1 )
  {
    v11 = *((_QWORD *)v4 + 5);
    if ( !(_QWORD)v23 )
      break;
    v6 = v4;
    v7 = v3;
    v8 = s1;
    if ( v11 )
      goto LABEL_6;
LABEL_7:
    v9 = strcmp(v8, v7);
    v10 = *((int **)v4 + 2);
    v4 = *((int **)v4 + 3);
    if ( v9 >= 0 )
    {
      v2 = v6;
      v4 = v10;
    }
    if ( !v4 )
      goto LABEL_16;
  }
  if ( v11 )
  {
LABEL_14:
    v6 = v4;
LABEL_6:
    v8 = *((const char **)v4 + 4);
    v7 = v5;
    goto LABEL_7;
  }
  while ( 1 )
  {
    v12 = *((_QWORD *)v4 + 2);
    if ( !v12 )
      break;
    v2 = v4;
    v4 = *((int **)v4 + 2);
    if ( *(_QWORD *)(v12 + 40) )
      goto LABEL_14;
  }
  v2 = v4;
LABEL_16:
  if ( v2 == &dword_251128 )
    goto LABEL_21;
  if ( *((_QWORD *)v2 + 5) )
  {
    v13 = *((const char **)v2 + 4);
    if ( !(_QWORD)v23 )
      v3 = (char *)s1;
LABEL_20:
    if ( strcmp(v3, v13) < 0 )
    {
LABEL_21:
      p_s2 = &s2;
      v2 = (int *)sub_E6630(&qword_251120, v2, (__int64 **)&p_s2);
    }
  }
  else
  {
    v13 = s1;
    if ( (_QWORD)v23 )
      goto LABEL_20;
  }
  if ( a1 && (v14 = strlen((const char *)a1), (v15 = v14) != 0) )
  {
    v17 = *((void **)v2 + 7);
    v18 = v14 + 1;
    if ( *((_QWORD *)v2 + 9) < v14 + 1 )
    {
      v19 = qvector_reserve();
      *((_QWORD *)v2 + 7) = v19;
      v17 = (void *)v19;
    }
    *((_QWORD *)v2 + 8) = v18;
    memmove(v17, a1, v15);
    *(_BYTE *)(*((_QWORD *)v2 + 7) + v15) = 0;
  }
  else
  {
    *((_QWORD *)v2 + 8) = 0;
  }
  if ( s2 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  return setinf_buf();
}

