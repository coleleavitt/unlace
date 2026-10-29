unsigned __int64 __fastcall sub_1DE7220(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        void *a5,
        __int64 a6,
        __m128 a7,
        __m128 si128)
{
  const __m128i *v8; // r14
  int v9; // eax
  __int64 *m128i_i64; // r15
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rbp
  unsigned __int64 v21; // rax
  __int64 v22; // r12
  int v23; // r13d
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rbx
  int v28; // edx
  _DWORD *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rsi
  _BYTE *v32; // r12
  __m128i *v33; // r13
  unsigned __int64 v34; // rdx
  __m128i *v35; // rax
  __m128i v36; // xmm6
  int v37; // r12d
  __m128i v38; // xmm2
  __m128i *v39; // rcx
  unsigned __int64 v40; // rdx
  __m128i *v41; // rax
  __m128i v42; // xmm4
  int v43; // eax
  __int64 v44; // r13
  int v45; // r15d
  __int32 v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rsi
  __int64 *v50; // rax
  __int64 v51; // r12
  int v52; // r13d
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __m128i v59; // xmm7
  __m128i *v60; // rdx
  __m128i v61; // xmm6
  __int64 v62; // rax
  int v63; // ecx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  void **v68; // [rsp+0h] [rbp-2E8h]
  __int64 v69; // [rsp+8h] [rbp-2E0h]
  __int64 v71; // [rsp+18h] [rbp-2D0h]
  _BYTE *v72; // [rsp+20h] [rbp-2C8h]
  __int64 v73; // [rsp+28h] [rbp-2C0h]
  unsigned __int64 v76; // [rsp+50h] [rbp-298h]
  __int64 *v77; // [rsp+50h] [rbp-298h]
  void *v78; // [rsp+50h] [rbp-298h]
  unsigned __int64 v79; // [rsp+58h] [rbp-290h]
  unsigned int v80; // [rsp+64h] [rbp-284h]
  int v81; // [rsp+68h] [rbp-280h]
  unsigned int v82; // [rsp+6Ch] [rbp-27Ch]
  __int64 *v83; // [rsp+78h] [rbp-270h]
  __m128i v84; // [rsp+80h] [rbp-268h] BYREF
  __m128i v85; // [rsp+90h] [rbp-258h] BYREF
  char v86; // [rsp+A2h] [rbp-246h] BYREF
  char v87; // [rsp+A3h] [rbp-245h] BYREF
  unsigned int v88; // [rsp+A4h] [rbp-244h] BYREF
  int v89; // [rsp+A8h] [rbp-240h] BYREF
  int v90; // [rsp+ACh] [rbp-23Ch] BYREF
  __m128i v91; // [rsp+B0h] [rbp-238h] BYREF
  __int64 v92; // [rsp+C0h] [rbp-228h]
  __m128i v93; // [rsp+D0h] [rbp-218h] BYREF
  __m128i v94; // [rsp+E0h] [rbp-208h]
  __m128i v95; // [rsp+F0h] [rbp-1F8h] BYREF
  __int64 v96; // [rsp+100h] [rbp-1E8h]
  __int64 v97; // [rsp+108h] [rbp-1E0h]
  __m128i v98; // [rsp+110h] [rbp-1D8h] BYREF
  __int64 v99; // [rsp+120h] [rbp-1C8h]
  __int64 v100; // [rsp+128h] [rbp-1C0h]
  void *ptr; // [rsp+130h] [rbp-1B8h] BYREF
  __int64 v102; // [rsp+138h] [rbp-1B0h]
  _BYTE v103[32]; // [rsp+140h] [rbp-1A8h] BYREF
  _BYTE v104[24]; // [rsp+160h] [rbp-188h] BYREF
  unsigned __int64 v105; // [rsp+178h] [rbp-170h] BYREF
  void *v106; // [rsp+190h] [rbp-158h] BYREF
  __int64 v107; // [rsp+198h] [rbp-150h]
  _BYTE v108[256]; // [rsp+1A0h] [rbp-148h] BYREF
  __int64 v109; // [rsp+2A0h] [rbp-48h]

  v8 = a4;
  v68 = &v106;
  v106 = v108;
  v107 = 0x800000000LL;
  v109 = a4->m128i_i64[1];
  v9 = *(_DWORD *)(a3 + 20);
  v73 = (__int64)a5;
  if ( !v9 )
    goto LABEL_19;
  m128i_i64 = a4[1].m128i_i64;
  v69 = 48;
  v71 = (__int64)&a4[1].m128i_i64[(unsigned int)(v9 - 1) + 1];
  v72 = v104;
  do
  {
    v11 = *m128i_i64;
    v93.m128i_i64[1] = 0;
    v93.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    v12 = *(_DWORD *)(a3 + v69);
    a7 = (__m128)_mm_loadu_si128((const __m128i *)(a3 + v69));
    v94.m128i_i64[1] = 0;
    v13 = *(_QWORD *)(a3 + v69 + 16);
    v97 = v11;
    v95 = (__m128i)a7;
    v96 = v13;
    if ( (v12 & 0x7FFFFFFF) == 9 )
    {
      if ( !(unsigned __int8)sub_1DE1C70(
                               a1,
                               (__int64)a1,
                               (const __m128i *)v95.m128i_i64[1],
                               a7,
                               si128,
                               (__int64)a1,
                               (const __m128i *)(v95.m128i_i64[1] + 24LL * v95.m128i_u32[1]),
                               (__int64)&v106,
                               0) )
        goto LABEL_17;
      goto LABEL_12;
    }
    if ( !sub_F1D570((__int64)&v95) )
    {
      if ( !sub_1DD6360((unsigned int *)a1, &v95, &v93, 0, v14, v15, *(double *)a7.m128_u64, si128) )
      {
        v32 = v106;
        v33 = &v93;
        v34 = (unsigned int)v107 + 1LL;
        v35 = (__m128i *)((char *)v106 + 32 * (unsigned int)v107);
        if ( v34 > HIDWORD(v107) )
        {
          if ( v106 > &v93 || v35 <= &v93 )
          {
            sub_2237220(&v106, v108, v34, 32);
            v33 = &v93;
            v35 = (__m128i *)((char *)v106 + 32 * (unsigned int)v107);
          }
          else
          {
            sub_2237220(&v106, v108, v34, 32);
            v33 = (__m128i *)((char *)v106 + (char *)&v93 - v32);
            v35 = (__m128i *)((char *)v106 + 32 * (unsigned int)v107);
          }
        }
        *v35 = _mm_loadu_si128(v33);
        v36 = _mm_loadu_si128(v33 + 1);
        LODWORD(v107) = v107 + 1;
        v35[1] = v36;
        goto LABEL_17;
      }
      goto LABEL_12;
    }
    v88 = 0;
    v89 = 0;
    sub_1E4CF80(
      (unsigned int)&v98,
      *a1,
      (unsigned int)&v88,
      (unsigned int)&v89,
      v14,
      v15,
      v95.m128i_i64[0],
      v95.m128i_i64[1],
      v96,
      v97);
    ptr = v103;
    v102 = 0x200000000LL;
    *(double *)a7.m128_u64 = sub_1E4C910(
                               *a1,
                               (unsigned int)&ptr,
                               v16,
                               v17,
                               v18,
                               v19,
                               v98.m128i_i64[0],
                               v98.m128i_i64[1],
                               v99,
                               v100);
    v20 = (unsigned int)v102;
    v86 = 1;
    v87 = 0;
    v90 = v89;
    v21 = sub_F1E510((__int64)&v98, (__int64)&ptr, *(double *)a7.m128_u64);
    if ( sub_1DDBB60(a1, v88, v21, (__int64)ptr, v20, (__int64)&v86, a7, si128, (__int64)&v87, (__int64)&v90) )
      goto LABEL_10;
    if ( !v86 )
    {
      v22 = *a1;
      *(_QWORD *)&v104[8] = 0;
      v105 = 0;
      *(_QWORD *)v104 &= 0xFFFFFFFE00000000LL;
      v23 = *(_DWORD *)(v22 + 12632);
      *(_DWORD *)(v22 + 12632) = 0;
      if ( !sub_1DD6360((unsigned int *)a1, &v98, (__m128i *)v104, 0, (__int64)a5, a6, *(double *)a7.m128_u64, si128) )
      {
        sub_1DB7E30((__int64)&v84, a1, v88, v90, v24, v25, *(int *)v104, *(__int64 *)&v104[8], *(int *)&v104[16], v105);
        v93 = _mm_loadu_si128(&v84);
        v94 = _mm_loadu_si128(&v85);
        if ( (v84.m128i_i32[0] & 0x7FFFFFFF) != 0 )
        {
          sub_17429A0((__int64)&v106, &v93);
          *(_DWORD *)(v22 + 12632) = v23;
          goto LABEL_51;
        }
      }
      *(_DWORD *)(v22 + 12632) = v23;
LABEL_10:
      if ( ptr != v103 )
        free(ptr);
LABEL_12:
      v26 = 0;
      goto LABEL_13;
    }
    if ( v90 == 1 )
      goto LABEL_54;
    v37 = 0;
    v83 = m128i_i64;
    do
    {
      v44 = *a1;
      ++v37;
      v45 = *(_DWORD *)(*a1 + 12632LL);
      *(_DWORD *)(*a1 + 12632LL) = v37;
      if ( sub_1DD6360((unsigned int *)a1, &v98, &v93, 0, (__int64)a5, a6, *(double *)a7.m128_u64, si128) )
      {
LABEL_49:
        *(_DWORD *)(v44 + 12632) = v45;
        goto LABEL_10;
      }
      if ( (unsigned __int8)sub_F1D5E0((__int64)&v93) )
      {
        v46 = v93.m128i_i32[0] & 0x7FFFFFFF;
        if ( (v93.m128i_i32[0] & 0x7FFFFFFF) == 6 )
        {
          v82 = v88;
          v81 = v89;
          v76 = *(_QWORD *)((v94.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 8);
          v80 = *(_DWORD *)((v94.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
          v79 = *(_QWORD *)(v94.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
          sub_F22A90(v104, v93.m128i_i64[1]);
          v48 = *(_QWORD *)v104;
          v49 = *(_QWORD **)(*a1 + 248LL);
          *(_DWORD *)&v104[4] = v81;
          *(_DWORD *)v104 = 7;
          *(_QWORD *)&v104[8] = v48;
          sub_F1ECA0(&v105, v49, v79, v76, v80, v82);
        }
        else
        {
          if ( v46 == 8 )
          {
            v47 = sub_1E53EF0(*a1, v94.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
            if ( v47 != 1 )
            {
              *(_QWORD *)v104 = *(_QWORD *)v104 & 0xFFFFFFFE00000000LL | 8;
              *(_QWORD *)&v104[8] = v47 & 0xFFFFFFFFFFFFFFFELL;
              v105 = v47 & 0xFFFFFFFFFFFFFFFCLL | 1;
              goto LABEL_33;
            }
LABEL_32:
            *(_QWORD *)v104 &= 0xFFFFFFFE00000000LL;
            *(_QWORD *)&v104[8] = 0;
            v105 = 0;
            goto LABEL_33;
          }
          if ( v46 != 1 )
            goto LABEL_32;
          v50 = (__int64 *)sub_1E509C0(*a1, v94.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
          if ( !v50 )
            goto LABEL_32;
          v77 = v50;
          sub_F1D250((__int64)&v91, *v50, 0, 0);
          *(__m128i *)v104 = _mm_load_si128(&v91);
          *(_QWORD *)&v104[16] = v92;
          v105 = (unsigned __int64)v77 & 0xFFFFFFFFFFFFFFFCLL | 2;
        }
LABEL_33:
        si128 = (__m128)_mm_load_si128((const __m128i *)v104);
        v38 = _mm_load_si128((const __m128i *)&v104[16]);
        v93 = (__m128i)si128;
        v94 = v38;
        if ( (*(_DWORD *)v104 & 0x7FFFFFFF) == 0 )
          goto LABEL_49;
      }
      a5 = v106;
      v39 = &v93;
      v40 = (unsigned int)v107 + 1LL;
      v41 = (__m128i *)((char *)v106 + 32 * (unsigned int)v107);
      if ( v40 > HIDWORD(v107) )
      {
        if ( v106 > &v93 || v41 <= &v93 )
        {
          sub_2237220(&v106, v108, v40, 32);
          v39 = &v93;
          v41 = (__m128i *)((char *)v106 + 32 * (unsigned int)v107);
        }
        else
        {
          v78 = v106;
          sub_2237220(&v106, v108, v40, 32);
          a5 = v78;
          v39 = (__m128i *)((char *)v106 + (char *)&v93 - (_BYTE *)v78);
          v41 = (__m128i *)((char *)v106 + 32 * (unsigned int)v107);
        }
      }
      *v41 = _mm_loadu_si128(v39);
      v42 = _mm_loadu_si128(v39 + 1);
      LODWORD(v107) = v107 + 1;
      v41[1] = v42;
      v43 = v90;
      *(_DWORD *)(v44 + 12632) = v45;
    }
    while ( v43 - 1 != v37 );
    m128i_i64 = v83;
LABEL_54:
    if ( v87 )
    {
      v51 = *a1;
      v52 = *(_DWORD *)(*a1 + 12632LL);
      *(_DWORD *)(*a1 + 12632LL) = 0;
      sub_1DB8420((__m128i *)&v104[8], a1);
      if ( sub_1DD6360((unsigned int *)a1, &v98, &v93, 0, v53, v54, *(double *)a7.m128_u64, si128)
        || (sub_1DB7E30(
              (__int64)&v84,
              a1,
              v88,
              v89,
              v57,
              v58,
              v93.m128i_i32[0],
              v93.m128i_i64[1],
              v94.m128i_i32[0],
              v94.m128i_i64[1]),
            v59 = _mm_loadu_si128(&v85),
            v93 = _mm_loadu_si128(&v84),
            v94 = v59,
            (v84.m128i_i32[0] & 0x7FFFFFFF) == 0) )
      {
        sub_1DB8040((__int64)a1, a1 + 4, v55, v56, v57, v58, *(__int128 *)&v104[8], v105);
        *(_DWORD *)(v51 + 12632) = v52;
        goto LABEL_10;
      }
      sub_17429A0((__int64)&v106, &v93);
      sub_1DB8040((__int64)a1, a1 + 4, v64, v65, v66, v67, *(__int128 *)&v104[8], v105);
      *(_DWORD *)(v51 + 12632) = v52;
    }
LABEL_51:
    if ( ptr != v103 )
      free(ptr);
LABEL_17:
    ++m128i_i64;
    v69 += 24;
  }
  while ( (__int64 *)v71 != m128i_i64 );
  v8 = a4;
LABEL_19:
  v26 = sub_1CDD580(
          *a1,
          v73,
          v8->m128i_i32[0],
          (__int64)&v106,
          a7,
          si128,
          (__int64)a5,
          a6,
          (__int64)&v106,
          v69,
          a3,
          v71,
          (int)v72,
          v73);
  if ( (v26 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v28 = 8 * *(_DWORD *)(v26 + 20);
    if ( *(_BYTE *)(*(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 22 )
    {
      sub_1EA6140(a2, v26, (unsigned int)(v28 + 32), 8);
      v61 = _mm_loadu_si128(v8);
      v62 = 0;
      v60->m128i_i32[0] = 0;
      v63 = v107;
      v60->m128i_i64[1] = 0;
      v60[1] = v61;
      if ( v63 )
      {
        while ( 1 )
        {
          v60[2].m128i_i64[v62] = *((_QWORD *)v106 + 4 * v62 + 3);
          if ( v62 == v63 - 1 )
            break;
          ++v62;
        }
      }
    }
    else
    {
      sub_1EA6140(a2, v26, (unsigned int)(v28 + 16), 8);
      v30 = 0;
      v29[1] = v8->m128i_i32[1];
      *v29 = v8->m128i_i32[0];
      v29[2] = v8->m128i_i32[2];
      v29[3] = v8->m128i_i32[3];
      v31 = (unsigned int)(v107 - 1);
      if ( (_DWORD)v107 )
      {
        while ( 1 )
        {
          *(_QWORD *)&v29[2 * v30 + 4] = *((_QWORD *)v106 + 4 * v30 + 3);
          if ( v31 == v30 )
            break;
          ++v30;
        }
      }
    }
  }
LABEL_13:
  if ( v106 != v68 + 2 )
    free(v106);
  return v26;
}
