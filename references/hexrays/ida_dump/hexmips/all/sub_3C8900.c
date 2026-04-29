__int64 __fastcall sub_3C8900(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 module_data; // rax
  const char *v6; // rsi
  __int64 v7; // rdi
  __m128i *v8; // rax
  _BYTE *v9; // rdi
  size_t v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rax
  __m128i *v14; // rax
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm2
  __m128i si128; // xmm3
  __m128i v18; // xmm0
  void *v19; // rdi
  __int64 v21; // rax
  void *src; // [rsp+0h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-70h]
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  void *v25; // [rsp+28h] [rbp-50h]
  __int128 v26; // [rsp+30h] [rbp-48h]
  unsigned __int64 v27; // [rsp+40h] [rbp-38h]
  int v28; // [rsp+48h] [rbp-30h]
  unsigned __int64 v29; // [rsp+58h] [rbp-20h]

  v2 = *(int *)(a2 + 16);
  v3 = *(int *)(a2 + 20);
  v29 = __readfsqword(0x28u);
  switch_dbctx(v2);
  module_data = get_module_data((unsigned int)dword_4CF8F8);
  if ( module_data )
  {
    sub_142770(module_data, a2);
    switch_dbctx(v3);
    v6 = "remote";
    v7 = get_module_data((unsigned int)dword_4CF8F8);
    if ( v7 )
    {
      sub_142770(v7, (__int64)"remote");
      *(_OWORD *)n = 0;
      src = nullptr;
      v8 = (__m128i *)qvector_reserve(&src, 0, 19, 1);
      src = v8;
      n[0] = 19;
      *v8 = _mm_load_si128((const __m128i *)&xmmword_407530);
      v9 = src;
      v24 = a2;
      v10 = n[0];
      v8[1].m128i_i16[0] = 29285;
      v25 = nullptr;
      v9[18] = 0;
      v26 = 0;
      if ( v10 )
      {
        v25 = (void *)qalloc_or_throw(v10);
        *((_QWORD *)&v26 + 1) = v10;
        memcpy(v25, src, v10);
        *(_QWORD *)&v26 = v10;
        v9 = src;
      }
      v28 = 3;
      v27 = 0xFFFFFFFEFFFFFFFFLL;
      if ( v9 )
      {
        n[0] = 0;
        qfree(v9);
      }
      sub_33A2A0((__int64)&v24);
      v11 = operator new(0xE0u);
      sub_3C8800(v11, &v24, (__int64)"Hexrays nodes");
      v12 = 0;
      *(_QWORD *)v11 = &off_4C94E8;
      *(_QWORD *)(v11 + 176) = v11 + 160;
      *(_QWORD *)(v11 + 184) = v11 + 160;
      v13 = *(_QWORD *)(v11 + 8);
      *(_DWORD *)(v11 + 160) = 0;
      *(_QWORD *)(v11 + 168) = 0;
      *(_QWORD *)(v11 + 192) = 0;
      *(_QWORD *)(v11 + 200) = 0;
      *(_DWORD *)(v11 + 208) = 0;
      *(_WORD *)(v11 + 212) = 0;
      *(_BYTE *)(v11 + 214) = 0;
      *(_WORD *)(v11 + 215) = 0;
      *(_BYTE *)(v11 + 217) = 0;
      *(_QWORD *)(v11 + 72) = 0;
      if ( *(int *)(v13 + 28) > 0 )
      {
        do
        {
          v14 = (__m128i *)operator new(0x30u);
          v15 = *(_QWORD *)(v11 + 8);
          v16 = _mm_cvtsi32_si128(v12);
          si128 = _mm_load_si128((const __m128i *)&xmmword_407240);
          v18 = _mm_cvtsi32_si128(*(_DWORD *)(v15 + 4LL * (int)v12 + 16));
          *(_QWORD *)(v11 + 8 * v12++ + 56) = v14;
          v14->m128i_i64[0] = (__int64)off_4C9430;
          v14[1] = si128;
          v14[2] = _mm_unpacklo_epi64((__m128i)v15, (__m128i)(unsigned __int64)v11);
          v14->m128i_i64[1] = _mm_unpacklo_epi32(v18, v16).m128i_u64[0];
        }
        while ( *(_DWORD *)(v15 + 28) > (int)v12 );
      }
      v19 = v25;
      *(_DWORD *)(v11 + 48) |= 0x100u;
      if ( v19 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v19);
      }
      return v29 - __readfsqword(0x28u);
    }
  }
  else
  {
    switch_dbctx(v3);
    v21 = get_module_data((unsigned int)dword_4CF8F8);
    if ( !v21 )
      return v29 - __readfsqword(0x28u);
    sub_142770(v21, a2);
    v6 = "local";
  }
  return sub_68EA0((__int64)"Skip merging of the decompiler because it was not inited for %s database\n", v6);
}
