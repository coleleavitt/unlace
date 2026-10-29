__int64 sub_16DF00()
{
  __int64 Extent; // rax
  unsigned __int64 v1; // rdx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  size_t v4; // rax
  unsigned __int64 v5; // rbp
  char *v6; // r15
  unsigned __int64 v7; // r12
  unsigned int v8; // eax
  size_t v9; // r13
  size_t v10; // rax
  __int64 v11; // r15
  size_t v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  void *v16; // rbp
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  unsigned __int64 v19; // rax
  __m128i v20; // xmm0
  unsigned __int64 v21; // rax
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i *v24; // rax
  __m128i *v25; // rax
  __int64 v26; // rbp
  __int32 v27; // eax
  __int32 v28; // r13d
  unsigned int v29; // r15d
  unsigned int v30; // r14d
  __int32 v31; // r12d
  TView *v32; // r13
  TView *v33; // rbp
  unsigned __int64 v34; // rdx
  __int64 v35; // r12
  __int64 v36; // rbx
  _QWORD *v37; // rax
  const char *errdesc; // rax
  unsigned int v40; // [rsp+8h] [rbp-590h]
  TView *v41; // [rsp+10h] [rbp-588h]
  __m128i v42; // [rsp+20h] [rbp-578h] BYREF
  __m128i v43; // [rsp+30h] [rbp-568h] BYREF
  __m128i v44; // [rsp+40h] [rbp-558h] BYREF
  __m128i v45; // [rsp+50h] [rbp-548h] BYREF
  int v46; // [rsp+60h] [rbp-538h]
  unsigned __int64 v47; // [rsp+70h] [rbp-528h] BYREF
  __int128 v48; // [rsp+78h] [rbp-520h]
  __m128i v49; // [rsp+88h] [rbp-510h] BYREF
  __m128i v50; // [rsp+98h] [rbp-500h] BYREF
  void *v51; // [rsp+B0h] [rbp-4E8h] BYREF
  __m128i v52[3]; // [rsp+B8h] [rbp-4E0h] BYREF
  __int64 v53; // [rsp+E8h] [rbp-4B0h]
  __m128i v54; // [rsp+F0h] [rbp-4A8h]
  __m128i v55; // [rsp+100h] [rbp-498h]
  __int64 v56; // [rsp+110h] [rbp-488h]
  __int128 v57; // [rsp+118h] [rbp-480h]
  __m128i *v58; // [rsp+128h] [rbp-470h]
  __int64 v59; // [rsp+130h] [rbp-468h]
  char v60; // [rsp+138h] [rbp-460h]
  __int128 v61; // [rsp+13Ch] [rbp-45Ch]
  char s[1032]; // [rsp+150h] [rbp-448h] BYREF
  unsigned __int64 v63; // [rsp+558h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  Extent = TView::getExtent(TProgram::deskTop);
  v43 = _mm_add_epi32(_mm_unpacklo_epi64((__m128i)(unsigned __int64)Extent, (__m128i)v1), (__m128i)xmmword_1D24D0);
  v41 = (TView *)operator new(0xB0u);
  TDialog::TDialog(v41, &v43, "IDA License");
  v2 = TView::getExtent(v41);
  v47 = 0;
  v49.m128i_i64[1] = 0;
  v49.m128i_i64[0] = (__int64)off_234638;
  v50.m128i_i64[0] = (__int64)off_234638;
  v43 = _mm_add_epi32(_mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)v3), (__m128i)xmmword_1D2BF0);
  v50.m128i_i64[1] = 0;
  v48 = 0;
  if ( fopenRT() )
  {
    while ( qfgets() )
    {
      v4 = strlen(s);
      if ( v4 )
      {
        v5 = v4 - 1;
        s[v4 - 1] = 0;
        if ( v4 != 1 )
        {
          v6 = s;
          v7 = 0;
          do
          {
            if ( *v6 == 9 )
            {
              v8 = 8 - (v7 & 7);
              if ( v8 == 1 )
              {
                *v6 = 32;
              }
              else
              {
                v5 += ~(_BYTE)v7 & 7;
                if ( v5 > 0x3FF )
                  v5 = 1023;
                if ( v5 < v7 + v8 )
                  v8 = v5 - v7;
                v9 = (int)v8;
                memmove(&s[v7 + (int)v8], v6 + 1, v5 - (v7 + (int)v8));
                memset(v6, 32, v9);
                s[v5] = 0;
              }
            }
            ++v7;
            ++v6;
          }
          while ( v7 < v5 );
        }
      }
      v51 = nullptr;
      v52[0] = 0;
      v10 = strlen(s);
      v11 = v10 + 1;
      v12 = v10;
      v51 = (void *)qvector_reserve();
      v52[0].m128i_i64[0] = v11;
      memmove(v51, s, v12);
      *((_BYTE *)v51 + v12) = 0;
      v13 = v48;
      v14 = v47;
      v15 = v48 + 1;
      if ( (unsigned __int64)&v51 < v47 || (unsigned __int64)&v51 >= v47 + 24LL * *((_QWORD *)&v48 + 1) )
      {
        if ( *((_QWORD *)&v48 + 1) < v15 )
        {
          v47 = qvector_reserve();
          v14 = v47;
          v13 = v48;
        }
        v20 = _mm_loadu_si128(v52);
        v21 = v14 + 24 * v13;
        *(_QWORD *)v21 = v51;
        *(__m128i *)(v21 + 8) = v20;
        *(_QWORD *)&v48 = v48 + 1;
      }
      else
      {
        v16 = v51;
        v17 = _mm_loadl_epi64(v52);
        v51 = nullptr;
        v18 = _mm_loadl_epi64((const __m128i *)&v52[0].m128i_u64[1]);
        v52[0] = 0;
        if ( *((_QWORD *)&v48 + 1) < v15 )
        {
          v42.m128i_i64[1] = v18.m128i_i64[0];
          v42.m128i_i64[0] = v17.m128i_i64[0];
          v47 = qvector_reserve();
          v14 = v47;
          v18 = _mm_loadl_epi64((const __m128i *)&v42.m128i_u64[1]);
          v13 = v48;
          v17 = _mm_loadl_epi64(&v42);
        }
        v19 = v14 + 24 * v13;
        *(_QWORD *)v19 = v16;
        *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v17, v18);
        *(_QWORD *)&v48 = v48 + 1;
        if ( v51 )
        {
          v52[0].m128i_i64[0] = 0;
          qfree();
        }
      }
    }
    qfclose();
    v49.m128i_i32[3] = 0;
    v50.m128i_i32[3] = v48;
    v51 = nullptr;
    v53 = 0;
    v55.m128i_i64[0] = 0;
    v55.m128i_i64[1] = -1;
    v56 = 0;
    v58 = nullptr;
    v59 = 0;
    memset(v52, 0, sizeof(v52));
    v54 = 0;
    v57 = 0;
    sub_15B6C0((__int64)&v44, 1);
    v22 = _mm_load_si128(&v44);
    v60 = 0;
    v54 = v22;
    v23 = _mm_load_si128(&v45);
    LODWORD(v56) = v46;
    v55 = v23;
    v61 = 0;
    sub_15B5F0((__int64)&v51, &v43, (__int64)&v47);
    sub_15B710(&v51, 1);
    v24 = (__m128i *)qalloc();
    if ( !v24 )
      sub_98F10((__int64)"fileplace");
    *v24 = _mm_loadu_si128(&v49);
    *((_QWORD *)&v57 + 1) = v24;
    v25 = (__m128i *)qalloc();
    if ( !v25 )
      sub_98F10((__int64)"fileplace");
    *v25 = _mm_loadu_si128(&v50);
    v58 = v25;
    v26 = operator new(0x488u);
    sub_168AD0((TView *)v26, nullptr, (int *)&v51);
    *(_QWORD *)v26 = &off_23A840;
    *(_QWORD *)(v26 + 72) = &off_23AB10;
    *(_QWORD *)(v26 + 104) = off_23AB28;
    *(_QWORD *)(v26 + 160) = off_23AB58;
    dword_250314 = internal_register_place_class();
    TGroup::insert(v41, (TView *)v26);
    if ( !TFileList::getKey((TFileList *)TProgram::application, (const char *)v41) )
      sub_98F10((__int64)"license");
    v27 = v43.m128i_i32[2];
    *(_WORD *)(v26 + 24) &= ~1u;
    v28 = v43.m128i_i32[3];
    v29 = v43.m128i_i32[3] + 1;
    v30 = v27 / 2 - 8 - cstrlen("I agree");
    v33 = (TView *)operator new(0x58u);
    v40 = v28 + 3;
    v44 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), _mm_cvtsi32_si128(v29)),
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(v30 + (unsigned int)cstrlen("I agree") + 4),
              _mm_cvtsi32_si128(v28 + 3)));
    TButton::TButton(v33, &v44, "I agree", 10, 0);
    v31 = v43.m128i_i32[2] / 2;
    v32 = (TView *)operator new(0x58u);
    v44 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v31 + 4), _mm_cvtsi32_si128(v29)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v31 + (unsigned int)cstrlen("I disagree") + 8), _mm_cvtsi32_si128(v40)));
    TButton::TButton(v32, &v44, "I disagree", 11, 0);
    TGroup::insert(v41, v33);
    TGroup::insert(v41, v32);
    LOBYTE(v33) = (unsigned __int16)TGroup::execView(TProgram::deskTop, v41) == 10;
    if ( v41 )
    {
      (*(void (__fastcall **)(TView *))(*(_QWORD *)v41 + 16LL))(v41);
      (*(void (__fastcall **)(TView *))(*(_QWORD *)v41 + 8LL))(v41);
    }
    LODWORD(v33) = (unsigned __int8)v33;
    qfree();
    *((_QWORD *)&v57 + 1) = 0;
    qfree();
    v58 = nullptr;
    if ( (_QWORD)v57 )
      qfree();
  }
  else
  {
    errdesc = (const char *)get_errdesc();
    sub_92120((__int64)"%s", errdesc);
    LODWORD(v33) = -1;
  }
  v34 = v47;
  if ( v47 )
  {
    v35 = v48;
    if ( (_QWORD)v48 )
    {
      v36 = 0;
      do
      {
        v37 = (_QWORD *)(v34 + 24 * v36);
        if ( *v37 )
        {
          v37[1] = 0;
          qfree();
          v34 = v47;
        }
        ++v36;
      }
      while ( v35 != v36 );
    }
    *(_QWORD *)&v48 = 0;
    qfree();
  }
  return (unsigned int)v33;
}

