QT::QAbstractScrollArea *__fastcall sub_1A1110(
        char *a1,
        QT::QWidget *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const char *a7,
        __int64 a8)
{
  char *v10; // rbx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  unsigned int v13; // eax
  QT::QAbstractScrollArea *v14; // rbp
  __m128i v18; // [rsp+20h] [rbp-108h] BYREF
  __m128i v19; // [rsp+30h] [rbp-F8h] BYREF
  int v20; // [rsp+40h] [rbp-E8h]
  __int64 v21; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v22; // [rsp+58h] [rbp-D0h]
  __int128 v23; // [rsp+68h] [rbp-C0h]
  __int128 v24; // [rsp+78h] [rbp-B0h]
  __int64 v25; // [rsp+88h] [rbp-A0h]
  __m128i v26; // [rsp+90h] [rbp-98h]
  __m128i v27; // [rsp+A0h] [rbp-88h]
  __int64 v28; // [rsp+B0h] [rbp-78h]
  __int128 v29; // [rsp+B8h] [rbp-70h]
  __int64 v30; // [rsp+C8h] [rbp-60h]
  __int64 v31; // [rsp+D0h] [rbp-58h]
  char v32; // [rsp+D8h] [rbp-50h]
  __int64 v33; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v34; // [rsp+E8h] [rbp-40h]

  v10 = "custom_viewer";
  v34 = __readfsqword(0x28u);
  if ( a1 )
  {
    v10 = a1;
    if ( !*a1 )
      v10 = "custom_viewer";
  }
  v21 = 0;
  v25 = 0;
  v27.m128i_i64[0] = 0;
  v27.m128i_i64[1] = -1;
  v28 = 0;
  v30 = 0;
  v31 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v26 = 0;
  v29 = 0;
  sub_1E8870(&v18, 1);
  v11 = _mm_load_si128(&v18);
  v32 = 0;
  v26 = v11;
  v12 = _mm_load_si128(&v19);
  LODWORD(v28) = v20;
  v33 = 0;
  v27 = v12;
  sub_1E8790(&v21, a2, a6, 0);
  sub_1E88A0(&v21, a7, a8);
  *((_QWORD *)&v29 + 1) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
  if ( (_QWORD)v29 )
  {
    qfree(v29, a7);
    *(_QWORD *)&v29 = 0;
  }
  *(_QWORD *)&v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 112LL))(a3);
  if ( get_place_class(&v18, 0, v13) && (v18.m128i_i8[0] & 1) != 0 )
  {
    v14 = (QT::QAbstractScrollArea *)operator new(0x410u);
    sub_3A38F0(v14);
  }
  else
  {
    v14 = (QT::QAbstractScrollArea *)operator new(0x3E8u);
    sub_202FB0(v14, v10);
    *(_QWORD *)v14 = &TCustomViewer___vtable;
    *((_QWORD *)v14 + 2) = TCustomViewer___vtable_at__16;
    *((_QWORD *)v14 + 5) = TCustomViewer___vtable_at__40;
    *((_QWORD *)v14 + 13) = TCustomViewer___vtable_at__104;
    sub_1FC230(v14);
  }
  sub_1A0C30(a2, v14);
  (*(void (__fastcall **)(__m128i *, _QWORD *, _QWORD))(*QT::QCoreApplication::self + 144LL))(
    &v18,
    QT::QCoreApplication::self,
    unk_8CA050);
  QT::QWidget::setWindowIcon(v14, (const QT::QIcon *)&v18);
  QT::QIcon::~QIcon((QT::QIcon *)&v18);
  qfree(*((_QWORD *)&v29 + 1), v18.m128i_i8);
  *((_QWORD *)&v29 + 1) = 0;
  qfree(v30, v18.m128i_i8);
  v30 = 0;
  if ( (_QWORD)v29 )
    qfree(v29, v18.m128i_i8);
  return v14;
}
