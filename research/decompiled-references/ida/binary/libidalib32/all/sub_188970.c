__int64 __fastcall sub_188970(
        TGroup *this,
        int *a2,
        unsigned int a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int16 a8,
        __int64 a9,
        __int64 *a10)
{
  const char *v11; // rbp
  int v12; // eax
  char *v13; // rax
  int v14; // ebx
  int utf8_char; // eax
  _BYTE *v16; // rdx
  __int64 v17; // rbx
  TView *v18; // r13
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v23; // rax
  TView *v24; // r13
  __int64 v25; // rbp
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rax
  int v30; // [rsp+8h] [rbp-90h]
  int v32; // [rsp+10h] [rbp-88h]
  unsigned int v34; // [rsp+2Ch] [rbp-6Ch]
  __m128i v35; // [rsp+30h] [rbp-68h] BYREF
  __m128i v36; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v11 = a4;
  v12 = 10;
  if ( a7 )
    v12 = a7;
  v37 = __readfsqword(0x28u);
  v32 = v12;
  v30 = *a2;
  v13 = strrchr(a4, 35);
  if ( v13 )
    v11 = v13 + 1;
  v14 = 0;
  v36.m128i_i64[0] = (__int64)v11;
  if ( *v11 )
  {
    do
    {
      utf8_char = get_utf8_char();
      v16 = (_BYTE *)v36.m128i_i64[0];
      if ( utf8_char == -1 )
      {
        ++v36.m128i_i64[0];
        utf8_char = (unsigned __int8)*v16++;
      }
      v14 += utf8_char != 126;
    }
    while ( *v16 );
  }
  v34 = v14 + v30;
  v35 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14 + v30), _mm_cvtsi32_si128(a3)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14 + v30 + v32), _mm_cvtsi32_si128(a3 + 1)));
  v17 = operator new(0x80u);
  TInputLine::TInputLine(v17, &v35, 1024);
  if ( !TFileList::getKey((TFileList *)TProgram::application, (const char *)v17) )
    return 0;
  TInputLine::setReadOnly((TInputLine *)v17, a6 == 0);
  *(_WORD *)(v17 + 50) = a8;
  TGroup::insert(this, (TView *)v17);
  v35.m128i_i32[0] = v35.m128i_i32[2];
  v35.m128i_i32[2] += 3;
  v18 = (TView *)operator new(0x70u);
  THistory::THistory(v18, &v35, v17, 0, a9, v19);
  TGroup::insert(this, v18);
  v20 = a10[1];
  v21 = a10[2];
  v36.m128i_i64[0] = (__int64)v18;
  if ( v21 < v20 + 1 )
  {
    v23 = qvector_reserve();
    *a10 = v23;
    *(_QWORD *)(v23 + 8 * a10[1]++) = v18;
    if ( !*v11 )
      goto LABEL_12;
LABEL_15:
    v24 = (TView *)operator new(0x60u);
    v36 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30 - 1), _mm_cvtsi32_si128(a3)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v34), _mm_cvtsi32_si128(a3 + 1)));
    TLabel::TLabel(v24, &v36, v11, v17);
    TGroup::insert(this, v24);
    v25 = *((_QWORD *)this + 26);
    sub_188560((__int64 *)this + 64, (int)v25);
    *(_QWORD *)(*((_QWORD *)this + 64) + 8LL * ((int)v25 - 1)) = v24;
    v26 = a10[1];
    v27 = a10[2];
    v28 = *a10;
    v36.m128i_i64[0] = (__int64)v24;
    if ( v27 < v26 + 1 )
    {
      v29 = qvector_reserve();
      *a10 = v29;
      v28 = v29;
      v26 = a10[1];
    }
    *(_QWORD *)(v28 + 8 * v26) = v24;
    ++a10[1];
    goto LABEL_12;
  }
  *(_QWORD *)(*a10 + 8 * v20) = v18;
  ++a10[1];
  if ( *v11 )
    goto LABEL_15;
LABEL_12:
  *a2 = v35.m128i_i32[2];
  return v17;
}

