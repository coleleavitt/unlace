__int64 __fastcall sub_4F5460(_QWORD *a1, unsigned __int64 *a2, __int64 *a3, __int64 a4)
{
  int flags; // ebx
  __int64 not_tail; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 (*v14)(); // rdx
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  __m128i v16; // xmm1
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  char v23; // r15
  __int64 (*v24)(); // rdx
  unsigned __int8 v25; // al
  char v26; // dl
  char v27; // r15
  char v28; // al
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rsi
  __int64 *v33; // rax
  unsigned __int8 v34; // al
  char v35; // al
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 (*v39)(); // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // r13
  unsigned __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r13
  __m128i *v50; // rdi
  __m128i v51; // xmm1
  __int64 v52; // rdx
  __int64 v53; // rcx
  __m128i v54; // xmm0
  bool v55; // cf
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // rsi
  __int64 v60; // rcx
  unsigned __int64 v61; // rax
  __m128i *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rdx
  __m128i v65; // xmm0
  __int64 *v66; // rax
  __int64 v67; // rax
  unsigned __int64 v68; // rbx
  __m128i *v69; // rdi
  __int64 v70; // rax
  unsigned __int64 v71; // rdx
  __m128i v72; // xmm0
  __int64 v73; // rax
  void *v74; // rdi
  __int64 v75; // rcx
  __int64 v76; // rdx
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // r9
  const __m128i *v79; // rsi
  __int64 v80; // rax
  __m128i v81; // xmm0
  unsigned __int64 v82; // r9
  __int64 v83; // rax
  __m128i *v84; // rdi
  unsigned __int64 v85; // r14
  __int64 v86; // rdx
  const __m128i *v87; // rcx
  __int64 v88; // rax
  __m128i v89; // xmm0
  __m128i v90; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v91; // [rsp+18h] [rbp-60h]
  __m128i v92; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v93; // [rsp+38h] [rbp-40h]

  v93 = __readfsqword(0x28u);
  flags = get_flags_ex(a4, 4);
  if ( (flags & 0x1000) != 0 )
  {
    v20 = a3[1];
    v21 = *a3;
    if ( a3[2] < (unsigned __int64)(v20 + 1) )
    {
      v22 = qvector_reserve(a3, v21, v20 + 1, 8);
      *a3 = v22;
      v21 = v22;
      v20 = a3[1];
    }
    *(_QWORD *)(v21 + 8 * v20) = a4;
    ++a3[1];
  }
  if ( (flags & 0x10000) == 0 )
    return 0;
  not_tail = prev_not_tail(a4);
  v11 = a1[3];
  v12 = not_tail;
  if ( !v11 )
  {
    if ( !get_fchunk(not_tail) )
      goto LABEL_6;
    return 0;
  }
  if ( (int)get_func_chunknum(v11, not_tail) < 0 )
    return 0;
LABEL_6:
  v13 = *a1;
  v14 = *(__int64 (**)())(*a1 + 24LL);
  if ( v14 != sub_4F3C70 )
  {
    v23 = ((__int64 (__fastcall *)(_QWORD *, __int64))v14)(a1, a4);
    v13 = *a1;
    v24 = *(__int64 (**)())(*a1 + 24LL);
    if ( v24 != sub_4F3C70 )
    {
      v25 = ((__int64 (__fastcall *)(_QWORD *, __int64))v24)(a1, v12);
      v26 = v25 >> 4;
      if ( v25 >> 4 != 1 )
      {
        v27 = v23 & 0xF;
        v28 = v25 & 0xF;
        if ( v27 != v28 && v28 != 14 )
        {
          if ( v26 != 2 )
          {
            v29 = a2[1];
            v30 = *a2;
            v92.m128i_i64[0] = v12;
            v92.m128i_i64[1] = -1;
            v31 = a2[2];
            v32 = v29 + 1;
            if ( (unsigned __int64)&v92 < v30 || (unsigned __int64)&v92 >= v30 + 16 * v31 )
            {
              if ( v31 < v32 )
              {
                v90.m128i_i64[0] = a2[2];
                v58 = qvector_reserve(a2, 0, v29 + 1, 16);
                v59 = a2[2];
                v60 = v58;
                v61 = a2[1];
                v62 = (__m128i *)*a2;
                a2[2] = v90.m128i_i64[0];
                v63 = v61 - 1;
                if ( v63 >= 0 )
                {
                  v64 = v60;
                  do
                  {
                    v65 = _mm_loadu_si128(v62);
                    v64 += 16;
                    ++v62;
                    *(__m128i *)(v64 - 16) = v65;
                    v55 = v63-- == 0;
                  }
                  while ( !v55 );
                  v62 = (__m128i *)*a2;
                }
                v91 = v59;
                v90.m128i_i64[0] = v60;
                qfree(v62);
                v30 = v90.m128i_i64[0];
                v29 = a2[1];
                *a2 = v90.m128i_i64[0];
                a2[2] = v59;
              }
              *(__m128i *)(v30 + 16 * v29) = _mm_load_si128(&v92);
            }
            else
            {
              if ( v31 < v32 )
              {
                v90.m128i_i64[0] = a2[2];
                v73 = qvector_reserve(a2, 0, v29 + 1, 16);
                v74 = (void *)*a2;
                v75 = v73;
                v76 = v73;
                v77 = a2[1];
                v78 = a2[2];
                v79 = (const __m128i *)*a2;
                a2[2] = v90.m128i_i64[0];
                v80 = v77 - 1;
                if ( v80 >= 0 )
                {
                  do
                  {
                    v81 = _mm_loadu_si128(v79);
                    v76 += 16;
                    ++v79;
                    *(__m128i *)(v76 - 16) = v81;
                    v55 = v80-- == 0;
                  }
                  while ( !v55 );
                  v74 = (void *)*a2;
                }
                v91 = v78;
                v90.m128i_i64[0] = v75;
                qfree(v74);
                v30 = v90.m128i_i64[0];
                v82 = v91;
                v29 = a2[1];
                *a2 = v90.m128i_i64[0];
                a2[2] = v82;
              }
              v33 = (__int64 *)(v30 + 16 * v29);
              *v33 = v12;
              v33[1] = -1;
            }
            ++a2[1];
          }
          while ( 1 )
          {
            v36 = get_flags_ex(v12, 4);
            if ( (v36 & 0x1000) != 0 )
            {
              v44 = a3[1];
              v45 = *a3;
              if ( a3[2] < (unsigned __int64)(v44 + 1) )
              {
                v90.m128i_i64[0] = v36;
                v46 = qvector_reserve(a3, v45, v44 + 1, 8);
                LODWORD(v36) = v90.m128i_i32[0];
                *a3 = v46;
                v45 = v46;
                v44 = a3[1];
              }
              *(_QWORD *)(v45 + 8 * v44) = v12;
              ++a3[1];
            }
            if ( (v36 & 0x10000) == 0 )
              break;
            v37 = prev_not_tail(v12);
            v38 = a1[3];
            v12 = v37;
            if ( v38 )
            {
              if ( (int)get_func_chunknum(v38, v37) < 0 )
                return 1;
            }
            else if ( get_fchunk(v37) )
            {
              return 1;
            }
            v39 = *(__int64 (**)())(*a1 + 24LL);
            if ( v39 != sub_4F3C70 )
            {
              v34 = ((__int64 (__fastcall *)(_QWORD *, __int64))v39)(a1, v12);
              if ( v34 >> 4 != 1 )
              {
                v35 = v34 & 0xF;
                if ( v27 != v35 && v35 != 14 )
                  continue;
              }
            }
            v40 = a2[1];
            v41 = *a2;
            v92.m128i_i64[0] = v12;
            v92.m128i_i64[1] = -1;
            v42 = a2[2];
            v43 = v40 + 1;
            if ( (unsigned __int64)&v92 >= v41 && (unsigned __int64)&v92 < v41 + 16 * v42 )
            {
              if ( v42 < v43 )
              {
                v83 = qvector_reserve(a2, 0, v40 + 1, 16);
                v84 = (__m128i *)*a2;
                v85 = a2[2];
                a2[2] = v42;
                v41 = v83;
                v86 = v83;
                v87 = v84;
                v88 = a2[1] - 1;
                if ( v88 >= 0 )
                {
                  do
                  {
                    v89 = _mm_loadu_si128(v87);
                    v86 += 16;
                    ++v87;
                    *(__m128i *)(v86 - 16) = v89;
                    v55 = v88-- == 0;
                  }
                  while ( !v55 );
                  v84 = (__m128i *)*a2;
                }
                qfree(v84);
                *a2 = v41;
                v40 = a2[1];
                a2[2] = v85;
              }
              v66 = (__int64 *)(v41 + 16 * v40);
              *v66 = v12;
              v66[1] = -1;
            }
            else
            {
              if ( v42 < v43 )
              {
                v67 = qvector_reserve(a2, 0, v40 + 1, 16);
                v68 = a2[2];
                v69 = (__m128i *)*a2;
                a2[2] = v42;
                v41 = v67;
                v70 = a2[1] - 1;
                if ( v70 >= 0 )
                {
                  v71 = v41;
                  do
                  {
                    v72 = _mm_loadu_si128(v69);
                    v71 += 16LL;
                    ++v69;
                    *(__m128i *)(v71 - 16) = v72;
                    v55 = v70-- == 0;
                  }
                  while ( !v55 );
                  v69 = (__m128i *)*a2;
                }
                qfree(v69);
                *a2 = v41;
                v40 = a2[1];
                a2[2] = v68;
              }
              *(__m128i *)(v41 + 16 * v40) = _mm_load_si128(&v92);
            }
            ++a2[1];
            return 1;
          }
          return 1;
        }
      }
      v13 = *a1;
    }
  }
  v15 = *(__int64 (__fastcall **)(__int64, __int64))(v13 + 16);
  if ( v15 == sub_4F3C60 )
  {
    v16 = (__m128i)_mm_loadh_ps((const double *)&qword_23ACC50);
  }
  else
  {
    v56 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v15)(a1, v12, 21);
    v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v56, (__m128i)v57);
  }
  v17 = a2[1];
  v18 = a2[2];
  if ( v18 < v17 + 1 )
  {
    v90 = v16;
    v47 = qvector_reserve(a2, 0, v17 + 1, 16);
    v48 = a2[1];
    v49 = a2[2];
    a2[2] = v18;
    v50 = (__m128i *)*a2;
    v51 = _mm_load_si128(&v90);
    v19 = v47;
    v52 = v48 - 1;
    if ( v52 >= 0 )
    {
      v53 = v47;
      do
      {
        v54 = _mm_loadu_si128(v50);
        v53 += 16;
        ++v50;
        *(__m128i *)(v53 - 16) = v54;
        v55 = v52-- == 0;
      }
      while ( !v55 );
      v50 = (__m128i *)*a2;
    }
    v90 = v51;
    qfree(v50);
    *a2 = v19;
    v17 = a2[1];
    a2[2] = v49;
    v16 = _mm_load_si128(&v90);
  }
  else
  {
    v19 = *a2;
  }
  *(__m128i *)(v19 + 16 * v17) = v16;
  ++a2[1];
  return 1;
}
