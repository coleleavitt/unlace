char __fastcall sub_1DD6360(
        unsigned int *a1,
        const __m128i *a2,
        __m128i *a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __int32 v9; // eax
  __int64 v10; // rax
  __int64 v11; // r10
  const __m128i *v12; // r14
  const __m128i *v13; // r12
  char result; // al
  void **v15; // rsi
  const __m128i *v16; // r12
  const __m128i *v17; // rbp
  __int64 v18; // rsi
  __int32 v19; // r14d
  __int64 v20; // rbx
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 i; // rdx
  __m128i *v25; // rax
  void *v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rbp
  bool v31; // cl
  __int64 v32; // rsi
  __int64 v33; // r13
  __int64 v34; // rax
  bool v35; // al
  int v36; // edx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __m128i v39; // xmm0
  __m128i *v40; // rax
  __int64 v41; // rbp
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int64 v46; // rsi
  unsigned __int16 *v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rsi
  char v53; // al
  __m128i *v54; // rbx
  __int64 v55; // rsi
  __int64 *v56; // rax
  unsigned __int64 v57; // rbx
  __m128i v58; // xmm0
  __m128i *v59; // rax
  __m128i si128; // xmm6
  __int64 *v61; // rax
  __int64 v62; // rsi
  void *v63; // rdx
  int v64; // r12d
  __m128 v65; // xmm5
  __int64 v66; // r8
  __int64 v67; // rdx
  _QWORD *v68; // rsi
  __m128i *v69; // rax
  __m128i *v70; // rax
  __m128i v71; // xmm6
  char v72; // r12
  void *v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // rcx
  __m128i *v76; // rax
  __m128i v77; // xmm0
  void *v78; // rdx
  bool v79; // cc
  __m128i v80; // xmm6
  __m128i v81; // xmm0
  __m128i *v82; // rax
  __m128i v83; // xmm7
  __m128i v84; // [rsp+0h] [rbp-F8h] BYREF
  __m128i *v85; // [rsp+10h] [rbp-E8h]
  void **v86; // [rsp+18h] [rbp-E0h]
  __m128i v87; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v88; // [rsp+30h] [rbp-C8h] BYREF
  void *v89; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v90; // [rsp+48h] [rbp-B0h]
  char v91; // [rsp+4Ch] [rbp-ACh]
  void *v92[2]; // [rsp+50h] [rbp-A8h] BYREF
  void *v93; // [rsp+60h] [rbp-98h]
  __m128i v94; // [rsp+70h] [rbp-88h] BYREF
  __m128i v95; // [rsp+80h] [rbp-78h] BYREF
  __m128i v96; // [rsp+90h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v98; // [rsp+B0h] [rbp-48h]

  v9 = a2->m128i_i32[0];
  v85 = a3;
  v10 = v9 & 0x7FFFFFFF;
  *(_OWORD *)v92 = 0;
  v93 = nullptr;
  if ( (_DWORD)v10 != 9 )
  {
    switch ( v10 )
    {
      case 1LL:
        v55 = a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v55 )
          v55 = (__int64)sub_A81910(*(_QWORD **)(*(_QWORD *)a1 + 248LL), a2->m128i_i64[1], a1[10]);
        v56 = sub_1DD1930((__int64)a1, v55, (__m128)0LL, a8);
        if ( v56 )
        {
          v57 = (unsigned __int64)v56 & 0xFFFFFFFFFFFFFFFCLL;
          sub_F1D250((__int64)&v94, *v56, 0, 0);
          v58 = _mm_load_si128(&v94);
          ptr[1] = (void *)(v57 | 2);
          v26 = v92[0];
          ptr[0] = (void *)v95.m128i_i64[0];
          v59 = v85;
          si128 = _mm_load_si128((const __m128i *)ptr);
          v96 = v58;
          *v85 = v58;
          v59[1] = si128;
          result = 0;
        }
        else
        {
          v26 = v92[0];
          result = 1;
        }
        goto LABEL_14;
      case 2LL:
      case 3LL:
      case 4LL:
      case 5LL:
        v27 = sub_F1D610((__int64)a2);
        v28 = (__int64)sub_1DD1AB0((__int64)a1, v27, (__m128)0LL, a8);
        v30 = v28;
        if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_54;
        v31 = 1;
        v32 = 0;
        if ( (a2->m128i_i32[0] & 0x7FFFFFFF) != 2 )
          goto LABEL_23;
        v33 = a2[1].m128i_i64[0];
        if ( v33 )
        {
          v34 = sub_1DD8310(a1, a1[10], a2[1].m128i_i64[0]);
          v32 = v34;
          if ( !v34 )
          {
LABEL_54:
            result = 1;
LABEL_29:
            v26 = v92[0];
            goto LABEL_14;
          }
          v31 = v33 == v34;
LABEL_23:
          v35 = v31 && v27 == v30;
          if ( !v35 )
          {
            v36 = a2->m128i_i32[0] & 0x7FFFFFFF;
            if ( v36 == 4 )
            {
              v72 = (unsigned __int8)a2->m128i_i8[7] >> 7;
              v73 = (void *)a2->m128i_i64[1];
              v74 = a2->m128i_i32[1] & 0x7FFFFFFF;
              if ( (unsigned int)v74 > 0x40 )
              {
                v84.m128i_i8[0] = 0;
                sub_2205600(&v96, v74, v73, ((unsigned __int64)(unsigned int)v74 + 63) >> 6);
                v91 = v72;
                v35 = 0;
                v90 = v96.m128i_u32[2];
                v89 = (void *)v96.m128i_i64[0];
              }
              else
              {
                v90 = a2->m128i_i32[1] & 0x7FFFFFFF;
                v89 = v73;
                v91 = v72;
              }
              v75 = *(_QWORD *)a1;
              v84.m128i_i8[0] = v35;
              sub_F1F190((__int64)&v94, *(_QWORD **)(v75 + 248), (void ***)&v89, v30, 0, v29);
              v76 = v85;
              v77 = _mm_load_si128(&v94);
              ptr[1] = nullptr;
              v78 = (void *)v95.m128i_i64[0];
              v79 = v90 <= 0x40;
              *v85 = v77;
              ptr[0] = v78;
              v80 = _mm_load_si128((const __m128i *)ptr);
              v96 = v77;
              v76[1] = v80;
              result = v84.m128i_i8[0];
              if ( !v79 && v89 )
              {
                operator delete[](v89);
                result = v84.m128i_i8[0];
              }
              goto LABEL_29;
            }
            if ( v36 == 3 )
            {
              v84.m128i_i8[0] = 0;
              sub_F1D250((__int64)&v94, v30, 1, 0);
              goto LABEL_28;
            }
            if ( v36 != 2 )
            {
              v37 = *(_QWORD *)a1;
              v38 = a2->m128i_i64[1];
              v84.m128i_i8[0] = 0;
              sub_F1EED0((__int64)&v94, *(_QWORD **)(v37 + 248), v30, v38, 0, v29);
LABEL_28:
              v39 = _mm_load_si128(&v94);
              ptr[1] = nullptr;
              v40 = v85;
              ptr[0] = (void *)v95.m128i_i64[0];
              v96 = v39;
              *v85 = v39;
              v40[1] = _mm_load_si128((const __m128i *)ptr);
              result = v84.m128i_i8[0];
              goto LABEL_29;
            }
            v33 = v32;
            goto LABEL_65;
          }
        }
        else if ( v28 != v27 )
        {
LABEL_65:
          sub_F1D290(v94.m128i_i32, v33, v30, 0);
          v81 = _mm_load_si128(&v94);
          ptr[1] = nullptr;
          ptr[0] = (void *)v95.m128i_i64[0];
          v82 = v85;
          v83 = _mm_load_si128((const __m128i *)ptr);
          v96 = v81;
          *v85 = v81;
          v82[1] = v83;
          result = 0;
          goto LABEL_29;
        }
        v70 = v85;
        *v85 = _mm_loadu_si128(a2);
        v71 = _mm_loadu_si128(a2 + 1);
        v70[1] = v71;
        result = 0;
        v84 = v71;
        goto LABEL_29;
      case 6LL:
        v61 = (__int64 *)(a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
        v62 = *v61;
        v63 = (void *)v61[1];
        if ( *v61 )
        {
          v62 = sub_1DD3CF0((__int64)a1, v62, v63, 0, 0);
          if ( !v62 )
            goto LABEL_54;
        }
        v64 = 0;
        v84.m128i_i64[0] = (__int64)v63;
        v96 = 0;
        *(_OWORD *)ptr = 0;
        v65 = _mm_loadh_ps((const double *)v84.m128i_i64);
        v98 = 0;
        v84 = (__m128i)v65;
        sub_15AB8B0((__int64)&v96, v62, (__int64)v63);
        if ( (a2->m128i_i32[0] & 0x7FFFFFFFu) - 6 <= 1 )
          v64 = *(_DWORD *)((a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
        sub_F22A90(&v94, a2->m128i_i64[1]);
        v89 = (void *)sub_1DD84F0((_DWORD)a1, (unsigned int)&v96, v94.m128i_i32[0], v64, 0, 0, 0);
        result = sub_F22B30(&v89);
        if ( !result )
        {
          v66 = 0;
          if ( (a2->m128i_i32[0] & 0x7FFFFFFFu) - 6 <= 1 )
            v66 = *(unsigned int *)((a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
          v67 = *(_QWORD *)a1;
          LOBYTE(v86) = 0;
          v68 = *(_QWORD **)(v67 + 248);
          v94.m128i_i64[0] = 6;
          v94.m128i_i64[1] = (__int64)v89;
          sub_F1ECA0(&v95.m128i_u64[1], v68, v84.m128i_u64[0], v84.m128i_u64[1], v66, 0);
          v69 = v85;
          *v85 = _mm_load_si128(&v94);
          v69[1] = _mm_load_si128(&v95);
          result = (char)v86;
        }
        if ( HIDWORD(ptr[1]) )
        {
          v84.m128i_i8[0] = result;
          free(ptr[0]);
          result = v84.m128i_i8[0];
        }
        goto LABEL_29;
      case 8LL:
        v41 = *(_QWORD *)a1;
        sub_18C79B0(*(_QWORD *)a1, 4 * (a4 == 0), 0, 1);
        v46 = a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
        if ( (a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          v46 = a2->m128i_u64[1];
        v47 = sub_1DC71F0((__int64 *)a1, v46, v42, v43, v44, v45, (__m128)0LL, a8);
        v52 = sub_19146D0(*(_QWORD *)a1, (unsigned __int64)v47, v48, v49, v50, v51, (__m128)0LL, a8);
        v53 = 1;
        if ( v52 != 1 )
        {
          v54 = v85;
          v85->m128i_i64[0] = v85->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
          v54[1].m128i_i64[1] = v52 & 0xFFFFFFFFFFFFFFFCLL | 1;
          v54->m128i_i64[1] = v52 & 0xFFFFFFFFFFFFFFFELL;
          v53 = 0;
        }
        v84.m128i_i8[0] = v53;
        sub_190D5E0(v41, (__m128)0LL);
        v26 = v92[0];
        result = v84.m128i_i8[0];
        goto LABEL_14;
      default:
        return 1;
    }
  }
  v11 = a2->m128i_i64[1];
  v12 = (const __m128i *)(v11 + 24LL * a2->m128i_u32[1]);
  if ( (const __m128i *)v11 != v12 )
  {
    v13 = (const __m128i *)a2->m128i_i64[1];
    v84.m128i_i32[0] = a4;
    v86 = v92;
    while ( 1 )
    {
      sub_1D3AAD0(&v94, *(_QWORD *)a1, v13, 0, 0, 0, 0.0, a8);
      v96 = (__m128i)(0xFFFFFFFE00000000LL & v96.m128i_u64[0]);
      ptr[1] = nullptr;
      result = sub_1DD6360(a1, &v94, &v96, v84.m128i_u32[0]);
      if ( result )
        goto LABEL_29;
      if ( v92[1] == v93 )
      {
        v13 = (const __m128i *)((char *)v13 + 24);
        sub_1DBC7E0((__int64)v86, (const __m128i *)v92[1], &v96);
        if ( v12 == v13 )
        {
LABEL_7:
          v16 = (const __m128i *)v92[1];
          v17 = (const __m128i *)v92[0];
          v18 = (char *)v92[1] - (char *)v92[0];
          v19 = -1431655765 * (((char *)v92[1] - (char *)v92[0]) >> 3);
          goto LABEL_8;
        }
      }
      else
      {
        v15 = (void **)((char *)v92[1] + 24);
        v13 = (const __m128i *)((char *)v13 + 24);
        *(__m128i *)v92[1] = _mm_load_si128(&v96);
        *(v15 - 1) = ptr[0];
        v92[1] = v15;
        if ( v12 == v13 )
          goto LABEL_7;
      }
    }
  }
  v19 = 0;
  v18 = 0;
  v16 = nullptr;
  v17 = nullptr;
LABEL_8:
  v20 = *(_QWORD *)a1;
  v21 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
  v22 = v21[294];
  v21[304] += v18;
  v23 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v21[295] >= (unsigned __int64)(v23 + v18) && v22 )
    v21[294] = v23 + v18;
  else
    v23 = sub_986170((__int64)(v21 + 294), v18, v18, 3, a5, a6);
  for ( i = v23; v17 != v16; *(_QWORD *)(i - 8) = v17[-1].m128i_i64[1] )
  {
    a8 = (__m128)_mm_loadu_si128(v17);
    v17 = (const __m128i *)((char *)v17 + 24);
    i += 24;
    *(__m128 *)(i - 24) = a8;
  }
  v96.m128i_i64[1] = v23;
  v96.m128i_i32[0] = 9;
  v96.m128i_i32[1] = v19;
  sub_1D3AAD0(&v87, v20, &v96, 0, 0, 0, 0.0, a8);
  v25 = v85;
  v26 = v92[0];
  *v85 = _mm_loadu_si128(&v87);
  v25[1] = _mm_loadu_si128(&v88);
  result = 0;
LABEL_14:
  if ( v26 )
  {
    v84.m128i_i8[0] = result;
    operator delete(v26);
    return v84.m128i_i8[0];
  }
  return result;
}
