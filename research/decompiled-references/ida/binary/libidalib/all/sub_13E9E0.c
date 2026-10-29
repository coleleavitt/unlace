unsigned __int64 __fastcall sub_13E9E0(TView *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 Extent; // rax
  unsigned __int64 v7; // rdx
  TView *v8; // rbp
  _QWORD *v9; // rax
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  TWindowInit::TWindowInit((char *)this + 192, TWindow::initFrame);
  sub_144880(this, &off_2329C8, a2, a3);
  *(_QWORD *)this = &off_2388C8;
  *((_QWORD *)this + 22) = &off_2389D0;
  v4 = TStatusLine::hint(this, 3u);
  *((_WORD *)this + 12) |= 5u;
  v5 = v4;
  *((_BYTE *)this + 124) = 0;
  Extent = TView::getExtent(this);
  v11 = _mm_add_epi32(_mm_unpacklo_epi64((__m128i)(unsigned __int64)Extent, (__m128i)v7), (__m128i)xmmword_1D34F0);
  v8 = (TView *)operator new(0x90u);
  ((void (__fastcall *)(TView *, __m128i *, _QWORD, __int64, __int64))TTerminal::TTerminal)(v8, &v11, 0, v5, 0x4000);
  *((_WORD *)v8 + 13) |= 0x200u;
  TGroup::insert(this, v8);
  v9 = (_QWORD *)operator new(8u);
  *v9 = v8;
  *((_QWORD *)this + 23) = v9;
  *((_WORD *)this + 25) = 1143;
  return v12 - __readfsqword(0x28u);
}

