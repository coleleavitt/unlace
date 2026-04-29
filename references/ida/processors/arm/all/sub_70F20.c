__int64 __fastcall sub_70F20(const __m128i *a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r12
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // al
  bool v6; // r14
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned __int8 v8; // al
  bool v9; // dl
  bool v10; // cc
  bool v11; // al
  __int8 v12; // al
  int v13; // eax
  __int64 v14; // rdx
  __int8 v15; // cl
  __m128i *v16; // rax
  __int8 v17; // dl
  __int16 v18; // cx

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
  v4 = *(_BYTE *)(v3 + 5);
  v5 = a1[3].m128i_u8[13];
  v6 = v4 <= 0xF9u;
  if ( v5 > 0xF9u )
  {
    if ( v5 >= v4 && v4 > 0xF9u )
      goto LABEL_16;
  }
  else if ( v5 >= v4 || v4 > 0xF9u || a1->m128i_i8[8] && v5 == 2 )
  {
    goto LABEL_16;
  }
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 32);
  if ( v7 == sub_6ACC0 )
    return 0;
  v8 = v7((__int64)a1, (__int64)&a1[3].m128i_i64[1]);
  v9 = v6 || v8 < v4;
  v10 = v8 <= 0xF9u;
  v11 = v8 < v4 && v6;
  if ( !v10 )
    v11 = v9;
  if ( v11 )
    return 0;
LABEL_16:
  if ( a1[2].m128i_i16[4] != 12 )
    return 0;
  v12 = a1[6].m128i_i8[1];
  if ( v12 == 5 )
  {
    if ( !a1[8].m128i_i8[9] )
    {
      *(_QWORD *)(a1[23].m128i_i64[1] + 16) += a1[6].m128i_i64[1];
      return v1;
    }
    return 0;
  }
  if ( v12 != 1 || a1[8].m128i_i8[9] != 5 )
    return 0;
  *(_QWORD *)(a1[23].m128i_i64[1] + 16) += a1[9].m128i_i64[0];
  v13 = a1[6].m128i_u16[3];
  if ( (_WORD)v13 != a1[3].m128i_i16[7] )
  {
    v14 = a1[23].m128i_i64[1];
    if ( (*(_BYTE *)(v14 + 2) & 4) == 0 )
    {
      v15 = a1[6].m128i_i8[5];
      *(_DWORD *)(v14 + 64) = v13;
      *(_BYTE *)(v14 + 68) = v15;
    }
    v16 = (__m128i *)a1[54].m128i_i64[0];
    if ( a1[6].m128i_i8[1] != 8 || a1[8].m128i_i8[1] || a1[6].m128i_i64[1] )
    {
      *v16 = _mm_loadu_si128(a1 + 6);
      v16[1] = _mm_loadu_si128(a1 + 7);
      v16[2].m128i_i32[0] = a1[8].m128i_i32[0];
    }
    else
    {
      v17 = a1[6].m128i_i8[5];
      v18 = a1[6].m128i_i16[3];
      v16->m128i_i8[1] = 1;
      *(_WORD *)(a1[54].m128i_i64[0] + 6) = v18;
      *(_BYTE *)(a1[54].m128i_i64[0] + 5) = v17;
    }
  }
  return v1;
}
