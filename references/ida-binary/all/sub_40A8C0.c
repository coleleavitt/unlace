unsigned __int64 __fastcall sub_40A8C0(__int64 a1)
{
  size_t v2; // rbp
  size_t v3; // r12
  char *v4; // rdi
  char *v5; // rcx
  char *v6; // rax
  __int64 i; // rbp
  char *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rax
  __m128i si128; // xmm0
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  const char *v21; // rsi
  __int64 v22; // rdi
  void *v24; // rax
  void *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-50h]
  unsigned __int64 v30; // [rsp+18h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  src = (void *)qvector_reserve(&src, 0, 14, 1);
  n[0] = 14;
  strcpy((char *)src, "Feature Flags");
  v2 = n[0];
  *(_QWORD *)(a1 + 8) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(a1 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 48) = 0;
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
  if ( v2 )
  {
    v24 = (void *)qalloc_or_throw(v2);
    *(_QWORD *)(a1 + 144) = v24;
    v25 = src;
    *(_QWORD *)(a1 + 160) = v2;
    memcpy(v24, v25, v2);
    *(_QWORD *)(a1 + 152) = v2;
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
  sub_40A3D0(a1 + 176, 2, -1);
  sub_40A3D0(a1 + 176, 4, -1);
  if ( src )
  {
    n[0] = 0;
    qfree(src, &byte_4);
  }
  *(_QWORD *)a1 = &feat_flags_dialog_t___vtable;
  *(_BYTE *)(a1 + 256) = 0;
  src = nullptr;
  *(_OWORD *)n = 0;
  sub_4B1970(&src, 0, "JumpAnywhere");
  v3 = n[0];
  v4 = (char *)src;
  v5 = (char *)src + 24 * n[0];
  v6 = (char *)src;
  if ( v5 != src )
  {
    do
    {
      if ( *((_QWORD *)v6 + 1) && **(_BYTE **)v6 == 71 && !*(_BYTE *)(*(_QWORD *)v6 + 1LL) )
        *(_BYTE *)(a1 + 256) = 1;
      v6 += 24;
    }
    while ( v5 != v6 );
  }
  if ( v4 )
  {
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v8 = &v4[24 * i];
        v9 = *(_QWORD *)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v8 + 1) = 0;
          qfree(v9, nullptr);
          v4 = (char *)src;
        }
      }
    }
    n[0] = 0;
    qfree(v4, nullptr);
  }
  v10 = operator new(0x28u);
  *(_QWORD *)(v10 + 8) = 0;
  *(_DWORD *)(v10 + 32) = 2;
  *(_OWORD *)(v10 + 16) = 0;
  *(_QWORD *)v10 = &forms::vlayout_t___vtable;
  *(_QWORD *)(a1 + 104) = v10;
  v11 = operator new(0x88u);
  *(_QWORD *)(v11 + 8) = 7;
  *(_QWORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v11 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v11 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 56) = 0;
  *(_QWORD *)(v11 + 80) = 0;
  *(_QWORD *)v11 = &forms::abstract_button_t___vtable;
  *(_QWORD *)(v11 + 104) = a1 + 256;
  *(_QWORD *)(v11 + 112) = 0;
  *(_OWORD *)(v11 + 64) = 0;
  *(_OWORD *)(v11 + 88) = 0;
  *(_OWORD *)(v11 + 120) = 0;
  v12 = qvector_reserve(v11 + 112, 0, 51, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD8F0);
  *(_QWORD *)(v11 + 112) = v12;
  *(_QWORD *)(v11 + 120) = 51;
  *(__m128i *)v12 = si128;
  v14 = _mm_load_si128((const __m128i *)&xmmword_5DD900);
  *(_WORD *)(v12 + 48) = 26479;
  *(__m128i *)(v12 + 16) = v14;
  *(__m128i *)(v12 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DD910);
  *(_BYTE *)(*(_QWORD *)(v11 + 112) + 50LL) = 0;
  v15 = *(_QWORD *)(v10 + 16);
  *(_DWORD *)(v11 + 32) = 1;
  v16 = *(_QWORD *)(v10 + 8);
  *(_QWORD *)v11 = &forms::check_box_t___vtable;
  if ( *(_QWORD *)(v10 + 24) < (unsigned __int64)(v15 + 1) )
  {
    v27 = qvector_reserve(v10 + 8, v16, v15 + 1, 8);
    *(_QWORD *)(v10 + 8) = v27;
    v16 = v27;
    v15 = *(_QWORD *)(v10 + 16);
  }
  *(_QWORD *)(v16 + 8 * v15) = v11;
  ++*(_QWORD *)(v10 + 16);
  v17 = operator new(0x88u);
  *(_QWORD *)v17 = &forms::abstract_button_t___vtable;
  *(_QWORD *)(v17 + 8) = 0x100000007LL;
  *(_QWORD *)(v17 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v17 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v17 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v17 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v17 + 48) = 0;
  *(_QWORD *)(v17 + 56) = 0;
  *(_QWORD *)(v17 + 80) = 0;
  *(_QWORD *)(v17 + 104) = &byte_8BA840;
  *(_QWORD *)(v17 + 112) = 0;
  *(_OWORD *)(v17 + 64) = 0;
  *(_OWORD *)(v17 + 88) = 0;
  *(_OWORD *)(v17 + 120) = 0;
  v18 = qvector_reserve(v17 + 112, 0, 43, 1);
  v19 = _mm_load_si128((const __m128i *)&xmmword_5DD920);
  *(_QWORD *)(v17 + 112) = v18;
  *(_QWORD *)(v17 + 120) = 43;
  *(__m128i *)v18 = v19;
  *(__m128i *)(v18 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DD930);
  *(__m128i *)(v18 + 26) = _mm_load_si128((const __m128i *)&xmmword_5DD940);
  *(_BYTE *)(*(_QWORD *)(v17 + 112) + 42LL) = 0;
  v20 = *(_QWORD *)(v10 + 16);
  *(_DWORD *)(v17 + 32) = 1;
  v21 = *(const char **)(v10 + 8);
  *(_QWORD *)v17 = &forms::check_box_t___vtable;
  if ( *(_QWORD *)(v10 + 24) < (unsigned __int64)(v20 + 1) )
  {
    v26 = qvector_reserve(v10 + 8, v21, v20 + 1, 8);
    *(_QWORD *)(v10 + 8) = v26;
    v21 = (const char *)v26;
    v20 = *(_QWORD *)(v10 + 16);
  }
  *(_QWORD *)&v21[8 * v20] = v17;
  v22 = *(_QWORD *)(a1 + 176);
  ++*(_QWORD *)(v10 + 16);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 184) = 0;
    qfree(v22, v21);
    *(_QWORD *)(a1 + 176) = 0;
    *(_QWORD *)(a1 + 192) = 0;
  }
  *(_DWORD *)(a1 + 168) = 0;
  return v30 - __readfsqword(0x28u);
}
