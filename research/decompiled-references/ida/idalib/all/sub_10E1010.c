const char *__fastcall sub_10E1010(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  const char *v4; // r12
  char *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rbp
  _QWORD *v8; // rax
  const char *v10; // rax
  size_t v11; // rax
  void *ptr; // [rsp+0h] [rbp-108h] BYREF
  __m128i si128; // [rsp+8h] [rbp-100h]
  _BYTE *v14[2]; // [rsp+20h] [rbp-E8h] BYREF
  char v15; // [rsp+30h] [rbp-D8h]
  void *v16[2]; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v17[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+70h] [rbp-98h]
  __m128i v19; // [rsp+80h] [rbp-88h] BYREF
  __m128i v20; // [rsp+90h] [rbp-78h] BYREF
  __m128i v21; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-58h]

  ptr = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  if ( a3 == 11 && *(_QWORD *)a2 == 0x70736E6367646D61LL && *(_WORD *)(a2 + 8) == 29289 && *(_BYTE *)(a2 + 10) == 118 )
  {
    v19.m128i_i64[0] = (__int64)&v20;
    v11 = j__strlen("spirv64-amd-amdhsa");
    sub_10D8DB0(&v19, "spirv64-amd-amdhsa", (__int64)&aSpirv64AmdAmdh[v11]);
    sub_22B9ED0(v16, &v19);
    if ( (__m128i *)v19.m128i_i64[0] != &v20 )
      operator delete((void *)v19.m128i_i64[0]);
  }
  else
  {
    sub_10E0BC0(&v19, **(__int64 ***)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL));
    v16[0] = v17;
    if ( (__m128i *)v19.m128i_i64[0] == &v20 )
    {
      v17[0] = _mm_load_si128(&v20);
    }
    else
    {
      v16[0] = (void *)v19.m128i_i64[0];
      *(_QWORD *)&v17[0] = v20.m128i_i64[0];
    }
    v16[1] = (void *)v19.m128i_i64[1];
    v17[1] = _mm_load_si128(&v21);
    v18 = v22;
  }
  sub_102B150((__int64)v14, (__int64)v16, a2, a3, &ptr);
  if ( v15 )
  {
    sub_102A6F0((__int64)&v19, v14[0], (__int64)v14[1], (__int64)&ptr);
    v10 = (const char *)sub_21B6340(*(_QWORD *)(a1 + 48), v19.m128i_i64[0], v19.m128i_i64[1]);
    v4 = v10;
    if ( v10 )
      j__strlen(v10);
    if ( (__m128i *)v19.m128i_i64[0] != &v20 )
      operator delete((void *)v19.m128i_i64[0]);
  }
  else
  {
    sub_FC70B0((__int64)&v19, ***(_QWORD ***)(a1 + 8), 0, 326);
    sub_AEC220((unsigned __int8 **)&v19, (_BYTE *)a2, a3);
    v4 = nullptr;
    sub_AEA040((__int64)&v19);
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 521LL) = 1;
  }
  if ( v16[0] != v17 )
    operator delete(v16[0]);
  v5 = (char *)ptr;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v6 = 0;
    v7 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    do
    {
      v8 = *(_QWORD **)&v5[v6];
      if ( v8 && v8 != (_QWORD *)-8LL )
      {
        operator delete(*(_QWORD *)&v5[v6], *v8 + 17LL, 8);
        v5 = (char *)ptr;
      }
      v6 += 8;
    }
    while ( v7 != v6 );
  }
  free(v5);
  return v4;
}
