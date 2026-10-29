__int64 __fastcall sub_186850(TGroup *this, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // ebp
  TView *v7; // r12
  __m128i v9; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  v6 = a3 + qustrlen();
  v7 = (TView *)operator new(0x50u);
  v9 = _mm_unpacklo_epi64(
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)),
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), _mm_cvtsi32_si128(a4 + 1)));
  TStaticText::TStaticText(v7, &v9, a2);
  if ( TFileList::getKey((TFileList *)TProgram::application, (const char *)v7) )
    TGroup::insert(this, v7);
  else
    return (unsigned int)-1;
  return v6;
}

