__int64 __fastcall sub_BCAA50(__int64 a1, unsigned int a2, unsigned __int8 a3, double a4)
{
  char **exception; // r13
  __int64 v5; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  bool v10; // zf
  unsigned int v11; // r14d
  _DWORD *v12; // rax
  unsigned int *v13; // rbx
  __int64 result; // rax
  __m128i v15; // xmm0
  __int32 v16; // r12d
  __int32 v17; // r12d
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdi
  unsigned int *v21; // rax
  _QWORD *v22; // rax
  unsigned int *v23; // rdx
  unsigned int *v24; // rax
  __m128 v25; // xmm0
  __int64 v26; // r13
  unsigned int *v27; // rdx
  unsigned int *v28; // rax
  __int64 v29; // r13
  __int64 v30; // r13
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r14d
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r14
  _QWORD *v43; // r14
  __int64 v44; // rax
  __int64 v45; // rcx
  __m128i *v46; // rax
  __m128i v47; // xmm3
  __int64 v48; // r14
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rdi
  unsigned int v52; // edi
  unsigned int v53; // edx
  __int64 v54; // rax
  __m128i *v55; // r9
  __int64 *v56; // r12
  __int64 v57; // rdi
  __int64 v58; // rdx
  const __m128i *v59; // rax
  const __m128i *v60; // rdi
  __m128i v61; // xmm0
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rdi
  int *v65; // rax
  int v66; // ecx
  int v67; // edx
  __int64 v68; // r13
  _QWORD *v69; // rax
  __int64 v70; // r13
  int v71; // [rsp+0h] [rbp-110h]
  unsigned int v72; // [rsp+4h] [rbp-10Ch]
  int v73; // [rsp+8h] [rbp-108h]
  _DWORD *v74; // [rsp+8h] [rbp-108h]
  int v75; // [rsp+10h] [rbp-100h]
  int v76; // [rsp+10h] [rbp-100h]
  __int64 *m128i_i64; // [rsp+10h] [rbp-100h]
  int v78; // [rsp+18h] [rbp-F8h]
  __int32 v79; // [rsp+18h] [rbp-F8h]
  unsigned __int32 v80; // [rsp+18h] [rbp-F8h]
  __m128i v81; // [rsp+20h] [rbp-F0h] BYREF
  __int64 v82; // [rsp+30h] [rbp-E0h] BYREF
  unsigned int *v83; // [rsp+38h] [rbp-D8h] BYREF
  unsigned int *v84; // [rsp+40h] [rbp-D0h]
  int v85; // [rsp+48h] [rbp-C8h] BYREF
  __m128i v86; // [rsp+50h] [rbp-C0h] BYREF
  __m128i v87; // [rsp+60h] [rbp-B0h] BYREF
  __int64 v88[2]; // [rsp+70h] [rbp-A0h] BYREF
  __m128 v89; // [rsp+80h] [rbp-90h] BYREF
  __m128 v90; // [rsp+90h] [rbp-80h] BYREF
  __m128 v91; // [rsp+A0h] [rbp-70h] BYREF
  __m128i v92; // [rsp+B0h] [rbp-60h] BYREF
  _BYTE v93[80]; // [rsp+C0h] [rbp-50h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8840LL) + 8LL * a2);
  v9 = *(_QWORD *)(a1 + 24);
  v83 = nullptr;
  v84 = nullptr;
  v81.m128i_i64[1] = v9;
  v10 = *(_WORD *)(v8 + 4) == 0;
  v82 = v8;
  v11 = (a3 ^ 1) + 2 * a2;
  if ( !v10 )
    goto LABEL_109;
  v12 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
  if ( !v12 || *v12 != *(_DWORD *)(a1 + 1744) )
    goto LABEL_109;
  if ( v12[1] == 3 && *(_DWORD *)(v8 + 24) == 2 )
  {
    v23 = *(unsigned int **)(v8 + 32);
    v24 = *(unsigned int **)(v8 + 40);
    v83 = v23;
    v84 = v24;
    if ( a3 )
    {
      v25 = _mm_loadh_ps((const double *)&v81.m128i_i64[1]);
      v89 = v25;
      if ( v23 )
        ++v23[2];
      v90 = v25;
      if ( v24 )
        ++v24[2];
      sub_14B9B80(a1 + 1192, &v89);
      sub_14B9B80(a1 + 1192, &v90);
      sub_1407560((unsigned int)&v92, a1 + 1848, a1 + 2016, v89.m128_i32[0], v90.m128_i32[0], 0, 0, 0, 1);
      v26 = v92.m128i_i64[0];
      sub_BCEE10(&v92, a1, v89.m128_u64[0], v92.m128i_i64[0]);
      v13 = (unsigned int *)v92.m128i_i64[0];
      sub_BB0560(v26, v92.m128i_i64[1]);
      sub_BC58F0(a1, v11, v13, (unsigned int *)v90.m128_u64[0], 1);
      sub_1579480(&v91, a1 + 1224);
      sub_1579480(&v92, a1 + 1224);
      sub_BC58F0(a1, v11, (unsigned int *)v91.m128_u64[0], (unsigned int *)v92.m128i_i64[0], 0);
      sub_BB0560(v92.m128i_i64[0], v92.m128i_i64[1]);
      sub_BB0560(v91.m128_i64[0], v91.m128_i64[1]);
      sub_BB0560(v90.m128_i64[0], v90.m128_i64[1]);
      sub_BB0560(v89.m128_i64[0], v89.m128_i64[1]);
      return sub_BB0560((__int64)v13, v81.m128i_i64[1]);
    }
    sub_BCA630(a1, v8, a4);
    goto LABEL_7;
  }
  if ( v12[1] == 4 && *(_DWORD *)(v8 + 24) == 2 )
  {
    v27 = *(unsigned int **)(v8 + 32);
    v28 = *(unsigned int **)(v8 + 40);
    v83 = v27;
    v84 = v28;
    if ( a3 )
    {
      v89 = _mm_loadh_ps((const double *)&v81.m128i_i64[1]);
      if ( v27 )
        ++v27[2];
      v90 = _mm_loadh_ps((const double *)&v81.m128i_i64[1]);
      if ( v28 )
        ++v28[2];
      sub_14B9B80(a1 + 1192, &v89);
      sub_14B9B80(a1 + 1192, &v90);
      sub_1407560((unsigned int)&v92, a1 + 1848, a1 + 2024, v89.m128_i32[0], v90.m128_i32[0], 0, 0, 0, 1);
      v29 = v92.m128i_i64[0];
      sub_BCEE10(&v92, a1, v92.m128i_i64[0], v89.m128_u64[0]);
      v13 = (unsigned int *)v92.m128i_i64[0];
      sub_BB0560(v29, v92.m128i_i64[1]);
      sub_BC58F0(a1, v11, v13, (unsigned int *)v90.m128_u64[0], 1);
      sub_1579480(&v91, a1 + 1224);
      sub_1579480(&v92, a1 + 1224);
      sub_BC58F0(a1, v11, (unsigned int *)v91.m128_u64[0], (unsigned int *)v92.m128i_i64[0], 0);
      sub_BB0560(v92.m128i_i64[0], v92.m128i_i64[1]);
      sub_BB0560(v91.m128_i64[0], v91.m128_i64[1]);
      sub_BB0560(v90.m128_i64[0], v90.m128_i64[1]);
      sub_BB0560(v89.m128_i64[0], v89.m128_i64[1]);
      return sub_BB0560((__int64)v13, v81.m128i_i64[1]);
    }
    sub_BCA840(a1, v8, a4);
    goto LABEL_7;
  }
  if ( v12[1] != 5 || *(_DWORD *)(v8 + 24) != 2 )
  {
LABEL_109:
    if ( (unsigned __int8)sub_1407860(a1 + 1848, a1 + 2112, v8) )
    {
      if ( a3 )
        sub_BEC1C0(
          a1 + 3624,
          v71,
          v73,
          v75,
          v78,
          v81.m128i_i32[0],
          v81.m128i_i32[2],
          v82,
          (int)v83,
          (int)v84,
          v85,
          v86.m128i_i32[0],
          v86.m128i_i64[1],
          v87.m128i_i64[0],
          v87.m128i_i64[1],
          v88[0]);
      goto LABEL_7;
    }
    if ( (unsigned __int8)sub_1407860(a1 + 1848, a1 + 2120, v8) )
    {
      if ( a3 )
        sub_BEF650(a1 + 3624, v11);
      goto LABEL_7;
    }
    if ( (unsigned __int8)sub_1408FA0(a1 + 1848, v8, &v83) )
    {
      if ( a3 )
        sub_BC58F0(a1, v11, v83, v84, 1);
      goto LABEL_7;
    }
    if ( *(_WORD *)(v8 + 4)
      || (v22 = *(_QWORD **)(*(_QWORD *)(v8 + 16) + 24LL)) == nullptr
      || *v22 != (*(unsigned int *)(a1 + 1744) | 0x1000000000LL) )
    {
      v81.m128i_i64[0] = (__int64)&v89;
      sub_180C5A0(&v89, "seq.is_digit");
      if ( (unsigned __int8)sub_1407860(a1 + 1848, &v89, v8) || (unsigned __int8)sub_1407860(a1 + 1848, a1 + 2168, v8) )
        goto LABEL_7;
      if ( (unsigned __int8)sub_1407860(a1 + 1848, a1 + 2176, v8) )
      {
        if ( a3 )
          sub_BB23B0(a1, v8);
        goto LABEL_7;
      }
      v50 = a1 + 2128;
      v51 = a1 + 1848;
      if ( (unsigned __int8)sub_1407860(a1 + 1848, a1 + 2128, v8) )
      {
        if ( a3 )
          sub_BEEFC0(a1 + 3624, v11);
        goto LABEL_7;
      }
      if ( !*(_WORD *)(v8 + 4) )
      {
        v65 = *(int **)(*(_QWORD *)(v8 + 16) + 24LL);
        if ( v65 )
        {
          v66 = *(_DWORD *)(a1 + 1744);
          v67 = *v65;
          if ( v66 == *v65 )
          {
            if ( v65[1] == 46 || v65[1] == 47 )
            {
              sub_BD21A0(a1 + 432, &v82);
              goto LABEL_7;
            }
            if ( v65[1] == 10 || v65[1] == 11 )
              goto LABEL_7;
          }
          if ( v67 == *(_DWORD *)(a1 + 1720) && v65[1] == 67
            || v66 == v67 && (v65[1] == 48 || v65[1] == 22 || v65[1] == 23) )
          {
            goto LABEL_7;
          }
        }
      }
      sub_180B130(v51);
      if ( (unsigned __int8)sub_186A530(a4) )
      {
        sub_186A4C0(a4);
        v68 = sub_180B150(v51, v50);
        sub_1606360(&v92, v8, *(_QWORD *)(a1 + 24), 0, 0, 0);
        sub_160E8B0(v68, &v92);
        std::operator<<<std::char_traits<char>>();
        sub_18572D0(v93);
        sub_186A500(v93, "\n");
      }
      else
      {
        v70 = sub_180B150(v51, v50);
        sub_1606360(&v92, v8, *(_QWORD *)(a1 + 24), 0, 0, 0);
        sub_160E8B0(v70, &v92);
        std::operator<<<std::char_traits<char>>();
        sub_18572D0(v93);
      }
      sub_1872CE0("");
      sub_1873130(114, 3170);
    }
    sub_BED3B0(a1 + 3624, v11);
LABEL_7:
    v13 = nullptr;
    return sub_BB0560((__int64)v13, v81.m128i_i64[1]);
  }
  v83 = *(unsigned int **)(v8 + 32);
  v84 = *(unsigned int **)(v8 + 40);
  result = sub_BCA430((__int64 *)a1, a3, (unsigned int *)v8, a4);
  if ( !(_BYTE)result )
  {
    v15 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
    v86 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v83, v15);
    if ( v83 )
      ++v83[2];
    v87 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v84, v15);
    if ( v84 )
      ++v84[2];
    sub_14B9B80(a1 + 1192, &v86);
    sub_14B9B80(a1 + 1192, &v87);
    if ( a3 )
    {
      v81.m128i_i32[0] = v87.m128i_i32[0];
      v16 = v86.m128i_i32[0];
      sub_180C5A0(&v90, "seq.cnt.l");
      sub_1407560((unsigned int)v88, a1 + 1848, (unsigned int)&v90, v16, v81.m128i_i32[0], 0, 0, 0, 1);
      v81.m128i_i64[0] = (__int64)&v85;
      v17 = v86.m128i_i32[0];
      v79 = v87.m128i_i32[0];
      sub_180C5A0(&v85, "seq.cnt.r");
      sub_1407560((unsigned int)&v89, a1 + 1848, (unsigned int)&v85, v17, v79, 0, 0, 0, 1);
      v18 = *(_QWORD *)(a1 + 1736);
      v81.m128i_i64[0] = v88[0];
      v91 = _mm_loadh_ps((const double *)v89.m128_u64);
      v19 = sub_15E1AF0(v18);
      v20 = *(_QWORD *)(a1 + 1736);
      v92 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v81), (__m128i)(unsigned __int64)v19);
      v21 = (unsigned int *)sub_15E1AF0(v20);
      v13 = v21;
      if ( v21 )
        ++v21[2];
      sub_BC58F0(a1, v11, v21, v83, 1);
      v81.m128i_i64[0] = a1 + 1224;
      sub_1579480(&v90, a1 + 1224);
      sub_1579480(&v92, v81.m128i_i64[0]);
      sub_BC58F0(a1, v11, (unsigned int *)v90.m128_u64[0], (unsigned int *)v92.m128i_i64[0], 0);
      sub_BB0560(v92.m128i_i64[0], v92.m128i_i64[1]);
      sub_BB0560(v90.m128_i64[0], v90.m128_i64[1]);
      sub_BB0560(v89.m128_i64[0], v89.m128_i64[1]);
      sub_BB0560(v88[0], v88[1]);
    }
    else
    {
      sub_BC4590(a1, v11, v87.m128i_i64[0], *(double *)v15.m128i_i64);
      v30 = sub_180C100(*(_QWORD *)(a1 + 120), 32);
      *(_QWORD *)v30 = 0x80000000LL;
      *(_DWORD *)(v30 + 24) = v11;
      *(_OWORD *)(v30 + 8) = 0;
      sub_1579480(&v90, a1 + 1224);
      sub_1579480(&v91, a1 + 1224);
      sub_BB1E10(&v92, a1);
      v81.m128i_i64[0] = v92.m128i_i64[0];
      sub_993400(a1 + 2208, 0xFFFFFFFF);
      v31 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
      v80 = sub_BF5550((int)a1 + 2184, v31, v32, v33, v34, v35);
      sub_BB0560(v92.m128i_i64[0], v92.m128i_i64[1]);
      sub_BB0560(v91.m128_i64[0], v91.m128_i64[1]);
      v36 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8872LL) + 16LL * (v80 >> 1);
      *(_BYTE *)(v36 + 11) = *(_BYTE *)(v36 + 11) & 0xF3 | (8 * !(v80 & 1) + 4);
      v37 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(v8 + 8) += 2;
      v81.m128i_i64[0] = v37;
      v38 = *(_QWORD *)(a1 + 384);
      if ( v38 )
        v76 = *(_DWORD *)(v38 - 4);
      else
        v76 = 0;
      v39 = *(_DWORD *)(a1 + 368);
      v40 = *(_QWORD *)(a1 + 400);
      LODWORD(v88[0]) = v39;
      if ( v40 )
        goto LABEL_58;
LABEL_60:
      sub_2FD3F0((unsigned int **)(a1 + 400));
      v40 = *(_QWORD *)(a1 + 400);
      v41 = *(unsigned int *)(v40 - 4);
      while ( 1 )
      {
        *(_DWORD *)(v40 + 4 * v41) = 0;
        ++*(_DWORD *)(v40 - 4);
LABEL_58:
        v41 = *(unsigned int *)(v40 - 4);
        if ( v39 < (unsigned int)v41 )
          break;
        if ( (_DWORD)v41 == *(_DWORD *)(v40 - 8) )
          goto LABEL_60;
      }
      if ( v39 < *(_DWORD *)(a1 + 372) )
      {
        sub_BB7E40((_QWORD *)(a1 + 408), (unsigned int *)v88);
        v42 = 4LL * v39;
        sub_BB7E40((_QWORD *)(a1 + 416), (unsigned int *)(v42 + *(_QWORD *)(a1 + 400)));
        v40 = *(_QWORD *)(a1 + 400);
      }
      else
      {
        v42 = 4LL * v39;
      }
      *(_DWORD *)(v40 + v42) = v76;
      v43 = *(_QWORD **)(a1 + 384);
      if ( v43 )
      {
        v44 = *((unsigned int *)v43 - 1);
        if ( (_DWORD)v44 == *((_DWORD *)v43 - 2) )
        {
          v52 = (unsigned int)(3 * v44 + 1) >> 1;
          v72 = v52;
          v53 = 32 * v52 + 8;
          if ( 32 * (int)v44 + 8 >= v53 || (unsigned int)v44 >= v52 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_154526(v92.m128i_i64, "Overflow encountered when expanding vector", v5);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v92);
            sub_233E40((__int64)&v92);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v54 = sub_186B270(v53);
          v55 = *(__m128i **)(a1 + 384);
          v74 = (_DWORD *)v54;
          v43 = (_QWORD *)(v54 + 8);
          v56 = (__int64 *)v55;
          if ( v55 )
          {
            v57 = v55[-1].m128i_u32[3];
            v58 = v54 + 8;
            *(_DWORD *)(v54 + 4) = v57;
            v59 = v55;
            v60 = &v55[2 * v57];
            if ( v60 != v55 )
            {
              do
              {
                v61 = _mm_loadu_si128(v59);
                v59->m128i_i64[0] = 0;
                v59 += 2;
                v58 += 32;
                *(__m128i *)(v58 - 32) = v61;
                *(_DWORD *)(v58 - 16) = v59[-1].m128i_i32[0];
                *(_QWORD *)(v58 - 8) = v59[-1].m128i_i64[1];
              }
              while ( v59 != v60 );
            }
            v62 = v55[-1].m128i_u32[3];
            m128i_i64 = v55[2 * v62].m128i_i64;
            if ( (_DWORD)v62 )
            {
              do
              {
                v63 = v56[1];
                v64 = *v56;
                v56 += 4;
                sub_BB0560(v64, v63);
              }
              while ( m128i_i64 != v56 );
              v55 = *(__m128i **)(a1 + 384);
            }
            sub_186B220(&v55[-1].m128i_u64[1]);
          }
          else
          {
            *(_DWORD *)(v54 + 4) = 0;
          }
          *(_QWORD *)(a1 + 384) = v43;
          *v74 = v72;
          v44 = (unsigned int)v74[1];
        }
      }
      else
      {
        v69 = (_QWORD *)sub_186B270(0x48u);
        v43 = v69 + 1;
        *v69 = 2;
        v44 = 0;
        *(_QWORD *)(a1 + 384) = v43;
      }
      v45 = v81.m128i_i64[0];
      v46 = (__m128i *)&v43[4 * v44];
      v47 = (__m128i)v81.m128i_u64[0];
      v46[1].m128i_i32[0] = v80;
      v46[1].m128i_i64[1] = v30;
      *v46 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, v47);
      ++*((_DWORD *)v43 - 1);
      v48 = v45;
      ++*(_DWORD *)(a1 + 368);
      sub_BB0560(0, v45);
      v49 = v8;
      v13 = nullptr;
      sub_BB0560(v49, v48);
      sub_BB0560(v90.m128_i64[0], v90.m128_i64[1]);
    }
    sub_BB0560(v87.m128i_i64[0], v87.m128i_i64[1]);
    sub_BB0560(v86.m128i_i64[0], v86.m128i_i64[1]);
    return sub_BB0560((__int64)v13, v81.m128i_i64[1]);
  }
  return result;
}

