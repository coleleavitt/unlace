__m128i *__fastcall sub_225ACB0(__m128i *a1, __int64 a2, __m128i *a3)
{
  bool v4; // zf
  __int32 v5; // eax
  __int64 v6; // rdx
  __m128i v8; // xmm3
  __int64 v9; // rax
  _OWORD v10[2]; // [rsp+0h] [rbp-1F8h] BYREF
  __int128 v11; // [rsp+20h] [rbp-1D8h]
  __int128 v12; // [rsp+30h] [rbp-1C8h]
  __int64 v13; // [rsp+40h] [rbp-1B8h]
  unsigned __int128 v14; // [rsp+50h] [rbp-1A8h] BYREF
  __m128i v15; // [rsp+60h] [rbp-198h] BYREF
  __m128i v16; // [rsp+70h] [rbp-188h] BYREF
  __int64 v17; // [rsp+80h] [rbp-178h]
  __int64 v18; // [rsp+88h] [rbp-170h]
  __int64 v19; // [rsp+90h] [rbp-168h]
  __int64 v20; // [rsp+98h] [rbp-160h]
  __int8 v21; // [rsp+A0h] [rbp-158h]
  void *ptr; // [rsp+B0h] [rbp-148h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-140h]
  _BYTE v24[304]; // [rsp+C8h] [rbp-130h] BYREF

  v4 = *(_BYTE *)(a2 + 328) == 0;
  v13 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v11 = 0;
  ptr = v24;
  memset(v10, 0, sizeof(v10));
  v12 = 0;
  HIDWORD(v11) = 0xFFFF;
  if ( v4 || (*(_BYTE *)(a2 + 320) & 1) != 0 )
  {
    v16.m128i_i64[0] = a3[2].m128i_i64[0];
    v14 = (unsigned __int128)_mm_loadu_si128(a3);
    v15 = _mm_loadu_si128(a3 + 1);
  }
  else
  {
    sub_22538C0((const char **)a3, (__int64)&ptr);
    v16.m128i_i16[0] = 261;
    v14 = *(_OWORD *)(a2 + 168);
    sub_228E8C0(&v14, &ptr);
    v16.m128i_i16[0] = 261;
    v14 = __PAIR128__(si128.m128i_u64[0], (unsigned __int64)ptr);
  }
  v5 = sub_228C3C0(&v14, v10, 1);
  if ( v5 )
  {
    a1[5].m128i_i8[8] |= 1u;
    a1->m128i_i32[0] = v5;
    a1->m128i_i64[1] = v6;
  }
  else
  {
    sub_225AC20((__m128 *)&v14, v10, a3);
    a1[5].m128i_i8[8] &= ~1u;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( (__m128i *)v14 == &v15 )
    {
      a1[1] = _mm_load_si128(&v15);
    }
    else
    {
      a1->m128i_i64[0] = v14;
      a1[1].m128i_i64[0] = v15.m128i_i64[0];
    }
    v8 = _mm_load_si128(&v16);
    a1->m128i_i64[1] = *((_QWORD *)&v14 + 1);
    v9 = v17;
    a1[2] = v8;
    a1[3].m128i_i64[0] = v9;
    a1[3].m128i_i64[1] = v18;
    a1[4].m128i_i64[0] = v19;
    a1[4].m128i_i64[1] = v20;
    a1[5].m128i_i8[0] = v21;
  }
  if ( ptr != v24 )
    free(ptr);
  return a1;
}
