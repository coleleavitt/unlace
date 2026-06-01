__int64 __fastcall sub_1CE0410(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        unsigned int a10,
        unsigned int a11,
        __int64 a12,
        int a13,
        unsigned int a14)
{
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r13
  unsigned __int64 v25; // rax
  __int64 v26; // r14
  unsigned int *v27; // rdx
  _QWORD *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __m128i v36; // xmm3
  __m128i *v37; // rcx
  __m128i v38; // xmm1
  bool v39; // zf
  __int64 v40; // rax
  __m128i v41; // xmm2
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __m128i v44; // xmm0
  __int64 v45; // rsi
  size_t v46; // r13
  _QWORD *v47; // r15
  _QWORD *v48; // rdx
  unsigned __int64 v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r13
  __int64 v55; // rax
  _QWORD *v56; // rax
  __m128i *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rsi
  unsigned __int64 v60; // rax
  __int64 v61; // rdx
  unsigned int *v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r9
  _QWORD *v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // rax
  __m128i v72; // [rsp+0h] [rbp-218h] BYREF
  int v73; // [rsp+10h] [rbp-208h]
  __m128i *v74; // [rsp+18h] [rbp-200h]
  void *v75; // [rsp+20h] [rbp-1F8h] BYREF
  __int64 v76; // [rsp+28h] [rbp-1F0h] BYREF
  void *v77; // [rsp+30h] [rbp-1E8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-1E0h]
  void *v79; // [rsp+48h] [rbp-1D0h] BYREF
  unsigned __int8 *v80; // [rsp+50h] [rbp-1C8h] BYREF
  _BYTE v81[16]; // [rsp+58h] [rbp-1C0h] BYREF
  int v82; // [rsp+68h] [rbp-1B0h]
  char v83; // [rsp+6Ch] [rbp-1ACh]
  char v84; // [rsp+A8h] [rbp-170h]
  unsigned int v85; // [rsp+B0h] [rbp-168h]
  char v86; // [rsp+B4h] [rbp-164h]
  void *ptr; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v88; // [rsp+C8h] [rbp-150h]
  _BYTE v89[256]; // [rsp+D0h] [rbp-148h] BYREF
  unsigned int v90; // [rsp+1D0h] [rbp-48h]
  unsigned int v91; // [rsp+1D4h] [rbp-44h]

  v72.m128i_i32[0] = a5;
  if ( a3 )
  {
    if ( a2 && !*(_QWORD *)(a2 + 64) )
    {
      sub_168B9F0((__int64)&ptr, a1 + 1, a3, (*(_BYTE *)(a1[29] + 1) & 0x10) == 0 ? 2849 : 2825, 0);
      v79 = v81;
      v74 = (__m128i *)v81;
      *(__int64 *)((char *)si128.m128i_i64 + 4) = 0;
      si128.m128i_i8[12] = 0;
      v80 = nullptr;
      v81[0] = 0;
      LOBYTE(v82) = 0;
      LODWORD(v77) = a3;
      HIDWORD(v77) = a3;
      si128.m128i_i8[0] = 1;
      sub_1589170((__int64)&ptr, &v77);
      if ( v79 != v81 )
        operator delete(v79);
      sub_15F7200(&ptr);
    }
    v17 = sub_16A2930((__int64)a1, a4, 0, a4, a5, a6);
    if ( v17 && (*(_BYTE *)(v17 + 8) & 0x7Fu) - 59 <= 2 && v17 != 64 )
    {
      v18 = *(_QWORD *)(v17 - 24);
      v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v18 & 7) != 0 )
        v19 = 0;
      if ( a9 == v19 )
      {
        sub_168B9F0((__int64)&ptr, a1 + 1, a10, 0x1609u, 0);
        v70 = sub_17AE460((__int64)&ptr, &a9);
        LODWORD(v76) = 0;
        v71 = sub_1587D10(v70, (int *)&v76);
        LODWORD(v77) = v72.m128i_i32[0] != 0;
        sub_1587D10(v71, (int *)&v77);
        sub_15F7200(&ptr);
      }
    }
    ptr = v89;
    v88 = 0x800000000LL;
    v90 = a11;
    v91 = a14;
    sub_1CB4530((__int64)a1, &a12, (__int64 *)&ptr);
    LODWORD(v74) = 5;
  }
  else
  {
    ptr = v89;
    v88 = 0x800000000LL;
    v90 = a11;
    v91 = a14;
    sub_1CB4530((__int64)a1, &a12, (__int64 *)&ptr);
    LODWORD(v74) = 6;
  }
  sub_F22A90(&v77, a6);
  v75 = v77;
  v20 = (_QWORD *)sub_F22F70(&v75);
  if ( v20 )
  {
    if ( (unsigned __int64)(v20[1] - 1LL) > 0xFFFFFFFFFFFFFFD1LL )
    {
      sub_168B9F0((__int64)&v77, a1 + 1, a10, 0x13FFu, 0);
      if ( v84 )
      {
        sub_F23A70(&v80, (__int64)v75);
      }
      else if ( v86 )
      {
        v54 = sub_168B9E0(&v77);
        v55 = si128.m128i_i64[1];
        if ( si128.m128i_i64[1] )
          v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)si128.m128i_i64[1] + 32LL))(si128.m128i_i64[1]);
        v76 = v55;
        v56 = sub_1587BC0(v54, &v76, v50, v51, v52, v53);
        sub_F23A70((unsigned __int8 **)(*v56 + 32LL * v85 + 8), (__int64)v75);
      }
      v23 = 0;
      sub_15F7200(&v77);
      sub_1CDCDC0((__int64)a1, (__int64)v75);
      goto LABEL_18;
    }
    v25 = sub_AB7A80((_QWORD *)a1[31], (unsigned int)v74, v20, (const __m128i *)ptr, v88);
    v83 = 0;
    v26 = v25;
    v82 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v77 = &v79;
    sub_1EA6140(&v77, v25, (unsigned int)(8 * *(_DWORD *)(v25 + 20) + 32), 8);
    *v27 = a3;
    v28 = (_QWORD *)a1[31];
    v74 = (__m128i *)v27;
    v32 = sub_15AB9E0(a4, v28, (__int64)v27, v29, v30, v31);
    v36 = _mm_cvtsi32_si128(v72.m128i_u32[0]);
    v37 = v74;
    v38 = _mm_cvtsi32_si128(a11);
    v39 = v32 == 0;
    v40 = 0;
    v41 = _mm_cvtsi32_si128(a14);
    v42 = _mm_cvtsi32_si128(a10);
    if ( v39 )
      v33 = 0;
    v43 = _mm_unpacklo_epi32(v38, v41);
    v74->m128i_i64[1] = v33;
    v44 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v42, v36), v43);
    v37[1] = v44;
    v45 = (unsigned int)(v88 - 1);
    if ( (_DWORD)v88 )
    {
      while ( 1 )
      {
        v37[2].m128i_i64[v40] = *((_QWORD *)ptr + 4 * v40 + 3);
        if ( v45 == v40 )
          break;
        ++v40;
      }
    }
    v46 = si128.m128i_i64[0] - si128.m128i_i64[1];
    v47 = sub_A81BC0((_QWORD *)a1[31], v26, si128.m128i_i32[0] - si128.m128i_i32[2], (__int64)v37, v34, v35);
    memcpy(v47 + 1, (char *)v77 + si128.m128i_i64[1], v46);
    v48 = v47;
  }
  else
  {
    v49 = sub_1CDD580(
            (__int64)a1,
            (__int64)v75,
            a10,
            (__int64)&ptr,
            a7,
            a8,
            v21,
            v22,
            v72.m128i_i64[0],
            v72.m128i_i32[2],
            v73,
            (char)v74,
            (int)v75,
            v76);
    if ( (v49 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v23 = 0;
      goto LABEL_18;
    }
    v77 = &v79;
    v82 = 0;
    v83 = 0;
    v43 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v72 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a10), _mm_cvtsi32_si128(v72.m128i_u32[0])),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a11), _mm_cvtsi32_si128(a14)));
    si128 = v43;
    sub_18CD120((__int64)&v77, v49);
    v44 = _mm_load_si128(&v72);
    v58 = 0;
    *v57 = v44;
    v59 = (unsigned int)(v88 - 1);
    if ( (_DWORD)v88 )
    {
      while ( 1 )
      {
        v57[1].m128i_i64[v58] = *((_QWORD *)ptr + 4 * v58 + 3);
        if ( v59 == v58 )
          break;
        ++v58;
      }
    }
    v60 = sub_A76250(a1[31], (int)v74, *(_QWORD *)(a4 + 8), v49, 0);
    v61 = 16;
    v26 = v60;
    if ( (unsigned __int8)(*(_WORD *)(v60 + 18) >> 3) == 6 )
      v61 = 16LL * (*(_QWORD *)(v60 + 32) != 0);
    v63 = sub_1EA6140(&v77, v60, v61, 8);
    if ( (unsigned __int8)(*(_WORD *)(v63 + 18) >> 3) != 6 || *(_QWORD *)(v63 + 32) )
      *v62 = a3;
    v65 = (_QWORD *)a1[31];
    v74 = (__m128i *)v62;
    v72.m128i_i64[0] = v63;
    sub_15AB9E0(a4, v65, (__int64)v62, v63, (__int64)v62, v64);
    v68 = v72.m128i_i64[0];
    v69 = (__int64)v74;
    if ( (unsigned __int8)(*(_WORD *)(v72.m128i_i64[0] + 18) >> 3) != 6 || *(_QWORD *)(v72.m128i_i64[0] + 32) )
      v74->m128i_i64[1] = v66;
    v48 = sub_18C0B80(&v77, (_QWORD *)a1[31], v26, v68, v69, v67);
  }
  v23 = sub_1E61050(a1, v26, v48, *(double *)v44.m128i_i64, *(double *)v43.m128i_i64);
  if ( v77 && v77 != &v79 )
    operator delete[](v77);
LABEL_18:
  if ( ptr != v89 )
    free(ptr);
  return v23;
}
