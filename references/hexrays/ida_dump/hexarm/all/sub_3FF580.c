__int64 __fastcall sub_3FF580(__int64 a1, int a2, const char *a3)
{
  __m128 *v3; // rax
  char *v5; // rbx
  __m128 si128; // xmm1
  unsigned int v8; // r12d
  __int64 v9; // rdi
  __int64 v11; // rax
  const char *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r14
  __m128i v16; // xmm0
  __m128i v17; // [rsp+10h] [rbp-1B0h] BYREF
  const char *v18; // [rsp+20h] [rbp-1A0h] BYREF
  __int128 v19; // [rsp+28h] [rbp-198h]
  _BYTE v20[80]; // [rsp+40h] [rbp-180h] BYREF
  unsigned __int8 v21[24]; // [rsp+90h] [rbp-130h] BYREF
  _QWORD v22[27]; // [rsp+A8h] [rbp-118h] BYREF
  char v23; // [rsp+180h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+188h] [rbp-38h]

  v3 = (__m128 *)v20;
  v5 = &v23;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v24 = __readfsqword(0x28u);
  do
  {
    v3->m128_i32[1] = -1;
    v3 += 5;
    v3[-5].m128_i16[0] = 0;
    v3[-5].m128_i16[1] = 0;
    v3[-5].m128_u64[1] = 0;
    v3[-4] = si128;
    v3[-3].m128_u64[0] = 0;
    *(__m128 *)((char *)&v3[-3] + 8) = 0;
    v3[-2].m128_i32[2] = 0;
    v3[-1].m128_u64[0] = 0;
    v3[-1].m128_i32[2] = 0;
  }
  while ( v3 != (__m128 *)&v23 );
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 604LL) & 8) != 0 && (v8 = sub_3FE8B0(a1, (__int64)v20, 1, 0.0), (_BYTE)v8) )
  {
    v11 = *(_QWORD *)(a1 + 832);
    v18 = nullptr;
    v19 = 0;
    if ( *(_DWORD *)(v11 + 80) != 8 && *(_BYTE *)(a1 + 98) == 0xFF )
      a3 = "_dup";
    sub_3FEF00(a1, (__int64 *)&v18, "ld", a3, a2, a1 + 64, 0.0);
    v12 = s1;
    if ( (_QWORD)v19 )
      v12 = v18;
    v13 = sub_335C70(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v12, v22, 1, (__int64)v20, 1);
    v14 = *(_QWORD *)(v13 + 72);
    v15 = v13;
    *(_BYTE *)(v13 + 65) |= 2u;
    *(_DWORD *)(v14 + 280) |= 4u;
    v16 = _mm_load_si128((const __m128i *)&xmmword_41F900);
    v17 = v16;
    sub_316F70((__int64 *)(v14 + 216), &v17, *(double *)v16.m128i_i64, si128);
    sub_3EFE10(a1, v15, v21);
    sub_3F9F40(a1, a1 + 104, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 620LL), *(double *)v16.m128i_i64);
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18);
    }
  }
  else
  {
    v8 = 0;
  }
  do
  {
    v5 -= 80;
    cleanup_argloc(v5 + 56);
    v9 = *((_QWORD *)v5 + 4);
    if ( v9 )
    {
      *((_QWORD *)v5 + 5) = 0;
      qfree(v9);
    }
    clear_tinfo_t(v5 + 24);
    sub_11C7E0((__int64)v5);
  }
  while ( v5 != v20 );
  return v8;
}
