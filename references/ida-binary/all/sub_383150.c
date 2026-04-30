unsigned __int64 __fastcall sub_383150(_QWORD *a1, __m128i a2)
{
  int v3; // r13d
  __int64 v4; // rbx
  bool v5; // zf
  __int64 v6; // rbx
  const char *v7; // rax
  __int64 v8; // rdx
  __m128i v9; // xmm2
  __int64 (__fastcall ***v10)(); // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  size_t v13; // rax
  __int64 v14; // r15
  size_t v15; // rbp
  _QWORD *v16; // rbx
  void *v17; // rbp
  __int64 v18; // rdi
  void *v19; // rdi
  _WORD *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rbp
  __int64 v25; // rbp
  _WORD *v26; // rsi
  _WORD *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 *v34; // rax
  __int64 v35; // r15
  __int64 v36; // r13
  __int128 v37; // xmm1
  __int64 v38; // rdx
  __m128i v39; // xmm0
  __int64 v40; // rdx
  __m128i v41; // xmm0
  __int64 v42; // rdi
  __m128i v44; // [rsp+0h] [rbp-4C8h] BYREF
  __int64 *v45; // [rsp+10h] [rbp-4B8h]
  __int64 (__fastcall ***v46)(); // [rsp+18h] [rbp-4B0h]
  __m128i v47; // [rsp+20h] [rbp-4A8h] BYREF
  void *v48; // [rsp+30h] [rbp-498h] BYREF
  __m128i v49; // [rsp+38h] [rbp-490h] BYREF
  __int64 (__fastcall **v50)(); // [rsp+50h] [rbp-478h] BYREF
  char s[1024]; // [rsp+58h] [rbp-470h] BYREF
  __m128i v52; // [rsp+458h] [rbp-70h] BYREF
  const char *v53; // [rsp+468h] [rbp-60h]
  char v54; // [rsp+470h] [rbp-58h]
  __int64 *v55; // [rsp+478h] [rbp-50h]
  __int64 v56; // [rsp+480h] [rbp-48h]
  unsigned __int64 v57; // [rsp+488h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v45 = &qword_8CF1E0;
  v44 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)s, (__m128i)(unsigned __int64)&v52);
  if ( !byte_8CF1D0 )
  {
    byte_8CF1D0 = 1;
    v21 = (_WORD *)qword_8CF220;
    if ( *((_QWORD *)&xmmword_8CF228 + 1) <= 2u )
    {
      qword_8CF220 = qvector_reserve(&qword_8CF220, qword_8CF220, 3, 1);
      v21 = (_WORD *)qword_8CF220;
    }
    *(_QWORD *)&xmmword_8CF228 = 3;
    *v21 = 12079;
    *(_BYTE *)(qword_8CF220 + 2) = 0;
    v23 = *((_QWORD *)&xmmword_8CF240 + 1);
    v22 = xmmword_8CF240;
    if ( *((_QWORD *)&xmmword_8CF240 + 1) < (unsigned __int64)(xmmword_8CF240 + 1) )
    {
      v32 = qvector_reserve(&qword_8CF238, 0, xmmword_8CF240 + 1, 48);
      v33 = qword_8CF238;
      v24 = v32;
      v34 = *((__int64 **)&xmmword_8CF240 + 1);
      *((_QWORD *)&xmmword_8CF240 + 1) = v23;
      v45 = v34;
      v35 = xmmword_8CF240 - 1;
      if ( (__int64)xmmword_8CF240 - 1 >= 0 )
      {
        v36 = v24;
        v37 = 0;
        do
        {
          v38 = *(_QWORD *)v33;
          v39 = _mm_loadu_si128((const __m128i *)(v33 + 8));
          *(_QWORD *)v33 = 0;
          *(_OWORD *)(v33 + 8) = v37;
          *(_QWORD *)v36 = v38;
          *(__m128i *)(v36 + 8) = v39;
          v40 = *(_QWORD *)(v33 + 24);
          v41 = _mm_loadu_si128((const __m128i *)(v33 + 32));
          *(_QWORD *)(v33 + 24) = 0;
          *(_QWORD *)(v36 + 24) = v40;
          *(__m128i *)(v36 + 32) = v41;
          v42 = *(_QWORD *)v33;
          *(_QWORD *)(v33 + 40) = 0;
          if ( v42 )
          {
            *(_QWORD *)(v33 + 8) = 0;
            qfree(v42, nullptr);
            v37 = 0;
          }
          v33 += 48;
          v36 += 48;
        }
        while ( v35-- != 0 );
        v33 = qword_8CF238;
      }
      qfree(v33, nullptr);
      qword_8CF238 = v24;
      *((_QWORD *)&xmmword_8CF240 + 1) = v45;
      v22 = xmmword_8CF240;
    }
    else
    {
      v24 = qword_8CF238;
    }
    a2.m128i_i64[0] = 0;
    v25 = 48 * v22 + v24;
    *(_QWORD *)v25 = 0;
    *(_OWORD *)(v25 + 8) = 0;
    *(_QWORD *)(v25 + 24) = 0;
    *(_OWORD *)(v25 + 32) = 0;
    *(_QWORD *)&xmmword_8CF240 = xmmword_8CF240 + 1;
    v26 = *(_WORD **)v25;
    if ( *(_QWORD *)(v25 + 16) <= 2u )
    {
      v31 = qvector_reserve(v25, v26, 3, 1);
      *(_QWORD *)v25 = v31;
      v26 = (_WORD *)v31;
    }
    *(_QWORD *)(v25 + 8) = 3;
    *v26 = 10799;
    *(_BYTE *)(*(_QWORD *)v25 + 2LL) = 0;
    v27 = *(_WORD **)(v25 + 24);
    if ( *(_QWORD *)(v25 + 40) <= 2u )
    {
      v30 = qvector_reserve(v25 + 24, v27, 3, 1);
      *(_QWORD *)(v25 + 24) = v30;
      v27 = (_WORD *)v30;
    }
    *(_QWORD *)(v25 + 32) = 3;
    *v27 = 12074;
    *(_BYTE *)(*(_QWORD *)(v25 + 24) + 2LL) = 0;
    v28 = xmmword_8CF270;
    v29 = qword_8CF268;
    if ( *((_QWORD *)&xmmword_8CF270 + 1) < (unsigned __int64)(xmmword_8CF270 + 1) )
    {
      qword_8CF268 = qvector_reserve(&qword_8CF268, qword_8CF268, xmmword_8CF270 + 1, 8);
      v29 = qword_8CF268;
      v28 = xmmword_8CF270;
    }
    *(_QWORD *)(v29 + 8 * v28) = &off_8BCA60;
    word_8CF298 = 9052;
    v45 = &qword_8CF1E0;
    *(_QWORD *)&xmmword_8CF270 = xmmword_8CF270 + 1;
    dword_8CF294 = 656876066;
    sub_382900(
      &qword_8CF1E0,
      "and|and_eq|alignas|alignof|asm|auto|bitand|bitor|bool|break|case|catch|char|char16_t|char32_t|class|compl|const|co"
      "nstexpr|const_cast|continue|decltype|default|delete|double|dynamic_cast|else|enum|explicit|export|extern|float|for"
      "|friend|goto|if|inline|int|long|mutable|namespace|new|noexcept|not|not_eq|nullptr|operator|or|or_eq|private|protec"
      "ted|public|register|reinterpret_cast|return|short|signed|sizeof|static|static_assert|static_cast|struct|switch|tem"
      "plate|this|thread_local|throw|try|typedef|typeid|typename|union|unsigned|using|virtual|void|volatile|wchar_t|while|xor|xor_eq",
      1);
    sub_382900(&qword_8CF1E0, "true", 2);
    sub_382900(&qword_8CF1E0, "false|nullptr", 3);
  }
  v3 = 0;
  v4 = 0;
  v5 = a1[1] == 0;
  v50 = str_colorizer_cbs_t___vtable;
  v56 = 0;
  v55 = v45;
  v46 = &v50;
  if ( !v5 )
  {
    do
    {
      v6 = 32 * v4;
      v7 = &s1;
      v8 = v6 + *a1;
      if ( *(_QWORD *)(v8 + 8) )
        v7 = *(const char **)v8;
      v9 = _mm_load_si128(&v44);
      v53 = v7;
      v54 = -1;
      v10 = v46;
      v52 = v9;
      qword_8CF1E8(v45, v46);
      if ( v52.m128i_i64[0] >= (unsigned __int64)v52.m128i_i64[1] )
      {
        if ( !under_debugger )
          interr(519, v10, v11, v12, *(double *)a2.m128i_i64);
        BUG();
      }
      *(_BYTE *)v52.m128i_i64[0] = 0;
      v48 = nullptr;
      HIDWORD(v56) = v56;
      v49 = 0;
      v13 = strlen(s);
      v14 = v13 + 1;
      v15 = v13;
      v48 = (void *)qvector_reserve(&v48, 0, v13 + 1, 1);
      v49.m128i_i64[0] = v14;
      memmove(v48, s, v15);
      *((_BYTE *)v48 + v15) = 0;
      v16 = (_QWORD *)(*a1 + v6);
      v17 = v48;
      a2 = _mm_loadu_si128(&v49);
      v49 = 0;
      v48 = nullptr;
      v18 = *v16;
      if ( *v16 )
      {
        v16[1] = 0;
        v47 = a2;
        qfree(v18, s);
        a2 = _mm_load_si128(&v47);
      }
      *v16 = v17;
      v19 = v48;
      *(__m128i *)(v16 + 1) = a2;
      if ( v19 )
      {
        v49.m128i_i64[0] = 0;
        *(double *)a2.m128i_i64 = qfree(v19, s);
      }
      v4 = ++v3;
      HIDWORD(v56) = v56;
    }
    while ( (unsigned __int64)v3 < a1[1] );
  }
  return v57 - __readfsqword(0x28u);
}
