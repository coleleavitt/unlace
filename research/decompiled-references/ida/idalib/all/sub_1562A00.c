bool __fastcall sub_1562A00(const __m128i *a1, char a2)
{
  __int16 v2; // dx
  int v5; // eax
  bool result; // al
  __int64 v7; // rax
  __m128i v8; // xmm2
  __m128i v9; // xmm3
  __int64 v10; // rdi
  __int32 v11; // r14d
  unsigned __int64 v12; // r15
  __int16 v13; // r13
  int v14; // ebp
  __m128i v15; // xmm4
  __m128i v16; // xmm5
  __m128i v17; // xmm6
  __int32 v18; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  char *v21; // rdi
  char *v22; // rax
  __int64 v23; // rax
  __m128i v24; // xmm7
  __m128i v25; // xmm1
  __int64 v26; // rdi
  unsigned __int64 v27; // rbp
  __int16 v28; // r15
  __int16 v29; // ax
  __m128i v30; // xmm5
  __m128i v31; // xmm6
  __int32 v32; // eax
  __m128i v33; // xmm5
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  char *v36; // rdi
  char *v37; // rax
  unsigned int v38; // esi
  __m128i v39; // xmm2
  __m128i v40; // xmm3
  __m128i v41; // xmm4
  __int32 v42; // eax
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  char *v45; // rdi
  char *v46; // rax
  __int64 v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int16 v50; // [rsp+2h] [rbp-D6h]
  __int16 v51; // [rsp+4h] [rbp-D4h]
  char v52; // [rsp+7h] [rbp-D1h]
  __int64 v53; // [rsp+8h] [rbp-D0h]
  __int128 v54; // [rsp+10h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-B8h]
  __int128 v56; // [rsp+30h] [rbp-A8h]
  __m128i v57; // [rsp+48h] [rbp-90h] BYREF
  __m128i v58; // [rsp+58h] [rbp-80h] BYREF
  __int64 v59; // [rsp+68h] [rbp-70h]
  __m128i v60; // [rsp+70h] [rbp-68h] BYREF
  __int32 v61; // [rsp+80h] [rbp-58h]

  v2 = a1[2].m128i_i16[0];
  if ( v2 == 126 )
    return 1;
  if ( (unsigned __int16)v2 > 0x7Eu )
  {
    result = 1;
    if ( v2 == 153 || v2 == 166 || v2 == 138 )
      return result;
    goto LABEL_6;
  }
  if ( v2 == 72 )
    goto LABEL_23;
  if ( v2 == 119 )
    return 1;
  if ( v2 != 5 )
    goto LABEL_6;
LABEL_23:
  if ( !a2 )
  {
LABEL_6:
    LOBYTE(v54) = 0;
    v5 = sub_155DB90((__int64)a1, 0, 1u, (bool *)&v54);
    if ( v5 != 2 )
      return v5 != 1;
    result = 0;
    if ( !(_BYTE)v54 )
    {
      v7 = a1[5].m128i_i64[0];
      v8 = _mm_loadu_si128(a1 + 4);
      v9 = _mm_loadu_si128(a1 + 1);
      v10 = a1->m128i_i64[1];
      v57 = _mm_loadu_si128(a1 + 3);
      v11 = a1[5].m128i_i32[2];
      v59 = v7;
      LODWORD(v7) = a1[2].m128i_i32[0];
      v58 = v8;
      v12 = a1[169].m128i_u32[2];
      v13 = a1[5].m128i_i16[6];
      v60 = v9;
      v61 = v7;
      sub_1418D30(v10, 0);
      v14 = sub_15627F0((__int64)a1, 0);
      sub_1417BC0(a1->m128i_i64[1]);
      v15 = _mm_loadu_si128(&v57);
      v16 = _mm_loadu_si128(&v58);
      v17 = _mm_load_si128(&v60);
      a1[5].m128i_i64[0] = v59;
      v18 = v61;
      a1[3] = v15;
      a1[2].m128i_i32[0] = v18;
      v19 = a1[169].m128i_u32[2];
      a1[4] = v16;
      a1[1] = v17;
      if ( v19 != v12 )
      {
        if ( v19 <= v12 )
        {
          if ( v12 > a1[169].m128i_u32[3] )
          {
            sub_2237220(&a1[169], &a1[170], v12, 8);
            v19 = a1[169].m128i_u32[2];
          }
          v20 = a1[169].m128i_i64[0];
          v21 = (char *)(v20 + 8 * v19);
          v22 = (char *)(v20 + 8 * v12);
          if ( v21 != v22 )
            memset(v21, 0, 8 * ((unsigned __int64)(v22 - 8 - v21) >> 3) + 8);
        }
        a1[169].m128i_i32[2] = v12;
      }
      a1[5].m128i_i32[2] = v11;
      result = 1;
      a1[5].m128i_i16[6] = v13;
      if ( v14 != 3 )
        return (v14 & 0xFFFFFFFD) == 0;
    }
    return result;
  }
  v23 = a1[5].m128i_i64[0];
  v24 = _mm_loadu_si128(a1 + 3);
  v25 = _mm_loadu_si128(a1 + 1);
  v26 = a1->m128i_i64[1];
  v57 = v24;
  v27 = a1[169].m128i_u32[2];
  v59 = v23;
  LODWORD(v23) = a1[2].m128i_i32[0];
  v58 = _mm_loadu_si128(a1 + 4);
  v28 = a1[5].m128i_i16[4];
  v61 = v23;
  LOWORD(v23) = a1[5].m128i_i16[5];
  v60 = v25;
  v50 = v23;
  v51 = a1[5].m128i_i16[6];
  sub_1418D30(v26, 0);
  v54 = 0;
  *(_OWORD *)ptr = 0;
  v56 = 0;
  sub_14D0170(a1, (__int64)&v54, 0, 0, 1u, nullptr, (__m128i)0LL, 0, nullptr, 0, 0, 0);
  v29 = a1[2].m128i_i16[0];
  if ( v29 != 40 && v29 != 140 )
  {
    if ( v29 != 5 )
    {
LABEL_27:
      if ( HIDWORD(ptr[1]) )
        free(ptr[0]);
      sub_1417BC0(a1->m128i_i64[1]);
      v30 = _mm_loadu_si128(&v57);
      v31 = _mm_loadu_si128(&v58);
      a1[5].m128i_i64[0] = v59;
      v32 = v61;
      a1[3] = v30;
      v33 = _mm_load_si128(&v60);
      a1[2].m128i_i32[0] = v32;
      v34 = a1[169].m128i_u32[2];
      a1[4] = v31;
      a1[1] = v33;
      if ( v27 != v34 )
      {
        if ( v27 >= v34 )
        {
          if ( v27 > a1[169].m128i_u32[3] )
          {
            sub_2237220(&a1[169], &a1[170], v27, 8);
            v34 = a1[169].m128i_u32[2];
          }
          v35 = a1[169].m128i_i64[0];
          v36 = (char *)(v35 + 8 * v34);
          v37 = (char *)(v35 + 8 * v27);
          if ( v36 != v37 )
            memset(v36, 0, 8 * ((unsigned __int64)(v37 - 8 - v36) >> 3) + 8);
        }
        a1[169].m128i_i32[2] = v27;
      }
      a1[5].m128i_i16[4] = v28;
      a1[5].m128i_i16[5] = v50;
      a1[5].m128i_i16[6] = v51;
      goto LABEL_6;
    }
    v53 = a1[1].m128i_i64[1];
    v52 = sub_1CE5630(a1[6].m128i_i64[0]);
    if ( (unsigned __int8)sub_183B910(a1[6].m128i_i64[0], v53, *(_QWORD *)(a1[6].m128i_i64[0] + 608), &v54) || v52 )
    {
      if ( !(_DWORD)v54 || (v38 = 0, !DWORD1(v54)) )
        v38 = *((_QWORD *)&v54 + 1) == 0;
      if ( !(unsigned __int8)sub_147F8B0((__int64)a1, v38, v52, 0, 0) )
        goto LABEL_27;
    }
    else
    {
      if ( (!(_DWORD)v54 || !DWORD1(v54)) && !*((_QWORD *)&v54 + 1) )
        goto LABEL_27;
      v47 = a1->m128i_i64[1];
      v48 = *(_QWORD *)(v47 + 2944);
      v49 = v48 >= *(unsigned int *)(v47 + 2912) ? sub_14180A0(v47, 1u) : *(_QWORD *)(v47 + 2904) + 24 * v48;
      if ( *(_WORD *)(v49 + 16) != 5 )
        goto LABEL_27;
    }
  }
  if ( HIDWORD(ptr[1]) )
    free(ptr[0]);
  sub_1417BC0(a1->m128i_i64[1]);
  v39 = _mm_loadu_si128(&v57);
  v40 = _mm_loadu_si128(&v58);
  v41 = _mm_load_si128(&v60);
  a1[5].m128i_i64[0] = v59;
  v42 = v61;
  a1[3] = v39;
  a1[2].m128i_i32[0] = v42;
  v43 = a1[169].m128i_u32[2];
  a1[4] = v40;
  a1[1] = v41;
  if ( v27 != v43 )
  {
    if ( v27 >= v43 )
    {
      if ( v27 > a1[169].m128i_u32[3] )
      {
        sub_2237220(&a1[169], &a1[170], v27, 8);
        v43 = a1[169].m128i_u32[2];
      }
      v44 = a1[169].m128i_i64[0];
      v45 = (char *)(v44 + 8 * v43);
      v46 = (char *)(v44 + 8 * v27);
      if ( v45 != v46 )
        memset(v45, 0, 8 * ((unsigned __int64)(v46 - 8 - v45) >> 3) + 8);
    }
    a1[169].m128i_i32[2] = v27;
  }
  a1[5].m128i_i16[4] = v28;
  a1[5].m128i_i16[5] = v50;
  a1[5].m128i_i16[6] = v51;
  return a2;
}
