unsigned __int64 __fastcall sub_4C2510(
        __int64 a1,
        const char *a2,
        QT::QAbstractItemView *a3,
        __int64 a4,
        const __m128i *a5)
{
  void (__fastcall *v8)(__m128i *, const __m128i *, __int64); // rax
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rsi
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rsi
  __m128i *v23; // rax
  __int64 v24; // rdi
  _BYTE *v25; // rbp
  __int64 v26; // rbx
  void *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  void *src; // [rsp+0h] [rbp-88h] BYREF
  __int128 v33; // [rsp+8h] [rbp-80h]
  __m128i v34; // [rsp+20h] [rbp-68h] BYREF
  __m128i v35; // [rsp+30h] [rbp-58h]
  unsigned __int64 v36; // [rsp+48h] [rbp-40h]

  v8 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a5[1].m128i_i64[0];
  v36 = __readfsqword(0x28u);
  v34 = 0;
  v35 = 0u;
  if ( v8 )
  {
    v8(&v34, a5, 2);
    v35 = _mm_loadu_si128(a5 + 1);
  }
  sub_4C1BB0(a1, a2, a3, a4, &v34);
  if ( v35.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v35.m128i_i64[0])(&v34, &v34, 3);
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)a1 = &move_to_folder_dialog_t___vtable;
  *(_DWORD *)(a1 + 352) = 0;
  *(_OWORD *)(a1 + 336) = 0;
  v11 = operator new(0x90u);
  *(_QWORD *)(v11 + 8) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(v11 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v11 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 56) = 0;
  *(_QWORD *)(v11 + 80) = 0;
  *(_QWORD *)(v11 + 104) = 0;
  *(_QWORD *)v11 = &forms::container_t___vtable;
  *(_DWORD *)(v11 + 112) = 0;
  *(_QWORD *)(v11 + 120) = 0;
  *(_OWORD *)(v11 + 64) = 0;
  *(_OWORD *)(v11 + 88) = 0;
  *(_OWORD *)(v11 + 128) = 0;
  v12 = operator new(0x28u);
  *(_QWORD *)(v12 + 8) = 0;
  *(_DWORD *)(v12 + 32) = 1;
  *(_OWORD *)(v12 + 16) = 0;
  *(_QWORD *)v12 = &forms::hlayout_t___vtable;
  *(_QWORD *)(v11 + 104) = v12;
  v13 = operator new(0x88u);
  *(_QWORD *)(v13 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v13 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v13 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v13 + 48) = 0;
  *(_QWORD *)(v13 + 56) = 0;
  *(_QWORD *)(v13 + 80) = 0;
  *(_QWORD *)v13 = &forms::label_t___vtable;
  *(_QWORD *)(v13 + 104) = 0;
  *(_OWORD *)(v13 + 64) = 0;
  *(_OWORD *)(v13 + 88) = 0;
  *(_OWORD *)(v13 + 112) = 0;
  v14 = (_QWORD *)qvector_reserve(v13 + 104, 0, 9, 1);
  *(_QWORD *)(v13 + 104) = v14;
  *(_QWORD *)(v13 + 112) = 9;
  *v14 = 0x6E6F697461636F4CLL;
  *(_BYTE *)(*(_QWORD *)(v13 + 104) + 8LL) = 0;
  v15 = *(_QWORD *)(v12 + 16);
  *(_BYTE *)(v13 + 128) = 0;
  v16 = *(_QWORD *)(v12 + 8);
  *(_DWORD *)(v13 + 32) = 1;
  if ( *(_QWORD *)(v12 + 24) < (unsigned __int64)(v15 + 1) )
  {
    v31 = qvector_reserve(v12 + 8, v16, v15 + 1, 8);
    *(_QWORD *)(v12 + 8) = v31;
    v16 = v31;
    v15 = *(_QWORD *)(v12 + 16);
  }
  *(_QWORD *)(v16 + 8 * v15) = v13;
  ++*(_QWORD *)(v12 + 16);
  v17 = operator new(0x90u);
  *(_QWORD *)(v17 + 8) = 0x100000003LL;
  *(_QWORD *)(v17 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v17 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v17 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v17 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v17 = &forms::text_line_t___vtable;
  *(_QWORD *)(v17 + 136) = a1 + 328;
  *(_QWORD *)(v17 + 48) = 0;
  *(_QWORD *)(v17 + 56) = 0;
  *(_QWORD *)(v17 + 80) = 0;
  *(_QWORD *)(v17 + 104) = 0;
  *(_QWORD *)(v17 + 128) = 0;
  *(_OWORD *)(v17 + 64) = 0;
  *(_OWORD *)(v17 + 88) = 0;
  *(_OWORD *)(v17 + 112) = 0;
  sub_169A50((__int64 *)(v17 + 104), (__int64)"history_%s", a2);
  v18 = *(_QWORD *)(v12 + 16);
  v19 = *(_QWORD *)(v12 + 8);
  if ( *(_QWORD *)(v12 + 24) < (unsigned __int64)(v18 + 1) )
  {
    v30 = qvector_reserve(v12 + 8, v19, v18 + 1, 8);
    *(_QWORD *)(v12 + 8) = v30;
    v19 = v30;
    v18 = *(_QWORD *)(v12 + 16);
  }
  *(_QWORD *)(v19 + 8 * v18) = v17;
  v20 = *(_QWORD **)(a1 + 104);
  ++*(_QWORD *)(v12 + 16);
  v21 = v20[2];
  v22 = v20[1];
  if ( v20[3] < (unsigned __int64)(v21 + 1) )
  {
    v29 = qvector_reserve(v20 + 1, v22, v21 + 1, 8);
    v20[1] = v29;
    v22 = v29;
    v21 = v20[2];
  }
  *(_QWORD *)(v22 + 8 * v21) = v11;
  ++v20[2];
  *(_DWORD *)(a1 + 168) = 1;
  src = nullptr;
  v33 = 0;
  v23 = (__m128i *)qvector_reserve(&src, 0, 44, 1);
  src = v23;
  v24 = a1 + 208;
  *(_QWORD *)&v33 = 44;
  *v23 = _mm_load_si128((const __m128i *)&xmmword_5DC4D0);
  v25 = src;
  v23[1] = _mm_load_si128((const __m128i *)&xmmword_5DC4E0);
  *(__m128i *)((char *)v23 + 27) = _mm_load_si128((const __m128i *)&xmmword_5DD070);
  v25[43] = 0;
  if ( (void **)(a1 + 208) != &src )
  {
    v26 = v33;
    if ( (unsigned __int64)v33 > 1 )
    {
      v28 = *(void **)(a1 + 208);
      if ( *(_QWORD *)(a1 + 224) < (unsigned __int64)v33 )
      {
        v28 = (void *)qvector_reserve(v24, *(_QWORD *)(a1 + 208), v33, 1);
        *(_QWORD *)(a1 + 208) = v28;
      }
      *(_QWORD *)(a1 + 216) = v26;
      memmove(v28, v25, v26 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 208) + v26 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 216) = 0;
    }
  }
  sub_4C0FC0(a1 + 176, 5, -1);
  if ( src )
  {
    *(_QWORD *)&v33 = 0;
    qfree(src, &byte_5);
  }
  return v36 - __readfsqword(0x28u);
}
