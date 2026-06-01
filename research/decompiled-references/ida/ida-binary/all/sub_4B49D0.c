__int64 __fastcall sub_4B49D0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11)
{
  size_t v11; // r12
  __m128i v13; // xmm0
  void *v14; // rbp
  __int64 v15; // rdx
  __int16 v16; // r14
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rsi
  char v21; // al
  __m128 v22; // xmm0
  const char *v23; // rsi
  __int64 v24; // rdx
  double v25; // xmm4_8
  double v26; // xmm5_8
  int v27; // eax
  char **v28; // rcx
  __int64 v29; // r13
  const char *v30; // r15
  __int64 v31; // rbx
  __int64 v32; // rbp
  const char *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __m128 v37; // xmm4
  __m128 v38; // xmm5
  __int64 *v39; // rax
  __int64 v40; // rbp
  __int64 *v41; // rbx
  double v42; // xmm4_8
  double v43; // xmm5_8
  const char *v44; // r14
  size_t v45; // rax
  size_t v46; // r15
  size_t v47; // r13
  int *v48; // r15
  __int64 v49; // r13
  char *v50; // rax
  int *v51; // rbx
  char *v52; // r14
  int *v53; // rbp
  const char *v54; // rsi
  const char *v55; // rdi
  int v56; // eax
  int *v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  const char *v60; // rdx
  const char *v61; // rsi
  int *v62; // r14
  __int64 i; // rbx
  __int64 v64; // rdx
  __int64 v65; // rbp
  __int64 v66; // rbx
  __int64 *v67; // rax
  __int64 v68; // rdi
  char *v70; // [rsp+0h] [rbp-168h]
  char **v71; // [rsp+8h] [rbp-160h]
  __int64 v72; // [rsp+10h] [rbp-158h]
  __int64 *v73; // [rsp+18h] [rbp-150h]
  __int64 v74; // [rsp+20h] [rbp-148h]
  char **p_s2; // [rsp+48h] [rbp-120h] BYREF
  __int64 v77; // [rsp+50h] [rbp-118h] BYREF
  __int64 *v78; // [rsp+58h] [rbp-110h]
  __int64 v79; // [rsp+60h] [rbp-108h] BYREF
  __int128 v80; // [rsp+68h] [rbp-100h]
  __int64 v81; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v82; // [rsp+88h] [rbp-E0h]
  const char *v83; // [rsp+A0h] [rbp-C8h] BYREF
  __int128 v84; // [rsp+A8h] [rbp-C0h]
  char *s2; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v86; // [rsp+C8h] [rbp-A0h]
  char v87; // [rsp+108h] [rbp-60h]
  __m128i v88; // [rsp+110h] [rbp-58h] BYREF
  unsigned __int64 v89; // [rsp+128h] [rbp-40h]

  v11 = *(_QWORD *)(a11 + 8);
  v89 = __readfsqword(0x28u);
  v80 = 0;
  v79 = 0;
  if ( !v11 )
  {
    v13 = _mm_loadu_si128((const __m128i *)(a11 + 48));
    v14 = nullptr;
    v15 = 1;
    v16 = *(_WORD *)(a11 + 24);
    v17 = *(_QWORD *)(a11 + 32);
    v18 = 0;
    v87 = *(_BYTE *)(a11 + 40);
    v88 = v13;
LABEL_3:
    v79 = qvector_reserve(&v79, v18, v15, 64);
    v18 = v79;
    v19 = v80;
    goto LABEL_4;
  }
  v14 = (void *)qalloc_or_throw(v11);
  memcpy(v14, *(const void **)a11, v11);
  v19 = v80;
  v16 = *(_WORD *)(a11 + 24);
  v17 = *(_QWORD *)(a11 + 32);
  v87 = *(_BYTE *)(a11 + 40);
  v18 = v79;
  v15 = v80 + 1;
  v88 = _mm_loadu_si128((const __m128i *)(a11 + 48));
  if ( *((_QWORD *)&v80 + 1) < (unsigned __int64)(v80 + 1) )
    goto LABEL_3;
LABEL_4:
  v20 = (v19 << 6) + v18;
  v21 = v87;
  *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  v22 = (__m128)_mm_load_si128(&v88);
  *(_QWORD *)v20 = v14;
  *(_BYTE *)(v20 + 40) = v21;
  *(_WORD *)(v20 + 24) = v16;
  *(_QWORD *)(v20 + 32) = v17;
  *(__m128 *)(v20 + 48) = v22;
  v23 = (const char *)a1;
  *(_QWORD *)&v80 = v80 + 1;
  v77 = 0;
  v78 = nullptr;
  if ( (unsigned int)parse_json(&v77, a1, &v79) || (v27 = v77, (_DWORD)v77 != 3) )
  {
    v23 = "Invalid SHORTCUTS directive";
    sub_4B0C20(a1, "Invalid SHORTCUTS directive", 1, v22, a3, a4, a5, v25, v26, a8, a9);
    v27 = v77;
  }
  v28 = &off_86CC80;
  v71 = &off_86CC80;
  while ( 1 )
  {
    if ( v27 != 3 )
    {
      if ( !under_debugger )
        interr(1282, v23, v24, v28, *(double *)v22.m128_u64);
      BUG();
    }
    v29 = v78[1];
    v30 = *v71;
    if ( v29 )
    {
      v31 = *v78;
      v32 = 0;
      while ( 1 )
      {
        v33 = &s1;
        if ( *(_QWORD *)(v31 + 8) )
          v33 = *(const char **)v31;
        v23 = v30;
        if ( !strcmp(v33, v30) )
          break;
        ++v32;
        v31 += 40;
        if ( v29 == v32 )
          goto LABEL_52;
      }
      if ( *(_DWORD *)(v31 + 24) == 3 )
      {
        v39 = *(__int64 **)(v31 + 32);
        v40 = *v39;
        v74 = *v39 + 40 * v39[1];
        if ( v74 != *v39 )
        {
          v41 = &v81;
          while ( 1 )
          {
            v22.m128_u64[0] = 0;
            v81 = 0;
            v83 = nullptr;
            v82 = 0;
            v84 = 0;
            if ( !(unsigned __int8)sub_4B4370(
                                     (__int64)v41,
                                     (__int64 *)&v83,
                                     v40 + 24,
                                     v34,
                                     v35,
                                     v36,
                                     (__m128)0LL,
                                     a3,
                                     a4,
                                     a5,
                                     v37,
                                     v38,
                                     a8,
                                     a9) )
            {
              v23 = &s1;
              if ( (_QWORD)v84 )
                v23 = v83;
              sub_4B0C20(a1, v23, 0, (__m128)0LL, a3, a4, a5, v42, v43, a8, a9);
              if ( v83 )
              {
                *(_QWORD *)&v84 = 0;
                *(double *)v22.m128_u64 = qfree(v83, v23);
              }
              if ( v81 )
              {
                *(_QWORD *)&v82 = 0;
                *(double *)v22.m128_u64 = qfree(v81, v23, *(double *)v22.m128_u64);
              }
              goto LABEL_51;
            }
            v44 = &s1;
            if ( *(_QWORD *)(v40 + 8) )
              v44 = *(const char **)v40;
            s2 = nullptr;
            v22.m128_u64[0] = 0;
            v86 = 0;
            if ( v44 )
            {
              v45 = strlen(v44);
              v46 = v45 + 1;
              v47 = v45;
              s2 = (char *)qvector_reserve(&s2, 0, v45 + 1, 1);
              *(_QWORD *)&v86 = v46;
              memmove(s2, v44, v47);
              s2[v47] = 0;
            }
            v48 = &dword_8D1CA8;
            if ( !qword_8D1CB0 )
              goto LABEL_44;
            v49 = v86;
            v50 = (char *)&s1;
            v73 = v41;
            v72 = v40;
            v51 = (int *)qword_8D1CB0;
            v48 = &dword_8D1CA8;
            v52 = s2;
            if ( (_QWORD)v86 )
              v50 = s2;
            v70 = v50;
            while ( 1 )
            {
              v58 = *((_QWORD *)v51 + 5);
              if ( !v49 )
                break;
              v53 = v51;
              if ( v58 )
                goto LABEL_37;
              v54 = v52;
              v55 = &s1;
LABEL_29:
              v56 = strcmp(v55, v54);
              v57 = *((int **)v51 + 2);
              v51 = *((int **)v51 + 3);
              if ( v56 >= 0 )
              {
                v48 = v53;
                v51 = v57;
              }
              if ( !v51 )
              {
                v40 = v72;
                v41 = v73;
                v60 = v52;
                goto LABEL_39;
              }
            }
            if ( v58 )
              break;
            while ( 1 )
            {
              v59 = *((_QWORD *)v51 + 2);
              if ( !v59 )
                break;
              v48 = v51;
              v51 = *((int **)v51 + 2);
              if ( *(_QWORD *)(v59 + 40) )
                goto LABEL_36;
            }
            v60 = v52;
            v62 = v51;
            v40 = v72;
            v41 = v73;
            v48 = v62;
LABEL_39:
            if ( v48 == &dword_8D1CA8 )
              goto LABEL_44;
            if ( *((_QWORD *)v48 + 5) )
            {
              v61 = *((const char **)v48 + 4);
              if ( !v49 )
                v60 = &s1;
LABEL_43:
              if ( strcmp(v60, v61) < 0 )
              {
LABEL_44:
                p_s2 = &s2;
                v48 = (int *)sub_4B1E90(&qword_8D1CA0, v48, (__int64 **)&p_s2);
              }
            }
            else
            {
              v61 = &s1;
              if ( v49 )
                goto LABEL_43;
            }
            v23 = (const char *)*((unsigned __int8 *)v71 + 8);
            sub_4B02A0((__int64 **)v48 + 7, v23, (__int64)v41);
            if ( s2 )
            {
              *(_QWORD *)&v86 = 0;
              *(double *)v22.m128_u64 = qfree(s2, v23);
            }
            if ( v83 )
            {
              *(_QWORD *)&v84 = 0;
              *(double *)v22.m128_u64 = qfree(v83, v23);
            }
            if ( v81 )
            {
              *(_QWORD *)&v82 = 0;
              *(double *)v22.m128_u64 = qfree(v81, v23);
            }
LABEL_51:
            v40 += 40;
            if ( v40 == v74 )
              goto LABEL_52;
          }
LABEL_36:
          v53 = v51;
LABEL_37:
          v55 = *((const char **)v51 + 4);
          v54 = v70;
          goto LABEL_29;
        }
      }
    }
LABEL_52:
    v71 += 2;
    v28 = v71;
    if ( v71 == &off_86CCA0 )
      break;
    v27 = v77;
  }
  for ( i = qword_8D1CB8; (int *)i != &dword_8D1CA8; i = std::_Rb_tree_increment(i) )
    sub_4B0680((__int64 **)(i + 56));
  jvalue_t_clear(&v77);
  v64 = v79;
  if ( v79 )
  {
    v65 = v80;
    if ( (_QWORD)v80 )
    {
      v66 = 0;
      do
      {
        v67 = (__int64 *)(v64 + (v66 << 6));
        v68 = *v67;
        if ( *v67 )
        {
          v67[1] = 0;
          qfree(v68, v23);
          v64 = v79;
        }
        ++v66;
      }
      while ( v65 != v66 );
    }
    *(_QWORD *)&v80 = 0;
    qfree(v64, v23);
  }
  return 0;
}
