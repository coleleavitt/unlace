unsigned __int64 __fastcall sub_193620(unsigned int *a1, _BYTE *a2, TGroup *a3)
{
  TView *v5; // r12
  __m128i v6; // [rsp+0h] [rbp-448h] BYREF
  _BYTE v7[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v8; // [rsp+418h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( a2 && (int)a1[4] > 0 && *a2 )
  {
    qstrncpy();
    v5 = (TView *)operator new(0x60u);
    v6 = _mm_unpacklo_epi64(
           _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[8]), _mm_cvtsi32_si128(a1[9] - 1)),
           _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[4]), _mm_cvtsi32_si128(a1[9])));
    TLabel::TLabel(v5, &v6, v7, a1);
    TGroup::insert(a3, v5);
  }
  return v8 - __readfsqword(0x28u);
}

