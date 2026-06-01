__int64 __fastcall sub_4427D0(__int64 a1, const char *a2, const char *a3)
{
  char *v3; // rbx
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // r13
  size_t v8; // rax
  __int64 v9; // r13
  size_t v10; // r15
  size_t v11; // r8
  size_t v12; // rdx
  _QWORD *v13; // r15
  __int64 v14; // r12
  const char *v15; // r14
  _QWORD *v16; // r13
  _QWORD *v17; // rbp
  const char *v18; // rsi
  const char *v19; // rdi
  int v20; // eax
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // ebp
  const char *v25; // rdi
  const char *v26; // rsi
  _QWORD *v28; // [rsp+0h] [rbp-68h]
  size_t v29; // [rsp+0h] [rbp-68h]
  size_t v30; // [rsp+8h] [rbp-60h]
  char *s2; // [rsp+10h] [rbp-58h] BYREF
  __int128 v32; // [rsp+18h] [rbp-50h]
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v3 = (char *)a2;
  v33 = __readfsqword(0x28u);
  v32 = 0;
  s2 = nullptr;
  if ( !a2 )
  {
    if ( !a3 )
    {
      v13 = *(_QWORD **)(a1 + 56);
      v24 = -1;
      v28 = (_QWORD *)(a1 + 48);
      if ( !v13 )
        return v24;
      goto LABEL_8;
    }
    v9 = 0;
    v10 = strlen(a3);
    v12 = v10 + 1;
    v11 = v10;
LABEL_35:
    v30 = v11;
    v29 = v12;
    s2 = (char *)qvector_reserve(&s2, v3, v12, 1);
    v11 = v30;
    v3 = s2;
    v12 = v29;
    goto LABEL_6;
  }
  v5 = strlen(a2);
  v6 = v5 + 1;
  v7 = v5;
  s2 = (char *)qvector_reserve(&s2, 0, v5 + 1, 1);
  *(_QWORD *)&v32 = v6;
  memmove(s2, a2, v7);
  s2[v7] = 0;
  v3 = s2;
  if ( !a3 )
    goto LABEL_7;
  v8 = strlen(a3);
  v9 = v32;
  v10 = v8;
  if ( (_QWORD)v32 )
  {
    v9 = v32 - 1;
    v11 = v8 + v32 - 1;
  }
  else
  {
    v11 = v8;
  }
  v12 = v11 + 1;
  if ( *((_QWORD *)&v32 + 1) < v11 + 1 )
    goto LABEL_35;
LABEL_6:
  *(_QWORD *)&v32 = v12;
  v3[v11] = 0;
  memmove(&s2[v9], a3, v10);
  v3 = s2;
LABEL_7:
  v13 = *(_QWORD **)(a1 + 56);
  v28 = (_QWORD *)(a1 + 48);
  if ( !v13 )
    goto LABEL_27;
LABEL_8:
  v14 = v32;
  v15 = haystack;
  v16 = v28;
  if ( (_QWORD)v32 )
    v15 = v3;
  while ( 1 )
  {
    v22 = v13[5];
    if ( !v14 )
      break;
    if ( v22 )
      goto LABEL_20;
    v17 = v13;
    v18 = v3;
    v19 = haystack;
LABEL_13:
    v20 = strcmp(v19, v18);
    v21 = (_QWORD *)v13[2];
    v13 = (_QWORD *)v13[3];
    if ( v20 >= 0 )
    {
      v16 = v17;
      v13 = v21;
    }
    if ( !v13 )
      goto LABEL_22;
  }
  if ( v22 )
  {
LABEL_20:
    v19 = (const char *)v13[4];
    v17 = v13;
    v18 = v15;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v23 = v13[2];
    if ( !v23 )
      break;
    v16 = v13;
    v13 = (_QWORD *)v13[2];
    if ( *(_QWORD *)(v23 + 40) )
      goto LABEL_20;
  }
  v16 = v13;
LABEL_22:
  v24 = -1;
  if ( v28 != v16 )
  {
    if ( v16[5] )
    {
      v25 = haystack;
      v26 = (const char *)v16[4];
      if ( v14 )
        v25 = v3;
LABEL_26:
      if ( strcmp(v25, v26) < 0 )
      {
LABEL_27:
        v24 = -1;
        goto LABEL_28;
      }
    }
    else
    {
      v25 = v3;
      v26 = haystack;
      if ( v14 )
        goto LABEL_26;
    }
    v24 = *((_DWORD *)v16 + 14);
  }
LABEL_28:
  if ( v3 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v3);
  }
  return v24;
}

