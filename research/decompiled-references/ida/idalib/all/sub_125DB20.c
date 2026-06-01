__int64 __fastcall sub_125DB20(__m128 *a1, const char *a2, __int64 a3, const std::locale *a4, __int32 a5)
{
  __int64 v8; // r14
  int v9; // eax
  __m128 v10; // xmm0
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm0
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // rsi
  __int64 v21; // rax
  __m128i *v22; // rdi
  __int64 v23; // rbp
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // r14
  __int64 v27; // rax
  __m128i *v28; // rdi
  __int64 v29; // rbp
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // r13
  __m128i *v33; // rdi
  __int64 v34; // r12
  unsigned __int64 v35; // r12
  __int64 result; // rax
  unsigned __int64 v37; // rcx
  unsigned int *v38; // rsi
  unsigned int *i; // rdx
  __int64 j; // rax
  __int64 v41; // rax
  __m128i v42; // [rsp+8h] [rbp-150h] BYREF
  unsigned __int8 *v43; // [rsp+18h] [rbp-140h]
  __int64 v44; // [rsp+28h] [rbp-130h] BYREF
  __m128i v45; // [rsp+30h] [rbp-128h] BYREF
  __int64 v46; // [rsp+40h] [rbp-118h]
  __m128i v47[3]; // [rsp+60h] [rbp-F8h] BYREF
  __m128i v48[3]; // [rsp+90h] [rbp-C8h] BYREF
  __m128i v49; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-88h]
  __m128i v51; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v52; // [rsp+100h] [rbp-58h]

  if ( (a5 & 0x3F0) == 0 )
    a5 |= 0x10u;
  v43 = &a1->m128_u8[8];
  a1->m128_i32[0] = a5;
  std::locale::locale((std::locale *)&v51, a4);
  sub_1251110((__int64)&a1->m128_i64[1], a2, a3, a1->m128_i32[0], (__int64)&v51);
  std::locale::~locale((std::locale *)&v51);
  a1[16].m128_u64[0] = 0;
  v8 = operator new(0x68u);
  *(_QWORD *)(v8 + 8) = 0x100000001LL;
  *(_BYTE *)(v8 + 64) = 0;
  *(_QWORD *)v8 = off_2C3CC70;
  v9 = a1->m128_i32[0];
  *(_QWORD *)(v8 + 32) = 0;
  *(_DWORD *)(v8 + 40) = v9;
  *(_QWORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 88) = 0;
  *(_OWORD *)(v8 + 16) = 0;
  *(_OWORD *)(v8 + 72) = 0;
  std::locale::locale((std::locale *)(v8 + 96));
  std::locale::locale((std::locale *)&v49, a4);
  std::locale::locale((std::locale *)&v51, (const std::locale *)(v8 + 96));
  std::locale::operator=(v8 + 96, &v49);
  std::locale::operator=(&v49, &v51);
  std::locale::~locale((std::locale *)&v51);
  std::locale::locale((std::locale *)&v51, (const std::locale *)&v49);
  std::locale::~locale((std::locale *)&v51);
  std::locale::~locale((std::locale *)&v49);
  a1[17].m128_u64[1] = 0;
  v42.m128i_i64[0] = v8;
  a1[17].m128_u64[0] = (unsigned __int64)&a1[18];
  a1[18].m128_i8[0] = 0;
  a1[19].m128_u64[0] = 0;
  v10 = _mm_loadh_ps((const double *)v42.m128i_i64);
  a1[20].m128_u64[0] = 0;
  a1[20].m128_u64[1] = 0;
  a1[21].m128_u64[0] = 0;
  a1[21].m128_u64[1] = 0;
  a1[22].m128_u64[0] = 0;
  a1[22].m128_u64[1] = 0;
  a1[23].m128_u64[0] = 0;
  a1[23].m128_u64[1] = 0;
  a1[19].m128_u64[1] = 8;
  a1[16] = v10;
  v11 = operator new(0x40u);
  v12 = a1[19].m128_u64[1];
  a1[19].m128_u64[0] = v11;
  v13 = (__int64 *)(v11 + 8 * ((v12 - 1) >> 1));
  v14 = operator new(0x1F8u);
  a1[21].m128_u64[1] = (unsigned __int64)v13;
  v15 = v14 + 504;
  v42.m128i_i64[0] = v14;
  v16 = _mm_loadl_epi64(&v42);
  *v13 = v14;
  a1[22].m128_u64[1] = v14;
  a1[22].m128_u64[0] = v14;
  v17 = a1[16].m128_u64[0];
  a1[21].m128_u64[0] = v15;
  a1[23].m128_u64[0] = v15;
  a1[23].m128_u64[1] = (unsigned __int64)v13;
  a1[24].m128_u64[0] = v17 + 80;
  a1[20] = (__m128)_mm_unpacklo_epi64(v16, v16);
  v18 = std::use_facet<std::ctype<char>>(a4);
  v19 = a1[16].m128_i64[0];
  a1[24].m128_u64[1] = v18;
  v20 = *(__int64 **)(v19 + 8);
  v42.m128i_i64[0] = *(_QWORD *)(v19 + 32);
  v44 = *(_QWORD *)(v19 + 40);
  v21 = v44;
  *(_QWORD *)(v19 + 40) = v44 + 1;
  if ( v20 == *(__int64 **)(v19 + 16) )
  {
    sub_1250420(v19, v20, &v44);
  }
  else
  {
    *v20 = v21;
    *(_QWORD *)(v19 + 8) = v20 + 1;
  }
  v45.m128i_i32[0] = 8;
  v45.m128i_i64[1] = -1;
  v46 = v44;
  v42.m128i_i64[1] = (__int64)&v45;
  sub_124FC70(v47, &v45);
  v22 = *(__m128i **)(v19 + 64);
  if ( v22 == *(__m128i **)(v19 + 72) )
  {
    sub_1252750(v19 + 56, *(const __m128i **)(v19 + 64), v47);
    v23 = *(_QWORD *)(v19 + 64);
  }
  else
  {
    sub_124FC70(v22, v47);
    v23 = *(_QWORD *)(v19 + 64) + 48LL;
    *(_QWORD *)(v19 + 64) = v23;
  }
  v24 = 0xAAAAAAAAAAAAAAABLL * ((v23 - *(_QWORD *)(v19 + 56)) >> 4);
  if ( v24 > 0x186A0 )
    goto LABEL_35;
  v25 = v24 - 1;
  sub_124FBE0((__int64)v47);
  sub_124FBE0(v42.m128i_i64[1]);
  *(_QWORD *)(*(_QWORD *)(v19 + 56) + 48 * v42.m128i_i64[0] + 8) = v25;
  sub_125D8E0(a1);
  if ( a1[9].m128_i32[2] == 27 )
  {
    sub_9EE8A0((__int64)&a1[17], (__int64)&a1[13]);
    sub_12510C0(v43);
  }
  else
  {
    std::__throw_regex_error(5);
  }
  sub_124FB10(&v51, a1);
  *(_QWORD *)(*(_QWORD *)(v19 + 56) + 48 * v25 + 8) = v51.m128i_i64[1];
  v26 = a1[16].m128_u64[0];
  v49.m128i_i32[0] = 9;
  v49.m128i_i64[1] = -1;
  v42.m128i_i64[0] = v52;
  v27 = *(_QWORD *)(v26 + 8);
  v50 = *(_QWORD *)(v27 - 8);
  *(_QWORD *)(v26 + 8) = v27 - 8;
  sub_124FC70(&v51, &v49);
  v28 = *(__m128i **)(v26 + 64);
  if ( v28 == *(__m128i **)(v26 + 72) )
  {
    sub_1252750(v26 + 56, *(const __m128i **)(v26 + 64), &v51);
    v29 = *(_QWORD *)(v26 + 64);
  }
  else
  {
    sub_124FC70(v28, &v51);
    v29 = *(_QWORD *)(v26 + 64) + 48LL;
    *(_QWORD *)(v26 + 64) = v29;
  }
  v30 = 0xAAAAAAAAAAAAAAABLL * ((v29 - *(_QWORD *)(v26 + 56)) >> 4);
  if ( v30 > 0x186A0
    || ((v31 = v30 - 1,
         sub_124FBE0((__int64)&v51),
         sub_124FBE0((__int64)&v49),
         v48[0].m128i_i32[0] = 12,
         *(_QWORD *)(*(_QWORD *)(v19 + 56) + 48 * v42.m128i_i64[0] + 8) = v31,
         v32 = a1[16].m128_u64[0],
         v48[0].m128i_i64[1] = -1,
         v33 = *(__m128i **)(v32 + 64),
         v33 == *(__m128i **)(v32 + 72))
      ? (sub_1252750(v32 + 56, *(const __m128i **)(v32 + 64), v48), v34 = *(_QWORD *)(v32 + 64))
      : (sub_124FC70(v33, v48), v34 = *(_QWORD *)(v32 + 64) + 48LL, *(_QWORD *)(v32 + 64) = v34),
        v35 = 0xAAAAAAAAAAAAAAABLL * ((v34 - *(_QWORD *)(v32 + 56)) >> 4),
        v35 > 0x186A0) )
  {
LABEL_35:
    abort();
  }
  sub_124FBE0((__int64)v48);
  result = *(_QWORD *)(v19 + 56) + 48 * v31;
  *(_QWORD *)(result + 8) = v35 - 1;
  v37 = a1[16].m128_u64[0];
  v38 = *(unsigned int **)(v37 + 64);
  for ( i = *(unsigned int **)(v37 + 56); v38 != i; i += 12 )
  {
    for ( j = *((_QWORD *)i + 1); j >= 0; *((_QWORD *)i + 1) = j )
    {
      v41 = *(_QWORD *)(v37 + 56) + 48 * j;
      if ( *(_DWORD *)v41 != 10 )
        break;
      j = *(_QWORD *)(v41 + 8);
    }
    result = *i;
    if ( (unsigned int)(result - 1) <= 1 || (_DWORD)result == 7 )
    {
      for ( result = *((_QWORD *)i + 2); result >= 0; *((_QWORD *)i + 2) = result )
      {
        result = *(_QWORD *)(v37 + 56) + 48 * result;
        if ( *(_DWORD *)result != 10 )
          break;
        result = *(_QWORD *)(result + 8);
      }
    }
  }
  return result;
}
