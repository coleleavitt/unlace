unsigned __int64 __fastcall sub_67FD0(_QWORD *a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // r12
  size_t v4; // rbp
  _QWORD *v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // rbx
  char *v8; // r14
  const char *v9; // r15
  _QWORD *v10; // rbp
  const char *v11; // rsi
  const char *v12; // rdi
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  const char *v17; // rsi
  const char *v18; // rdi
  _QWORD *v20; // [rsp+0h] [rbp-78h]
  void **p_ptr; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v24 = 0;
  ptr = nullptr;
  if ( a2 )
  {
    v2 = strlen(a2);
    v3 = v2 + 1;
    v4 = v2;
    ptr = (void *)sub_96080(&ptr, 0, v2 + 1, 1);
    *(_QWORD *)&v24 = v3;
    memmove(ptr, a2, v4);
    *((_BYTE *)ptr + v4) = 0;
  }
  v5 = (_QWORD *)a1[16];
  v20 = a1 + 15;
  v6 = a1 + 15;
  if ( !v5 )
    goto LABEL_23;
  v7 = v24;
  v8 = (char *)ptr;
  v9 = haystack;
  v6 = a1 + 15;
  if ( (_QWORD)v24 )
    v9 = (const char *)ptr;
  while ( 1 )
  {
    v15 = v5[5];
    if ( !v7 )
      break;
    if ( v15 )
      goto LABEL_16;
    v10 = v5;
    v11 = v8;
    v12 = haystack;
LABEL_9:
    v13 = strcmp(v12, v11);
    v14 = (_QWORD *)v5[2];
    v5 = (_QWORD *)v5[3];
    if ( v13 >= 0 )
    {
      v6 = v10;
      v5 = v14;
    }
    if ( !v5 )
      goto LABEL_18;
  }
  if ( v15 )
  {
LABEL_16:
    v12 = (const char *)v5[4];
    v10 = v5;
    v11 = v9;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v16 = v5[2];
    if ( !v16 )
      break;
    v6 = v5;
    v5 = (_QWORD *)v5[2];
    if ( *(_QWORD *)(v16 + 40) )
      goto LABEL_16;
  }
  v6 = v5;
LABEL_18:
  if ( v6 == v20 )
    goto LABEL_23;
  if ( v6[5] )
  {
    v17 = (const char *)v6[4];
    v18 = haystack;
    if ( v7 )
      goto LABEL_21;
LABEL_22:
    if ( strcmp(v18, v17) < 0 )
    {
LABEL_23:
      p_ptr = &ptr;
      sub_67EB0(a1 + 14, v6, &p_ptr);
      v8 = (char *)ptr;
    }
  }
  else
  {
    v17 = haystack;
    if ( v7 )
    {
LABEL_21:
      v18 = v8;
      goto LABEL_22;
    }
  }
  if ( v8 )
  {
    *(_QWORD *)&v24 = 0;
    j__free(v8);
  }
  return v25 - __readfsqword(0x28u);
}

