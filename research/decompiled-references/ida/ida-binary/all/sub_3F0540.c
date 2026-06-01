unsigned __int64 __fastcall sub_3F0540(__int64 a1, __int64 a2, char **a3)
{
  char *v4; // rdi
  char *v5; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rax
  bool v9; // zf
  size_t v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // r8
  size_t v13; // r9
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r10
  _QWORD *v19; // r12
  __int64 **v20; // r15
  __int64 *v21; // rax
  __int64 *v22; // r15
  const __m128i *v23; // rdx
  char *v24; // rax
  const __m128i **v25; // rdi
  unsigned __int64 v27; // r14
  __m128i v28; // xmm1
  const __m128i *v29; // r12
  __int8 *v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  char *v34; // r15
  char *v35; // rax
  _QWORD *v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // r15
  const __m128i *v39; // r12
  __int8 *v40; // rax
  __m128 v41; // xmm0
  size_t v42; // r10
  void *v43; // rcx
  _QWORD *v44; // rsi
  _QWORD *v45; // r9
  size_t v46; // rdi
  size_t v47; // rdx
  char *v48; // rax
  void *v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r15
  const __m128i *v54; // rdi
  __m128i v55; // xmm1
  __int64 v56; // rdx
  __m128i v57; // xmm0
  bool v58; // cf
  __int64 v59; // rax
  __int64 v60; // rdx
  const char *v61; // rsi
  const __m128i *v62; // rdi
  __int64 v63; // rdx
  __m128i v64; // xmm0
  __m128i v65; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int8 v66; // [rsp+17h] [rbp-81h]
  __int64 v67; // [rsp+18h] [rbp-80h]
  char **v68; // [rsp+20h] [rbp-78h]
  size_t n; // [rsp+28h] [rbp-70h]
  _QWORD *v70; // [rsp+30h] [rbp-68h]
  size_t v71; // [rsp+38h] [rbp-60h]
  _QWORD v72[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int8 v73; // [rsp+51h] [rbp-47h]
  unsigned __int64 v74; // [rsp+58h] [rbp-40h]

  v4 = a3[1];
  v5 = *a3;
  v74 = __readfsqword(0x28u);
  v7 = (_QWORD *)((char *)v72 + (_QWORD)v4);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    v5 = *(char **)&v5[*v7 - 1];
  v68 = a3 + 4;
  v70 = (_QWORD *)(a1 + 40);
  if ( ((unsigned __int8 (__fastcall *)(_QWORD *, __int64, __int64))v5)(v7, a2, 1) )
  {
    do
    {
      if ( !a3[6]
        || (v8 = ((__int64 (__fastcall *)(char **, _QWORD *))a3[7])(v68, v72),
            v9 = a3[10] == nullptr,
            v67 = v8,
            v65.m128i_i64[0] = v72[0],
            v66 = v73,
            v9) )
      {
        std::__throw_bad_function_call();
      }
      v10 = (size_t)v72;
      v11 = ((__int64 (__fastcall *)(char **, _QWORD *))a3[11])(a3 + 8, v72);
      v14 = *(_QWORD *)(a1 + 8);
      v15 = v11;
      if ( *(_BYTE *)(a1 + 80) )
      {
        v27 = *(_QWORD *)(a1 + 16);
        v23 = (const __m128i *)(v14 + 1);
        v28 = (__m128i)_mm_loadh_ps((const double *)v65.m128i_i64);
        if ( v27 < v14 + 1 )
        {
          v65 = v28;
          v51 = qvector_reserve(a1, 0, v23, 24);
          v52 = *(_QWORD *)(a1 + 8);
          v53 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 16) = v27;
          v54 = *(const __m128i **)a1;
          v55 = _mm_load_si128(&v65);
          v29 = (const __m128i *)v51;
          v56 = v52 - 1;
          if ( v56 >= 0 )
          {
            do
            {
              v57 = _mm_loadu_si128(v54);
              v51 += 24;
              v54 = (const __m128i *)((char *)v54 + 24);
              *(__m128i *)(v51 - 24) = v57;
              *(_QWORD *)(v51 - 8) = v54[-1].m128i_i64[1];
              v58 = v56-- == 0;
            }
            while ( !v58 );
            v54 = *(const __m128i **)a1;
          }
          v65 = v55;
          qfree(v54, nullptr);
          *(_QWORD *)(a1 + 16) = v53;
          v28 = _mm_load_si128(&v65);
          *(_QWORD *)a1 = v29;
          v14 = *(_QWORD *)(a1 + 8);
        }
        else
        {
          v29 = *(const __m128i **)a1;
        }
        v17 = v66;
        v10 = 256;
        v30 = &v29->m128i_i8[24 * v14];
        v30[16] = v66;
        *(_WORD *)(v30 + 17) = 256;
        *(__m128i *)v30 = v28;
        ++*(_QWORD *)(a1 + 8);
        goto LABEL_18;
      }
      v16 = operator new(0x18u);
      v18 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)v16 = 0;
      v19 = (_QWORD *)v16;
      *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v14);
      if ( v18 )
      {
        v10 = *(_QWORD *)(a1 + 32);
        v20 = *(__int64 ***)(*(_QWORD *)(a1 + 24) + 8 * (v15 % v10));
        v13 = v15 % v10;
        if ( !v20 )
          goto LABEL_29;
        v21 = *v20;
        v17 = (*v20)[1];
        if ( v15 != v17 )
        {
          while ( *v21 )
          {
            v17 = *(_QWORD *)(*v21 + 8);
            v20 = (__int64 **)v21;
            if ( v15 % v10 != v17 % v10 )
              break;
            v21 = (__int64 *)*v21;
            if ( v15 == v17 )
              goto LABEL_13;
          }
LABEL_29:
          n = v13;
          if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                                  (std::__detail::_Prime_rehash_policy *)(a1 + 56),
                                  v10,
                                  v18,
                                  1u) )
          {
            v42 = v31;
            if ( v31 == 1 )
            {
              v43 = (void *)(a1 + 72);
              *(_QWORD *)(a1 + 72) = 0;
              v34 = (char *)(a1 + 72);
            }
            else
            {
              if ( v31 > 0xFFFFFFFFFFFFFFFLL )
              {
                if ( v31 >> 61 )
                  sub_162118(a1 + 56, v10, v31, v32, v12, v33);
                std::__throw_bad_alloc();
              }
              v71 = v31;
              n = 8 * v31;
              v34 = (char *)operator new(8 * v31);
              memset(v34, 0, n);
              v42 = v71;
              v43 = (void *)(a1 + 72);
            }
            v44 = *(_QWORD **)(a1 + 40);
            v45 = v70;
            v46 = 0;
            for ( *(_QWORD *)(a1 + 40) = 0; v44; v46 = v47 )
            {
              while ( 1 )
              {
                v12 = v44;
                v44 = (_QWORD *)*v44;
                v47 = v12[1] % v42;
                v48 = &v34[8 * v47];
                if ( !*(_QWORD *)v48 )
                  break;
                *v12 = **(_QWORD **)v48;
                **(_QWORD **)v48 = v12;
                if ( !v44 )
                  goto LABEL_45;
              }
              *v12 = *(_QWORD *)(a1 + 40);
              *(_QWORD *)(a1 + 40) = v12;
              *(_QWORD *)v48 = v45;
              if ( *v12 )
                *(_QWORD *)&v34[8 * v46] = v12;
            }
LABEL_45:
            v49 = *(void **)(a1 + 24);
            v10 = *(_QWORD *)(a1 + 32);
            if ( v49 != v43 )
            {
              v10 *= 8LL;
              n = v42;
              operator delete(v49, v10);
              v42 = n;
            }
            *(_QWORD *)(a1 + 32) = v42;
            *(_QWORD *)(a1 + 24) = v34;
            v13 = 8 * (v15 % v42);
            v35 = &v34[v13];
            v36 = *(_QWORD **)&v34[v13];
            if ( !v36 )
              goto LABEL_48;
LABEL_31:
            *v19 = *v36;
            **(_QWORD **)v35 = v19;
          }
          else
          {
            v34 = *(char **)(a1 + 24);
            v13 = 8 * n;
            v35 = &v34[8 * n];
            v36 = *(_QWORD **)v35;
            if ( *(_QWORD *)v35 )
              goto LABEL_31;
LABEL_48:
            v50 = *(_QWORD *)(a1 + 40);
            *(_QWORD *)(a1 + 40) = v19;
            *v19 = v50;
            if ( v50 )
            {
              *(_QWORD *)&v34[8 * (*(_QWORD *)(v50 + 8) % *(_QWORD *)(a1 + 32))] = v19;
              v35 = (char *)(v13 + *(_QWORD *)(a1 + 24));
            }
            *(_QWORD *)v35 = a1 + 40;
          }
          v37 = *(_QWORD *)(a1 + 8);
          v38 = *(_QWORD *)(a1 + 16);
          ++*(_QWORD *)(a1 + 48);
          v23 = (const __m128i *)(v37 + 1);
          if ( v38 < v37 + 1 )
          {
            v59 = qvector_reserve(a1, 0, v23, 24);
            v60 = *(_QWORD *)(a1 + 8);
            v61 = *(const char **)(a1 + 16);
            *(_QWORD *)(a1 + 16) = v38;
            v62 = *(const __m128i **)a1;
            v39 = (const __m128i *)v59;
            v63 = v60 - 1;
            if ( v63 >= 0 )
            {
              do
              {
                v64 = _mm_loadu_si128(v62);
                v59 += 24;
                v62 = (const __m128i *)((char *)v62 + 24);
                *(__m128i *)(v59 - 24) = v64;
                *(_QWORD *)(v59 - 8) = v62[-1].m128i_i64[1];
                v58 = v63-- == 0;
              }
              while ( !v58 );
              v62 = *(const __m128i **)a1;
            }
            n = (size_t)v61;
            qfree(v62, v61);
            v10 = n;
            v37 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)a1 = v39;
            *(_QWORD *)(a1 + 16) = v10;
          }
          else
          {
            v39 = *(const __m128i **)a1;
          }
          v40 = &v39->m128i_i8[24 * v37];
          v41 = _mm_loadh_ps((const double *)v65.m128i_i64);
          v40[16] = v66;
          v17 = 256;
          *(_WORD *)(v40 + 17) = 256;
          *(__m128 *)v40 = v41;
          ++*(_QWORD *)(a1 + 8);
          goto LABEL_18;
        }
LABEL_13:
        if ( !v20 )
          goto LABEL_29;
        v22 = *v20;
        if ( !v22 )
          goto LABEL_29;
      }
      else
      {
        v22 = *(__int64 **)(a1 + 40);
        if ( !v22 )
        {
LABEL_28:
          v10 = *(_QWORD *)(a1 + 32);
          v13 = v15 % v10;
          goto LABEL_29;
        }
        while ( v15 != v22[1] )
        {
          v22 = (__int64 *)*v22;
          if ( !v22 )
            goto LABEL_28;
        }
      }
      if ( v19 )
      {
        v10 = 24;
        operator delete(v19, 0x18u);
      }
      v23 = *(const __m128i **)a1;
      *(_BYTE *)(*(_QWORD *)a1 + 24 * v22[2] + 18) = 0;
LABEL_18:
      v24 = a3[2];
      v25 = (const __m128i **)((char *)v72 + (_QWORD)a3[3]);
      if ( ((unsigned __int8)v24 & 1) != 0 )
      {
        v23 = *v25;
        v24 = *(char **)&v24[(_QWORD)*v25 - 1];
      }
    }
    while ( ((unsigned __int8 (__fastcall *)(const __m128i **, size_t, const __m128i *, unsigned __int64, _QWORD *, size_t))v24)(
              v25,
              v10,
              v23,
              v17,
              v12,
              v13) );
  }
  return v74 - __readfsqword(0x28u);
}
