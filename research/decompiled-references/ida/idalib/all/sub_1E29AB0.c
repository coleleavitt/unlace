__int64 __fastcall sub_1E29AB0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v7; // r12
  __int64 *v8; // rbp
  __int64 *v9; // r15
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
  __int64 v22; // rbx
  int v23; // r14d
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
  __m128i *v35; // rbp
  __m128i *v36; // rbx
  unsigned __int64 v37; // rdx
  const __m128i *v38; // r14
  __m128i *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __m128i *v42; // rbx
  _BYTE *v43; // r14
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
  __int64 v60; // [rsp+8h] [rbp-2D0h]
  __int64 v61; // [rsp+18h] [rbp-2C0h]
  __int64 v63; // [rsp+28h] [rbp-2B0h]
  __int64 v64; // [rsp+30h] [rbp-2A8h]
  __int64 v65; // [rsp+40h] [rbp-298h]
  int v66; // [rsp+4Ch] [rbp-28Ch]
  __int64 v67; // [rsp+58h] [rbp-280h]
  __m128i v68; // [rsp+60h] [rbp-278h] BYREF
  __m128i v69; // [rsp+70h] [rbp-268h] BYREF
  unsigned int v70; // [rsp+88h] [rbp-250h] BYREF
  int v71; // [rsp+8Ch] [rbp-24Ch] BYREF
  __m128i v72; // [rsp+90h] [rbp-248h] BYREF
  __m128i v73; // [rsp+A0h] [rbp-238h]
  __m128 v74; // [rsp+B0h] [rbp-228h] BYREF
  __m128i v75; // [rsp+C0h] [rbp-218h]
  __m128i v76; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v77; // [rsp+E0h] [rbp-1F8h]
  __int64 v78; // [rsp+E8h] [rbp-1F0h]
  __m128i v79; // [rsp+F0h] [rbp-1E8h] BYREF
  __int64 v80; // [rsp+100h] [rbp-1D8h]
  __int64 v81; // [rsp+108h] [rbp-1D0h]
  __int128 ptr; // [rsp+110h] [rbp-1C8h] BYREF
  __int64 v83[12]; // [rsp+120h] [rbp-1B8h] BYREF
  void *v84; // [rsp+180h] [rbp-158h] BYREF
  __int64 v85; // [rsp+188h] [rbp-150h]
  _BYTE v86[256]; // [rsp+190h] [rbp-148h] BYREF
  __int64 v87; // [rsp+290h] [rbp-48h]

  v7 = a3;
  v8 = a1;
  v61 = *(_QWORD *)(a3 + 24);
  v60 = v61 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v61 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v28 = 0;
    v60 = (__int64)sub_1E1F4E0(a1, v61, a5, a6);
    if ( (v60 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return v28;
  }
  v9 = *(__int64 **)(v7 + 32);
  v87 = 0;
  v84 = v86;
  v85 = 0x800000000LL;
  v63 = 0;
  if ( !v9 )
    goto LABEL_18;
  v9 = (__int64 *)sub_1E0AF30((__int64)a1, (__int64)v9);
  v10 = *(_QWORD *)(a4 + 8);
  if ( v10 )
  {
    v11 = *(__int64 **)(v10 + 64);
    if ( v11 )
    {
      v87 = *v11;
      v12 = *(_DWORD *)(v7 + 20);
      if ( !v12 )
      {
LABEL_41:
        v65 = *(_QWORD *)v10;
        if ( !*(_QWORD *)v10 )
          goto LABEL_19;
        v28 = 0;
        v40 = sub_1E237D0((__int64)a1, *(_QWORD *)v10, *(void **)(v10 + 8), 0, 0);
        v63 = v41;
        v65 = v40;
        if ( v40 )
          goto LABEL_19;
        goto LABEL_14;
      }
    }
    else
    {
      v12 = *(_DWORD *)(v7 + 20);
      v87 = 0;
      if ( !v12 )
        goto LABEL_41;
    }
  }
  else
  {
    v12 = *(_DWORD *)(v7 + 20);
    v87 = 0;
    if ( !v12 )
      goto LABEL_18;
  }
  v64 = 32LL * (unsigned int)(v12 - 1) + 48;
  v67 = v7;
  v13 = 16;
  do
  {
    while ( 1 )
    {
      v73.m128i_i64[1] = 0;
      v14 = *(_QWORD *)(v10 + 64);
      v72.m128i_i64[1] = 0;
      v72.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v15 = (__m128)_mm_loadu_si128((const __m128i *)(v14 + v13));
      v74 = v15;
      v75 = _mm_loadu_si128((const __m128i *)(v14 + v13 + 16));
      if ( (v15.m128_i32[0] & 0x7FFFFFFF) == 9 )
      {
        if ( (unsigned __int8)sub_1E24810(
                                a1,
                                a1,
                                (const __m128i *)v74.m128_u64[1],
                                a5,
                                v15,
                                (__int64)a1,
                                (const __m128i *)(v74.m128_u64[1] + 24LL * v74.m128_u32[1]),
                                (__int64 *)&v84,
                                0) )
          goto LABEL_13;
        goto LABEL_39;
      }
      if ( !sub_F1D570((__int64)&v74) )
        break;
      v70 = 0;
      v71 = 0;
      sub_1E4CF80(
        (unsigned int)&v76,
        *a1,
        (unsigned int)&v70,
        (unsigned int)&v71,
        v16,
        v17,
        v74.m128_i64[0],
        v74.m128_i64[1],
        v75.m128i_i32[0],
        v75.m128i_i64[1]);
      *(_QWORD *)&ptr = v83;
      *((_QWORD *)&ptr + 1) = 0x200000000LL;
      *(double *)a5.m128_u64 = sub_1E4C910(
                                 *a1,
                                 (unsigned int)&ptr,
                                 v18,
                                 v19,
                                 v20,
                                 v21,
                                 v76.m128i_i64[0],
                                 v76.m128i_i64[1],
                                 v77,
                                 v78);
      v22 = *a1;
      v23 = v71;
      v79.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v79.m128i_i64[1] = 0;
      v81 = 0;
      v24 = *(_DWORD *)(v22 + 12632);
      *(_DWORD *)(v22 + 12632) = 0;
      v66 = v24;
      if ( (unsigned __int8)sub_1E242D0(a1, &v76, &v79, 0, a5, v15)
        || (sub_1DFE5A0((__int64)&v68, a1, v70, v23, v25, v26, v79.m128i_i32[0], v79.m128i_i64[1], v80, v81),
            v27 = _mm_loadu_si128(&v69),
            v72 = _mm_loadu_si128(&v68),
            v73 = v27,
            (v68.m128i_i32[0] & 0x7FFFFFFF) == 0) )
      {
        *(_DWORD *)(v22 + 12632) = v66;
        if ( (__int64 *)ptr != v83 )
          free((void *)ptr);
LABEL_13:
        v28 = 0;
        goto LABEL_14;
      }
      sub_17429A0((__int64)&v84, &v72);
      *(_DWORD *)(v22 + 12632) = v66;
      if ( (__int64 *)ptr != v83 )
        free((void *)ptr);
LABEL_39:
      v10 = *(_QWORD *)(a4 + 8);
      v13 += 32;
      if ( v64 == v13 )
        goto LABEL_40;
    }
    v42 = &v72;
    if ( (unsigned __int8)sub_1E242D0(a1, (const __m128i *)&v74, &v72, 0, a5, v15) )
      goto LABEL_13;
    v43 = v84;
    v44 = (unsigned int)v85 + 1LL;
    v45 = (__m128i *)((char *)v84 + 32 * (unsigned int)v85);
    if ( v44 > HIDWORD(v85) )
    {
      if ( v84 > &v72 || v45 <= &v72 )
      {
        sub_2237220(&v84, v86, v44, 32);
        v45 = (__m128i *)((char *)v84 + 32 * (unsigned int)v85);
      }
      else
      {
        sub_2237220(&v84, v86, v44, 32);
        v42 = (__m128i *)((char *)v84 + (char *)&v72 - v43);
        v45 = (__m128i *)((char *)v84 + 32 * (unsigned int)v85);
      }
    }
    v13 += 32;
    *v45 = _mm_loadu_si128(v42);
    v46 = _mm_loadu_si128(v42 + 1);
    LODWORD(v85) = v85 + 1;
    v45[1] = v46;
    v10 = *(_QWORD *)(a4 + 8);
  }
  while ( v64 != v13 );
LABEL_40:
  v7 = v67;
  if ( v10 )
    goto LABEL_41;
LABEL_18:
  v65 = 0;
LABEL_19:
  if ( *(_DWORD *)(*a1 + 12632) || v60 != v61 || (*(_BYTE *)(v7 + 17) & 4) != 0 || (v28 = v7, *(_QWORD *)(v7 + 32)) )
  {
    v30 = (unsigned int)v85;
    v31 = 0;
    v32 = v83;
    *((_QWORD *)&ptr + 1) = 0x400000000LL;
    v33 = 0;
    *(_QWORD *)&ptr = v83;
    if ( (unsigned int)v85 > 4uLL )
    {
      sub_2237220(&ptr, v83, (unsigned int)v85, 24);
      v31 = DWORD2(ptr);
      v30 = (unsigned int)v85;
      v32 = (__int64 *)ptr;
      v33 = DWORD2(ptr);
    }
    v34 = 32 * v30;
    if ( (char *)v84 + v34 != v84 )
    {
      v35 = (__m128i *)v84;
      v36 = (__m128i *)((char *)v84 + v34);
      while ( 1 )
      {
        v37 = v33 + 1;
        v38 = v35;
        v39 = (__m128i *)&v32[3 * v33];
        if ( v37 > HIDWORD(ptr) )
        {
          if ( v32 > (__int64 *)v35 || v39 <= v35 )
          {
            sub_2237220(&ptr, v83, v37, 24);
            v39 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
          }
          else
          {
            sub_2237220(&ptr, v83, v37, 24);
            v38 = (const __m128i *)(ptr + (char *)v35 - (char *)v32);
            v39 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
          }
        }
        v35 += 2;
        *v39 = _mm_loadu_si128(v38);
        v39[1].m128i_i64[0] = v38[1].m128i_i64[0];
        v33 = (unsigned int)++DWORD2(ptr);
        if ( v36 == v35 )
          break;
        v32 = (__int64 *)ptr;
      }
      v8 = a1;
      v31 = (unsigned int)v33;
      v32 = (__int64 *)ptr;
    }
    v28 = sub_AB5840(*(_QWORD *)(*v8 + 248), v60, (*(_BYTE *)(v7 + 18) >> 3) & 3, 0, 0, v9, (__int64)v32, v31);
    if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      if ( (__int64 *)ptr != v83 )
        free((void *)ptr);
      goto LABEL_50;
    }
    v28 = 0;
    if ( (__int64 *)ptr != v83 )
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
      sub_B85890(&v79, *(_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL));
      v53 = *(_QWORD *)(a4 + 8);
      v54 = 0;
      if ( v53 )
        v54 = *(_DWORD *)(v53 + 32);
      v55 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL);
      DWORD2(ptr) = v54;
      *(_QWORD *)&ptr = v55;
      v83[0] = v79.m128i_i64[0];
      v56 = sub_F1ED40(*(_QWORD **)(*v8 + 248), (__int64 *)&v84, v55, v50, v51, v52);
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
                               *(_QWORD **)(*v8 + 248),
                               v65,
                               v63,
                               v59,
                               v58,
                               *(_QWORD *)(v7 + 32),
                               ptr,
                               v83[0],
                               v56);
    }
  }
LABEL_14:
  if ( v84 != v86 )
    free(v84);
  return v28;
}
