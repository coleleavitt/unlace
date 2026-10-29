__int64 __fastcall sub_EC4EF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // r13
  int v7; // eax
  unsigned __int64 v8; // r15
  __int64 v9; // r13
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int16 v12; // bp
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rax
  _BYTE *v17; // r8
  _BYTE *v18; // rbp
  _BYTE *v19; // r14
  __int64 v20; // rsi
  int v21; // edi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r9
  __int32 v26; // r11d
  __m128i *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int32 v40; // r15d
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rsi
  __int64 v46; // rdi
  int v47; // esi
  __int64 v48; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rsi
  __int64 v53; // rsi
  __int64 v54; // rdx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r15
  unsigned __int64 v57; // rsi
  __int64 v58; // rdi
  __m128i *v59; // rax
  __m128i v60; // xmm0
  unsigned __int64 v61; // rdx
  const __m128i *v62; // rax
  __int64 v63; // rdx
  unsigned __int64 v64; // r15
  unsigned __int64 v65; // rdx
  __m128i *v66; // rcx
  const __m128i *v67; // rax
  __int64 v68; // rdx
  unsigned __int64 v69; // r15
  unsigned __int64 v70; // rdx
  __m128i *v71; // rcx
  const __m128i *v72; // rax
  __int32 v73; // edx
  unsigned __int64 v74; // rdx
  const __m128i *v75; // rcx
  __int64 v76; // rdx
  unsigned __int64 v77; // r15
  unsigned __int64 v78; // rdx
  __m128i *v79; // rcx
  const __m128i *v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rcx
  unsigned __int64 v84; // rax
  __int64 v85; // rdx
  unsigned __int64 v86; // rsi
  const __m128i *v87; // rax
  __m128i *v88; // rdx
  __int64 v89; // rsi
  __int64 v90; // rsi
  __int64 v91; // rsi
  __int64 v92; // rsi
  __int64 v93; // rsi
  unsigned __int64 v94; // r15
  __int64 v95; // rsi
  __int64 v96; // [rsp+8h] [rbp-230h]
  int v97; // [rsp+10h] [rbp-228h] BYREF
  __int64 v98; // [rsp+18h] [rbp-220h]
  __m128i si128; // [rsp+20h] [rbp-218h]
  __int32 v100; // [rsp+30h] [rbp-208h]
  __int64 v101; // [rsp+38h] [rbp-200h]
  __int64 v102; // [rsp+40h] [rbp-1F8h]
  _UNKNOWN **v103; // [rsp+50h] [rbp-1E8h] BYREF
  _BYTE *v104; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 v105; // [rsp+60h] [rbp-1D8h]
  _BYTE v106[384]; // [rsp+68h] [rbp-1D0h] BYREF
  __int64 v107; // [rsp+1E8h] [rbp-50h]
  unsigned __int64 v108; // [rsp+1F0h] [rbp-48h]

  v5 = *(unsigned int *)(a2 + 16);
  v6 = a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32;
  v7 = sub_BFBE70(a2);
  if ( v7 == 1008 )
  {
    v8 = v5 - 2;
    v9 = v6 + 16;
    v10 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
  }
  else
  {
    if ( v7 != 1009 )
      return sub_EC5B50(a2);
    v8 = v5 - 1;
    v9 = v6 + 8;
    v10 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  }
  v11 = sub_BFD550(v10);
  v12 = *(_WORD *)(v11 + 2);
  v13 = *(unsigned int *)(v11 + 4);
  v104 = v106;
  v14 = v11 + 4 * v13 + 20;
  v15 = *(_DWORD *)(v11 + 16) * ((v12 >> 6) & 7u);
  v107 = v9;
  v103 = &off_2B4C110;
  v105 = 0x400000000LL;
  v108 = v8;
  if ( v8 > 4 )
    sub_2237220(&v104, v106, v8, 96);
  sub_ECB4A0(&v103, v14, v14 + v15, a1[290], a1[2181], 0);
  v16 = (unsigned int)v105;
  v17 = v104;
  *(_DWORD *)(a3 + 8) = 0;
  v18 = &v17[96 * v16];
  if ( v17 != v18 )
  {
    v19 = v17;
    while ( 1 )
    {
      v28 = *((_QWORD *)v19 + 11);
      if ( v28 )
      {
        v55 = *(unsigned int *)(a3 + 8);
        v56 = *(_QWORD *)a3;
        v57 = *(unsigned int *)(a3 + 12);
        v58 = *((_QWORD *)v19 + 10);
        v59 = (__m128i *)(*(_QWORD *)a3 + 56 * v55);
        if ( v55 >= v57 )
        {
          v74 = v55 + 1;
          v102 = *((_QWORD *)v19 + 11);
          v75 = (const __m128i *)&v97;
          v97 = 7;
          v98 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
          v100 = 0;
          v101 = v58;
          if ( v57 < v74 )
          {
            v93 = a3 + 16;
            if ( v56 > (unsigned __int64)&v97 || v59 <= (__m128i *)&v97 )
            {
              sub_2237220(a3, v93, v74, 56);
              v75 = (const __m128i *)&v97;
              v59 = (__m128i *)(*(_QWORD *)a3 + 56LL * *(unsigned int *)(a3 + 8));
            }
            else
            {
              sub_2237220(a3, v93, v74, 56);
              v75 = (const __m128i *)((char *)&v97 + *(_QWORD *)a3 - v56);
              v59 = (__m128i *)(*(_QWORD *)a3 + 56LL * *(unsigned int *)(a3 + 8));
            }
          }
          *v59 = _mm_loadu_si128(v75);
          v59[1] = _mm_loadu_si128(v75 + 1);
          v59[2] = _mm_loadu_si128(v75 + 2);
          v59[3].m128i_i64[0] = v75[3].m128i_i64[0];
          ++*(_DWORD *)(a3 + 8);
        }
        else
        {
          v60 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
          v59->m128i_i32[0] = 7;
          v59->m128i_i64[1] = 0;
          v59[1] = v60;
          v59[2].m128i_i32[0] = 0;
          v59[2].m128i_i64[1] = v58;
          v59[3].m128i_i64[0] = v28;
          ++*(_DWORD *)(a3 + 8);
        }
      }
      if ( v19[64] )
      {
        v50 = sub_AAE980((__int64)a1, *(_QWORD *)(*((_QWORD *)v19 + 7) + 8LL));
        v51 = *(unsigned int *)(a3 + 8);
        v52 = *(unsigned int *)(a3 + 12);
        if ( v51 >= v52 )
        {
          v76 = *((_QWORD *)v19 + 7);
          si128.m128i_i64[1] = v50;
          v77 = *(_QWORD *)a3;
          v97 = 0;
          v98 = v76;
          v78 = v51 + 1;
          si128.m128i_i64[0] = 0;
          v79 = (__m128i *)(v77 + 56 * v51);
          v80 = (const __m128i *)&v97;
          v100 = 0;
          v101 = 0;
          v102 = 0;
          if ( v52 < v78 )
          {
            v92 = a3 + 16;
            if ( v77 > (unsigned __int64)&v97 || v79 <= (__m128i *)&v97 )
            {
              sub_2237220(a3, v92, v78, 56);
              v79 = (__m128i *)(*(_QWORD *)a3 + 56LL * *(unsigned int *)(a3 + 8));
              v80 = (const __m128i *)&v97;
            }
            else
            {
              sub_2237220(a3, v92, v78, 56);
              v80 = (const __m128i *)((char *)&v97 + *(_QWORD *)a3 - v77);
              v79 = (__m128i *)(*(_QWORD *)a3 + 56LL * *(unsigned int *)(a3 + 8));
            }
          }
          *v79 = _mm_loadu_si128(v80);
          v79[1] = _mm_loadu_si128(v80 + 1);
          v79[2] = _mm_loadu_si128(v80 + 2);
          v79[3].m128i_i64[0] = v80[3].m128i_i64[0];
          ++*(_DWORD *)(a3 + 8);
        }
        else
        {
          v53 = *((_QWORD *)v19 + 7);
          v54 = *(_QWORD *)a3 + 56 * v51;
          *(_DWORD *)v54 = 0;
          *(_QWORD *)(v54 + 8) = v53;
          *(_QWORD *)(v54 + 16) = 0;
          *(_QWORD *)(v54 + 24) = v50;
          *(_DWORD *)(v54 + 32) = 0;
          *(_QWORD *)(v54 + 40) = 0;
          *(_QWORD *)(v54 + 48) = 0;
          ++*(_DWORD *)(a3 + 8);
        }
      }
      if ( v19[48] )
      {
        v29 = sub_AAE980((__int64)a1, *(_QWORD *)(*((_QWORD *)v19 + 5) + 8LL));
        v30 = *(unsigned int *)(a3 + 8);
        v31 = *(unsigned int *)(a3 + 12);
        if ( v30 < v31 )
        {
          v32 = *((_QWORD *)v19 + 5);
          v33 = *(_QWORD *)a3 + 56 * v30;
          *(_DWORD *)v33 = 0;
          *(_QWORD *)(v33 + 8) = v32;
          *(_QWORD *)(v33 + 16) = 0;
          *(_QWORD *)(v33 + 24) = v29;
          *(_DWORD *)(v33 + 32) = 0;
          *(_QWORD *)(v33 + 40) = 0;
          *(_QWORD *)(v33 + 48) = 0;
          ++*(_DWORD *)(a3 + 8);
          if ( !v19[32] )
            goto LABEL_8;
          goto LABEL_20;
        }
        v63 = *((_QWORD *)v19 + 5);
        si128.m128i_i64[1] = v29;
        v64 = *(_QWORD *)a3;
        v97 = 0;
        v98 = v63;
        v65 = v30 + 1;
        si128.m128i_i64[0] = 0;
        v66 = (__m128i *)(v64 + 56 * v30);
        v67 = (const __m128i *)&v97;
        v100 = 0;
        v101 = 0;
        v102 = 0;
        if ( v31 < v65 )
        {
          v90 = a3 + 16;
          if ( v64 > (unsigned __int64)&v97 || v66 <= (__m128i *)&v97 )
          {
            sub_2237220(a3, v90, v65, 56);
            v66 = (__m128i *)(*(_QWORD *)a3 + 56LL * *(unsigned int *)(a3 + 8));
            v67 = (const __m128i *)&v97;
          }
          else
          {
            sub_2237220(a3, v90, v65, 56);
            v67 = (const __m128i *)((char *)&v97 + *(_QWORD *)a3 - v64);
            v66 = (__m128i *)(*(_QWORD *)a3 + 56LL * *(unsigned int *)(a3 + 8));
          }
        }
        *v66 = _mm_loadu_si128(v67);
        v66[1] = _mm_loadu_si128(v67 + 1);
        v66[2] = _mm_loadu_si128(v67 + 2);
        v66[3].m128i_i64[0] = v67[3].m128i_i64[0];
        ++*(_DWORD *)(a3 + 8);
      }
      if ( !v19[32] )
        goto LABEL_8;
LABEL_20:
      v34 = sub_AAE980((__int64)a1, *(_QWORD *)(*((_QWORD *)v19 + 3) + 8LL));
      v35 = *(unsigned int *)(a3 + 8);
      v36 = *(unsigned int *)(a3 + 12);
      if ( v35 < v36 )
      {
        v37 = *((_QWORD *)v19 + 3);
        v38 = *(_QWORD *)a3 + 56 * v35;
        *(_DWORD *)v38 = 1;
        *(_QWORD *)(v38 + 8) = v37;
        *(_QWORD *)(v38 + 16) = 0;
        *(_QWORD *)(v38 + 24) = v34;
        *(_DWORD *)(v38 + 32) = 0;
        *(_QWORD *)(v38 + 40) = 0;
        *(_QWORD *)(v38 + 48) = 0;
        ++*(_DWORD *)(a3 + 8);
        if ( !v19[20] )
          goto LABEL_9;
        goto LABEL_22;
      }
      v68 = *((_QWORD *)v19 + 3);
      si128.m128i_i64[1] = v34;
      v69 = *(_QWORD *)a3;
      v97 = 1;
      v98 = v68;
      v70 = v35 + 1;
      si128.m128i_i64[0] = 0;
      v71 = (__m128i *)(v69 + 56 * v35);
      v72 = (const __m128i *)&v97;
      v100 = 0;
      v101 = 0;
      v102 = 0;
      if ( v36 < v70 )
      {
        v91 = a3 + 16;
        if ( v69 > (unsigned __int64)&v97 || v71 <= (__m128i *)&v97 )
        {
          sub_2237220(a3, v91, v70, 56);
          v71 = (__m128i *)(*(_QWORD *)a3 + 56LL * *(unsigned int *)(a3 + 8));
          v72 = (const __m128i *)&v97;
        }
        else
        {
          sub_2237220(a3, v91, v70, 56);
          v72 = (const __m128i *)((char *)&v97 + *(_QWORD *)a3 - v69);
          v71 = (__m128i *)(*(_QWORD *)a3 + 56LL * *(unsigned int *)(a3 + 8));
        }
      }
      *v71 = _mm_loadu_si128(v72);
      v71[1] = _mm_loadu_si128(v72 + 1);
      v71[2] = _mm_loadu_si128(v72 + 2);
      v71[3].m128i_i64[0] = v72[3].m128i_i64[0];
      ++*(_DWORD *)(a3 + 8);
LABEL_8:
      if ( !v19[20] )
        goto LABEL_9;
LABEL_22:
      v39 = *((unsigned int *)v19 + 4);
      v40 = (unsigned __int8)v19[72];
      if ( *(_DWORD *)(a3 + 12) <= *(_DWORD *)(a3 + 8) )
      {
        v81 = a1[2340];
        si128.m128i_i64[0] = *((unsigned int *)v19 + 4);
        v97 = 1;
        v98 = 0;
        v82 = sub_AAE980((__int64)a1, v81);
        v83 = *(unsigned int *)(a3 + 8);
        v100 = v40;
        si128.m128i_i64[1] = v82;
        v84 = *(unsigned int *)(a3 + 12);
        v101 = 0;
        v85 = v83 + 1;
        v102 = 0;
        if ( v83 + 1 > v84 )
        {
          v94 = *(_QWORD *)a3;
          v95 = a3 + 16;
          if ( *(_QWORD *)a3 > (unsigned __int64)&v97 || (unsigned __int64)&v97 >= v94 + 56 * v83 )
          {
            sub_2237220(a3, v95, v85, 56);
            v86 = *(_QWORD *)a3;
            v83 = *(unsigned int *)(a3 + 8);
            v87 = (const __m128i *)&v97;
          }
          else
          {
            sub_2237220(a3, v95, v85, 56);
            v86 = *(_QWORD *)a3;
            v83 = *(unsigned int *)(a3 + 8);
            v87 = (const __m128i *)((char *)&v97 + *(_QWORD *)a3 - v94);
          }
        }
        else
        {
          v86 = *(_QWORD *)a3;
          v87 = (const __m128i *)&v97;
        }
        v88 = (__m128i *)(v86 + 56 * v83);
        *v88 = _mm_loadu_si128(v87);
        v88[1] = _mm_loadu_si128(v87 + 1);
        v88[2] = _mm_loadu_si128(v87 + 2);
        v88[3].m128i_i64[0] = v87[3].m128i_i64[0];
        ++*(_DWORD *)(a3 + 8);
LABEL_9:
        v20 = *(_QWORD *)v19;
        if ( !v19[12] )
          goto LABEL_24;
LABEL_10:
        v21 = *((_DWORD *)v19 + 2);
        v22 = 0;
        if ( v21 != 6 )
        {
          v22 = sub_AAE980((__int64)a1, *(_QWORD *)(v20 + 8));
          v21 = *((_DWORD *)v19 + 2);
          v20 = *(_QWORD *)v19;
        }
        v23 = *(unsigned int *)(a3 + 8);
        v24 = *(_QWORD *)a3;
        v25 = *(unsigned int *)(a3 + 12);
        v26 = (unsigned __int8)v19[72];
        v27 = (__m128i *)(*(_QWORD *)a3 + 56 * v23);
        if ( v23 >= v25 )
        {
          v61 = v23 + 1;
          si128.m128i_i64[1] = v22;
          v62 = (const __m128i *)&v97;
          v97 = v21;
          v98 = v20;
          si128.m128i_i64[0] = 0;
          v100 = v26;
          v101 = 0;
          v102 = 0;
          if ( v25 >= v61 )
          {
LABEL_37:
            *v27 = _mm_loadu_si128(v62);
            v27[1] = _mm_loadu_si128(v62 + 1);
            v27[2] = _mm_loadu_si128(v62 + 2);
            v27[3].m128i_i64[0] = v62[3].m128i_i64[0];
            ++*(_DWORD *)(a3 + 8);
            goto LABEL_14;
          }
          v89 = a3 + 16;
          if ( v24 <= (unsigned __int64)&v97 && v27 > (__m128i *)&v97 )
          {
LABEL_53:
            sub_2237220(a3, v89, v61, 56);
            v62 = (const __m128i *)((char *)&v97 + *(_QWORD *)a3 - v24);
            v27 = (__m128i *)(*(_QWORD *)a3 + 56LL * *(unsigned int *)(a3 + 8));
            goto LABEL_37;
          }
LABEL_54:
          sub_2237220(a3, v89, v61, 56);
          v27 = (__m128i *)(*(_QWORD *)a3 + 56LL * *(unsigned int *)(a3 + 8));
          v62 = (const __m128i *)&v97;
          goto LABEL_37;
        }
        v27->m128i_i32[0] = v21;
        v27->m128i_i64[1] = v20;
        v27[1].m128i_i64[0] = 0;
        v27[1].m128i_i64[1] = v22;
        v27[2].m128i_i32[0] = v26;
        v27[2].m128i_i64[1] = 0;
        v27[3].m128i_i64[0] = 0;
        ++*(_DWORD *)(a3 + 8);
LABEL_14:
        v19 += 96;
        if ( v18 == v19 )
          goto LABEL_26;
      }
      else
      {
        v41 = *(_QWORD *)a3 + 56LL * *(unsigned int *)(a3 + 8);
        *(_DWORD *)v41 = 1;
        *(_QWORD *)(v41 + 8) = 0;
        *(_QWORD *)(v41 + 16) = v39;
        v96 = v41;
        v42 = sub_AAE980((__int64)a1, a1[2340]);
        v20 = *(_QWORD *)v19;
        *(_QWORD *)(v96 + 24) = v42;
        *(_DWORD *)(v96 + 32) = v40;
        *(_QWORD *)(v96 + 40) = 0;
        *(_QWORD *)(v96 + 48) = 0;
        ++*(_DWORD *)(a3 + 8);
        if ( v19[12] )
          goto LABEL_10;
LABEL_24:
        v43 = sub_AAE980((__int64)a1, *(_QWORD *)(v20 + 8));
        v44 = *(unsigned int *)(a3 + 8);
        v45 = *(unsigned int *)(a3 + 12);
        v46 = *(_QWORD *)v19;
        if ( v44 >= v45 )
        {
          v73 = (unsigned __int8)v19[72];
          si128.m128i_i64[1] = v43;
          v24 = *(_QWORD *)a3;
          v98 = v46;
          v100 = v73;
          v61 = v44 + 1;
          v97 = 0;
          v27 = (__m128i *)(v24 + 56 * v44);
          v62 = (const __m128i *)&v97;
          si128.m128i_i64[0] = 0;
          v101 = 0;
          v102 = 0;
          if ( v45 >= v61 )
            goto LABEL_37;
          v89 = a3 + 16;
          if ( v24 <= (unsigned __int64)&v97 && v27 > (__m128i *)&v97 )
            goto LABEL_53;
          goto LABEL_54;
        }
        v47 = (unsigned __int8)v19[72];
        v19 += 96;
        v48 = *(_QWORD *)a3 + 56 * v44;
        *(_DWORD *)v48 = 0;
        *(_QWORD *)(v48 + 8) = v46;
        *(_QWORD *)(v48 + 16) = 0;
        *(_QWORD *)(v48 + 24) = v43;
        *(_DWORD *)(v48 + 32) = v47;
        *(_QWORD *)(v48 + 40) = 0;
        *(_QWORD *)(v48 + 48) = 0;
        ++*(_DWORD *)(a3 + 8);
        if ( v18 == v19 )
        {
LABEL_26:
          v18 = v104;
          break;
        }
      }
    }
  }
  v103 = &off_2B4C110;
  if ( v18 != v106 )
    free(v18);
  nullsub_479();
  return 1;
}
