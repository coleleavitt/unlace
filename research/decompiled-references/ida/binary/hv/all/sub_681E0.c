unsigned __int64 __fastcall sub_681E0(int a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  const char *v5; // rdi
  const char *v6; // rax
  const char *v7; // r12
  size_t v8; // rax
  size_t v9; // r13
  size_t v10; // rbx
  _QWORD *v11; // rbx
  _QWORD *v12; // r15
  __int64 v13; // r12
  char *v14; // r14
  const char *v15; // rax
  _QWORD *v16; // r13
  const char *v17; // rsi
  const char *v18; // rdi
  int v19; // eax
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  const char *v23; // rsi
  const char *v24; // rdi
  __int64 v25; // rax
  const char *v27; // [rsp+0h] [rbp-88h]
  _QWORD *v28; // [rsp+8h] [rbp-80h]
  void **p_ptr; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v28 = a2 + 1;
  if ( a3 == a4 )
    return v34 - __readfsqword(0x28u);
  v4 = a3;
  do
  {
    v5 = haystack;
    if ( *(_QWORD *)(v4 + 40) )
      v5 = *(const char **)(v4 + 32);
    v6 = (const char *)sub_94E50(v5);
    ptr = nullptr;
    v7 = v6;
    v33 = 0;
    if ( v6 )
    {
      v8 = strlen(v6);
      v9 = v8 + 1;
      v10 = v8;
      ptr = (void *)sub_96080(&ptr, 0, v8 + 1, 1);
      *(_QWORD *)&v33 = v9;
      memmove(ptr, v7, v10);
      *((_BYTE *)ptr + v10) = 0;
    }
    v11 = v28;
    v12 = (_QWORD *)a2[2];
    if ( !v12 )
      goto LABEL_27;
    v13 = v33;
    v14 = (char *)ptr;
    v15 = haystack;
    v11 = v28;
    if ( (_QWORD)v33 )
      v15 = (const char *)ptr;
    v27 = v15;
    while ( 1 )
    {
      v21 = v12[5];
      if ( !v13 )
        break;
      if ( v21 )
        goto LABEL_20;
      v16 = v12;
      v17 = v14;
      v18 = haystack;
LABEL_13:
      v19 = strcmp(v18, v17);
      v20 = (_QWORD *)v12[2];
      v12 = (_QWORD *)v12[3];
      if ( v19 >= 0 )
      {
        v11 = v16;
        v12 = v20;
      }
      if ( !v12 )
        goto LABEL_22;
    }
    if ( v21 )
    {
LABEL_20:
      v18 = (const char *)v12[4];
      v17 = v27;
      v16 = v12;
      goto LABEL_13;
    }
    while ( 1 )
    {
      v22 = v12[2];
      if ( !v22 )
        break;
      v11 = v12;
      v12 = (_QWORD *)v12[2];
      if ( *(_QWORD *)(v22 + 40) )
        goto LABEL_20;
    }
    v11 = v12;
LABEL_22:
    if ( v28 == v11 )
      goto LABEL_27;
    if ( v11[5] )
    {
      v23 = (const char *)v11[4];
      v24 = haystack;
      if ( v13 )
        goto LABEL_25;
LABEL_26:
      if ( strcmp(v24, v23) < 0 )
      {
LABEL_27:
        p_ptr = &ptr;
        v25 = sub_67EB0(a2, v11, &p_ptr);
        v14 = (char *)ptr;
        v11 = (_QWORD *)v25;
      }
    }
    else
    {
      v23 = haystack;
      if ( v13 )
      {
LABEL_25:
        v24 = v14;
        goto LABEL_26;
      }
    }
    v11[7] = *(_QWORD *)(v4 + 56);
    v11[8] = *(_QWORD *)(v4 + 64);
    if ( (_QWORD *)(v4 + 72) != v11 + 9 )
      *(__m128i *)(v11 + 9) = _mm_loadu_si128((const __m128i *)(v4 + 72));
    if ( v14 )
    {
      *(_QWORD *)&v33 = 0;
      j__free(v14);
    }
    v4 = std::_Rb_tree_increment();
  }
  while ( v4 != a4 );
  return v34 - __readfsqword(0x28u);
}

