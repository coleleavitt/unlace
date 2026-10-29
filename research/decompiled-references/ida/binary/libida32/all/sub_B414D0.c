__int64 __fastcall sub_B414D0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  char v8; // al
  unsigned int v9; // r12d
  int v10; // ebp
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  unsigned int v16; // ebp
  char v17; // al
  char v18; // si
  char v19; // cl
  char v20; // dl
  char v21; // al
  int v22; // edi
  int v23; // esi
  int v24; // ecx
  int v25; // edx
  __int64 v26; // rbp
  __int64 v27; // rbx
  char v28; // al
  char v29; // si
  char v30; // cl
  char v31; // dl
  char v32; // al
  int v33; // esi
  int v34; // ecx
  int v35; // edx
  __m128i v37; // [rsp+0h] [rbp-48h] BYREF
  __int64 v38; // [rsp+10h] [rbp-38h]

  v7 = a1[3].m128i_i64[0];
  v37 = _mm_loadu_si128(a1 + 2);
  v38 = v7;
  v8 = ((__int64 (__fastcall *)(__m128i *, __int64, __int64, __int64, __int64, __int64))sub_B61C40)(
         &v37,
         a2,
         a3,
         a4,
         a5,
         a6);
  v9 = v8 == 0 ? 12 : 14;
  v10 = -(v8 == 0);
  v11 = sub_B61BA0(&v37);
  v15 = a1[1].m128i_i64[0];
  v16 = (v10 & 0xFFFFFFFE) + 15;
  if ( v11 )
    v9 = v16;
  if ( v15 )
  {
    v17 = sub_E6D500(v15, a2, v12, v13, v14);
    v18 = v17 & 8;
    if ( (v17 & 8) != 0 )
      v18 = 16;
    v19 = v17 & 4;
    if ( (v17 & 4) != 0 )
      v19 = 12;
    v20 = v17 & 2;
    if ( (v17 & 2) != 0 )
      v20 = 2;
    v21 = v20 | v19 | v18 | v17 & 1;
    v22 = v21 & 0x10;
    if ( (v21 & 0x10) != 0 )
      v22 = 16;
    v23 = v21 & 8;
    if ( (v21 & 8) != 0 )
      v23 = 8;
    v24 = v21 & 4;
    if ( (v21 & 4) != 0 )
      v24 = 4;
    v25 = v21 & 2;
    if ( (v21 & 2) != 0 )
      v25 = 2;
    v9 |= v25 | v24 | v23 | v22 | v21 & 1;
  }
  if ( (a1->m128i_i32[0] & 0x80000) == 0 )
    return v9;
  if ( !a1[3].m128i_i32[2] )
    return v9;
  v26 = (__int64)&a1[((a1->m128i_i32[0] & 0x80000) != 0) + 3].m128i_i64[1];
  v27 = v26 + 32LL * a1[4].m128i_u32[1];
  if ( v27 == v26 )
    return v9;
  do
  {
    while ( 1 )
    {
      v28 = sub_EF9570(v26);
      v29 = v28 & 8;
      if ( (v28 & 8) != 0 )
        v29 = 16;
      v30 = v28 & 4;
      if ( (v28 & 4) != 0 )
        v30 = 12;
      v31 = v28 & 2;
      if ( (v28 & 2) != 0 )
        v31 = 2;
      v32 = v31 | v30 | v29 | v28 & 1;
      v33 = v32 & 0x10;
      if ( (v32 & 0x10) != 0 )
        v33 = 16;
      v34 = v32 & 8;
      if ( (v32 & 8) != 0 )
        v34 = 8;
      v35 = v32 & 4;
      if ( (v32 & 4) != 0 )
        v35 = 4;
      if ( (v32 & 2) != 0 )
        break;
      v26 += 32;
      v9 |= v35 | v34 | v33 | v32 & 1;
      if ( v27 == v26 )
        return v9;
    }
    v26 += 32;
    v9 |= v35 | v34 | v33 | v32 & 1 | 2;
  }
  while ( v27 != v26 );
  return v9;
}

