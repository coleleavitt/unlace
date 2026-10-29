QT::QIcon *__fastcall sub_390E80(QT::QIcon *this, int a2)
{
  __int64 v2; // rax
  __m128i si128; // xmm0
  const char *v4; // rsi
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( a2 == -1 )
  {
    QT::QIcon::QIcon(this);
  }
  else
  {
    v7 = 0;
    v6 = 0;
    v2 = qvector_reserve(&v6, 0, 18, 1);
    v6 = v2;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DD400);
    *(_BYTE *)(v2 + 16) = 115;
    *(_QWORD *)&v7 = 18;
    *(__m128i *)v2 = si128;
    *(_BYTE *)(v6 + 17) = 0;
    sub_16FAA0(&v6, (__int64)"/strchoose_%i.svg", a2);
    v4 = (const char *)QT::QCoreApplication::self;
    sub_479BE0(this, QT::QCoreApplication::self, &v6);
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree(v6, v4);
    }
  }
  return this;
}
