__int64 __fastcall sub_1B98F30(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        double a6,
        __m128 a7)
{
  const __m128i *v7; // r13
  int v9; // eax
  __int64 *m128i_i64; // r12
  __int64 v11; // r13
  __int64 v12; // rcx
  __m128 v13; // xmm0
  __int64 v14; // rdx
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // r14
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  __m128i v26; // xmm2
  _BYTE *v27; // rdi
  __int64 v28; // rbx
  int v30; // edx
  _DWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  __m128i *v34; // r14
  _BYTE *v35; // r15
  unsigned __int64 v36; // rdx
  __m128i *v37; // rax
  __m128i v38; // xmm4
  _BYTE *v39; // rdi
  __m128i *v40; // rdx
  __m128i v41; // xmm5
  __int64 v42; // rax
  int v43; // ecx
  __int64 v45; // [rsp+10h] [rbp-268h]
  int v47; // [rsp+28h] [rbp-250h]
  int v48; // [rsp+2Ch] [rbp-24Ch]
  __m128i v50; // [rsp+40h] [rbp-238h] BYREF
  __m128i v51; // [rsp+50h] [rbp-228h] BYREF
  unsigned int v52; // [rsp+68h] [rbp-210h] BYREF
  int v53; // [rsp+6Ch] [rbp-20Ch] BYREF
  __m128i v54; // [rsp+70h] [rbp-208h] BYREF
  __m128i v55; // [rsp+80h] [rbp-1F8h]
  __m128 v56; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-1D8h]
  __int64 v58; // [rsp+A8h] [rbp-1D0h]
  __m128i v59; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-1B8h]
  __int64 v61; // [rsp+C8h] [rbp-1B0h]
  __m128i v62; // [rsp+D0h] [rbp-1A8h] BYREF
  __int64 v63; // [rsp+E0h] [rbp-198h]
  __int64 v64; // [rsp+E8h] [rbp-190h]
  void *ptr[2]; // [rsp+F0h] [rbp-188h] BYREF
  _BYTE v66[32]; // [rsp+100h] [rbp-178h] BYREF
  void *v67; // [rsp+120h] [rbp-158h] BYREF
  __int64 v68; // [rsp+128h] [rbp-150h]
  _QWORD v69[41]; // [rsp+130h] [rbp-148h] BYREF

  v7 = a4;
  v67 = v69;
  v68 = 0x800000000LL;
  v69[32] = a4->m128i_i64[1];
  v9 = *(_DWORD *)(a3 + 20);
  if ( v9 )
  {
    m128i_i64 = a4[1].m128i_i64;
    v11 = 48;
    v45 = (__int64)&a4[1].m128i_i64[(unsigned int)(v9 - 1) + 1];
    while ( 1 )
    {
      v12 = *m128i_i64;
      v54.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v54.m128i_i64[1] = 0;
      v55.m128i_i64[1] = 0;
      v58 = v12;
      v13 = (__m128)_mm_loadu_si128((const __m128i *)(v11 + a3));
      v14 = *(_QWORD *)(v11 + a3 + 16);
      v15 = *(_DWORD *)(v11 + a3) & 0x7FFFFFFF;
      v56 = v13;
      v57 = v14;
      if ( v15 == 9 )
        break;
      if ( sub_F1D570((__int64)&v56) )
      {
        v52 = 0;
        v53 = 0;
        sub_1E4CF80(
          (unsigned int)&v59,
          *a1,
          (unsigned int)&v52,
          (unsigned int)&v53,
          v16,
          v17,
          v56.m128_i64[0],
          v56.m128_i64[1],
          v57,
          v58);
        ptr[0] = v66;
        ptr[1] = (void *)0x200000000LL;
        *(double *)v13.m128_u64 = sub_1E4C910(
                                    *a1,
                                    (unsigned int)ptr,
                                    v18,
                                    v19,
                                    v20,
                                    v21,
                                    v59.m128i_i64[0],
                                    v59.m128i_i64[1],
                                    v60,
                                    v61);
        v22 = *a1;
        v48 = v53;
        v62.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
        v23 = *(_DWORD *)(v22 + 12632);
        *(_DWORD *)(v22 + 12632) = 0;
        v62.m128i_i64[1] = 0;
        v64 = 0;
        v47 = v23;
        if ( (unsigned __int8)sub_1B981A0(a1, &v59, &v62, 0, v13, a7)
          || (sub_1AE8500((__int64)&v50, a1, v52, v48, v24, v25, v62.m128i_i32[0], v62.m128i_i64[1], v63, v64),
              a7 = (__m128)_mm_loadu_si128(&v50),
              v26 = _mm_loadu_si128(&v51),
              v54 = (__m128i)a7,
              v55 = v26,
              (v50.m128i_i32[0] & 0x7FFFFFFF) == 0) )
        {
          v27 = ptr[0];
          *(_DWORD *)(v22 + 12632) = v47;
          if ( v27 != v66 )
            free(v27);
LABEL_9:
          v28 = 0;
          goto LABEL_10;
        }
        sub_17429A0((__int64)&v67, &v54);
        v39 = ptr[0];
        *(_DWORD *)(v22 + 12632) = v47;
        if ( v39 == v66 )
        {
LABEL_14:
          ++m128i_i64;
          v11 += 24;
          if ( (__int64 *)v45 == m128i_i64 )
            goto LABEL_15;
        }
        else
        {
          free(v39);
          ++m128i_i64;
          v11 += 24;
          if ( (__int64 *)v45 == m128i_i64 )
            goto LABEL_15;
        }
      }
      else
      {
        v34 = &v54;
        if ( (unsigned __int8)sub_1B981A0(a1, (const __m128i *)&v56, &v54, 0, v13, a7) )
          goto LABEL_9;
        v35 = v67;
        v36 = (unsigned int)v68 + 1LL;
        v37 = (__m128i *)((char *)v67 + 32 * (unsigned int)v68);
        if ( v36 > HIDWORD(v68) )
        {
          if ( v67 > &v54 || v37 <= &v54 )
          {
            sub_2237220(&v67, v69, v36, 32);
            v37 = (__m128i *)((char *)v67 + 32 * (unsigned int)v68);
          }
          else
          {
            sub_2237220(&v67, v69, v36, 32);
            v34 = (__m128i *)((char *)v67 + (char *)&v54 - v35);
            v37 = (__m128i *)((char *)v67 + 32 * (unsigned int)v68);
          }
        }
        ++m128i_i64;
        v11 += 24;
        *v37 = _mm_loadu_si128(v34);
        v38 = _mm_loadu_si128(v34 + 1);
        LODWORD(v68) = v68 + 1;
        v37[1] = v38;
        if ( (__int64 *)v45 == m128i_i64 )
        {
LABEL_15:
          v7 = a4;
          goto LABEL_16;
        }
      }
    }
    if ( (unsigned __int8)sub_1B986E0(
                            a1,
                            a1,
                            v56.m128_i64[1],
                            (__int64)a1,
                            v56.m128_u64[1] + 24LL * v56.m128_u32[1],
                            (__int64)&v67,
                            0) )
      goto LABEL_9;
    goto LABEL_14;
  }
LABEL_16:
  v28 = sub_1CDD580(*a1, a5, v7->m128i_u32[0], &v67);
  if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v30 = 8 * *(_DWORD *)(v28 + 20);
    if ( *(_BYTE *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 22 )
    {
      sub_1EA6140(a2, v28, (unsigned int)(v30 + 32), 8);
      v41 = _mm_loadu_si128(v7);
      v42 = 0;
      v40->m128i_i32[0] = 0;
      v43 = v68;
      v40->m128i_i64[1] = 0;
      v40[1] = v41;
      if ( v43 )
      {
        while ( 1 )
        {
          v40[2].m128i_i64[v42] = *((_QWORD *)v67 + 4 * v42 + 3);
          if ( v42 == v43 - 1 )
            break;
          ++v42;
        }
      }
    }
    else
    {
      sub_1EA6140(a2, v28, (unsigned int)(v30 + 16), 8);
      v32 = 0;
      v31[1] = v7->m128i_i32[1];
      *v31 = v7->m128i_i32[0];
      v31[2] = v7->m128i_i32[2];
      v31[3] = v7->m128i_i32[3];
      v33 = (unsigned int)(v68 - 1);
      if ( (_DWORD)v68 )
      {
        while ( 1 )
        {
          *(_QWORD *)&v31[2 * v32 + 4] = *((_QWORD *)v67 + 4 * v32 + 3);
          if ( v33 == v32 )
            break;
          ++v32;
        }
      }
    }
  }
LABEL_10:
  if ( v67 != v69 )
    free(v67);
  return v28;
}
