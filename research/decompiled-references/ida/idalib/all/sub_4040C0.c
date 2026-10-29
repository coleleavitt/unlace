__int64 __fastcall sub_4040C0(__int64 a1, _QWORD *a2)
{
  bool v2; // cc
  const void **v3; // r12
  size_t v4; // r13
  size_t v5; // rbp
  size_t v6; // r15
  size_t v7; // r14
  _BYTE *v8; // rsi
  char *v9; // rbp
  size_t v10; // r14
  __int64 v11; // r13
  char *v12; // r15
  __int64 v13; // rsi
  void *v15; // rax
  const void *v16; // rsi
  void *v17; // rax
  void *v18; // rsi
  __int64 v19; // rax
  void *src; // [rsp+0h] [rbp-78h] BYREF
  __int128 v21; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v2 = a2[9] <= 1u;
  v24 = __readfsqword(0x28u);
  v3 = (const void **)(a2 + 2);
  if ( !v2 )
    v3 = (const void **)(a2 + 8);
  src = nullptr;
  v21 = 0;
  src = (void *)qvector_reserve(&src, 0, 2, 1);
  *(_QWORD *)&v21 = 2;
  *(_BYTE *)src = 47;
  *((_BYTE *)src + 1) = 0;
  v4 = a2[6];
  ptr = nullptr;
  *(_OWORD *)n = 0;
  if ( v4 )
  {
    v15 = (void *)qalloc_or_throw(v4);
    v16 = (const void *)a2[5];
    ptr = v15;
    n[1] = v4;
    memcpy(v15, v16, v4);
    n[0] = v4;
    if ( !(_QWORD)v21 || (v7 = v21 - 1, (_QWORD)v21 == 1) )
    {
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
LABEL_26:
      v17 = (void *)qalloc_or_throw(v4);
      *(_QWORD *)a1 = v17;
      v18 = ptr;
      *(_QWORD *)(a1 + 16) = v4;
      memcpy(v17, v18, v4);
      *(_QWORD *)(a1 + 8) = v4;
      goto LABEL_27;
    }
    --v4;
    v6 = v21 - 1 + v4;
    v5 = v21 + v4;
LABEL_7:
    v8 = ptr;
    if ( n[1] < v5 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v5, 1);
      v8 = ptr;
    }
    n[0] = v5;
    v8[v6] = 0;
    memcpy((char *)ptr + v4, src, v7);
    v4 = n[0];
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    if ( !v4 )
    {
      v9 = (char *)v3[1];
      if ( v9 )
        goto LABEL_11;
      goto LABEL_17;
    }
    goto LABEL_26;
  }
  v5 = v21;
  if ( !(_QWORD)v21 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v9 = (char *)v3[1];
    if ( !v9 )
      goto LABEL_19;
    goto LABEL_11;
  }
  v6 = v21 - 1;
  if ( (_QWORD)v21 != 1 )
  {
    v7 = v21 - 1;
    goto LABEL_7;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
LABEL_27:
  v9 = (char *)v3[1];
  if ( v9 )
  {
LABEL_11:
    v10 = (size_t)(v9 - 1);
    if ( v9 != (_BYTE *)&dword_0 + 1 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      v12 = v9 - 1;
      if ( v11 )
      {
        --v11;
        v12 = (char *)(v10 + v11);
        v9 += v11;
      }
      v13 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v9 )
      {
        v19 = qvector_reserve(a1, v13, v9, 1);
        *(_QWORD *)a1 = v19;
        v13 = v19;
      }
      *(_QWORD *)(a1 + 8) = v9;
      v12[v13] = 0;
      memcpy((void *)(v11 + *(_QWORD *)a1), *v3, v10);
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
    *(_QWORD *)&v21 = 0;
    qfree(src);
  }
  return a1;
}
