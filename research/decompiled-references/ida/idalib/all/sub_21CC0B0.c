unsigned __int64 __fastcall sub_21CC0B0(size_t *a1, __int64 a2, __int64 a3, unsigned int *a4, void *a5)
{
  unsigned __int64 v5; // rbp
  size_t v8; // rax
  size_t v9; // rcx
  size_t v10; // r12
  char *v11; // r15
  char *v12; // r14
  void **v13; // rdi
  void **v14; // rbp
  void **v15; // rbx
  void *v16; // rdi
  unsigned __int64 *v17; // rbx
  __m128 *v18; // r12
  bool v19; // zf
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r13
  __int64 v22; // rbp
  unsigned __int64 v23; // r12
  char *v24; // r15
  char *v25; // r13
  __int64 v26; // r14
  char *v27; // r10
  _QWORD *v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // r13
  char *v32; // rax
  void *v33; // r8
  char *v34; // r14
  void *v35; // rax
  unsigned __int64 v36; // rsi
  void *v37; // rax
  char *v38; // rcx
  void *v39; // r11
  unsigned __int64 v40; // rsi
  char *v41; // r9
  __int64 v42; // rdx
  void *v43; // rbx
  void *v44; // rdi
  void *v45; // r8
  __m128 v46; // xmm0
  bool v47; // cc
  void *v48; // rdi
  unsigned __int64 v49; // rbp
  __int64 v50; // r15
  unsigned __int64 v51; // r12
  char *v52; // rbx
  unsigned __int64 v53; // r14
  size_t v54; // rbx
  unsigned __int64 v55; // rbp
  char *v56; // rax
  void *v57; // r9
  char *v58; // rbp
  void *v59; // r8
  __int64 v60; // rdi
  char *v61; // rax
  unsigned __int64 v62; // rbx
  unsigned __int64 v63; // rbp
  __int64 v64; // r12
  __int64 v65; // rdi
  size_t v66; // [rsp+0h] [rbp-E8h]
  char *v67; // [rsp+0h] [rbp-E8h]
  void *src; // [rsp+8h] [rbp-E0h] BYREF
  size_t n; // [rsp+10h] [rbp-D8h]
  __m128 *v70; // [rsp+18h] [rbp-D0h]
  unsigned int *v71; // [rsp+20h] [rbp-C8h]
  void **v72; // [rsp+28h] [rbp-C0h]
  __m128 *v73; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v74; // [rsp+38h] [rbp-B0h]
  _QWORD v75[3]; // [rsp+40h] [rbp-A8h] BYREF
  void *v76; // [rsp+58h] [rbp-90h] BYREF
  unsigned int *v77; // [rsp+60h] [rbp-88h] BYREF
  char v78; // [rsp+68h] [rbp-80h]
  void *v79[2]; // [rsp+70h] [rbp-78h] BYREF
  char *v80; // [rsp+80h] [rbp-68h]
  void *v81[2]; // [rsp+90h] [rbp-58h] BYREF
  char *v82; // [rsp+A0h] [rbp-48h]

  v73 = (__m128 *)a1;
  v75[0] = a2;
  v75[1] = a3;
  src = a5;
  if ( ((unsigned __int8)a5 & 7) != 0 )
    return 0;
  v8 = *a1;
  v9 = a1[1];
  n = v8;
  v66 = v9;
  if ( v9 != v8 )
  {
    v10 = v8;
    do
    {
      while ( 1 )
      {
        v11 = *(char **)(v10 + 48);
        if ( v11 )
        {
          v12 = v11 + 72;
          do
          {
            while ( 1 )
            {
              v12 -= 24;
              v13 = *(void ***)v12;
              v14 = *((void ***)v12 + 1);
              v15 = *(void ***)v12;
              if ( v14 != *(void ***)v12 )
              {
                do
                {
                  while ( *v15 )
                  {
                    operator delete(*v15);
                    v15 += 3;
                    if ( v14 == v15 )
                      goto LABEL_11;
                  }
                  v15 += 3;
                }
                while ( v14 != v15 );
LABEL_11:
                v13 = *(void ***)v12;
              }
              if ( !v13 )
                break;
              operator delete(v13);
              if ( v11 == v12 )
                goto LABEL_14;
            }
          }
          while ( v11 != v12 );
LABEL_14:
          operator delete(v11, 0x48u);
        }
        v16 = *(void **)(v10 + 24);
        if ( v16 )
          operator delete(v16);
        if ( !*(_QWORD *)v10 )
          break;
        operator delete(*(void **)v10);
        v10 += 80LL;
        if ( v66 == v10 )
        {
          v73->m128_u64[1] = n;
          goto LABEL_20;
        }
      }
      v10 += 80LL;
    }
    while ( v66 != v10 );
    v73->m128_u64[1] = n;
  }
LABEL_20:
  v80 = nullptr;
  *(_OWORD *)v79 = 0;
  *(_OWORD *)v81 = 0;
  v82 = nullptr;
  v67 = (char *)src + (_QWORD)a4;
  if ( (char *)src + (unsigned __int64)a4 <= (char *)a4 )
  {
    v5 = v73->m128_u64[0];
    goto LABEL_76;
  }
  v17 = (unsigned __int64 *)(a4 + 2);
  if ( (char *)src + (unsigned __int64)a4 <= (char *)a4 + 8 )
  {
    v5 = 0;
    goto LABEL_76;
  }
  v18 = v73;
  v74 = ((unsigned __int64)src >> 3) - 1;
  v72 = v79;
  do
  {
    v19 = v18[1].m128_i32[3] == 1;
    v76 = *(void **)a4;
    if ( v19 )
    {
      v20 = v74;
      v21 = (unsigned __int64)&v17[v74];
      if ( v21 > (unsigned __int64)v67 )
        goto LABEL_73;
    }
    else
    {
      if ( a4 + 4 > (unsigned int *)v67 )
        goto LABEL_73;
      v20 = *v17;
      v17 = (unsigned __int64 *)(a4 + 4);
      v21 = (unsigned __int64)&a4[2 * v20 + 4];
      if ( v21 > (unsigned __int64)v67 )
        goto LABEL_73;
    }
    if ( v79[0] != v79[1] )
      v79[1] = v79[0];
    sub_201FFC0((__int64)v72, v20);
    if ( v20 )
    {
      v70 = v18;
      v22 = 0;
      v71 = (unsigned int *)v21;
      v23 = v20;
      v24 = (char *)v79[1];
      v25 = v80;
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = *v17++;
          if ( v25 == v24 )
            break;
          *(_QWORD *)v24 = v26;
          ++v22;
          v24 += 8;
          v79[1] = v24;
          if ( v23 == v22 )
            goto LABEL_38;
        }
        v27 = (char *)v79[0];
        v28 = (_QWORD *)(v24 - (char *)v79[0]);
        v29 = (v24 - (char *)v79[0]) >> 3;
        if ( !v29 )
        {
          v31 = 8;
          goto LABEL_34;
        }
        v30 = 2 * v29;
        v31 = -8;
        if ( v29 > 2 * v29 )
          goto LABEL_34;
        if ( v30 > 0x1FFFFFFFFFFFFFFFLL )
          break;
        if ( v30 )
        {
          v31 = 16 * v29;
LABEL_34:
          n = v24 - (char *)v79[0];
          src = v79[0];
          v32 = (char *)operator new(v31);
          v28 = (_QWORD *)n;
          v27 = (char *)src;
          v33 = v32;
          v25 = &v32[v31];
          *(_QWORD *)&v32[n] = v26;
          v34 = (char *)v28 + (_QWORD)v32 + 8;
          if ( v27 == v24 )
            goto LABEL_50;
          goto LABEL_35;
        }
        v33 = nullptr;
        v25 = nullptr;
        *v28 = v26;
        v34 = (char *)(v28 + 1);
        if ( v27 == v24 )
        {
LABEL_50:
          if ( !v27 )
            goto LABEL_37;
          goto LABEL_36;
        }
LABEL_35:
        src = v27;
        v35 = memmove(v33, v27, (size_t)v28);
        v27 = (char *)src;
        v33 = v35;
LABEL_36:
        src = v33;
        operator delete(v27);
LABEL_37:
        ++v22;
        v24 = v34;
        src = v34;
        v80 = v25;
        *(__m128 *)v79 = _mm_loadh_ps((const double *)&src);
        if ( v23 == v22 )
        {
LABEL_38:
          v18 = v70;
          a4 = v71;
          goto LABEL_39;
        }
      }
      v31 = -8;
      goto LABEL_34;
    }
    a4 = (unsigned int *)v17;
LABEL_39:
    if ( v18[1].m128_i32[3] <= 0xAu )
      goto LABEL_40;
    v48 = v81[0];
    if ( a4 + 2 > (unsigned int *)v67 || (v49 = *(_QWORD *)a4, v67 < (char *)a4 + *(_QWORD *)a4 + 8) )
    {
      v5 = 0;
      goto LABEL_74;
    }
    if ( v81[1] != v81[0] )
      v81[1] = v81[0];
    sub_21CB270((__int64)v81, v49);
    if ( !v49 )
    {
      a4 += 2;
LABEL_40:
      v36 = v18->m128_u64[1];
      if ( v36 == v18[1].m128_u64[0] )
        goto LABEL_69;
LABEL_41:
      v37 = v76;
      *(_QWORD *)(v36 + 48) = 0;
      v38 = v82;
      v39 = v79[1];
      v82 = nullptr;
      v40 = v36 + 80;
      src = v37;
      v41 = v80;
      v42 = v75[0];
      v43 = v79[0];
      *(_QWORD *)(v40 - 40) = v38;
      v44 = v81[1];
      v45 = v81[0];
      *(_OWORD *)v79 = 0;
      v46 = _mm_loadh_ps((const double *)&src);
      *(_QWORD *)(v40 - 24) = v42;
      v80 = nullptr;
      *(_QWORD *)(v40 - 56) = v45;
      *(_QWORD *)(v40 - 64) = v41;
      *(_QWORD *)(v40 - 48) = v44;
      *(__m128 *)(v40 - 16) = v46;
      *(_OWORD *)v81 = 0;
      *(_QWORD *)(v40 - 80) = v43;
      *(_QWORD *)(v40 - 72) = v39;
      v47 = v18[1].m128_i32[3] <= 2u;
      v18->m128_u64[1] = v40;
      if ( v47 )
        goto LABEL_42;
LABEL_70:
      sub_21C6A10((__int64)&v77, a4, (unsigned __int64)v67, v18[2].m128_i32[0]);
      v60 = (__int64)v77;
      if ( (v78 & 1) == 0 || (v77 = nullptr, !v60) )
      {
        sub_21C9010(v60, v18->m128_u64[1] - 80, 0);
        a4 = (unsigned int *)((char *)a4 + *v77);
        sub_21CB2F0((__int64)&v77);
        goto LABEL_42;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
      sub_21CB2F0((__int64)&v77);
      v62 = v73->m128_u64[0];
      v63 = v73->m128_u64[1];
      v64 = v73->m128_u64[0];
      if ( v73->m128_u64[0] != v63 )
      {
        do
        {
          v65 = v64;
          v64 += 80;
          sub_21CAFA0(v65);
        }
        while ( v63 != v64 );
        v73->m128_u64[1] = v62;
      }
LABEL_73:
      v48 = v81[0];
      v5 = 0;
      goto LABEL_74;
    }
    n = (size_t)v18;
    a4 += 2;
    v50 = 0;
    v51 = v49;
    v52 = (char *)v81[1];
    do
    {
      while ( 1 )
      {
        v53 = *(_QWORD *)a4;
        a4 += 2;
        if ( v82 == v52 )
          break;
        *v52 = v53;
        ++v50;
        v52 = (char *)++v81[1];
        if ( v50 == v51 )
          goto LABEL_68;
      }
      v54 = v52 - (char *)v81[0];
      if ( v54 == -1 )
        std::__throw_length_error("vector::_M_realloc_insert");
      v55 = 1;
      if ( v54 )
      {
        v55 = 2 * v54;
        if ( v54 > 2 * v54 )
          v55 = -1;
      }
      src = v81[0];
      v56 = (char *)operator new(v55);
      v57 = src;
      v58 = &v56[v55];
      v59 = v56;
      v56[v54] = v53;
      if ( v54 )
      {
        v61 = (char *)memmove(v56, v57, v54);
        v57 = src;
        v59 = v61;
        v52 = &v61[v54 + 1];
      }
      else
      {
        v52 = v56 + 1;
        if ( !v57 )
          goto LABEL_67;
      }
      src = v59;
      operator delete(v57);
LABEL_67:
      ++v50;
      src = v52;
      v82 = v58;
      *(__m128 *)v81 = _mm_loadh_ps((const double *)&src);
    }
    while ( v50 != v51 );
LABEL_68:
    v18 = (__m128 *)n;
    v36 = *(_QWORD *)(n + 8);
    if ( v36 != *(_QWORD *)(n + 16) )
      goto LABEL_41;
LABEL_69:
    sub_21CBC10(v18, (char *)v36, v75, &v76, v72, v81);
    if ( v18[1].m128_i32[3] > 2u )
      goto LABEL_70;
LABEL_42:
    if ( v67 <= (char *)a4 )
    {
      v48 = v81[0];
      v5 = v73->m128_u64[0];
      goto LABEL_74;
    }
    v17 = (unsigned __int64 *)(a4 + 2);
  }
  while ( a4 + 2 < (unsigned int *)v67 );
  v48 = v81[0];
  v5 = 0;
LABEL_74:
  if ( v48 )
    operator delete(v48);
LABEL_76:
  if ( v79[0] )
    operator delete(v79[0]);
  return v5;
}
