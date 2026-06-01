const char *__fastcall sub_5FF8C0(__int64 a1, const char *a2)
{
  char *v2; // rbx
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // r12
  _QWORD *v6; // r15
  __int64 v7; // r13
  const char *v8; // r14
  _QWORD *v9; // rbp
  _QWORD *v10; // r12
  const char *v11; // rsi
  const char *v12; // rdi
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  const char *result; // rax
  const char *v18; // rdi
  const char *v19; // rsi
  _QWORD *v20; // [rsp+0h] [rbp-60h]
  char *s2; // [rsp+8h] [rbp-58h] BYREF
  __int128 v22; // [rsp+10h] [rbp-50h]
  unsigned __int64 v23; // [rsp+20h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v2 = (char *)a2;
  v22 = 0;
  s2 = nullptr;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    s2 = (char *)qvector_reserve(&s2, 0, v3 + 1, 1);
    *(_QWORD *)&v22 = v4;
    memmove(s2, a2, v5);
    s2[v5] = 0;
    v6 = *(_QWORD **)(a1 + 16);
    v20 = (_QWORD *)(a1 + 8);
    v2 = s2;
    if ( !v6 )
      goto LABEL_16;
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 16);
    v20 = (_QWORD *)(a1 + 8);
    if ( !v6 )
      return nullptr;
  }
  v7 = v22;
  v8 = haystack;
  v9 = v20;
  if ( (_QWORD)v22 )
    v8 = v2;
  while ( 1 )
  {
    v15 = v6[5];
    if ( !v7 )
      break;
    if ( v15 )
      goto LABEL_15;
    v10 = v6;
    v11 = v2;
    v12 = haystack;
LABEL_8:
    v13 = strcmp(v12, v11);
    v14 = (_QWORD *)v6[2];
    v6 = (_QWORD *)v6[3];
    if ( v13 >= 0 )
    {
      v9 = v10;
      v6 = v14;
    }
    if ( !v6 )
      goto LABEL_20;
  }
  if ( v15 )
  {
LABEL_15:
    v12 = (const char *)v6[4];
    v10 = v6;
    v11 = v8;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v16 = v6[2];
    if ( !v16 )
      break;
    v9 = v6;
    v6 = (_QWORD *)v6[2];
    if ( *(_QWORD *)(v16 + 40) )
      goto LABEL_15;
  }
  v9 = v6;
LABEL_20:
  if ( v20 != v9 )
  {
    if ( !v9[5] )
    {
      v18 = v2;
      v19 = haystack;
      if ( v7 )
        goto LABEL_24;
      goto LABEL_25;
    }
    v18 = haystack;
    v19 = (const char *)v9[4];
    if ( v7 )
      v18 = v2;
LABEL_24:
    if ( strcmp(v18, v19) >= 0 )
    {
LABEL_25:
      if ( v2 )
      {
        *(_QWORD *)&v22 = 0;
        qfree(v2);
      }
      result = haystack;
      if ( v9[8] )
        return (const char *)v9[7];
      return result;
    }
  }
LABEL_16:
  if ( v2 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v2);
  }
  return nullptr;
}
