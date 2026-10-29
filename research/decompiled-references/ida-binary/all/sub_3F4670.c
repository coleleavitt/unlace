void __fastcall sub_3F4670(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbp
  __m128i v5; // xmm0
  void *v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi

  v2 = a1[36];
  if ( !v2 || !*(_DWORD *)(v2 + 4) || !a1[37] )
    goto LABEL_7;
  v3 = 0;
  if ( *(_DWORD *)(v2 + 4) )
    v3 = a1[37];
  if ( *(char *)(*(_QWORD *)(v3 + 32) + 9LL) >= 0 )
    goto LABEL_7;
  v7 = 0;
  if ( *(_DWORD *)(v2 + 4) )
    v7 = a1[37];
  if ( (*(_BYTE *)(*(_QWORD *)(v7 + 32) + 8LL) & 1) == 0 )
  {
    if ( *(_DWORD *)(v2 + 4) )
      v8 = a1[37];
    else
      v8 = 0;
    QT::QWidget::setFocus(v8, 7);
  }
  else
  {
LABEL_7:
    QT::QWidget::setFocus(a1[13], &byte_7);
    v4 = a1[13];
    v5 = 0;
    if ( v4 )
      v5 = (__m128i)(unsigned __int64)QT::QtSharedPointer::ExternalRefCountData::getAndRef(
                                        (QT::QtSharedPointer::ExternalRefCountData *)a1[13],
                                        (const QT::QObject *)&byte_7);
    v6 = (void *)a1[36];
    *((__m128i *)a1 + 18) = _mm_unpacklo_epi64(v5, (__m128i)v4);
    if ( v6 )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v6, 1u) )
        operator delete(v6);
    }
  }
}
