__int64 __fastcall sub_1DE1C70(
        _QWORD *a1,
        __int64 a2,
        const __m128i *a3,
        __m128 a4,
        __m128 a5,
        __int64 a6,
        const __m128i *a7,
        __int64 a8,
        char a9)
{
  __int64 v10; // rsi
  __int64 v11; // r8
  __m128i v12; // xmm3
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rbp
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r12
  int v24; // r14d
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i v27; // xmm7
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  __m128i *v31; // r13
  unsigned __int64 v32; // rdx
  __m128i *v33; // rax
  int v34; // r12d
  __m128i si128; // xmm5
  __int64 v36; // rax
  __m128i *v37; // rcx
  unsigned __int64 v38; // rdx
  __m128 *v39; // rax
  int v40; // eax
  __int64 v41; // r14
  int v42; // r13d
  __int32 v43; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rsi
  __int64 *v47; // rax
  __int64 v48; // rsi
  __int64 v49; // r12
  int v50; // r14d
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  const __m128i *v62; // [rsp+0h] [rbp-1B8h]
  unsigned __int64 v65; // [rsp+48h] [rbp-170h]
  __int64 *v66; // [rsp+48h] [rbp-170h]
  unsigned __int64 v67; // [rsp+48h] [rbp-170h]
  unsigned __int64 v68; // [rsp+50h] [rbp-168h]
  unsigned int v69; // [rsp+5Ch] [rbp-15Ch]
  int v70; // [rsp+60h] [rbp-158h]
  unsigned int v71; // [rsp+64h] [rbp-154h]
  __m128i v72; // [rsp+70h] [rbp-148h] BYREF
  __m128i v73; // [rsp+80h] [rbp-138h] BYREF
  char v74; // [rsp+92h] [rbp-126h] BYREF
  char v75; // [rsp+93h] [rbp-125h] BYREF
  unsigned int v76; // [rsp+94h] [rbp-124h] BYREF
  int v77; // [rsp+98h] [rbp-120h] BYREF
  int v78; // [rsp+9Ch] [rbp-11Ch] BYREF
  __m128i v79; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v80; // [rsp+B0h] [rbp-108h]
  __m128i v81; // [rsp+C0h] [rbp-F8h] BYREF
  __m128i v82; // [rsp+D0h] [rbp-E8h]
  __m128i v83; // [rsp+E0h] [rbp-D8h] BYREF
  __m128i v84; // [rsp+F0h] [rbp-C8h]
  __m128i v85; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v86; // [rsp+110h] [rbp-A8h]
  __int64 v87; // [rsp+118h] [rbp-A0h]
  void *ptr; // [rsp+120h] [rbp-98h] BYREF
  __int64 v89; // [rsp+128h] [rbp-90h]
  _BYTE v90[32]; // [rsp+130h] [rbp-88h] BYREF
  _BYTE v91[24]; // [rsp+150h] [rbp-68h] BYREF
  unsigned __int64 v92; // [rsp+168h] [rbp-50h] BYREF

  v62 = a3;
  if ( a7 == a3 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v81.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v81.m128i_i64[1] = 0;
      v10 = *(_QWORD *)a2;
      v11 = *(unsigned int *)(a2 + 40);
      v82.m128i_i64[1] = 0;
      sub_1D3AAD0(&v72, v10, v62, 0, v11, 0, *(double *)a4.m128_u64, a5);
      v12 = _mm_loadu_si128(&v73);
      v83 = _mm_loadu_si128(&v72);
      v84 = v12;
      if ( (v72.m128i_i32[0] & 0x7FFFFFFF) == 9 )
      {
        if ( (unsigned __int8)sub_1DE1C70(
                                (_DWORD)a1,
                                (_DWORD)a1,
                                v83.m128i_i32[2],
                                (_DWORD)a1,
                                v83.m128i_i32[2] + 24 * v83.m128i_i32[1],
                                a8,
                                a9) )
          return 1;
        goto LABEL_13;
      }
      if ( sub_F1D570((__int64)&v83) )
        break;
      if ( sub_1DD6360((unsigned int *)a1, &v83, &v81, a9, v13, v14, *(double *)a4.m128_u64, a5) )
        return 1;
      v29 = *(unsigned int *)(a8 + 8);
      v30 = *(_QWORD *)a8;
      v31 = &v81;
      v32 = v29 + 1;
      v33 = (__m128i *)(*(_QWORD *)a8 + 32 * v29);
      if ( v32 > *(unsigned int *)(a8 + 12) )
      {
        v57 = a8 + 16;
        if ( v30 > (unsigned __int64)&v81 || v33 <= &v81 )
        {
          sub_2237220(a8, v57, v32, 32);
          v31 = &v81;
          v33 = (__m128i *)(*(_QWORD *)a8 + 32LL * *(unsigned int *)(a8 + 8));
        }
        else
        {
          sub_2237220(a8, v57, v32, 32);
          v31 = (__m128i *)((char *)&v81 + *(_QWORD *)a8 - v30);
          v33 = (__m128i *)(*(_QWORD *)a8 + 32LL * *(unsigned int *)(a8 + 8));
        }
      }
      v62 = (const __m128i *)((char *)v62 + 24);
      *v33 = _mm_loadu_si128(v31);
      v33[1] = _mm_loadu_si128(v31 + 1);
      ++*(_DWORD *)(a8 + 8);
      if ( a7 == v62 )
        return 0;
    }
    v76 = 0;
    v77 = 0;
    sub_1E4CF80(
      (unsigned int)&v85,
      *a1,
      (unsigned int)&v76,
      (unsigned int)&v77,
      v13,
      v14,
      v83.m128i_i64[0],
      v83.m128i_i64[1],
      v84.m128i_i32[0],
      v84.m128i_i64[1]);
    ptr = v90;
    v89 = 0x200000000LL;
    *(double *)a4.m128_u64 = sub_1E4C910(
                               *a1,
                               (unsigned int)&ptr,
                               v15,
                               v16,
                               v17,
                               v18,
                               v85.m128i_i64[0],
                               v85.m128i_i64[1],
                               v86,
                               v87);
    v19 = (unsigned int)v89;
    v74 = 1;
    v75 = 0;
    v78 = v77;
    v20 = sub_F1E510((__int64)&v85, (__int64)&ptr, *(double *)a4.m128_u64);
    if ( sub_1DDBB60(a1, v76, v20, (__int64)ptr, v19, (__int64)&v74, a4, a5, (__int64)&v75, (__int64)&v78) )
      goto LABEL_9;
    if ( v74 )
    {
      if ( v78 == 1 )
      {
LABEL_44:
        if ( v75 )
        {
          v49 = *a1;
          v50 = *(_DWORD *)(*a1 + 12632LL);
          *(_DWORD *)(*a1 + 12632LL) = 0;
          sub_1DB8420((__m128i *)&v91[8], a1);
          if ( sub_1DD6360((unsigned int *)a1, &v85, &v81, a9, v51, v52, *(double *)a4.m128_u64, a5)
            || (sub_1DB7E30(
                  (__int64)&v72,
                  a1,
                  v76,
                  v77,
                  v55,
                  v56,
                  v81.m128i_i32[0],
                  v81.m128i_i64[1],
                  v82.m128i_i32[0],
                  v82.m128i_i64[1]),
                v81 = _mm_loadu_si128(&v72),
                v82 = _mm_loadu_si128(&v73),
                (v72.m128i_i32[0] & 0x7FFFFFFF) == 0) )
          {
            sub_1DB8040((__int64)a1, a1 + 4, v53, v54, v55, v56, *(__int128 *)&v91[8], v92);
            *(_DWORD *)(v49 + 12632) = v50;
            goto LABEL_9;
          }
          sub_17429A0(a8, &v81);
          sub_1DB8040((__int64)a1, a1 + 4, v58, v59, v60, v61, *(__int128 *)&v91[8], v92);
          *(_DWORD *)(v49 + 12632) = v50;
        }
        goto LABEL_41;
      }
      v34 = 0;
      while ( 1 )
      {
        v41 = *a1;
        ++v34;
        v42 = *(_DWORD *)(*a1 + 12632LL);
        *(_DWORD *)(*a1 + 12632LL) = v34;
        if ( sub_1DD6360((unsigned int *)a1, &v85, &v81, a9, v21, v22, *(double *)a4.m128_u64, a5) )
        {
LABEL_39:
          *(_DWORD *)(v41 + 12632) = v42;
          goto LABEL_9;
        }
        if ( (unsigned __int8)sub_F1D5E0((__int64)&v81) )
          break;
LABEL_24:
        v36 = *(unsigned int *)(a8 + 8);
        v21 = *(_QWORD *)a8;
        v37 = &v81;
        v38 = v36 + 1;
        v39 = (__m128 *)(*(_QWORD *)a8 + 32 * v36);
        if ( v38 > *(unsigned int *)(a8 + 12) )
        {
          v48 = a8 + 16;
          if ( v21 > (unsigned __int64)&v81 || v39 <= (__m128 *)&v81 )
          {
            sub_2237220(a8, v48, v38, 32);
            v37 = &v81;
            v39 = (__m128 *)(*(_QWORD *)a8 + 32LL * *(unsigned int *)(a8 + 8));
          }
          else
          {
            v67 = *(_QWORD *)a8;
            sub_2237220(a8, v48, v38, 32);
            v21 = v67;
            v37 = (__m128i *)((char *)&v81 + *(_QWORD *)a8 - v67);
            v39 = (__m128 *)(*(_QWORD *)a8 + 32LL * *(unsigned int *)(a8 + 8));
          }
        }
        a4 = (__m128)_mm_loadu_si128(v37);
        *v39 = a4;
        a5 = (__m128)_mm_loadu_si128(v37 + 1);
        v39[1] = a5;
        v40 = v78;
        ++*(_DWORD *)(a8 + 8);
        *(_DWORD *)(v41 + 12632) = v42;
        if ( v40 - 1 == v34 )
          goto LABEL_44;
      }
      v43 = v81.m128i_i32[0] & 0x7FFFFFFF;
      if ( (v81.m128i_i32[0] & 0x7FFFFFFF) == 6 )
      {
        v71 = v76;
        v70 = v77;
        v65 = *(_QWORD *)((v82.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 8);
        v69 = *(_DWORD *)((v82.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
        v68 = *(_QWORD *)(v82.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
        sub_F22A90(v91, v81.m128i_i64[1]);
        v45 = *(_QWORD *)v91;
        v46 = *(_QWORD **)(*a1 + 248LL);
        *(_DWORD *)&v91[4] = v70;
        *(_DWORD *)v91 = 7;
        *(_QWORD *)&v91[8] = v45;
        sub_F1ECA0(&v92, v46, v68, v65, v69, v71);
      }
      else
      {
        if ( v43 == 8 )
        {
          v44 = sub_1E53EF0(*a1, v82.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
          if ( v44 != 1 )
          {
            *(_QWORD *)v91 = *(_QWORD *)v91 & 0xFFFFFFFE00000000LL | 8;
            *(_QWORD *)&v91[8] = v44 & 0xFFFFFFFFFFFFFFFELL;
            v92 = v44 & 0xFFFFFFFFFFFFFFFCLL | 1;
            goto LABEL_23;
          }
LABEL_22:
          *(_QWORD *)v91 &= 0xFFFFFFFE00000000LL;
          *(_QWORD *)&v91[8] = 0;
          v92 = 0;
          goto LABEL_23;
        }
        if ( v43 != 1 )
          goto LABEL_22;
        v47 = (__int64 *)sub_1E509C0(*a1, v82.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
        if ( !v47 )
          goto LABEL_22;
        v66 = v47;
        sub_F1D250((__int64)&v79, *v47, 0, 0);
        *(__m128i *)v91 = _mm_load_si128(&v79);
        *(_QWORD *)&v91[16] = v80;
        v92 = (unsigned __int64)v66 & 0xFFFFFFFFFFFFFFFCLL | 2;
      }
LABEL_23:
      si128 = _mm_load_si128((const __m128i *)&v91[16]);
      v81 = _mm_load_si128((const __m128i *)v91);
      v82 = si128;
      if ( (*(_DWORD *)v91 & 0x7FFFFFFF) == 0 )
        goto LABEL_39;
      goto LABEL_24;
    }
    v23 = *a1;
    *(_QWORD *)v91 &= 0xFFFFFFFE00000000LL;
    *(_QWORD *)&v91[8] = 0;
    v92 = 0;
    v24 = *(_DWORD *)(v23 + 12632);
    *(_DWORD *)(v23 + 12632) = 0;
    if ( sub_1DD6360((unsigned int *)a1, &v85, (__m128i *)v91, a9, v21, v22, *(double *)a4.m128_u64, a5) )
      break;
    sub_1DB7E30((__int64)&v72, a1, v76, v78, v25, v26, *(int *)v91, *(__int64 *)&v91[8], *(int *)&v91[16], v92);
    v27 = _mm_loadu_si128(&v73);
    v81 = _mm_loadu_si128(&v72);
    v82 = v27;
    if ( (v72.m128i_i32[0] & 0x7FFFFFFF) == 0 )
      break;
    sub_17429A0(a8, &v81);
    *(_DWORD *)(v23 + 12632) = v24;
LABEL_41:
    if ( ptr == v90 )
    {
LABEL_13:
      v62 = (const __m128i *)((char *)v62 + 24);
      if ( a7 == v62 )
        return 0;
    }
    else
    {
      free(ptr);
      v62 = (const __m128i *)((char *)v62 + 24);
      if ( a7 == v62 )
        return 0;
    }
  }
  *(_DWORD *)(v23 + 12632) = v24;
LABEL_9:
  if ( ptr != v90 )
    free(ptr);
  return 1;
}
