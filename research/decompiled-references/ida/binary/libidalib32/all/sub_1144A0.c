unsigned __int64 __fastcall sub_1144A0(TView *this)
{
  bool v1; // zf
  char v2; // al
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rbp
  void (__fastcall *v10)(__int64, __m128i *, __int64, __int64, __int64, __int64, __int64, __int64); // rax
  void (__fastcall *v11)(__int64, __m128i *); // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 Extent; // [rsp+0h] [rbp-58h]
  __int64 v17; // [rsp+8h] [rbp-50h]
  __m128i v18; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v1 = *((_BYTE *)this + 328) == 0;
  v2 = *((_BYTE *)this + 408);
  v19 = __readfsqword(0x28u);
  if ( !v1 )
  {
    if ( v2 )
    {
      TView::getExtent(this);
      goto LABEL_10;
    }
    v4 = *((_QWORD *)this + 50);
    HIDWORD(v7) = (unsigned __int64)TView::getExtent(this) >> 32;
    v9 = v15;
    goto LABEL_5;
  }
  v3 = *((_QWORD *)this + 40);
  if ( v2 )
  {
    v4 = 0;
    Extent = TView::getExtent(this);
    v7 = Extent;
    v9 = v14;
    v17 = v14;
    if ( !v3 )
      goto LABEL_10;
  }
  else
  {
    v4 = *((_QWORD *)this + 50);
    Extent = TView::getExtent(this);
    v7 = Extent;
    v9 = v8;
    v17 = v8;
    if ( !v3 )
      goto LABEL_5;
  }
  v10 = *(void (__fastcall **)(__int64, __m128i *, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v3 + 56LL);
  v18 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(HIDWORD(v7))),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD *)this + 106)), _mm_cvtsi32_si128(HIDWORD(v9))));
  v10(v3, &v18, v7 >> 32, v9 >> 32, v5, v6, Extent, v17);
LABEL_5:
  if ( v4 )
  {
    v11 = *(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v4 + 56LL);
    v18 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128((int)v9 - *((_DWORD *)this + 107)), _mm_cvtsi32_si128(HIDWORD(v7))),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), _mm_cvtsi32_si128(HIDWORD(v9))));
    v11(v4, &v18);
    if ( *((_BYTE *)this + 248) )
      return v19 - __readfsqword(0x28u);
    goto LABEL_11;
  }
LABEL_10:
  if ( *((_BYTE *)this + 248) )
    return v19 - __readfsqword(0x28u);
LABEL_11:
  v13 = *((_QWORD *)this + 30);
  if ( v13 )
  {
    TWindow::handleEvent();
    if ( (unsigned __int8)sub_163AE0(v13) )
      *(_BYTE *)(v13 + 953) = 1;
  }
  return v19 - __readfsqword(0x28u);
}

