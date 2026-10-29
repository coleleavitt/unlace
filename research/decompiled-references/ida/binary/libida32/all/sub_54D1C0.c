unsigned __int64 __fastcall sub_54D1C0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 *v11; // r15
  char v12; // al
  __int64 v13; // r9
  __int64 v14; // r8
  __m128i v15; // xmm0
  unsigned __int64 v16; // r13
  int v17; // ecx
  int v18; // r12d
  __int64 v19; // rbp
  __m128i v20; // xmm1
  int v21; // r14d
  __int64 v22; // rbx
  unsigned __int64 v23; // rsi
  __int64 v24; // r15
  __int64 *v25; // r13
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 *v28; // rbx
  __int64 v29; // r12
  __m128i si128; // xmm3
  __int64 v31; // rax
  unsigned int v32; // ebp
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __m128 v36; // xmm2
  char v37; // al
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rbx
  unsigned int v40; // edx
  __int32 v41; // edx
  char v42; // al
  __int32 v43; // edx
  unsigned __int64 v44; // rsi
  char v45; // al
  __int64 v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // r11
  unsigned __int64 v50; // rcx
  int v51; // r8d
  char v52; // bp
  _DWORD *v53; // r10
  unsigned __int64 v54; // r11
  __int64 v55; // rdi
  unsigned __int64 v56; // r8
  char v57; // al
  char v58; // al
  __int64 *v59; // rbx
  int v60; // r15d
  __int64 v61; // r12
  __int64 v62; // rax
  int v63; // r14d
  int v64; // edx
  __int64 v65; // rdx
  int *v66; // rcx
  int *v67; // rax
  int *v68; // rsi
  __int64 v69; // rcx
  int *v70; // rdx
  int *v71; // rax
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rbp
  unsigned __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rcx
  unsigned __int64 v78; // rdi
  unsigned __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rdx
  unsigned __int64 v82; // rax
  int v83; // edx
  unsigned __int8 v84; // al
  unsigned __int64 v85; // rdx
  __int64 v86; // rsi
  __int32 v87; // ebx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  __m128 v92; // [rsp+0h] [rbp-128h] BYREF
  __m128i v93; // [rsp+10h] [rbp-118h] BYREF
  __int64 v94; // [rsp+20h] [rbp-108h]
  unsigned __int64 v95; // [rsp+28h] [rbp-100h]
  __m128i v96; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v97; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v98; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v99; // [rsp+58h] [rbp-D0h]
  int v100; // [rsp+64h] [rbp-C4h]
  __int64 *v101; // [rsp+68h] [rbp-C0h]
  unsigned __int8 v102[4]; // [rsp+78h] [rbp-B0h] BYREF
  unsigned int v103; // [rsp+7Ch] [rbp-ACh] BYREF
  __m128i v104; // [rsp+80h] [rbp-A8h] BYREF
  __m128i v105; // [rsp+90h] [rbp-98h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-88h]
  __int64 v107; // [rsp+A8h] [rbp-80h]
  int v108; // [rsp+B0h] [rbp-78h]
  _OWORD v109[2]; // [rsp+C0h] [rbp-68h] BYREF
  unsigned __int64 v110; // [rsp+E8h] [rbp-40h]

  v11 = a1;
  v92.m128_u64[0] = a2;
  v94 = a3;
  v110 = __readfsqword(0x28u);
  v12 = getinf(62);
  v13 = v94;
  v14 = a2;
  if ( (v12 & 0xF8) == 0 )
  {
    v92.m128_u64[0] = v94;
    v94 = a2;
    v84 = getinf(62);
    v85 = a1[2];
    v86 = *a1;
    v87 = v84;
    v88 = a1[1];
    v14 = v94;
    v104.m128i_i32[0] = v87;
    v13 = v92.m128_u64[0];
    if ( v85 < v88 + 1 )
    {
      v89 = qvector_reserve(a1, v86, v88 + 1, 4);
      v13 = v92.m128_u64[0];
      v14 = v94;
      *a1 = v89;
      v86 = v89;
      v88 = a1[1];
    }
    *(_DWORD *)(v86 + 4 * v88) = v87;
    ++a1[1];
  }
  v15.m128i_i64[0] = 0;
  v16 = *(_QWORD *)(v14 + 24);
  v17 = 7;
  memset(v109, 0, sizeof(v109));
  do
    v18 = v17--;
  while ( v16 != ((v16 + (int)((1LL << v17) - 1)) & -(1 << v17)) );
  v19 = *(_QWORD *)(v14 + 8);
  v103 = 0;
  if ( v19 )
  {
    v20 = 0;
    v99 = v16;
    v21 = 0;
    v101 = a1;
    v22 = 0;
    v23 = 0;
    v24 = v14;
    v94 = 0;
    v25 = (__int64 *)v13;
    v95 = 0;
    v100 = v18;
    v92 = 0;
    while ( 1 )
    {
      v27 = 3 * v22;
      v28 = (__int64 *)(*(_QWORD *)v24 + (v22 << 7));
      v29 = 8 * v27;
      si128 = _mm_load_si128((const __m128i *)&v92);
      v107 = 0;
      v106 = v94;
      v31 = *v25;
      v108 = 0;
      v32 = *(_DWORD *)(v31 + v29 + 16);
      LOBYTE(v31) = *((_BYTE *)v28 + 64);
      v104 = si128;
      v105 = v20;
      if ( (v31 & 0xF) != 0xE )
        break;
      v33 = v28[1];
      v93 = v20;
      v102[1] = v33;
      v102[0] = v32;
      v102[2] = 0;
      v34 = sub_54C7D0((unsigned __int64 *)&v104, v102, v23, &v103);
      v35 = v106;
      v36 = (__m128)_mm_load_si128(&v104);
      v15 = _mm_load_si128(&v105);
      v20 = _mm_load_si128(&v93);
      v23 = v34;
LABEL_9:
      v37 = *(_BYTE *)(v24 + 51);
      if ( v37 )
      {
        v38 = v28[1];
        if ( v95 >= v38 )
          v38 = v95;
        v22 = ++v21;
        v95 = v38;
        if ( (unsigned __int64)v21 >= *(_QWORD *)(v24 + 8) )
        {
LABEL_13:
          v39 = (int)v103;
          v14 = v24;
          v16 = v99;
          v19 = v23;
          v18 = v100;
          v11 = v101;
          v40 = v103;
          goto LABEL_14;
        }
      }
      else
      {
        v26 = *v25;
        ++v21;
        v20 = v15;
        v92 = v36;
        v94 = v35;
        v22 = v21;
        v23 = *(_QWORD *)(v26 + v29 + 8);
        if ( (unsigned __int64)v21 >= *(_QWORD *)(v24 + 8) )
          goto LABEL_13;
      }
    }
    a11 = _mm_movehl_ps(a11, (__m128)_mm_load_si128((const __m128i *)&v92));
    v93.m128i_i64[0] = a11.m128_u64[0];
    if ( v20.m128i_i64[0] )
    {
      if ( !a11.m128_u64[0]
        || (v97.m128i_i64[0] = v23,
            v98 = v20.m128i_i64[0],
            v96 = v20,
            v57 = getinf(57),
            v20 = _mm_load_si128(&v96),
            v23 = v97.m128i_i64[0],
            (v57 & 0xF) == 6)
        || (v58 = getinf(67), v20 = _mm_load_si128(&v96), v23 = v97.m128i_i64[0], v58 < 0) )
      {
        v41 = 8;
      }
      else
      {
        v41 = v98;
      }
      v98 = v23;
      v96.m128i_i32[0] = v41;
      v97 = v20;
      v42 = getinf(57);
      v43 = v96.m128i_i32[0];
      v20 = _mm_load_si128(&v97);
      v44 = v98;
      if ( (v42 & 0xF) == 6
        || (v97 = v20, v45 = getinf(67), v43 = v96.m128i_i32[0], v20 = _mm_load_si128(&v97), v44 = v98, v45 < 0) )
      {
        v46 = v43 - 1;
        v47 = -v43;
      }
      else
      {
        if ( v93.m128i_i64[0] )
        {
          if ( v98 < v93.m128i_i64[0] )
          {
            if ( !under_debugger )
              interr(1138);
            BUG();
          }
          v46 = v96.m128i_i32[0] - 1;
          v47 = -v96.m128i_i32[0];
          v55 = v47 & ((int)v46 + v93.m128i_i64[0]);
          v56 = v55 + v98 - v93.m128i_i64[0];
          if ( v56 < v98 )
            sub_548C70(v55, v98, *(double *)v15.m128i_i64, *(double *)v20.m128i_i64);
        }
        else
        {
          v56 = v98;
          v46 = v96.m128i_i32[0] - 1;
          v47 = -v96.m128i_i32[0];
        }
        v44 = v56;
      }
      v93.m128i_i64[0] = 0;
      v23 = v47 & (v44 + v46);
    }
    v48 = v32;
    v36 = _mm_loadh_ps((const double *)v93.m128i_i64);
    v15 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)v32);
    if ( (int)v103 >= (unsigned __int64)v32 )
    {
      if ( !v32 )
      {
LABEL_33:
        v35 = v94;
        goto LABEL_9;
      }
    }
    else
    {
      v103 = v32;
    }
    v49 = *v28;
    v50 = 1;
    v51 = 1;
    v52 = 0;
    v53 = (_DWORD *)v109 + 1;
    do
    {
      if ( v49 == ((v23 + 8 * (int)v50 - 1) & (-8 * (int)v50)) )
      {
        ++*v53;
        v52 = 1;
      }
      v50 *= 2LL;
      ++v51;
      ++v53;
    }
    while ( v48 >= v50 && v51 != 8 );
    if ( !v52 )
    {
      v54 = (unsigned int)(v49 >> 3);
      if ( v54 % v48 )
      {
        while ( 1 )
        {
          if ( !(v54 % v48) )
          {
            if ( !(v48 >> 1) )
            {
              ++DWORD1(v109[0]);
              goto LABEL_33;
            }
            _BitScanReverse64(&v82, v48 >> 1);
            v83 = 65 - (v82 ^ 0x3F);
            if ( v83 <= 7 )
            {
              ++*((_DWORD *)v109 + v83);
              goto LABEL_33;
            }
          }
          v48 >>= 1;
        }
      }
    }
    goto LABEL_33;
  }
  v95 = 0;
  v37 = *(_BYTE *)(v14 + 51);
  v39 = 0;
  v40 = 0;
LABEL_14:
  if ( v37 )
  {
    if ( v16 == ((v16 + (int)(v40 - 1)) & -v40) )
      goto LABEL_16;
    v68 = (int *)*v11;
    v69 = v11[1];
    v70 = (int *)(*v11 + 4 * v69);
    if ( (int *)*v11 != v70 )
    {
      v71 = (int *)*v11;
      while ( *v71 != v18 )
      {
        if ( v70 == ++v71 )
          goto LABEL_61;
      }
      if ( v70 != v71 )
        goto LABEL_16;
    }
LABEL_61:
    if ( v11[2] < (unsigned __int64)(v69 + 1) )
    {
      v94 = v14;
      v90 = qvector_reserve(v11, v68, v69 + 1, 4);
      v91 = v11[1];
      v14 = v94;
      *v11 = v90;
      v70 = (int *)(v90 + 4 * v91);
    }
    *v70 = v18;
    ++v11[1];
  }
  else if ( v18 > 0 )
  {
    v94 = v19;
    v92.m128_u64[0] = v39;
    v59 = v11;
    v60 = v18;
    v61 = v14;
    while ( 1 )
    {
      v62 = 1;
      v63 = -1;
      v64 = 0;
      do
      {
        if ( v64 < *((_DWORD *)v109 + v62) )
        {
          v63 = v62;
          v64 = *((_DWORD *)v109 + v62);
        }
        ++v62;
      }
      while ( v60 >= (int)v62 );
      if ( v63 == -1 )
        break;
      v65 = v59[1];
      v66 = (int *)(*v59 + 4 * v65);
      if ( (int *)*v59 == v66 )
        goto LABEL_84;
      v67 = (int *)*v59;
      while ( *v67 != v63 )
      {
        if ( v66 == ++v67 )
          goto LABEL_84;
      }
      if ( v66 == v67 )
      {
LABEL_84:
        v79 = v65 + 1;
        if ( v59[2] < v79 )
        {
          v80 = qvector_reserve(v59, *v59, v79, 4);
          v81 = v59[1];
          *v59 = v80;
          v66 = (int *)(v80 + 4 * v81);
        }
        *v66 = v63;
        ++v59[1];
      }
      *((_DWORD *)v109 + v63) = 0;
    }
    v11 = v59;
    v19 = v94;
    v39 = v92.m128_u64[0];
    v14 = v61;
  }
  if ( *(_BYTE *)(v14 + 51) )
LABEL_16:
    v19 = v95;
  v72 = v11[5];
  v73 = v19 + 7;
  v74 = v73 >> 3;
  v75 = (int)v72 - 1;
  v76 = -*((_DWORD *)v11 + 10);
  if ( v73 <= 7 )
  {
    if ( v16 >= (v76 & (v16 + v75)) )
      goto LABEL_69;
    goto LABEL_67;
  }
  if ( v16 < (v76 & (v74 + v75)) )
  {
    do
    {
      v72 >>= 1;
      v75 = (int)v72 - 1;
      v76 = -(int)v72;
    }
    while ( v16 < (v76 & (v74 + v75)) );
    v11[5] = v72;
  }
  if ( v16 < (v76 & (v16 + v75)) )
  {
    do
LABEL_67:
      v72 >>= 1;
    while ( v16 < ((v16 + (int)v72 - 1) & -(int)v72) );
    v11[5] = v72;
    if ( v73 <= 7 )
      goto LABEL_69;
  }
  v78 = v11[4];
  if ( ((v74 + (int)v78 - 1) & -*((_DWORD *)v11 + 8)) < v16 && v78 < v72 )
  {
    do
      v78 *= 2LL;
    while ( ((v74 + (int)v78 - 1) & -(int)v78) < v16 && v78 < v72 );
    v11[4] = v78;
  }
LABEL_69:
  if ( v72 < v39 )
  {
    v11[3] = v72;
    *((_BYTE *)v11 + 52) = 1;
  }
  return v110 - __readfsqword(0x28u);
}

