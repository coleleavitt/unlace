unsigned __int64 __fastcall sub_18CCA0(__int64 *a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
  __int64 v5; // r9
  __int64 v7; // rsi
  TView *v8; // r12
  __m128i v9; // xmm0
  __int64 v10; // rax
  __m128i v12; // [rsp+0h] [rbp-48h] BYREF
  __m128i v13; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v5 = *a1;
  v14 = __readfsqword(0x28u);
  v7 = a1[7];
  TInputLine::disableReselect = 1;
  v8 = *(TView **)(v7 + 72);
  v9 = _mm_unpacklo_epi64(
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a3)),
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2 + a4), _mm_cvtsi32_si128(a3 + a5)));
  if ( (*((_BYTE *)a1 + 28) & 1) != 0 )
  {
    v12 = v9;
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v5 + 168))(a1, 1, 0);
    v10 = *a1;
    v13 = _mm_load_si128(&v12);
    (*(void (__fastcall **)(__int64 *, __m128i *))(v10 + 56))(a1, &v13);
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 168))(a1, 1, 1);
  }
  else
  {
    v13 = v9;
    (*(void (__fastcall **)(__int64 *, __m128i *))(v5 + 56))(a1, &v13);
  }
  if ( *(TView **)(a1[7] + 72) != v8 )
    TView::select(v8);
  TInputLine::disableReselect = 0;
  return v14 - __readfsqword(0x28u);
}

