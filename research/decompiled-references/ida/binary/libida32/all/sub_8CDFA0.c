__int64 __fastcall sub_8CDFA0(__int64 a1, const char *a2, const char *a3)
{
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // r13
  size_t v7; // r12
  size_t v8; // rax
  size_t v9; // r13
  size_t v10; // r12
  size_t v11; // rbp
  unsigned __int64 v12; // rbp
  size_t v13; // r13
  __int64 v15; // r12
  size_t v16; // r14
  __int64 v17; // rsi
  void *v18; // rax
  void *v19; // rsi
  __int64 v20; // rax
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-70h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  ptr = nullptr;
  *(_OWORD *)n = 0;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
    n[0] = v5;
    memmove(ptr, a2, v6);
    *((_BYTE *)ptr + v6) = 0;
    v7 = n[0];
    if ( n[0] > 1 )
    {
      a2 = (const char *)ptr;
      if ( *((char *)ptr + n[0] - 2) != 47 )
      {
        if ( n[1] < n[0] + 1 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, n[0] + 1, 1);
          a2 = (const char *)ptr;
        }
        n[0] = v7 + 1;
        a2[v7 - 1] = 47;
        *((_BYTE *)ptr + v7) = 0;
      }
    }
  }
  src = nullptr;
  v24 = 0;
  if ( a3 )
  {
    v8 = strlen(a3);
    v9 = v8 + 1;
    v10 = v8;
    a2 = a3;
    src = (void *)qvector_reserve(&src, 0, v8 + 1, 1);
    *(_QWORD *)&v24 = v9;
    memmove(src, a3, v10);
    *((_BYTE *)src + v10) = 0;
  }
  v11 = n[0];
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v11 )
  {
    v18 = (void *)qalloc_or_throw(v11, a2);
    *(_QWORD *)a1 = v18;
    v19 = ptr;
    *(_QWORD *)(a1 + 16) = v11;
    memcpy(v18, v19, v11);
    *(_QWORD *)(a1 + 8) = v11;
  }
  v12 = v24;
  if ( (_QWORD)v24 )
  {
    v13 = v24 - 1;
    if ( (_QWORD)v24 != 1 )
    {
      v15 = *(_QWORD *)(a1 + 8);
      v16 = v24 - 1;
      if ( v15 )
      {
        --v15;
        v16 = v13 + v15;
        v12 = v24 + v15;
      }
      v17 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v12 )
      {
        v20 = qvector_reserve(a1, v17, v12, 1);
        *(_QWORD *)a1 = v20;
        v17 = v20;
      }
      *(_QWORD *)(a1 + 8) = v12;
      *(_BYTE *)(v17 + v16) = 0;
      memcpy((void *)(v15 + *(_QWORD *)a1), src, v13);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v24 = 0;
    qfree(src);
  }
  if ( ptr )
  {
    n[0] = 0;
    qfree(ptr);
  }
  return a1;
}

