__int64 __fastcall sub_5EB210(_QWORD *a1, const char *a2)
{
  __int64 v2; // r12
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // rbp
  char *v7; // rax
  _QWORD *v8; // r15
  char *v9; // r14
  _QWORD *v10; // rbx
  __int64 v11; // r12
  char *v12; // rax
  _QWORD *v13; // rbp
  const char *v14; // rsi
  const char *v15; // rdi
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  const char *v20; // rsi
  const char *v21; // rdi
  unsigned __int64 v22; // rax
  char *v24; // [rsp+0h] [rbp-68h]
  _QWORD *v25; // [rsp+8h] [rbp-60h]
  char *s2; // [rsp+10h] [rbp-58h] BYREF
  __int128 v27; // [rsp+18h] [rbp-50h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v2 = a1[2];
  v27 = 0;
  s2 = nullptr;
  v4 = strlen(a2);
  v5 = v4 + 1;
  v6 = v4;
  v7 = (char *)qvector_reserve(&s2, 0, v4 + 1, 1);
  *(_QWORD *)&v27 = v5;
  s2 = v7;
  memmove(v7, a2, v6);
  s2[v6] = 0;
  v8 = *(_QWORD **)(v2 + 16);
  v25 = (_QWORD *)(v2 + 8);
  v9 = s2;
  v10 = (_QWORD *)(v2 + 8);
  if ( !v8 )
    goto LABEL_23;
  v11 = v27;
  v12 = (char *)haystack;
  v10 = v25;
  if ( (_QWORD)v27 )
    v12 = s2;
  v24 = v12;
  while ( 1 )
  {
    v18 = v8[5];
    if ( !v11 )
      break;
    if ( v18 )
      goto LABEL_15;
    v13 = v8;
    v14 = v9;
    v15 = haystack;
LABEL_8:
    v16 = strcmp(v15, v14);
    v17 = (_QWORD *)v8[2];
    v8 = (_QWORD *)v8[3];
    if ( v16 >= 0 )
    {
      v10 = v13;
      v8 = v17;
    }
    if ( !v8 )
      goto LABEL_17;
  }
  if ( v18 )
  {
LABEL_15:
    v15 = (const char *)v8[4];
    v14 = v24;
    v13 = v8;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v19 = v8[2];
    if ( !v19 )
      break;
    v10 = v8;
    v8 = (_QWORD *)v8[2];
    if ( *(_QWORD *)(v19 + 40) )
      goto LABEL_15;
  }
  v10 = v8;
LABEL_17:
  if ( v10 != v25 )
  {
    if ( v10[5] )
    {
      v20 = (const char *)v10[4];
      v21 = haystack;
      if ( v11 )
        v21 = v9;
LABEL_21:
      if ( strcmp(v21, v20) < 0 )
        v10 = v25;
    }
    else
    {
      v20 = haystack;
      if ( v11 )
      {
        v21 = v9;
        goto LABEL_21;
      }
    }
  }
LABEL_23:
  if ( v9 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v9);
  }
  if ( v10 == (_QWORD *)(a1[2] + 8LL) )
    return 0;
  v22 = v10[7];
  if ( v22 >= *(_QWORD *)(*a1 + 8LL) )
  {
    if ( !under_debugger )
      interr(2155);
    BUG();
  }
  return *(_QWORD *)(*(_QWORD *)*a1 + 8 * v22);
}
