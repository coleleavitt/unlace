int sub_165E30()
{
  int *v0; // rax
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  struct _Unwind_Exception *v5; // rbx
  __int64 v6; // [rsp+0h] [rbp-18h]

  xmmword_8CDAC8 = 0;
  qword_8CDAC0 = 0;
  __cxa_atexit(sub_176A30, &qword_8CDAC0, &off_85BC80);
  sub_268340(&unk_8CDA80, "Recent scripts", sub_31ACD0, 1);
  __cxa_atexit(ida_singleton_chooser_desktop_widget_factory_t__::vfunc_0, &unk_8CDA80, &off_85BC80);
  xmmword_8CDA68 = 0;
  qword_8CDA60 = 0;
  __cxa_atexit(sub_317F50, &qword_8CDA60, &off_85BC80);
  xmmword_8CD9E0 = 0;
  qword_8CDA50 = 0xFFFFFFFFLL;
  qword_8CDA48 = 0xFFFFFFFFLL;
  qword_8CDA40 = 0xFFFFFFFFLL;
  qword_8CDA38 = 0xFFFFFFFFLL;
  qword_8CDA30 = 0xFFFFFFFFLL;
  QT::QObject::QObject((QT::QObject *)&qword_8CD9F0, nullptr);
  qword_8CDA00 = 0;
  qword_8CD9F0 = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)&qword_8CD9F0, v6);
  qword_8CDA10 = 0;
  word_8CDA28 = 0;
  xmmword_8CDA18 = 0;
  byte_8CDA2A = 0;
  __cxa_atexit(sub_318550, &xmmword_8CD9E0, &off_85BC80);
  qword_8CD940 = 0;
  qword_8CD920 = (__int64)&stru_86F6A0;
  qword_8CD928 = 0xF02FF000004LL;
  xmmword_8CD930 = -1;
  v0 = (int *)&qword_8CD970;
  qword_8CD948 = 0;
  dword_8CD950 = 1;
  dword_8CD968 = -1;
  xmmword_8CD958 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_865CB8),
                               (__m128i)(unsigned __int64)&off_865C98);
  do
  {
    *(_QWORD *)v0 = 0;
    v0 += 6;
    *((_OWORD *)v0 - 1) = 0;
  }
  while ( &dword_8CD9D0 != v0 );
  dword_8CD9D0 = 0;
  if ( ((HIDWORD(qword_8CD928) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(qword_8CD928) != 0xFF )
    {
      if ( !under_debugger )
      {
        v5 = (struct _Unwind_Exception *)interr(
                                           3449,
                                           &xmmword_8CD9E0,
                                           HIDWORD(qword_8CD928),
                                           ((HIDWORD(qword_8CD928) >> 19) & 0x3F) - 1,
                                           0.0);
        QT::QObject::~QObject((QT::QObject *)&xmmword_8CD9E0);
        _Unwind_Resume(v5);
      }
      BUG();
    }
    BYTE3(qword_8CD928) = ((HIDWORD(qword_8CD928) >> 19) & 0x3F) - 1;
    HIDWORD(qword_8CD928) &= 0xFE07FFFF;
  }
  qword_8CD9D8 = (__int64)&xmmword_8CD9E0;
  qword_8CD920 = (__int64)sniplist_chooser_t___vtable;
  if ( (unsigned __int64)qword_8CD980 <= 9 )
    qword_8CD970 = qvector_reserve(&qword_8CD970, qword_8CD970, 10, 1);
  v1 = qword_8CD970;
  qword_8CD978 = 10;
  *(_QWORD *)qword_8CD970 = 0x2E2E657461657243LL;
  *(_BYTE *)(v1 + 8) = 46;
  *(_BYTE *)(qword_8CD970 + 9) = 0;
  if ( (unsigned __int64)qword_8CD998 <= 9 )
    qword_8CD988 = qvector_reserve(&qword_8CD988, qword_8CD988, 10, 1);
  v2 = qword_8CD988;
  qword_8CD990 = 10;
  *(_QWORD *)qword_8CD988 = 0x2E2E6574656C6544LL;
  *(_BYTE *)(v2 + 8) = 46;
  *(_BYTE *)(qword_8CD988 + 9) = 0;
  if ( (unsigned __int64)qword_8CD9B0 <= 9 )
    qword_8CD9A0 = qvector_reserve(&qword_8CD9A0, qword_8CD9A0, 10, 1);
  v3 = qword_8CD9A0;
  qword_8CD9A8 = 10;
  *(_QWORD *)qword_8CD9A0 = 0x2E2E656D616E6552LL;
  *(_BYTE *)(v3 + 8) = 46;
  *(_BYTE *)(qword_8CD9A0 + 9) = 0;
  __cxa_atexit(sniplist_chooser_t__::vfunc_0, &qword_8CD920, &off_85BC80);
  sub_268310(&unk_8CD8E0, "Execute script", sub_31E270, sub_317F00, 1);
  return __cxa_atexit(ida_singleton_desktop_widget_factory_t__::vfunc_0, &unk_8CD8E0, &off_85BC80);
}
