__m128i *__fastcall sub_A92E70(__m128i *a1, _QWORD *a2, const __m128i *a3)
{
  unsigned __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __m128i v9; // xmm2
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // rax
  __int8 v20; // dl
  __int64 v21; // r13
  __int32 v22; // r14d
  __int64 v23; // rax
  __int32 v24; // edx
  __m128i v25; // xmm3
  char v26; // [rsp+Fh] [rbp-1D9h] BYREF
  __m128i v27; // [rsp+10h] [rbp-1D8h] BYREF
  __int64 v28; // [rsp+20h] [rbp-1C8h]
  void *ptr; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-1B0h]
  __int64 v31; // [rsp+40h] [rbp-1A8h] BYREF

  switch ( a3->m128i_i32[0] & 0x7FFFFFFF )
  {
    case 0:
      v10 = a3[1].m128i_i64[0];
      *a1 = _mm_loadu_si128(a3);
      a1[1].m128i_i64[0] = v10;
      break;
    case 1:
      v11 = *(_QWORD *)&byte_8[a3->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL];
      sub_EF9510(
        a1,
        v11 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v11 | a3->m128i_i8[8]) & 7,
        0,
        (unsigned __int8)BYTE3(a3->m128i_i64[0]) >> 7);
      break;
    case 2:
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3[1].m128i_i64[0] + 32LL))(a3[1].m128i_i64[0]);
      v13 = *(_QWORD *)&byte_8[a3->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL];
      sub_EF9550(
        a1,
        v12,
        v13 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v13 | (unsigned __int8)a3->m128i_i64[1]) & 7,
        (unsigned __int8)BYTE3(a3->m128i_i64[0]) >> 7);
      break;
    case 3:
      v14 = *(_QWORD *)&byte_8[a3->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL];
      sub_EF9510(
        a1,
        v14 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v14 | a3->m128i_i8[8]) & 7,
        1,
        (unsigned __int8)BYTE3(a3->m128i_i64[0]) >> 7);
      break;
    case 4:
      v15 = a3[1].m128i_i64[0];
      v16 = *(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL];
      *a1 = _mm_loadu_si128(a3);
      a1[1].m128i_i64[0] = v16 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v16 | (unsigned __int8)v15) & 7;
      break;
    case 5:
      v17 = *(_QWORD *)&byte_8[a3[1].m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL];
      sub_EFB190(
        a1,
        a2,
        v17 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v17 | a3[1].m128i_i8[0]) & 7,
        a3->m128i_i64[1],
        (unsigned int)a3->m128i_i64[0] >> 31);
      break;
    case 6:
      v18 = a3->m128i_i64[0];
      sub_EFED50(&ptr, a3->m128i_i64[1]);
      v19 = sub_A92560(a2, (__int64)ptr, 0);
      v20 = a1->m128i_i8[3];
      a1->m128i_i64[1] = v19;
      a1->m128i_i8[3] = v20 & 0x7F | (BYTE3(v18) >> 7 << 7);
      a1->m128i_i64[0] = a1->m128i_i64[0] & 0x80000000LL | 6;
      break;
    case 7:
      v21 = a3->m128i_i64[0];
      v22 = sub_EF98C0(a3);
      sub_EFED50(&ptr, a3->m128i_i64[1]);
      v23 = sub_A92560(a2, (__int64)ptr, 0);
      v24 = a1->m128i_i32[0];
      a1->m128i_i32[1] = v22;
      a1->m128i_i64[1] = v23;
      a1->m128i_i32[0] = v24 & 0x80000000 | 7;
      a1->m128i_i8[3] = BYTE3(v21) >> 7 << 7;
      break;
    case 8:
      v5 = (unsigned __int64)a3->m128i_i64[0] >> 24;
      a1->m128i_i64[1] = a3->m128i_i64[1];
      a1->m128i_i8[3] = v5 & 0x80 | a1->m128i_i8[3] & 0x7F;
      a1->m128i_i64[0] = a1->m128i_i64[0] & 0xFFFFFFFE80000000LL | 0x100000008LL;
      break;
    case 9:
      v7 = a3->m128i_u32[1];
      v8 = a3->m128i_i64[1];
      v26 = 0;
      sub_A93410(&ptr, a2, v8, v7, &v26);
      if ( v26 )
      {
        sub_EFB0B0(&v27, a2, ptr, v30);
        v27.m128i_i8[3] = BYTE3(a3->m128i_i64[0]) & 0x80 | v27.m128i_i8[3] & 0x7F;
        v25 = _mm_load_si128(&v27);
        a1[1].m128i_i64[0] = v28;
        *a1 = v25;
      }
      else
      {
        v9 = _mm_loadu_si128(a3);
        a1[1].m128i_i64[0] = a3[1].m128i_i64[0];
        *a1 = v9;
      }
      if ( ptr != &v31 )
        free(ptr);
      break;
  }
  return a1;
}

