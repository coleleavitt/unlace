__int64 __fastcall sub_193000(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __int64 v12; // rdi
  __m128i v13; // xmm0
  int tinfo_size; // eax
  __int64 v16; // rdx
  __int64 v17; // [rsp-8h] [rbp-68h]
  __m128i v18; // [rsp+0h] [rbp-60h] BYREF
  __int64 v19; // [rsp+10h] [rbp-50h] BYREF
  __int128 v20; // [rsp+18h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 1496);
  v21 = __readfsqword(0x28u);
  sub_191FB0(v3, a3);
  sub_191FB0(v3, a3 + 80);
  v5 = sub_331530(a1, a2, (unsigned int)"va_copy", (unsigned int)&v19, 2, a3, 0, v17, a3, v18.m128i_i32[2], 1, v20);
  clear_tinfo_t(&v19);
  v6 = *(_QWORD *)(v5 + 72);
  v7 = v18.m128i_i64[0];
  *(_DWORD *)(v6 + 280) |= 4u;
  *(_DWORD *)(v6 + 284) = 24;
  if ( *(_BYTE *)v7 == 10 && **(_BYTE **)(v7 + 8) == 5 )
  {
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(v3 + 248), 0);
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18.m128i_i64[0] + 8) + 8LL) + 8LL) + *(_QWORD *)(a1 + 1440);
    *(_QWORD *)&v20 = tinfo_size;
    v19 = v16;
    sub_312A30(v6 + 152, &v19);
  }
  v19 = 0;
  v20 = 0;
  v19 = qvector_reserve(&v19, 0, 1, 16);
  *(__m128i *)(v19 + 16 * v20) = _mm_load_si128((const __m128i *)&xmmword_411C00);
  v8 = v19;
  v19 = 0;
  v9 = v8;
  v10 = (__m128i)_mm_loadh_ps((const double *)&v20 + 1);
  v20 = 0;
  v11 = *(_QWORD *)(v6 + 216);
  if ( v11 )
  {
    *(_QWORD *)(v6 + 224) = 0;
    v18 = v10;
    qfree(v11);
    v12 = v19;
    v13 = _mm_load_si128(&v18);
    *(_QWORD *)(v6 + 216) = v9;
    *(__m128i *)(v6 + 224) = v13;
    if ( v12 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v12);
    }
  }
  else
  {
    *(_QWORD *)(v6 + 216) = v8;
    *(__m128i *)(v6 + 224) = v10;
  }
  return v5;
}
