__int64 __fastcall sub_1DA5A50(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 *v11; // rdx
  int v12; // edx
  __int64 v13; // r12
  __int64 v14; // rax
  __m128 v15; // xmm1
  int v16; // r8d
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // r14
  int v23; // ebx
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i v27; // xmm4
  __int64 v28; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __m128i *v35; // rbx
  __m128i *v36; // r14
  unsigned __int64 v37; // rdx
  const __m128i *v38; // r15
  __m128i *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  _BYTE *v42; // r14
  __m128i *v43; // r8
  unsigned __int64 v44; // rdx
  __m128i *v45; // rax
  __m128i v46; // xmm6
  __int64 v47; // rdx
  __int64 v48; // r15
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  int v59; // ecx
  _BYTE *v60; // rbx
  __m128i *v61; // r8
  unsigned __int64 v62; // rdx
  __m128i *v63; // rax
  __m128i v64; // xmm7
  __int64 v65; // [rsp+0h] [rbp-2D8h]
  __int64 *v66; // [rsp+10h] [rbp-2C8h]
  __int64 v68; // [rsp+20h] [rbp-2B8h]
  __int64 v69; // [rsp+28h] [rbp-2B0h]
  __int64 v70; // [rsp+38h] [rbp-2A0h]
  int v71; // [rsp+40h] [rbp-298h]
  __int64 v72; // [rsp+50h] [rbp-288h]
  __m128i v73; // [rsp+60h] [rbp-278h] BYREF
  __m128i v74; // [rsp+70h] [rbp-268h] BYREF
  unsigned int v75; // [rsp+88h] [rbp-250h] BYREF
  int v76; // [rsp+8Ch] [rbp-24Ch] BYREF
  __m128i v77; // [rsp+90h] [rbp-248h] BYREF
  __m128i v78; // [rsp+A0h] [rbp-238h]
  __m128 v79; // [rsp+B0h] [rbp-228h] BYREF
  __m128i v80; // [rsp+C0h] [rbp-218h]
  __m128i v81; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v82; // [rsp+E0h] [rbp-1F8h]
  __int64 v83; // [rsp+E8h] [rbp-1F0h]
  __m128i v84; // [rsp+F0h] [rbp-1E8h] BYREF
  __int64 v85; // [rsp+100h] [rbp-1D8h]
  __int64 v86; // [rsp+108h] [rbp-1D0h]
  __int128 ptr; // [rsp+110h] [rbp-1C8h] BYREF
  __int64 v88[12]; // [rsp+120h] [rbp-1B8h] BYREF
  void *v89; // [rsp+180h] [rbp-158h] BYREF
  __int64 v90; // [rsp+188h] [rbp-150h]
  _BYTE v91[256]; // [rsp+190h] [rbp-148h] BYREF
  __int64 v92; // [rsp+290h] [rbp-48h]

  v7 = a3;
  v8 = *(_QWORD *)(a3 + 24);
  v65 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v28 = 0;
    v65 = (__int64)sub_1D99B80(a1, v8, a5, a6);
    if ( (v65 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return v28;
  }
  v9 = *(_QWORD *)(v7 + 32);
  v92 = 0;
  v89 = v91;
  v90 = 0x800000000LL;
  v69 = 0;
  v66 = (__int64 *)v9;
  if ( !v9 )
    goto LABEL_18;
  v66 = (__int64 *)sub_1D86580((__int64)a1, v9);
  v10 = *(_QWORD *)(a4 + 8);
  if ( v10 )
  {
    v11 = *(__int64 **)(v10 + 64);
    if ( v11 )
    {
      v92 = *v11;
      v12 = *(_DWORD *)(v7 + 20);
      if ( !v12 )
      {
LABEL_41:
        v70 = *(_QWORD *)v10;
        if ( !*(_QWORD *)v10 )
          goto LABEL_19;
        v28 = 0;
        v40 = sub_1D9F590((__int64)a1, *(_QWORD *)v10, *(void **)(v10 + 8), 0, 0);
        v69 = v41;
        v70 = v40;
        if ( v40 )
          goto LABEL_19;
        goto LABEL_14;
      }
    }
    else
    {
      v12 = *(_DWORD *)(v7 + 20);
      v92 = 0;
      if ( !v12 )
        goto LABEL_41;
    }
  }
  else
  {
    v12 = *(_DWORD *)(v7 + 20);
    v92 = 0;
    if ( !v12 )
      goto LABEL_18;
  }
  v68 = 32LL * (unsigned int)(v12 - 1) + 48;
  v72 = v7;
  v13 = 16;
  do
  {
    while ( 1 )
    {
      v78.m128i_i64[1] = 0;
      v14 = *(_QWORD *)(v10 + 64);
      v77.m128i_i64[1] = 0;
      v77.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v15 = (__m128)_mm_loadu_si128((const __m128i *)(v14 + v13));
      v79 = v15;
      v80 = _mm_loadu_si128((const __m128i *)(v14 + v13 + 16));
      if ( (v15.m128_i32[0] & 0x7FFFFFFF) == 9 )
      {
        if ( (unsigned __int8)sub_1DA0660(
                                a1,
                                a1,
                                (const __m128i *)v79.m128_u64[1],
                                a5,
                                v15,
                                (__int64)a1,
                                (const __m128i *)(v79.m128_u64[1] + 24LL * v79.m128_u32[1]),
                                (__int64 *)&v89,
                                0) )
          goto LABEL_13;
        goto LABEL_39;
      }
      if ( !sub_F1D570((__int64)&v79) )
        break;
      v75 = 0;
      v76 = 0;
      sub_1E4CF80(
        (unsigned int)&v81,
        *a1,
        (unsigned int)&v75,
        (unsigned int)&v76,
        v16,
        v17,
        v79.m128_i64[0],
        v79.m128_i64[1],
        v80.m128i_i32[0],
        v80.m128i_i64[1]);
      *(_QWORD *)&ptr = v88;
      *((_QWORD *)&ptr + 1) = 0x200000000LL;
      *(double *)a5.m128_u64 = sub_1E4C910(
                                 *a1,
                                 (unsigned int)&ptr,
                                 v18,
                                 v19,
                                 v20,
                                 v21,
                                 v81.m128i_i64[0],
                                 v81.m128i_i64[1],
                                 v82,
                                 v83);
      v22 = *a1;
      v23 = v76;
      v84.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v84.m128i_i64[1] = 0;
      v86 = 0;
      v24 = *(_DWORD *)(v22 + 12632);
      *(_DWORD *)(v22 + 12632) = 0;
      v71 = v24;
      if ( (unsigned __int8)sub_1DA0120(a1, &v81, &v84, 0, a5, v15)
        || (sub_1D81DB0((__int64)&v73, a1, v75, v23, v25, v26, v84.m128i_i32[0], v84.m128i_i64[1], v85, v86),
            v27 = _mm_loadu_si128(&v74),
            v77 = _mm_loadu_si128(&v73),
            v78 = v27,
            (v73.m128i_i32[0] & 0x7FFFFFFF) == 0) )
      {
        *(_DWORD *)(v22 + 12632) = v71;
        if ( (__int64 *)ptr != v88 )
          free((void *)ptr);
LABEL_13:
        v28 = 0;
        goto LABEL_14;
      }
      v60 = v89;
      v61 = &v77;
      v62 = (unsigned int)v90 + 1LL;
      v63 = (__m128i *)((char *)v89 + 32 * (unsigned int)v90);
      if ( v62 > HIDWORD(v90) )
      {
        if ( v89 > &v77 || v63 <= &v77 )
        {
          sub_2237220(&v89, v91, v62, 32);
          v61 = &v77;
          v63 = (__m128i *)((char *)v89 + 32 * (unsigned int)v90);
        }
        else
        {
          sub_2237220(&v89, v91, v62, 32);
          v61 = (__m128i *)((char *)v89 + (char *)&v77 - v60);
          v63 = (__m128i *)((char *)v89 + 32 * (unsigned int)v90);
        }
      }
      *v63 = _mm_loadu_si128(v61);
      v64 = _mm_loadu_si128(v61 + 1);
      LODWORD(v90) = v90 + 1;
      v63[1] = v64;
      *(_DWORD *)(v22 + 12632) = v71;
      if ( (__int64 *)ptr != v88 )
        free((void *)ptr);
LABEL_39:
      v10 = *(_QWORD *)(a4 + 8);
      v13 += 32;
      if ( v13 == v68 )
        goto LABEL_40;
    }
    if ( (unsigned __int8)sub_1DA0120(a1, (const __m128i *)&v79, &v77, 0, a5, v15) )
      goto LABEL_13;
    v42 = v89;
    v43 = &v77;
    v44 = (unsigned int)v90 + 1LL;
    v45 = (__m128i *)((char *)v89 + 32 * (unsigned int)v90);
    if ( v44 > HIDWORD(v90) )
    {
      if ( v89 > &v77 || v45 <= &v77 )
      {
        sub_2237220(&v89, v91, v44, 32);
        v43 = &v77;
        v45 = (__m128i *)((char *)v89 + 32 * (unsigned int)v90);
      }
      else
      {
        sub_2237220(&v89, v91, v44, 32);
        v43 = (__m128i *)((char *)v89 + (char *)&v77 - v42);
        v45 = (__m128i *)((char *)v89 + 32 * (unsigned int)v90);
      }
    }
    v13 += 32;
    *v45 = _mm_loadu_si128(v43);
    v46 = _mm_loadu_si128(v43 + 1);
    LODWORD(v90) = v90 + 1;
    v45[1] = v46;
    v10 = *(_QWORD *)(a4 + 8);
  }
  while ( v13 != v68 );
LABEL_40:
  v7 = v72;
  if ( v10 )
    goto LABEL_41;
LABEL_18:
  v70 = 0;
LABEL_19:
  if ( *(_DWORD *)(*a1 + 12632) || v65 != v8 || (*(_BYTE *)(v7 + 17) & 4) != 0 || (v28 = v7, *(_QWORD *)(v7 + 32)) )
  {
    v30 = (unsigned int)v90;
    v31 = 0;
    v32 = v88;
    *((_QWORD *)&ptr + 1) = 0x400000000LL;
    v33 = 0;
    *(_QWORD *)&ptr = v88;
    if ( (unsigned int)v90 > 4uLL )
    {
      sub_2237220(&ptr, v88, (unsigned int)v90, 24);
      v31 = DWORD2(ptr);
      v30 = (unsigned int)v90;
      v32 = (__int64 *)ptr;
      v33 = DWORD2(ptr);
    }
    v34 = 32 * v30;
    if ( (char *)v89 + v34 != v89 )
    {
      v35 = (__m128i *)((char *)v89 + v34);
      v36 = (__m128i *)v89;
      while ( 1 )
      {
        v37 = v33 + 1;
        v38 = v36;
        v39 = (__m128i *)&v32[3 * v33];
        if ( v37 > HIDWORD(ptr) )
        {
          if ( v32 > (__int64 *)v36 || v39 <= v36 )
          {
            sub_2237220(&ptr, v88, v37, 24);
            v39 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
          }
          else
          {
            sub_2237220(&ptr, v88, v37, 24);
            v38 = (const __m128i *)(ptr + (char *)v36 - (char *)v32);
            v39 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
          }
        }
        v36 += 2;
        *v39 = _mm_loadu_si128(v38);
        v39[1].m128i_i64[0] = v38[1].m128i_i64[0];
        v33 = (unsigned int)++DWORD2(ptr);
        if ( v35 == v36 )
          break;
        v32 = (__int64 *)ptr;
      }
      v32 = (__int64 *)ptr;
      v31 = (unsigned int)v33;
    }
    v28 = sub_AB5840(*(_QWORD *)(*a1 + 248), v65, (*(_BYTE *)(v7 + 18) >> 3) & 3, 0, 0, v66, (__int64)v32, v31);
    if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      if ( (__int64 *)ptr != v88 )
        free((void *)ptr);
      goto LABEL_50;
    }
    v28 = 0;
    if ( (__int64 *)ptr != v88 )
      free((void *)ptr);
  }
  else
  {
LABEL_50:
    sub_1EA6140(a2, v28, 16, 8);
    v48 = v47;
    *(_DWORD *)v47 = *(_DWORD *)a4;
    v49 = *(_DWORD *)(a4 + 4);
    *(_QWORD *)(v47 + 8) = 0;
    *(_DWORD *)(v47 + 4) = v49;
    if ( *(_QWORD *)(v7 + 32) )
    {
      sub_B85890(&v84, *(_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL));
      v53 = *(_QWORD *)(a4 + 8);
      v54 = 0;
      if ( v53 )
        v54 = *(_DWORD *)(v53 + 32);
      v55 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL);
      DWORD2(ptr) = v54;
      *(_QWORD *)&ptr = v55;
      v88[0] = v84.m128i_i64[0];
      v56 = sub_F1ED40(*(_QWORD **)(*a1 + 248), (__int64 *)&v89, v55, v50, v51, v52);
      v57 = *(_QWORD *)(a4 + 8);
      if ( v57 )
      {
        v58 = *(_QWORD *)(v57 + 48);
        v59 = *(_DWORD *)(v57 + 16);
      }
      else
      {
        v58 = 0;
        v59 = 0;
      }
      *(_QWORD *)(v48 + 8) = sub_A55700(
                               *(_QWORD **)(*a1 + 248),
                               v70,
                               v69,
                               v59,
                               v58,
                               *(_QWORD *)(v7 + 32),
                               ptr,
                               v88[0],
                               v56);
    }
  }
LABEL_14:
  if ( v89 != v91 )
    free(v89);
  return v28;
}
