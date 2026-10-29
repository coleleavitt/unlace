__int64 __fastcall sub_196C1F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v7; // r12
  __int64 *v8; // rbp
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
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  __m128i v26; // xmm4
  __int64 v27; // rbx
  __int64 v29; // rcx
  __int64 *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __m128i *v36; // rbp
  __m128i *v37; // rbx
  unsigned __int64 v38; // rdx
  const __m128i *v39; // r15
  __m128i *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r15
  int v43; // eax
  __int64 v44; // rax
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
  __int64 v55; // [rsp+0h] [rbp-2C8h]
  __int64 *v56; // [rsp+8h] [rbp-2C0h]
  __int64 v57; // [rsp+10h] [rbp-2B8h]
  __int64 v58; // [rsp+18h] [rbp-2B0h]
  __int64 v59; // [rsp+20h] [rbp-2A8h]
  int v60; // [rsp+38h] [rbp-290h]
  __int64 v61; // [rsp+38h] [rbp-290h]
  int v62; // [rsp+44h] [rbp-284h]
  __int64 v63; // [rsp+48h] [rbp-280h]
  __m128i v64; // [rsp+50h] [rbp-278h] BYREF
  __m128i v65; // [rsp+60h] [rbp-268h] BYREF
  unsigned int v66; // [rsp+78h] [rbp-250h] BYREF
  int v67; // [rsp+7Ch] [rbp-24Ch] BYREF
  __m128i v68; // [rsp+80h] [rbp-248h] BYREF
  __m128i v69; // [rsp+90h] [rbp-238h]
  __m128 v70; // [rsp+A0h] [rbp-228h] BYREF
  __m128i v71; // [rsp+B0h] [rbp-218h]
  __m128i v72; // [rsp+C0h] [rbp-208h] BYREF
  __int64 v73; // [rsp+D0h] [rbp-1F8h]
  __int64 v74; // [rsp+D8h] [rbp-1F0h]
  __m128i v75; // [rsp+E0h] [rbp-1E8h] BYREF
  __int64 v76; // [rsp+F0h] [rbp-1D8h]
  __int64 v77; // [rsp+F8h] [rbp-1D0h]
  __int128 ptr; // [rsp+100h] [rbp-1C8h] BYREF
  __int64 v79[12]; // [rsp+110h] [rbp-1B8h] BYREF
  void *v80; // [rsp+170h] [rbp-158h] BYREF
  __int64 v81; // [rsp+178h] [rbp-150h]
  _BYTE v82[256]; // [rsp+180h] [rbp-148h] BYREF
  __int64 v83; // [rsp+280h] [rbp-48h]

  v7 = a3;
  v8 = a1;
  v57 = a2;
  v55 = *(_QWORD *)(a3 + 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v55 )
  {
    v27 = 0;
    v55 = (__int64)sub_1942710(a1, *(_QWORD *)(a3 + 24), a5, a6);
    if ( (v55 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return v27;
  }
  v9 = *(_QWORD *)(v7 + 32);
  v83 = 0;
  v59 = 0;
  v80 = v82;
  v81 = 0x800000000LL;
  v56 = (__int64 *)v9;
  if ( !v9 )
  {
    v29 = 0;
    v61 = 0;
    v30 = v79;
    *((_QWORD *)&ptr + 1) = 0x400000000LL;
    *(_QWORD *)&ptr = v79;
    goto LABEL_18;
  }
  v56 = (__int64 *)sub_18CBB50((__int64)a1, v9);
  v10 = *(_QWORD *)(a4 + 8);
  if ( v10 )
  {
    v11 = *(__int64 **)(v10 + 64);
    if ( v11 )
    {
      v83 = *v11;
      v12 = *(_DWORD *)(v7 + 20);
      if ( !v12 )
      {
LABEL_26:
        v61 = *(_QWORD *)v10;
        if ( !*(_QWORD *)v10
          || (v27 = 0,
              v31 = sub_1969B50((__int64)a1, *(_QWORD *)v10, *(void **)(v10 + 8), 0, 0),
              v59 = v32,
              (v61 = v31) != 0) )
        {
          v33 = (unsigned int)v81;
          goto LABEL_29;
        }
        goto LABEL_14;
      }
    }
    else
    {
      v12 = *(_DWORD *)(v7 + 20);
      v83 = 0;
      if ( !v12 )
        goto LABEL_26;
    }
  }
  else
  {
    v12 = *(_DWORD *)(v7 + 20);
    v83 = 0;
    if ( !v12 )
      goto LABEL_55;
  }
  v63 = v7;
  v13 = 16;
  v58 = 32LL * (unsigned int)(v12 - 1) + 48;
  do
  {
    while ( 1 )
    {
      v69.m128i_i64[1] = 0;
      v14 = *(_QWORD *)(v10 + 64);
      v68.m128i_i64[1] = 0;
      v68.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v15 = (__m128)_mm_loadu_si128((const __m128i *)(v14 + v13));
      v70 = v15;
      v71 = _mm_loadu_si128((const __m128i *)(v14 + v13 + 16));
      if ( (v15.m128_i32[0] & 0x7FFFFFFF) == 9 )
      {
        if ( (unsigned __int8)sub_196ABD0(
                                a1,
                                a1,
                                v70.m128_i64[1],
                                (__int64)a1,
                                v70.m128_u64[1] + 24LL * v70.m128_u32[1],
                                (__int64)&v80,
                                0) )
          goto LABEL_13;
        goto LABEL_24;
      }
      if ( !sub_F1D570((__int64)&v70) )
        break;
      v66 = 0;
      v67 = 0;
      sub_1E4CF80(
        (unsigned int)&v72,
        *a1,
        (unsigned int)&v66,
        (unsigned int)&v67,
        v16,
        v17,
        v70.m128_i64[0],
        v70.m128_i64[1],
        v71.m128i_i32[0],
        v71.m128i_i64[1]);
      *(_QWORD *)&ptr = v79;
      *((_QWORD *)&ptr + 1) = 0x200000000LL;
      *(double *)a5.m128_u64 = sub_1E4C910(
                                 *a1,
                                 (unsigned int)&ptr,
                                 v18,
                                 v19,
                                 v20,
                                 v21,
                                 v72.m128i_i64[0],
                                 v72.m128i_i64[1],
                                 v73,
                                 v74,
                                 v55,
                                 v56,
                                 v57);
      v22 = *a1;
      v62 = v67;
      v75.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v75.m128i_i64[1] = 0;
      v77 = 0;
      v23 = *(_DWORD *)(v22 + 12632);
      *(_DWORD *)(v22 + 12632) = 0;
      v60 = v23;
      if ( (unsigned __int8)sub_196A640(a1, &v72, &v75, 0, a5, v15)
        || (sub_18BBBC0((__int64)&v64, a1, v66, v62, v24, v25, v75.m128i_i32[0], v75.m128i_i64[1], v76, v77),
            v26 = _mm_loadu_si128(&v65),
            v68 = _mm_loadu_si128(&v64),
            v69 = v26,
            (v64.m128i_i32[0] & 0x7FFFFFFF) == 0) )
      {
        *(_DWORD *)(v22 + 12632) = v60;
        if ( (__int64 *)ptr != v79 )
          free((void *)ptr);
LABEL_13:
        v27 = 0;
        goto LABEL_14;
      }
      sub_17429A0((__int64)&v80, &v68);
      *(_DWORD *)(v22 + 12632) = v60;
      if ( (__int64 *)ptr != v79 )
        free((void *)ptr);
LABEL_24:
      v10 = *(_QWORD *)(a4 + 8);
      v13 += 32;
      if ( v58 == v13 )
        goto LABEL_25;
    }
    if ( (unsigned __int8)sub_196A640(a1, (const __m128i *)&v70, &v68, 0, a5, v15) )
      goto LABEL_13;
    v13 += 32;
    sub_17429A0((__int64)&v80, &v68);
    v10 = *(_QWORD *)(a4 + 8);
  }
  while ( v58 != v13 );
LABEL_25:
  v7 = v63;
  if ( v10 )
    goto LABEL_26;
LABEL_55:
  v61 = 0;
  v33 = (unsigned int)v81;
LABEL_29:
  v30 = v79;
  *((_QWORD *)&ptr + 1) = 0x400000000LL;
  *(_QWORD *)&ptr = v79;
  if ( v33 <= 4 )
  {
    v29 = 0;
    v34 = 0;
  }
  else
  {
    sub_2237220(&ptr, v79, v33, 24);
    v29 = DWORD2(ptr);
    v33 = (unsigned int)v81;
    v30 = (__int64 *)ptr;
    v34 = DWORD2(ptr);
  }
  v35 = 32 * v33;
  if ( (char *)v80 + v35 != v80 )
  {
    v36 = (__m128i *)v80;
    v37 = (__m128i *)((char *)v80 + v35);
    while ( 1 )
    {
      v38 = v34 + 1;
      v39 = v36;
      v40 = (__m128i *)&v30[3 * v34];
      if ( v38 > HIDWORD(ptr) )
      {
        if ( v30 > (__int64 *)v36 || v40 <= v36 )
        {
          sub_2237220(&ptr, v79, v38, 24);
          v40 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
        }
        else
        {
          sub_2237220(&ptr, v79, v38, 24);
          v39 = (const __m128i *)(ptr + (char *)v36 - (char *)v30);
          v40 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
        }
      }
      v36 += 2;
      *v40 = _mm_loadu_si128(v39);
      v40[1].m128i_i64[0] = v39[1].m128i_i64[0];
      v34 = (unsigned int)++DWORD2(ptr);
      if ( v37 == v36 )
        break;
      v30 = (__int64 *)ptr;
    }
    v8 = a1;
    v29 = (unsigned int)v34;
    v30 = (__int64 *)ptr;
  }
LABEL_18:
  v27 = sub_AB5840(*(_QWORD *)(*v8 + 248), v55, (*(_BYTE *)(v7 + 18) >> 3) & 3, 0, 0, v56, (__int64)v30, v29);
  if ( (v27 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( (__int64 *)ptr != v79 )
      free((void *)ptr);
    sub_1EA6140(v57, v27, 16, 8);
    v42 = v41;
    *(_DWORD *)v41 = *(_DWORD *)a4;
    v43 = *(_DWORD *)(a4 + 4);
    *(_QWORD *)(v41 + 8) = 0;
    *(_DWORD *)(v41 + 4) = v43;
    v44 = *(_QWORD *)(v7 + 32);
    if ( v44 )
    {
      sub_B85890(&v75, *(_QWORD *)(v44 + 40));
      v48 = *(_QWORD *)(a4 + 8);
      v49 = 0;
      if ( v48 )
        v49 = *(_DWORD *)(v48 + 32);
      v50 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL);
      DWORD2(ptr) = v49;
      *(_QWORD *)&ptr = v50;
      v79[0] = v75.m128i_i64[0];
      v51 = sub_F1ED40(*(_QWORD **)(*v8 + 248), (__int64 *)&v80, v50, v45, v46, v47);
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
      *(_QWORD *)(v42 + 8) = sub_A55700(
                               *(_QWORD **)(*v8 + 248),
                               v61,
                               v59,
                               v54,
                               v53,
                               *(_QWORD *)(v7 + 32),
                               ptr,
                               v79[0],
                               v51);
    }
  }
  else
  {
    v27 = 0;
    if ( (__int64 *)ptr != v79 )
      free((void *)ptr);
  }
LABEL_14:
  if ( v80 != v82 )
    free(v80);
  return v27;
}
