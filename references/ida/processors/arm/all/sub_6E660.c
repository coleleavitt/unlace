__int64 __fastcall sub_6E660(const __m128i *a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r12
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // al
  bool v7; // r14
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al
  bool v10; // dl
  bool v11; // cc
  bool v12; // al
  __int8 v13; // al
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rdx
  __m128i *v17; // rax

  if ( (a1[3].m128i_i8[0] & 0xF) != 0xE )
    return 0;
  v3 = a1[54].m128i_i64[0];
  if ( !*(_BYTE *)(v3 + 1) )
  {
    a1[49].m128i_i8[8] = 1;
    return 0;
  }
  v1 = (*(__int64 (__fastcall **)(const __m128i *, __int64 *, __int64))(a1->m128i_i64[0] + 8))(
         a1,
         &a1[3].m128i_i64[1],
         a1[54].m128i_i64[0]);
  if ( !(_BYTE)v1 )
    return 0;
  v5 = *(_BYTE *)(v3 + 5);
  v6 = a1[3].m128i_u8[13];
  v7 = v5 <= 0xF9u;
  if ( v6 <= 0xF9u )
  {
    if ( v6 >= v5 || v5 > 0xF9u || a1->m128i_i8[8] && v6 == 2 )
      goto LABEL_14;
  }
  else if ( v6 >= v5 && v5 > 0xF9u )
  {
    goto LABEL_14;
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 32);
  if ( v8 == sub_6ACC0 )
    return 0;
  v9 = v8((__int64)a1, (__int64)&a1[3].m128i_i64[1]);
  v10 = v7 || v9 < v5;
  v11 = v9 <= 0xF9u;
  v12 = v7 && v9 < v5;
  if ( !v11 )
    v12 = v10;
  if ( v12 )
    return 0;
LABEL_14:
  if ( a1[2].m128i_i16[4] != 14 || a1[6].m128i_i8[1] != 1 )
    return 0;
  v13 = a1[8].m128i_i8[9];
  if ( v13 == 1 )
  {
    if ( a1[8].m128i_i16[7] != 15 )
      return 0;
    v17 = (__m128i *)a1[54].m128i_i64[0];
    *v17 = _mm_loadu_si128(a1 + 6);
    v17[1] = _mm_loadu_si128(a1 + 7);
    v17[2].m128i_i32[0] = a1[8].m128i_i32[0];
  }
  else if ( a1[6].m128i_i16[3] != 15 || v13 )
  {
    return 0;
  }
  v14 = a1[2].m128i_i64[0];
  v15 = v14 + a1[56].m128i_i32[0];
  if ( *(_DWORD *)(a1[55].m128i_i64[1] + 212) && (unsigned __int64)(get_sreg(v14, 20) - 1) > 0xFFFFFFFFFFFFFFFDLL )
    v16 = 8;
  else
    v16 = 4;
  *(_QWORD *)(a1[23].m128i_i64[1] + 8) = v16 + v15;
  return v1;
}
