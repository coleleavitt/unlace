__int64 __fastcall sub_1C86A00(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 *v8; // rax
  __int64 v9; // r8
  bool v10; // r12
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  bool v18; // zf
  unsigned int v19; // r14d
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  char *v22; // rcx
  __m128i *p_si128; // rdx
  __m128 *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int16 *v33; // rax
  int v34; // edx
  int v35; // ecx
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // rdx
  __m128i *v39; // rcx
  __m128i *v40; // rax
  __m128i v41; // xmm3
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // r8
  unsigned __int16 *v49; // rax
  __int64 v50; // rbx
  unsigned int v52; // edx
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // rdx
  __m128i *v55; // rcx
  __m128i *v56; // rax
  __m128i v57; // xmm6
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // [rsp+10h] [rbp-128h]
  unsigned __int16 *v62; // [rsp+10h] [rbp-128h]
  unsigned __int64 v63; // [rsp+10h] [rbp-128h]
  unsigned __int64 v64; // [rsp+10h] [rbp-128h]
  _BYTE *v65; // [rsp+10h] [rbp-128h]
  unsigned __int64 v66; // [rsp+10h] [rbp-128h]
  _BYTE *v67; // [rsp+10h] [rbp-128h]
  unsigned __int64 v68; // [rsp+10h] [rbp-128h]
  unsigned __int64 v69; // [rsp+10h] [rbp-128h]
  _BYTE *v70; // [rsp+10h] [rbp-128h]
  unsigned __int64 v71; // [rsp+10h] [rbp-128h]
  unsigned __int16 *v72; // [rsp+28h] [rbp-110h]
  unsigned __int64 v73; // [rsp+30h] [rbp-108h]
  unsigned __int64 v74; // [rsp+30h] [rbp-108h]
  unsigned __int64 v75; // [rsp+30h] [rbp-108h]
  unsigned __int64 v76; // [rsp+30h] [rbp-108h]
  unsigned __int64 v77; // [rsp+30h] [rbp-108h]
  unsigned __int64 v78; // [rsp+38h] [rbp-100h]
  __m128i si128; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int64 v80; // [rsp+50h] [rbp-E8h]
  int v81; // [rsp+58h] [rbp-E0h]
  int v82; // [rsp+5Ch] [rbp-DCh]
  int v83; // [rsp+60h] [rbp-D8h]
  void *ptr[2]; // [rsp+70h] [rbp-C8h] BYREF
  _QWORD v85[4]; // [rsp+80h] [rbp-B8h] BYREF
  void *v86; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v87; // [rsp+A8h] [rbp-90h]
  _BYTE v88[136]; // [rsp+B0h] [rbp-88h] BYREF

  v86 = v88;
  v87 = 0x200000000LL;
  sub_EE9E50((__m128 *)ptr, a2);
  si128 = _mm_load_si128((const __m128i *)ptr);
  v80 = v85[0];
  if ( (si128.m128i_i8[8] & 3) != 0 )
    v8 = (unsigned __int64 *)sub_EF2B30((__int64)&si128);
  else
    v8 = (unsigned __int64 *)si128.m128i_i64[0];
  v72 = sub_1C7CFE0(a1, *v8, a3, a4, v5, v6, v7);
  if ( v72 == (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    v50 = 1;
    goto LABEL_34;
  }
  v9 = *(_QWORD *)(a2 + 24);
  v10 = 0;
  ptr[0] = v85;
  ptr[1] = (void *)0x400000000LL;
  if ( v9 == v9 + 24LL * (*(_WORD *)(a2 + 20) >> 1) )
  {
LABEL_56:
    v50 = sub_1A13360(
            *a1,
            (__int64)&v86,
            *(_DWORD *)(a2 + 16),
            *(_BYTE *)(a2 + 20) & 1,
            (unsigned __int64)v72 & 0xFFFFFFFFFFFFFFFELL,
            a3,
            a4);
    goto LABEL_32;
  }
  v11 = v9 + 24LL * (*(_WORD *)(a2 + 20) >> 1);
  v12 = v9;
  while ( !*(_DWORD *)v12 )
  {
    v13 = *(_QWORD *)(v12 + 8);
    if ( (v13 & 1) != 0 || !v13 )
    {
      v10 = 1;
LABEL_13:
      v19 = *(_DWORD *)(v12 + 20);
      v61 = *(_DWORD *)(v12 + 16);
      si128.m128i_i64[1] = sub_C00930(v12);
      v20 = (unsigned int)v87;
      v80 = __PAIR64__(v19, v61);
      v21 = (unsigned int)v87 + 1LL;
      si128.m128i_i32[0] = 0;
      if ( v21 > HIDWORD(v87) )
      {
        if ( v86 > &si128 || &si128 >= (__m128i *)((char *)v86 + 40 * (unsigned int)v87) )
        {
          sub_2237220(&v86, v88, v21, 40);
          v22 = (char *)v86;
          v20 = (unsigned int)v87;
          p_si128 = &si128;
        }
        else
        {
          v65 = v86;
          sub_2237220(&v86, v88, v21, 40);
          v22 = (char *)v86;
          v20 = (unsigned int)v87;
          p_si128 = (__m128i *)((char *)v86 + (char *)&si128 - v65);
        }
      }
      else
      {
        v22 = (char *)v86;
        p_si128 = &si128;
      }
      a3 = (__m128)_mm_loadu_si128(p_si128);
      v24 = (__m128 *)&v22[40 * v20];
      *v24 = a3;
      a4 = (__m128)_mm_loadu_si128(p_si128 + 1);
      LODWORD(v87) = v87 + 1;
      v24[1] = a4;
      v24[2].m128_u64[0] = p_si128[2].m128i_u64[0];
      goto LABEL_16;
    }
    v14 = sub_1C7A830((__int64)a1, v13);
    if ( v14 )
    {
      v17 = *(_QWORD *)(v12 + 8);
      if ( (v17 & 1) != 0 )
      {
        v10 = 1;
        goto LABEL_12;
      }
    }
    else
    {
      v17 = *(_QWORD *)(v12 + 8);
      if ( (v17 & 1) != 0 )
        goto LABEL_12;
    }
    v18 = v14 == v17;
    v17 = 1;
    if ( !v18 )
      v10 = 1;
LABEL_12:
    if ( !(unsigned __int8)sub_B78060(v14, v13, v17, v15, v16) )
      goto LABEL_13;
LABEL_16:
    v12 += 24;
    if ( v11 == v12 )
      goto LABEL_56;
  }
  if ( *(_DWORD *)v12 == 1 )
  {
    v45 = sub_C033F0(a2, v12);
    v49 = sub_1C7CFE0(a1, v45, a3, a4, v46, v47, v48);
    if ( v49 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      goto LABEL_31;
    v52 = *(_DWORD *)(v12 + 12);
    si128.m128i_i32[0] = 1;
    v53 = (unsigned __int64)v49 & 0xFFFFFFFFFFFFFFFELL;
    si128.m128i_i64[1] = (unsigned __int64)v49 & 0xFFFFFFFFFFFFFFFELL;
    v80 = v52;
    v54 = (unsigned int)v87 + 1LL;
    v55 = (__m128i *)((char *)v86 + 40 * (unsigned int)v87);
    v56 = &si128;
    if ( v54 > HIDWORD(v87) )
    {
      v70 = v86;
      if ( v86 > &si128 || v55 <= &si128 )
      {
        v71 = v53;
        sub_2237220(&v86, v88, v54, 40);
        v53 = v71;
        v55 = (__m128i *)((char *)v86 + 40 * (unsigned int)v87);
        v56 = &si128;
      }
      else
      {
        v77 = v53;
        sub_2237220(&v86, v88, v54, 40);
        v53 = v77;
        v56 = (__m128i *)((char *)v86 + (char *)&si128 - v70);
        v55 = (__m128i *)((char *)v86 + 40 * (unsigned int)v87);
      }
    }
    *v55 = _mm_loadu_si128(v56);
    v57 = _mm_loadu_si128(v56 + 1);
    LODWORD(v87) = v87 + 1;
    v55[1] = v57;
    v55[2].m128i_i64[0] = v56[2].m128i_i64[0];
    if ( !v10 )
    {
      v64 = v53;
      v60 = sub_C033F0(a2, v12);
      v53 = v64;
      v10 = v60 != v64;
    }
    sub_14B7B40((__int64)ptr, v53);
    goto LABEL_16;
  }
  v25 = sub_C03400(a2, v12);
  v62 = sub_1C7CFE0(a1, v25, a3, a4, v26, v27, v28);
  if ( v62 != (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    v29 = sub_C03410(a2, v12);
    v33 = sub_1C7CFE0(a1, v29, a3, a4, v30, v31, v32);
    if ( v33 != (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
      v34 = *(_DWORD *)(v12 + 16);
      v35 = *(_DWORD *)(v12 + 12);
      si128.m128i_i32[0] = 2;
      v36 = (unsigned __int64)v33 & 0xFFFFFFFFFFFFFFFELL;
      v80 = (unsigned __int64)v33 & 0xFFFFFFFFFFFFFFFELL;
      v82 = v34;
      v37 = (unsigned __int64)v62 & 0xFFFFFFFFFFFFFFFELL;
      v81 = v35;
      v38 = (unsigned int)v87 + 1LL;
      si128.m128i_i64[1] = (unsigned __int64)v62 & 0xFFFFFFFFFFFFFFFELL;
      v39 = (__m128i *)((char *)v86 + 40 * (unsigned int)v87);
      v83 = 0;
      v40 = &si128;
      if ( v38 > HIDWORD(v87) )
      {
        v67 = v86;
        if ( v86 > &si128 || v39 <= &si128 )
        {
          v75 = v36;
          v68 = v37;
          sub_2237220(&v86, v88, v38, 40);
          v36 = v75;
          v37 = v68;
          v39 = (__m128i *)((char *)v86 + 40 * (unsigned int)v87);
          v40 = &si128;
        }
        else
        {
          v78 = v36;
          v74 = v37;
          sub_2237220(&v86, v88, v38, 40);
          v37 = v74;
          v36 = v78;
          v40 = (__m128i *)((char *)v86 + (char *)&si128 - v67);
          v39 = (__m128i *)((char *)v86 + 40 * (unsigned int)v87);
        }
      }
      *v39 = _mm_loadu_si128(v40);
      v41 = _mm_loadu_si128(v40 + 1);
      LODWORD(v87) = v87 + 1;
      v39[1] = v41;
      v39[2].m128i_i64[0] = v40[2].m128i_i64[0];
      if ( v10 || (v73 = v36, v63 = v37, v58 = sub_C03400(a2, v12), v37 = v63, v36 = v73, v58 != v63) )
      {
        v10 = 1;
      }
      else
      {
        v59 = sub_C03410(a2, v12);
        v36 = v73;
        v37 = v63;
        v10 = v59 != v73;
      }
      v42 = LODWORD(ptr[1]);
      v43 = LODWORD(ptr[1]) + 1LL;
      if ( v43 > HIDWORD(ptr[1]) )
      {
        v76 = v36;
        v69 = v37;
        sub_2237220(ptr, v85, v43, 8);
        v42 = LODWORD(ptr[1]);
        v36 = v76;
        v37 = v69;
      }
      *((_QWORD *)ptr[0] + v42) = v37;
      ++LODWORD(ptr[1]);
      v44 = LODWORD(ptr[1]);
      if ( (unsigned __int64)LODWORD(ptr[1]) + 1 > HIDWORD(ptr[1]) )
      {
        v66 = v36;
        sub_2237220(ptr, v85, LODWORD(ptr[1]) + 1LL, 8);
        v44 = LODWORD(ptr[1]);
        v36 = v66;
      }
      *((_QWORD *)ptr[0] + v44) = v36;
      ++LODWORD(ptr[1]);
      goto LABEL_16;
    }
  }
LABEL_31:
  v50 = 1;
LABEL_32:
  if ( ptr[0] != v85 )
    free(ptr[0]);
LABEL_34:
  if ( v86 != v88 )
    free(v86);
  return v50;
}
