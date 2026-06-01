__int64 __fastcall sub_4E6FF0(const char *src, int *a2)
{
  char *v2; // rbx
  size_t v3; // rax
  size_t v4; // r12
  size_t v5; // rbp
  int *v6; // r15
  __int64 v7; // r12
  const char *v8; // r14
  int *v9; // r13
  int *v10; // rbp
  const char *v11; // rsi
  const char *v12; // rdi
  int v13; // eax
  int *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  __int64 result; // rax
  const char *v19; // rdi
  const char *v20; // rsi
  char *s2; // [rsp+8h] [rbp-58h] BYREF
  __int128 v23; // [rsp+10h] [rbp-50h]
  unsigned __int64 v24; // [rsp+20h] [rbp-40h]

  v2 = (char *)src;
  v24 = __readfsqword(0x28u);
  v23 = 0;
  s2 = nullptr;
  if ( src )
  {
    v3 = strlen(src);
    v4 = v3 + 1;
    v5 = v3;
    s2 = (char *)qvector_reserve(&s2, 0, v3 + 1, 1);
    *(_QWORD *)&v23 = v4;
    memmove(s2, src, v5);
    s2[v5] = 0;
    v6 = (int *)qword_2CCBF30;
    v2 = s2;
    if ( !qword_2CCBF30 )
    {
LABEL_16:
      if ( v2 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(v2);
      }
      goto LABEL_18;
    }
  }
  else
  {
    v6 = (int *)qword_2CCBF30;
    if ( !qword_2CCBF30 )
    {
LABEL_18:
      v17 = 0;
      result = 0;
      goto LABEL_28;
    }
  }
  v7 = v23;
  v8 = haystack;
  v9 = &dword_2CCBF28;
  if ( (_QWORD)v23 )
    v8 = v2;
  while ( 1 )
  {
    v15 = *((_QWORD *)v6 + 5);
    if ( !v7 )
      break;
    if ( v15 )
      goto LABEL_15;
    v10 = v6;
    v11 = v2;
    v12 = haystack;
LABEL_8:
    v13 = strcmp(v12, v11);
    v14 = *((int **)v6 + 2);
    v6 = *((int **)v6 + 3);
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
    v12 = *((const char **)v6 + 4);
    v10 = v6;
    v11 = v8;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v16 = *((_QWORD *)v6 + 2);
    if ( !v16 )
      break;
    v9 = v6;
    v6 = *((int **)v6 + 2);
    if ( *(_QWORD *)(v16 + 40) )
      goto LABEL_15;
  }
  v9 = v6;
LABEL_20:
  if ( v9 == &dword_2CCBF28 )
    goto LABEL_16;
  if ( !*((_QWORD *)v9 + 5) )
  {
    v19 = v2;
    v20 = haystack;
    if ( v7 )
      goto LABEL_24;
    goto LABEL_25;
  }
  v19 = haystack;
  v20 = *((const char **)v9 + 4);
  if ( v7 )
    v19 = v2;
LABEL_24:
  if ( strcmp(v19, v20) < 0 )
    goto LABEL_16;
LABEL_25:
  if ( v2 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v2);
  }
  v17 = v9[14];
  result = 1;
LABEL_28:
  *a2 = v17;
  return result;
}
