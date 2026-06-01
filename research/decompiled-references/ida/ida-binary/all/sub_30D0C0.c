void __fastcall __noreturn sub_30D0C0(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 current_config; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  signed __int64 v10; // rax
  const char *v11; // rbx
  const QT::QString *v12; // rsi
  double v13; // xmm0_8
  QT::QWidget *v14; // rbx
  QT::QWidget *v15; // rbx
  char *v16; // r15
  const char *v17; // rsi
  __int64 v18; // rcx
  __m128i v19; // xmm1
  __int64 v20; // rdx
  __m128i v21; // xmm0
  unsigned int v22; // ebp
  __int64 license_manager; // rax
  void **v24; // rbp
  void **v25; // r14
  int v26[3]; // [rsp+Ch] [rbp-73Ch] BYREF
  _BYTE v27[8]; // [rsp+18h] [rbp-730h] BYREF
  int v28[4]; // [rsp+20h] [rbp-728h] BYREF
  __int64 v29; // [rsp+30h] [rbp-718h]
  void *v30; // [rsp+40h] [rbp-708h] BYREF
  __int128 v31; // [rsp+48h] [rbp-700h]
  void *ptr[2]; // [rsp+58h] [rbp-6F0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-6E0h]
  __int64 v34[2]; // [rsp+70h] [rbp-6D8h] BYREF
  __int16 v35; // [rsp+80h] [rbp-6C8h]
  __int64 v36; // [rsp+88h] [rbp-6C0h]
  __int64 v37; // [rsp+90h] [rbp-6B8h]
  char v38; // [rsp+98h] [rbp-6B0h]
  __int64 v39; // [rsp+A0h] [rbp-6A8h]
  __int128 v40; // [rsp+A8h] [rbp-6A0h]
  __int64 v41; // [rsp+B8h] [rbp-690h]
  __int16 v42; // [rsp+C0h] [rbp-688h]
  int v43; // [rsp+C4h] [rbp-684h]
  _BYTE v44[400]; // [rsp+D0h] [rbp-678h] BYREF
  _BYTE v45[1192]; // [rsp+260h] [rbp-4E8h] BYREF
  unsigned __int64 v46; // [rsp+708h] [rbp-40h]

  v26[0] = a1;
  v46 = __readfsqword(0x28u);
  v35 = 256;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v42 = 0;
  v41 = 0;
  *(__m128i *)v34 = _mm_unpacklo_epi64(
                      (__m128i)(unsigned __int64)algn_894BD0,
                      (__m128i)(unsigned __int64)&file_outstream_t___vtable);
  v40 = 0;
  if ( qword_8D2358 )
  {
    if ( !under_debugger )
      interr(2551, a2, a3, a4, 0.0);
    BUG();
  }
  qword_8D2358 = (__int64)v34;
  v34[0] = (__int64)&ida_logger_t___vtable;
  v43 = -1;
  dword_8CD7F4 = v26[0];
  qword_8CD7F8 = init_kernel(sub_1AAC20, &dword_8CD7F4, a2);
  sub_16BFE0();
  QT::QSurfaceFormat::QSurfaceFormat((QT::QSurfaceFormat *)v27);
  QT::QSurfaceFormat::setSamples((QT::QSurfaceFormat *)v27, 16);
  QT::QSurfaceFormat::setStencilBufferSize((QT::QSurfaceFormat *)v27, 8);
  QT::QSurfaceFormat::setAlphaBufferSize((QT::QSurfaceFormat *)v27, (int)&byte_8);
  QT::QSurfaceFormat::setDefaultFormat((QT::QSurfaceFormat *)v27, (const QT::QSurfaceFormat *)&byte_8);
  sub_303E90((QT::QApplication *)v45);
  current_config = get_current_config(v45, v26, v4);
  sub_55A560(*(_QWORD *)(current_config + 672), *(_QWORD *)(current_config + 680));
  QT::qt_set_sequence_auto_mnemonic(1);
  sub_1CC990((__int64)&v30, "Hex-Rays");
  QT::QCoreApplication::setOrganizationName((QT::QCoreApplication *)&v30, (const QT::QString *)"Hex-Rays");
  sub_16D970(&v30);
  sub_1CC990((__int64)&v30, "hex-rays.com");
  QT::QCoreApplication::setOrganizationDomain((QT::QCoreApplication *)&v30, (const QT::QString *)"hex-rays.com");
  sub_16D970(&v30);
  sub_1CC990((__int64)&v30, "IDA");
  QT::QCoreApplication::setApplicationName((QT::QCoreApplication *)&v30, (const QT::QString *)"IDA");
  sub_16D970(&v30);
  sub_4BA250((unsigned int)v28, (unsigned int)"IDA", v6, v7, v8, v9, (__int64)v34);
  v10 = 0;
  v11 = &s1;
  if ( *(_QWORD *)&v28[2] )
  {
    v11 = *(const char **)v28;
    v10 = *(_QWORD *)&v28[2] - 1LL;
  }
  if ( v11 )
  {
    if ( v10 < 0 )
      v10 = strlen(v11);
  }
  else
  {
    v10 = 0;
  }
  v12 = (const QT::QString *)v10;
  v13 = QT::QString::fromUtf8(&v30, v10, v11);
  QT::QGuiApplication::setDesktopFileName((QT::QGuiApplication *)&v30, v12);
  sub_16D970(&v30);
  if ( *(_QWORD *)v28 )
  {
    *(_QWORD *)&v28[2] = 0;
    v13 = qfree(*(_QWORD *)v28, (const char *)v12, v13);
  }
  sub_30C8D0((QT::QIcon *)&v30, (__int64)v45, 2);
  QT::QGuiApplication::setWindowIcon((QT::QGuiApplication *)&v30, (const QT::QIcon *)v45);
  QT::QIcon::~QIcon((QT::QIcon *)&v30);
  sub_2D8200((__int64)&v30, (QT::QAccessibleInterface *(*)(const QT::QString *, QT::QObject *))v45);
  sub_47BF10(v45, v13);
  sub_309700((__int64)v45);
  v14 = (QT::QWidget *)operator new(0x38u);
  sub_2647D0(v14, 0);
  qword_8CC658 = v14;
  v15 = (QT::QWidget *)operator new(0x58u);
  sub_3E9980(v15);
  v16 = (char *)&xmmword_8CD540;
  qword_8D1260 = (__int64)v15;
  do
  {
    sub_4B7F80(*(_QWORD *)v16, 0);
    v16 += 8;
  }
  while ( &byte_8CD690 != v16 );
  sub_3A5B30();
  sub_317340((QT::QObject *)v44);
  v17 = "UIFLTR";
  v30 = nullptr;
  v33 = 0;
  v31 = 0;
  *(_OWORD *)ptr = 0;
  sub_4F65D0(&v30, "UIFLTR");
  v18 = v33;
  v33 = 0;
  v19 = _mm_loadu_si128((const __m128i *)ptr);
  v20 = qword_8D24B0;
  *(_OWORD *)ptr = 0;
  v21 = _mm_loadu_si128((const __m128i *)&xmmword_8D24A0);
  qword_8D24B0 = v18;
  *(__m128i *)&xmmword_8D24A0 = v19;
  v29 = v20;
  *(__m128i *)v28 = v21;
  sub_1AF880((__int64)v28);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    goto LABEL_24;
  while ( 1 )
  {
    if ( v30 )
    {
      v17 = nullptr;
      *(_QWORD *)&v31 = 0;
      *(double *)v21.m128i_i64 = qfree(v30, nullptr);
    }
    v22 = sub_30B090(*(double *)v21.m128i_i64);
    sub_47BF50(v45);
    if ( qword_8CC658 )
    {
      (*(void (__fastcall **)(_QWORD *))(*qword_8CC658 + 32LL))(qword_8CC658);
      qword_8CC658 = nullptr;
    }
    if ( qword_8D1260 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_8D1260 + 32LL))(qword_8D1260);
      qword_8D1260 = 0;
    }
    sub_310F80(1);
    sub_3A5B70();
    license_manager = get_license_manager();
    if ( license_manager )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)license_manager + 120LL))(license_manager);
    IDAMainWindow__::vfunc_3((QT::QMainWindow *)v44);
    IDAApplication__::vfunc_3((QT::QApplication *)v45, v17);
    QT::QSurfaceFormat::~QSurfaceFormat((QT::QSurfaceFormat *)v27);
    term_plugins(128);
    if ( byte_8CD738 )
      v22 = 1;
    qexit(v22);
LABEL_24:
    v24 = (void **)ptr[1];
    v25 = (void **)((char *)ptr[1] + 24 * v33);
    if ( ptr[1] != v25 )
    {
      do
      {
        if ( *v24 )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)*v24, 1u) )
            free(*v24);
        }
        v24 += 3;
      }
      while ( v25 != v24 );
    }
    free(ptr[0]);
  }
}
