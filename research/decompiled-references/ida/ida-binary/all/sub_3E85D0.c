unsigned __int64 __fastcall sub_3E85D0(const __m128i *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *ptr[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+10h] [rbp-58h]
  _BYTE v9[40]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]

  v1 = a1[3].m128i_i64[0];
  v10 = __readfsqword(0x28u);
  if ( QT::QListWidget::currentItem(*(QT::QListWidget **)(v1 + 112)) )
  {
    v2 = QT::QListWidget::currentItem(*(QT::QListWidget **)(a1[3].m128i_i64[0] + 112));
    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v9, v2, 0);
    QT::QVariant::toString((QT::QVariant *)ptr);
    QT::QVariant::~QVariant((QT::QVariant *)v9);
    v3 = _mm_loadu_si128(a1 + 4);
    v4 = a1[5].m128i_i64[0];
    v5 = v8;
    a1[4] = _mm_load_si128((const __m128i *)ptr);
    a1[5].m128i_i64[0] = v5;
    v8 = v4;
    *(__m128i *)ptr = v3;
    if ( v3.m128i_i64[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v3.m128i_i64[0], 1u) )
        free(ptr[0]);
    }
  }
  return v10 - __readfsqword(0x28u);
}
