__int64 __fastcall sub_6E0C0(const __m128i *a1)
{
  __int64 v1; // r14
  __int64 v2; // rbp
  __int64 v4; // r12
  const __m128i *v5; // rbx
  __int8 *v6; // r13
  unsigned int v7; // eax
  __int64 v8; // r12
  unsigned __int8 v9; // al
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  unsigned __int8 v11; // al
  char v12; // dl
  bool v13; // cc
  char v14; // al
  __int32 v15; // eax
  char v16; // dl
  __int16 v17; // cx
  int *v18; // rax
  int v19; // ecx
  int v20; // esi
  unsigned int v21; // edx
  __int16 v22; // ax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int8 *v26; // r12
  _BYTE *v27; // rbp
  unsigned __int8 v28; // bp
  unsigned __int8 v29; // al
  bool v30; // r13
  __int64 (__fastcall *v31)(__int64, __int64); // rax
  unsigned __int8 v32; // al
  bool v33; // dl
  bool v34; // al
  __int64 v35; // rbp
  unsigned __int8 v36; // bp
  unsigned __int8 v37; // al
  bool v38; // r13
  __int64 (__fastcall *v39)(__int64, __int64); // rax
  unsigned __int8 v40; // al
  bool v41; // dl
  bool v42; // al
  __m128i *v43; // rax
  unsigned __int8 v44; // bp
  unsigned __int8 v45; // al
  bool v46; // r14
  __int64 (__fastcall *v47)(__int64, __int64); // rax
  unsigned __int8 v48; // al
  bool v49; // dl
  bool v50; // al
  __m128i *v51; // rax
  __int8 v52; // dl
  __int16 v53; // cx
  __int8 v54; // dl
  __int16 v55; // cx
  __int64 v56; // [rsp-20h] [rbp-48h]
  __int64 v57; // [rsp-18h] [rbp-40h]

  if ( (a1[3].m128i_i8[0] & 0xF) != 0xE )
    goto LABEL_2;
  v4 = a1[54].m128i_i64[0];
  v5 = a1;
  if ( !*(_BYTE *)(v4 + 1) )
  {
    a1[49].m128i_i8[8] = 1;
LABEL_2:
    LODWORD(v2) = 0;
    return (unsigned int)v2;
  }
  v6 = &a1[3].m128i_i8[8];
  v7 = (*(__int64 (__fastcall **)(const __m128i *, __int64 *, __int64))(a1->m128i_i64[0] + 8))(
         a1,
         &a1[3].m128i_i64[1],
         a1[54].m128i_i64[0]);
  v2 = v7;
  if ( !(_BYTE)v7 )
    goto LABEL_2;
  v8 = *(unsigned __int8 *)(v4 + 5);
  v9 = a1[3].m128i_u8[13];
  LOBYTE(v1) = (unsigned __int8)v8 <= 0xF9u;
  if ( v9 <= 0xF9u )
  {
    if ( (unsigned __int8)v8 > 0xF9u || v9 >= (unsigned __int8)v8 || a1->m128i_i8[8] && v9 == 2 )
      goto LABEL_14;
  }
  else if ( (unsigned __int8)v8 > 0xF9u && v9 >= (unsigned __int8)v8 )
  {
    goto LABEL_14;
  }
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 32);
  if ( v10 == sub_6ACC0 )
    goto LABEL_2;
  v11 = v10((__int64)a1, (__int64)&a1[3].m128i_i64[1]);
  v12 = v1 | (v11 < (unsigned __int8)v8);
  v13 = v11 <= 0xF9u;
  v14 = v1 & (v11 < (unsigned __int8)v8);
  if ( !v13 )
    v14 = v12;
  if ( v14 )
    goto LABEL_2;
LABEL_14:
  if ( a1[2].m128i_i16[4] != 30 || a1[6].m128i_i8[1] != 4 )
    goto LABEL_2;
  v15 = a1[2].m128i_i32[3];
  if ( (v15 & 0x1800) != 0 )
  {
    a1[56].m128i_i32[1] = 2;
  }
  else if ( (v15 & 0x402) != 0 )
  {
    a1[56].m128i_i32[1] = 1;
    a1[32].m128i_i8[4] = 1;
  }
  else
  {
    a1[56].m128i_i32[1] = 4;
  }
  if ( (a1[3].m128i_i8[2] & 4) != 0
    || (a1 = (const __m128i *)(&dword_0 + 3), v22 = getinf(3), v16 = 2, (v22 & 0x1006) == 0x1002) )
  {
    v16 = 7;
  }
  v17 = v5[6].m128i_i16[3];
  *(_BYTE *)(v5[54].m128i_i64[0] + 1) = 1;
  *(_WORD *)(v5[54].m128i_i64[0] + 6) = v17;
  *(_BYTE *)(v5[54].m128i_i64[0] + 5) = v16;
  v18 = (int *)v5[23].m128i_i64[1];
  v19 = v5[56].m128i_i32[1];
  v20 = *v18;
  v21 = *v18 & 0xFFFFFBFB;
  *v18 = v21;
  if ( v19 == 4 )
  {
    *v18 = v21 | 4;
    goto LABEL_24;
  }
  if ( v19 > 4 )
  {
    if ( v19 != 8 )
      goto LABEL_40;
    *v18 = v20 | 0x404;
LABEL_24:
    v5[56].m128i_i32[0] = v5[7].m128i_i64[0];
    if ( (v5[2].m128i_i8[13] & 0xC) != 0 )
      *(_DWORD *)v5[23].m128i_i64[1] |= 0x2000u;
    return (unsigned int)v2;
  }
  if ( v19 == 1 )
  {
    BYTE1(v21) |= 4u;
    *v18 = v21;
    goto LABEL_24;
  }
  if ( v19 == 2 )
    goto LABEL_24;
LABEL_40:
  sub_6B6A0();
  if ( (a1[3].m128i_i8[0] & 0xF) != 0xE )
    return 0;
  v57 = v8;
  v26 = &a1[3].m128i_i8[8];
  v56 = v2;
  v27 = (_BYTE *)a1[54].m128i_i64[0];
  if ( !v27[81] )
  {
    a1[49].m128i_i8[8] = 1;
    goto LABEL_44;
  }
  if ( (*(unsigned __int8 (__fastcall **)(const __m128i *, __int64 *, _BYTE *, __int64, __int64, __int64, const __m128i *, __int64, __int64, __int8 *, __int64))(a1->m128i_i64[0] + 8))(
         a1,
         &a1[3].m128i_i64[1],
         v27 + 80,
         v23,
         v24,
         v25,
         v5,
         v56,
         v57,
         v6,
         v1) )
  {
    v28 = v27[85];
    v29 = a1[3].m128i_u8[13];
    v30 = v28 <= 0xF9u;
    if ( v29 <= 0xF9u )
    {
      if ( v28 > 0xF9u || v29 >= v28 || a1->m128i_i8[8] && v29 == 2 )
        goto LABEL_55;
    }
    else if ( v28 > 0xF9u && v29 >= v28 )
    {
      goto LABEL_55;
    }
    v31 = *(__int64 (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 32);
    if ( v31 == sub_6ACC0 )
      goto LABEL_57;
    v32 = v31((__int64)a1, (__int64)&a1[3].m128i_i64[1]);
    v33 = v30 || v32 < v28;
    v13 = v32 <= 0xF9u;
    v34 = v30 && v32 < v28;
    if ( !v13 )
      v34 = v33;
    if ( v34 )
      goto LABEL_57;
LABEL_55:
    v35 = a1[54].m128i_i64[0];
    if ( !*(_BYTE *)(v35 + 1) )
    {
      a1[49].m128i_i8[8] = 1;
      goto LABEL_57;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(const __m128i *, __int64 *, __int64))(a1->m128i_i64[0] + 8))(
            a1,
            &a1[8].m128i_i64[1],
            a1[54].m128i_i64[0]) )
      goto LABEL_57;
    v44 = *(_BYTE *)(v35 + 5);
    v45 = a1[8].m128i_u8[13];
    v46 = v44 <= 0xF9u;
    if ( v45 > 0xF9u )
    {
      if ( v44 > 0xF9u && v45 >= v44 )
        goto LABEL_93;
    }
    else if ( v44 > 0xF9u || v45 >= v44 || a1->m128i_i8[8] && v45 == 2 )
    {
      goto LABEL_93;
    }
    v47 = *(__int64 (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 32);
    if ( v47 == sub_6ACC0 )
      goto LABEL_57;
    v48 = v47((__int64)a1, (__int64)&a1[8].m128i_i64[1]);
    v49 = v46 || v48 < v44;
    v13 = v48 <= 0xF9u;
    v50 = v46 && v48 < v44;
    if ( !v13 )
      v50 = v49;
    if ( v50 )
      goto LABEL_57;
LABEL_93:
    if ( a1[2].m128i_i16[4] == 14 )
    {
      v51 = (__m128i *)a1[54].m128i_i64[0];
      if ( a1[6].m128i_i8[1] != 8 || a1[8].m128i_i8[1] || a1[6].m128i_i64[1] )
      {
        v51[5] = _mm_loadu_si128(a1 + 6);
        v51[6] = _mm_loadu_si128(a1 + 7);
        v51[7].m128i_i32[0] = a1[8].m128i_i32[0];
      }
      else
      {
        v52 = a1[6].m128i_i8[5];
        v53 = a1[6].m128i_i16[3];
        v51[5].m128i_i8[1] = 1;
        *(_WORD *)(a1[54].m128i_i64[0] + 86) = v53;
        *(_BYTE *)(a1[54].m128i_i64[0] + 85) = v52;
      }
      return 1;
    }
  }
LABEL_57:
  if ( (a1[3].m128i_i8[0] & 0xF) != 0xE )
    return 0;
  v27 = (_BYTE *)a1[54].m128i_i64[0];
LABEL_44:
  if ( !v27[1] )
  {
    a1[49].m128i_i8[8] = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(const __m128i *, __int8 *, _BYTE *))(a1->m128i_i64[0] + 8))(a1, v26, v27) )
    return 0;
  v36 = v27[5];
  v37 = a1[3].m128i_u8[13];
  v38 = v36 <= 0xF9u;
  if ( v37 <= 0xF9u )
  {
    if ( v36 <= 0xF9u && v37 < v36 && (!a1->m128i_i8[8] || v37 != 2) )
      goto LABEL_63;
  }
  else if ( v36 <= 0xF9u || v37 < v36 )
  {
LABEL_63:
    v39 = *(__int64 (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 32);
    if ( v39 == sub_6ACC0 )
      return 0;
    v40 = v39((__int64)a1, (__int64)v26);
    v41 = v38 || v40 < v36;
    v13 = v40 <= 0xF9u;
    v42 = v40 < v36 && v38;
    if ( !v13 )
      v42 = v41;
    if ( v42 )
      return 0;
  }
  if ( a1[2].m128i_i16[4] != 6 || a1[8].m128i_i8[9] != 5 || a1[9].m128i_i64[0] != 1 )
    return 0;
  v43 = (__m128i *)a1[54].m128i_i64[0];
  if ( a1[6].m128i_i8[1] != 8 || a1[8].m128i_i8[1] || a1[6].m128i_i64[1] )
  {
    *v43 = _mm_loadu_si128(a1 + 6);
    v43[1] = _mm_loadu_si128(a1 + 7);
    v43[2].m128i_i32[0] = a1[8].m128i_i32[0];
  }
  else
  {
    v54 = a1[6].m128i_i8[5];
    v55 = a1[6].m128i_i16[3];
    v43->m128i_i8[1] = 1;
    *(_WORD *)(a1[54].m128i_i64[0] + 6) = v55;
    *(_BYTE *)(a1[54].m128i_i64[0] + 5) = v54;
  }
  return 1;
}
