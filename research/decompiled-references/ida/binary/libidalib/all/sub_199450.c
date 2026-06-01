TView *__fastcall sub_199450(const __m128i *a1, unsigned int a2, unsigned int a3, char a4)
{
  __int32 v4; // eax
  __m128i v6; // xmm1
  __int64 v7; // rax
  void (*v8)(void); // rax
  const char *v9; // r13
  size_t v10; // rax
  size_t v11; // r15
  size_t v12; // rbp
  TView *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rax
  TView **v16; // rax
  TView **v17; // rbx
  TView *v18; // rdi
  TView *v19; // rdi
  __m128i v21; // [rsp-4h] [rbp-108h] BYREF
  char *v22; // [rsp+Ch] [rbp-F8h] BYREF
  __int128 v23; // [rsp+14h] [rbp-F0h]
  __int64 v24; // [rsp+2Ch] [rbp-D8h] BYREF
  __int128 v25; // [rsp+34h] [rbp-D0h]
  __int64 v26[8]; // [rsp+4Ch] [rbp-B8h] BYREF
  int v27; // [rsp+8Ch] [rbp-78h]
  __int64 v28; // [rsp+94h] [rbp-70h]
  __int64 v29; // [rsp+9Ch] [rbp-68h]
  __int64 Extent; // [rsp+ACh] [rbp-58h]
  __int64 v31; // [rsp+B4h] [rbp-50h]
  unsigned __int64 v32; // [rsp+C4h] [rbp-40h]

  v4 = a1[2].m128i_i32[0];
  v32 = __readfsqword(0x28u);
  v6 = _mm_cvtsi32_si128(a2 + v4);
  v7 = a1->m128i_i64[0];
  a1[1] = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a3)),
            _mm_unpacklo_epi32(v6, _mm_cvtsi32_si128(a3 + a1[2].m128i_i32[1])));
  v8 = *(void (**)(void))(v7 + 32);
  if ( (char *)v8 != (char *)sub_91B30 )
    v8();
  v9 = (const char *)a1[2].m128i_i64[1];
  v22 = nullptr;
  v23 = 0;
  if ( v9 )
  {
    v10 = strlen(v9);
    v11 = v10 + 1;
    v12 = v10;
    v22 = (char *)qvector_reserve();
    *(_QWORD *)&v23 = v11;
    memmove(v22, v9, v12);
    v22[v12] = 0;
  }
  v24 = 0;
  v25 = 0;
  sub_193AE0((const char **)&v22, (__int64)&v24);
  sub_1930F0(&v21, a1);
  if ( (unsigned __int64)v23 > 1 )
    ++v21.m128i_i32[1];
  v13 = (TView *)operator new(0xA8u);
  sub_1935D0((__int64)v13, (__int64)&v21);
  sub_1960F0(v26, (__int64)a1, nullptr, 0);
  if ( a4 )
    v27 |= 2u;
  Extent = TView::getExtent(v13);
  v31 = v14;
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 88LL))(TProgram::application + 136LL);
  v16 = (TView **)sub_196320(v15, (__int64)v26);
  *((_QWORD *)v13 + 20) = v16;
  v17 = v16;
  sub_193710(v16, v13);
  v18 = v17[326];
  if ( v18 )
    (*(void (__fastcall **)(TView *, __int64, __int64))(*(_QWORD *)v18 + 168LL))(v18, 1, 1);
  v19 = v17[327];
  if ( v19 )
    (*(void (__fastcall **)(TView *, __int64, __int64))(*(_QWORD *)v19 + 168LL))(v19, 1, 1);
  if ( v28 )
  {
    v29 = 0;
    qfree();
  }
  if ( v26[5] )
  {
    v26[6] = 0;
    qfree();
  }
  if ( v26[2] )
  {
    v26[3] = 0;
    qfree();
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  return v13;
}

