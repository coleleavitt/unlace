__int64 __fastcall sub_68D4C0(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rbp
  size_t v7; // r12
  size_t v8; // r12
  __int64 v9; // rax
  char *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // r14
  const char *v16; // rdi
  unsigned int v17; // ebx
  void *v19; // rax
  const void *v20; // rsi
  char *v21; // rax
  __int64 v23; // [rsp+18h] [rbp-A0h]
  _DWORD v24[4]; // [rsp+20h] [rbp-98h] BYREF
  char *s2; // [rsp+30h] [rbp-88h] BYREF
  __int128 v26; // [rsp+38h] [rbp-80h]
  void *ptr; // [rsp+48h] [rbp-70h]
  __int128 v28; // [rsp+50h] [rbp-68h]
  __int64 v29; // [rsp+60h] [rbp-58h] BYREF
  int v30; // [rsp+68h] [rbp-50h]
  unsigned __int64 v31; // [rsp+78h] [rbp-40h]

  v5 = a2;
  v31 = __readfsqword(0x28u);
  v23 = qword_2CA1698;
  v24[0] = 0;
  copy_argloc(v24, a2);
  v7 = *(_QWORD *)(a2 + 24);
  s2 = nullptr;
  v26 = 0;
  if ( v7 )
  {
    v21 = (char *)qalloc_or_throw(v7, (const char *)a2);
    a2 = *(_QWORD *)(a2 + 16);
    s2 = v21;
    *((_QWORD *)&v26 + 1) = v7;
    memcpy(v21, (const void *)a2, v7);
    *(_QWORD *)&v26 = v7;
  }
  v8 = *(_QWORD *)(v5 + 48);
  ptr = nullptr;
  v28 = 0;
  if ( v8 )
  {
    v19 = (void *)qalloc_or_throw(v8, (const char *)a2);
    v20 = *(const void **)(v5 + 40);
    ptr = v19;
    *((_QWORD *)&v28 + 1) = v8;
    memcpy(v19, v20, v8);
    *(_QWORD *)&v28 = v8;
  }
  v29 = 0;
  copy_tinfo_t(&v29);
  v30 = *(_DWORD *)(v5 + 72);
  v9 = v26;
  if ( (unsigned __int64)v26 > 1 )
    goto LABEL_6;
  if ( (a4 & 0x40) != 0 )
  {
    sub_3573A0(&s2);
    v9 = v26;
  }
  if ( v9 )
LABEL_6:
    v10 = s2;
  else
    v10 = (char *)haystack;
  v11 = a1[1];
  if ( !v11 )
    goto LABEL_17;
  v12 = *a1;
  v13 = -80;
  if ( v11 != -1 )
    v13 = 80 * v11;
  v14 = v12 + v13;
  if ( v12 == v14 )
    goto LABEL_17;
  v15 = *a1;
  while ( 1 )
  {
    v16 = haystack;
    if ( *(_QWORD *)(v15 + 24) )
      v16 = *(const char **)(v15 + 16);
    if ( !strcmp(v16, v10) )
      break;
    v15 += 80;
    if ( v14 == v15 )
      goto LABEL_17;
  }
  if ( v15 - v12 >= 0 )
  {
    set_error_string();
    v17 = -21;
  }
  else
  {
LABEL_17:
    if ( (unsigned __int8)sub_4BD3C0(*(_QWORD *)(v23 + 1480), v10, 1, 0) )
    {
      if ( a3 == -1 )
        sub_5F5640(a1, (__int64)v24);
      else
        sub_6888B0(a1, (char *)(*a1 + 80 * a3), (__int64)v24);
      v17 = 0;
    }
    else
    {
      set_error_string();
      v17 = -3;
    }
  }
  clear_tinfo_t(&v29);
  if ( ptr )
  {
    *(_QWORD *)&v28 = 0;
    qfree(ptr);
  }
  if ( s2 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(s2);
  }
  cleanup_argloc(v24);
  return v17;
}

