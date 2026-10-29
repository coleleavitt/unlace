__int64 __fastcall sub_76CC10(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  int v8; // ebx
  int v9; // r12d
  int v10; // eax
  __int64 v11; // rdi
  unsigned int v12; // ebx
  unsigned __int16 v13; // ax
  const __m128i *v14; // rbp
  const __m128i *i; // r14
  unsigned __int64 v16; // r12
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int32 *v19; // rdx
  __int64 v20; // r12
  __int64 j; // rbp
  char v22; // al
  char v23; // dl
  unsigned __int16 v24; // ax
  __m128i v26; // [rsp+0h] [rbp-58h] BYREF
  __int64 v27; // [rsp+10h] [rbp-48h]

  LOBYTE(a2) = -(char)a2;
  v7 = a1[2].m128i_i64[0];
  v26 = _mm_loadu_si128(a1 + 1);
  v27 = v7;
  v8 = ((_BYTE)a2 != 0 ? 0xC : 0) | a4 | (2 * a3);
  v9 = ((__int64 (__fastcall *)(__m128i *, __int64, __int64, __int64, __int64, __int64))sub_7925F0)(
         &v26,
         a2,
         a3,
         a4,
         a5,
         a6);
  v10 = sub_7925A0(&v26);
  v11 = a1[2].m128i_i64[1];
  v12 = (2 * v9) | v10 | v8;
  if ( v11 )
  {
    v13 = sub_A7AF30(v11);
    v12 |= (2 * ((v13 >> 1) & 1)) | v13 & 1 | (2 * (_BYTE)v13) & 0x10;
  }
  v14 = a1 + 4;
  if ( (a1->m128i_i16[0] & 0x1FF) != 0x19 )
    v14 = a1 + 5;
  for ( i = (const __m128i *)((char *)v14 + 8 * a1->m128i_u32[1]); i != v14; v12 |= 0xEu )
  {
    while ( 1 )
    {
      v16 = v14->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
      v17 = (_QWORD *)(*(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v16 + 16) & 4) != 0 )
        v17 = (_QWORD *)*v17;
      if ( (unsigned __int8)sub_79B8A0(v17) || (*(_BYTE *)(v16 + 28) & 0x7F) == 0x1A )
        break;
      v14 = (const __m128i *)((char *)v14 + 8);
      if ( i == v14 )
        goto LABEL_13;
    }
    v14 = (const __m128i *)((char *)v14 + 8);
  }
LABEL_13:
  if ( (a1->m128i_i8[2] & 8) != 0 )
  {
    v18 = 8LL * a1->m128i_u32[1];
    if ( (a1->m128i_i16[0] & 0x1FF) == 0x19 )
    {
      v19 = &a1[4].m128i_i32[(unsigned __int64)v18 / 4];
      v20 = (__int64)&a1[5].m128i_i64[(unsigned __int64)v18 / 8];
      if ( !*v19 )
        return v12;
    }
    else
    {
      v19 = &a1[5].m128i_i32[(unsigned __int64)v18 / 4];
      v20 = (__int64)&a1[6].m128i_i64[(unsigned __int64)v18 / 8];
      if ( !*v19 )
        return v12;
    }
    for ( j = v20 + 32LL * (unsigned int)v19[3]; j != v20; v12 |= (2 * ((v24 >> 1) & 1)) | v24 & 0x11 | v23 & 0xC )
    {
      v22 = sub_AFD280(v20);
      v23 = -((v22 & 4) != 0);
      v20 += 32;
      v24 = (2 * v22) & 0x10 | v22 & 3;
    }
  }
  return v12;
}

