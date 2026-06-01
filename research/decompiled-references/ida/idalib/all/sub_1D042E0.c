__int64 __fastcall sub_1D042E0(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v7; // r12
  unsigned int *v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 *v13; // rax
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // rax
  __m128 v17; // xmm1
  int v18; // r8d
  int v19; // r9d
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // r15
  int v25; // ebx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128i v28; // xmm4
  __int64 v29; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  __m128i *v36; // rbp
  __m128i *v37; // rbx
  unsigned __int64 v38; // rdx
  const __m128i *v39; // r15
  __m128i *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r15
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rdx
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  int v56; // ecx
  __int64 v57; // [rsp+10h] [rbp-2C8h]
  __int64 *v58; // [rsp+18h] [rbp-2C0h]
  __int64 v60; // [rsp+28h] [rbp-2B0h]
  __int64 v61; // [rsp+30h] [rbp-2A8h]
  int v62; // [rsp+4Ch] [rbp-28Ch]
  __int64 v63; // [rsp+50h] [rbp-288h]
  __int64 v64; // [rsp+58h] [rbp-280h]
  __m128i v65; // [rsp+60h] [rbp-278h] BYREF
  __m128i v66; // [rsp+70h] [rbp-268h] BYREF
  unsigned int v67; // [rsp+88h] [rbp-250h] BYREF
  int v68; // [rsp+8Ch] [rbp-24Ch] BYREF
  __m128i v69; // [rsp+90h] [rbp-248h] BYREF
  __m128i v70; // [rsp+A0h] [rbp-238h]
  __m128 v71; // [rsp+B0h] [rbp-228h] BYREF
  __m128i v72; // [rsp+C0h] [rbp-218h]
  __m128i v73; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v74; // [rsp+E0h] [rbp-1F8h]
  __int64 v75; // [rsp+E8h] [rbp-1F0h]
  __m128i v76; // [rsp+F0h] [rbp-1E8h] BYREF
  __int64 v77; // [rsp+100h] [rbp-1D8h]
  __int64 v78; // [rsp+108h] [rbp-1D0h]
  __int128 ptr; // [rsp+110h] [rbp-1C8h] BYREF
  __int64 v80[12]; // [rsp+120h] [rbp-1B8h] BYREF
  void *v81; // [rsp+180h] [rbp-158h] BYREF
  __int64 v82; // [rsp+188h] [rbp-150h]
  _BYTE v83[256]; // [rsp+190h] [rbp-148h] BYREF
  __int64 v84; // [rsp+290h] [rbp-48h]

  v7 = a3;
  v8 = a1;
  v9 = *(_QWORD *)(a3 + 24);
  v57 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v29 = 0;
    v57 = sub_1CF6840(a1, v9, a5, a6);
    if ( (v57 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return v29;
  }
  v10 = *(_QWORD *)(v7 + 32);
  v84 = 0;
  v81 = v83;
  v82 = 0x800000000LL;
  v61 = 0;
  v58 = (__int64 *)v10;
  if ( !v10 )
  {
LABEL_17:
    v12 = 0;
    goto LABEL_18;
  }
  v11 = sub_1CB9120((__int64)a1, v10);
  v12 = *(_QWORD *)(a4 + 8);
  v58 = (__int64 *)v11;
  if ( !v12 )
  {
    v14 = *(_DWORD *)(v7 + 20);
    v84 = 0;
    if ( !v14 )
      goto LABEL_18;
    goto LABEL_6;
  }
  v13 = *(__int64 **)(v12 + 64);
  if ( v13 )
  {
    v84 = *v13;
    v14 = *(_DWORD *)(v7 + 20);
    if ( !v14 )
      goto LABEL_40;
    goto LABEL_6;
  }
  v14 = *(_DWORD *)(v7 + 20);
  v84 = 0;
  if ( !v14 )
  {
LABEL_40:
    if ( *(_QWORD *)v12 )
    {
      v41 = sub_1CFE3D0((__int64)a1, *(_QWORD *)v12, *(void **)(v12 + 8), 0, 0);
      v61 = v42;
      v12 = v41;
      if ( v41 )
        goto LABEL_18;
      v29 = 0;
      goto LABEL_14;
    }
    goto LABEL_17;
  }
LABEL_6:
  v63 = v9;
  v64 = v7;
  v15 = 16;
  v60 = 32LL * (unsigned int)(v14 - 1) + 48;
  do
  {
    while ( 1 )
    {
      v69.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v16 = *(_QWORD *)(v12 + 64);
      v70.m128i_i64[1] = 0;
      v69.m128i_i64[1] = 0;
      v17 = (__m128)_mm_loadu_si128((const __m128i *)(v16 + v15));
      v71 = v17;
      v72 = _mm_loadu_si128((const __m128i *)(v16 + v15 + 16));
      if ( (v17.m128_i32[0] & 0x7FFFFFFF) == 9 )
      {
        if ( (unsigned __int8)sub_1CFF3D0(
                                a1,
                                (__int64 *)a1,
                                v71.m128_i64[1],
                                (__int64)a1,
                                v71.m128_u64[1] + 24LL * v71.m128_u32[1],
                                (__int64)&v81,
                                0) )
          goto LABEL_13;
        goto LABEL_38;
      }
      if ( !sub_F1D570((__int64)&v71) )
        break;
      v67 = 0;
      v68 = 0;
      sub_1E4CF80(
        (unsigned int)&v73,
        *(_QWORD *)a1,
        (unsigned int)&v67,
        (unsigned int)&v68,
        v18,
        v19,
        v71.m128_i64[0],
        v71.m128_i64[1],
        v72.m128i_i32[0],
        v72.m128i_i64[1]);
      *(_QWORD *)&ptr = v80;
      *((_QWORD *)&ptr + 1) = 0x200000000LL;
      *(double *)a5.m128_u64 = sub_1E4C910(
                                 *(_QWORD *)a1,
                                 (unsigned int)&ptr,
                                 v20,
                                 v21,
                                 v22,
                                 v23,
                                 v73.m128i_i64[0],
                                 v73.m128i_i64[1],
                                 v74,
                                 v75);
      v24 = *(_QWORD *)a1;
      v62 = v68;
      v76.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v76.m128i_i64[1] = 0;
      v78 = 0;
      v25 = *(_DWORD *)(v24 + 12632);
      *(_DWORD *)(v24 + 12632) = 0;
      if ( (unsigned __int8)sub_1CFEEE0(a1, &v73, &v76, 0, a5, v17)
        || (sub_1CB02D0((__int64)&v65, a1, v67, v62, v26, v27, v76.m128i_i32[0], v76.m128i_i64[1], v77, v78),
            v28 = _mm_loadu_si128(&v66),
            v69 = _mm_loadu_si128(&v65),
            v70 = v28,
            (v65.m128i_i32[0] & 0x7FFFFFFF) == 0) )
      {
        *(_DWORD *)(v24 + 12632) = v25;
        if ( (__int64 *)ptr != v80 )
          free((void *)ptr);
LABEL_13:
        v29 = 0;
        goto LABEL_14;
      }
      sub_17429A0((__int64)&v81, &v69);
      *(_DWORD *)(v24 + 12632) = v25;
      if ( (__int64 *)ptr != v80 )
        free((void *)ptr);
LABEL_38:
      v12 = *(_QWORD *)(a4 + 8);
      v15 += 32;
      if ( v60 == v15 )
        goto LABEL_39;
    }
    if ( (unsigned __int8)sub_1CFEEE0(a1, (const __m128i *)&v71, &v69, 0, a5, v17) )
      goto LABEL_13;
    v15 += 32;
    sub_17429A0((__int64)&v81, &v69);
    v12 = *(_QWORD *)(a4 + 8);
  }
  while ( v60 != v15 );
LABEL_39:
  v9 = v63;
  v7 = v64;
  if ( v12 )
    goto LABEL_40;
LABEL_18:
  if ( *(_DWORD *)(*(_QWORD *)a1 + 12632LL)
    || v57 != v9
    || (*(_BYTE *)(v7 + 17) & 4) != 0
    || (v29 = v7, *(_QWORD *)(v7 + 32)) )
  {
    v31 = (unsigned int)v82;
    v32 = 0;
    v33 = v80;
    *((_QWORD *)&ptr + 1) = 0x400000000LL;
    v34 = 0;
    *(_QWORD *)&ptr = v80;
    if ( (unsigned int)v82 > 4uLL )
    {
      sub_2237220(&ptr, v80, (unsigned int)v82, 24);
      v32 = DWORD2(ptr);
      v31 = (unsigned int)v82;
      v33 = (__int64 *)ptr;
      v34 = DWORD2(ptr);
    }
    v35 = 32 * v31;
    if ( (char *)v81 + v35 != v81 )
    {
      v36 = (__m128i *)v81;
      v37 = (__m128i *)((char *)v81 + v35);
      while ( 1 )
      {
        v38 = v34 + 1;
        v39 = v36;
        v40 = (__m128i *)&v33[3 * v34];
        if ( v38 > HIDWORD(ptr) )
        {
          if ( v33 > (__int64 *)v36 || v40 <= v36 )
          {
            sub_2237220(&ptr, v80, v38, 24);
            v40 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
          }
          else
          {
            sub_2237220(&ptr, v80, v38, 24);
            v39 = (const __m128i *)(ptr + (char *)v36 - (char *)v33);
            v40 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
          }
        }
        v36 += 2;
        *v40 = _mm_loadu_si128(v39);
        v40[1].m128i_i64[0] = v39[1].m128i_i64[0];
        v34 = (unsigned int)++DWORD2(ptr);
        if ( v37 == v36 )
          break;
        v33 = (__int64 *)ptr;
      }
      v8 = a1;
      v32 = (unsigned int)v34;
      v33 = (__int64 *)ptr;
    }
    v29 = sub_AB5840(
            *(_QWORD *)(*(_QWORD *)v8 + 248LL),
            v57,
            (*(_BYTE *)(v7 + 18) >> 3) & 3,
            0,
            0,
            v58,
            (__int64)v33,
            v32);
    if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      if ( (__int64 *)ptr != v80 )
        free((void *)ptr);
      goto LABEL_48;
    }
    v29 = 0;
    if ( (__int64 *)ptr != v80 )
      free((void *)ptr);
  }
  else
  {
LABEL_48:
    sub_1EA6140(a2, v29, 16, 8);
    v44 = v43;
    *(_DWORD *)v43 = *(_DWORD *)a4;
    v45 = *(_DWORD *)(a4 + 4);
    *(_QWORD *)(v43 + 8) = 0;
    *(_DWORD *)(v43 + 4) = v45;
    v46 = *(_QWORD *)(v7 + 32);
    if ( v46 )
    {
      sub_B85890(&v76, *(_QWORD *)(v46 + 40));
      v50 = *(_QWORD *)(a4 + 8);
      v51 = 0;
      if ( v50 )
        v51 = *(_DWORD *)(v50 + 32);
      v52 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL);
      DWORD2(ptr) = v51;
      *(_QWORD *)&ptr = v52;
      v80[0] = v76.m128i_i64[0];
      v53 = sub_F1ED40(*(_QWORD **)(*(_QWORD *)v8 + 248LL), (__int64 *)&v81, v52, v47, v48, v49);
      v54 = *(_QWORD *)(a4 + 8);
      if ( v54 )
      {
        v55 = *(_QWORD *)(v54 + 48);
        v56 = *(_DWORD *)(v54 + 16);
      }
      else
      {
        v55 = 0;
        v56 = 0;
      }
      *(_QWORD *)(v44 + 8) = sub_A55700(
                               *(_QWORD **)(*(_QWORD *)v8 + 248LL),
                               v12,
                               v61,
                               v56,
                               v55,
                               *(_QWORD *)(v7 + 32),
                               ptr,
                               v80[0],
                               v53);
    }
  }
LABEL_14:
  if ( v81 != v83 )
    free(v81);
  return v29;
}
