__int64 __fastcall sub_1E1B000(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int16 **v9; // rax
  __int64 v10; // r8
  __int64 v11; // r15
  __int64 v12; // r13
  bool v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  char *v23; // rcx
  const __m128i *v24; // rdx
  __m128 *v25; // rax
  unsigned __int16 *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int16 *v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // edx
  unsigned __int64 v36; // r9
  int v37; // ecx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rdx
  __m128i *v40; // rcx
  const __m128i *v41; // rax
  __m128i v42; // xmm3
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int16 *v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // r14
  unsigned int v53; // edx
  unsigned __int64 v54; // r8
  unsigned __int64 v55; // rdx
  __m128i *v56; // rcx
  const __m128i *v57; // rax
  __m128i v58; // xmm6
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdi
  unsigned __int64 v65; // r15
  _QWORD *v66; // rax
  unsigned int v67; // [rsp+0h] [rbp-148h]
  __int64 v68; // [rsp+0h] [rbp-148h]
  unsigned __int64 v69; // [rsp+0h] [rbp-148h]
  unsigned __int64 v70; // [rsp+0h] [rbp-148h]
  _BYTE *v71; // [rsp+0h] [rbp-148h]
  unsigned __int64 v72; // [rsp+0h] [rbp-148h]
  _BYTE *v73; // [rsp+0h] [rbp-148h]
  unsigned __int64 v74; // [rsp+0h] [rbp-148h]
  unsigned __int64 v75; // [rsp+0h] [rbp-148h]
  _BYTE *v76; // [rsp+0h] [rbp-148h]
  unsigned __int64 v77; // [rsp+0h] [rbp-148h]
  unsigned __int64 v78; // [rsp+0h] [rbp-148h]
  unsigned int v79; // [rsp+8h] [rbp-140h]
  unsigned __int64 v80; // [rsp+8h] [rbp-140h]
  unsigned __int64 v81; // [rsp+8h] [rbp-140h]
  unsigned __int64 v82; // [rsp+8h] [rbp-140h]
  unsigned __int64 v83; // [rsp+8h] [rbp-140h]
  unsigned __int64 v84; // [rsp+8h] [rbp-140h]
  __int64 v85; // [rsp+20h] [rbp-128h]
  unsigned __int64 v86; // [rsp+28h] [rbp-120h]
  __m128i si128; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v88; // [rsp+40h] [rbp-108h]
  void *ptr[2]; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v90[4]; // [rsp+60h] [rbp-E8h] BYREF
  __m128 v91; // [rsp+80h] [rbp-C8h] BYREF
  unsigned __int64 v92; // [rsp+90h] [rbp-B8h]
  int v93; // [rsp+98h] [rbp-B0h]
  int v94; // [rsp+9Ch] [rbp-ACh]
  int v95; // [rsp+A0h] [rbp-A8h]
  void *v96; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v97; // [rsp+B8h] [rbp-90h]
  _BYTE v98[136]; // [rsp+C0h] [rbp-88h] BYREF

  v96 = v98;
  v97 = 0x200000000LL;
  sub_EE9E50(&v91, a2);
  v90[0] = v92;
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&v91);
  if ( ((__int64)ptr[1] & 3) != 0 )
    v9 = (unsigned __int16 **)sub_EF2B30((__int64)ptr);
  else
    v9 = (unsigned __int16 **)ptr[0];
  v85 = sub_1E11560(a1, *v9, a3, a4, v6, v7, v8);
  if ( v85 == 1 )
  {
    v51 = 1;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 24);
    ptr[0] = v90;
    ptr[1] = (void *)0x400000000LL;
    v11 = v10 + 24LL * (*(_WORD *)(a2 + 20) >> 1);
    if ( v10 != v11 )
    {
      v12 = v10;
      v13 = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)v12 )
        {
          if ( *(_DWORD *)v12 == 1 )
          {
            v46 = (unsigned __int16 *)sub_C033F0(a2, v12);
            v50 = sub_1E11560(a1, v46, a3, a4, v47, v48, v49);
            if ( v50 == 1 )
              goto LABEL_31;
            v53 = *(_DWORD *)(v12 + 12);
            v91.m128_i32[0] = 1;
            v54 = v50 & 0xFFFFFFFFFFFFFFFELL;
            v91.m128_u64[1] = v50 & 0xFFFFFFFFFFFFFFFELL;
            v92 = v53;
            v55 = (unsigned int)v97 + 1LL;
            v56 = (__m128i *)((char *)v96 + 40 * (unsigned int)v97);
            v57 = (const __m128i *)&v91;
            if ( v55 > HIDWORD(v97) )
            {
              v76 = v96;
              if ( v96 > &v91 || v56 <= (__m128i *)&v91 )
              {
                v78 = v54;
                sub_2237220(&v96, v98, v55, 40);
                v54 = v78;
                v56 = (__m128i *)((char *)v96 + 40 * (unsigned int)v97);
                v57 = (const __m128i *)&v91;
              }
              else
              {
                v84 = v54;
                sub_2237220(&v96, v98, v55, 40);
                v54 = v84;
                v57 = (const __m128i *)((char *)v96 + (char *)&v91 - v76);
                v56 = (__m128i *)((char *)v96 + 40 * (unsigned int)v97);
              }
            }
            *v56 = _mm_loadu_si128(v57);
            v58 = _mm_loadu_si128(v57 + 1);
            LODWORD(v97) = v97 + 1;
            v56[1] = v58;
            v56[2].m128i_i64[0] = v57[2].m128i_i64[0];
            if ( !v13 )
            {
              v70 = v54;
              v63 = sub_C033F0(a2, v12);
              v54 = v70;
              v13 = v63 != v70;
            }
            v59 = LODWORD(ptr[1]);
            v60 = LODWORD(ptr[1]) + 1LL;
            if ( v60 > HIDWORD(ptr[1]) )
            {
              v77 = v54;
              sub_2237220(ptr, v90, v60, 8);
              v59 = LODWORD(ptr[1]);
              v54 = v77;
            }
            *((_QWORD *)ptr[0] + v59) = v54;
            ++LODWORD(ptr[1]);
          }
          else
          {
            v26 = (unsigned __int16 *)sub_C03400(a2, v12);
            v68 = sub_1E11560(a1, v26, a3, a4, v27, v28, v29);
            if ( v68 == 1
              || (v30 = (unsigned __int16 *)sub_C03410(a2, v12),
                  v34 = sub_1E11560(a1, v30, a3, a4, v31, v32, v33),
                  v34 == 1) )
            {
LABEL_31:
              v51 = 1;
              goto LABEL_32;
            }
            v35 = *(_DWORD *)(v12 + 16);
            v91.m128_i32[0] = 2;
            v36 = v34 & 0xFFFFFFFFFFFFFFFELL;
            v92 = v34 & 0xFFFFFFFFFFFFFFFELL;
            v37 = *(_DWORD *)(v12 + 12);
            v38 = v68 & 0xFFFFFFFFFFFFFFFELL;
            v94 = v35;
            v39 = (unsigned int)v97 + 1LL;
            v91.m128_u64[1] = v68 & 0xFFFFFFFFFFFFFFFELL;
            v93 = v37;
            v40 = (__m128i *)((char *)v96 + 40 * (unsigned int)v97);
            v41 = (const __m128i *)&v91;
            v95 = 0;
            if ( v39 > HIDWORD(v97) )
            {
              v73 = v96;
              if ( v96 > &v91 || v40 <= (__m128i *)&v91 )
              {
                v82 = v36;
                v74 = v38;
                sub_2237220(&v96, v98, v39, 40);
                v36 = v82;
                v38 = v74;
                v40 = (__m128i *)((char *)v96 + 40 * (unsigned int)v97);
                v41 = (const __m128i *)&v91;
              }
              else
              {
                v86 = v36;
                v81 = v38;
                sub_2237220(&v96, v98, v39, 40);
                v38 = v81;
                v36 = v86;
                v41 = (const __m128i *)((char *)v96 + (char *)&v91 - v73);
                v40 = (__m128i *)((char *)v96 + 40 * (unsigned int)v97);
              }
            }
            *v40 = _mm_loadu_si128(v41);
            v42 = _mm_loadu_si128(v41 + 1);
            LODWORD(v97) = v97 + 1;
            v40[1] = v42;
            v40[2].m128i_i64[0] = v41[2].m128i_i64[0];
            if ( v13 || (v80 = v36, v69 = v38, v61 = sub_C03400(a2, v12), v38 = v69, v36 = v80, v61 != v69) )
            {
              v13 = 1;
            }
            else
            {
              v62 = sub_C03410(a2, v12);
              v36 = v80;
              v38 = v69;
              v13 = v62 != v80;
            }
            v43 = LODWORD(ptr[1]);
            v44 = LODWORD(ptr[1]) + 1LL;
            if ( v44 > HIDWORD(ptr[1]) )
            {
              v83 = v36;
              v75 = v38;
              sub_2237220(ptr, v90, v44, 8);
              v43 = LODWORD(ptr[1]);
              v36 = v83;
              v38 = v75;
            }
            *((_QWORD *)ptr[0] + v43) = v38;
            ++LODWORD(ptr[1]);
            v45 = LODWORD(ptr[1]);
            if ( (unsigned __int64)LODWORD(ptr[1]) + 1 > HIDWORD(ptr[1]) )
            {
              v72 = v36;
              sub_2237220(ptr, v90, LODWORD(ptr[1]) + 1LL, 8);
              v45 = LODWORD(ptr[1]);
              v36 = v72;
            }
            *((_QWORD *)ptr[0] + v45) = v36;
            ++LODWORD(ptr[1]);
          }
          goto LABEL_16;
        }
        v14 = *(_QWORD *)(v12 + 8);
        if ( (v14 & 1) != 0 || !v14 )
        {
          v13 = 1;
LABEL_13:
          v79 = *(_DWORD *)(v12 + 20);
          v67 = *(_DWORD *)(v12 + 16);
          v20 = sub_C00930(v12);
          v91.m128_i32[0] = 0;
          v91.m128_u64[1] = v20;
          v21 = (unsigned int)v97;
          v92 = __PAIR64__(v79, v67);
          v22 = (unsigned int)v97 + 1LL;
          if ( v22 > HIDWORD(v97) )
          {
            if ( v96 > &v91 || &v91 >= (__m128 *)((char *)v96 + 40 * (unsigned int)v97) )
            {
              sub_2237220(&v96, v98, v22, 40);
              v23 = (char *)v96;
              v21 = (unsigned int)v97;
              v24 = (const __m128i *)&v91;
            }
            else
            {
              v71 = v96;
              sub_2237220(&v96, v98, v22, 40);
              v23 = (char *)v96;
              v21 = (unsigned int)v97;
              v24 = (const __m128i *)((char *)v96 + (char *)&v91 - v71);
            }
          }
          else
          {
            v23 = (char *)v96;
            v24 = (const __m128i *)&v91;
          }
          a3 = (__m128)_mm_loadu_si128(v24);
          v25 = (__m128 *)&v23[40 * v21];
          *v25 = a3;
          a4 = (__m128)_mm_loadu_si128(v24 + 1);
          LODWORD(v97) = v97 + 1;
          v25[1] = a4;
          v25[2].m128_u64[0] = v24[2].m128i_u64[0];
          goto LABEL_16;
        }
        v15 = sub_1E0AF30((__int64)a1, v14);
        if ( v15 )
        {
          v18 = *(_QWORD *)(v12 + 8);
          if ( (v18 & 1) != 0 )
          {
            v13 = 1;
            goto LABEL_12;
          }
        }
        else
        {
          v18 = *(_QWORD *)(v12 + 8);
          if ( (v18 & 1) != 0 )
            goto LABEL_12;
        }
        v19 = v15 == v18;
        v18 = 1;
        if ( !v19 )
          v13 = 1;
LABEL_12:
        if ( !(unsigned __int8)sub_B78060(v15, v14, v18, v16, v17) )
          goto LABEL_13;
LABEL_16:
        v12 += 24;
        if ( v11 == v12 )
          goto LABEL_59;
      }
    }
    v13 = 0;
LABEL_59:
    v64 = *a1;
    v65 = v85 & 0xFFFFFFFFFFFFFFFELL;
    if ( !*(_DWORD *)(*a1 + 12632) )
    {
      sub_EE9E50(&v91, a2);
      v88 = v92;
      si128 = _mm_load_si128((const __m128i *)&v91);
      if ( (si128.m128i_i8[8] & 3) != 0 )
        v66 = (_QWORD *)sub_EF2B30((__int64)&si128);
      else
        v66 = (_QWORD *)si128.m128i_i64[0];
      if ( *v66 == v65 )
      {
        v51 = a2;
        if ( !v13 )
          goto LABEL_32;
      }
      v64 = *a1;
    }
    v51 = sub_1A13360(v64, (__int64)&v96, *(_DWORD *)(a2 + 16), *(_BYTE *)(a2 + 20) & 1, v65, a3, a4);
LABEL_32:
    if ( ptr[0] != v90 )
      free(ptr[0]);
  }
  if ( v96 != v98 )
    free(v96);
  return v51;
}
