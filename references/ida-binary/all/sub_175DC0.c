unsigned __int64 __fastcall sub_175DC0(__int64 a1, _BYTE *a2, const __m128i *a3)
{
  __m128i v5; // xmm1
  __int64 v6; // rdi
  __int64 (*v7)(); // rdx
  char v8; // al
  bool v9; // zf
  char v10; // al
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _DWORD *, __int64, __int64); // rax
  double v13; // xmm0_8
  _BYTE v15[24]; // [rsp+8h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+20h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &paint_context_t___vtable;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  QT::QFont::QFont((QT::QFont *)(a1 + 72));
  QT::QFont::QFont((QT::QFont *)v15);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)(a1 + 88), (const QT::QFont *)v15);
  QT::QFont::~QFont((QT::QFont *)v15);
  sub_1C8200(a1 + 8, a2, 1.0);
  v5 = _mm_loadl_epi64((const __m128i *)&dbl_5DC300);
  *(_OWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 232) = 0x3FF0000000000000LL;
  *(_WORD *)(a1 + 240) = 0;
  *(__m128i *)(a1 + 168) = v5;
  *(__m128i *)(a1 + 200) = v5;
  *(_OWORD *)(a1 + 216) = 0;
  *(__m128i *)(a1 + 248) = _mm_loadu_si128(a3);
  *(__m128i *)(a1 + 264) = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  v6 = sub_1EB5B0(a2);
  v7 = *(__int64 (**)())(*(_QWORD *)v6 + 512LL);
  v8 = 1;
  if ( v7 != sub_172FA0 )
    v8 = ((__int64 (__fastcall *)(__int64))v7)(v6);
  v9 = a2[556] == 0;
  *(_BYTE *)(a1 + 284) = v8;
  if ( !v9 || a2[557] )
  {
    *(_BYTE *)(a1 + 280) = 0;
  }
  else
  {
    v10 = a2[558];
    *(_BYTE *)(a1 + 280) = v10;
    if ( v10 )
    {
      v11 = sub_1EB5B0(a2);
      v12 = *(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64))(*(_QWORD *)v11 + 576LL);
      if ( v12 == sub_173180 )
      {
        v13 = round(*(double *)(a1 + 128));
        *(_DWORD *)(a1 + 272) = 2;
        *(_DWORD *)(a1 + 276) = (int)(v13 + 1.0);
      }
      else
      {
        v12(v11, (_DWORD *)(a1 + 272), a1 + 264, a1 + 8);
      }
    }
  }
  return v16 - __readfsqword(0x28u);
}
