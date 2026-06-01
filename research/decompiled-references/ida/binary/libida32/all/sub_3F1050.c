__int64 __fastcall sub_3F1050(__int64 a1, _QWORD *a2)
{
  bool v2; // cc
  const void **v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  size_t v8; // r13
  size_t v9; // rbp
  size_t v10; // r15
  size_t v11; // r14
  _BYTE *v12; // rsi
  void *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rbp
  size_t v19; // r14
  __int64 v20; // r13
  char *v21; // r15
  __int64 v22; // rsi
  void *v24; // rax
  void *v25; // rax
  void *v26; // rsi
  __int64 v27; // rax
  void *src; // [rsp+0h] [rbp-78h] BYREF
  __int128 v29; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v2 = a2[8] <= 1u;
  v32 = __readfsqword(0x28u);
  v3 = (const void **)(a2 + 1);
  if ( !v2 )
    v3 = (const void **)(a2 + 7);
  src = nullptr;
  v29 = 0;
  src = (void *)qvector_reserve(&src, 0, 2, 1);
  *(_QWORD *)&v29 = 2;
  *(_BYTE *)src = 47;
  *((_BYTE *)src + 1) = 0;
  v8 = a2[5];
  ptr = nullptr;
  *(_OWORD *)n = 0;
  if ( v8 )
  {
    v24 = (void *)qalloc_or_throw(v8, 0, v4, v5, v6, v7);
    v13 = (void *)a2[4];
    ptr = v24;
    n[1] = v8;
    memcpy(v24, v13, v8);
    n[0] = v8;
    if ( !(_QWORD)v29 || (v11 = v29 - 1, (_QWORD)v29 == 1) )
    {
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
LABEL_26:
      v25 = (void *)qalloc_or_throw(v8, v13, v14, v15, v16, v17);
      *(_QWORD *)a1 = v25;
      v26 = ptr;
      *(_QWORD *)(a1 + 16) = v8;
      memcpy(v25, v26, v8);
      *(_QWORD *)(a1 + 8) = v8;
      goto LABEL_27;
    }
    --v8;
    v10 = v29 - 1 + v8;
    v9 = v29 + v8;
LABEL_7:
    v12 = ptr;
    if ( n[1] < v9 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v9, 1);
      v12 = ptr;
    }
    n[0] = v9;
    v12[v10] = 0;
    v13 = src;
    memcpy((char *)ptr + v8, src, v11);
    v8 = n[0];
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    if ( !v8 )
    {
      v18 = (char *)v3[1];
      if ( v18 )
        goto LABEL_11;
      goto LABEL_17;
    }
    goto LABEL_26;
  }
  v9 = v29;
  if ( !(_QWORD)v29 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v18 = (char *)v3[1];
    if ( !v18 )
      goto LABEL_19;
    goto LABEL_11;
  }
  v10 = v29 - 1;
  if ( (_QWORD)v29 != 1 )
  {
    v11 = v29 - 1;
    goto LABEL_7;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
LABEL_27:
  v18 = (char *)v3[1];
  if ( v18 )
  {
LABEL_11:
    v19 = (size_t)(v18 - 1);
    if ( v18 != (_BYTE *)&dword_0 + 1 )
    {
      v20 = *(_QWORD *)(a1 + 8);
      v21 = v18 - 1;
      if ( v20 )
      {
        --v20;
        v21 = (char *)(v19 + v20);
        v18 += v20;
      }
      v22 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v18 )
      {
        v27 = qvector_reserve(a1, v22, v18, 1);
        *(_QWORD *)a1 = v27;
        v22 = v27;
      }
      *(_QWORD *)(a1 + 8) = v18;
      v21[v22] = 0;
      memcpy((void *)(v20 + *(_QWORD *)a1), *v3, v19);
    }
  }
LABEL_17:
  if ( ptr )
  {
    n[0] = 0;
    qfree(ptr);
  }
LABEL_19:
  if ( src )
  {
    *(_QWORD *)&v29 = 0;
    qfree(src);
  }
  return a1;
}

