__int64 __fastcall sub_4C7740(__int64 a1, __int64 a2, _QWORD **a3)
{
  _BYTE *v3; // r12
  _QWORD *v5; // r8
  _QWORD *v6; // r14
  _QWORD *v7; // rbp
  __int64 v8; // rdx
  _BYTE *v9; // r8
  __int64 v10; // r15
  unsigned __int64 v11; // r13
  _BYTE *v12; // rdi
  size_t v13; // r13
  void *v14; // rcx
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  _BYTE *v17; // rax
  __int64 v18; // r13
  unsigned __int64 v19; // rdi
  _BYTE *v20; // rax
  size_t v21; // rdx
  size_t v22; // r9
  _BYTE *v23; // r10
  _BYTE *v24; // rsi
  _BYTE *v25; // rax
  _BYTE *v26; // rdi
  __int64 v27; // r15
  unsigned __int64 v28; // rdi
  _BYTE *v29; // rax
  _BYTE *v30; // r10
  _BYTE *v31; // rax
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rdx
  _BYTE *v34; // rax
  __int64 v36; // rax
  void *v37; // rax
  size_t v39; // [rsp+18h] [rbp-70h]
  size_t v40; // [rsp+18h] [rbp-70h]
  size_t v41; // [rsp+18h] [rbp-70h]
  size_t v42; // [rsp+18h] [rbp-70h]
  size_t v43; // [rsp+18h] [rbp-70h]
  size_t v44; // [rsp+18h] [rbp-70h]
  _BYTE *v45; // [rsp+20h] [rbp-68h]
  void *v46; // [rsp+20h] [rbp-68h]
  void *v47; // [rsp+20h] [rbp-68h]
  void *v48; // [rsp+20h] [rbp-68h]
  size_t v49; // [rsp+28h] [rbp-60h]
  size_t v50; // [rsp+28h] [rbp-60h]
  size_t v51; // [rsp+28h] [rbp-60h]
  size_t v52; // [rsp+28h] [rbp-60h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n; // [rsp+38h] [rbp-50h]
  __int64 v55; // [rsp+40h] [rbp-48h] BYREF

  v3 = (_BYTE *)(a1 + 16);
  *(_WORD *)(a1 + 16) = 91;
  v5 = *a3;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 1;
  if ( !v5 || (v6 = &v5[*((unsigned int *)v5 - 1)], v6 == v5) )
  {
    v31 = (_BYTE *)(a1 + 16);
    v13 = 1;
    v32 = 2;
    goto LABEL_48;
  }
  v7 = v5;
  while ( 1 )
  {
    sub_4C7370((__int64)&src, a2, v5);
    v8 = *(_QWORD *)(a1 + 8);
    if ( 0x7FFFFFFFFFFFFFFFLL - v8 < n )
      std::__throw_length_error("basic_string::append");
    v9 = *(_BYTE **)a1;
    v10 = n + v8;
    if ( v3 != *(_BYTE **)a1 )
    {
      v11 = *(_QWORD *)(a1 + 16);
      if ( v11 >= v10 )
        goto LABEL_7;
      if ( v10 < 0 )
        goto LABEL_64;
      v18 = 2 * v11;
      if ( v10 < (unsigned __int64)v18 )
      {
        if ( v18 < 0 )
LABEL_54:
          std::__throw_bad_alloc();
        v19 = v18 + 1;
        goto LABEL_21;
      }
LABEL_19:
      v19 = v10 + 1;
      if ( v10 + 1 < 0 )
        goto LABEL_54;
      v18 = n + v8;
      goto LABEL_21;
    }
    if ( (unsigned __int64)v10 <= 0xF )
    {
LABEL_7:
      if ( n )
      {
        v12 = &v9[v8];
        if ( n == 1 )
          *v12 = *(_BYTE *)src;
        else
          memcpy(v12, src, n);
        v9 = *(_BYTE **)a1;
      }
      goto LABEL_11;
    }
    if ( v10 < 0 )
LABEL_64:
      std::__throw_length_error("basic_string::_M_create");
    if ( (unsigned __int64)v10 > 0x1D )
      goto LABEL_19;
    v19 = 31;
    v18 = 30;
LABEL_21:
    v49 = *(_QWORD *)(a1 + 8);
    v45 = src;
    v39 = n;
    v20 = (_BYTE *)operator new(v19);
    v21 = v49;
    v22 = v39;
    v9 = v20;
    v23 = v45;
    if ( v49 )
    {
      v24 = *(_BYTE **)a1;
      if ( v49 == 1 )
      {
        *v20 = *v24;
      }
      else
      {
        v50 = (size_t)v45;
        v46 = (void *)v39;
        v40 = v21;
        v25 = memcpy(v20, v24, v21);
        v23 = (_BYTE *)v50;
        v22 = (size_t)v46;
        v21 = v40;
        v9 = v25;
      }
    }
    if ( v23 && v22 )
    {
      v26 = &v9[v21];
      if ( v22 == 1 )
      {
        *v26 = *v23;
      }
      else
      {
        v41 = (size_t)v9;
        memcpy(v26, v23, v22);
        v9 = (_BYTE *)v41;
      }
    }
    if ( v3 != *(_BYTE **)a1 )
    {
      v42 = (size_t)v9;
      operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) + 1LL);
      v9 = (_BYTE *)v42;
    }
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 16) = v18;
LABEL_11:
    *(_QWORD *)(a1 + 8) = v10;
    v9[v10] = 0;
    if ( src != &v55 )
      operator delete(src, v55 + 1);
    ++v7;
    v13 = *(_QWORD *)(a1 + 8);
    v5 = v7;
    if ( v6 == v7 )
      break;
    v14 = *(void **)a1;
    v15 = v13 + 1;
    if ( v3 == *(_BYTE **)a1 )
    {
      if ( v13 != 15 )
        goto LABEL_16;
      v36 = operator new(0x1Fu);
      v30 = *(_BYTE **)a1;
      v15 = 16;
      v14 = (void *)v36;
      v27 = 30;
      v5 = v7;
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 16);
      if ( v16 >= v15 )
        goto LABEL_16;
      if ( v15 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v27 = 2 * v16;
      if ( v15 < 2 * v16 )
      {
        if ( (v16 & 0x4000000000000000LL) != 0 )
LABEL_59:
          std::__throw_bad_alloc();
        v28 = v27 + 1;
      }
      else
      {
        v28 = v13 + 2;
        if ( (__int64)(v13 + 2) < 0 )
          goto LABEL_59;
        v27 = v13 + 1;
      }
      v29 = (_BYTE *)operator new(v28);
      v30 = *(_BYTE **)a1;
      v15 = v13 + 1;
      v14 = v29;
      v5 = v7;
      if ( !v13 )
        goto LABEL_40;
      if ( v13 == 1 )
      {
        *v29 = *v30;
        goto LABEL_40;
      }
    }
    v52 = (size_t)v5;
    v48 = (void *)v15;
    v44 = (size_t)v30;
    v37 = memcpy(v14, v30, v13);
    v5 = (_QWORD *)v52;
    v15 = (__int64)v48;
    v30 = (_BYTE *)v44;
    v14 = v37;
LABEL_40:
    if ( v3 != v30 )
    {
      v51 = (size_t)v5;
      v47 = v14;
      v43 = v15;
      operator delete(v30, *(_QWORD *)(a1 + 16) + 1LL);
      v5 = (_QWORD *)v51;
      v14 = v47;
      v15 = v43;
    }
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 16) = v27;
LABEL_16:
    *((_BYTE *)v14 + v13) = 44;
    v17 = *(_BYTE **)a1;
    *(_QWORD *)(a1 + 8) = v15;
    v17[v13 + 1] = 0;
  }
  v31 = *(_BYTE **)a1;
  v32 = v13 + 1;
  if ( v3 == *(_BYTE **)a1 )
    v33 = 15;
  else
    v33 = *(_QWORD *)(a1 + 16);
  if ( v33 < v32 )
  {
    sub_23A830((_QWORD *)a1, *(_QWORD *)(a1 + 8), 0, nullptr, 1u);
    v31 = *(_BYTE **)a1;
  }
LABEL_48:
  v31[v13] = 93;
  v34 = *(_BYTE **)a1;
  *(_QWORD *)(a1 + 8) = v32;
  v34[v32] = 0;
  return a1;
}

