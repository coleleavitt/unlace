const char *__fastcall sub_5E6BA0(__int64 a1, char a2, const char *a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rbp
  size_t v7; // rax
  size_t v8; // r13
  size_t v9; // r12
  _QWORD *v10; // r15
  __int64 v11; // r13
  const char *v12; // r14
  _QWORD *v13; // rbp
  _QWORD *v14; // r12
  const char *v15; // rsi
  const char *v16; // rdi
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  const char *result; // rax
  const char *v22; // rdi
  const char *v23; // rsi
  _QWORD *v24; // [rsp+0h] [rbp-60h]
  char *s2; // [rsp+8h] [rbp-58h] BYREF
  __int128 v26; // [rsp+10h] [rbp-50h]
  unsigned __int64 v27; // [rsp+20h] [rbp-40h]

  v3 = a1 + 288;
  v4 = a1 + 336;
  v27 = __readfsqword(0x28u);
  v5 = (char *)a3;
  if ( !a2 )
    v3 = v4;
  v26 = 0;
  s2 = nullptr;
  v6 = v3;
  if ( a3 )
  {
    v7 = strlen(a3);
    v8 = v7 + 1;
    v9 = v7;
    s2 = (char *)qvector_reserve(&s2, 0, v7 + 1, 1);
    *(_QWORD *)&v26 = v8;
    memmove(s2, v5, v9);
    s2[v9] = 0;
    v10 = *(_QWORD **)(v6 + 16);
    v24 = (_QWORD *)(v6 + 8);
    v5 = s2;
    if ( !v10 )
      goto LABEL_18;
  }
  else
  {
    v10 = *(_QWORD **)(v3 + 16);
    v24 = (_QWORD *)(v3 + 8);
    if ( !v10 )
      return nullptr;
  }
  v11 = v26;
  v12 = haystack;
  v13 = v24;
  if ( (_QWORD)v26 )
    v12 = v5;
  while ( 1 )
  {
    v19 = v10[5];
    if ( !v11 )
      break;
    if ( v19 )
      goto LABEL_17;
    v14 = v10;
    v15 = v5;
    v16 = haystack;
LABEL_10:
    v17 = strcmp(v16, v15);
    v18 = (_QWORD *)v10[2];
    v10 = (_QWORD *)v10[3];
    if ( v17 >= 0 )
    {
      v13 = v14;
      v10 = v18;
    }
    if ( !v10 )
      goto LABEL_22;
  }
  if ( v19 )
  {
LABEL_17:
    v16 = (const char *)v10[4];
    v14 = v10;
    v15 = v12;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v20 = v10[2];
    if ( !v20 )
      break;
    v13 = v10;
    v10 = (_QWORD *)v10[2];
    if ( *(_QWORD *)(v20 + 40) )
      goto LABEL_17;
  }
  v13 = v10;
LABEL_22:
  if ( v24 != v13 )
  {
    if ( !v13[5] )
    {
      v22 = v5;
      v23 = haystack;
      if ( v11 )
        goto LABEL_26;
      goto LABEL_27;
    }
    v22 = haystack;
    v23 = (const char *)v13[4];
    if ( v11 )
      v22 = v5;
LABEL_26:
    if ( strcmp(v22, v23) >= 0 )
    {
LABEL_27:
      if ( v5 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v5);
      }
      result = haystack;
      if ( v13[8] )
        return (const char *)v13[7];
      return result;
    }
  }
LABEL_18:
  if ( v5 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v5);
  }
  return nullptr;
}
