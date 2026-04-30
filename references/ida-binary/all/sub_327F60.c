bool __fastcall sub_327F60(unsigned int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __m128i v8; // xmm0
  _QWORD *v9; // rax
  __m128i v10; // xmm1
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r12
  char v14; // r13
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  __int128 v19; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v6 = qalloc_or_throw(208);
  *(_QWORD *)(v6 + 40) = itext(1075, a2, v7);
  *(_QWORD *)(v6 + 8) = 0x20A840C000004LL;
  v8 = _mm_unpacklo_epi64(
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1), _mm_cvtsi32_si128(a2)),
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)));
  *(_QWORD *)v6 = &stru_86F6A0;
  v9 = (_QWORD *)(v6 + 80);
  *(_OWORD *)(v6 + 16) = -1;
  v10 = _mm_loadl_epi64((const __m128i *)&off_8661D8);
  *(_QWORD *)(v6 + 32) = 0;
  *(_DWORD *)(v6 + 48) = 3;
  *(_DWORD *)(v6 + 72) = -1;
  *(__m128i *)(v6 + 56) = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)&off_8661C0);
  do
  {
    *v9 = 0;
    v9 += 3;
    *((_OWORD *)v9 - 1) = 0;
  }
  while ( (_QWORD *)(v6 + 176) != v9 );
  *(_DWORD *)(v6 + 176) = 0;
  v11 = *(unsigned int *)(v6 + 12);
  v12 = ((*(_DWORD *)(v6 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(v6 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v6 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, &stru_86F6A0, v11, v12, *(double *)v8.m128i_i64);
      BUG();
    }
    v11 = (unsigned int)v11 & 0xFE07FFFF;
    *(_BYTE *)(v6 + 11) = ((*(_DWORD *)(v6 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v6 + 12) = v11;
  }
  *(__m128i *)(v6 + 16) = v8;
  *(_QWORD *)v6 = wpl_chooser_t___vtable;
  *(_DWORD *)(v6 + 72) = 45;
  v13 = qword_8BCDD0;
  v18 = 0;
  *(_QWORD *)(v6 + 184) = 0;
  *(_OWORD *)(v6 + 192) = 0;
  v19 = 0;
  if ( v13 != -1 )
  {
    v14 = byte_8BCDD8;
    v18 = qvector_reserve(&v18, 0, 1, 16);
    v11 = 16 * v19;
    v15 = 16 * v19 + v18;
    *(_QWORD *)v15 = v13;
    *(_BYTE *)(v15 + 8) = v14;
    *(_QWORD *)&v19 = v19 + 1;
  }
  v16 = sub_4AED50(v6, &v18, v11, v12);
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18, (const char *)&v18);
  }
  return v16 == 0;
}
