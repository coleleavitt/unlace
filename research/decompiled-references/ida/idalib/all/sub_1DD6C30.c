__int64 __fastcall sub_1DD6C30(_QWORD *a1, const __m128i *a2, const __m128i *a3, __int64 a4, __m128 a5, __m128 a6)
{
  const __m128i *v6; // r14
  __int32 v8; // eax
  __m128i v9; // xmm2
  __m128i v10; // xmm3
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17; // r12d
  int v18; // eax
  unsigned __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r13
  int v22; // r15d
  __int64 v23; // r8
  __int64 v24; // r9
  __m128i v25; // xmm7
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  __m128i *v29; // r13
  unsigned __int64 v30; // rdx
  __m128i *v31; // rax
  int v32; // r13d
  __m128i si128; // xmm5
  __int64 v34; // rax
  __m128i *v35; // rcx
  unsigned __int64 v36; // rdx
  __m128 *v37; // rax
  int v38; // eax
  __int64 v39; // r15
  int v40; // r14d
  __int32 v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rsi
  __int64 *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // r13
  int v48; // eax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v61; // [rsp+30h] [rbp-178h]
  __int64 *v62; // [rsp+30h] [rbp-178h]
  unsigned __int64 v63; // [rsp+30h] [rbp-178h]
  int v64; // [rsp+30h] [rbp-178h]
  unsigned __int64 v65; // [rsp+38h] [rbp-170h]
  unsigned int v66; // [rsp+44h] [rbp-164h]
  int v67; // [rsp+48h] [rbp-160h]
  unsigned int v68; // [rsp+4Ch] [rbp-15Ch]
  const __m128i *v69; // [rsp+58h] [rbp-150h]
  __m128i v70; // [rsp+60h] [rbp-148h] BYREF
  __m128i v71; // [rsp+70h] [rbp-138h] BYREF
  char v72; // [rsp+82h] [rbp-126h] BYREF
  char v73; // [rsp+83h] [rbp-125h] BYREF
  unsigned int v74; // [rsp+84h] [rbp-124h] BYREF
  int v75; // [rsp+88h] [rbp-120h] BYREF
  int v76; // [rsp+8Ch] [rbp-11Ch] BYREF
  __m128i v77; // [rsp+90h] [rbp-118h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-108h]
  __m128i v79; // [rsp+B0h] [rbp-F8h] BYREF
  __m128i v80; // [rsp+C0h] [rbp-E8h]
  __m128i v81; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i v82; // [rsp+E0h] [rbp-C8h]
  __m128i v83; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v84; // [rsp+100h] [rbp-A8h]
  __int64 v85; // [rsp+108h] [rbp-A0h]
  void *ptr; // [rsp+110h] [rbp-98h] BYREF
  __int64 v87; // [rsp+118h] [rbp-90h]
  _BYTE v88[32]; // [rsp+120h] [rbp-88h] BYREF
  _BYTE v89[24]; // [rsp+140h] [rbp-68h] BYREF
  unsigned __int64 v90; // [rsp+158h] [rbp-50h] BYREF

  if ( a3 == a2 )
    return 0;
  v6 = a2;
  while ( 1 )
  {
LABEL_3:
    v79.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    v8 = v6->m128i_i32[0];
    v9 = _mm_loadu_si128(v6);
    v10 = _mm_loadu_si128(v6 + 1);
    v79.m128i_i64[1] = 0;
    v80.m128i_i64[1] = 0;
    v81 = v9;
    v82 = v10;
    if ( (v8 & 0x7FFFFFFF) == 9 )
    {
      if ( (unsigned __int8)sub_1DE1C70(
                              (_DWORD)a1,
                              (_DWORD)a1,
                              v81.m128i_i32[2],
                              (_DWORD)a1,
                              v81.m128i_i32[2] + 24 * v81.m128i_i32[1],
                              a4,
                              0) )
        return 1;
      goto LABEL_14;
    }
    if ( sub_F1D570((__int64)&v81) )
      break;
    if ( sub_1DD6360((unsigned int *)a1, &v81, &v79, 0, v11, v12, *(double *)a5.m128_u64, a6) )
      return 1;
    v27 = *(unsigned int *)(a4 + 8);
    v28 = *(_QWORD *)a4;
    v29 = &v79;
    v30 = v27 + 1;
    v31 = (__m128i *)(*(_QWORD *)a4 + 32 * v27);
    if ( v30 > *(unsigned int *)(a4 + 12) )
    {
      v55 = a4 + 16;
      if ( v28 > (unsigned __int64)&v79 || v31 <= &v79 )
      {
        sub_2237220(a4, v55, v30, 32);
        v29 = &v79;
        v31 = (__m128i *)(*(_QWORD *)a4 + 32LL * *(unsigned int *)(a4 + 8));
      }
      else
      {
        sub_2237220(a4, v55, v30, 32);
        v29 = (__m128i *)((char *)&v79 + *(_QWORD *)a4 - v28);
        v31 = (__m128i *)(*(_QWORD *)a4 + 32LL * *(unsigned int *)(a4 + 8));
      }
    }
    v6 += 2;
    *v31 = _mm_loadu_si128(v29);
    v31[1] = _mm_loadu_si128(v29 + 1);
    ++*(_DWORD *)(a4 + 8);
    if ( a3 == v6 )
      return 0;
  }
  v74 = 0;
  v75 = 0;
  sub_1E4CF80(
    (unsigned int)&v83,
    *a1,
    (unsigned int)&v74,
    (unsigned int)&v75,
    v11,
    v12,
    v81.m128i_i64[0],
    v81.m128i_i64[1],
    v82.m128i_i32[0],
    v82.m128i_i64[1]);
  ptr = v88;
  v87 = 0x200000000LL;
  *(double *)a5.m128_u64 = sub_1E4C910(
                             *a1,
                             (unsigned int)&ptr,
                             v13,
                             v14,
                             v15,
                             v16,
                             v83.m128i_i64[0],
                             v83.m128i_i64[1],
                             v84,
                             v85);
  v17 = v87;
  v72 = 1;
  v73 = 0;
  v76 = v75;
  v18 = sub_F1E510((__int64)&v83, (__int64)&ptr, *(double *)a5.m128_u64);
  if ( (unsigned __int8)sub_1DDBB60(
                          (_DWORD)a1,
                          v74,
                          v18,
                          (_DWORD)ptr,
                          v17,
                          (unsigned int)&v72,
                          (__int64)&v73,
                          (__int64)&v76) )
    goto LABEL_10;
  if ( v72 )
  {
    if ( v76 == 1 )
      goto LABEL_46;
    v32 = 0;
    v69 = v6;
    while ( 1 )
    {
      v39 = *a1;
      ++v32;
      v40 = *(_DWORD *)(*a1 + 12632LL);
      *(_DWORD *)(*a1 + 12632LL) = v32;
      if ( sub_1DD6360((unsigned int *)a1, &v83, &v79, 0, v19, v20, *(double *)a5.m128_u64, a6) )
      {
LABEL_40:
        *(_DWORD *)(v39 + 12632) = v40;
        goto LABEL_10;
      }
      if ( !(unsigned __int8)sub_F1D5E0((__int64)&v79) )
        goto LABEL_25;
      v41 = v79.m128i_i32[0] & 0x7FFFFFFF;
      if ( (v79.m128i_i32[0] & 0x7FFFFFFF) == 6 )
      {
        v68 = v74;
        v67 = v75;
        v61 = *(_QWORD *)((v80.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 8);
        v66 = *(_DWORD *)((v80.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
        v65 = *(_QWORD *)(v80.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
        sub_F22A90(v89, v79.m128i_i64[1]);
        v43 = *(_QWORD *)v89;
        v44 = *(_QWORD **)(*a1 + 248LL);
        *(_DWORD *)&v89[4] = v67;
        *(_QWORD *)&v89[8] = v43;
        *(_DWORD *)v89 = 7;
        sub_F1ECA0(&v90, v44, v65, v61, v66, v68);
      }
      else if ( v41 == 8 )
      {
        v42 = sub_1E53EF0(*a1, v80.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
        if ( v42 == 1 )
          goto LABEL_23;
        *(_QWORD *)v89 = *(_QWORD *)v89 & 0xFFFFFFFE00000000LL | 8;
        *(_QWORD *)&v89[8] = v42 & 0xFFFFFFFFFFFFFFFELL;
        v90 = v42 & 0xFFFFFFFFFFFFFFFCLL | 1;
      }
      else
      {
        if ( v41 != 1 || (v45 = (__int64 *)sub_1E509C0(*a1, v80.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL)) == nullptr )
        {
LABEL_23:
          *(_QWORD *)v89 &= 0xFFFFFFFE00000000LL;
          *(_QWORD *)&v89[8] = 0;
          v90 = 0;
          goto LABEL_24;
        }
        v62 = v45;
        sub_F1D250((__int64)&v77, *v45, 0, 0);
        *(__m128i *)v89 = _mm_load_si128(&v77);
        *(_QWORD *)&v89[16] = v78;
        v90 = (unsigned __int64)v62 & 0xFFFFFFFFFFFFFFFCLL | 2;
      }
LABEL_24:
      si128 = _mm_load_si128((const __m128i *)&v89[16]);
      v79 = _mm_load_si128((const __m128i *)v89);
      v80 = si128;
      if ( (*(_DWORD *)v89 & 0x7FFFFFFF) == 0 )
        goto LABEL_40;
LABEL_25:
      v34 = *(unsigned int *)(a4 + 8);
      v19 = *(_QWORD *)a4;
      v35 = &v79;
      v36 = v34 + 1;
      v37 = (__m128 *)(*(_QWORD *)a4 + 32 * v34);
      if ( v36 > *(unsigned int *)(a4 + 12) )
      {
        v46 = a4 + 16;
        if ( v19 > (unsigned __int64)&v79 || v37 <= (__m128 *)&v79 )
        {
          sub_2237220(a4, v46, v36, 32);
          v35 = &v79;
          v37 = (__m128 *)(*(_QWORD *)a4 + 32LL * *(unsigned int *)(a4 + 8));
        }
        else
        {
          v63 = *(_QWORD *)a4;
          sub_2237220(a4, v46, v36, 32);
          v19 = v63;
          v35 = (__m128i *)((char *)&v79 + *(_QWORD *)a4 - v63);
          v37 = (__m128 *)(*(_QWORD *)a4 + 32LL * *(unsigned int *)(a4 + 8));
        }
      }
      a5 = (__m128)_mm_loadu_si128(v35);
      *v37 = a5;
      a6 = (__m128)_mm_loadu_si128(v35 + 1);
      v37[1] = a6;
      v38 = v76;
      ++*(_DWORD *)(a4 + 8);
      *(_DWORD *)(v39 + 12632) = v40;
      if ( v38 - 1 == v32 )
      {
        v6 = v69;
LABEL_46:
        if ( v73 )
        {
          v47 = *a1;
          v48 = *(_DWORD *)(*a1 + 12632LL);
          *(_DWORD *)(*a1 + 12632LL) = 0;
          v64 = v48;
          sub_1DB8420((__m128i *)&v89[8], a1);
          if ( sub_1DD6360((unsigned int *)a1, &v83, &v79, 0, v49, v50, *(double *)a5.m128_u64, a6)
            || (sub_1DB7E30(
                  (__int64)&v70,
                  a1,
                  v74,
                  v75,
                  v53,
                  v54,
                  v79.m128i_i32[0],
                  v79.m128i_i64[1],
                  v80.m128i_i32[0],
                  v80.m128i_i64[1]),
                v79 = _mm_loadu_si128(&v70),
                v80 = _mm_loadu_si128(&v71),
                (v70.m128i_i32[0] & 0x7FFFFFFF) == 0) )
          {
            sub_1DB8040((__int64)a1, a1 + 4, v51, v52, v53, v54, *(__int128 *)&v89[8], v90);
            *(_DWORD *)(v47 + 12632) = v64;
            goto LABEL_10;
          }
          sub_17429A0(a4, &v79);
          sub_1DB8040((__int64)a1, a1 + 4, v56, v57, v58, v59, *(__int128 *)&v89[8], v90);
          *(_DWORD *)(v47 + 12632) = v64;
        }
LABEL_42:
        if ( ptr != v88 )
        {
          free(ptr);
          v6 += 2;
          if ( a3 == v6 )
            return 0;
          goto LABEL_3;
        }
LABEL_14:
        v6 += 2;
        if ( a3 == v6 )
          return 0;
        goto LABEL_3;
      }
    }
  }
  v21 = *a1;
  *(_QWORD *)v89 &= 0xFFFFFFFE00000000LL;
  *(_QWORD *)&v89[8] = 0;
  v90 = 0;
  v22 = *(_DWORD *)(v21 + 12632);
  *(_DWORD *)(v21 + 12632) = 0;
  if ( !sub_1DD6360((unsigned int *)a1, &v83, (__m128i *)v89, 0, v19, v20, *(double *)a5.m128_u64, a6) )
  {
    sub_1DB7E30((__int64)&v70, a1, v74, v76, v23, v24, *(int *)v89, *(__int64 *)&v89[8], *(int *)&v89[16], v90);
    v25 = _mm_loadu_si128(&v71);
    v79 = _mm_loadu_si128(&v70);
    v80 = v25;
    if ( (v70.m128i_i32[0] & 0x7FFFFFFF) != 0 )
    {
      sub_17429A0(a4, &v79);
      *(_DWORD *)(v21 + 12632) = v22;
      goto LABEL_42;
    }
  }
  *(_DWORD *)(v21 + 12632) = v22;
LABEL_10:
  if ( ptr != v88 )
    free(ptr);
  return 1;
}
