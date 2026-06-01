__int64 __fastcall sub_189120(
        TGroup *this,
        int *a2,
        unsigned int a3,
        const char *a4,
        unsigned __int8 a5,
        int a6,
        int a7,
        __int16 a8,
        __int64 a9,
        __int64 *a10)
{
  const char *v11; // r12
  int v12; // eax
  char *v13; // rax
  int v14; // ebx
  int utf8_char; // eax
  const char *v16; // rdx
  __int64 v17; // rbp
  TView *v18; // rbx
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rsi
  TView *v23; // rbx
  __int64 v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  int v31; // [rsp+Ch] [rbp-9Ch]
  unsigned int v33; // [rsp+14h] [rbp-94h]
  unsigned int v35; // [rsp+2Ch] [rbp-7Ch]
  __m128i v36; // [rsp+30h] [rbp-78h] BYREF
  __m128i v37; // [rsp+40h] [rbp-68h] BYREF
  const char *v38; // [rsp+50h] [rbp-58h] BYREF
  __int128 v39; // [rsp+58h] [rbp-50h]
  unsigned __int64 v40; // [rsp+68h] [rbp-40h]

  v11 = a4;
  v12 = *a2;
  v40 = __readfsqword(0x28u);
  v31 = v12;
  v13 = strrchr(a4, 35);
  if ( v13 )
    v11 = v13 + 1;
  v14 = 0;
  v38 = v11;
  if ( *v11 )
  {
    do
    {
      utf8_char = get_utf8_char();
      v16 = v38;
      if ( utf8_char == -1 )
      {
        ++v38;
        utf8_char = *(unsigned __int8 *)v16++;
      }
      v14 += utf8_char != 126;
    }
    while ( *v16 );
  }
  v35 = v14 + v31;
  v36 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14 + v31), _mm_cvtsi32_si128(a3)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14 + v31 + a7), _mm_cvtsi32_si128(a3 + 1)));
  v33 = sub_1856D0((__int64)this, a5, a6);
  v17 = operator new(0x80u);
  TInputLine::TInputLine(v17, &v36, v33);
  if ( !TFileList::getKey((TFileList *)TProgram::application, (const char *)v17) )
    return 0;
  *(_WORD *)(v17 + 50) = a8;
  TGroup::insert(this, (TView *)v17);
  v39 = 0;
  v38 = nullptr;
  if ( (unsigned __int8)sub_185740((__int64)this, a9, a5, &v38, 0) )
  {
    if ( (unsigned __int64)v39 > 1 )
      (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v17 + 104LL))(v17, v38);
    v36.m128i_i32[0] = v36.m128i_i32[2];
    v36.m128i_i32[2] += 3;
    v18 = (TView *)operator new(0x70u);
    THistory::THistory(v18, &v36, v17, a5, 0, v19);
    TGroup::insert(this, v18);
    v20 = a10[1];
    v21 = *a10;
    v37.m128i_i64[0] = (__int64)v18;
    if ( a10[2] < (unsigned __int64)(v20 + 1) )
    {
      v28 = qvector_reserve();
      *a10 = v28;
      *(_QWORD *)(v28 + 8 * a10[1]++) = v18;
      if ( !*v11 )
        goto LABEL_13;
    }
    else
    {
      *(_QWORD *)(v21 + 8 * v20) = v18;
      ++a10[1];
      if ( !*v11 )
      {
LABEL_13:
        *a2 = v36.m128i_i32[2];
        goto LABEL_14;
      }
    }
    v23 = (TView *)operator new(0x60u);
    v37 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v31 - 1), _mm_cvtsi32_si128(a3)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v35), _mm_cvtsi32_si128(a3 + 1)));
    TLabel::TLabel(v23, &v37, v11, v17);
    TGroup::insert(this, v23);
    v24 = *((_QWORD *)this + 26);
    sub_1890A0((__int64 *)this + 64, (int)v24);
    *(_QWORD *)(*((_QWORD *)this + 64) + 8LL * ((int)v24 - 1)) = v23;
    v25 = a10[1];
    v26 = a10[2];
    v27 = *a10;
    v37.m128i_i64[0] = (__int64)v23;
    if ( v26 < v25 + 1 )
    {
      v29 = qvector_reserve();
      *a10 = v29;
      v27 = v29;
      v25 = a10[1];
    }
    *(_QWORD *)(v27 + 8 * v25) = v23;
    ++a10[1];
    goto LABEL_13;
  }
  v17 = 0;
LABEL_14:
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  return v17;
}

