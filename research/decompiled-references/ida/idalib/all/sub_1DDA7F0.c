__int64 __fastcall sub_1DDA7F0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r15
  __int64 v15; // r13
  bool v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  const __m128i *v27; // rdx
  __m128 *v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int16 *v39; // rax
  int v40; // edx
  int v41; // ecx
  unsigned __int64 v42; // rdx
  __m128i *v43; // rcx
  const __m128i *v44; // rax
  __m128i v45; // xmm3
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int16 *v53; // rax
  __int64 v54; // r14
  unsigned int v56; // edx
  unsigned __int64 v57; // rdx
  __m128i *v58; // rcx
  const __m128i *v59; // rax
  __m128i v60; // xmm6
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdi
  unsigned __int64 v67; // r15
  _QWORD *v68; // rax
  unsigned int v69; // [rsp+0h] [rbp-148h]
  unsigned __int16 *v70; // [rsp+0h] [rbp-148h]
  unsigned __int64 v71; // [rsp+0h] [rbp-148h]
  unsigned __int64 v72; // [rsp+0h] [rbp-148h]
  _BYTE *v73; // [rsp+0h] [rbp-148h]
  __int64 v74; // [rsp+0h] [rbp-148h]
  _BYTE *v75; // [rsp+0h] [rbp-148h]
  unsigned __int64 v76; // [rsp+0h] [rbp-148h]
  unsigned __int64 v77; // [rsp+0h] [rbp-148h]
  _BYTE *v78; // [rsp+0h] [rbp-148h]
  unsigned __int64 v79; // [rsp+0h] [rbp-148h]
  unsigned __int64 v80; // [rsp+0h] [rbp-148h]
  __int64 v81; // [rsp+8h] [rbp-140h]
  unsigned __int64 v82; // [rsp+8h] [rbp-140h]
  __int64 v83; // [rsp+8h] [rbp-140h]
  __int64 v84; // [rsp+8h] [rbp-140h]
  unsigned __int64 v85; // [rsp+8h] [rbp-140h]
  unsigned __int16 *v86; // [rsp+20h] [rbp-128h]
  __int64 v87; // [rsp+28h] [rbp-120h]
  __m128i si128; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v89; // [rsp+40h] [rbp-108h]
  void *ptr[2]; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v91[4]; // [rsp+60h] [rbp-E8h] BYREF
  __m128 v92; // [rsp+80h] [rbp-C8h] BYREF
  unsigned __int64 v93; // [rsp+90h] [rbp-B8h]
  int v94; // [rsp+98h] [rbp-B0h]
  int v95; // [rsp+9Ch] [rbp-ACh]
  int v96; // [rsp+A0h] [rbp-A8h]
  void *v97; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v98; // [rsp+B8h] [rbp-90h]
  _BYTE v99[136]; // [rsp+C0h] [rbp-88h] BYREF

  v97 = v99;
  v98 = 0x200000000LL;
  sub_EE9E50(&v92, a2);
  v91[0] = v93;
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&v92);
  if ( ((__int64)ptr[1] & 3) != 0 )
    v10 = (unsigned __int64 *)sub_EF2B30((__int64)ptr);
  else
    v10 = (unsigned __int64 *)ptr[0];
  v86 = sub_1DC71F0(a1, *v10, v6, v7, v8, v9, a3, a4);
  if ( v86 == (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    v54 = 1;
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 24);
    ptr[0] = v91;
    ptr[1] = (void *)0x400000000LL;
    v14 = v13 + 24LL * (*(_WORD *)(a2 + 20) >> 1);
    if ( v13 != v14 )
    {
      v15 = v13;
      v16 = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)v15 )
        {
          if ( *(_DWORD *)v15 == 1 )
          {
            v48 = sub_C033F0(a2, v15);
            v53 = sub_1DC71F0(a1, v48, v49, v50, v51, v52, a3, a4);
            if ( v53 == (unsigned __int16 *)((char *)&dword_0 + 1) )
              goto LABEL_32;
            v56 = *(_DWORD *)(v15 + 12);
            v12 = (__int64)v97;
            v92.m128_i32[0] = 1;
            v13 = (unsigned __int64)v53 & 0xFFFFFFFFFFFFFFFELL;
            v92.m128_u64[1] = (unsigned __int64)v53 & 0xFFFFFFFFFFFFFFFELL;
            v93 = v56;
            v57 = (unsigned int)v98 + 1LL;
            v58 = (__m128i *)((char *)v97 + 40 * (unsigned int)v98);
            v59 = (const __m128i *)&v92;
            if ( v57 > HIDWORD(v98) )
            {
              v78 = v97;
              if ( v97 > &v92 || v58 <= (__m128i *)&v92 )
              {
                v80 = v13;
                sub_2237220(&v97, v99, v57, 40);
                v13 = v80;
                v58 = (__m128i *)((char *)v97 + 40 * (unsigned int)v98);
                v59 = (const __m128i *)&v92;
              }
              else
              {
                v85 = v13;
                sub_2237220(&v97, v99, v57, 40);
                v12 = (__int64)v78;
                v13 = v85;
                v59 = (const __m128i *)((char *)v97 + (char *)&v92 - v78);
                v58 = (__m128i *)((char *)v97 + 40 * (unsigned int)v98);
              }
            }
            *v58 = _mm_loadu_si128(v59);
            v60 = _mm_loadu_si128(v59 + 1);
            LODWORD(v98) = v98 + 1;
            v58[1] = v60;
            v58[2].m128i_i64[0] = v59[2].m128i_i64[0];
            if ( !v16 )
            {
              v72 = v13;
              v65 = sub_C033F0(a2, v15);
              v13 = v72;
              v16 = v65 != v72;
            }
            v61 = LODWORD(ptr[1]);
            v11 = HIDWORD(ptr[1]);
            v62 = LODWORD(ptr[1]) + 1LL;
            if ( v62 > HIDWORD(ptr[1]) )
            {
              v79 = v13;
              sub_2237220(ptr, v91, v62, 8);
              v61 = LODWORD(ptr[1]);
              v13 = v79;
            }
            *((_QWORD *)ptr[0] + v61) = v13;
            ++LODWORD(ptr[1]);
          }
          else
          {
            v29 = sub_C03400(a2, v15);
            v70 = sub_1DC71F0(a1, v29, v30, v31, v32, v33, a3, a4);
            if ( v70 == (unsigned __int16 *)((char *)&dword_0 + 1)
              || (v34 = sub_C03410(a2, v15),
                  v39 = sub_1DC71F0(a1, v34, v35, v36, v37, v38, a3, a4),
                  v39 == (unsigned __int16 *)((char *)&dword_0 + 1)) )
            {
LABEL_32:
              v54 = 1;
              goto LABEL_33;
            }
            v40 = *(_DWORD *)(v15 + 16);
            v92.m128_i32[0] = 2;
            v12 = (unsigned __int64)v39 & 0xFFFFFFFFFFFFFFFELL;
            v93 = (unsigned __int64)v39 & 0xFFFFFFFFFFFFFFFELL;
            v41 = *(_DWORD *)(v15 + 12);
            v13 = (unsigned __int64)v70 & 0xFFFFFFFFFFFFFFFELL;
            v95 = v40;
            v42 = (unsigned int)v98 + 1LL;
            v92.m128_u64[1] = (unsigned __int64)v70 & 0xFFFFFFFFFFFFFFFELL;
            v94 = v41;
            v43 = (__m128i *)((char *)v97 + 40 * (unsigned int)v98);
            v44 = (const __m128i *)&v92;
            v96 = 0;
            if ( v42 > HIDWORD(v98) )
            {
              v75 = v97;
              if ( v97 > &v92 || v43 <= (__m128i *)&v92 )
              {
                v83 = v12;
                v76 = v13;
                sub_2237220(&v97, v99, v42, 40);
                v12 = v83;
                v13 = v76;
                v43 = (__m128i *)((char *)v97 + 40 * (unsigned int)v98);
                v44 = (const __m128i *)&v92;
              }
              else
              {
                v87 = v12;
                v82 = v13;
                sub_2237220(&v97, v99, v42, 40);
                v13 = v82;
                v12 = v87;
                v44 = (const __m128i *)((char *)v97 + (char *)&v92 - v75);
                v43 = (__m128i *)((char *)v97 + 40 * (unsigned int)v98);
              }
            }
            *v43 = _mm_loadu_si128(v44);
            v45 = _mm_loadu_si128(v44 + 1);
            LODWORD(v98) = v98 + 1;
            v43[1] = v45;
            v43[2].m128i_i64[0] = v44[2].m128i_i64[0];
            if ( v16 || (v81 = v12, v71 = v13, v63 = sub_C03400(a2, v15), v13 = v71, v12 = v81, v63 != v71) )
            {
              v16 = 1;
            }
            else
            {
              v64 = sub_C03410(a2, v15);
              v12 = v81;
              v13 = v71;
              v16 = v64 != v81;
            }
            v46 = LODWORD(ptr[1]);
            v47 = LODWORD(ptr[1]) + 1LL;
            if ( v47 > HIDWORD(ptr[1]) )
            {
              v84 = v12;
              v77 = v13;
              sub_2237220(ptr, v91, v47, 8);
              v46 = LODWORD(ptr[1]);
              v12 = v84;
              v13 = v77;
            }
            *((_QWORD *)ptr[0] + v46) = v13;
            ++LODWORD(ptr[1]);
            v11 = LODWORD(ptr[1]);
            if ( (unsigned __int64)LODWORD(ptr[1]) + 1 > HIDWORD(ptr[1]) )
            {
              v74 = v12;
              sub_2237220(ptr, v91, LODWORD(ptr[1]) + 1LL, 8);
              v11 = LODWORD(ptr[1]);
              v12 = v74;
            }
            *((_QWORD *)ptr[0] + v11) = v12;
            ++LODWORD(ptr[1]);
          }
          goto LABEL_17;
        }
        v17 = *(_QWORD *)(v15 + 8);
        v18 = *(unsigned int *)(v15 + 20);
        if ( (v17 & 1) != 0 || !v17 )
        {
          v16 = 1;
          goto LABEL_14;
        }
        v19 = sub_1DD8310((__int64)a1, v18, v17, v11, v13, v12, a3, a4);
        if ( v19 )
        {
          v22 = *(_QWORD *)(v15 + 8);
          if ( (v22 & 1) != 0 )
          {
            v16 = 1;
            goto LABEL_12;
          }
        }
        else
        {
          v22 = *(_QWORD *)(v15 + 8);
          if ( (v22 & 1) != 0 )
            goto LABEL_12;
        }
        v23 = v19 == v22;
        v22 = 1;
        if ( !v23 )
          v16 = 1;
LABEL_12:
        if ( !(unsigned __int8)sub_B78060(v19, v18, v22, v20, v21) )
        {
          LODWORD(v18) = *(_DWORD *)(v15 + 20);
LABEL_14:
          v69 = *(_DWORD *)(v15 + 16);
          v24 = sub_C00930(v15);
          v92.m128_i32[0] = 0;
          v92.m128_u64[1] = v24;
          v25 = (unsigned int)v98;
          v93 = __PAIR64__(v18, v69);
          v26 = (unsigned int)v98 + 1LL;
          if ( v26 > HIDWORD(v98) )
          {
            if ( v97 > &v92 || &v92 >= (__m128 *)((char *)v97 + 40 * (unsigned int)v98) )
            {
              sub_2237220(&v97, v99, v26, 40);
              v11 = (__int64)v97;
              v25 = (unsigned int)v98;
              v27 = (const __m128i *)&v92;
            }
            else
            {
              v73 = v97;
              sub_2237220(&v97, v99, v26, 40);
              v13 = (unsigned __int64)v73;
              v11 = (__int64)v97;
              v25 = (unsigned int)v98;
              v27 = (const __m128i *)((char *)v97 + (char *)&v92 - v73);
            }
          }
          else
          {
            v11 = (__int64)v97;
            v27 = (const __m128i *)&v92;
          }
          a3 = (__m128)_mm_loadu_si128(v27);
          v28 = (__m128 *)(v11 + 40 * v25);
          *v28 = a3;
          a4 = (__m128)_mm_loadu_si128(v27 + 1);
          LODWORD(v98) = v98 + 1;
          v28[1] = a4;
          v28[2].m128_u64[0] = v27[2].m128i_u64[0];
        }
LABEL_17:
        v15 += 24;
        if ( v14 == v15 )
          goto LABEL_60;
      }
    }
    v16 = 0;
LABEL_60:
    v66 = *a1;
    v67 = (unsigned __int64)v86 & 0xFFFFFFFFFFFFFFFELL;
    if ( !*(_DWORD *)(*a1 + 12632) )
    {
      sub_EE9E50(&v92, a2);
      v89 = v93;
      si128 = _mm_load_si128((const __m128i *)&v92);
      if ( (si128.m128i_i8[8] & 3) != 0 )
        v68 = (_QWORD *)sub_EF2B30((__int64)&si128);
      else
        v68 = (_QWORD *)si128.m128i_i64[0];
      if ( *v68 == v67 )
      {
        v54 = a2;
        if ( !v16 )
          goto LABEL_33;
      }
      v66 = *a1;
    }
    v54 = sub_1A13360(v66, (__int64)&v97, *(_DWORD *)(a2 + 16), *(_BYTE *)(a2 + 20) & 1, v67, a3, a4);
LABEL_33:
    if ( ptr[0] != v91 )
      free(ptr[0]);
  }
  if ( v97 != v99 )
    free(v97);
  return v54;
}
