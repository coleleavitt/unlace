unsigned __int64 __fastcall sub_1E25610(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        __m128i *a5,
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
  __int64 v22; // r14
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
  _BYTE *v34; // r15
  unsigned __int64 v35; // rdx
  __m128i *v36; // rax
  __m128i v37; // xmm4
  _BYTE *v38; // r15
  unsigned __int64 v39; // rdx
  __m128i *v40; // rax
  __m128i v41; // xmm6
  _BYTE *v42; // rdi
  __m128i *v43; // rdx
  __m128i v44; // xmm7
  __int64 v45; // rax
  int v46; // ecx
  __int64 v47; // [rsp+0h] [rbp-288h]
  void **v49; // [rsp+10h] [rbp-278h]
  __int64 v50; // [rsp+18h] [rbp-270h]
  _BYTE *v51; // [rsp+20h] [rbp-268h]
  __int64 v52; // [rsp+28h] [rbp-260h]
  int v53; // [rsp+30h] [rbp-258h]
  int v54; // [rsp+38h] [rbp-250h]
  __m128i v56; // [rsp+50h] [rbp-238h] BYREF
  __m128i v57; // [rsp+60h] [rbp-228h] BYREF
  unsigned int v58; // [rsp+78h] [rbp-210h] BYREF
  int v59; // [rsp+7Ch] [rbp-20Ch] BYREF
  __m128i v60; // [rsp+80h] [rbp-208h] BYREF
  __m128i v61; // [rsp+90h] [rbp-1F8h]
  __m128i v62; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-1D8h]
  __int64 v64; // [rsp+B8h] [rbp-1D0h]
  __m128i v65; // [rsp+C0h] [rbp-1C8h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-1B8h]
  __int64 v67; // [rsp+D8h] [rbp-1B0h]
  __m128i v68; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v69; // [rsp+F0h] [rbp-198h]
  __int64 v70; // [rsp+F8h] [rbp-190h]
  void *ptr[2]; // [rsp+100h] [rbp-188h] BYREF
  _BYTE v72[32]; // [rsp+110h] [rbp-178h] BYREF
  void *v73; // [rsp+130h] [rbp-158h] BYREF
  __int64 v74; // [rsp+138h] [rbp-150h]
  _QWORD v75[41]; // [rsp+140h] [rbp-148h] BYREF

  v8 = a4;
  v73 = v75;
  v74 = 0x800000000LL;
  v52 = (__int64)a5;
  v75[32] = a4->m128i_i64[1];
  v10 = *(_DWORD *)(a3 + 20);
  if ( v10 )
  {
    m128i_i64 = a4[1].m128i_i64;
    v12 = 48;
    v50 = (__int64)&a4[1].m128i_i64[(unsigned int)(v10 - 1) + 1];
    v49 = ptr;
    v51 = v72;
    while ( 1 )
    {
      v13 = *m128i_i64;
      v60.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v60.m128i_i64[1] = 0;
      v61.m128i_i64[1] = 0;
      v64 = v13;
      a7 = (__m128)_mm_loadu_si128((const __m128i *)(v12 + a3));
      v14 = *(_QWORD *)(v12 + a3 + 16);
      v15 = *(_DWORD *)(v12 + a3) & 0x7FFFFFFF;
      v62 = (__m128i)a7;
      v63 = v14;
      if ( v15 == 9 )
        break;
      if ( sub_F1D570((__int64)&v62) )
      {
        v58 = 0;
        v59 = 0;
        sub_1E4CF80(
          (unsigned int)&v65,
          *a1,
          (unsigned int)&v58,
          (unsigned int)&v59,
          v16,
          v17,
          v62.m128i_i64[0],
          v62.m128i_i64[1],
          v63,
          v64);
        ptr[0] = v72;
        ptr[1] = (void *)0x200000000LL;
        *(double *)a7.m128_u64 = sub_1E4C910(
                                   *a1,
                                   (unsigned int)ptr,
                                   v18,
                                   v19,
                                   v20,
                                   v21,
                                   v65.m128i_i64[0],
                                   v65.m128i_i64[1],
                                   v66,
                                   v67);
        v22 = *a1;
        v54 = v59;
        v68.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
        v23 = *(_DWORD *)(v22 + 12632);
        *(_DWORD *)(v22 + 12632) = 0;
        v68.m128i_i64[1] = 0;
        v70 = 0;
        v53 = v23;
        if ( (unsigned __int8)sub_1E242D0(a1, &v65, &v68, 0, a7, a8)
          || (sub_1DFE5A0((__int64)&v56, a1, v58, v54, v24, v25, v68.m128i_i32[0], v68.m128i_i64[1], v69, v70),
              a8 = (__m128)_mm_loadu_si128(&v56),
              v26 = _mm_loadu_si128(&v57),
              v60 = (__m128i)a8,
              v61 = v26,
              (v56.m128i_i32[0] & 0x7FFFFFFF) == 0) )
        {
          v27 = ptr[0];
          *(_DWORD *)(v22 + 12632) = v53;
          if ( v27 != v72 )
            free(v27);
LABEL_9:
          v28 = 0;
          goto LABEL_10;
        }
        v38 = v73;
        a5 = &v60;
        v39 = (unsigned int)v74 + 1LL;
        v40 = (__m128i *)((char *)v73 + 32 * (unsigned int)v74);
        if ( v39 > HIDWORD(v74) )
        {
          if ( v73 > &v60 || v40 <= &v60 )
          {
            sub_2237220(&v73, v75, v39, 32);
            a5 = &v60;
            v40 = (__m128i *)((char *)v73 + 32 * (unsigned int)v74);
          }
          else
          {
            sub_2237220(&v73, v75, v39, 32);
            a5 = (__m128i *)((char *)v73 + (char *)&v60 - v38);
            v40 = (__m128i *)((char *)v73 + 32 * (unsigned int)v74);
          }
        }
        *v40 = _mm_loadu_si128(a5);
        v41 = _mm_loadu_si128(a5 + 1);
        v42 = ptr[0];
        LODWORD(v74) = v74 + 1;
        v40[1] = v41;
        *(_DWORD *)(v22 + 12632) = v53;
        if ( v42 == v72 )
        {
LABEL_14:
          ++m128i_i64;
          v12 += 24;
          if ( (__int64 *)v50 == m128i_i64 )
            goto LABEL_15;
        }
        else
        {
          free(v42);
          ++m128i_i64;
          v12 += 24;
          if ( (__int64 *)v50 == m128i_i64 )
            goto LABEL_15;
        }
      }
      else
      {
        if ( (unsigned __int8)sub_1E242D0(a1, &v62, &v60, 0, a7, a8) )
          goto LABEL_9;
        v34 = v73;
        a5 = &v60;
        v35 = (unsigned int)v74 + 1LL;
        v36 = (__m128i *)((char *)v73 + 32 * (unsigned int)v74);
        if ( v35 > HIDWORD(v74) )
        {
          if ( v73 > &v60 || v36 <= &v60 )
          {
            sub_2237220(&v73, v75, v35, 32);
            a5 = &v60;
            v36 = (__m128i *)((char *)v73 + 32 * (unsigned int)v74);
          }
          else
          {
            sub_2237220(&v73, v75, v35, 32);
            a5 = (__m128i *)((char *)v73 + (char *)&v60 - v34);
            v36 = (__m128i *)((char *)v73 + 32 * (unsigned int)v74);
          }
        }
        ++m128i_i64;
        v12 += 24;
        *v36 = _mm_loadu_si128(a5);
        v37 = _mm_loadu_si128(a5 + 1);
        LODWORD(v74) = v74 + 1;
        v36[1] = v37;
        if ( (__int64 *)v50 == m128i_i64 )
        {
LABEL_15:
          v8 = a4;
          goto LABEL_16;
        }
      }
    }
    if ( (unsigned __int8)sub_1E24810(
                            a1,
                            a1,
                            (const __m128i *)v62.m128i_i64[1],
                            a7,
                            a8,
                            (__int64)a1,
                            (const __m128i *)(v62.m128i_i64[1] + 24LL * v62.m128i_u32[1]),
                            (__int64 *)&v73,
                            0) )
      goto LABEL_9;
    goto LABEL_14;
  }
LABEL_16:
  v28 = sub_1CDD580(
          *a1,
          v52,
          v8->m128i_i32[0],
          (__int64)&v73,
          a7,
          a8,
          (__int64)a5,
          a6,
          v47,
          a3,
          (int)v49,
          v50,
          (int)v51,
          v52);
  if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v30 = 8 * *(_DWORD *)(v28 + 20);
    if ( *(_BYTE *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 22 )
    {
      sub_1EA6140(a2, v28, (unsigned int)(v30 + 32), 8);
      v44 = _mm_loadu_si128(v8);
      v45 = 0;
      v43->m128i_i32[0] = 0;
      v46 = v74;
      v43->m128i_i64[1] = 0;
      v43[1] = v44;
      if ( v46 )
      {
        while ( 1 )
        {
          v43[2].m128i_i64[v45] = *((_QWORD *)v73 + 4 * v45 + 3);
          if ( v45 == v46 - 1 )
            break;
          ++v45;
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
      v33 = (unsigned int)(v74 - 1);
      if ( (_DWORD)v74 )
      {
        while ( 1 )
        {
          *(_QWORD *)&v31[2 * v32 + 4] = *((_QWORD *)v73 + 4 * v32 + 3);
          if ( v33 == v32 )
            break;
          ++v32;
        }
      }
    }
  }
LABEL_10:
  if ( v73 != v75 )
    free(v73);
  return v28;
}
