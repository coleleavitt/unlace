__int64 __fastcall sub_1DE7CC0(
        _QWORD *a1,
        _QWORD *a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        _QWORD *a6,
        int a7,
        __int64 a8)
{
  _QWORD *v8; // r14
  __int64 v11; // rdx
  __int64 v12; // rdx
  const __m128i *v13; // roff
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // r12
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r13
  int v28; // r15d
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v32; // rax
  unsigned __int64 v33; // r13
  __m128i *v34; // r15
  unsigned __int64 v35; // rdx
  __m128i *v36; // rax
  int v37; // r13d
  __m128i si128; // xmm4
  __int64 v39; // rax
  __m128i *v40; // rcx
  unsigned __int64 v41; // rdx
  __m128 *v42; // rax
  int v43; // eax
  __int64 v44; // r15
  int v45; // r14d
  __int32 v46; // eax
  __int64 v47; // rax
  __int64 *v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rsi
  __int64 v51; // rsi
  __int64 v52; // r13
  int v53; // eax
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 *v67; // [rsp+30h] [rbp-178h]
  unsigned __int64 v68; // [rsp+30h] [rbp-178h]
  unsigned __int64 v69; // [rsp+30h] [rbp-178h]
  int v70; // [rsp+30h] [rbp-178h]
  unsigned __int64 v71; // [rsp+38h] [rbp-170h]
  unsigned int v72; // [rsp+40h] [rbp-168h]
  unsigned int v73; // [rsp+44h] [rbp-164h]
  int v74; // [rsp+48h] [rbp-160h]
  unsigned int v75; // [rsp+4Ch] [rbp-15Ch]
  _QWORD *v76; // [rsp+58h] [rbp-150h]
  __m128i v77; // [rsp+60h] [rbp-148h] BYREF
  __m128i v78; // [rsp+70h] [rbp-138h] BYREF
  char v79; // [rsp+82h] [rbp-126h] BYREF
  char v80; // [rsp+83h] [rbp-125h] BYREF
  unsigned int v81; // [rsp+84h] [rbp-124h] BYREF
  int v82; // [rsp+88h] [rbp-120h] BYREF
  int v83; // [rsp+8Ch] [rbp-11Ch] BYREF
  __m128i v84; // [rsp+90h] [rbp-118h] BYREF
  __int64 v85; // [rsp+A0h] [rbp-108h]
  __m128i v86; // [rsp+B0h] [rbp-F8h] BYREF
  __m128i v87; // [rsp+C0h] [rbp-E8h]
  __m128i v88; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v89; // [rsp+E0h] [rbp-C8h]
  __int64 v90; // [rsp+E8h] [rbp-C0h]
  __m128i v91; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v92; // [rsp+100h] [rbp-A8h]
  __int64 v93; // [rsp+108h] [rbp-A0h]
  void *ptr; // [rsp+110h] [rbp-98h] BYREF
  __int64 v95; // [rsp+118h] [rbp-90h]
  _BYTE v96[32]; // [rsp+120h] [rbp-88h] BYREF
  _BYTE v97[24]; // [rsp+140h] [rbp-68h] BYREF
  unsigned __int64 v98; // [rsp+158h] [rbp-50h] BYREF

  v8 = a2;
  v72 = 0;
  if ( a2 == a6 )
    goto LABEL_15;
  do
  {
    do
    {
      v11 = v8[1];
      v86.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v87.m128i_i64[1] = 0;
      v86.m128i_i64[1] = 0;
      v12 = *(_QWORD *)(v11 + 8LL * v72 + 32);
      v13 = (const __m128i *)(*v8 + 24LL * v72 + 48);
      v88 = _mm_loadu_si128(v13);
      v14 = v13[1].m128i_i64[0];
      v90 = v12;
      v89 = v14;
      if ( (v88.m128i_i32[0] & 0x7FFFFFFF) == 9 )
      {
        if ( !(unsigned __int8)sub_1DE1C70(
                                 a1,
                                 (__int64)a1,
                                 (const __m128i *)v88.m128i_i64[1],
                                 a3,
                                 a4,
                                 (__int64)a1,
                                 (const __m128i *)(v88.m128i_i64[1] + 24LL * v88.m128i_u32[1]),
                                 a8,
                                 0) )
          goto LABEL_13;
        return 1;
      }
      if ( !sub_F1D570((__int64)&v88) )
      {
        if ( !sub_1DD6360((unsigned int *)a1, &v88, &v86, 0, v15, v16, *(double *)a3.m128_u64, a4) )
        {
          v32 = *(unsigned int *)(a8 + 8);
          v33 = *(_QWORD *)a8;
          v34 = &v86;
          v35 = v32 + 1;
          v36 = (__m128i *)(*(_QWORD *)a8 + 32 * v32);
          if ( v35 > *(unsigned int *)(a8 + 12) )
          {
            v60 = a8 + 16;
            if ( v33 > (unsigned __int64)&v86 || v36 <= &v86 )
            {
              sub_2237220(a8, v60, v35, 32);
              v34 = &v86;
              v36 = (__m128i *)(*(_QWORD *)a8 + 32LL * *(unsigned int *)(a8 + 8));
            }
            else
            {
              sub_2237220(a8, v60, v35, 32);
              v34 = (__m128i *)((char *)&v86 + *(_QWORD *)a8 - v33);
              v36 = (__m128i *)(*(_QWORD *)a8 + 32LL * *(unsigned int *)(a8 + 8));
            }
          }
          ++v72;
          *v36 = _mm_loadu_si128(v34);
          v36[1] = _mm_loadu_si128(v34 + 1);
          ++*(_DWORD *)(a8 + 8);
          continue;
        }
        return 1;
      }
      v17 = *a1;
      v81 = 0;
      v82 = 0;
      sub_1E4CF80(
        (unsigned int)&v91,
        v17,
        (unsigned int)&v81,
        (unsigned int)&v82,
        v15,
        v16,
        v88.m128i_i64[0],
        v88.m128i_i64[1],
        v89,
        v90);
      v18 = *a1;
      ptr = v96;
      v95 = 0x200000000LL;
      *(double *)a3.m128_u64 = sub_1E4C910(
                                 v18,
                                 (unsigned int)&ptr,
                                 v19,
                                 v20,
                                 v21,
                                 v22,
                                 v91.m128i_i64[0],
                                 v91.m128i_i64[1],
                                 v92,
                                 v93);
      v23 = (unsigned int)v95;
      v79 = 1;
      v80 = 0;
      v83 = v82;
      v24 = sub_F1E510((__int64)&v91, (__int64)&ptr, *(double *)a3.m128_u64);
      if ( sub_1DDBB60(a1, v81, v24, (__int64)ptr, v23, (__int64)&v79, a3, a4, (__int64)&v80, (__int64)&v83) )
        goto LABEL_9;
      if ( !v79 )
      {
        v27 = *a1;
        *(_QWORD *)&v97[8] = 0;
        v98 = 0;
        *(_QWORD *)v97 &= 0xFFFFFFFE00000000LL;
        v28 = *(_DWORD *)(v27 + 12632);
        *(_DWORD *)(v27 + 12632) = 0;
        if ( !sub_1DD6360((unsigned int *)a1, &v91, (__m128i *)v97, 0, v25, v26, *(double *)a3.m128_u64, a4) )
        {
          sub_1DB7E30((__int64)&v77, a1, v81, v83, v29, v30, *(int *)v97, *(__int64 *)&v97[8], *(int *)&v97[16], v98);
          v86 = _mm_loadu_si128(&v77);
          v87 = _mm_loadu_si128(&v78);
          if ( (v77.m128i_i32[0] & 0x7FFFFFFF) != 0 )
          {
            sub_17429A0(a8, &v86);
            *(_DWORD *)(v27 + 12632) = v28;
            goto LABEL_42;
          }
        }
        *(_DWORD *)(v27 + 12632) = v28;
LABEL_9:
        if ( ptr != v96 )
          free(ptr);
        return 1;
      }
      if ( v83 == 1 )
        goto LABEL_45;
      v37 = 0;
      v76 = v8;
      do
      {
        v44 = *a1;
        ++v37;
        v45 = *(_DWORD *)(*a1 + 12632LL);
        *(_DWORD *)(*a1 + 12632LL) = v37;
        if ( sub_1DD6360((unsigned int *)a1, &v91, &v86, 0, v25, v26, *(double *)a3.m128_u64, a4) )
        {
LABEL_40:
          *(_DWORD *)(v44 + 12632) = v45;
          goto LABEL_9;
        }
        if ( (unsigned __int8)sub_F1D5E0((__int64)&v86) )
        {
          v46 = v86.m128i_i32[0] & 0x7FFFFFFF;
          if ( (v86.m128i_i32[0] & 0x7FFFFFFF) == 6 )
          {
            v75 = v81;
            v74 = v82;
            v68 = *(_QWORD *)((v87.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 8);
            v73 = *(_DWORD *)((v87.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
            v71 = *(_QWORD *)(v87.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
            sub_F22A90(v97, v86.m128i_i64[1]);
            v49 = *(_QWORD *)v97;
            v50 = *(_QWORD **)(*a1 + 248LL);
            *(_DWORD *)&v97[4] = v74;
            *(_QWORD *)&v97[8] = v49;
            *(_DWORD *)v97 = 7;
            sub_F1ECA0(&v98, v50, v71, v68, v73, v75);
          }
          else
          {
            if ( v46 == 8 )
            {
              v47 = sub_1E53EF0(*a1, v87.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
              if ( v47 != 1 )
              {
                *(_QWORD *)v97 = *(_QWORD *)v97 & 0xFFFFFFFE00000000LL | 8;
                *(_QWORD *)&v97[8] = v47 & 0xFFFFFFFFFFFFFFFELL;
                v98 = v47 & 0xFFFFFFFFFFFFFFFCLL | 1;
                goto LABEL_24;
              }
LABEL_23:
              *(_QWORD *)v97 &= 0xFFFFFFFE00000000LL;
              *(_QWORD *)&v97[8] = 0;
              v98 = 0;
              goto LABEL_24;
            }
            if ( v46 != 1 )
              goto LABEL_23;
            v48 = (__int64 *)sub_1E509C0(*a1, v87.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
            if ( !v48 )
              goto LABEL_23;
            v67 = v48;
            sub_F1D250((__int64)&v84, *v48, 0, 0);
            *(__m128i *)v97 = _mm_load_si128(&v84);
            *(_QWORD *)&v97[16] = v85;
            v98 = (unsigned __int64)v67 & 0xFFFFFFFFFFFFFFFCLL | 2;
          }
LABEL_24:
          si128 = _mm_load_si128((const __m128i *)&v97[16]);
          v86 = _mm_load_si128((const __m128i *)v97);
          v87 = si128;
          if ( (*(_DWORD *)v97 & 0x7FFFFFFF) == 0 )
            goto LABEL_40;
        }
        v39 = *(unsigned int *)(a8 + 8);
        v25 = *(_QWORD *)a8;
        v40 = &v86;
        v41 = v39 + 1;
        v42 = (__m128 *)(*(_QWORD *)a8 + 32 * v39);
        if ( v41 > *(unsigned int *)(a8 + 12) )
        {
          v51 = a8 + 16;
          if ( v25 > (unsigned __int64)&v86 || v42 <= (__m128 *)&v86 )
          {
            sub_2237220(a8, v51, v41, 32);
            v40 = &v86;
            v42 = (__m128 *)(*(_QWORD *)a8 + 32LL * *(unsigned int *)(a8 + 8));
          }
          else
          {
            v69 = *(_QWORD *)a8;
            sub_2237220(a8, v51, v41, 32);
            v25 = v69;
            v40 = (__m128i *)((char *)&v86 + *(_QWORD *)a8 - v69);
            v42 = (__m128 *)(*(_QWORD *)a8 + 32LL * *(unsigned int *)(a8 + 8));
          }
        }
        a3 = (__m128)_mm_loadu_si128(v40);
        *v42 = a3;
        a4 = (__m128)_mm_loadu_si128(v40 + 1);
        v42[1] = a4;
        v43 = v83;
        ++*(_DWORD *)(a8 + 8);
        *(_DWORD *)(v44 + 12632) = v45;
      }
      while ( v43 - 1 != v37 );
      v8 = v76;
LABEL_45:
      if ( v80 )
      {
        v52 = *a1;
        v53 = *(_DWORD *)(*a1 + 12632LL);
        *(_DWORD *)(*a1 + 12632LL) = 0;
        v70 = v53;
        sub_1DB8420((__m128i *)&v97[8], a1);
        if ( sub_1DD6360((unsigned int *)a1, &v91, &v86, 0, v54, v55, *(double *)a3.m128_u64, a4)
          || (sub_1DB7E30(
                (__int64)&v77,
                a1,
                v81,
                v82,
                v58,
                v59,
                v86.m128i_i32[0],
                v86.m128i_i64[1],
                v87.m128i_i32[0],
                v87.m128i_i64[1]),
              v86 = _mm_loadu_si128(&v77),
              v87 = _mm_loadu_si128(&v78),
              (v77.m128i_i32[0] & 0x7FFFFFFF) == 0) )
        {
          sub_1DB8040((__int64)a1, a1 + 4, v56, v57, v58, v59, *(__int128 *)&v97[8], v98);
          *(_DWORD *)(v52 + 12632) = v70;
          goto LABEL_9;
        }
        sub_17429A0(a8, &v86);
        sub_1DB8040((__int64)a1, a1 + 4, v61, v62, v63, v64, *(__int128 *)&v97[8], v98);
        *(_DWORD *)(v52 + 12632) = v70;
      }
LABEL_42:
      if ( ptr != v96 )
        free(ptr);
LABEL_13:
      ++v72;
    }
    while ( v8 != a6 );
LABEL_15:
    ;
  }
  while ( v72 != a7 );
  return 0;
}
