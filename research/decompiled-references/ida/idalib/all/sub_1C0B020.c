__int64 __fastcall sub_1C0B020(
        __m128 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        unsigned __int64 a10,
        __int64 a11)
{
  unsigned __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  char v16; // dl
  __int64 *v17; // rdi
  __int64 v18; // r10
  __int64 *v19; // r8
  __int64 *v20; // rcx
  __int64 v21; // rdi
  __int64 result; // rax
  __int64 *v23; // rsi
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // r13
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r14
  __m128i *v35; // rax
  __m128 v36; // xmm1
  const __m128i *v37; // rax
  __int64 v38; // rdx
  __m128i v39; // xmm5
  __m128i v40; // xmm6
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned int v44; // ebp
  __int64 v45; // rbx
  __int64 v46; // r15
  __int64 v47; // r13
  __int64 v48; // rcx
  __m128i *v49; // rcx
  unsigned int v50; // eax
  void *v51; // rdi
  __m128i *v52; // rdi
  unsigned __int16 v53; // ax
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // edx
  void *v57; // rdi
  unsigned int v58; // eax
  unsigned int v59; // eax
  __m128i *v60; // rdi
  unsigned int v61; // eax
  __int64 v64; // [rsp+20h] [rbp-1B8h]
  __m128i *v65; // [rsp+20h] [rbp-1B8h]
  unsigned __int64 v67; // [rsp+38h] [rbp-1A0h]
  __m128i v68; // [rsp+40h] [rbp-198h] BYREF
  __m128i v69; // [rsp+50h] [rbp-188h] BYREF
  void *v70[2]; // [rsp+60h] [rbp-178h] BYREF
  __m128i v71; // [rsp+70h] [rbp-168h] BYREF
  __int64 v72; // [rsp+80h] [rbp-158h]
  __m128i v73; // [rsp+E0h] [rbp-F8h] BYREF
  void **p_ptr; // [rsp+F0h] [rbp-E8h]
  __int64 v75; // [rsp+F8h] [rbp-E0h]
  void *ptr; // [rsp+100h] [rbp-D8h] BYREF
  _BYTE v77[80]; // [rsp+110h] [rbp-C8h] BYREF
  __int16 v78; // [rsp+160h] [rbp-78h]
  __int64 *v79; // [rsp+168h] [rbp-70h]
  __int64 v80; // [rsp+170h] [rbp-68h]
  __int64 v81; // [rsp+178h] [rbp-60h] BYREF

  v13 = a2;
  v14 = a11;
  v15 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 32LL))(a2);
  v16 = *(_BYTE *)(a11 + 2724);
  if ( !v16 )
    goto LABEL_10;
  v17 = *(__int64 **)(a11 + 2704);
  v18 = *(unsigned int *)(a11 + 2716);
  v19 = &v17[v18];
  if ( v17 != v19 )
  {
    v20 = *(__int64 **)(a11 + 2704);
    if ( *v17 == v15 )
    {
LABEL_43:
      result = *(unsigned int *)(a11 + 2716);
      v16 = 0;
      v23 = &v17[result];
      goto LABEL_12;
    }
    while ( v19 != ++v20 )
    {
      if ( v15 == *v20 )
        goto LABEL_43;
    }
  }
  if ( (unsigned int)v18 < *(_DWORD *)(a11 + 2712) )
  {
    *(_DWORD *)(a11 + 2716) = v18 + 1;
    *v19 = v15;
    v21 = *(_QWORD *)(a11 + 2704);
    v20 = (__int64 *)(v21 + 8 * v18);
  }
  else
  {
LABEL_10:
    v24 = sub_2236760(a11 + 2704, v15);
    v21 = *(_QWORD *)(a11 + 2704);
    v20 = (__int64 *)v24;
    if ( !*(_BYTE *)(a11 + 2724) )
    {
      result = *(unsigned int *)(a11 + 2712);
      v23 = (__int64 *)(v21 + 8 * result);
      goto LABEL_12;
    }
  }
  result = *(unsigned int *)(a11 + 2716);
  v23 = (__int64 *)(v21 + 8 * result);
LABEL_12:
  if ( v20 != v23 && (unsigned __int64)*v20 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v25 = v20 + 1;
    do
    {
      result = (__int64)v25;
      if ( v23 == v25 )
        break;
      ++v25;
    }
    while ( *(_QWORD *)result >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( v16 )
  {
    sub_18C74E0((__int64)a1, 0, 0, 4);
    v26 = (unsigned int)(a10 + 1);
    v27 = sub_1BD9C70(a11, v26, 0, 0);
    *(_BYTE *)(v27 + 104) |= 5u;
    *(_QWORD *)(v27 + 8) = a3;
    *(_QWORD *)v27 = 0;
    v28 = v69.m128i_i64[0] & 0xFFFFF80400000000LL;
    *(_QWORD *)(v27 + 40) = v13;
    *(_DWORD *)(v27 + 108) = a10;
    v68.m128i_i32[0] = 6;
    v68.m128i_i64[1] = 0;
    v69.m128i_i64[0] = v28 | 0x2000000000LL;
    v71.m128i_i64[1] = 0;
    if ( (unsigned __int8)sub_B771C0(v13, v26, v29, v30) )
    {
      sub_1BFFB80(&v73, a1, (_WORD *)a6, *(_QWORD *)(**(_QWORD **)(v13 + 120) + 48LL), 1u, 0, a7, a8);
    }
    else
    {
      v53 = sub_C0EB40(a6, a1[15].m128_i64[1], nullptr, v31, v32);
      sub_1BEC760(&v73, (__int64)a1, *(unsigned int *)(a11 + 2968), *(_QWORD *)(a6 + 8), v53, v13, a7, a8, a4, 0, 0);
    }
    sub_1BD9390(&v68, &v73);
    if ( (v73.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != v77 )
      free(ptr);
    v34 = *(_QWORD *)(v27 + 48);
    if ( (v68.m128i_i32[0] & 0x7FFFFFFF) == 5 )
    {
      v60 = *(__m128i **)(v27 + 48);
      v61 = *(_DWORD *)(v27 + 104) & 0xFFFC03FE;
      BYTE1(v61) |= 8u;
      *(_DWORD *)(v27 + 104) = v61;
      sub_1BD9390(v60, &v68);
      goto LABEL_46;
    }
    if ( (*(_DWORD *)v34 & 0x7FFFFFFF) == 3 )
    {
      v57 = *(void **)(v34 + 32);
      if ( v57 != (void *)(v34 + 48) )
        free(v57);
    }
    *(_DWORD *)v34 = *(_DWORD *)v34 & 0x80000000 | 2;
    v35 = *(__m128i **)(v27 + 48);
    v36 = (__m128)_mm_load_si128(&v69);
    v35[1] = (__m128i)v36;
    v35[2] = _mm_load_si128((const __m128i *)v70);
    v35[3] = _mm_load_si128(&v71);
    v35[4].m128i_i64[0] = v72;
    *(_BYTE *)(*(_QWORD *)(v27 + 48) + 72LL) &= ~1u;
    *(_BYTE *)(*(_QWORD *)(v27 + 48) + 72LL) &= ~2u;
    *(_QWORD *)(*(_QWORD *)(v27 + 48) + 136LL) = v13;
    *(_QWORD *)(*(_QWORD *)(v27 + 48) + 144LL) = a3;
    v37 = *(const __m128i **)(v27 + 48);
    v38 = v37[4].m128i_i64[0];
    v39 = _mm_loadu_si128(v37 + 2);
    v40 = _mm_loadu_si128(v37 + 3);
    v37[5] = _mm_loadu_si128(v37 + 1);
    v37[6] = v39;
    v37[7] = v40;
    v37[8].m128i_i64[0] = v38;
    v41 = *(_QWORD *)(v27 + 48);
    v42 = *(_QWORD *)(v41 + 80) & 0xFFFFF80400000000LL;
    *(_QWORD *)(v41 + 120) = 0;
    *(_QWORD *)(v41 + 80) = v42 | 0x2000000000LL;
    v43 = *(unsigned __int16 *)(a5 + 22);
    if ( a10 > v43 && *(char *)(a5 + 19) >= 0 )
    {
      *(_DWORD *)(v27 + 104) &= 0xFFFC03FE;
    }
    else
    {
      if ( a10 >= v43 )
      {
        if ( (_DWORD)a10 )
        {
          v67 = v13;
          v44 = *(unsigned __int16 *)(a5 + 22);
          v45 = 0;
          v46 = v27;
          v47 = 152;
          while ( 1 )
          {
            if ( v44 <= (unsigned int)v45 )
            {
              v48 = v47 + *(_QWORD *)(v46 + 48);
              if ( (*(_DWORD *)v48 & 0x7FFFFFFF) == 3 )
              {
                v51 = *(void **)(v48 + 32);
                if ( v51 != (void *)(v48 + 48) )
                {
                  v64 = v47 + *(_QWORD *)(v46 + 48);
                  free(v51);
                  v48 = v64;
                }
              }
              *(_DWORD *)v48 = *(_DWORD *)v48 & 0x80000000 | 4;
            }
            else
            {
              sub_1BFFB80(
                &v73,
                a1,
                *(_WORD **)(a9 + 8 * v45),
                *(_QWORD *)(a5 + 8 * v45 + 48),
                0,
                (*(_BYTE *)(a1[14].m128_u64[1] + 107) & 4) != 0,
                a7,
                v36);
              v49 = (__m128i *)(v47 + *(_QWORD *)(v46 + 48));
              if ( (v49->m128i_i32[0] & 0x7FFFFFFF) == 3 )
              {
                v52 = (__m128i *)v49[2].m128i_i64[0];
                if ( v52 != &v49[3] )
                {
                  v65 = (__m128i *)(v47 + *(_QWORD *)(v46 + 48));
                  free(v52);
                  v49 = v65;
                }
              }
              sub_1A0B340(v49, &v73);
              if ( (v73.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != v77 )
                free(ptr);
              if ( (*(_DWORD *)(*(_QWORD *)(v46 + 48) + v47) & 0x7FFFFFFF) == 5 )
              {
                v50 = *(_DWORD *)(v46 + 104) & 0xFFFC03FE;
                BYTE1(v50) |= 8u;
                *(_DWORD *)(v46 + 104) = v50;
                goto LABEL_46;
              }
            }
            v47 += 152;
            if ( v45 == (_DWORD)a10 - 1 )
              break;
            ++v45;
          }
          v13 = v67;
          v14 = a11;
          v27 = v46;
        }
        v54 = *(_QWORD *)(v13 + 56);
        if ( (v54 & 4) != 0 && *(_QWORD *)((v54 & 0xFFFFFFFFFFFFFFF8LL) + 40) )
        {
          a7 = 0;
          v78 = 0;
          v73 = 0;
          p_ptr = &ptr;
          v79 = &v81;
          v75 = 0x400000000LL;
          v80 = 0x400000000LL;
          if ( (unsigned __int8)sub_17516B0((__int64)a1, v13, (__int64)&v73, 0, 1u, 0.0) || !(_BYTE)v78 )
          {
            v59 = *(_DWORD *)(v27 + 104) & 0xFFFC03FE;
            BYTE1(v59) |= 0x3Cu;
            *(_DWORD *)(v27 + 104) = v59;
            sub_1BCD1D0(&v73);
            goto LABEL_46;
          }
          sub_1BCD1D0(&v73);
        }
        v55 = sub_1BCB950((__int64)a1, v13, *(unsigned int *)(v14 + 2968), 0, 0, v33, a7, v36);
        if ( v55 )
        {
          v56 = *(_DWORD *)(v27 + 104);
          *(_QWORD *)(v27 + 120) = v55;
          v56 &= 0xFFFC03FE;
          BYTE1(v56) |= 0x24u;
          *(_DWORD *)(v27 + 104) = v56;
        }
        goto LABEL_46;
      }
      v58 = *(_DWORD *)(v27 + 104) & 0xFFFC03FE;
      BYTE1(v58) |= 4u;
      *(_DWORD *)(v27 + 104) = v58;
    }
LABEL_46:
    if ( (v68.m128i_i32[0] & 0x7FFFFFFF) == 3 && v70[0] != &v71 )
      free(v70[0]);
    return sub_190D5E0((__int64)a1, a7);
  }
  return result;
}
