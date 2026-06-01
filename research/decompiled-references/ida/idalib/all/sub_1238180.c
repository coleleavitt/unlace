void __fastcall sub_1238180(__int64 *a1)
{
  unsigned __int64 **v2; // rbx
  unsigned __int64 *v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __int64 *v9; // rbp
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 **v13; // rdx
  __m128i v14; // xmm0
  unsigned __int64 v15; // r15
  int *v16; // rbx
  int *v17; // rax
  char v18; // dl
  unsigned __int64 v19; // rcx
  _BOOL4 v20; // r14d
  __int64 v21; // rax
  int v22; // r11d
  _BYTE *v23; // rsi
  __int64 v24; // rax
  _BYTE *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r8d
  int v29; // r9d
  void *v30; // rdi
  _QWORD **v31; // rbx
  _QWORD **v32; // rbp
  void *v33; // rdi
  void **v34; // rbx
  unsigned __int64 v35; // rbp
  void *v36; // rdi
  void *v37; // r15
  unsigned __int64 v38; // rax
  __int64 *v39; // rsi
  _BYTE *v40; // rdi
  unsigned __int64 v41; // rdx
  __m128i v42; // xmm0
  char v43; // dl
  size_t v44; // rdx
  unsigned __int64 *v45; // r14
  unsigned __int8 v46; // [rsp+6h] [rbp-212h]
  __m128i v47; // [rsp+8h] [rbp-210h] BYREF
  __int64 v48; // [rsp+18h] [rbp-200h] BYREF
  void *dest; // [rsp+20h] [rbp-1F8h] BYREF
  __m128 v50; // [rsp+28h] [rbp-1F0h] BYREF
  __m128i v51; // [rsp+40h] [rbp-1D8h] BYREF
  _BYTE v52[16]; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-1B8h]
  __int64 v54[2]; // [rsp+90h] [rbp-188h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-178h] BYREF
  __int16 v56; // [rsp+B0h] [rbp-168h]
  char v57[8]; // [rsp+C0h] [rbp-158h] BYREF
  int v58; // [rsp+C8h] [rbp-150h] BYREF
  void *v59; // [rsp+D0h] [rbp-148h]
  int *v60; // [rsp+D8h] [rbp-140h]
  int *v61; // [rsp+E0h] [rbp-138h]
  __int64 v62; // [rsp+E8h] [rbp-130h]
  void *v63; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v64; // [rsp+F8h] [rbp-120h]
  void *v65[2]; // [rsp+100h] [rbp-118h]
  __m128 v66; // [rsp+110h] [rbp-108h]
  __m128i v67; // [rsp+120h] [rbp-F8h]
  __m128 v68; // [rsp+130h] [rbp-E8h]
  void *src; // [rsp+140h] [rbp-D8h] BYREF
  size_t n; // [rsp+148h] [rbp-D0h]
  _QWORD v71[2]; // [rsp+150h] [rbp-C8h] BYREF
  __int16 v72; // [rsp+160h] [rbp-B8h]

  v63 = nullptr;
  v65[0] = nullptr;
  v65[1] = nullptr;
  v66 = 0u;
  v67 = 0u;
  v68 = 0u;
  v64 = 8;
  v63 = (void *)operator new(0x40u);
  v2 = (unsigned __int64 **)((char *)v63 + 8 * ((unsigned __int64)(v64 - 1) >> 1));
  v3 = (unsigned __int64 *)operator new(0x200u);
  v66.m128_u64[1] = (unsigned __int64)v2;
  v60 = &v58;
  v4 = v3 + 64;
  v61 = &v58;
  v5 = *a1;
  *v2 = v3;
  v68.m128_u64[1] = (unsigned __int64)v2;
  v6 = *(__int64 **)(v5 + 112);
  v47.m128i_i64[0] = (__int64)v3;
  v7 = *(unsigned int *)(v5 + 120);
  v8 = _mm_loadl_epi64(&v47);
  v66.m128_u64[0] = (unsigned __int64)(v3 + 64);
  v9 = &v6[v7];
  v67.m128i_i64[1] = (__int64)v3;
  v47.m128i_i64[1] = (__int64)&v63;
  v68.m128_u64[0] = (unsigned __int64)(v3 + 64);
  *(__m128i *)v65 = _mm_unpacklo_epi64(v8, v8);
  v67.m128i_i64[0] = (__int64)v3;
  v58 = 0;
  v59 = nullptr;
  v62 = 0;
  if ( v9 == v6 )
  {
    v45 = v3;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v10 = *v6;
        if ( v3 == v4 - 1 )
          break;
        *v3 = v10;
        ++v6;
        v67.m128i_i64[0] = (__int64)++v3;
        if ( v9 == v6 )
          goto LABEL_8;
      }
      v11 = v68.m128_u64[1];
      if ( (unsigned __int64)(v64 - ((__int64)(v68.m128_u64[1] - (_QWORD)v63) >> 3)) <= 1 )
      {
        sub_1237B90(v47.m128i_i64[1], 1u, 0);
        v11 = v68.m128_u64[1];
      }
      ++v6;
      v12 = operator new(0x200u);
      v13 = (unsigned __int64 **)v68.m128_u64[1];
      *(_QWORD *)(v11 + 8) = v12;
      ++v13;
      *(_QWORD *)v67.m128i_i64[0] = v10;
      v3 = *v13;
      v47.m128i_i64[0] = (__int64)v3;
      v14 = _mm_loadl_epi64(&v47);
      v4 = v3 + 64;
      v67 = _mm_unpacklo_epi64(v14, v14);
      v47.m128i_i64[0] = (__int64)v13;
      v68 = _mm_loadh_ps((const double *)v47.m128i_i64);
    }
    while ( v9 != v6 );
LABEL_8:
    v45 = (unsigned __int64 *)v65[0];
  }
  v47.m128i_i64[1] = (__int64)&v63;
  if ( v3 == v45 )
    goto LABEL_34;
  do
  {
    while ( 1 )
    {
      v15 = *v45;
      if ( v45 == (unsigned __int64 *)(v66.m128_u64[0] - 8) )
      {
        operator delete(v65[1]);
        v45 = *(unsigned __int64 **)(v66.m128_u64[1] + 8);
        v47.m128i_i64[0] = (__int64)v45;
        v42 = _mm_loadl_epi64(&v47);
        *(__m128i *)v65 = _mm_unpacklo_epi64(v42, v42);
        v47.m128i_i64[0] = v66.m128_u64[1] + 8;
        v66 = _mm_loadh_ps((const double *)v47.m128i_i64);
      }
      else
      {
        v65[0] = ++v45;
      }
      if ( v15 )
        break;
      if ( v45 == (unsigned __int64 *)v67.m128i_i64[0] )
        goto LABEL_34;
    }
    v16 = (int *)v59;
    if ( !v59 )
    {
      v16 = &v58;
LABEL_42:
      if ( v16 == v60 )
      {
LABEL_21:
        v20 = 1;
        if ( v16 == &v58 )
          goto LABEL_22;
      }
      else
      {
        if ( v15 <= *(_QWORD *)(std::_Rb_tree_decrement(v16) + 32) )
          continue;
        v20 = 1;
        if ( v16 == &v58 )
        {
LABEL_22:
          v21 = operator new(0x28u);
          *(_QWORD *)(v21 + 32) = v15;
          std::_Rb_tree_insert_and_rebalance(v20, v21, v16, &v58);
          v22 = *(_DWORD *)(v15 + 8);
          ++v62;
          if ( v22 )
          {
            sub_1237ED0((__m128 *)v47.m128i_i64[1], v15 + 16);
            goto LABEL_32;
          }
          v23 = *(_BYTE **)(v15 + 96);
          dest = &v50.m128_u16[4];
          if ( !v23 )
          {
            v24 = *(_QWORD *)(v15 + 88);
            v50.m128_i8[8] = 0;
            v50.m128_u64[0] = 0;
            if ( !*(_DWORD *)(v24 + 56) )
              goto LABEL_32;
LABEL_26:
            v25 = **(_BYTE ***)(v24 + 48);
            if ( v25 )
            {
              v72 = 257;
              if ( *v25 )
              {
                src = v25;
                LOBYTE(v72) = 3;
              }
              sub_2230FD0(v54, &src, 0, 1, 0, v46);
              if ( (v55 & 1) != 0 )
              {
                sub_FC2AF0(v54);
                v30 = dest;
                if ( dest == &v50.m128_u16[4] )
                  goto LABEL_32;
              }
              else
              {
                sub_2230760(&src, v54[0]);
                sub_12342A0((__int64)a1, (__int64 *)&src, v26, v27, v28, v29);
                sub_FC2AF0(v54);
                v30 = dest;
                if ( dest == &v50.m128_u16[4] )
                {
LABEL_32:
                  v45 = (unsigned __int64 *)v65[0];
                  continue;
                }
              }
LABEL_31:
              operator delete(v30);
              goto LABEL_32;
            }
LABEL_60:
            v30 = dest;
            if ( dest == &v50.m128_u16[4] )
              goto LABEL_32;
            goto LABEL_31;
          }
          sub_1232590(&dest, v23, (__int64)&v23[*(_QWORD *)(v15 + 104)]);
          if ( !v50.m128_u64[0] )
          {
            v24 = *(_QWORD *)(v15 + 88);
            if ( !*(_DWORD *)(v24 + 56) )
              goto LABEL_60;
            goto LABEL_26;
          }
          v37 = dest;
          v47.m128i_i64[0] = v50.m128_u64[0];
          sub_2231D80(&src);
          sub_2231FA0(&src, v37, v47.m128i_i64[0]);
          v47.m128i_i64[0] = (__int64)v54;
          sub_22321A0(&src, v54);
          v38 = v54[0];
          if ( v54[0] )
          {
            v39 = (__int64 *)(v47.m128i_i64[0] + 17);
            do
            {
              v39 = (__int64 *)((char *)v39 - 1);
              v43 = a0123456789abcd_3[v38 & 0xF] | 0x20;
              v38 >>= 4;
              *(_BYTE *)v39 = v43;
            }
            while ( v38 );
          }
          else
          {
            LOBYTE(v55) = 48;
            v39 = &v55;
          }
          src = v71;
          sub_1232650(&src, v39, v47.m128i_i64[0] + 17);
          v40 = dest;
          if ( src == v71 )
          {
            v44 = n;
            if ( n )
            {
              if ( n == 1 )
                *(_BYTE *)dest = v71[0];
              else
                memcpy(dest, src, n);
              v44 = n;
              v40 = dest;
            }
            v50.m128_u64[0] = v44;
            v40[v44] = 0;
            v40 = src;
            goto LABEL_54;
          }
          if ( dest == &v50.m128_u16[4] )
          {
            v48 = v71[0];
            dest = src;
            v50 = _mm_loadh_ps((const double *)&v48);
          }
          else
          {
            v48 = v71[0];
            v41 = v50.m128_u64[1];
            dest = src;
            v50 = _mm_loadh_ps((const double *)&v48);
            if ( v40 )
            {
              src = v40;
              v71[0] = v41;
LABEL_54:
              n = 0;
              *v40 = 0;
              if ( src != v71 )
                operator delete(src);
              LOBYTE(v53) = 95;
              v54[0] = (__int64)(a1 + 27);
              v56 = 2052;
              v55 = v53;
              v72 = 1026;
              src = (void *)v47.m128i_i64[0];
              n = 0;
              v71[0] = &dest;
              sub_2253560(&v51, &src);
              sub_11A14A0((__int64)(a1 + 3), &v51);
              if ( (_BYTE *)v51.m128i_i64[0] != v52 )
                operator delete((void *)v51.m128i_i64[0]);
              LOBYTE(v53) = 95;
              v54[0] = (__int64)(a1 + 31);
              v56 = 2052;
              v55 = v53;
              v72 = 1026;
              src = (void *)v47.m128i_i64[0];
              n = 0;
              v71[0] = &dest;
              sub_2253560(&v51, &src);
              sub_11A14A0((__int64)(a1 + 9), &v51);
              if ( (_BYTE *)v51.m128i_i64[0] != v52 )
                operator delete((void *)v51.m128i_i64[0]);
              goto LABEL_60;
            }
          }
          v40 = v71;
          src = v71;
          goto LABEL_54;
        }
      }
      v20 = v15 < *((_QWORD *)v16 + 4);
      goto LABEL_22;
    }
    while ( 1 )
    {
      v19 = *((_QWORD *)v16 + 4);
      if ( v15 >= v19 )
        break;
      v17 = *((int **)v16 + 2);
      v18 = 1;
      if ( !v17 )
        goto LABEL_19;
LABEL_16:
      v16 = v17;
    }
    v17 = *((int **)v16 + 3);
    v18 = 0;
    if ( v17 )
      goto LABEL_16;
LABEL_19:
    if ( v18 )
      goto LABEL_42;
    if ( v15 > v19 )
      goto LABEL_21;
  }
  while ( (unsigned __int64 *)v67.m128i_i64[0] != v45 );
LABEL_34:
  v31 = (_QWORD **)v59;
  if ( v59 )
  {
    do
    {
      sub_1233480((__int64)v57, v31[3]);
      v32 = (_QWORD **)v31[2];
      operator delete(v31);
      v31 = v32;
    }
    while ( v32 );
  }
  v33 = v63;
  if ( v63 )
  {
    v34 = (void **)v66.m128_u64[1];
    v35 = v68.m128_u64[1] + 8;
    if ( v68.m128_u64[1] + 8 > v66.m128_u64[1] )
    {
      do
      {
        v36 = *v34++;
        operator delete(v36);
      }
      while ( v35 > (unsigned __int64)v34 );
      v33 = v63;
    }
    operator delete(v33);
  }
}
