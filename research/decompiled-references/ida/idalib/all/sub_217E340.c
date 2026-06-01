__int64 __fastcall sub_217E340(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rbp
  _BYTE *v14; // rax
  _BYTE *v15; // rsi
  __m128i v16; // xmm1
  unsigned __int64 v17; // rbp
  char *v18; // rax
  char *v19; // rcx
  size_t v20; // r13
  __m128i v21; // xmm0
  bool v22; // zf
  __m128i v23; // [rsp+8h] [rbp-170h] BYREF
  __int64 v24; // [rsp+18h] [rbp-160h] BYREF
  _QWORD v25[4]; // [rsp+20h] [rbp-158h] BYREF
  __int16 v26; // [rsp+40h] [rbp-138h]
  __m128i v27; // [rsp+50h] [rbp-128h] BYREF
  const char *v28; // [rsp+60h] [rbp-118h]
  __int16 v29; // [rsp+70h] [rbp-108h]
  __m128i v30[2]; // [rsp+80h] [rbp-F8h] BYREF
  __int16 v31; // [rsp+A0h] [rbp-D8h]
  __m128i v32[3]; // [rsp+B0h] [rbp-C8h] BYREF
  __m128i v33[2]; // [rsp+E0h] [rbp-98h] BYREF
  __int16 v34; // [rsp+100h] [rbp-78h]
  __m128i v35; // [rsp+110h] [rbp-68h] BYREF
  void *src; // [rsp+120h] [rbp-58h]
  _BYTE *v37; // [rsp+128h] [rbp-50h]
  void *ptr[3]; // [rsp+138h] [rbp-40h] BYREF
  char v39; // [rsp+150h] [rbp-28h] BYREF

  if ( a3 > 0x3F )
  {
    sub_216E640(&v35, a2, a3);
    v14 = v37;
    v15 = src;
    *(_QWORD *)(a1 + 16) = 0;
    v16 = _mm_load_si128(&v35);
    *(_BYTE *)(a1 + 64) &= ~1u;
    *(_QWORD *)(a1 + 24) = 0;
    v17 = v14 - v15;
    *(__m128i *)a1 = v16;
    *(_QWORD *)(a1 + 32) = 0;
    if ( (v14 - v15) >> 6 )
    {
      if ( (unsigned __int64)((v14 - v15) >> 6) > 0x3FFFFFFFFFFFFFFLL )
        std::__throw_bad_alloc();
      v18 = (char *)operator new(v17);
      v15 = src;
      v19 = v18;
      v14 = v37;
      v20 = v37 - (_BYTE *)src;
    }
    else
    {
      v20 = v14 - v15;
      v19 = nullptr;
    }
    v23.m128i_i64[0] = (__int64)v19;
    v21 = _mm_loadl_epi64(&v23);
    *(_QWORD *)(a1 + 32) = &v19[v17];
    *(__m128i *)(a1 + 16) = _mm_unpacklo_epi64(v21, v21);
    if ( v14 != v15 )
      v19 = (char *)memmove(v19, v15, v20);
    v22 = ptr[1] == nullptr;
    *(_QWORD *)(a1 + 24) = &v19[v20];
    *(_QWORD *)(a1 + 40) = a1 + 64;
    *(_OWORD *)(a1 + 48) = 0;
    if ( !v22 )
      sub_9C3DB0((void **)(a1 + 40), (const void **)ptr);
    if ( ptr[0] != &v39 )
      free(ptr[0]);
    if ( src )
      operator delete(src);
  }
  else
  {
    v23.m128i_i64[1] = a3;
    v26 = 2819;
    v33[0].m128i_i64[0] = (__int64)")";
    v34 = 259;
    v30[0].m128i_i64[0] = (__int64)&v24;
    v25[0] = "invalid buffer: the size (";
    v25[2] = &v23.m128i_i64[1];
    v27.m128i_i64[0] = (__int64)v25;
    v29 = 770;
    v31 = 267;
    v28 = ") is smaller than an ELF header (";
    v24 = 64;
    sub_A41580(v32, &v27, v30, 267, a5, a6);
    sub_A41580(&v35, v32, v33, v6, v7, v8);
    v11 = sub_2195B10(&v35, v32, v9, v10);
    v12 = operator new(0x40u);
    sub_2220590(v12, &v35, 3, v11);
    *(_BYTE *)(a1 + 64) |= 1u;
    *(_QWORD *)a1 = v12;
  }
  return a1;
}
