unsigned __int64 __fastcall sub_51FE60(__int64 a1, __int64 a2, __int64 *a3, double a4)
{
  _QWORD *v5; // rbp
  void *v7; // rdi
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r15
  size_t v17; // r13
  _QWORD *v18; // r14
  void *v19; // r9
  _QWORD *v20; // rsi
  unsigned __int64 v21; // r8
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rdx
  _QWORD **v24; // rax
  void *v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r12
  __int64 v30; // rbp
  int *v31; // rax
  unsigned __int64 v32; // rsi
  int *v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rdx
  _QWORD *v36; // rax
  unsigned __int64 v37; // rsi
  void *v38; // r13
  unsigned __int64 v39; // rcx
  int *v40; // rdx
  __int64 v41; // rax
  _BOOL8 v42; // rdi
  int *v43; // rbx
  __int64 v44; // r8
  __int64 i; // r9
  unsigned __int64 v46; // rsi
  int *v47; // rax
  int *v48; // rdi
  __int64 v49; // rcx
  __int64 v50; // rdx
  int *v51; // rdi
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 v55; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v56; // [rsp+10h] [rbp-98h]
  unsigned __int64 v57; // [rsp+10h] [rbp-98h]
  char v59[8]; // [rsp+30h] [rbp-78h] BYREF
  int v60; // [rsp+38h] [rbp-70h] BYREF
  void *v61; // [rsp+40h] [rbp-68h]
  int *v62; // [rsp+48h] [rbp-60h]
  int *v63; // [rsp+50h] [rbp-58h]
  __int64 v64; // [rsp+58h] [rbp-50h]
  unsigned __int64 v65; // [rsp+68h] [rbp-40h]

  v5 = *(_QWORD **)(a1 + 248);
  v65 = __readfsqword(0x28u);
  while ( v5 )
  {
    v7 = v5;
    v5 = (_QWORD *)*v5;
    operator delete(v7, 0x10u);
  }
  memset(*(void **)(a1 + 232), 0, 8LL * *(_QWORD *)(a1 + 240));
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  v8 = (_QWORD *)operator new(0x10u);
  v9 = *(_QWORD *)(a1 + 256);
  v10 = *(_QWORD *)(a1 + 240);
  *v8 = 0;
  v11 = v8;
  v8[1] = 0;
  if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                          (std::__detail::_Prime_rehash_policy *)(a1 + 264),
                          v10,
                          v9,
                          1u) )
  {
    v16 = v12;
    if ( v12 == 1 )
    {
      v19 = (void *)(a1 + 280);
      *(_QWORD *)(a1 + 280) = 0;
      v18 = (_QWORD *)(a1 + 280);
    }
    else
    {
      if ( v12 >> 60 )
      {
        if ( v12 >> 61 )
          sub_162118(a1 + 264, v10, v12, v13, v14, v15);
        std::__throw_bad_alloc();
      }
      v17 = 8 * v12;
      v18 = (_QWORD *)operator new(8 * v12);
      memset(v18, 0, v17);
      v19 = (void *)(a1 + 280);
    }
    v20 = *(_QWORD **)(a1 + 248);
    v21 = 0;
    *(_QWORD *)(a1 + 248) = 0;
    while ( v20 )
    {
      while ( 1 )
      {
        v22 = v20;
        v20 = (_QWORD *)*v20;
        v23 = v22[1] % v16;
        v24 = (_QWORD **)&v18[v23];
        if ( !*v24 )
          break;
        *v22 = **v24;
        **v24 = v22;
        if ( !v20 )
          goto LABEL_11;
      }
      *v22 = *(_QWORD *)(a1 + 248);
      *(_QWORD *)(a1 + 248) = v22;
      *v24 = (_QWORD *)(a1 + 248);
      if ( *v22 )
        v18[v21] = v22;
      v21 = v23;
    }
LABEL_11:
    v25 = *(void **)(a1 + 232);
    if ( v25 != v19 )
      operator delete(v25, 8LL * *(_QWORD *)(a1 + 240));
    *(_QWORD *)(a1 + 240) = v16;
    *(_QWORD *)(a1 + 232) = v18;
    v26 = (_QWORD *)*v18;
    if ( !*v18 )
      goto LABEL_14;
LABEL_18:
    *v11 = *v26;
    *(_QWORD *)*v18 = v11;
    goto LABEL_19;
  }
  v18 = *(_QWORD **)(a1 + 232);
  v26 = (_QWORD *)*v18;
  if ( *v18 )
    goto LABEL_18;
LABEL_14:
  v27 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = v11;
  *v11 = v27;
  if ( v27 )
  {
    v18[*(_QWORD *)(v27 + 8) % *(_QWORD *)(a1 + 240)] = v11;
    v18 = *(_QWORD **)(a1 + 232);
  }
  *v18 = a1 + 248;
LABEL_19:
  ++*(_QWORD *)(a1 + 256);
  v60 = 0;
  v61 = nullptr;
  v62 = &v60;
  v63 = &v60;
  v64 = 0;
  if ( (*(_BYTE *)(a1 + 120) & 8) == 0 )
    return v65 - __readfsqword(0x28u);
  v28 = *a3;
  v29 = *a3 + 40 * a3[1];
  if ( v29 != v28 )
  {
    v55 = a1 + 224;
    while ( 1 )
    {
      while ( !*(_BYTE *)(v28 + 32) )
      {
        v28 += 40;
        if ( v28 == v29 )
          goto LABEL_42;
      }
      v30 = sub_4901A0(v55, v28, a4);
      v31 = (int *)v61;
      v32 = *(_QWORD *)(v28 + 24);
      v33 = &v60;
      if ( v61 )
      {
        do
        {
          while ( 1 )
          {
            v34 = *((_QWORD *)v31 + 2);
            v35 = *((_QWORD *)v31 + 3);
            if ( *((_QWORD *)v31 + 4) < v32 )
              break;
            v33 = v31;
            v31 = *((int **)v31 + 2);
            if ( !v34 )
              goto LABEL_29;
          }
          v31 = *((int **)v31 + 3);
        }
        while ( v35 );
LABEL_29:
        if ( v33 != &v60 && v32 >= *((_QWORD *)v33 + 4) )
          goto LABEL_41;
      }
      v56 = *(_QWORD *)(v28 + 24);
      v36 = (_QWORD *)operator new(0x30u);
      v37 = v56;
      v36[5] = 0;
      v38 = v36;
      v36[4] = v56;
      if ( v33 == &v60 )
      {
        if ( !v64 )
          goto LABEL_35;
        v40 = v63;
        v33 = nullptr;
        if ( *((_QWORD *)v63 + 4) >= v56 )
          goto LABEL_35;
      }
      else
      {
        v39 = *((_QWORD *)v33 + 4);
        if ( v56 < v39 )
        {
          v40 = v62;
          if ( v33 == v62 )
            goto LABEL_36;
          v41 = std::_Rb_tree_decrement(v33);
          v40 = (int *)v41;
          if ( *(_QWORD *)(v41 + 32) >= v56 )
          {
LABEL_35:
            v33 = (int *)sub_51F3C0((__int64)v59, v37);
            goto LABEL_36;
          }
          if ( *(_QWORD *)(v41 + 24) )
          {
            v40 = v33;
            goto LABEL_36;
          }
LABEL_74:
          v33 = nullptr;
          goto LABEL_36;
        }
        v57 = *((_QWORD *)v33 + 4);
        if ( v39 >= v37 )
          goto LABEL_58;
        v40 = v63;
        if ( v33 == v63 )
          goto LABEL_74;
        v53 = std::_Rb_tree_increment(v33);
        v40 = (int *)v53;
        if ( v37 >= *(_QWORD *)(v53 + 32) )
          goto LABEL_35;
        v54 = v57;
        if ( !*((_QWORD *)v33 + 3) )
        {
          v40 = v33;
          if ( !v33 )
          {
LABEL_58:
            if ( v38 )
              operator delete(v38, 0x30u);
            goto LABEL_41;
          }
          goto LABEL_73;
        }
        v33 = (int *)v53;
      }
LABEL_36:
      if ( !v40 )
        goto LABEL_58;
      if ( !v33 && v40 != &v60 )
      {
        v54 = *((_QWORD *)v40 + 4);
LABEL_73:
        v42 = v37 < v54;
        goto LABEL_40;
      }
      v42 = 1;
LABEL_40:
      v33 = (int *)v38;
      std::_Rb_tree_insert_and_rebalance(v42, v38, v40, &v60);
      ++v64;
LABEL_41:
      v28 += 40;
      *((_QWORD *)v33 + 5) = v30;
      if ( v28 == v29 )
      {
LABEL_42:
        v43 = (int *)v61;
        v44 = *(_QWORD *)(a2 + 8);
        for ( i = v44 + 32LL * *(_QWORD *)(a2 + 16); v44 != i; v44 += 32 )
        {
LABEL_43:
          if ( v43 )
          {
            while ( 1 )
            {
              v46 = *(_QWORD *)(v44 + 8);
              v47 = v43;
              v48 = &v60;
              do
              {
                while ( 1 )
                {
                  v49 = *((_QWORD *)v47 + 2);
                  v50 = *((_QWORD *)v47 + 3);
                  if ( *((_QWORD *)v47 + 4) < v46 )
                    break;
                  v48 = v47;
                  v47 = *((int **)v47 + 2);
                  if ( !v49 )
                    goto LABEL_48;
                }
                v47 = *((int **)v47 + 3);
              }
              while ( v50 );
LABEL_48:
              if ( v48 != &v60 && v46 >= *((_QWORD *)v48 + 4) )
                break;
              v44 += 32;
              if ( i == v44 )
                goto LABEL_51;
            }
            *(_QWORD *)(v44 + 8) = *((_QWORD *)v48 + 5);
            v43 = (int *)v61;
          }
        }
LABEL_51:
        while ( v43 )
        {
          sub_51FBA0(*((_QWORD **)v43 + 3));
          v51 = v43;
          v43 = *((int **)v43 + 2);
          operator delete(v51, 0x30u);
        }
        return v65 - __readfsqword(0x28u);
      }
    }
  }
  v44 = *(_QWORD *)(a2 + 8);
  i = v44 + 32LL * *(_QWORD *)(a2 + 16);
  if ( i != v44 )
  {
    v43 = nullptr;
    goto LABEL_43;
  }
  return v65 - __readfsqword(0x28u);
}
