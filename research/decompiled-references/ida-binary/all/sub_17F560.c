__int64 __fastcall sub_17F560(__int64 a1, __int64 a2)
{
  bool v2; // bl
  QT::QAction *v3; // rbp
  __m128i si128; // xmm0
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( (*(int (__fastcall **)(_QWORD *, __int64, __int64))(QT::QCoreApplication::self[2] + 40LL))(
         QT::QCoreApplication::self + 2,
         a1,
         a2) <= 3 )
  {
    v2 = (get_merge_state() & 3) == 0;
    if ( (_BYTE)byte_8C9660 )
      goto LABEL_6;
  }
  else
  {
    if ( (_BYTE)byte_8C9660 )
    {
      QT::QAction::setVisible(qword_8CA2C0, 0);
      return 7;
    }
    v2 = 0;
  }
  if ( __cxa_guard_acquire(&byte_8C9660) )
  {
    QT::QAction::text((QT::QAction *)&xmmword_8C9670);
    __cxa_atexit((void (*)(void *))sub_17C8C0, &xmmword_8C9670, &off_85BC80);
    __cxa_guard_release(&byte_8C9660);
  }
LABEL_6:
  QT::QAction::setVisible(qword_8CA2C0, v2);
  if ( !v2 )
    return 7;
  v3 = qword_8CA2C0;
  if ( dbg )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_8C9670);
    v7 = qword_8C9680;
    *(__m128i *)ptr = si128;
    if ( si128.m128i_i64[0] )
      _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
  }
  else
  {
    QT::QString::fromUtf8(ptr, 19, "S&elect debugger...");
  }
  QT::QAction::setText(v3, (const QT::QString *)ptr);
  if ( !ptr[0] || _InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    return 3;
  free(ptr[0]);
  return 3;
}
