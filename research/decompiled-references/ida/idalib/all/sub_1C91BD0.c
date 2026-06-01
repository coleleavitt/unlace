__int64 __fastcall sub_1C91BD0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
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
  __int64 v30; // rcx
  __int64 *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __m128i *v37; // rbp
  __m128i *v38; // rbx
  unsigned __int64 v39; // rdx
  const __m128i *v40; // r14
  __m128i *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r15
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  int v54; // ecx
  __m128i *v55; // rbx
  _BYTE *v56; // r14
  unsigned __int64 v57; // rdx
  __m128i *v58; // rax
  __m128i v59; // xmm6
  __int64 v60; // [rsp+8h] [rbp-2C0h]
  __int64 v62; // [rsp+18h] [rbp-2B0h]
  __int64 v63; // [rsp+20h] [rbp-2A8h]
  int v64; // [rsp+38h] [rbp-290h]
  __int64 v65; // [rsp+38h] [rbp-290h]
  __int64 v66; // [rsp+48h] [rbp-280h]
  __m128i v67; // [rsp+50h] [rbp-278h] BYREF
  __m128i v68; // [rsp+60h] [rbp-268h] BYREF
  unsigned int v69; // [rsp+78h] [rbp-250h] BYREF
  int v70; // [rsp+7Ch] [rbp-24Ch] BYREF
  __m128i v71; // [rsp+80h] [rbp-248h] BYREF
  __m128i v72; // [rsp+90h] [rbp-238h]
  __m128 v73; // [rsp+A0h] [rbp-228h] BYREF
  __m128i v74; // [rsp+B0h] [rbp-218h]
  __m128i v75; // [rsp+C0h] [rbp-208h] BYREF
  __int64 v76; // [rsp+D0h] [rbp-1F8h]
  __int64 v77; // [rsp+D8h] [rbp-1F0h]
  __m128i v78; // [rsp+E0h] [rbp-1E8h] BYREF
  __int64 v79; // [rsp+F0h] [rbp-1D8h]
  __int64 v80; // [rsp+F8h] [rbp-1D0h]
  __int128 ptr; // [rsp+100h] [rbp-1C8h] BYREF
  __int64 v82[12]; // [rsp+110h] [rbp-1B8h] BYREF
  void *v83; // [rsp+170h] [rbp-158h] BYREF
  __int64 v84; // [rsp+178h] [rbp-150h]
  _BYTE v85[256]; // [rsp+180h] [rbp-148h] BYREF
  __int64 v86; // [rsp+280h] [rbp-48h]

  v7 = a3;
  v8 = a1;
  v60 = *(_QWORD *)(a3 + 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v60 )
  {
    v28 = 0;
    v60 = (__int64)sub_1C8ABA0(a1, *(_QWORD *)(a3 + 24), a5, a6);
    if ( (v60 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return v28;
  }
  v9 = *(__int64 **)(v7 + 32);
  v86 = 0;
  v83 = v85;
  v84 = 0x800000000LL;
  v63 = 0;
  if ( !v9 )
  {
    v30 = 0;
    v65 = 0;
    v31 = v82;
    *((_QWORD *)&ptr + 1) = 0x400000000LL;
    *(_QWORD *)&ptr = v82;
    goto LABEL_18;
  }
  v9 = (__int64 *)sub_1C7A830((__int64)a1, (__int64)v9);
  v10 = *(_QWORD *)(a4 + 8);
  if ( v10 )
  {
    v11 = *(__int64 **)(v10 + 64);
    if ( v11 )
    {
      v86 = *v11;
      v12 = *(_DWORD *)(v7 + 20);
      if ( !v12 )
      {
LABEL_26:
        v65 = *(_QWORD *)v10;
        if ( !*(_QWORD *)v10
          || (v28 = 0,
              v32 = sub_1C8F200((__int64)a1, *(_QWORD *)v10, *(void **)(v10 + 8), 0, 0),
              v63 = v33,
              (v65 = v32) != 0) )
        {
          v34 = (unsigned int)v84;
          goto LABEL_29;
        }
        goto LABEL_14;
      }
    }
    else
    {
      v12 = *(_DWORD *)(v7 + 20);
      v86 = 0;
      if ( !v12 )
        goto LABEL_26;
    }
  }
  else
  {
    v12 = *(_DWORD *)(v7 + 20);
    v86 = 0;
    if ( !v12 )
      goto LABEL_56;
  }
  v66 = v7;
  v13 = 16;
  v62 = 32LL * (unsigned int)(v12 - 1) + 48;
  do
  {
    while ( 1 )
    {
      v72.m128i_i64[1] = 0;
      v14 = *(_QWORD *)(v10 + 64);
      v71.m128i_i64[1] = 0;
      v71.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v15 = (__m128)_mm_loadu_si128((const __m128i *)(v14 + v13));
      v73 = v15;
      v74 = _mm_loadu_si128((const __m128i *)(v14 + v13 + 16));
      if ( (v15.m128_i32[0] & 0x7FFFFFFF) == 9 )
      {
        if ( (unsigned __int8)sub_1C90230(
                                a1,
                                a1,
                                v73.m128_i64[1],
                                (__int64)a1,
                                v73.m128_u64[1] + 24LL * v73.m128_u32[1],
                                (__int64 *)&v83,
                                0) )
          goto LABEL_13;
        goto LABEL_24;
      }
      if ( !sub_F1D570((__int64)&v73) )
        break;
      v69 = 0;
      v70 = 0;
      sub_1E4CF80(
        (unsigned int)&v75,
        *a1,
        (unsigned int)&v69,
        (unsigned int)&v70,
        v16,
        v17,
        v73.m128_i64[0],
        v73.m128_i64[1],
        v74.m128i_i32[0],
        v74.m128i_i64[1]);
      *(_QWORD *)&ptr = v82;
      *((_QWORD *)&ptr + 1) = 0x200000000LL;
      *(double *)a5.m128_u64 = sub_1E4C910(
                                 *a1,
                                 (unsigned int)&ptr,
                                 v18,
                                 v19,
                                 v20,
                                 v21,
                                 v75.m128i_i64[0],
                                 v75.m128i_i64[1],
                                 v76,
                                 v77);
      v22 = *a1;
      v23 = v70;
      v78.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v78.m128i_i64[1] = 0;
      v80 = 0;
      v24 = *(_DWORD *)(v22 + 12632);
      *(_DWORD *)(v22 + 12632) = 0;
      v64 = v24;
      if ( (unsigned __int8)sub_1C8FCF0(a1, &v75, &v78, 0, a5, v15)
        || (sub_1C735A0((__int64)&v67, a1, v69, v23, v25, v26, v78.m128i_i32[0], v78.m128i_i64[1], v79, v80),
            v27 = _mm_loadu_si128(&v68),
            v71 = _mm_loadu_si128(&v67),
            v72 = v27,
            (v67.m128i_i32[0] & 0x7FFFFFFF) == 0) )
      {
        *(_DWORD *)(v22 + 12632) = v64;
        if ( (__int64 *)ptr != v82 )
          free((void *)ptr);
LABEL_13:
        v28 = 0;
        goto LABEL_14;
      }
      sub_17429A0((__int64)&v83, &v71);
      *(_DWORD *)(v22 + 12632) = v64;
      if ( (__int64 *)ptr != v82 )
        free((void *)ptr);
LABEL_24:
      v10 = *(_QWORD *)(a4 + 8);
      v13 += 32;
      if ( v13 == v62 )
        goto LABEL_25;
    }
    v55 = &v71;
    if ( (unsigned __int8)sub_1C8FCF0(a1, (const __m128i *)&v73, &v71, 0, a5, v15) )
      goto LABEL_13;
    v56 = v83;
    v57 = (unsigned int)v84 + 1LL;
    v58 = (__m128i *)((char *)v83 + 32 * (unsigned int)v84);
    if ( v57 > HIDWORD(v84) )
    {
      if ( v83 > &v71 || v58 <= &v71 )
      {
        sub_2237220(&v83, v85, v57, 32);
        v58 = (__m128i *)((char *)v83 + 32 * (unsigned int)v84);
      }
      else
      {
        sub_2237220(&v83, v85, v57, 32);
        v55 = (__m128i *)((char *)v83 + (char *)&v71 - v56);
        v58 = (__m128i *)((char *)v83 + 32 * (unsigned int)v84);
      }
    }
    v13 += 32;
    *v58 = _mm_loadu_si128(v55);
    v59 = _mm_loadu_si128(v55 + 1);
    LODWORD(v84) = v84 + 1;
    v58[1] = v59;
    v10 = *(_QWORD *)(a4 + 8);
  }
  while ( v13 != v62 );
LABEL_25:
  v7 = v66;
  if ( v10 )
    goto LABEL_26;
LABEL_56:
  v65 = 0;
  v34 = (unsigned int)v84;
LABEL_29:
  v31 = v82;
  *((_QWORD *)&ptr + 1) = 0x400000000LL;
  *(_QWORD *)&ptr = v82;
  if ( v34 <= 4 )
  {
    v30 = 0;
    v35 = 0;
  }
  else
  {
    sub_2237220(&ptr, v82, v34, 24);
    v30 = DWORD2(ptr);
    v34 = (unsigned int)v84;
    v31 = (__int64 *)ptr;
    v35 = DWORD2(ptr);
  }
  v36 = 32 * v34;
  if ( (char *)v83 + v36 != v83 )
  {
    v37 = (__m128i *)v83;
    v38 = (__m128i *)((char *)v83 + v36);
    while ( 1 )
    {
      v39 = v35 + 1;
      v40 = v37;
      v41 = (__m128i *)&v31[3 * v35];
      if ( v39 > HIDWORD(ptr) )
      {
        if ( v31 > (__int64 *)v37 || v41 <= v37 )
        {
          sub_2237220(&ptr, v82, v39, 24);
          v41 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
        }
        else
        {
          sub_2237220(&ptr, v82, v39, 24);
          v40 = (const __m128i *)(ptr + (char *)v37 - (char *)v31);
          v41 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
        }
      }
      v37 += 2;
      *v41 = _mm_loadu_si128(v40);
      v41[1].m128i_i64[0] = v40[1].m128i_i64[0];
      v35 = (unsigned int)++DWORD2(ptr);
      if ( v38 == v37 )
        break;
      v31 = (__int64 *)ptr;
    }
    v8 = a1;
    v30 = (unsigned int)v35;
    v31 = (__int64 *)ptr;
  }
LABEL_18:
  v28 = sub_AB5840(*(_QWORD *)(*v8 + 248), v60, (*(_BYTE *)(v7 + 18) >> 3) & 3, 0, 0, v9, (__int64)v31, v30);
  if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( (__int64 *)ptr != v82 )
      free((void *)ptr);
    sub_1EA6140(a2, v28, 16, 8);
    v43 = v42;
    *(_DWORD *)v42 = *(_DWORD *)a4;
    v44 = *(_DWORD *)(a4 + 4);
    *(_QWORD *)(v42 + 8) = 0;
    *(_DWORD *)(v42 + 4) = v44;
    if ( *(_QWORD *)(v7 + 32) )
    {
      sub_B85890(&v78, *(_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL));
      v48 = *(_QWORD *)(a4 + 8);
      v49 = 0;
      if ( v48 )
        v49 = *(_DWORD *)(v48 + 32);
      v50 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL);
      DWORD2(ptr) = v49;
      *(_QWORD *)&ptr = v50;
      v82[0] = v78.m128i_i64[0];
      v51 = sub_F1ED40(*(_QWORD **)(*v8 + 248), (__int64 *)&v83, v50, v45, v46, v47);
      v52 = *(_QWORD *)(a4 + 8);
      if ( v52 )
      {
        v53 = *(_QWORD *)(v52 + 48);
        v54 = *(_DWORD *)(v52 + 16);
      }
      else
      {
        v53 = 0;
        v54 = 0;
      }
      *(_QWORD *)(v43 + 8) = sub_A55700(
                               *(_QWORD **)(*v8 + 248),
                               v65,
                               v63,
                               v54,
                               v53,
                               *(_QWORD *)(v7 + 32),
                               ptr,
                               v82[0],
                               v51);
    }
  }
  else
  {
    v28 = 0;
    if ( (__int64 *)ptr != v82 )
      free((void *)ptr);
  }
LABEL_14:
  if ( v83 != v85 )
    free(v83);
  return v28;
}
