unsigned __int64 __fastcall sub_540860(
        QT::QMainWindow *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // r13
  char *v13; // r12
  QT::QObject *v14; // rax
  __int64 v15; // rbx
  char *v16; // r14
  __int64 v17; // r15
  char *v18; // r13
  __int64 v19; // r15
  QT::QMenuBar *v20; // rax
  char *v21; // rbx
  char *v22; // r15
  QT::QAction *v23; // rax
  __int64 v24; // rbx
  QT::QAction *v25; // r13
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rbp
  __m128i *v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rbp
  __m128i *v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rbp
  __m128i *v37; // rax
  __m128i v38; // xmm0
  __int64 i; // [rsp+8h] [rbp-B0h]
  QT::QMenu *v41; // [rsp+10h] [rbp-A8h]
  __int64 v42; // [rsp+18h] [rbp-A0h]
  _BYTE v43[8]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v44[2]; // [rsp+40h] [rbp-78h] BYREF
  __m128i v45; // [rsp+50h] [rbp-68h] BYREF
  _QWORD (**v46)(QT::QMenu *__hidden); // [rsp+60h] [rbp-58h] BYREF
  __int64 v47; // [rsp+68h] [rbp-50h]
  unsigned __int64 v48; // [rsp+78h] [rbp-40h]

  v12 = *(_QWORD *)a2;
  v48 = __readfsqword(0x28u);
  v44[1] = a1;
  v44[0] = &ui_main_window_t::create_menus_from_desc;
  v42 = v12 + 16LL * *(_QWORD *)(a2 + 8);
  if ( v42 != v12 )
  {
    for ( i = v12; v42 != i; i += 16 )
    {
      if ( *(_DWORD *)i != 3 )
      {
        if ( !under_debugger )
          interr(1279, a2, a3, a4, *(double *)a5.m128_u64);
LABEL_35:
        BUG();
      }
      v13 = *(char **)(i + 8);
      v14 = sub_53F980((__int64)v44, (char **)v13, 1, a5, a6, a7, a8, a9, a10, a11, a12);
      v15 = *((_QWORD *)v13 + 1);
      v41 = v14;
      if ( v15 )
      {
        v16 = *(char **)v13;
        v17 = 0;
        v18 = *(char **)v13;
        do
        {
          if ( *((_QWORD *)v18 + 1) )
          {
            a2 = (unsigned __int64)"present_initially";
            if ( !strcmp(*(const char **)v18, "present_initially") )
            {
              v19 = 0;
              while ( 1 )
              {
                if ( *((_QWORD *)v16 + 1) )
                {
                  a2 = (unsigned __int64)"present_initially";
                  if ( !strcmp(*(const char **)v16, "present_initially") )
                    goto LABEL_15;
                }
                ++v19;
                v16 += 40;
                if ( v15 == v19 )
                  goto LABEL_13;
              }
            }
          }
          ++v17;
          v18 += 40;
        }
        while ( v15 != v17 );
      }
      while ( 1 )
      {
        v20 = (QT::QMenuBar *)QT::QMainWindow::menuBar(a1);
        a2 = (unsigned __int64)v41;
        QT::QMenuBar::addMenu(v20, v41);
        v16 = *((char **)v13 + 1);
        if ( !v16 )
          goto LABEL_29;
        v21 = *(char **)v13;
        v22 = nullptr;
        while ( 1 )
        {
          if ( *((_QWORD *)v21 + 1) )
          {
            a2 = (unsigned __int64)"visible_initially";
            if ( !strcmp(*(const char **)v21, "visible_initially") )
              break;
          }
          ++v22;
          v21 += 40;
          if ( v16 == v22 )
            goto LABEL_29;
        }
        v23 = (QT::QAction *)QT::QMenu::menuAction(v41);
        v24 = *((_QWORD *)v13 + 1);
        v25 = v23;
        if ( v24 )
          break;
LABEL_13:
        if ( under_debugger )
          goto LABEL_35;
        interr(1289, a2, a3, a4, *(double *)a5.m128_u64);
LABEL_15:
        if ( *((_DWORD *)v16 + 6) != 5 )
          goto LABEL_33;
        if ( !v16[32] )
          goto LABEL_29;
      }
      v13 = *(char **)v13;
      v26 = 0;
      while ( 1 )
      {
        if ( *((_QWORD *)v13 + 1) )
        {
          a2 = (unsigned __int64)"visible_initially";
          if ( !strcmp(*(const char **)v13, "visible_initially") )
            break;
        }
        ++v26;
        v13 += 40;
        if ( v24 == v26 )
          goto LABEL_13;
      }
      if ( *((_DWORD *)v13 + 6) != 5 )
      {
LABEL_33:
        if ( !under_debugger )
          interr(1281, a2, a3, a4, *(double *)a5.m128_u64);
        goto LABEL_35;
      }
      a2 = (unsigned __int8)v13[32];
      QT::QAction::setVisible(v25, a2);
LABEL_29:
      ;
    }
  }
  v45 = (__m128i)0x1C9uLL;
  v27 = sub_53DC50((__int64)a1, "Live:Edit");
  v47 = 0;
  v28 = v27;
  v46 = &QT::QMenu::aboutToShow;
  v29 = (__m128i *)operator new(0x20u);
  v30 = _mm_load_si128(&v45);
  v29->m128i_i64[1] = (__int64)&loc_53BBD0;
  v29->m128i_i32[0] = 1;
  v29[1] = v30;
  QT::QObject::connectImpl(v43, v28, &v46, a1, &v45, v29, 0, 0, &QT::QMenu::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v43);
  v45 = (__m128i)0x1D1uLL;
  v31 = sub_53DC50((__int64)a1, "Live:Search");
  v46 = &QT::QMenu::aboutToShow;
  v47 = 0;
  v32 = v31;
  v33 = (__m128i *)operator new(0x20u);
  v34 = _mm_load_si128(&v45);
  v33->m128i_i32[0] = 1;
  v33[1] = v34;
  v33->m128i_i64[1] = (__int64)&loc_53BBD0;
  QT::QObject::connectImpl(v43, v32, &v46, a1, &v45, v33, 0, 0, &QT::QMenu::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v43);
  v45 = (__m128i)0x1D9uLL;
  v35 = sub_53DC50((__int64)a1, "Live:Jump");
  v46 = &QT::QMenu::aboutToShow;
  v47 = 0;
  v36 = v35;
  v37 = (__m128i *)operator new(0x20u);
  v38 = _mm_load_si128(&v45);
  v37->m128i_i32[0] = 1;
  v37->m128i_i64[1] = (__int64)&loc_53BBD0;
  v37[1] = v38;
  QT::QObject::connectImpl(v43, v36, &v46, a1, &v45, v37, 0, 0, &QT::QMenu::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v43);
  return v48 - __readfsqword(0x28u);
}
