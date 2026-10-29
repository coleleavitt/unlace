__int64 __fastcall sub_537250(__int64 *a1, __int64 *a2, const char *a3, int a4)
{
  __int64 v5; // rax
  __int64 *v6; // r13
  __int64 v8; // rax
  __int64 v9; // r13
  const void *v10; // r12
  size_t v11; // r14
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rbx
  __int64 v17; // r14
  unsigned __int64 *v18; // r12
  unsigned __int64 v19; // rdi
  int v20; // r13d
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r10
  __int64 v24; // rcx
  bool v25; // cf
  __int64 v26; // rax
  const __m128i *v27; // rcx
  const __m128i *v28; // r12
  __m128i v29; // xmm0
  __int64 v30; // rax
  const char *m128i_i8; // rsi
  __int64 v32; // rax
  _QWORD *v33; // r13
  unsigned __int64 v34; // r14
  char *v35; // rdi
  __int64 v36; // r13
  __int64 i; // r12
  char *v38; // rbx
  void *v39; // rdi
  void *v40; // rdi
  __m128i si128; // xmm5
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  char *v45; // rsi
  __int64 *v46; // rsi
  __int64 v47; // r12
  __int64 v48; // rbx
  __m128i v49; // xmm0
  __int32 v50; // eax
  __m128i v51; // xmm0
  __int32 v52; // eax
  const __m128i *v53; // rcx
  __m128i v54; // xmm0
  const __m128i *v55; // r15
  void *v56; // rax
  size_t v57; // rdx
  void *v58; // rax
  size_t v59; // r8
  __int64 v60; // rax
  size_t n[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v62; // [rsp+10h] [rbp-88h]
  _QWORD *v63; // [rsp+18h] [rbp-80h]
  size_t v64; // [rsp+20h] [rbp-78h]
  const char *v65; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v66[3]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v67; // [rsp+48h] [rbp-50h]
  unsigned __int64 v68; // [rsp+58h] [rbp-40h]

  v5 = *a1;
  v65 = a3;
  v6 = *(__int64 **)(v5 + 1632);
  v68 = __readfsqword(0x28u);
  if ( (unsigned __int64)a3 > 0xFF )
  {
    sub_525DE0((__int64)v6, (unsigned __int64)a3);
  }
  else if ( ((unsigned __int8)a3 & 0xFu) > 9 )
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
      v8 = sub_51B8E0((__int64)v6, (unsigned __int64)v65);
      v9 = v8;
      if ( !v8 )
        return 0;
      if ( (a4 & 0xFFFFFFF7) == 0 )
        return (unsigned __int8)sub_51C8D0(v9, (__int64)a2, a4);
      if ( !sub_524160(v8, *a1, (char)v65, 1) )
        return 0;
      if ( a4 == 1 )
      {
        if ( (*(_BYTE *)(v9 + 69) & 2) == 0 )
          return 0;
        return (unsigned __int8)sub_51C8D0(v9, (__int64)a2, a4);
      }
      if ( (unsigned int)(a4 - 5) > 1 )
        return (unsigned __int8)sub_51C8D0(v9, (__int64)a2, a4);
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
      v42 = *a1;
      v66[0] = off_2B041A0;
      v66[1] = 4;
      v66[2] = v42;
      v67 = 0;
      visit_subtypes((int)v66, 0, (int)&v65, 0, 0);
      v43 = v67;
      if ( a2 )
        *a2 = v67;
      return v43 != 0;
    case 4:
      m128i_i8 = v65;
      v32 = sub_5242C0(v6, (unsigned __int64)v65);
      if ( !v32 )
        return 0;
      v33 = *(_QWORD **)(v32 + 8);
      if ( !v33 )
        return 0;
      if ( a2 )
      {
        v62 = 0;
        v34 = v33[1];
        if ( v34 )
        {
          v47 = 0;
          v62 = qalloc_or_throw(v34 << 7, v65);
          v48 = v62;
          do
          {
            v53 = (const __m128i *)(*v33 + (v47 << 7));
            v54 = _mm_loadu_si128(v53);
            *(_QWORD *)(v48 + 16) = 0;
            v55 = v53;
            *(_OWORD *)(v48 + 24) = 0;
            *(__m128i *)v48 = v54;
            if ( v53[1].m128i_i64[1] )
            {
              n[0] = v53[1].m128i_u64[1];
              v56 = (void *)qalloc_or_throw(n[0], m128i_i8);
              v57 = n[0];
              *(_QWORD *)(v48 + 16) = v56;
              *(_QWORD *)(v48 + 32) = v57;
              m128i_i8 = (const char *)v55[1].m128i_i64[0];
              memcpy(v56, m128i_i8, v57);
              *(_QWORD *)(v48 + 24) = n[0];
            }
            *(_QWORD *)(v48 + 40) = 0;
            *(_OWORD *)(v48 + 48) = 0;
            if ( v55[3].m128i_i64[0] )
            {
              n[0] = v55[3].m128i_u64[0];
              v58 = (void *)qalloc_or_throw(n[0], m128i_i8);
              v59 = n[0];
              *(_QWORD *)(v48 + 40) = v58;
              *(_QWORD *)(v48 + 56) = v59;
              memcpy(v58, (const void *)v55[2].m128i_i64[1], v59);
              *(_QWORD *)(v48 + 48) = n[0];
            }
            *(_QWORD *)(v48 + 64) = 0;
            m128i_i8 = v55[4].m128i_i8;
            copy_tinfo_t(v48 + 64);
            v49 = _mm_loadu_si128((const __m128i *)((char *)v55 + 72));
            ++v47;
            v48 += 128;
            *(_QWORD *)(v48 - 24) = v55[6].m128i_i64[1];
            v50 = v55[7].m128i_i32[0];
            *(__m128i *)(v48 - 56) = v49;
            v51 = _mm_loadu_si128((const __m128i *)((char *)v55 + 88));
            *(_DWORD *)(v48 - 16) = v50;
            v52 = v55[7].m128i_i32[1];
            *(__m128i *)(v48 - 40) = v51;
            *(_DWORD *)(v48 - 12) = v52;
            *(_BYTE *)(v48 - 8) = v55[7].m128i_i8[8];
          }
          while ( v34 != v47 );
        }
        v35 = (char *)*a2;
        *(__m128i *)n = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v34);
        if ( v35 )
        {
          v36 = a2[1];
          if ( v36 )
          {
            for ( i = 0; i != v36; ++i )
            {
              v38 = &v35[128 * i];
              clear_tinfo_t(v38 + 64);
              v39 = *((void **)v38 + 5);
              if ( v39 )
              {
                *((_QWORD *)v38 + 6) = 0;
                qfree(v39);
              }
              v40 = *((void **)v38 + 2);
              if ( v40 )
              {
                *((_QWORD *)v38 + 3) = 0;
                qfree(v40);
              }
              v35 = (char *)*a2;
            }
          }
          a2[1] = 0;
          qfree(v35);
        }
        si128 = _mm_load_si128((const __m128i *)n);
        *a2 = v62;
        *(__m128i *)(a2 + 1) = si128;
      }
      return 1;
    case 7:
      v13 = sub_5242C0(v6, (unsigned __int64)v65);
      if ( !v13 || (*(_BYTE *)(v13 + 70) & 0x2F) != 0xD )
        return 0;
      v14 = *(_QWORD *)v13;
      v15 = 0;
      v16 = 1;
      v63 = v66;
      v17 = -1;
      if ( !*(_QWORD *)(v14 + 8) )
        return 1;
      while ( 2 )
      {
        v18 = (unsigned __int64 *)(*(_QWORD *)v14 + (v16 << 7) - 128);
        if ( v17 == -1 || *v18 >= v15 )
        {
          v19 = v18[8];
          if ( (v18[8] & 0xF) == 0xE )
          {
            BYTE2(v66[0]) = 0;
            LOWORD(v66[0]) = 0;
            if ( !(unsigned __int8)get_tinfo_details(v19, 14, v63) )
              return 1;
            v20 = 8 * LOBYTE(v66[0]);
            v21 = *v18 & 0xFFFFFFFFFFFFFFF8LL;
            v22 = 8LL * *(_QWORD *)(v14 + 24);
            v17 = v21;
            v23 = v20 + v21;
            n[0] = v20;
            if ( v23 > v22 )
              v23 = v22;
            v15 = v23;
            if ( !*(_BYTE *)(v14 + 51) )
            {
              v24 = v22 - v21;
              v25 = v22 < v21 + 64;
              v26 = 64;
              if ( v25 )
                v26 = v24;
              v64 = v26;
              if ( v16 < *(_QWORD *)(v14 + 8) )
              {
                v62 = v16;
                while ( 1 )
                {
                  v27 = (const __m128i *)(*(_QWORD *)v14 + (v62 << 7));
                  v28 = v27;
                  if ( v27->m128i_i64[0] >= v15 )
                    goto LABEL_65;
                  if ( (get_tinfo_property(v27[4].m128i_i64[0], 2) & 0xF) != 0xE )
                    break;
                  if ( !(unsigned __int8)get_tinfo_details(v28[4].m128i_i64[0], 14, v63) )
                    goto LABEL_65;
                  v29 = _mm_loadu_si128(v28);
                  if ( v15 < _mm_add_epi64(v29, _mm_srli_si128(v29, 8)).m128i_u64[0] )
                  {
                    v30 = 8 * LOBYTE(v66[0]);
                    if ( v15 >= v17 + v30 )
                    {
                      n[0] *= 2LL;
                      v15 = v17 + n[0];
                      if ( v17 + n[0] < v17 + v30 )
                      {
                        if ( !under_debugger )
                          interr(3034);
                        goto LABEL_91;
                      }
                    }
                    else
                    {
                      n[0] = 8 * LOBYTE(v66[0]);
                      v15 = v17 + v30;
                    }
                    if ( n[0] >= v64 )
                      goto LABEL_65;
                  }
                  if ( (unsigned __int64)++v62 >= *(_QWORD *)(v14 + 8) )
                    goto LABEL_65;
                }
                v15 = v28->m128i_i64[0];
              }
            }
LABEL_65:
            v44 = a2[1];
            v45 = (char *)*a2;
            if ( a2[2] < (unsigned __int64)(v44 + 1) )
            {
              v60 = qvector_reserve(a2, v45, v44 + 1, 16);
              *a2 = v60;
              v45 = (char *)v60;
              v44 = a2[1];
            }
            v46 = (__int64 *)&v45[16 * v44];
            *v46 = v17;
            v46[1] = v15;
            ++a2[1];
          }
          else
          {
            v17 = -1;
          }
        }
        else if ( (v18[8] & 0xF) != 0xE )
        {
          v17 = -1;
        }
        if ( v16 < *(_QWORD *)(v14 + 8) )
        {
          ++v16;
          continue;
        }
        return 1;
      }
    default:
      if ( !under_debugger )
        interr(1082);
      goto LABEL_91;
  }
}

