void __fastcall sub_1555F90(const __m128i *a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int16 v4; // ax
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int16 v11; // ax
  __int64 v12; // rax
  __int16 v13; // bp
  __int16 v14; // r15
  unsigned __int64 v15; // r12
  __int16 v16; // r14
  __int64 *v17; // rdi
  char v18; // al
  __m128i v19; // xmm3
  __m128i v20; // xmm4
  __m128i v21; // xmm5
  __int32 v22; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  char *v25; // rdi
  char *v26; // rax
  unsigned __int16 v27; // ax
  __int32 v28; // r8d
  unsigned __int16 v29; // ax
  unsigned __int64 v30; // rbx
  __int64 v31; // rdx
  unsigned __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rdi
  __m128i *v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  const __m128i *v38; // rbp
  bool v39; // al
  unsigned int v40; // ebp
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  char *v44; // rdi
  char *v45; // rax
  const __m128i *v46; // rdi
  const __m128i *v47; // rsi
  __int64 v48; // rax
  char v49; // [rsp+0h] [rbp-BAh]
  unsigned int v50; // [rsp+6h] [rbp-B4h]
  char v51; // [rsp+21h] [rbp-99h] BYREF
  unsigned __int64 v52; // [rsp+22h] [rbp-98h] BYREF
  __m128i v53; // [rsp+2Ah] [rbp-90h] BYREF
  __m128i v54; // [rsp+3Ah] [rbp-80h] BYREF
  __int64 v55; // [rsp+4Ah] [rbp-70h]
  __m128i v56; // [rsp+52h] [rbp-68h] BYREF
  __int32 v57; // [rsp+62h] [rbp-58h]

  if ( (*(_BYTE *)(*(_QWORD *)(a1[6].m128i_i64[0] + 232) + 1LL) & 8) == 0 )
    return;
  v2 = *a2;
  if ( *a2 == 1 )
    return;
  v3 = v2 & 0xFFFFFFFFFFFFFFFELL;
  v4 = *(_WORD *)(v2 & 0xFFFFFFFFFFFFFFFELL) & 0x1FF;
  switch ( v4 )
  {
    case 'G':
      if ( (*(_QWORD *)v3 & 0x100000LL) == 0 )
      {
LABEL_5:
        v49 = 0;
        goto LABEL_6;
      }
      v49 = 0;
      v39 = *(_DWORD *)(v3 + 16LL * ((*(_QWORD *)v3 & 0x80000LL) != 0) + 8LL * ((*(_QWORD *)v3 & 0x200000LL) != 0) + 32) == 0;
LABEL_38:
      if ( !v39 )
        return;
      goto LABEL_6;
    case '.':
      if ( (*(_QWORD *)v3 & 0x400000LL) == 0 )
        goto LABEL_5;
      v49 = 0;
      v39 = *(_DWORD *)(v3 + 16LL * ((*(_QWORD *)v3 & 0x100000LL) != 0) + 8LL * ((*(_QWORD *)v3 & 0x200000LL) != 0) + 48) == 0;
      goto LABEL_38;
    case 'E':
      if ( (*(_DWORD *)v3 & 0x80000) != 0 )
      {
        v49 = 1;
        v39 = *(_DWORD *)(v3 + 56) == 0;
        goto LABEL_38;
      }
      break;
    case 'm':
      if ( (*(_QWORD *)v3 & 0x100000LL) != 0 )
      {
        v49 = 1;
        v39 = *(_DWORD *)(v3 + 72) == 0;
        goto LABEL_38;
      }
      break;
    default:
      return;
  }
  v49 = 1;
LABEL_6:
  v6 = a1->m128i_i64[1];
  v7 = *(_QWORD *)(v6 + 2944);
  if ( *(unsigned int *)(v6 + 2912) <= v7 )
  {
    v8 = sub_14180A0(v6, 1u);
    v6 = a1->m128i_i64[1];
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 2904) + 24 * v7;
  }
  if ( *(_WORD *)(v8 + 16) == 52
    || (*(_BYTE *)(*(_QWORD *)(v6 + 56) + 1LL) & 0x10) != 0
    && ((v9 = *(_QWORD *)(v6 + 2944), v9 >= *(unsigned int *)(v6 + 2912))
      ? (v10 = sub_14180A0(v6, 1u), v6 = a1->m128i_i64[1])
      : (v10 = *(_QWORD *)(v6 + 2904) + 24 * v9),
        (v11 = *(_WORD *)(v10 + 16), v11 == 75) || v11 == 53) )
  {
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0((__int64 *)v6, a1[1].m128i_i32);
    v40 = a1[2].m128i_u32[2];
    LODWORD(v52) = 0;
    sub_1553D50((__int64)a1, v40, &v52, 1, 0);
    sub_1CC6660(a1[6].m128i_i64[0]);
    *a2 = 1;
  }
  else
  {
    v12 = a1[5].m128i_i64[0];
    v53 = _mm_loadu_si128(a1 + 3);
    v13 = a1[5].m128i_i16[4];
    v14 = a1[5].m128i_i16[5];
    v55 = v12;
    v15 = a1[169].m128i_u32[2];
    LODWORD(v12) = a1[2].m128i_i32[0];
    v54 = _mm_loadu_si128(a1 + 4);
    v16 = a1[5].m128i_i16[6];
    v56 = _mm_loadu_si128(a1 + 1);
    v57 = v12;
    sub_1418D30(v6, 0);
    v17 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v17, a1[1].m128i_i32);
    v50 = a1[2].m128i_u32[2];
    if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 8) != 0 )
      v18 = sub_15612F0(a1, 1, &v51);
    else
      v18 = sub_147F1B0((__int64)a1);
    if ( v18 && (unsigned __int8)sub_1555AD0(a1, *a2, v50) )
    {
      v42 = a1[169].m128i_u32[2];
      if ( v15 != v42 )
      {
        if ( v15 >= v42 )
        {
          if ( v15 > a1[169].m128i_u32[3] )
          {
            sub_2237220(&a1[169], &a1[170], v15, 8);
            v42 = a1[169].m128i_u32[2];
          }
          v43 = a1[169].m128i_i64[0];
          v44 = (char *)(v43 + 8 * v42);
          v45 = (char *)(v43 + 8 * v15);
          if ( v44 != v45 )
            memset(v44, 0, 8 * ((unsigned __int64)(v45 - 8 - v44) >> 3) + 8);
        }
        a1[169].m128i_i32[2] = v15;
      }
      sub_1417B70(a1->m128i_i64[1]);
      *a2 = 1;
    }
    else
    {
      sub_1417BC0(a1->m128i_i64[1]);
      v19 = _mm_loadu_si128(&v53);
      v20 = _mm_loadu_si128(&v54);
      v21 = _mm_load_si128(&v56);
      a1[5].m128i_i64[0] = v55;
      v22 = v57;
      a1[3] = v19;
      a1[2].m128i_i32[0] = v22;
      v23 = a1[169].m128i_u32[2];
      a1[4] = v20;
      a1[1] = v21;
      if ( v15 != v23 )
      {
        if ( v15 >= v23 )
        {
          if ( v15 > a1[169].m128i_u32[3] )
          {
            sub_2237220(&a1[169], &a1[170], v15, 8);
            v23 = a1[169].m128i_u32[2];
          }
          v24 = a1[169].m128i_i64[0];
          v25 = (char *)(v24 + 8 * v23);
          v26 = (char *)(v24 + 8 * v15);
          if ( v25 != v26 )
            memset(v25, 0, 8 * ((unsigned __int64)(v26 - 8 - v25) >> 3) + 8);
        }
        a1[169].m128i_i32[2] = v15;
      }
      v27 = a1[2].m128i_u16[1];
      a1[5].m128i_i16[4] = v13;
      a1[5].m128i_i16[5] = v14;
      v28 = a1[1].m128i_i32[0];
      a1[5].m128i_i16[6] = v16;
      v29 = (2 * (v49 & 1)) | ((unsigned __int8)(v27 >> 1) ^ 1) & 1;
      v30 = a1[174].m128i_u64[0];
      v31 = a1[174].m128i_u32[2];
      v32 = *a2 & 0xFFFFFFFFFFFFFFFELL;
      v33 = 24 * v31;
      if ( (_DWORD)v31
        && (v34 = v30 + v33 - 24, v13 == *(_WORD *)(v34 + 14))
        && *(_DWORD *)(v34 + 16) == *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
      {
        if ( v29 >= *(_WORD *)(v34 + 12) )
        {
          *(_QWORD *)v34 = v32;
          v41 = a1[174].m128i_i64[0];
          *(_DWORD *)(v41 + v33 - 16) = v28;
          *(_WORD *)(v41 + 24LL * a1[174].m128i_u32[2] - 12) = v29;
        }
      }
      else
      {
        v53.m128i_i16[2] = v29;
        v35 = (__m128i *)(v30 + v33);
        v36 = a1[174].m128i_u32[3];
        v37 = v31 + 1;
        v53.m128i_i16[3] = v13;
        v38 = (const __m128i *)&v52;
        v52 = v32;
        v53.m128i_i32[0] = v28;
        v53.m128i_i16[4] = v14;
        v53.m128i_i16[5] = v16;
        if ( v37 > v36 )
        {
          v46 = a1 + 174;
          v47 = a1 + 175;
          if ( v30 > (unsigned __int64)&v52 || v35 <= (__m128i *)&v52 )
          {
            sub_2237220(v46, v47, v37, 24);
            v35 = (__m128i *)(a1[174].m128i_i64[0] + 24LL * a1[174].m128i_u32[2]);
          }
          else
          {
            sub_2237220(v46, v47, v37, 24);
            v48 = a1[174].m128i_i64[0];
            v38 = (const __m128i *)((char *)&v52 + v48 - v30);
            v35 = (__m128i *)(v48 + 24LL * a1[174].m128i_u32[2]);
          }
        }
        *v35 = _mm_loadu_si128(v38);
        v35[1].m128i_i64[0] = v38[1].m128i_i64[0];
        ++a1[174].m128i_i32[2];
      }
    }
  }
}
