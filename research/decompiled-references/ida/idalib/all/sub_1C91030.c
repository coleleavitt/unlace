__int64 __fastcall sub_1C91030(
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
  _BYTE *v34; // r15
  __m128i *v35; // r8
  unsigned __int64 v36; // rdx
  __m128i *v37; // rax
  __m128i v38; // xmm4
  _BYTE *v39; // r15
  __m128i *v40; // r8
  unsigned __int64 v41; // rdx
  __m128i *v42; // rax
  __m128i v43; // xmm6
  _BYTE *v44; // rdi
  __m128i *v45; // rdx
  __m128i v46; // xmm7
  __int64 v47; // rax
  int v48; // ecx
  __int64 v50; // [rsp+18h] [rbp-270h]
  int v52; // [rsp+30h] [rbp-258h]
  int v53; // [rsp+38h] [rbp-250h]
  __m128i v55; // [rsp+50h] [rbp-238h] BYREF
  __m128i v56; // [rsp+60h] [rbp-228h] BYREF
  unsigned int v57; // [rsp+78h] [rbp-210h] BYREF
  int v58; // [rsp+7Ch] [rbp-20Ch] BYREF
  __m128i v59; // [rsp+80h] [rbp-208h] BYREF
  __m128i v60; // [rsp+90h] [rbp-1F8h]
  __m128 v61; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-1D8h]
  __int64 v63; // [rsp+B8h] [rbp-1D0h]
  __m128i v64; // [rsp+C0h] [rbp-1C8h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-1B8h]
  __int64 v66; // [rsp+D8h] [rbp-1B0h]
  __m128i v67; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-198h]
  __int64 v69; // [rsp+F8h] [rbp-190h]
  void *ptr[2]; // [rsp+100h] [rbp-188h] BYREF
  _BYTE v71[32]; // [rsp+110h] [rbp-178h] BYREF
  void *v72; // [rsp+130h] [rbp-158h] BYREF
  __int64 v73; // [rsp+138h] [rbp-150h]
  _QWORD v74[41]; // [rsp+140h] [rbp-148h] BYREF

  v7 = a4;
  v72 = v74;
  v73 = 0x800000000LL;
  v74[32] = a4->m128i_i64[1];
  v9 = *(_DWORD *)(a3 + 20);
  if ( v9 )
  {
    m128i_i64 = a4[1].m128i_i64;
    v11 = 48;
    v50 = (__int64)&a4[1].m128i_i64[(unsigned int)(v9 - 1) + 1];
    while ( 1 )
    {
      v12 = *m128i_i64;
      v59.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v59.m128i_i64[1] = 0;
      v60.m128i_i64[1] = 0;
      v63 = v12;
      v13 = (__m128)_mm_loadu_si128((const __m128i *)(v11 + a3));
      v14 = *(_QWORD *)(v11 + a3 + 16);
      v15 = *(_DWORD *)(v11 + a3) & 0x7FFFFFFF;
      v61 = v13;
      v62 = v14;
      if ( v15 == 9 )
        break;
      if ( sub_F1D570((__int64)&v61) )
      {
        v57 = 0;
        v58 = 0;
        sub_1E4CF80(
          (unsigned int)&v64,
          *a1,
          (unsigned int)&v57,
          (unsigned int)&v58,
          v16,
          v17,
          v61.m128_i64[0],
          v61.m128_i64[1],
          v62,
          v63);
        ptr[0] = v71;
        ptr[1] = (void *)0x200000000LL;
        *(double *)v13.m128_u64 = sub_1E4C910(
                                    *a1,
                                    (unsigned int)ptr,
                                    v18,
                                    v19,
                                    v20,
                                    v21,
                                    v64.m128i_i64[0],
                                    v64.m128i_i64[1],
                                    v65,
                                    v66);
        v22 = *a1;
        v53 = v58;
        v67.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
        v23 = *(_DWORD *)(v22 + 12632);
        *(_DWORD *)(v22 + 12632) = 0;
        v67.m128i_i64[1] = 0;
        v69 = 0;
        v52 = v23;
        if ( (unsigned __int8)sub_1C8FCF0(a1, &v64, &v67, 0, v13, a7)
          || (sub_1C735A0((__int64)&v55, a1, v57, v53, v24, v25, v67.m128i_i32[0], v67.m128i_i64[1], v68, v69),
              a7 = (__m128)_mm_loadu_si128(&v55),
              v26 = _mm_loadu_si128(&v56),
              v59 = (__m128i)a7,
              v60 = v26,
              (v55.m128i_i32[0] & 0x7FFFFFFF) == 0) )
        {
          v27 = ptr[0];
          *(_DWORD *)(v22 + 12632) = v52;
          if ( v27 != v71 )
            free(v27);
LABEL_9:
          v28 = 0;
          goto LABEL_10;
        }
        v39 = v72;
        v40 = &v59;
        v41 = (unsigned int)v73 + 1LL;
        v42 = (__m128i *)((char *)v72 + 32 * (unsigned int)v73);
        if ( v41 > HIDWORD(v73) )
        {
          if ( v72 > &v59 || v42 <= &v59 )
          {
            sub_2237220(&v72, v74, v41, 32);
            v40 = &v59;
            v42 = (__m128i *)((char *)v72 + 32 * (unsigned int)v73);
          }
          else
          {
            sub_2237220(&v72, v74, v41, 32);
            v40 = (__m128i *)((char *)v72 + (char *)&v59 - v39);
            v42 = (__m128i *)((char *)v72 + 32 * (unsigned int)v73);
          }
        }
        *v42 = _mm_loadu_si128(v40);
        v43 = _mm_loadu_si128(v40 + 1);
        v44 = ptr[0];
        LODWORD(v73) = v73 + 1;
        v42[1] = v43;
        *(_DWORD *)(v22 + 12632) = v52;
        if ( v44 == v71 )
        {
LABEL_14:
          ++m128i_i64;
          v11 += 24;
          if ( (__int64 *)v50 == m128i_i64 )
            goto LABEL_15;
        }
        else
        {
          free(v44);
          ++m128i_i64;
          v11 += 24;
          if ( (__int64 *)v50 == m128i_i64 )
            goto LABEL_15;
        }
      }
      else
      {
        if ( (unsigned __int8)sub_1C8FCF0(a1, (const __m128i *)&v61, &v59, 0, v13, a7) )
          goto LABEL_9;
        v34 = v72;
        v35 = &v59;
        v36 = (unsigned int)v73 + 1LL;
        v37 = (__m128i *)((char *)v72 + 32 * (unsigned int)v73);
        if ( v36 > HIDWORD(v73) )
        {
          if ( v72 > &v59 || v37 <= &v59 )
          {
            sub_2237220(&v72, v74, v36, 32);
            v35 = &v59;
            v37 = (__m128i *)((char *)v72 + 32 * (unsigned int)v73);
          }
          else
          {
            sub_2237220(&v72, v74, v36, 32);
            v35 = (__m128i *)((char *)v72 + (char *)&v59 - v34);
            v37 = (__m128i *)((char *)v72 + 32 * (unsigned int)v73);
          }
        }
        ++m128i_i64;
        v11 += 24;
        *v37 = _mm_loadu_si128(v35);
        v38 = _mm_loadu_si128(v35 + 1);
        LODWORD(v73) = v73 + 1;
        v37[1] = v38;
        if ( (__int64 *)v50 == m128i_i64 )
        {
LABEL_15:
          v7 = a4;
          goto LABEL_16;
        }
      }
    }
    if ( (unsigned __int8)sub_1C90230(
                            a1,
                            a1,
                            v61.m128_i64[1],
                            (__int64)a1,
                            v61.m128_u64[1] + 24LL * v61.m128_u32[1],
                            (__int64 *)&v72,
                            0) )
      goto LABEL_9;
    goto LABEL_14;
  }
LABEL_16:
  v28 = sub_1CDD580(*a1, a5, v7->m128i_u32[0], &v72);
  if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v30 = 8 * *(_DWORD *)(v28 + 20);
    if ( *(_BYTE *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 22 )
    {
      sub_1EA6140(a2, v28, (unsigned int)(v30 + 32), 8);
      v46 = _mm_loadu_si128(v7);
      v47 = 0;
      v45->m128i_i32[0] = 0;
      v48 = v73;
      v45->m128i_i64[1] = 0;
      v45[1] = v46;
      if ( v48 )
      {
        while ( 1 )
        {
          v45[2].m128i_i64[v47] = *((_QWORD *)v72 + 4 * v47 + 3);
          if ( v47 == v48 - 1 )
            break;
          ++v47;
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
      v33 = (unsigned int)(v73 - 1);
      if ( (_DWORD)v73 )
      {
        while ( 1 )
        {
          *(_QWORD *)&v31[2 * v32 + 4] = *((_QWORD *)v72 + 4 * v32 + 3);
          if ( v33 == v32 )
            break;
          ++v32;
        }
      }
    }
  }
LABEL_10:
  if ( v72 != v74 )
    free(v72);
  return v28;
}
