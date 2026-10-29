unsigned __int64 __fastcall sub_1D25330(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  const __m128i *v8; // r13
  int v10; // eax
  __int64 *m128i_i64; // r12
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 *v22; // r14
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  __m128i v26; // xmm2
  _BYTE *v27; // rdi
  unsigned __int64 v28; // rbx
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
  void **v45; // [rsp+8h] [rbp-270h]
  __int64 v46; // [rsp+10h] [rbp-268h]
  _BYTE *v47; // [rsp+18h] [rbp-260h]
  int v49; // [rsp+28h] [rbp-250h]
  int v50; // [rsp+2Ch] [rbp-24Ch]
  __m128i v52; // [rsp+40h] [rbp-238h] BYREF
  __m128i v53; // [rsp+50h] [rbp-228h] BYREF
  unsigned int v54; // [rsp+68h] [rbp-210h] BYREF
  int v55; // [rsp+6Ch] [rbp-20Ch] BYREF
  __m128i v56; // [rsp+70h] [rbp-208h] BYREF
  __m128i v57; // [rsp+80h] [rbp-1F8h]
  __m128i v58; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-1D8h]
  __int64 v60; // [rsp+A8h] [rbp-1D0h]
  __m128i v61; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-1B8h]
  __int64 v63; // [rsp+C8h] [rbp-1B0h]
  __m128i v64; // [rsp+D0h] [rbp-1A8h] BYREF
  __int64 v65; // [rsp+E0h] [rbp-198h]
  __int64 v66; // [rsp+E8h] [rbp-190h]
  void *ptr[2]; // [rsp+F0h] [rbp-188h] BYREF
  _BYTE v68[32]; // [rsp+100h] [rbp-178h] BYREF
  void *v69; // [rsp+120h] [rbp-158h] BYREF
  __int64 v70; // [rsp+128h] [rbp-150h]
  _QWORD v71[41]; // [rsp+130h] [rbp-148h] BYREF

  v8 = a4;
  v69 = v71;
  v70 = 0x800000000LL;
  v71[32] = a4->m128i_i64[1];
  v10 = *(_DWORD *)(a3 + 20);
  if ( v10 )
  {
    m128i_i64 = a4[1].m128i_i64;
    v12 = 48;
    v46 = (__int64)&a4[1].m128i_i64[(unsigned int)(v10 - 1) + 1];
    v45 = ptr;
    v47 = v68;
    while ( 1 )
    {
      v13 = *m128i_i64;
      v56.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v56.m128i_i64[1] = 0;
      v57.m128i_i64[1] = 0;
      v60 = v13;
      a7 = (__m128)_mm_loadu_si128((const __m128i *)(v12 + a3));
      v14 = *(_QWORD *)(v12 + a3 + 16);
      v15 = *(_DWORD *)(v12 + a3) & 0x7FFFFFFF;
      v58 = (__m128i)a7;
      v59 = v14;
      if ( v15 == 9 )
        break;
      if ( sub_F1D570((__int64)&v58) )
      {
        v54 = 0;
        v55 = 0;
        sub_1E4CF80(
          (unsigned int)&v61,
          (unsigned int)*a1,
          (unsigned int)&v54,
          (unsigned int)&v55,
          v16,
          v17,
          v58.m128i_i64[0],
          v58.m128i_i64[1],
          v59,
          v60);
        ptr[0] = v68;
        ptr[1] = (void *)0x200000000LL;
        *(double *)a7.m128_u64 = sub_1E4C910(
                                   (unsigned int)*a1,
                                   (unsigned int)ptr,
                                   v18,
                                   v19,
                                   v20,
                                   v21,
                                   v61.m128i_i64[0],
                                   v61.m128i_i64[1],
                                   v62,
                                   v63);
        v22 = *a1;
        v50 = v55;
        v64.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
        v23 = *((_DWORD *)v22 + 3158);
        *((_DWORD *)v22 + 3158) = 0;
        v64.m128i_i64[1] = 0;
        v66 = 0;
        v49 = v23;
        if ( (unsigned __int8)sub_1D24620(a1, &v61, &v64, 0, a7, a8)
          || (sub_1CB0010((__int64)&v52, a1, v54, v50, v24, v25, v64.m128i_i32[0], v64.m128i_i64[1], v65, v66),
              a8 = (__m128)_mm_loadu_si128(&v52),
              v26 = _mm_loadu_si128(&v53),
              v56 = (__m128i)a8,
              v57 = v26,
              (v52.m128i_i32[0] & 0x7FFFFFFF) == 0) )
        {
          v27 = ptr[0];
          *((_DWORD *)v22 + 3158) = v49;
          if ( v27 != v68 )
            free(v27);
LABEL_9:
          v28 = 0;
          goto LABEL_10;
        }
        sub_17429A0((__int64)&v69, &v56);
        v39 = ptr[0];
        *((_DWORD *)v22 + 3158) = v49;
        if ( v39 == v68 )
        {
LABEL_14:
          ++m128i_i64;
          v12 += 24;
          if ( (__int64 *)v46 == m128i_i64 )
            goto LABEL_15;
        }
        else
        {
          free(v39);
          ++m128i_i64;
          v12 += 24;
          if ( (__int64 *)v46 == m128i_i64 )
            goto LABEL_15;
        }
      }
      else
      {
        v34 = &v56;
        if ( (unsigned __int8)sub_1D24620(a1, &v58, &v56, 0, a7, a8) )
          goto LABEL_9;
        v35 = v69;
        v36 = (unsigned int)v70 + 1LL;
        v37 = (__m128i *)((char *)v69 + 32 * (unsigned int)v70);
        if ( v36 > HIDWORD(v70) )
        {
          if ( v69 > &v56 || v37 <= &v56 )
          {
            sub_2237220(&v69, v71, v36, 32);
            v37 = (__m128i *)((char *)v69 + 32 * (unsigned int)v70);
          }
          else
          {
            sub_2237220(&v69, v71, v36, 32);
            v34 = (__m128i *)((char *)v69 + (char *)&v56 - v35);
            v37 = (__m128i *)((char *)v69 + 32 * (unsigned int)v70);
          }
        }
        ++m128i_i64;
        v12 += 24;
        *v37 = _mm_loadu_si128(v34);
        v38 = _mm_loadu_si128(v34 + 1);
        LODWORD(v70) = v70 + 1;
        v37[1] = v38;
        if ( (__int64 *)v46 == m128i_i64 )
        {
LABEL_15:
          v8 = a4;
          goto LABEL_16;
        }
      }
    }
    if ( (unsigned __int8)sub_1D24B10(
                            a1,
                            (__int64 *)a1,
                            v58.m128i_i64[1],
                            (__int64)a1,
                            v58.m128i_i64[1] + 24LL * v58.m128i_u32[1],
                            (__int64)&v69,
                            0) )
      goto LABEL_9;
    goto LABEL_14;
  }
LABEL_16:
  v28 = sub_1CDD580(
          (__int64)*a1,
          a5,
          v8->m128i_i32[0],
          (__int64)&v69,
          a7,
          a8,
          a5,
          a6,
          a3,
          (int)v45,
          v46,
          (char)v47,
          a5,
          v49);
  if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v30 = 8 * *(_DWORD *)(v28 + 20);
    if ( *(_BYTE *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 22 )
    {
      sub_1EA6140(a2, v28, (unsigned int)(v30 + 32), 8);
      v41 = _mm_loadu_si128(v8);
      v42 = 0;
      v40->m128i_i32[0] = 0;
      v43 = v70;
      v40->m128i_i64[1] = 0;
      v40[1] = v41;
      if ( v43 )
      {
        while ( 1 )
        {
          v40[2].m128i_i64[v42] = *((_QWORD *)v69 + 4 * v42 + 3);
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
      v31[1] = v8->m128i_i32[1];
      *v31 = v8->m128i_i32[0];
      v31[2] = v8->m128i_i32[2];
      v31[3] = v8->m128i_i32[3];
      v33 = (unsigned int)(v70 - 1);
      if ( (_DWORD)v70 )
      {
        while ( 1 )
        {
          *(_QWORD *)&v31[2 * v32 + 4] = *((_QWORD *)v69 + 4 * v32 + 3);
          if ( v33 == v32 )
            break;
          ++v32;
        }
      }
    }
  }
LABEL_10:
  if ( v69 != v71 )
    free(v69);
  return v28;
}
