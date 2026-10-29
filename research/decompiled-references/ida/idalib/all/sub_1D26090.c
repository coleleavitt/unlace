__int64 __fastcall sub_1D26090(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // r12
  __int64 **v10; // rbp
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 *v15; // rax
  int v16; // eax
  __int64 v17; // r12
  __int64 v18; // rax
  __m128 v19; // xmm1
  int v20; // r8d
  int v21; // r9d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 *v26; // r15
  int v27; // ebx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128i v30; // xmm4
  __int64 v31; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rdx
  __m128i *v38; // rbp
  __m128i *v39; // rbx
  unsigned __int64 v40; // rdx
  const __m128i *v41; // r15
  __m128i *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // r15
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rdx
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  int v58; // ecx
  __int64 v59; // [rsp+10h] [rbp-2C8h]
  __int64 *v60; // [rsp+18h] [rbp-2C0h]
  __int64 v62; // [rsp+28h] [rbp-2B0h]
  __int64 v63; // [rsp+30h] [rbp-2A8h]
  int v64; // [rsp+4Ch] [rbp-28Ch]
  __int64 v65; // [rsp+50h] [rbp-288h]
  __int64 v66; // [rsp+58h] [rbp-280h]
  __m128i v67; // [rsp+60h] [rbp-278h] BYREF
  __m128i v68; // [rsp+70h] [rbp-268h] BYREF
  unsigned int v69; // [rsp+88h] [rbp-250h] BYREF
  int v70; // [rsp+8Ch] [rbp-24Ch] BYREF
  __m128i v71; // [rsp+90h] [rbp-248h] BYREF
  __m128i v72; // [rsp+A0h] [rbp-238h]
  __m128 v73; // [rsp+B0h] [rbp-228h] BYREF
  __m128i v74; // [rsp+C0h] [rbp-218h]
  __m128i v75; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v76; // [rsp+E0h] [rbp-1F8h]
  __int64 v77; // [rsp+E8h] [rbp-1F0h]
  __m128i v78; // [rsp+F0h] [rbp-1E8h] BYREF
  __int64 v79; // [rsp+100h] [rbp-1D8h]
  __int64 v80; // [rsp+108h] [rbp-1D0h]
  __int128 ptr; // [rsp+110h] [rbp-1C8h] BYREF
  __int64 v82[12]; // [rsp+120h] [rbp-1B8h] BYREF
  void *v83; // [rsp+180h] [rbp-158h] BYREF
  __int64 v84; // [rsp+188h] [rbp-150h]
  _BYTE v85[256]; // [rsp+190h] [rbp-148h] BYREF
  __int64 v86; // [rsp+290h] [rbp-48h]

  v9 = a3;
  v10 = a1;
  v11 = *(_QWORD *)(a3 + 24);
  v59 = v11 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v31 = 0;
    v59 = (__int64)sub_1D1AC70(a1, v11, a7, a8);
    if ( (v59 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return v31;
  }
  v12 = *(_QWORD *)(v9 + 32);
  v86 = 0;
  v83 = v85;
  v84 = 0x800000000LL;
  v63 = 0;
  v60 = (__int64 *)v12;
  if ( !v12 )
  {
LABEL_17:
    v14 = 0;
    goto LABEL_18;
  }
  v13 = sub_1D1B120((__int64)a1, v12, a7, a8, a3, a4, a5, a6);
  v14 = *(_QWORD *)(a4 + 8);
  v60 = (__int64 *)v13;
  if ( !v14 )
  {
    v16 = *(_DWORD *)(v9 + 20);
    v86 = 0;
    if ( !v16 )
      goto LABEL_18;
    goto LABEL_6;
  }
  v15 = *(__int64 **)(v14 + 64);
  if ( v15 )
  {
    v86 = *v15;
    v16 = *(_DWORD *)(v9 + 20);
    if ( !v16 )
      goto LABEL_40;
    goto LABEL_6;
  }
  v16 = *(_DWORD *)(v9 + 20);
  v86 = 0;
  if ( !v16 )
  {
LABEL_40:
    if ( *(_QWORD *)v14 )
    {
      v43 = sub_1D23E30(a1, *(_QWORD *)v14, *(void **)(v14 + 8), 0, 0);
      v63 = v44;
      v14 = v43;
      if ( v43 )
        goto LABEL_18;
      v31 = 0;
      goto LABEL_14;
    }
    goto LABEL_17;
  }
LABEL_6:
  v65 = v11;
  v66 = v9;
  v17 = 16;
  v62 = 32LL * (unsigned int)(v16 - 1) + 48;
  do
  {
    while ( 1 )
    {
      v71.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v18 = *(_QWORD *)(v14 + 64);
      v72.m128i_i64[1] = 0;
      v71.m128i_i64[1] = 0;
      v19 = (__m128)_mm_loadu_si128((const __m128i *)(v18 + v17));
      v73 = v19;
      v74 = _mm_loadu_si128((const __m128i *)(v18 + v17 + 16));
      if ( (v19.m128_i32[0] & 0x7FFFFFFF) == 9 )
      {
        if ( (unsigned __int8)sub_1D24B10(
                                a1,
                                (__int64 *)a1,
                                v73.m128_i64[1],
                                (__int64)a1,
                                v73.m128_u64[1] + 24LL * v73.m128_u32[1],
                                (__int64)&v83,
                                0) )
          goto LABEL_13;
        goto LABEL_38;
      }
      if ( !sub_F1D570((__int64)&v73) )
        break;
      v69 = 0;
      v70 = 0;
      sub_1E4CF80(
        (unsigned int)&v75,
        (unsigned int)*a1,
        (unsigned int)&v69,
        (unsigned int)&v70,
        v20,
        v21,
        v73.m128_i64[0],
        v73.m128_i64[1],
        v74.m128i_i32[0],
        v74.m128i_i64[1]);
      *(_QWORD *)&ptr = v82;
      *((_QWORD *)&ptr + 1) = 0x200000000LL;
      *(double *)a7.m128_u64 = sub_1E4C910(
                                 (unsigned int)*a1,
                                 (unsigned int)&ptr,
                                 v22,
                                 v23,
                                 v24,
                                 v25,
                                 v75.m128i_i64[0],
                                 v75.m128i_i64[1],
                                 v76,
                                 v77);
      v26 = *a1;
      v64 = v70;
      v78.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v78.m128i_i64[1] = 0;
      v80 = 0;
      v27 = *((_DWORD *)v26 + 3158);
      *((_DWORD *)v26 + 3158) = 0;
      if ( (unsigned __int8)sub_1D24620(a1, &v75, &v78, 0, a7, v19)
        || (sub_1CB0010((__int64)&v67, a1, v69, v64, v28, v29, v78.m128i_i32[0], v78.m128i_i64[1], v79, v80),
            v30 = _mm_loadu_si128(&v68),
            v71 = _mm_loadu_si128(&v67),
            v72 = v30,
            (v67.m128i_i32[0] & 0x7FFFFFFF) == 0) )
      {
        *((_DWORD *)v26 + 3158) = v27;
        if ( (__int64 *)ptr != v82 )
          free((void *)ptr);
LABEL_13:
        v31 = 0;
        goto LABEL_14;
      }
      sub_17429A0((__int64)&v83, &v71);
      *((_DWORD *)v26 + 3158) = v27;
      if ( (__int64 *)ptr != v82 )
        free((void *)ptr);
LABEL_38:
      v14 = *(_QWORD *)(a4 + 8);
      v17 += 32;
      if ( v62 == v17 )
        goto LABEL_39;
    }
    if ( (unsigned __int8)sub_1D24620(a1, (const __m128i *)&v73, &v71, 0, a7, v19) )
      goto LABEL_13;
    v17 += 32;
    sub_17429A0((__int64)&v83, &v71);
    v14 = *(_QWORD *)(a4 + 8);
  }
  while ( v62 != v17 );
LABEL_39:
  v11 = v65;
  v9 = v66;
  if ( v14 )
    goto LABEL_40;
LABEL_18:
  if ( *((_DWORD *)*a1 + 3158) || v59 != v11 || (*(_BYTE *)(v9 + 17) & 4) != 0 || (v31 = v9, *(_QWORD *)(v9 + 32)) )
  {
    v33 = (unsigned int)v84;
    v34 = 0;
    v35 = v82;
    *((_QWORD *)&ptr + 1) = 0x400000000LL;
    v36 = 0;
    *(_QWORD *)&ptr = v82;
    if ( (unsigned int)v84 > 4uLL )
    {
      sub_2237220(&ptr, v82, (unsigned int)v84, 24);
      v34 = DWORD2(ptr);
      v33 = (unsigned int)v84;
      v35 = (__int64 *)ptr;
      v36 = DWORD2(ptr);
    }
    v37 = 32 * v33;
    if ( (char *)v83 + v37 != v83 )
    {
      v38 = (__m128i *)v83;
      v39 = (__m128i *)((char *)v83 + v37);
      while ( 1 )
      {
        v40 = v36 + 1;
        v41 = v38;
        v42 = (__m128i *)&v35[3 * v36];
        if ( v40 > HIDWORD(ptr) )
        {
          if ( v35 > (__int64 *)v38 || v42 <= v38 )
          {
            sub_2237220(&ptr, v82, v40, 24);
            v42 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
          }
          else
          {
            sub_2237220(&ptr, v82, v40, 24);
            v41 = (const __m128i *)(ptr + (char *)v38 - (char *)v35);
            v42 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
          }
        }
        v38 += 2;
        *v42 = _mm_loadu_si128(v41);
        v42[1].m128i_i64[0] = v41[1].m128i_i64[0];
        v36 = (unsigned int)++DWORD2(ptr);
        if ( v39 == v38 )
          break;
        v35 = (__int64 *)ptr;
      }
      v10 = a1;
      v34 = (unsigned int)v36;
      v35 = (__int64 *)ptr;
    }
    v31 = sub_AB5840((*v10)[31], v59, (*(_BYTE *)(v9 + 18) >> 3) & 3, 0, 0, v60, (__int64)v35, v34);
    if ( (v31 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      if ( (__int64 *)ptr != v82 )
        free((void *)ptr);
      goto LABEL_48;
    }
    v31 = 0;
    if ( (__int64 *)ptr != v82 )
      free((void *)ptr);
  }
  else
  {
LABEL_48:
    sub_1EA6140(a2, v31, 16, 8);
    v46 = v45;
    *(_DWORD *)v45 = *(_DWORD *)a4;
    v47 = *(_DWORD *)(a4 + 4);
    *(_QWORD *)(v45 + 8) = 0;
    *(_DWORD *)(v45 + 4) = v47;
    v48 = *(_QWORD *)(v9 + 32);
    if ( v48 )
    {
      sub_B85890(&v78, *(_QWORD *)(v48 + 40));
      v52 = *(_QWORD *)(a4 + 8);
      v53 = 0;
      if ( v52 )
        v53 = *(_DWORD *)(v52 + 32);
      v54 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 40LL);
      DWORD2(ptr) = v53;
      *(_QWORD *)&ptr = v54;
      v82[0] = v78.m128i_i64[0];
      v55 = sub_F1ED40((_QWORD *)(*v10)[31], (__int64 *)&v83, v54, v49, v50, v51);
      v56 = *(_QWORD *)(a4 + 8);
      if ( v56 )
      {
        v57 = *(_QWORD *)(v56 + 48);
        v58 = *(_DWORD *)(v56 + 16);
      }
      else
      {
        v57 = 0;
        v58 = 0;
      }
      *(_QWORD *)(v46 + 8) = sub_A55700(
                               (_QWORD *)(*v10)[31],
                               v14,
                               v63,
                               v58,
                               v57,
                               *(_QWORD *)(v9 + 32),
                               ptr,
                               v82[0],
                               v55);
    }
  }
LABEL_14:
  if ( v83 != v85 )
    free(v83);
  return v31;
}
