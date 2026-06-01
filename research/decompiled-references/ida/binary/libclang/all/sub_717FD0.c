__m128i *__fastcall sub_717FD0(__m128i *a1, _QWORD *a2, const __m128i *a3)
{
  __m128i v5; // xmm0
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int8 v13; // r13
  int v14; // r13d
  void *v15; // rax
  __int64 v16; // rsi
  int v17; // eax
  __int32 v18; // eax
  char v19; // [rsp+Fh] [rbp-1D9h] BYREF
  __m128i v20; // [rsp+10h] [rbp-1D8h] BYREF
  __int64 v21; // [rsp+20h] [rbp-1C8h]
  void *ptr; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-1B0h]
  char v24; // [rsp+40h] [rbp-1A8h] BYREF

  switch ( a3->m128i_i32[0] & 0x7FFFFFFF )
  {
    case 0:
    case 8:
      v5 = _mm_loadu_si128(a3);
      a1[1].m128i_i64[0] = a3[1].m128i_i64[0];
      *a1 = v5;
      break;
    case 1:
      sub_AFCC70(
        a1,
        *(_QWORD *)&byte_8[a3->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL] | a3->m128i_i64[1] & 7,
        0,
        (unsigned __int8)a3->m128i_i8[3] >> 7);
      break;
    case 2:
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3[1].m128i_i64[0] + 32LL))(a3[1].m128i_i64[0]);
      sub_AFCC90(
        a1,
        v9,
        *(_QWORD *)&byte_8[a3->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL] | a3->m128i_i64[1] & 7,
        (unsigned __int8)a3->m128i_i8[3] >> 7);
      break;
    case 3:
      sub_AFCC70(
        a1,
        *(_QWORD *)&byte_8[a3->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL] | a3->m128i_i64[1] & 7,
        1,
        (unsigned __int8)a3->m128i_i8[3] >> 7);
      break;
    case 4:
      v10 = _mm_loadu_si128(a3);
      v11 = a3[1].m128i_i64[0] & 7;
      v12 = *(_QWORD *)&byte_8[a3[1].m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL];
      *a1 = v10;
      a1[1].m128i_i64[0] = v12 | v11;
      break;
    case 5:
      sub_AFCEB0(
        a1,
        a2,
        *(_QWORD *)&byte_8[a3[1].m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL] | a3[1].m128i_i64[0] & 7,
        a3->m128i_i64[1],
        (unsigned int)a3->m128i_i8[3] >> 31);
      break;
    case 6:
      v13 = a3->m128i_u8[3];
      sub_B03900(&ptr, a3->m128i_i64[1]);
      a1->m128i_i64[1] = (__int64)sub_717B10(a2, ptr, 0);
      a1->m128i_i64[0] = ((unsigned __int64)(v13 >> 7) << 31) | 6;
      break;
    case 7:
      v14 = (unsigned __int8)a3->m128i_i8[3] >> 7;
      v15 = (void *)sub_AFD9F0(a3);
      v16 = a3->m128i_i64[1];
      ptr = v15;
      sub_B03900(&v20, v16);
      a1->m128i_i64[1] = (__int64)sub_717B10(a2, (void *)v20.m128i_i64[0], 0);
      v17 = (int)ptr;
      a1->m128i_i32[0] = (v14 << 31) | 7;
      v18 = v17 + 1;
      if ( !BYTE4(ptr) )
        v18 = 0;
      a1->m128i_i32[1] = v18;
      break;
    case 9:
      v7 = a3->m128i_u32[1];
      v19 = 0;
      sub_718270(&ptr, a2, a3->m128i_i64[1], v7, &v19);
      if ( v19 )
      {
        sub_AFD1A0(&v20, a2, ptr, v23);
        v20.m128i_i8[3] = a3->m128i_i8[3] & 0x80 | v20.m128i_i8[3] & 0x7F;
        v8 = _mm_load_si128(&v20);
        a1[1].m128i_i64[0] = v21;
      }
      else
      {
        v8 = _mm_loadu_si128(a3);
        a1[1].m128i_i64[0] = a3[1].m128i_i64[0];
      }
      *a1 = v8;
      if ( ptr != &v24 )
        free(ptr);
      break;
  }
  return a1;
}

