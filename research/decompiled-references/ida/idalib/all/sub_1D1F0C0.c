__int64 __fastcall sub_1D1F0C0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int16 **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r15
  __int64 v15; // r13
  bool v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  const __m128i *v26; // rdx
  __m128 *v27; // rax
  unsigned __int16 *v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int16 *v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  int v37; // edx
  int v38; // ecx
  unsigned __int64 v39; // rdx
  __m128i *v40; // rcx
  const __m128i *v41; // rax
  __m128i v42; // xmm3
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int16 *v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r14
  unsigned int v52; // edx
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rdx
  __m128i *v55; // rcx
  const __m128i *v56; // rax
  __m128i v57; // xmm6
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdi
  unsigned __int64 v62; // r15
  _QWORD *v63; // rax
  unsigned int v64; // [rsp+0h] [rbp-148h]
  __int64 v65; // [rsp+0h] [rbp-148h]
  unsigned __int64 v66; // [rsp+0h] [rbp-148h]
  unsigned __int64 v67; // [rsp+0h] [rbp-148h]
  _BYTE *v68; // [rsp+0h] [rbp-148h]
  unsigned __int64 v69; // [rsp+0h] [rbp-148h]
  _BYTE *v70; // [rsp+0h] [rbp-148h]
  unsigned __int64 v71; // [rsp+0h] [rbp-148h]
  unsigned __int64 v72; // [rsp+0h] [rbp-148h]
  _BYTE *v73; // [rsp+0h] [rbp-148h]
  unsigned __int64 v74; // [rsp+0h] [rbp-148h]
  unsigned int v75; // [rsp+8h] [rbp-140h]
  unsigned __int64 v76; // [rsp+8h] [rbp-140h]
  unsigned __int64 v77; // [rsp+8h] [rbp-140h]
  unsigned __int64 v78; // [rsp+8h] [rbp-140h]
  unsigned __int64 v79; // [rsp+8h] [rbp-140h]
  unsigned __int64 v80; // [rsp+8h] [rbp-140h]
  __int64 v81; // [rsp+20h] [rbp-128h]
  unsigned __int64 v82; // [rsp+28h] [rbp-120h]
  __m128i si128; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v84; // [rsp+40h] [rbp-108h]
  void *ptr[2]; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v86[4]; // [rsp+60h] [rbp-E8h] BYREF
  __m128 v87; // [rsp+80h] [rbp-C8h] BYREF
  unsigned __int64 v88; // [rsp+90h] [rbp-B8h]
  int v89; // [rsp+98h] [rbp-B0h]
  int v90; // [rsp+9Ch] [rbp-ACh]
  int v91; // [rsp+A0h] [rbp-A8h]
  void *v92; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v93; // [rsp+B8h] [rbp-90h]
  _BYTE v94[136]; // [rsp+C0h] [rbp-88h] BYREF

  v92 = v94;
  v93 = 0x200000000LL;
  sub_EE9E50(&v87, a2);
  v86[0] = v88;
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&v87);
  if ( ((__int64)ptr[1] & 3) != 0 )
    v9 = (unsigned __int16 **)sub_EF2B30((__int64)ptr);
  else
    v9 = (unsigned __int16 **)ptr[0];
  v81 = sub_1D11200(a1, *v9, a3, a4, v6, v7, v8);
  if ( v81 == 1 )
  {
    v50 = 1;
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 24);
    ptr[0] = v86;
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
            v45 = (unsigned __int16 *)sub_C033F0(a2, v15);
            v49 = sub_1D11200(a1, v45, a3, a4, v46, v47, v48);
            if ( v49 == 1 )
              goto LABEL_31;
            v52 = *(_DWORD *)(v15 + 12);
            v87.m128_i32[0] = 1;
            v53 = v49 & 0xFFFFFFFFFFFFFFFELL;
            v87.m128_u64[1] = v49 & 0xFFFFFFFFFFFFFFFELL;
            v88 = v52;
            v54 = (unsigned int)v93 + 1LL;
            v55 = (__m128i *)((char *)v92 + 40 * (unsigned int)v93);
            v56 = (const __m128i *)&v87;
            if ( v54 > HIDWORD(v93) )
            {
              v73 = v92;
              if ( v92 > &v87 || v55 <= (__m128i *)&v87 )
              {
                v74 = v53;
                sub_2237220(&v92, v94, v54, 40);
                v53 = v74;
                v55 = (__m128i *)((char *)v92 + 40 * (unsigned int)v93);
                v56 = (const __m128i *)&v87;
              }
              else
              {
                v80 = v53;
                sub_2237220(&v92, v94, v54, 40);
                v53 = v80;
                v56 = (const __m128i *)((char *)v92 + (char *)&v87 - v73);
                v55 = (__m128i *)((char *)v92 + 40 * (unsigned int)v93);
              }
            }
            *v55 = _mm_loadu_si128(v56);
            v57 = _mm_loadu_si128(v56 + 1);
            LODWORD(v93) = v93 + 1;
            v55[1] = v57;
            v55[2].m128i_i64[0] = v56[2].m128i_i64[0];
            if ( !v16 )
            {
              v67 = v53;
              v60 = sub_C033F0(a2, v15);
              v53 = v67;
              v16 = v60 != v67;
            }
            sub_14B7B40((__int64)ptr, v53);
          }
          else
          {
            v28 = (unsigned __int16 *)sub_C03400(a2, v15);
            v65 = sub_1D11200(a1, v28, a3, a4, v29, v30, v31);
            if ( v65 == 1
              || (v32 = (unsigned __int16 *)sub_C03410(a2, v15),
                  v36 = sub_1D11200(a1, v32, a3, a4, v33, v34, v35),
                  v36 == 1) )
            {
LABEL_31:
              v50 = 1;
              goto LABEL_32;
            }
            v37 = *(_DWORD *)(v15 + 16);
            v87.m128_i32[0] = 2;
            v12 = v36 & 0xFFFFFFFFFFFFFFFELL;
            v88 = v36 & 0xFFFFFFFFFFFFFFFELL;
            v38 = *(_DWORD *)(v15 + 12);
            v13 = v65 & 0xFFFFFFFFFFFFFFFELL;
            v90 = v37;
            v39 = (unsigned int)v93 + 1LL;
            v87.m128_u64[1] = v65 & 0xFFFFFFFFFFFFFFFELL;
            v89 = v38;
            v40 = (__m128i *)((char *)v92 + 40 * (unsigned int)v93);
            v41 = (const __m128i *)&v87;
            v91 = 0;
            if ( v39 > HIDWORD(v93) )
            {
              v70 = v92;
              if ( v92 > &v87 || v40 <= (__m128i *)&v87 )
              {
                v78 = v12;
                v71 = v13;
                sub_2237220(&v92, v94, v39, 40);
                v12 = v78;
                v13 = v71;
                v40 = (__m128i *)((char *)v92 + 40 * (unsigned int)v93);
                v41 = (const __m128i *)&v87;
              }
              else
              {
                v82 = v12;
                v77 = v13;
                sub_2237220(&v92, v94, v39, 40);
                v13 = v77;
                v12 = v82;
                v41 = (const __m128i *)((char *)v92 + (char *)&v87 - v70);
                v40 = (__m128i *)((char *)v92 + 40 * (unsigned int)v93);
              }
            }
            *v40 = _mm_loadu_si128(v41);
            v42 = _mm_loadu_si128(v41 + 1);
            LODWORD(v93) = v93 + 1;
            v40[1] = v42;
            v40[2].m128i_i64[0] = v41[2].m128i_i64[0];
            if ( v16 || (v76 = v12, v66 = v13, v58 = sub_C03400(a2, v15), v13 = v66, v12 = v76, v58 != v66) )
            {
              v16 = 1;
            }
            else
            {
              v59 = sub_C03410(a2, v15);
              v12 = v76;
              v13 = v66;
              v16 = v59 != v76;
            }
            v43 = LODWORD(ptr[1]);
            v44 = LODWORD(ptr[1]) + 1LL;
            if ( v44 > HIDWORD(ptr[1]) )
            {
              v79 = v12;
              v72 = v13;
              sub_2237220(ptr, v86, v44, 8);
              v43 = LODWORD(ptr[1]);
              v12 = v79;
              v13 = v72;
            }
            *((_QWORD *)ptr[0] + v43) = v13;
            v11 = (unsigned int)(LODWORD(ptr[1]) + 1);
            v10 = v11 + 1;
            ++LODWORD(ptr[1]);
            if ( v11 + 1 > (unsigned __int64)HIDWORD(ptr[1]) )
            {
              v69 = v12;
              sub_2237220(ptr, v86, v10, 8);
              v11 = LODWORD(ptr[1]);
              v12 = v69;
            }
            *((_QWORD *)ptr[0] + v11) = v12;
            ++LODWORD(ptr[1]);
          }
          goto LABEL_16;
        }
        v17 = *(_QWORD *)(v15 + 8);
        if ( (v17 & 1) != 0 || !v17 )
        {
          v16 = 1;
LABEL_13:
          v75 = *(_DWORD *)(v15 + 20);
          v64 = *(_DWORD *)(v15 + 16);
          v23 = sub_C00930(v15);
          v87.m128_i32[0] = 0;
          v87.m128_u64[1] = v23;
          v24 = (unsigned int)v93;
          v88 = __PAIR64__(v75, v64);
          v25 = (unsigned int)v93 + 1LL;
          if ( v25 > HIDWORD(v93) )
          {
            if ( v92 > &v87 || &v87 >= (__m128 *)((char *)v92 + 40 * (unsigned int)v93) )
            {
              sub_2237220(&v92, v94, v25, 40);
              v11 = (__int64)v92;
              v24 = (unsigned int)v93;
              v26 = (const __m128i *)&v87;
            }
            else
            {
              v68 = v92;
              sub_2237220(&v92, v94, v25, 40);
              v13 = (unsigned __int64)v68;
              v11 = (__int64)v92;
              v24 = (unsigned int)v93;
              v26 = (const __m128i *)((char *)v92 + (char *)&v87 - v68);
            }
          }
          else
          {
            v11 = (__int64)v92;
            v26 = (const __m128i *)&v87;
          }
          a3 = (__m128)_mm_loadu_si128(v26);
          v27 = (__m128 *)(v11 + 40 * v24);
          *v27 = a3;
          a4 = (__m128)_mm_loadu_si128(v26 + 1);
          LODWORD(v93) = v93 + 1;
          v27[1] = a4;
          v10 = v26[2].m128i_i64[0];
          v27[2].m128_u64[0] = v10;
          goto LABEL_16;
        }
        v18 = sub_1D1B120((__int64)a1, v17, a3, a4, v10, v11, v13, v12);
        if ( v18 )
        {
          v21 = *(_QWORD *)(v15 + 8);
          if ( (v21 & 1) != 0 )
          {
            v16 = 1;
            goto LABEL_12;
          }
        }
        else
        {
          v21 = *(_QWORD *)(v15 + 8);
          if ( (v21 & 1) != 0 )
            goto LABEL_12;
        }
        v22 = v18 == v21;
        v21 = 1;
        if ( !v22 )
          v16 = 1;
LABEL_12:
        if ( !(unsigned __int8)sub_B78060(v18, v17, v21, v19, v20) )
          goto LABEL_13;
LABEL_16:
        v15 += 24;
        if ( v14 == v15 )
          goto LABEL_57;
      }
    }
    v16 = 0;
LABEL_57:
    v61 = *a1;
    v62 = v81 & 0xFFFFFFFFFFFFFFFELL;
    if ( !*(_DWORD *)(*a1 + 12632) )
    {
      sub_EE9E50(&v87, a2);
      v84 = v88;
      si128 = _mm_load_si128((const __m128i *)&v87);
      if ( (si128.m128i_i8[8] & 3) != 0 )
        v63 = (_QWORD *)sub_EF2B30((__int64)&si128);
      else
        v63 = (_QWORD *)si128.m128i_i64[0];
      if ( *v63 == v62 )
      {
        v50 = a2;
        if ( !v16 )
          goto LABEL_32;
      }
      v61 = *a1;
    }
    v50 = sub_1A13360(v61, (__int64)&v92, *(_DWORD *)(a2 + 16), *(_BYTE *)(a2 + 20) & 1, v62, a3, a4);
LABEL_32:
    if ( ptr[0] != v86 )
      free(ptr[0]);
  }
  if ( v92 != v94 )
    free(v92);
  return v50;
}
