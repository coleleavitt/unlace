__int64 __fastcall sub_B64F10(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // ebx
  char v8; // al
  int v9; // r12d
  int v10; // ebp
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  int v16; // ebp
  unsigned int v17; // ebx
  char v18; // al
  char v19; // dl
  const __m128i *v20; // rbp
  const __m128i *i; // r14
  unsigned __int64 v22; // r12
  _QWORD *v23; // rdi
  __int64 v24; // rdx
  char *v25; // r12
  __int64 v26; // rcx
  __int32 *v27; // rax
  char *v28; // rbp
  char v29; // al
  char v30; // si
  char v31; // cl
  char v32; // dl
  char v33; // al
  int v34; // esi
  int v35; // ecx
  int v36; // edx
  int v38; // eax
  __int64 v39; // rcx
  __m128i v40; // [rsp+0h] [rbp-48h] BYREF
  __int64 v41; // [rsp+10h] [rbp-38h]

  v40 = _mm_loadu_si128(a1 + 1);
  v7 = (_BYTE)a2 != 0 ? 0xC : 0;
  if ( (_BYTE)a3 )
    v7 = (_BYTE)a2 == 0 ? 2 : 14;
  if ( (_BYTE)a4 )
    v7 |= 1u;
  v41 = a1[2].m128i_i64[0];
  v8 = ((__int64 (__fastcall *)(__m128i *, __int64, __int64, __int64, __int64, __int64))sub_B85980)(
         &v40,
         a2,
         a3,
         a4,
         a5,
         a6);
  v9 = v8 == 0 ? 1 : 3;
  v10 = -(v8 == 0);
  v11 = sub_B858E0(&v40);
  v15 = a1[2].m128i_i64[1];
  v16 = ~(_BYTE)v10 & 2;
  if ( v11 )
    v16 = v9;
  v17 = v16 | v7;
  if ( v15 )
  {
    v18 = sub_E91240(v15, a2, v12, v13, v14);
    v19 = v18 & 1;
    if ( (v18 & 8) != 0 )
    {
      if ( (v18 & 2) != 0 )
      {
        v17 |= v18 & 1 | 0x10 | 2;
        goto LABEL_11;
      }
      v19 |= 0x10u;
      v17 |= 0x10u;
    }
    else if ( (v18 & 2) != 0 )
    {
      v19 |= 2u;
      v38 = 2;
      goto LABEL_46;
    }
    v38 = 0;
LABEL_46:
    v17 |= v38 | v19 & 1;
  }
LABEL_11:
  v20 = a1 + 5;
  if ( (a1->m128i_i16[0] & 0x1FF) == 0x18 )
    v20 = a1 + 4;
  for ( i = (const __m128i *)((char *)v20 + 8 * a1->m128i_u32[1]); i != v20; v17 |= 0xEu )
  {
    while ( 1 )
    {
      v22 = v20->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
      v23 = (_QWORD *)(*(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v22 + 16) & 4) != 0 )
        v23 = (_QWORD *)*v23;
      if ( (unsigned __int8)sub_B8E180(v23) || (*(_BYTE *)(v22 + 28) & 0x7F) == 0x1C )
        break;
      v20 = (const __m128i *)((char *)v20 + 8);
      if ( i == v20 )
        goto LABEL_21;
    }
    v20 = (const __m128i *)((char *)v20 + 8);
  }
LABEL_21:
  v24 = a1->m128i_i64[0];
  if ( (a1->m128i_i64[0] & 0x80000) != 0 )
  {
    v39 = 2LL * a1->m128i_u32[1];
    if ( (a1->m128i_i16[0] & 0x1FF) == 0x18 )
    {
      if ( a1[4].m128i_i32[v39] )
      {
        v25 = &a1[((a1->m128i_i64[0] & 0x80000) != 0) + 4].m128i_i8[v39 * 4];
        goto LABEL_23;
      }
    }
    else if ( a1[5].m128i_i32[v39] )
    {
      v25 = &a1[((a1->m128i_i64[0] & 0x80000) != 0) + 5].m128i_i8[v39 * 4];
      goto LABEL_23;
    }
  }
  v25 = nullptr;
LABEL_23:
  if ( (v24 & 0x80000) == 0 )
    return v17;
  v26 = 2LL * a1->m128i_u32[1];
  v27 = &a1[5].m128i_i32[v26];
  if ( (a1->m128i_i16[0] & 0x1FF) == 0x18 )
    v27 = &a1[4].m128i_i32[v26];
  if ( !*v27 )
    return v17;
  if ( (v24 & 0x80000) == 0 )
    BUG();
  v28 = &v25[32 * v27[3]];
  if ( v28 == v25 )
    return v17;
  do
  {
    while ( 1 )
    {
      v29 = sub_F1D2B0(v25);
      v30 = v29 & 8;
      if ( (v29 & 8) != 0 )
        v30 = 16;
      v31 = v29 & 4;
      if ( (v29 & 4) != 0 )
        v31 = 12;
      v32 = v29 & 2;
      if ( (v29 & 2) != 0 )
        v32 = 2;
      v33 = v32 | v31 | v30 | v29 & 1;
      v34 = v33 & 0x10;
      if ( (v33 & 0x10) != 0 )
        v34 = 16;
      v35 = v33 & 8;
      if ( (v33 & 8) != 0 )
        v35 = 8;
      v36 = v33 & 4;
      if ( (v33 & 4) != 0 )
        v36 = 4;
      if ( (v33 & 2) != 0 )
        break;
      v25 += 32;
      v17 |= v36 | v35 | v34 | v33 & 1;
      if ( v28 == v25 )
        return v17;
    }
    v25 += 32;
    v17 |= v36 | v35 | v34 | v33 & 1 | 2;
  }
  while ( v28 != v25 );
  return v17;
}
