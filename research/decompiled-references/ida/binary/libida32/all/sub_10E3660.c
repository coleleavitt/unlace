void __fastcall sub_10E3660(_QWORD *a1, char *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  char *v5; // r13
  unsigned __int64 v7; // rdi
  signed __int64 v8; // rbx
  char *v9; // r15
  unsigned __int64 v10; // rax
  char *v11; // rcx
  signed __int64 v12; // rbp
  char *v13; // rsi
  char *v14; // rax
  char *v15; // r8
  size_t v16; // rbx
  char *v17; // rdx
  __int64 v18; // rbp
  size_t v19; // r15
  __int64 v20; // rax
  void *v21; // r8
  char *v22; // rcx
  char *v23; // rax
  __int64 v24; // rax
  char *v25; // rbp
  char *v26; // [rsp+8h] [rbp-50h]
  void *v27; // [rsp+8h] [rbp-50h]
  char *v28; // [rsp+8h] [rbp-50h]
  __int64 v29[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = a3 + 1;
  if ( (unsigned __int64)(a3 + 1) > 0x1FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::reserve");
  v5 = (char *)a1[54];
  v7 = (__int64)(a1[56] - (_QWORD)v5) >> 3;
  if ( v3 > v7 )
  {
    v17 = (char *)a1[55];
    v18 = 8 * v3;
    v19 = v17 - v5;
    if ( v3 )
    {
      v26 = (char *)a1[55];
      v20 = operator new(8 * v3);
      v21 = (void *)a1[54];
      v17 = v26;
      v22 = (char *)v20;
    }
    else
    {
      v21 = v5;
      v22 = nullptr;
    }
    if ( v5 != v17 )
    {
      v27 = v21;
      v23 = (char *)memmove(v22, v5, v19);
      v21 = v27;
      v22 = v23;
    }
    if ( v21 )
    {
      v28 = v22;
      operator delete(v21);
      v22 = v28;
    }
    v5 = v22;
    a1[54] = v22;
    v7 = v18 >> 3;
    a1[55] = &v22[v19];
    a1[56] = &v22[v18];
  }
  v8 = 8 * a3;
  v9 = &a2[v8];
  v10 = v8 >> 3;
  if ( v8 >> 3 > v7 )
  {
    if ( v10 )
    {
      if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
        std::__throw_bad_alloc();
      v24 = operator new(v8);
      v5 = (char *)a1[54];
      v25 = (char *)v24;
    }
    else
    {
      v25 = nullptr;
    }
    if ( v9 != a2 )
      memcpy(v25, a2, v8);
    if ( v5 )
      operator delete(v5);
    v13 = &v25[v8];
    a1[54] = v25;
    a1[55] = &v25[v8];
    a1[56] = &v25[v8];
    v29[0] = 0;
    goto LABEL_31;
  }
  v11 = (char *)a1[55];
  v12 = v11 - v5;
  if ( v10 > (v11 - v5) >> 3 )
  {
    v15 = &a2[v12];
    if ( a2 != &a2[v12] )
    {
      memmove(v5, a2, a1[55] - (_QWORD)v5);
      v11 = (char *)a1[55];
      v15 = &a2[v12];
    }
    v16 = v8 - v12;
    if ( v9 != v15 )
      v11 = (char *)memmove(v11, v15, v16);
    v13 = &v11[v16];
    goto LABEL_8;
  }
  if ( v9 != a2 )
  {
    memmove(v5, a2, v8);
    v11 = (char *)a1[55];
  }
  v13 = &v5[v8];
  if ( &v5[v8] != v11 )
  {
LABEL_8:
    a1[55] = v13;
    v14 = (char *)a1[56];
    goto LABEL_9;
  }
  v14 = (char *)a1[56];
  v13 = v11;
LABEL_9:
  v29[0] = 0;
  if ( v14 != v13 )
  {
    *(_QWORD *)v13 = 0;
    a1[55] = v13 + 8;
    return;
  }
LABEL_31:
  sub_10E3510((__int64)(a1 + 54), v13, v29);
}

