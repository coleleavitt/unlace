__int64 __fastcall sub_5502E0(__int64 *a1, __int64 *a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // rax
  __int64 *v6; // r13
  __int64 v8; // rax
  __int64 v9; // r13
  const void *v10; // r12
  size_t v11; // r14
  __int64 result; // rax
  _BYTE *v13; // rax
  __int64 v14; // r13
  unsigned __int64 *v15; // rbx
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rdi
  int v20; // r12d
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // r12
  __int64 v25; // rdi
  bool v26; // cf
  __int64 v27; // rax
  __int64 v28; // rcx
  const __m128i *v29; // rbx
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // r12
  __int64 v34; // rax
  __int64 v35; // r15
  __m128i v36; // xmm4
  char *v37; // rdi
  __int64 v38; // r13
  __int64 i; // r12
  char *v40; // rbx
  void *v41; // rdi
  void *v42; // rdi
  __m128i v43; // xmm5
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  char *v47; // rsi
  char *v48; // rsi
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // r13
  __int64 v52; // rbx
  __m128i v53; // xmm0
  __int32 v54; // eax
  __m128i v55; // xmm0
  __int32 v56; // eax
  __m128i v57; // xmm0
  const __m128i *v58; // rcx
  __m128i v59; // xmm0
  const __m128i *v60; // r14
  void *v61; // rax
  size_t v62; // rdx
  void *v63; // rax
  size_t v64; // r8
  __int64 v65; // rax
  __m128i v66; // [rsp+0h] [rbp-A8h] BYREF
  size_t n; // [rsp+18h] [rbp-90h]
  _QWORD *v68; // [rsp+20h] [rbp-88h]
  unsigned __int64 v69; // [rsp+28h] [rbp-80h]
  size_t v70; // [rsp+30h] [rbp-78h]
  unsigned __int64 v71; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v72[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v73; // [rsp+58h] [rbp-50h]
  unsigned __int64 v74; // [rsp+68h] [rbp-40h]

  v5 = *a1;
  v71 = a3;
  v6 = *(__int64 **)(v5 + 1824);
  v74 = __readfsqword(0x28u);
  if ( a3 > 0xFF )
  {
    sub_53EAE0((__int64)v6, a3);
  }
  else if ( (a3 & 0xF) > 9 )
  {
    if ( !under_debugger )
      interr(933);
LABEL_91:
    BUG();
  }
  switch ( a4 )
  {
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
    case 8:
      v8 = sub_534260((__int64)v6, v71);
      v9 = v8;
      if ( !v8 )
        return 0;
      if ( (a4 & 0xFFFFFFF7) == 0 )
        return (unsigned __int8)sub_535400(v9, (__int64)a2, a4);
      if ( !sub_53CE30(v8, *a1, v71, 1) )
        return 0;
      if ( a4 == 1 )
      {
        if ( (*(_BYTE *)(v9 + 69) & 2) == 0 )
          return 0;
        return (unsigned __int8)sub_535400(v9, (__int64)a2, a4);
      }
      if ( (unsigned int)(a4 - 5) > 1 )
        return (unsigned __int8)sub_535400(v9, (__int64)a2, a4);
      if ( a4 == 6 )
      {
        if ( (*(_BYTE *)(v9 + 69) & 0x20) == 0 )
        {
          v10 = *(const void **)(v9 + 72);
          if ( v10 )
          {
            if ( a2 )
            {
              v11 = strlen(*(const char **)(v9 + 72));
              if ( v11 )
                goto LABEL_81;
              a2[1] = 0;
            }
            return 1;
          }
        }
        return 0;
      }
      v10 = *(const void **)(v9 + 72);
      if ( !v10 )
        return 0;
      if ( !a2 )
        goto LABEL_14;
      v11 = strlen(*(const char **)(v9 + 72));
      if ( !v11 )
      {
        a2[1] = 0;
        goto LABEL_14;
      }
LABEL_81:
      if ( a2[2] < v11 + 1 )
        *a2 = qvector_reserve(a2, *a2, v11 + 1, 1);
      a2[1] = v11 + 1;
      memmove((void *)*a2, v10, v11);
      *(_BYTE *)(*a2 + v11) = 0;
      if ( a4 != 5 )
        return 1;
LABEL_14:
      result = 2;
      if ( (*(_BYTE *)(v9 + 69) & 0x20) != 0 )
        return 1;
      return result;
    case 3:
      v44 = *a1;
      v72[0] = off_2B2E160;
      v72[1] = 4;
      v72[2] = v44;
      v73 = 0;
      visit_subtypes((int)v72, 0, (int)&v71, 0, 0);
      v45 = v73;
      if ( a2 )
        *a2 = v73;
      return v45 != 0;
    case 4:
      v32 = sub_53CF90(v6, v71);
      if ( !v32 )
        return 0;
      v33 = *(_QWORD **)(v32 + 8);
      if ( !v33 )
        return 0;
      if ( a2 )
      {
        v34 = v33[1];
        v35 = 0;
        v66.m128i_i64[0] = v34;
        if ( v34 )
        {
          v51 = 0;
          v35 = qalloc_or_throw(144 * v34);
          v52 = v35;
          do
          {
            v58 = (const __m128i *)(*v33 + v52 - v35);
            v59 = _mm_loadu_si128(v58);
            *(_QWORD *)(v52 + 16) = 0;
            v60 = v58;
            *(_OWORD *)(v52 + 24) = 0;
            *(__m128i *)v52 = v59;
            if ( v58[1].m128i_i64[1] )
            {
              n = v58[1].m128i_u64[1];
              v61 = (void *)qalloc_or_throw(n);
              v62 = n;
              *(_QWORD *)(v52 + 16) = v61;
              *(_QWORD *)(v52 + 32) = v62;
              memcpy(v61, (const void *)v60[1].m128i_i64[0], v62);
              *(_QWORD *)(v52 + 24) = n;
            }
            *(_QWORD *)(v52 + 40) = 0;
            *(_OWORD *)(v52 + 48) = 0;
            if ( v60[3].m128i_i64[0] )
            {
              n = v60[3].m128i_u64[0];
              v63 = (void *)qalloc_or_throw(n);
              v64 = n;
              *(_QWORD *)(v52 + 40) = v63;
              *(_QWORD *)(v52 + 56) = v64;
              memcpy(v63, (const void *)v60[2].m128i_i64[1], v64);
              *(_QWORD *)(v52 + 48) = n;
            }
            *(_QWORD *)(v52 + 64) = 0;
            copy_tinfo_t(v52 + 64);
            v53 = _mm_loadu_si128((const __m128i *)((char *)v60 + 72));
            ++v51;
            v52 += 144;
            *(_QWORD *)(v52 - 24) = v60[7].m128i_i64[1];
            v54 = v60[8].m128i_i32[0];
            *(__m128i *)(v52 - 72) = v53;
            v55 = _mm_loadu_si128((const __m128i *)((char *)v60 + 88));
            *(_DWORD *)(v52 - 16) = v54;
            v56 = v60[8].m128i_i32[1];
            *(__m128i *)(v52 - 56) = v55;
            v57 = _mm_loadu_si128((const __m128i *)((char *)v60 + 104));
            *(_DWORD *)(v52 - 12) = v56;
            LOBYTE(v56) = v60[8].m128i_i8[8];
            *(__m128i *)(v52 - 40) = v57;
            *(_BYTE *)(v52 - 8) = v56;
          }
          while ( v66.m128i_i64[0] != v51 );
        }
        v36 = _mm_loadl_epi64(&v66);
        v37 = (char *)*a2;
        v66 = _mm_unpacklo_epi64(v36, v36);
        if ( v37 )
        {
          v38 = a2[1];
          if ( v38 )
          {
            for ( i = 0; i != v38; ++i )
            {
              v40 = &v37[144 * i];
              clear_tinfo_t(v40 + 64);
              v41 = *((void **)v40 + 5);
              if ( v41 )
              {
                *((_QWORD *)v40 + 6) = 0;
                qfree(v41);
              }
              v42 = *((void **)v40 + 2);
              if ( v42 )
              {
                *((_QWORD *)v40 + 3) = 0;
                qfree(v42);
              }
              v37 = (char *)*a2;
            }
          }
          a2[1] = 0;
          qfree(v37);
        }
        v43 = _mm_load_si128(&v66);
        *a2 = v35;
        *(__m128i *)(a2 + 1) = v43;
      }
      return 1;
    case 7:
      v13 = (_BYTE *)sub_53CF90(v6, v71);
      if ( !v13 || (v13[70] & 0x2F) != 0xD )
        return 0;
      v14 = *(_QWORD *)v13;
      if ( !*(_QWORD *)(*(_QWORD *)v13 + 8LL) )
        return 1;
      v15 = *(unsigned __int64 **)v14;
      v16 = 1;
      v17 = 0;
      v68 = v72;
      v18 = v15;
LABEL_20:
      v19 = v15[8];
      if ( (v15[8] & 0xF) == 0xE )
        goto LABEL_23;
      while ( 1 )
      {
        v17 += 18;
        if ( v16 >= *(_QWORD *)(v14 + 8) )
          return 1;
        v15 = &v18[v17];
        ++v16;
        v19 = v18[v17 + 8];
        if ( (v18[v17 + 8] & 0xF) == 0xE )
        {
LABEL_23:
          BYTE2(v72[0]) = 0;
          LOWORD(v72[0]) = 0;
          if ( (unsigned __int8)get_tinfo_details(v19, 14, v68) )
          {
            v20 = 8 * LOBYTE(v72[0]);
            v21 = *v15 & 0xFFFFFFFFFFFFFFF8LL;
            v22 = 8LL * *(_QWORD *)(v14 + 24);
            v69 = v21;
            v23 = v20 + v21;
            n = v20;
            if ( v23 > v22 )
              v23 = v22;
            v24 = v23;
            if ( !*(_BYTE *)(v14 + 51) )
            {
              v25 = v22 - v21;
              v26 = v22 < v21 + 64;
              v27 = 64;
              if ( v26 )
                v27 = v25;
              v70 = v27;
              if ( v16 < *(_QWORD *)(v14 + 8) )
              {
                v28 = v16;
                while ( 1 )
                {
                  v66.m128i_i64[0] = v28;
                  v29 = (const __m128i *)(*(_QWORD *)v14 + 144 * v28);
                  if ( v29->m128i_i64[0] >= v24 )
                    goto LABEL_62;
                  if ( (get_tinfo_property(v29[4].m128i_i64[0], 2) & 0xF) != 0xE )
                    break;
                  if ( !(unsigned __int8)get_tinfo_details(v29[4].m128i_i64[0], 14, v68) )
                    goto LABEL_62;
                  v30 = _mm_loadu_si128(v29);
                  if ( v24 < _mm_add_epi64(v30, _mm_srli_si128(v30, 8)).m128i_u64[0] )
                  {
                    v31 = 8 * LOBYTE(v72[0]);
                    if ( v24 >= v69 + v31 )
                    {
                      n *= 2LL;
                      v24 = v69 + n;
                      if ( v69 + n < v69 + v31 )
                      {
                        if ( !under_debugger )
                          interr(3034);
                        goto LABEL_91;
                      }
                    }
                    else
                    {
                      n = 8 * LOBYTE(v72[0]);
                      v24 = v69 + v31;
                    }
                    if ( n >= v70 )
                      goto LABEL_62;
                  }
                  v28 = v66.m128i_i64[0] + 1;
                  if ( (unsigned __int64)(v66.m128i_i64[0] + 1) >= *(_QWORD *)(v14 + 8) )
                    goto LABEL_62;
                }
                v24 = v29->m128i_i64[0];
              }
            }
LABEL_62:
            v46 = a2[1];
            v47 = (char *)*a2;
            if ( a2[2] < (unsigned __int64)(v46 + 1) )
            {
              v65 = qvector_reserve(a2, v47, v46 + 1, 16);
              *a2 = v65;
              v47 = (char *)v65;
              v46 = a2[1];
            }
            v48 = &v47[16 * v46];
            v49 = v69;
            *((_QWORD *)v48 + 1) = v24;
            *(_QWORD *)v48 = v49;
            ++a2[1];
            while ( 1 )
            {
              v50 = v16;
              v17 += 18;
              ++v16;
              if ( v50 >= *(_QWORD *)(v14 + 8) )
                break;
              v18 = *(unsigned __int64 **)v14;
              v15 = (unsigned __int64 *)(*(_QWORD *)v14 + v17 * 8);
              if ( *v15 >= v24 || (v15[8] & 0xF) != 0xE )
                goto LABEL_20;
            }
          }
          return 1;
        }
      }
    default:
      if ( !under_debugger )
        interr(1082);
      goto LABEL_91;
  }
}
