__int64 __fastcall sub_1770560(__int64 *a1, __int64 a2, __int64 a3, const __m128i *a4, __int64 a5)
{
  const __m128i *v5; // r13
  int v7; // eax
  __int64 *m128i_i64; // r12
  __int64 v9; // r13
  __int64 v10; // rcx
  __m128 v11; // xmm0
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __m128i v24; // xmm2
  _BYTE *v25; // rdi
  __int64 v26; // rbx
  int v28; // edx
  _DWORD *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rsi
  _BYTE *v32; // r15
  __m128i *v33; // r8
  unsigned __int64 v34; // rdx
  __m128i *v35; // rax
  __m128i v36; // xmm4
  _BYTE *v37; // r15
  __m128i *v38; // r8
  unsigned __int64 v39; // rdx
  __m128i *v40; // rax
  __m128i v41; // xmm6
  _BYTE *v42; // rdi
  __m128i *v43; // rdx
  __m128i v44; // xmm7
  __int64 v45; // rax
  int v46; // ecx
  __int64 v48; // [rsp+18h] [rbp-270h]
  int v50; // [rsp+30h] [rbp-258h]
  int v51; // [rsp+38h] [rbp-250h]
  __m128i v53; // [rsp+50h] [rbp-238h] BYREF
  __m128i v54; // [rsp+60h] [rbp-228h] BYREF
  unsigned int v55; // [rsp+78h] [rbp-210h] BYREF
  int v56; // [rsp+7Ch] [rbp-20Ch] BYREF
  __m128i v57; // [rsp+80h] [rbp-208h] BYREF
  __m128i v58; // [rsp+90h] [rbp-1F8h]
  __m128 v59; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-1D8h]
  __int64 v61; // [rsp+B8h] [rbp-1D0h]
  __m128i v62; // [rsp+C0h] [rbp-1C8h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-1B8h]
  __int64 v64; // [rsp+D8h] [rbp-1B0h]
  __m128i v65; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v66; // [rsp+F0h] [rbp-198h]
  __int64 v67; // [rsp+F8h] [rbp-190h]
  void *ptr[2]; // [rsp+100h] [rbp-188h] BYREF
  _BYTE v69[32]; // [rsp+110h] [rbp-178h] BYREF
  void *v70; // [rsp+130h] [rbp-158h] BYREF
  __int64 v71; // [rsp+138h] [rbp-150h]
  _QWORD v72[41]; // [rsp+140h] [rbp-148h] BYREF

  v5 = a4;
  v70 = v72;
  v71 = 0x800000000LL;
  v72[32] = a4->m128i_i64[1];
  v7 = *(_DWORD *)(a3 + 20);
  if ( v7 )
  {
    m128i_i64 = a4[1].m128i_i64;
    v9 = 48;
    v48 = (__int64)&a4[1].m128i_i64[(unsigned int)(v7 - 1) + 1];
    while ( 1 )
    {
      v10 = *m128i_i64;
      v57.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v57.m128i_i64[1] = 0;
      v58.m128i_i64[1] = 0;
      v61 = v10;
      v11 = (__m128)_mm_loadu_si128((const __m128i *)(v9 + a3));
      v12 = *(_QWORD *)(v9 + a3 + 16);
      v13 = *(_DWORD *)(v9 + a3) & 0x7FFFFFFF;
      v59 = v11;
      v60 = v12;
      if ( v13 == 9 )
        break;
      if ( sub_F1D570((__int64)&v59) )
      {
        v55 = 0;
        v56 = 0;
        sub_1E4CF80(
          (unsigned int)&v62,
          *a1,
          (unsigned int)&v55,
          (unsigned int)&v56,
          v14,
          v15,
          v59.m128_i64[0],
          v59.m128_i64[1],
          v60,
          v61);
        ptr[0] = v69;
        ptr[1] = (void *)0x200000000LL;
        *(double *)v11.m128_u64 = sub_1E4C910(
                                    *a1,
                                    (unsigned int)ptr,
                                    v16,
                                    v17,
                                    v18,
                                    v19,
                                    v62.m128i_i64[0],
                                    v62.m128i_i64[1],
                                    v63,
                                    v64);
        v20 = *a1;
        v51 = v56;
        v65.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
        v21 = *(_DWORD *)(v20 + 12632);
        *(_DWORD *)(v20 + 12632) = 0;
        v65.m128i_i64[1] = 0;
        v67 = 0;
        v50 = v21;
        if ( (unsigned __int8)sub_176F680(a1, &v62, &v65, 0, v11)
          || (sub_17412E0((__int64)&v53, a1, v55, v51, v22, v23, v65.m128i_i32[0], v65.m128i_i64[1], v66, v67),
              v24 = _mm_loadu_si128(&v54),
              v57 = _mm_loadu_si128(&v53),
              v58 = v24,
              (v53.m128i_i32[0] & 0x7FFFFFFF) == 0) )
        {
          v25 = ptr[0];
          *(_DWORD *)(v20 + 12632) = v50;
          if ( v25 != v69 )
            free(v25);
LABEL_9:
          v26 = 0;
          goto LABEL_10;
        }
        v37 = v70;
        v38 = &v57;
        v39 = (unsigned int)v71 + 1LL;
        v40 = (__m128i *)((char *)v70 + 32 * (unsigned int)v71);
        if ( v39 > HIDWORD(v71) )
        {
          if ( v70 > &v57 || v40 <= &v57 )
          {
            sub_2237220(&v70, v72, v39, 32);
            v38 = &v57;
            v40 = (__m128i *)((char *)v70 + 32 * (unsigned int)v71);
          }
          else
          {
            sub_2237220(&v70, v72, v39, 32);
            v38 = (__m128i *)((char *)v70 + (char *)&v57 - v37);
            v40 = (__m128i *)((char *)v70 + 32 * (unsigned int)v71);
          }
        }
        *v40 = _mm_loadu_si128(v38);
        v41 = _mm_loadu_si128(v38 + 1);
        v42 = ptr[0];
        LODWORD(v71) = v71 + 1;
        v40[1] = v41;
        *(_DWORD *)(v20 + 12632) = v50;
        if ( v42 == v69 )
        {
LABEL_14:
          ++m128i_i64;
          v9 += 24;
          if ( (__int64 *)v48 == m128i_i64 )
            goto LABEL_15;
        }
        else
        {
          free(v42);
          ++m128i_i64;
          v9 += 24;
          if ( (__int64 *)v48 == m128i_i64 )
            goto LABEL_15;
        }
      }
      else
      {
        if ( (unsigned __int8)sub_176F680(a1, (const __m128i *)&v59, &v57, 0, v11) )
          goto LABEL_9;
        v32 = v70;
        v33 = &v57;
        v34 = (unsigned int)v71 + 1LL;
        v35 = (__m128i *)((char *)v70 + 32 * (unsigned int)v71);
        if ( v34 > HIDWORD(v71) )
        {
          if ( v70 > &v57 || v35 <= &v57 )
          {
            sub_2237220(&v70, v72, v34, 32);
            v33 = &v57;
            v35 = (__m128i *)((char *)v70 + 32 * (unsigned int)v71);
          }
          else
          {
            sub_2237220(&v70, v72, v34, 32);
            v33 = (__m128i *)((char *)v70 + (char *)&v57 - v32);
            v35 = (__m128i *)((char *)v70 + 32 * (unsigned int)v71);
          }
        }
        ++m128i_i64;
        v9 += 24;
        *v35 = _mm_loadu_si128(v33);
        v36 = _mm_loadu_si128(v33 + 1);
        LODWORD(v71) = v71 + 1;
        v35[1] = v36;
        if ( (__int64 *)v48 == m128i_i64 )
        {
LABEL_15:
          v5 = a4;
          goto LABEL_16;
        }
      }
    }
    if ( (unsigned __int8)sub_176FBC0(
                            a1,
                            a1,
                            v59.m128_i64[1],
                            (__int64)a1,
                            v59.m128_u64[1] + 24LL * v59.m128_u32[1],
                            (__int64 *)&v70,
                            0) )
      goto LABEL_9;
    goto LABEL_14;
  }
LABEL_16:
  v26 = sub_1CDD580(*a1, a5, v5->m128i_u32[0], &v70);
  if ( (v26 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v28 = 8 * *(_DWORD *)(v26 + 20);
    if ( *(_BYTE *)(*(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 22 )
    {
      sub_1EA6140(a2, v26, (unsigned int)(v28 + 32), 8);
      v44 = _mm_loadu_si128(v5);
      v45 = 0;
      v43->m128i_i32[0] = 0;
      v46 = v71;
      v43->m128i_i64[1] = 0;
      v43[1] = v44;
      if ( v46 )
      {
        while ( 1 )
        {
          v43[2].m128i_i64[v45] = *((_QWORD *)v70 + 4 * v45 + 3);
          if ( v45 == v46 - 1 )
            break;
          ++v45;
        }
      }
    }
    else
    {
      sub_1EA6140(a2, v26, (unsigned int)(v28 + 16), 8);
      v30 = 0;
      v29[1] = v5->m128i_i32[1];
      *v29 = v5->m128i_i32[0];
      v29[2] = v5->m128i_i32[2];
      v29[3] = v5->m128i_i32[3];
      v31 = (unsigned int)(v71 - 1);
      if ( (_DWORD)v71 )
      {
        while ( 1 )
        {
          *(_QWORD *)&v29[2 * v30 + 4] = *((_QWORD *)v70 + 4 * v30 + 3);
          if ( v31 == v30 )
            break;
          ++v30;
        }
      }
    }
  }
LABEL_10:
  if ( v70 != v72 )
    free(v70);
  return v26;
}
