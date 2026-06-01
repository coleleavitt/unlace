__int64 __fastcall sub_8CE230(_QWORD *a1, const char *a2)
{
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // r12
  const char *v6; // rdi
  size_t v7; // rbp
  size_t v8; // r12
  size_t v9; // r14
  size_t v10; // r13
  _BYTE *v11; // rsi
  void *v12; // rsi
  __int64 v13; // r13
  _BYTE *v14; // r12
  size_t v15; // r14
  size_t v16; // r15
  __int64 v17; // rax
  __int64 v18; // r12
  _QWORD *v19; // rbp
  void *v21; // r14
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rax
  __int64 v26; // rax
  void *ptr; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+8h] [rbp-B0h]
  void *src; // [rsp+20h] [rbp-98h] BYREF
  __int128 v30; // [rsp+28h] [rbp-90h]
  void *v31; // [rsp+40h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-70h]
  void *v33; // [rsp+60h] [rbp-58h] BYREF
  __int128 v34; // [rsp+68h] [rbp-50h]
  unsigned __int64 v35; // [rsp+78h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  ptr = nullptr;
  v28 = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    ptr = (void *)qvector_reserve(&ptr, 0, v3 + 1, 1);
    *(_QWORD *)&v28 = v4;
    memmove(ptr, a2, v5);
    *((_BYTE *)ptr + v5) = 0;
  }
  strrpl();
  v6 = haystack;
  if ( (_QWORD)v28 )
    v6 = (const char *)ptr;
  if ( !(unsigned __int8)sub_8D9F80(v6, 92) )
  {
    v30 = 0;
    src = nullptr;
    src = (void *)qvector_reserve(&src, 0, 2, 1);
    *(_QWORD *)&v30 = 2;
    *(_BYTE *)src = 47;
    *((_BYTE *)src + 1) = 0;
    v7 = a1[27];
    v31 = nullptr;
    *(_OWORD *)n = 0;
    if ( v7 )
    {
      v25 = (void *)qalloc_or_throw(v7, nullptr);
      v12 = (void *)a1[26];
      v31 = v25;
      n[1] = v7;
      memcpy(v25, v12, v7);
      n[0] = v7;
      if ( !(_QWORD)v30 || (v10 = v30 - 1, (_QWORD)v30 == 1) )
      {
        v33 = nullptr;
        v34 = 0;
LABEL_13:
        v33 = (void *)qalloc_or_throw(v7, (const char *)v12);
        *((_QWORD *)&v34 + 1) = v7;
        memcpy(v33, v31, v7);
        *(_QWORD *)&v34 = v7;
        v13 = *((_QWORD *)&v34 + 1);
        v14 = v33;
        if ( !(_QWORD)v28 )
          goto LABEL_28;
        v15 = v28 - 1;
        if ( (_QWORD)v28 == 1 )
          goto LABEL_28;
        v16 = v7 - 1;
        v17 = v28 - 1 + v7 - 1;
        v7 = v17 + 1;
        if ( *((_QWORD *)&v34 + 1) >= (unsigned __int64)(v17 + 1) )
          goto LABEL_16;
        v13 = v17;
LABEL_43:
        v33 = (void *)qvector_reserve(&v33, v14, v7, 1);
        v14 = v33;
        v17 = v13;
LABEL_16:
        *(_QWORD *)&v34 = v7;
        v14[v17] = 0;
        memcpy((char *)v33 + v16, ptr, v15);
        v14 = v33;
        v13 = *((_QWORD *)&v34 + 1);
        v7 = v34;
LABEL_28:
        v23 = (void *)a1[26];
        v33 = nullptr;
        v34 = 0;
        if ( v23 )
        {
          a1[27] = 0;
          qfree(v23);
          v24 = v33;
          a1[26] = v14;
          a1[27] = v7;
          a1[28] = v13;
          if ( v24 )
          {
            *(_QWORD *)&v34 = 0;
            qfree(v24);
          }
        }
        else
        {
          a1[26] = v14;
          a1[27] = v7;
          a1[28] = v13;
        }
        if ( v31 )
        {
          n[0] = 0;
          qfree(v31);
        }
        v19 = a1 + 26;
        if ( src )
        {
          *(_QWORD *)&v30 = 0;
          qfree(src);
        }
        goto LABEL_19;
      }
      --v7;
      v9 = v30 - 1 + v7;
      v8 = v30 + v7;
    }
    else
    {
      v8 = v30;
      if ( !(_QWORD)v30 || (v9 = v30 - 1, (_QWORD)v30 == 1) )
      {
        v33 = nullptr;
        v34 = 0;
        goto LABEL_26;
      }
      v10 = v30 - 1;
    }
    v11 = v31;
    if ( n[1] < v8 )
    {
      v31 = (void *)qvector_reserve(&v31, v31, v8, 1);
      v11 = v31;
    }
    n[0] = v8;
    v11[v9] = 0;
    v12 = src;
    memcpy((char *)v31 + v7, src, v10);
    v7 = n[0];
    v33 = nullptr;
    v34 = 0;
    if ( n[0] )
      goto LABEL_13;
LABEL_26:
    v7 = v28;
    if ( !(_QWORD)v28 )
    {
      v13 = 0;
      v14 = nullptr;
      goto LABEL_28;
    }
    v13 = v28 - 1;
    if ( (_QWORD)v28 == 1 )
    {
      v7 = 0;
      v14 = nullptr;
      goto LABEL_28;
    }
    v15 = v28 - 1;
    v16 = 0;
    v14 = nullptr;
    goto LABEL_43;
  }
  v18 = v28;
  if ( (unsigned __int64)v28 > 1 )
  {
    v21 = ptr;
    v22 = (void *)a1[26];
    v19 = a1 + 26;
    if ( a1[28] < (unsigned __int64)v28 )
    {
      v26 = qvector_reserve(a1 + 26, a1[26], v28, 1);
      a1[26] = v26;
      v22 = (void *)v26;
    }
    a1[27] = v18;
    memmove(v22, v21, v18 - 1);
    *(_BYTE *)(a1[26] + v18 - 1) = 0;
  }
  else
  {
    a1[27] = 0;
    v19 = a1 + 26;
  }
LABEL_19:
  sub_8DA040(v19);
  if ( ptr )
  {
    *(_QWORD *)&v28 = 0;
    qfree(ptr);
  }
  return 0;
}

