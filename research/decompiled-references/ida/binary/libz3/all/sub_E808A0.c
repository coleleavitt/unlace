__int64 __fastcall sub_E808A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // eax
  bool v6; // cc
  __int64 v7; // r15
  unsigned int v8; // r12d
  __int64 v9; // rsi
  int v10; // edx
  __int64 result; // rax
  unsigned int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // r13d
  __int64 v32; // r12
  __int64 v33; // r15
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // rdx
  __int64 v37; // rax
  __int64 *v38; // r15
  __int64 v39; // rsi
  __int64 v40; // rdi
  __m128 v41; // xmm1
  __int64 v42; // rsi
  __m128 v43; // xmm5
  __m128 v44; // xmm0
  __m128 v45; // xmm5
  __int64 *v46; // r15
  __int64 *v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdi
  __m128 v50; // xmm2
  __int64 v51; // rsi
  __m128i v52; // xmm4
  __m128 v53; // xmm6
  __m128 v54; // xmm7
  __m128 v55; // xmm4
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // r12
  __int64 v59; // rsi
  __int64 *v60; // r13
  __int64 v61; // rsi
  __int64 v62; // r13
  __int64 v63; // rax
  __int64 v64; // r13
  __int64 v65; // rax
  __int64 v66; // r13
  __int64 v67; // rax
  _QWORD *v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rdi
  __m128 v71; // xmm3
  __int64 v72; // rax
  __m128 v73; // xmm0
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 *v76; // r15
  unsigned __int64 v77; // r13
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 v80; // rax
  int v81; // r15d
  int v82; // ebx
  __int64 v83; // rax
  __int64 v84; // rdx
  unsigned int v85; // edx
  __int64 v86; // rax
  __int64 v87; // rdi
  __int64 v88; // [rsp+0h] [rbp-110h]
  __int64 *v89; // [rsp+8h] [rbp-108h]
  __int64 v90; // [rsp+10h] [rbp-100h]
  int v91; // [rsp+28h] [rbp-E8h]
  __int64 *v92; // [rsp+30h] [rbp-E0h]
  __int64 *v93; // [rsp+30h] [rbp-E0h]
  __int64 v94; // [rsp+38h] [rbp-D8h] BYREF
  __m128 v95; // [rsp+40h] [rbp-D0h] BYREF
  __int64 v96; // [rsp+50h] [rbp-C0h]
  __int64 v97; // [rsp+58h] [rbp-B8h] BYREF
  __m128 v98; // [rsp+60h] [rbp-B0h] BYREF
  __m128 si128; // [rsp+70h] [rbp-A0h] BYREF
  __m128i v100; // [rsp+80h] [rbp-90h] BYREF
  __int64 v101; // [rsp+90h] [rbp-80h] BYREF
  __int64 v102; // [rsp+98h] [rbp-78h] BYREF
  __m128i v103; // [rsp+A0h] [rbp-70h] BYREF
  __m128i v104; // [rsp+B0h] [rbp-60h] BYREF
  __m128 v105; // [rsp+C0h] [rbp-50h] BYREF
  _OWORD v106[4]; // [rsp+D0h] [rbp-40h] BYREF

  v4 = a3;
  v5 = *(_DWORD *)(a2 + 20);
  v6 = *(_DWORD *)(a3 + 8) <= 0x3Fu;
  v96 = a2;
  v91 = v5;
  if ( v6 )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v96 + 24);
    v80 = *(_QWORD *)(a1 + 160);
    if ( v80 )
      v81 = *(_DWORD *)(v80 - 4);
    else
      v81 = 0;
    if ( v91 )
    {
      si128.m128_u64[0] = v4;
      v82 = 0;
      v100.m128i_i64[1] = v96;
      while ( 1 )
      {
        if ( !v80 || (v85 = *(_DWORD *)(v80 - 4), v85 == *(_DWORD *)(v80 - 8)) )
        {
          sub_23A6F0((unsigned int **)(a1 + 160));
          v80 = *(_QWORD *)(a1 + 160);
          v85 = *(_DWORD *)(v80 - 4);
        }
        *(_QWORD *)(v80 + 8LL * v85) = 0;
        *(_DWORD *)(v80 - 4) = v85 + 1;
        v83 = *(_QWORD *)(a1 + 528);
        if ( !v83 || (v84 = *(unsigned int *)(v83 - 4), (_DWORD)v84 == *(_DWORD *)(v83 - 8)) )
        {
          ++v82;
          sub_2FD3F0((unsigned int **)(a1 + 528));
          v86 = *(_QWORD *)(a1 + 528);
          *(_DWORD *)(v86 + 4LL * (unsigned int)(*(_DWORD *)(v86 - 4))++) = v81;
          if ( v82 == v91 )
          {
LABEL_72:
            v4 = si128.m128_u64[0];
            v96 = v100.m128i_i64[1];
            break;
          }
        }
        else
        {
          ++v82;
          *(_DWORD *)(v83 + 4 * v84) = v81;
          ++*(_DWORD *)(v83 - 4);
          if ( v82 == v91 )
            goto LABEL_72;
        }
        v80 = *(_QWORD *)(a1 + 160);
      }
    }
    *(_DWORD *)(a1 + 128) += v91;
  }
  v7 = v96;
  v8 = *(_DWORD *)(v96 + 76) + *(_DWORD *)(v96 + 72) + 1;
  while ( 1 )
  {
    v12 = *(_DWORD *)(v4 + 8) >> 6;
    if ( v12 >= v8 )
      break;
    if ( v12 )
    {
      v13 = *(_DWORD *)(v7 + 72);
      v14 = v12 - 1;
      if ( v13 < v12 )
        v15 = v7 + 8LL * ((unsigned int)v14 - v13);
      else
        v15 = v7 + 8 * v14;
      v9 = *(_QWORD *)(16LL * *(unsigned int *)(v7 + 20) + v15 + 80);
    }
    else
    {
      v9 = *(_QWORD *)(v7 + 24);
    }
    v10 = ((v12 + 1) << 6) | *(_DWORD *)(v4 + 8) & 0x3F;
    *(_DWORD *)(v4 + 8) = v10;
    result = sub_E74CC0(a1, v9, ((unsigned __int8)v10 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v28 = *(unsigned int *)(v4 + 12);
  v29 = *(_QWORD *)(a1 + 56);
  v30 = v7;
  v96 = v7;
  v31 = *(_DWORD *)(v7 + 72);
  v32 = *(unsigned int *)(v7 + 76);
  v33 = v7 + 80;
  v103.m128i_i64[1] = 0;
  v34 = (__int64 *)(v29 + 8 * v28);
  v35 = *(unsigned int *)(v30 + 20);
  v89 = v34;
  v90 = *v34;
  v103.m128i_i64[0] = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v103, v31, (__int64 *)(v33 + 16 * v35));
  v104.m128i_i64[1] = 0;
  v97 = v103.m128i_i64[1];
  v94 = v103.m128i_i64[0];
  v36 = (__int64 *)(v33 + 16LL * *(unsigned int *)(v96 + 20));
  v104.m128i_i64[0] = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v104, v32, v36);
  v100 = v104;
  v37 = v31;
  v88 = v31;
  if ( v31 )
  {
    v31 = 0;
    v38 = v89;
    v92 = &v89[v37];
    v95 = _mm_loadh_ps((const double *)&v97);
    do
    {
      while ( 1 )
      {
        v39 = v38[1];
        v40 = *(_QWORD *)(a1 + 8);
        v41 = _mm_loadh_ps((const double *)&v100.m128i_i64[1]);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v95);
        v98 = v41;
        if ( (unsigned __int8)sub_15D3190(v40, v39) )
          break;
        if ( ++v38 == v92 )
          goto LABEL_36;
      }
      v42 = v38[1];
      v43 = _mm_loadh_ps((const double *)&v100.m128i_i64[1]);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v95);
      v44 = _mm_loadh_ps((const double *)&v94);
      v98 = v43;
      v105 = v44;
      sub_E65C70((__int64 **)&v105, v42);
      ++v38;
      ++v31;
    }
    while ( v38 != v92 );
  }
LABEL_36:
  v45 = _mm_loadh_ps((const double *)&v100.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v97);
  v98 = v45;
  sub_39BEE0(v103.m128i_i64, v31);
  if ( (_DWORD)v32 )
  {
    v46 = &v89[v88];
    v47 = &v89[v88 + v32];
    v32 = 0;
    v93 = v47;
    v95 = _mm_loadh_ps((const double *)&v97);
    do
    {
      while ( 1 )
      {
        v48 = v46[1];
        v49 = *(_QWORD *)(a1 + 8);
        v50 = _mm_loadh_ps((const double *)&v100.m128i_i64[1]);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v95);
        v98 = v50;
        if ( (unsigned __int8)sub_15D3190(v49, v48) )
          break;
        if ( ++v46 == v93 )
          goto LABEL_41;
      }
      v51 = v46[1];
      v52 = _mm_loadl_epi64(&v100);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v95);
      v53 = _mm_loadh_ps((const double *)&v100.m128i_i64[1]);
      v106[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v100.m128i_i64[1] + 8 * v32), v52);
      v98 = v53;
      sub_E65C70((__int64 **)v106, v51);
      ++v46;
      v32 = (unsigned int)(v32 + 1);
    }
    while ( v46 != v93 );
  }
LABEL_41:
  v54 = _mm_loadh_ps((const double *)&v100.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v97);
  v98 = v54;
  sub_39BEE0(v104.m128i_i64, v32);
  v55 = _mm_loadh_ps((const double *)&v100.m128i_i64[1]);
  v95.m128_u64[0] = *(_QWORD *)(a1 + 8);
  si128 = _mm_loadh_ps((const double *)&v97);
  v98 = v55;
  v56 = sub_15DBA30(v95.m128_i32[0], v96, v31, v97, v32, v100.m128i_i32[2], v90);
  v57 = *(_QWORD *)(a1 + 496);
  v58 = v56;
  v59 = *(_QWORD *)(a1 + 504);
  if ( !v56 )
  {
    sub_E65BA0(v57, v59);
    *(_QWORD *)(a1 + 496) = 0;
LABEL_43:
    v61 = *(_QWORD *)(a1 + 504);
    v62 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(v4 + 12));
    if ( v62 )
    {
      ++*(_DWORD *)(v62 + 8);
      sub_E65BA0(0, v61);
      *(_QWORD *)(a1 + 496) = v62;
      v63 = sub_15DE700(*(_QWORD *)(a1 + 8));
      v64 = v63;
      if ( v63 )
        ++*(_DWORD *)(v63 + 8);
      sub_E65BA0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
      *(_QWORD *)(a1 + 496) = v64;
      v65 = sub_15DE750(*(_QWORD *)(a1 + 8));
    }
    else
    {
      sub_E65BA0(0, v61);
      v87 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 496) = 0;
      v65 = sub_15DE370(v87);
    }
    v66 = v65;
    if ( v65 )
      ++*(_DWORD *)(v65 + 8);
    sub_E65BA0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
    *(_QWORD *)(a1 + 496) = v66;
    v60 = (__int64 *)(a1 + 480);
    if ( !v58 )
      goto LABEL_51;
    goto LABEL_50;
  }
  ++*(_DWORD *)(v56 + 8);
  sub_E65BA0(v57, v59);
  *(_QWORD *)(a1 + 496) = 0;
  v60 = (__int64 *)(a1 + 480);
  if ( v96 != v58 )
    goto LABEL_43;
LABEL_50:
  ++*(_DWORD *)(v58 + 8);
LABEL_51:
  sub_E65BC0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  v67 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 480) = v58;
  *(_QWORD *)&v106[0] = 0;
  v68 = *(_QWORD **)(a1 + 144);
  *((_QWORD *)&v106[0] + 1) = v67;
  si128 = _mm_loadh_ps((const double *)&v97);
  v98 = _mm_loadh_ps((const double *)&v100.m128i_i64[1]);
  sub_E671C0(v68, v58, v90, v97, v100.m128i_i32[2], v60, (__int64 *)v106);
  v69 = *(_QWORD *)(a1 + 496);
  v70 = *(_QWORD *)(a1 + 8);
  v71 = _mm_loadh_ps((const double *)&v100.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v97);
  v98 = v71;
  v72 = sub_15E2470(v70, v69, *(_QWORD *)&v106[0]);
  v73 = _mm_loadh_ps((const double *)&v100.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v97);
  v98 = v73;
  if ( v72 )
    ++*(_DWORD *)(v72 + 8);
  v74 = *(_QWORD *)(a1 + 504);
  v75 = *(_QWORD *)(a1 + 496);
  v100.m128i_i64[1] = v72;
  sub_E65BA0(v75, v74);
  v17 = v100.m128i_i64[1];
  v16 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 496) = v100.m128i_i64[1];
  if ( v16 )
  {
    v76 = (__int64 *)(v16 + 8LL * *(unsigned int *)(v4 + 12));
    v77 = v16 + 8LL * *(unsigned int *)(v16 - 4);
    v100.m128i_i32[2] = *(_DWORD *)(v4 + 12);
    if ( (unsigned __int64)v76 >= v77 )
      goto LABEL_12;
    do
    {
      v78 = *v76;
      if ( *v76 )
      {
        v79 = *(_QWORD *)(a1 + 80);
        v18 = (*(_DWORD *)(v78 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v79, v78);
      }
      ++v76;
    }
    while ( (unsigned __int64)v76 < v77 );
    v16 = *(_QWORD *)(a1 + 88);
    v17 = *(_QWORD *)(a1 + 496);
    if ( v16 )
LABEL_12:
      *(_DWORD *)(v16 - 4) = v100.m128i_i32[2];
  }
  v101 = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  sub_E66670((_QWORD *)(a1 + 88), &v101);
  sub_E65BA0(*(__int64 *)&v106[0], *((__int64 *)&v106[0] + 1));
  if ( v58 )
  {
    v18 = (*(_DWORD *)(v58 + 8))-- == 1;
    if ( v18 )
      sub_15D7BC0(v95.m128_u64[0], v58);
  }
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(v4 + 12));
  v19 = *(_QWORD *)(a1 + 480);
  v102 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  sub_E67160((unsigned int **)(a1 + 56), &v102);
  v20 = *(_QWORD *)(a1 + 160);
  if ( v20 )
    *(_DWORD *)(v20 - 4) -= v91;
  v21 = *(_QWORD *)(a1 + 528);
  if ( v21 )
    *(_DWORD *)(v21 - 4) -= v91;
  sub_15844D0(a1);
  v22 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, v96, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
    v22 = *(_QWORD *)(a1 + 480);
  }
  sub_E65BC0(v22, *(_QWORD *)(a1 + 488));
  v23 = *(_QWORD *)(a1 + 504);
  v24 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_E65BA0(v24, v23);
  v25 = *(_QWORD *)(a1 + 40);
  v26 = v96;
  *(_QWORD *)(a1 + 496) = 0;
  v27 = *(_DWORD *)(v25 - 4);
  *(_DWORD *)(v25 - 4) = v27 - 1;
  if ( *(_QWORD *)(a1 + 480) != v26 && v27 != 1 )
    *(_BYTE *)(v25 + 16LL * (unsigned int)(v27 - 2) + 8) |= 2u;
  v104 = _mm_load_si128((const __m128i *)&v98);
  sub_2334C0(v104.m128i_i64);
  v103 = _mm_load_si128((const __m128i *)&si128);
  return sub_2334C0(v103.m128i_i64);
}

