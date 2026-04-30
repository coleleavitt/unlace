unsigned __int64 __fastcall sub_4CF0C0(QT::QTabBar *this)
{
  __int64 *v2; // rbp
  int v3; // esi
  __int64 v4; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v6[3]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( *((_DWORD *)this + 10) == -1 )
    return v7 - __readfsqword(0x28u);
  v6[0] = 0;
  v6[1] = _mm_sub_epi32(
            _mm_loadl_epi64((const __m128i *)(*((_QWORD *)this + 4) + 28LL)),
            _mm_loadl_epi64((const __m128i *)(*((_QWORD *)this + 4) + 20LL))).m128i_u64[0];
  v4 = QT::QCursor::pos(this);
  v5 = QT::QWidget::mapFromGlobal(this, &v4);
  if ( (unsigned __int8)QT::QRect::contains(v6, &v5, 0) )
    return v7 - __readfsqword(0x28u);
  *((_DWORD *)this + 10) = -1;
  if ( (QT::QGuiApplication::mouseButtons((QT::QGuiApplication *)v6) & 1) == 0 )
    return v7 - __readfsqword(0x28u);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7), 0);
  if ( *((_DWORD *)this + 18) )
    return v7 - __readfsqword(0x28u);
  v2 = *((__int64 **)this + 6);
  v3 = QT::QTabBar::currentIndex(this);
  return sub_4CEF80(v2, v3);
}
