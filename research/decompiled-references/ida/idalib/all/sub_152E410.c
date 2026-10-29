__int64 *__fastcall sub_152E410(__int64 *a1, unsigned int a2, void *a3, int a4, __int64 a5)
{
  unsigned int v7; // r12d
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r15d
  size_t v12; // rax
  _BYTE *v13; // rsi
  _BYTE *v14; // rdi
  unsigned __int64 v15; // rdx
  size_t v16; // rsi
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rdx
  size_t v19; // r14
  size_t v20; // r9
  unsigned __int64 v21; // rdx
  char *v22; // rax
  __int64 *v23; // r9
  __int64 *v24; // r15
  __int64 v25; // rdi
  __int64 v26; // r9
  _BYTE *v27; // rdi
  char *v28; // rsi
  char *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  _QWORD *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  char *v36; // r15
  char *v37; // r14
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  char *v42; // rdx
  int v43; // r13d
  char *v44; // r15
  __int64 v45; // rdi
  size_t v47; // rax
  unsigned __int64 v48; // r14
  char v49; // dl
  char *v50; // r15
  size_t v51; // rax
  _BYTE *v52; // rdi
  size_t v53; // r13
  unsigned __int64 v54; // rdx
  char *v55; // rdi
  __int64 v56; // rax
  size_t v57; // r13
  unsigned __int64 v58; // rdx
  size_t v59; // rdx
  unsigned int v60; // ebp
  _BYTE *v61; // rdi
  unsigned __int64 v62; // rdx
  size_t v63; // rdx
  size_t v64; // rax
  size_t v65; // [rsp+8h] [rbp-150h]
  void *v67; // [rsp+18h] [rbp-140h] BYREF
  __int64 v68; // [rsp+20h] [rbp-138h]
  void **p_ptr; // [rsp+28h] [rbp-130h]
  void *v70; // [rsp+30h] [rbp-128h] BYREF
  size_t v71; // [rsp+38h] [rbp-120h]
  _QWORD v72[2]; // [rsp+40h] [rbp-118h] BYREF
  void *ptr; // [rsp+50h] [rbp-108h] BYREF
  __int64 v74; // [rsp+58h] [rbp-100h]
  _BYTE v75[32]; // [rsp+60h] [rbp-F8h] BYREF
  void *src; // [rsp+80h] [rbp-D8h] BYREF
  size_t n; // [rsp+88h] [rbp-D0h]
  _QWORD v78[6]; // [rsp+90h] [rbp-C8h] BYREF
  int v79; // [rsp+C0h] [rbp-98h]
  char *v80; // [rsp+D0h] [rbp-88h] BYREF
  __int128 v81; // [rsp+D8h] [rbp-80h] BYREF
  void *dest; // [rsp+E8h] [rbp-70h]
  __m128 v83; // [rsp+F0h] [rbp-68h] BYREF
  char v84; // [rsp+108h] [rbp-50h]
  int v85; // [rsp+110h] [rbp-48h]

  v67 = a3;
  v7 = sub_15658F0(a5);
  if ( !v7 )
    v7 = *(_DWORD *)(a5 + 16);
  sub_1564820(a1, a5, v7, a2);
  v8 = *(unsigned __int16 *)(a5 + 32);
  v71 = 0;
  v70 = v72;
  LOBYTE(v72[0]) = 0;
  if ( sub_141A630(v8) )
    goto LABEL_8;
  if ( (_WORD)v8 == 1 )
  {
    v11 = 4;
    goto LABEL_9;
  }
  v9 = *(_QWORD *)(a5 + 24);
  if ( !v9 )
    goto LABEL_8;
  v10 = *(_QWORD *)(v9 + 16);
  if ( (unsigned int)*(_QWORD *)v10 == 8 )
  {
    if ( *(_QWORD *)(v10 + 16) == 0x6F745F796C707061LL )
    {
      if ( !a4 )
      {
        v64 = j__strlen(", ");
        sub_99BDC0(&v70, 0, 0, ", ", v64);
        goto LABEL_12;
      }
      v12 = 0;
      v13 = v72;
      goto LABEL_13;
    }
    goto LABEL_8;
  }
  if ( (unsigned int)*(_QWORD *)v10 != 3 || *(_WORD *)(v10 + 16) != 28257 || (v11 = 3, *(_BYTE *)(v10 + 18) != 121) )
LABEL_8:
    v11 = 2 * ((_WORD)v8 != 64) + 2;
LABEL_9:
  if ( !a4 )
  {
    v47 = j__strlen(", ");
    sub_99BDC0(&v70, 0, 0, ", ", v47);
    v16 = v71;
    if ( 0x7FFFFFFFFFFFFFFFLL - v71 <= 7 )
LABEL_60:
      std::__throw_length_error("basic_string::append");
    goto LABEL_25;
  }
  if ( a4 <= 1 )
  {
    v16 = v71;
LABEL_25:
    v17 = v16 + 8;
    if ( v70 == v72 )
      v18 = 15;
    else
      v18 = v72[0];
    if ( v17 > v18 )
      sub_998B30((__int64)&v70, v16, 0, "apply_to", 8u);
    else
      *(_QWORD *)((char *)v70 + v16) = 0x6F745F796C707061LL;
    v71 = v16 + 8;
    *((_BYTE *)v70 + v17) = 0;
    if ( v11 <= 2 )
      goto LABEL_12;
    goto LABEL_30;
  }
  if ( v11 <= 2 )
  {
LABEL_12:
    v12 = v71;
    v13 = v70;
    goto LABEL_13;
  }
LABEL_30:
  v19 = v71;
  if ( 0x7FFFFFFFFFFFFFFFLL - v71 <= 2 )
    goto LABEL_60;
  v20 = v71 + 3;
  if ( v70 == v72 )
    v21 = 15;
  else
    v21 = v72[0];
  if ( v20 > v21 )
  {
    v65 = v71 + 3;
    sub_998B30((__int64)&v70, v71, 0, " = ", 3u);
    v20 = v65;
  }
  else
  {
    v22 = (char *)v70 + v71;
    *(_WORD *)v22 = 15648;
    v22[2] = 32;
  }
  v71 = v20;
  *((_BYTE *)v70 + v19 + 3) = 0;
  if ( v11 != 4 )
    goto LABEL_12;
  v79 = 25;
  src = v78;
  n = 0x600000001LL;
  v78[0] = 0x1FFFFFF;
  v23 = *((__int64 **)v67 + 1);
  v67 = &v23[*((unsigned int *)v67 + 4)];
  if ( v67 == v23 )
    goto LABEL_69;
  v68 = 0x600000001LL;
  v24 = v23;
  p_ptr = &ptr;
  do
  {
    while ( 1 )
    {
      v25 = *v24;
      ptr = v75;
      v74 = 0x400000000LL;
      sub_15D8570(v25, *(_QWORD *)(*(_QWORD *)(a5 + 8) + 56LL), p_ptr);
      v27 = ptr;
      v80 = (char *)&v81 + 8;
      v81 = (unsigned __int64)v68;
      v85 = 25;
      v28 = (char *)ptr + 8 * (unsigned int)v74;
      v29 = (char *)ptr;
      if ( ptr != v28 )
      {
        do
        {
          if ( v29[4] )
            *((_QWORD *)&v81 + (*(_DWORD *)v29 >> 6) + 1) |= 1LL << *(_DWORD *)v29;
          v29 += 8;
        }
        while ( v28 != v29 );
      }
      v30 = (unsigned int)n;
      v31 = 0;
      v32 = 1;
      v33 = src;
      if ( (_DWORD)n )
      {
        do
        {
          v34 = (unsigned int)v31;
          v31 = (unsigned int)(v31 + 1);
          v34 *= 8;
          v26 = *(_QWORD *)((char *)&v81 + v34 + 8);
          *(_QWORD *)((char *)v33 + v34) &= v26;
        }
        while ( (_DWORD)v31 != 1 );
        if ( (unsigned int)v30 > 1 )
        {
          do
          {
            v35 = (unsigned int)v32;
            v32 = (unsigned int)(v32 + 1);
            v33[v35] = 0;
          }
          while ( (_DWORD)v30 != (_DWORD)v32 );
        }
      }
      else
      {
        v32 = 0;
      }
      if ( v27 == v75 )
        break;
      free(v27);
      if ( v67 == ++v24 )
        goto LABEL_49;
    }
    ++v24;
  }
  while ( v67 != v24 );
LABEL_49:
  v36 = (char *)src;
  v37 = (char *)src + 8 * (unsigned int)n;
  v67 = src;
  if ( src != v37 )
  {
    v38 = __popcountdi2(*(_QWORD *)src, v33, v32, v31, v30, v26);
    v42 = v36 + 8;
    v43 = v38;
    if ( v37 != v36 + 8 )
    {
      v44 = v36 + 8;
      do
      {
        v45 = *(_QWORD *)v44;
        v44 += 8;
        v43 += __popcountdi2(v45, v33, v42, v39, v40, v41);
      }
      while ( v37 != v44 );
    }
    if ( v43 )
    {
LABEL_69:
      v48 = 0;
      sub_9EE7C0(&v70, "any(");
      v49 = 0;
      do
      {
        v56 = *(_QWORD *)src;
        if ( _bittest64(&v56, v48) )
        {
          if ( v49 )
          {
            v57 = v71;
            if ( v71 == 0x7FFFFFFFFFFFFFFFLL || v71 == 9223372036854775806LL )
              goto LABEL_60;
            if ( v70 == v72 )
              v58 = 15;
            else
              v58 = v72[0];
            if ( v71 + 2 > v58 )
              sub_998B30((__int64)&v70, v71, 0, ", ", 2u);
            else
              *(_WORD *)((char *)v70 + v71) = 8236;
            v71 = v57 + 2;
            *((_BYTE *)v70 + v57 + 2) = 0;
          }
          v50 = sub_F96080(v48);
          v51 = strlen(v50);
          if ( 0x7FFFFFFFFFFFFFFFLL - v71 < v51 )
            goto LABEL_60;
          v52 = v70;
          v53 = v71 + v51;
          if ( v70 == v72 )
            v54 = 15;
          else
            v54 = v72[0];
          if ( v53 > v54 )
          {
            sub_998B30((__int64)&v70, v71, 0, v50, v51);
            v52 = v70;
          }
          else if ( v51 )
          {
            v55 = (char *)v70 + v71;
            if ( v51 == 1 )
              *v55 = *v50;
            else
              memcpy(v55, v50, v51);
            v52 = v70;
          }
          v71 = v53;
          v49 = 1;
          v52[v53] = 0;
        }
        v48 = (unsigned int)(v48 + 1);
      }
      while ( (_DWORD)v48 != 25 );
      sub_9EE7C0(&v70, ")");
      LOWORD(v80) = 1;
      sub_15680D0(a5, &v80, 1, 2);
      v60 = *(_DWORD *)(a5 + 16);
      if ( src != v78 )
        free(src);
      v13 = v70;
      v12 = v71;
      if ( v60 != v7 )
      {
        *(_QWORD *)((char *)&v81 + 4) = 0;
        BYTE12(v81) = 0;
        dest = &v83.m128_u16[4];
        v83.m128_u64[0] = 0;
        v83.m128_i8[8] = 0;
        v84 = 0;
        v80 = (char *)__PAIR64__(v60, v7);
        LOBYTE(v81) = 0;
        src = v78;
        sub_1520EC0(&src, v70, (__int64)v70 + v71);
        v61 = dest;
        if ( src == v78 )
        {
          v63 = n;
          if ( n )
          {
            if ( n == 1 )
              *(_BYTE *)dest = v78[0];
            else
              memcpy(dest, src, n);
            v63 = n;
            v61 = dest;
          }
          v83.m128_u64[0] = v63;
          v61[v63] = 0;
          v61 = src;
        }
        else
        {
          if ( dest == &v83.m128_u16[4] )
          {
            v67 = (void *)v78[0];
            dest = src;
            v83 = _mm_loadh_ps((const double *)&v67);
          }
          else
          {
            v67 = (void *)v78[0];
            v62 = v83.m128_u64[1];
            dest = src;
            v83 = _mm_loadh_ps((const double *)&v67);
            if ( v61 )
            {
              src = v61;
              v78[0] = v62;
              goto LABEL_110;
            }
          }
          v61 = v78;
          src = v78;
        }
LABEL_110:
        n = 0;
        *v61 = 0;
        if ( src != v78 )
          operator delete(src);
        if ( !(_DWORD)v80 )
          goto LABEL_22;
LABEL_20:
        if ( HIDWORD(v80) )
          sub_152DFA0(a1, (unsigned __int64)&v80);
LABEL_22:
        if ( dest != &v83.m128_u16[4] )
          operator delete(dest);
        goto LABEL_56;
      }
LABEL_13:
      *(_QWORD *)((char *)&v81 + 4) = 0;
      BYTE12(v81) = 0;
      dest = &v83.m128_u16[4];
      v83.m128_u64[0] = 0;
      v83.m128_i8[8] = 0;
      v84 = 0;
      LODWORD(v80) = v7;
      HIDWORD(v80) = v7;
      LOBYTE(v81) = 0;
      src = v78;
      sub_1520EC0(&src, v13, (__int64)&v13[v12]);
      v14 = dest;
      if ( src == v78 )
      {
        v59 = n;
        if ( n )
        {
          if ( n == 1 )
            *(_BYTE *)dest = v78[0];
          else
            memcpy(dest, src, n);
          v59 = n;
          v14 = dest;
        }
        v83.m128_u64[0] = v59;
        v14[v59] = 0;
        v14 = src;
      }
      else
      {
        if ( dest == &v83.m128_u16[4] )
        {
          v67 = (void *)v78[0];
          dest = src;
          v83 = _mm_loadh_ps((const double *)&v67);
        }
        else
        {
          v67 = (void *)v78[0];
          v15 = v83.m128_u64[1];
          dest = src;
          v83 = _mm_loadh_ps((const double *)&v67);
          if ( v14 )
          {
            src = v14;
            v78[0] = v15;
            goto LABEL_17;
          }
        }
        v14 = v78;
        src = v78;
      }
LABEL_17:
      n = 0;
      *v14 = 0;
      if ( src != v78 )
        operator delete(src);
      v84 = 0;
      if ( !(_DWORD)v80 )
        goto LABEL_22;
      goto LABEL_20;
    }
  }
  if ( v67 != v78 )
    free(v67);
LABEL_56:
  if ( v70 != v72 )
    operator delete(v70);
  return a1;
}
