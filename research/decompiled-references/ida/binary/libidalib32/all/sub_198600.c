unsigned __int64 __fastcall sub_198600(TView *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Extent; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __m128i v11; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v12[12]; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v13; // [rsp+70h] [rbp-48h]
  unsigned __int64 v14; // [rsp+88h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  TWindowInit::TWindowInit((char *)this + 184, TWindow::initFrame);
  sub_144120((__int64)this, (__int64 *)&off_234F98, a2, a4);
  *((_BYTE *)this + 124) |= 0xBu;
  *((_WORD *)this + 12) |= 0x81u;
  *(_QWORD *)this = &off_23C950;
  Extent = TView::getExtent(this);
  v11 = _mm_add_epi32(
          _mm_load_si128((const __m128i *)&xmmword_1D2DC0),
          _mm_unpacklo_epi64((__m128i)(unsigned __int64)Extent, (__m128i)v7));
  sub_1954F0(v12, a3, nullptr, 0);
  v13 = _mm_load_si128(&v11);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 88LL))(TProgram::application + 136LL);
  v9 = sub_195720(v8, (__int64)v12);
  *((_QWORD *)this + 22) = v9;
  *(_QWORD *)(v9 + 2232) = this;
  sub_192B10(*((TView ***)this + 22), this);
  if ( v12[9] )
  {
    v12[10] = 0;
    qfree();
  }
  if ( v12[5] )
  {
    v12[6] = 0;
    qfree();
  }
  if ( v12[2] )
  {
    v12[3] = 0;
    qfree();
  }
  return v14 - __readfsqword(0x28u);
}

