unsigned __int64 __fastcall sub_4C1BB0(
        __int64 a1,
        const char *a2,
        QT::QAbstractItemView *a3,
        __int64 a4,
        const __m128i *a5)
{
  size_t v9; // r15
  size_t v10; // r12
  const char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __m128i v14; // xmm1
  __int64 v15; // r12
  unsigned __int64 v16; // rbp
  void *v17; // r15
  __int64 v18; // rdi
  __m128i si128; // xmm0
  __m128i v20; // xmm0
  int v21; // r13d
  _QWORD *v22; // rax
  _QWORD *v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rax
  void *v27; // rax
  __int64 v28; // rax
  void *v29; // rax
  void *v30; // rsi
  size_t n[2]; // [rsp+0h] [rbp-68h] BYREF
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t v33[2]; // [rsp+18h] [rbp-50h]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  *(_OWORD *)v33 = 0;
  src = nullptr;
  if ( a2 )
  {
    v9 = strlen(a2);
    n[0] = v9 + 1;
    src = (void *)qvector_reserve(&src, 0, v9 + 1, 1);
    v33[0] = v9 + 1;
    memmove(src, a2, v9);
    *((_BYTE *)src + v9) = 0;
    v10 = v33[0];
  }
  else
  {
    v10 = 0;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 8) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(a1 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)a1 = &forms::abstract_form_desc_t___vtable;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  if ( v10 )
  {
    v29 = (void *)qalloc_or_throw(v10);
    *(_QWORD *)(a1 + 144) = v29;
    v30 = src;
    *(_QWORD *)(a1 + 160) = v10;
    memcpy(v29, v30, v10);
    *(_QWORD *)(a1 + 152) = v10;
  }
  *(_DWORD *)(a1 + 168) = -1;
  *(_QWORD *)a1 = &forms::dialog_desc_t___vtable;
  *(_QWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  sub_4C0FC0(a1 + 176, 2, -1);
  v11 = &byte_4;
  sub_4C0FC0(a1 + 176, 4, -1);
  if ( src )
  {
    v33[0] = 0;
    qfree(src, &byte_4);
  }
  *(_QWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 280) = -1;
  *(_QWORD *)a1 = &standalone_dirtree_widget_dialog_t___vtable;
  *(_OWORD *)(a1 + 264) = 0;
  v12 = a5[1].m128i_i64[1];
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = v12;
  v13 = a5[1].m128i_i64[0];
  *(_OWORD *)(a1 + 296) = 0;
  if ( v13 )
  {
    v14 = _mm_loadu_si128(a5);
    *(_QWORD *)(a1 + 312) = v13;
    a5[1] = 0;
    *(__m128i *)(a1 + 296) = v14;
  }
  v15 = operator new(0x28u);
  *(_QWORD *)(v15 + 8) = 0;
  *(_DWORD *)(v15 + 32) = 2;
  *(_OWORD *)(v15 + 16) = 0;
  *(_QWORD *)v15 = &forms::vlayout_t___vtable;
  *(_QWORD *)(a1 + 104) = v15;
  if ( a4 )
  {
    v16 = *(_QWORD *)(a4 + 8);
    v17 = nullptr;
    if ( v16 )
    {
      n[0] = 16 * v16;
      v27 = (void *)qalloc_or_throw(16 * v16);
      v11 = *(const char **)a4;
      v17 = v27;
      memcpy(v27, *(const void **)a4, 16 * v16);
    }
    v18 = *(_QWORD *)(a1 + 256);
    si128 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
    if ( v18 )
    {
      *(_QWORD *)(a1 + 264) = 0;
      *(__m128i *)n = si128;
      qfree(v18, v11);
      si128 = _mm_load_si128((const __m128i *)n);
    }
    *(__m128i *)(a1 + 264) = si128;
    v20 = _mm_loadu_si128((const __m128i *)(a4 + 24));
    v21 = 3;
    *(_QWORD *)(a1 + 256) = v17;
    *(__m128i *)(a1 + 280) = v20;
  }
  else
  {
    sub_48FF00(a3, nullptr, (__int64 *)(a1 + 256), 24, 0);
    v21 = 1;
  }
  v22 = (_QWORD *)operator new(0x80u);
  v22[1] = 9;
  v23 = v22;
  v24 = *(_QWORD *)(v15 + 8);
  v22[2] = 0;
  v22[3] = 0xFFFFFFFFLL;
  v22[5] = 0xFFFFFFFF00000000LL;
  *v22 = &forms::embedded_dirtree_widget_t___vtable;
  v22[14] = a1 + 256;
  v22[4] = 0;
  *(_QWORD *)((char *)v22 + 12) = 0x5000000000LL;
  v25 = *(_QWORD *)(v15 + 16);
  v23[6] = 0;
  v23[7] = 0;
  v23[10] = 0;
  v23[13] = a3;
  *((_DWORD *)v23 + 30) = v21;
  *((_DWORD *)v23 + 9) = 40;
  *((_OWORD *)v23 + 4) = 0;
  *(_OWORD *)(v23 + 11) = 0;
  if ( *(_QWORD *)(v15 + 24) < (unsigned __int64)(v25 + 1) )
  {
    v28 = qvector_reserve(v15 + 8, v24, v25 + 1, 8);
    *(_QWORD *)(v15 + 8) = v28;
    v24 = v28;
    v25 = *(_QWORD *)(v15 + 16);
  }
  *(_QWORD *)(v24 + 8 * v25) = v23;
  ++*(_QWORD *)(v15 + 16);
  return v34 - __readfsqword(0x28u);
}
