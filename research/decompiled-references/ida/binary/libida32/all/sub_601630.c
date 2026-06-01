__int64 __fastcall sub_601630(__int64 a1, _QWORD *a2, const char *a3)
{
  char *v3; // rbx
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  _QWORD *v7; // r15
  __int64 v8; // r13
  const char *v9; // r14
  _QWORD *v10; // rbp
  _QWORD *v11; // r12
  const char *v12; // rsi
  const char *v13; // rdi
  int v14; // eax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  const char *v19; // rdi
  const char *v20; // rsi
  _QWORD *v21; // [rsp+0h] [rbp-68h]
  char *s2; // [rsp+10h] [rbp-58h] BYREF
  __int128 v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v3 = (char *)a3;
  v24 = 0;
  s2 = nullptr;
  if ( a3 )
  {
    v4 = strlen(a3);
    v5 = v4 + 1;
    v6 = v4;
    s2 = (char *)qvector_reserve(&s2, 0, v4 + 1, 1);
    *(_QWORD *)&v24 = v5;
    memmove(s2, v3, v6);
    s2[v6] = 0;
    v7 = *(_QWORD **)(a1 + 40);
    v21 = (_QWORD *)(a1 + 32);
    v3 = s2;
    if ( !v7 )
      goto LABEL_16;
  }
  else
  {
    v7 = *(_QWORD **)(a1 + 40);
    v21 = (_QWORD *)(a1 + 32);
    if ( !v7 )
      return 0;
  }
  v8 = v24;
  v9 = haystack;
  v10 = v21;
  if ( (_QWORD)v24 )
    v9 = v3;
  while ( 1 )
  {
    v16 = v7[5];
    if ( !v8 )
      break;
    if ( v16 )
      goto LABEL_15;
    v11 = v7;
    v12 = v3;
    v13 = haystack;
LABEL_8:
    v14 = strcmp(v13, v12);
    v15 = (_QWORD *)v7[2];
    v7 = (_QWORD *)v7[3];
    if ( v14 >= 0 )
    {
      v10 = v11;
      v7 = v15;
    }
    if ( !v7 )
      goto LABEL_20;
  }
  if ( v16 )
  {
LABEL_15:
    v13 = (const char *)v7[4];
    v11 = v7;
    v12 = v9;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v17 = v7[2];
    if ( !v17 )
      break;
    v10 = v7;
    v7 = (_QWORD *)v7[2];
    if ( *(_QWORD *)(v17 + 40) )
      goto LABEL_15;
  }
  v10 = v7;
LABEL_20:
  if ( v21 != v10 )
  {
    if ( !v10[5] )
    {
      v19 = v3;
      v20 = haystack;
      if ( v8 )
        goto LABEL_24;
      goto LABEL_25;
    }
    v19 = haystack;
    v20 = (const char *)v10[4];
    if ( v8 )
      v19 = v3;
LABEL_24:
    if ( strcmp(v19, v20) >= 0 )
    {
LABEL_25:
      if ( v3 )
      {
        *(_QWORD *)&v24 = 0;
        qfree(v3);
      }
      *a2 = v10 + 7;
      return 1;
    }
  }
LABEL_16:
  if ( v3 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v3);
  }
  return 0;
}

