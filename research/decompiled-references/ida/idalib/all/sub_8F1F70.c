__int64 __fastcall sub_8F1F70(_QWORD *a1, const char *a2)
{
  void *v3; // rbp
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  const char *v7; // rdi
  size_t v8; // rbp
  size_t v9; // r12
  size_t v10; // r14
  size_t v11; // r13
  _BYTE *v12; // rsi
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
  const void *v26; // rsi
  __int64 v27; // rax
  void *ptr; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v29; // [rsp+8h] [rbp-B0h]
  void *src; // [rsp+20h] [rbp-98h] BYREF
  __int128 v31; // [rsp+28h] [rbp-90h]
  void *v32; // [rsp+40h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-70h]
  void *v34; // [rsp+60h] [rbp-58h] BYREF
  __int128 v35; // [rsp+68h] [rbp-50h]
  unsigned __int64 v36; // [rsp+78h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v3 = (void *)a2;
  ptr = nullptr;
  v29 = 0;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
    *(_QWORD *)&v29 = v5;
    memmove(ptr, a2, v6);
    *((_BYTE *)ptr + v6) = 0;
    v3 = ptr;
  }
  strrpl(v3, 92, 47);
  v7 = haystack;
  if ( (_QWORD)v29 )
    v7 = (const char *)ptr;
  if ( !(unsigned __int8)sub_8FDCC0(v7) )
  {
    v31 = 0;
    src = nullptr;
    src = (void *)qvector_reserve(&src, 0, 2, 1);
    *(_QWORD *)&v31 = 2;
    *(_BYTE *)src = 47;
    *((_BYTE *)src + 1) = 0;
    v8 = a1[27];
    v32 = nullptr;
    *(_OWORD *)n = 0;
    if ( v8 )
    {
      v25 = (void *)qalloc_or_throw(v8);
      v26 = (const void *)a1[26];
      v32 = v25;
      n[1] = v8;
      memcpy(v25, v26, v8);
      n[0] = v8;
      if ( !(_QWORD)v31 || (v11 = v31 - 1, (_QWORD)v31 == 1) )
      {
        v34 = nullptr;
        v35 = 0;
LABEL_13:
        v34 = (void *)qalloc_or_throw(v8);
        *((_QWORD *)&v35 + 1) = v8;
        memcpy(v34, v32, v8);
        *(_QWORD *)&v35 = v8;
        v13 = *((_QWORD *)&v35 + 1);
        v14 = v34;
        if ( !(_QWORD)v29 )
          goto LABEL_28;
        v15 = v29 - 1;
        if ( (_QWORD)v29 == 1 )
          goto LABEL_28;
        v16 = v8 - 1;
        v17 = v29 - 1 + v8 - 1;
        v8 = v17 + 1;
        if ( *((_QWORD *)&v35 + 1) >= (unsigned __int64)(v17 + 1) )
          goto LABEL_16;
        v13 = v17;
LABEL_43:
        v34 = (void *)qvector_reserve(&v34, v14, v8, 1);
        v14 = v34;
        v17 = v13;
LABEL_16:
        *(_QWORD *)&v35 = v8;
        v14[v17] = 0;
        memcpy((char *)v34 + v16, ptr, v15);
        v14 = v34;
        v13 = *((_QWORD *)&v35 + 1);
        v8 = v35;
LABEL_28:
        v23 = (void *)a1[26];
        v34 = nullptr;
        v35 = 0;
        if ( v23 )
        {
          a1[27] = 0;
          qfree(v23);
          v24 = v34;
          a1[26] = v14;
          a1[27] = v8;
          a1[28] = v13;
          if ( v24 )
          {
            *(_QWORD *)&v35 = 0;
            qfree(v24);
          }
        }
        else
        {
          a1[26] = v14;
          a1[27] = v8;
          a1[28] = v13;
        }
        if ( v32 )
        {
          n[0] = 0;
          qfree(v32);
        }
        v19 = a1 + 26;
        if ( src )
        {
          *(_QWORD *)&v31 = 0;
          qfree(src);
        }
        goto LABEL_19;
      }
      --v8;
      v10 = v31 - 1 + v8;
      v9 = v31 + v8;
    }
    else
    {
      v9 = v31;
      if ( !(_QWORD)v31 || (v10 = v31 - 1, (_QWORD)v31 == 1) )
      {
        v34 = nullptr;
        v35 = 0;
        goto LABEL_26;
      }
      v11 = v31 - 1;
    }
    v12 = v32;
    if ( n[1] < v9 )
    {
      v32 = (void *)qvector_reserve(&v32, v32, v9, 1);
      v12 = v32;
    }
    n[0] = v9;
    v12[v10] = 0;
    memcpy((char *)v32 + v8, src, v11);
    v8 = n[0];
    v34 = nullptr;
    v35 = 0;
    if ( n[0] )
      goto LABEL_13;
LABEL_26:
    v8 = v29;
    if ( !(_QWORD)v29 )
    {
      v13 = 0;
      v14 = nullptr;
      goto LABEL_28;
    }
    v13 = v29 - 1;
    if ( (_QWORD)v29 == 1 )
    {
      v8 = 0;
      v14 = nullptr;
      goto LABEL_28;
    }
    v15 = v29 - 1;
    v16 = 0;
    v14 = nullptr;
    goto LABEL_43;
  }
  v18 = v29;
  if ( (unsigned __int64)v29 > 1 )
  {
    v21 = ptr;
    v22 = (void *)a1[26];
    v19 = a1 + 26;
    if ( a1[28] < (unsigned __int64)v29 )
    {
      v27 = qvector_reserve(a1 + 26, a1[26], v29, 1);
      a1[26] = v27;
      v22 = (void *)v27;
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
  sub_8FDD80(v19);
  if ( ptr )
  {
    *(_QWORD *)&v29 = 0;
    qfree(ptr);
  }
  return 0;
}
