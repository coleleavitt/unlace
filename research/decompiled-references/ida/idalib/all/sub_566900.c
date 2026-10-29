unsigned __int64 __fastcall sub_566900(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
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
  unsigned __int64 v19; // rax
  __m128i v20; // xmm1
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // r13d
  __int64 v24; // r14
  __int64 *v25; // r12
  __int64 v26; // rcx
  __m128i si128; // xmm3
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rbp
  char v31; // al
  unsigned int v32; // r15d
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __m128 v35; // xmm2
  unsigned __int64 v36; // rax
  char v37; // dl
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rbp
  unsigned int v40; // eax
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
  char v52; // r15
  _DWORD *v53; // r10
  unsigned __int64 v54; // r11
  __int64 v55; // rdi
  unsigned __int64 v56; // r8
  char v57; // al
  char v58; // al
  int v59; // r14d
  __int64 v60; // r12
  __int64 v61; // rax
  int v62; // ebx
  int v63; // edx
  __int64 v64; // rdx
  int *v65; // rcx
  int *v66; // rax
  _DWORD *v67; // rsi
  __int64 v68; // rcx
  int *v69; // rdx
  int *v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rbx
  __int64 v73; // rdx
  unsigned __int64 v74; // rsi
  __int64 v75; // rcx
  unsigned __int64 v77; // rdi
  unsigned __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  unsigned __int64 v81; // rax
  int v82; // edx
  unsigned __int8 v83; // al
  unsigned __int64 v84; // rdx
  __int64 v85; // rsi
  __int32 v86; // ebx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  __m128 v91; // [rsp+0h] [rbp-128h] BYREF
  __m128i v92; // [rsp+10h] [rbp-118h] BYREF
  unsigned __int64 v93; // [rsp+20h] [rbp-108h]
  unsigned __int64 v94; // [rsp+28h] [rbp-100h]
  __m128i v95; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v96; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v97; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v98; // [rsp+58h] [rbp-D0h]
  int v99; // [rsp+64h] [rbp-C4h]
  __int64 *v100; // [rsp+68h] [rbp-C0h]
  unsigned __int8 v101[4]; // [rsp+78h] [rbp-B0h] BYREF
  unsigned int v102; // [rsp+7Ch] [rbp-ACh] BYREF
  __m128i v103; // [rsp+80h] [rbp-A8h] BYREF
  __m128i v104; // [rsp+90h] [rbp-98h] BYREF
  unsigned __int64 v105; // [rsp+A0h] [rbp-88h]
  __int64 v106; // [rsp+A8h] [rbp-80h]
  int v107; // [rsp+B0h] [rbp-78h]
  _OWORD v108[2]; // [rsp+C0h] [rbp-68h] BYREF
  unsigned __int64 v109; // [rsp+E8h] [rbp-40h]

  v11 = a1;
  v91.m128_u64[0] = a2;
  v93 = a3;
  v109 = __readfsqword(0x28u);
  v12 = getinf(62);
  v13 = v93;
  v14 = a2;
  if ( (v12 & 0xF8) == 0 )
  {
    v91.m128_u64[0] = v93;
    v93 = a2;
    v83 = getinf(62);
    v84 = a1[2];
    v85 = *a1;
    v86 = v83;
    v87 = a1[1];
    v14 = v93;
    v103.m128i_i32[0] = v86;
    v13 = v91.m128_u64[0];
    if ( v84 < v87 + 1 )
    {
      v88 = qvector_reserve(a1, v85, v87 + 1, 4);
      v13 = v91.m128_u64[0];
      v14 = v93;
      *a1 = v88;
      v85 = v88;
      v87 = a1[1];
    }
    *(_DWORD *)(v85 + 4 * v87) = v86;
    ++a1[1];
  }
  v15.m128i_i64[0] = 0;
  v16 = *(_QWORD *)(v14 + 24);
  v17 = 7;
  memset(v108, 0, sizeof(v108));
  do
    v18 = v17--;
  while ( v16 != ((v16 + (int)((1LL << v17) - 1)) & -(1 << v17)) );
  v19 = *(_QWORD *)(v14 + 8);
  v102 = 0;
  v93 = v19;
  if ( v19 )
  {
    v20 = 0;
    v98 = v16;
    v21 = 0;
    v99 = v18;
    v22 = 0;
    v23 = 0;
    v24 = v14;
    v93 = 0;
    v25 = (__int64 *)v13;
    v94 = 0;
    v100 = a1;
    v91 = 0;
    while ( 1 )
    {
      si128 = _mm_load_si128((const __m128i *)&v91);
      v28 = *(_QWORD *)v24 + 144 * v22;
      v29 = *v25;
      v30 = 24 * v22;
      v31 = *(_BYTE *)(v28 + 64);
      v105 = v93;
      v107 = 0;
      v32 = *(_DWORD *)(v29 + v30 + 16);
      v103 = si128;
      v106 = 0;
      v104 = v20;
      if ( (v31 & 0xF) != 0xE )
        break;
      v33 = *(_QWORD *)(v28 + 8);
      v92 = v20;
      v101[1] = v33;
      v101[0] = v32;
      v101[2] = 0;
      v34 = sub_565F30((unsigned __int64 *)&v103, v101, v21, &v102);
      v20 = _mm_load_si128(&v92);
      v35 = (__m128)_mm_load_si128(&v103);
      v15 = _mm_load_si128(&v104);
      v21 = v34;
      v36 = v105;
LABEL_9:
      v37 = *(_BYTE *)(v24 + 51);
      if ( v37 )
      {
        v38 = *(_QWORD *)(v28 + 8);
        if ( v94 >= v38 )
          v38 = v94;
        ++v23;
        v94 = v38;
        v22 = v23;
        if ( (unsigned __int64)v23 >= *(_QWORD *)(v24 + 8) )
        {
LABEL_13:
          v39 = (int)v102;
          v93 = v21;
          v14 = v24;
          v16 = v98;
          v18 = v99;
          v11 = v100;
          v40 = v102;
          goto LABEL_14;
        }
      }
      else
      {
        v26 = *v25;
        ++v23;
        v20 = v15;
        v91 = v35;
        v93 = v36;
        v22 = v23;
        v21 = *(_QWORD *)(v26 + v30 + 8);
        if ( (unsigned __int64)v23 >= *(_QWORD *)(v24 + 8) )
          goto LABEL_13;
      }
    }
    a11 = _mm_movehl_ps(a11, (__m128)_mm_load_si128((const __m128i *)&v91));
    v92.m128i_i64[0] = a11.m128_u64[0];
    if ( v20.m128i_i64[0] )
    {
      if ( !a11.m128_u64[0]
        || (v96.m128i_i64[0] = v21,
            v97 = v20.m128i_i64[0],
            v95 = v20,
            v57 = getinf(57),
            v20 = _mm_load_si128(&v95),
            v21 = v96.m128i_i64[0],
            (v57 & 0xF) == 6)
        || (v58 = getinf(67), v20 = _mm_load_si128(&v95), v21 = v96.m128i_i64[0], v58 < 0) )
      {
        v41 = 8;
      }
      else
      {
        v41 = v97;
      }
      v97 = v21;
      v95.m128i_i32[0] = v41;
      v96 = v20;
      v42 = getinf(57);
      v43 = v95.m128i_i32[0];
      v20 = _mm_load_si128(&v96);
      v44 = v97;
      if ( (v42 & 0xF) == 6
        || (v96 = v20, v45 = getinf(67), v43 = v95.m128i_i32[0], v20 = _mm_load_si128(&v96), v44 = v97, v45 < 0) )
      {
        v46 = v43 - 1;
        v47 = -v43;
      }
      else
      {
        if ( v92.m128i_i64[0] )
        {
          if ( v97 < v92.m128i_i64[0] )
          {
            if ( !under_debugger )
              interr(1138);
            BUG();
          }
          v46 = v95.m128i_i32[0] - 1;
          v47 = -v95.m128i_i32[0];
          v55 = v47 & ((int)v46 + v92.m128i_i64[0]);
          v56 = v55 + v97 - v92.m128i_i64[0];
          if ( v56 < v97 )
            sub_561E80(v55, v97, *(double *)v15.m128i_i64, *(double *)v20.m128i_i64);
        }
        else
        {
          v56 = v97;
          v46 = v95.m128i_i32[0] - 1;
          v47 = -v95.m128i_i32[0];
        }
        v44 = v56;
      }
      v92.m128i_i64[0] = 0;
      v21 = v47 & (v44 + v46);
    }
    v48 = v32;
    v35 = _mm_loadh_ps((const double *)v92.m128i_i64);
    v15 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)v32);
    if ( (int)v102 >= (unsigned __int64)v32 )
    {
      if ( !v32 )
      {
LABEL_33:
        v36 = v93;
        goto LABEL_9;
      }
    }
    else
    {
      v102 = v32;
    }
    v49 = *(_QWORD *)v28;
    v50 = 1;
    v51 = 1;
    v52 = 0;
    v53 = (_DWORD *)v108 + 1;
    do
    {
      if ( v49 == ((v21 + 8 * (int)v50 - 1) & (-8 * (int)v50)) )
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
              ++DWORD1(v108[0]);
              goto LABEL_33;
            }
            _BitScanReverse64(&v81, v48 >> 1);
            v82 = 65 - (v81 ^ 0x3F);
            if ( v82 <= 7 )
            {
              ++*((_DWORD *)v108 + v82);
              goto LABEL_33;
            }
          }
          v48 >>= 1;
        }
      }
    }
    goto LABEL_33;
  }
  v94 = 0;
  v37 = *(_BYTE *)(v14 + 51);
  v39 = 0;
  v40 = 0;
LABEL_14:
  if ( v37 )
  {
    if ( v16 == ((v16 + (int)(v40 - 1)) & -v40) )
      goto LABEL_16;
    v67 = (_DWORD *)*v11;
    v68 = v11[1];
    v69 = (int *)(*v11 + 4 * v68);
    if ( (int *)*v11 != v69 )
    {
      v70 = (int *)*v11;
      while ( *v70 != v18 )
      {
        if ( v69 == ++v70 )
          goto LABEL_61;
      }
      if ( v69 != v70 )
        goto LABEL_16;
    }
LABEL_61:
    if ( v11[2] < (unsigned __int64)(v68 + 1) )
    {
      v91.m128_u64[0] = v14;
      v89 = qvector_reserve(v11, v67, v68 + 1, 4);
      v90 = v11[1];
      v14 = v91.m128_u64[0];
      *v11 = v89;
      v69 = (int *)(v89 + 4 * v90);
    }
    *v69 = v18;
    ++v11[1];
  }
  else if ( v18 > 0 )
  {
    v91.m128_u64[0] = v39;
    v59 = v18;
    v60 = v14;
    while ( 1 )
    {
      v61 = 1;
      v62 = -1;
      v63 = 0;
      do
      {
        if ( v63 < *((_DWORD *)v108 + v61) )
        {
          v62 = v61;
          v63 = *((_DWORD *)v108 + v61);
        }
        ++v61;
      }
      while ( v59 >= (int)v61 );
      if ( v62 == -1 )
        break;
      v64 = v11[1];
      v65 = (int *)(*v11 + 4 * v64);
      if ( (int *)*v11 == v65 )
        goto LABEL_84;
      v66 = (int *)*v11;
      while ( *v66 != v62 )
      {
        if ( v65 == ++v66 )
          goto LABEL_84;
      }
      if ( v65 == v66 )
      {
LABEL_84:
        v78 = v64 + 1;
        if ( v11[2] < v78 )
        {
          v79 = qvector_reserve(v11, *v11, v78, 4);
          v80 = v11[1];
          *v11 = v79;
          v65 = (int *)(v79 + 4 * v80);
        }
        *v65 = v62;
        ++v11[1];
      }
      *((_DWORD *)v108 + v62) = 0;
    }
    v14 = v60;
    v39 = v91.m128_u64[0];
  }
  if ( *(_BYTE *)(v14 + 51) )
LABEL_16:
    v93 = v94;
  v71 = v11[5];
  v72 = v93 + 7;
  v73 = (int)v71 - 1;
  v74 = (v93 + 7) >> 3;
  v75 = -*((_DWORD *)v11 + 10);
  if ( v93 >= 0xFFFFFFFFFFFFFFF9LL || v93 == 0 )
  {
    if ( v16 >= (v75 & (v16 + v73)) )
      goto LABEL_69;
    goto LABEL_67;
  }
  if ( v16 < (v75 & (v74 + v73)) )
  {
    do
    {
      v71 >>= 1;
      v73 = (int)v71 - 1;
      v75 = -(int)v71;
    }
    while ( v16 < (v75 & (v74 + v73)) );
    v11[5] = v71;
  }
  if ( v16 < (v75 & (v16 + v73)) )
  {
    do
LABEL_67:
      v71 >>= 1;
    while ( v16 < ((v16 + (int)v71 - 1) & -(int)v71) );
    v11[5] = v71;
    if ( v72 <= 7 )
      goto LABEL_69;
  }
  v77 = v11[4];
  if ( ((v74 + (int)v77 - 1) & -*((_DWORD *)v11 + 8)) < v16 && v77 < v71 )
  {
    do
      v77 *= 2LL;
    while ( ((v74 + (int)v77 - 1) & -(int)v77) < v16 && v77 < v71 );
    v11[4] = v77;
  }
LABEL_69:
  if ( v71 < v39 )
  {
    v11[3] = v71;
    *((_BYTE *)v11 + 52) = 1;
  }
  return v109 - __readfsqword(0x28u);
}
