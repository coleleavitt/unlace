__int64 __fastcall sub_1771560(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  __int64 v6; // r12
  __int64 *v7; // rbp
  __int64 *v8; // r15
  __int64 v9; // rax
  __int64 *v10; // rdx
  int v11; // edx
  __int64 v12; // r12
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r9d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rbx
  int v21; // r14d
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  __m128i v25; // xmm4
  __int64 v26; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __m128i *v33; // rbp
  __m128i *v34; // rbx
  unsigned __int64 v35; // rdx
  const __m128i *v36; // r14
  __m128i *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __m128i *v40; // rbx
  _BYTE *v41; // r14
  unsigned __int64 v42; // rdx
  __m128i *v43; // rax
  __m128i v44; // xmm6
  __int64 v45; // rdx
  __int64 v46; // r15
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  int v57; // ecx
  __int64 v58; // [rsp+8h] [rbp-2D0h]
  __int64 v59; // [rsp+18h] [rbp-2C0h]
  __int64 v61; // [rsp+28h] [rbp-2B0h]
  __int64 v62; // [rsp+30h] [rbp-2A8h]
  __int64 v63; // [rsp+40h] [rbp-298h]
  int v64; // [rsp+4Ch] [rbp-28Ch]
  __int64 v65; // [rsp+58h] [rbp-280h]
  __m128i v66; // [rsp+60h] [rbp-278h] BYREF
  __m128i v67; // [rsp+70h] [rbp-268h] BYREF
  unsigned int v68; // [rsp+88h] [rbp-250h] BYREF
  int v69; // [rsp+8Ch] [rbp-24Ch] BYREF
  __m128i v70; // [rsp+90h] [rbp-248h] BYREF
  __m128i v71; // [rsp+A0h] [rbp-238h]
  __m128i v72; // [rsp+B0h] [rbp-228h] BYREF
  __m128i v73; // [rsp+C0h] [rbp-218h]
  __m128i v74; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v75; // [rsp+E0h] [rbp-1F8h]
  __int64 v76; // [rsp+E8h] [rbp-1F0h]
  __m128i v77; // [rsp+F0h] [rbp-1E8h] BYREF
  __int64 v78; // [rsp+100h] [rbp-1D8h]
  __int64 v79; // [rsp+108h] [rbp-1D0h]
  __int128 ptr; // [rsp+110h] [rbp-1C8h] BYREF
  __int64 v81[12]; // [rsp+120h] [rbp-1B8h] BYREF
  void *v82; // [rsp+180h] [rbp-158h] BYREF
  __int64 v83; // [rsp+188h] [rbp-150h]
  _BYTE v84[256]; // [rsp+190h] [rbp-148h] BYREF
  __int64 v85; // [rsp+290h] [rbp-48h]

  v6 = a3;
  v7 = a1;
  v59 = *(_QWORD *)(a3 + 24);
  v58 = v59 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v59 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v26 = 0;
    v58 = (__int64)sub_176A2F0(a1, v59, a5);
    if ( (v58 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return v26;
  }
  v8 = *(__int64 **)(v6 + 32);
  v85 = 0;
  v82 = v84;
  v83 = 0x800000000LL;
  v61 = 0;
  if ( !v8 )
    goto LABEL_18;
  v8 = (__int64 *)sub_17473B0((__int64)a1, (__int64)v8);
  v9 = *(_QWORD *)(a4 + 8);
  if ( v9 )
  {
    v10 = *(__int64 **)(v9 + 64);
    if ( v10 )
    {
      v85 = *v10;
      v11 = *(_DWORD *)(v6 + 20);
      if ( !v11 )
      {
LABEL_41:
        v63 = *(_QWORD *)v9;
        if ( !*(_QWORD *)v9 )
          goto LABEL_19;
        v26 = 0;
        v38 = sub_176EE90(a1, *(_QWORD *)v9, *(void **)(v9 + 8), 0, 0);
        v61 = v39;
        v63 = v38;
        if ( v38 )
          goto LABEL_19;
        goto LABEL_14;
      }
    }
    else
    {
      v11 = *(_DWORD *)(v6 + 20);
      v85 = 0;
      if ( !v11 )
        goto LABEL_41;
    }
  }
  else
  {
    v11 = *(_DWORD *)(v6 + 20);
    v85 = 0;
    if ( !v11 )
      goto LABEL_18;
  }
  v62 = 32LL * (unsigned int)(v11 - 1) + 48;
  v65 = v6;
  v12 = 16;
  do
  {
    while ( 1 )
    {
      v71.m128i_i64[1] = 0;
      v13 = *(_QWORD *)(v9 + 64);
      v70.m128i_i64[1] = 0;
      v70.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v72 = _mm_loadu_si128((const __m128i *)(v13 + v12));
      v73 = _mm_loadu_si128((const __m128i *)(v13 + v12 + 16));
      if ( (v72.m128i_i32[0] & 0x7FFFFFFF) == 9 )
      {
        if ( (unsigned __int8)sub_176FBC0(
                                a1,
                                a1,
                                v72.m128i_i64[1],
                                (__int64)a1,
                                v72.m128i_i64[1] + 24LL * v72.m128i_u32[1],
                                (__int64 *)&v82,
                                0) )
          goto LABEL_13;
        goto LABEL_39;
      }
      if ( !sub_F1D570((__int64)&v72) )
        break;
      v68 = 0;
      v69 = 0;
      sub_1E4CF80(
        (unsigned int)&v74,
        *a1,
        (unsigned int)&v68,
        (unsigned int)&v69,
        v14,
        v15,
        v72.m128i_i64[0],
        v72.m128i_i64[1],
        v73.m128i_i32[0],
        v73.m128i_i64[1]);
      *(_QWORD *)&ptr = v81;
      *((_QWORD *)&ptr + 1) = 0x200000000LL;
      *(double *)a5.m128_u64 = sub_1E4C910(
                                 *a1,
                                 (unsigned int)&ptr,
                                 v16,
                                 v17,
                                 v18,
                                 v19,
                                 v74.m128i_i64[0],
                                 v74.m128i_i64[1],
                                 v75,
                                 v76);
      v20 = *a1;
      v21 = v69;
      v77.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v77.m128i_i64[1] = 0;
      v79 = 0;
      v22 = *(_DWORD *)(v20 + 12632);
      *(_DWORD *)(v20 + 12632) = 0;
      v64 = v22;
      if ( (unsigned __int8)sub_176F680(a1, &v74, &v77, 0, a5)
        || (sub_17412E0((__int64)&v66, a1, v68, v21, v23, v24, v77.m128i_i32[0], v77.m128i_i64[1], v78, v79),
            v25 = _mm_loadu_si128(&v67),
            v70 = _mm_loadu_si128(&v66),
            v71 = v25,
            (v66.m128i_i32[0] & 0x7FFFFFFF) == 0) )
      {
        *(_DWORD *)(v20 + 12632) = v64;
        if ( (__int64 *)ptr != v81 )
          free((void *)ptr);
LABEL_13:
        v26 = 0;
        goto LABEL_14;
      }
      sub_17429A0((__int64)&v82, &v70);
      *(_DWORD *)(v20 + 12632) = v64;
      if ( (__int64 *)ptr != v81 )
        free((void *)ptr);
LABEL_39:
      v9 = *(_QWORD *)(a4 + 8);
      v12 += 32;
      if ( v62 == v12 )
        goto LABEL_40;
    }
    v40 = &v70;
    if ( (unsigned __int8)sub_176F680(a1, &v72, &v70, 0, a5) )
      goto LABEL_13;
    v41 = v82;
    v42 = (unsigned int)v83 + 1LL;
    v43 = (__m128i *)((char *)v82 + 32 * (unsigned int)v83);
    if ( v42 > HIDWORD(v83) )
    {
      if ( v82 > &v70 || v43 <= &v70 )
      {
        sub_2237220(&v82, v84, v42, 32);
        v43 = (__m128i *)((char *)v82 + 32 * (unsigned int)v83);
      }
      else
      {
        sub_2237220(&v82, v84, v42, 32);
        v40 = (__m128i *)((char *)v82 + (char *)&v70 - v41);
        v43 = (__m128i *)((char *)v82 + 32 * (unsigned int)v83);
      }
    }
    v12 += 32;
    *v43 = _mm_loadu_si128(v40);
    v44 = _mm_loadu_si128(v40 + 1);
    LODWORD(v83) = v83 + 1;
    v43[1] = v44;
    v9 = *(_QWORD *)(a4 + 8);
  }
  while ( v62 != v12 );
LABEL_40:
  v6 = v65;
  if ( v9 )
    goto LABEL_41;
LABEL_18:
  v63 = 0;
LABEL_19:
  if ( *(_DWORD *)(*a1 + 12632) || v58 != v59 || (*(_BYTE *)(v6 + 17) & 4) != 0 || (v26 = v6, *(_QWORD *)(v6 + 32)) )
  {
    v28 = (unsigned int)v83;
    v29 = 0;
    v30 = v81;
    *((_QWORD *)&ptr + 1) = 0x400000000LL;
    v31 = 0;
    *(_QWORD *)&ptr = v81;
    if ( (unsigned int)v83 > 4uLL )
    {
      sub_2237220(&ptr, v81, (unsigned int)v83, 24);
      v29 = DWORD2(ptr);
      v28 = (unsigned int)v83;
      v30 = (__int64 *)ptr;
      v31 = DWORD2(ptr);
    }
    v32 = 32 * v28;
    if ( (char *)v82 + v32 != v82 )
    {
      v33 = (__m128i *)v82;
      v34 = (__m128i *)((char *)v82 + v32);
      while ( 1 )
      {
        v35 = v31 + 1;
        v36 = v33;
        v37 = (__m128i *)&v30[3 * v31];
        if ( v35 > HIDWORD(ptr) )
        {
          if ( v30 > (__int64 *)v33 || v37 <= v33 )
          {
            sub_2237220(&ptr, v81, v35, 24);
            v37 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
          }
          else
          {
            sub_2237220(&ptr, v81, v35, 24);
            v36 = (const __m128i *)(ptr + (char *)v33 - (char *)v30);
            v37 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
          }
        }
        v33 += 2;
        *v37 = _mm_loadu_si128(v36);
        v37[1].m128i_i64[0] = v36[1].m128i_i64[0];
        v31 = (unsigned int)++DWORD2(ptr);
        if ( v34 == v33 )
          break;
        v30 = (__int64 *)ptr;
      }
      v7 = a1;
      v29 = (unsigned int)v31;
      v30 = (__int64 *)ptr;
    }
    v26 = sub_AB5840(*(_QWORD *)(*v7 + 248), v58, (*(_BYTE *)(v6 + 18) >> 3) & 3, 0, 0, v8, (__int64)v30, v29);
    if ( (v26 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      if ( (__int64 *)ptr != v81 )
        free((void *)ptr);
      goto LABEL_50;
    }
    v26 = 0;
    if ( (__int64 *)ptr != v81 )
      free((void *)ptr);
  }
  else
  {
LABEL_50:
    sub_1EA6140(a2, v26, 16, 8);
    v46 = v45;
    *(_DWORD *)v45 = *(_DWORD *)a4;
    v47 = *(_DWORD *)(a4 + 4);
    *(_QWORD *)(v45 + 8) = 0;
    *(_DWORD *)(v45 + 4) = v47;
    if ( *(_QWORD *)(v6 + 32) )
    {
      sub_B85890(&v77, *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL));
      v51 = *(_QWORD *)(a4 + 8);
      v52 = 0;
      if ( v51 )
        v52 = *(_DWORD *)(v51 + 32);
      v53 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL);
      DWORD2(ptr) = v52;
      *(_QWORD *)&ptr = v53;
      v81[0] = v77.m128i_i64[0];
      v54 = sub_F1ED40(*(_QWORD **)(*v7 + 248), (__int64 *)&v82, v53, v48, v49, v50);
      v55 = *(_QWORD *)(a4 + 8);
      if ( v55 )
      {
        v56 = *(_QWORD *)(v55 + 48);
        v57 = *(_DWORD *)(v55 + 16);
      }
      else
      {
        v56 = 0;
        v57 = 0;
      }
      *(_QWORD *)(v46 + 8) = sub_A55700(
                               *(_QWORD **)(*v7 + 248),
                               v63,
                               v61,
                               v57,
                               v56,
                               *(_QWORD *)(v6 + 32),
                               ptr,
                               v81[0],
                               v54);
    }
  }
LABEL_14:
  if ( v82 != v84 )
    free(v82);
  return v26;
}
