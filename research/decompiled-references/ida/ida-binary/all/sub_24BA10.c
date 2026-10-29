unsigned __int64 __fastcall sub_24BA10(QT::QVariant *a1, char a2, int a3, double a4, __int64 a5, int a6, int a7)
{
  __guard *v7; // rbp
  char v8; // r14
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  const char *v12; // r8
  __int64 v13; // r12
  __int64 v14; // r15
  const char *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  __guard *v18; // r15
  __int64 *v19; // rax
  __int64 v20; // rdi
  char v21; // si
  char v22; // si
  int v23; // r13d
  QT::QMenu *v24; // rax
  QT::QAction *v25; // rax
  QT::QMenu *v26; // rax
  QT::QAction *v27; // rax
  QT::QMenu *v28; // rax
  QT::QAction *v29; // rax
  int v30; // esi
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rbx
  char isEmpty; // al
  __int64 v37; // rax
  QT::QAction *v38; // rbx
  QT::QAction *v39; // rbx
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  QT::QMenu *v44; // rax
  QT::QAction *v45; // rax
  QT::QMenu *v46; // rax
  QT::QAction *v47; // rax
  QT::QMenu *v48; // rax
  QT::QAction *v49; // r12
  _QWORD *v50; // r13
  __int64 v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rax
  __m128i v55; // xmm0
  const char *v56; // rsi
  const char *v57; // r8
  size_t v58; // rbp
  const char *v59; // rax
  void *v60; // rbp
  size_t v61; // r8
  struct _Unwind_Exception *v62; // rbx
  char v63; // [rsp+8h] [rbp-E0h]
  size_t nb; // [rsp+10h] [rbp-D8h]
  size_t na; // [rsp+10h] [rbp-D8h]
  const char *src; // [rsp+18h] [rbp-D0h]
  void *v68; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v69; // [rsp+28h] [rbp-C0h]
  void *v70; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v71; // [rsp+48h] [rbp-A0h]
  _BYTE ptr[24]; // [rsp+60h] [rbp-88h] BYREF
  __int64 *v73; // [rsp+78h] [rbp-70h]
  _QWORD v74[5]; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v75; // [rsp+A8h] [rbp-40h]

  v8 = a3;
  v63 = (char)a1;
  v9 = nullptr;
  v75 = __readfsqword(0x28u);
  callui(55, 0, a3, (unsigned int)&callui, a6, a7);
  if ( !qword_8CD748 )
    return v75 - __readfsqword(0x28u);
  if ( !(_BYTE)byte_8CBD80 )
  {
    v7 = &byte_8CBD80;
    if ( __cxa_guard_acquire(&byte_8CBD80) )
    {
      a4 = 0.0;
      qword_8CBD90 = 0;
      v9 = &qword_8CBD90;
      xmmword_8CBD98 = 0;
      __cxa_atexit((void (*)(void *))sub_176A30, &qword_8CBD90, &off_85BC80);
      __cxa_guard_release(&byte_8CBD80);
    }
  }
  v13 = xmmword_8CBD98;
  if ( (_QWORD)xmmword_8CBD98 )
  {
    v14 = 0;
    v7 = (__guard *)&s1;
    do
    {
      v15 = &s1;
      v16 = qword_8CBD90 + 24 * v14;
      if ( *(_QWORD *)(v16 + 8) )
        v15 = *(const char **)v16;
      sub_5344B0(v15);
      ++v14;
    }
    while ( v13 != v14 );
    v17 = qword_8CBD90;
    if ( qword_8CBD90 )
    {
      v18 = (__guard *)xmmword_8CBD98;
      if ( (_QWORD)xmmword_8CBD98 )
      {
        v7 = nullptr;
        do
        {
          v19 = (__int64 *)(v17 + 24LL * (_QWORD)v7);
          v20 = *v19;
          if ( *v19 )
          {
            v19[1] = 0;
            qfree(v20, (const char *)v9);
          }
          v7 = (__guard *)((char *)v7 + 1);
          v17 = qword_8CBD90;
        }
        while ( v18 != v7 );
      }
      goto LABEL_14;
    }
  }
  else
  {
    v17 = qword_8CBD90;
    if ( qword_8CBD90 )
    {
LABEL_14:
      *(_QWORD *)&xmmword_8CBD98 = 0;
      a4 = qfree(v17, (const char *)v9);
      qword_8CBD90 = 0;
      *((_QWORD *)&xmmword_8CBD98 + 1) = 0;
    }
  }
  if ( v8 )
  {
    sub_1E32C0(0xFFu);
    if ( v63 )
      goto LABEL_17;
LABEL_34:
    sub_23C050((char *)qword_8CD748, 0, v10, v11, v12);
    v44 = (QT::QMenu *)sub_53DC50(qword_8CD748, "DebuggerSelected");
    v45 = (QT::QAction *)QT::QMenu::menuAction(v44);
    QT::QAction::setVisible(v45, 0);
    v46 = (QT::QMenu *)sub_53DC50(qword_8CD748, "DebuggerUnselected");
    v47 = (QT::QAction *)QT::QMenu::menuAction(v46);
    QT::QAction::setVisible(v47, 0);
    v48 = (QT::QMenu *)sub_53DC50(qword_8CD748, "DebuggerRunToAndAttach");
    v49 = (QT::QAction *)QT::QMenu::menuAction(v48);
    sub_53DC50(qword_8CD748, "DebuggerRunTo");
    QT::QWidget::actions((QT::QWidget *)ptr);
    if ( *(_QWORD *)&ptr[16] )
    {
      v30 = 1;
      QT::QAction::setVisible(v49, 1);
    }
    else
    {
      v30 = 0;
      QT::QAction::setVisible(v49, 0);
    }
    if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
      free(*(void **)ptr);
    v23 = 0;
    goto LABEL_25;
  }
  if ( !v63 )
    goto LABEL_34;
LABEL_17:
  if ( dbg )
  {
    if ( a2 )
    {
      if ( !(_BYTE)byte_8CBD68 )
      {
        v7 = &byte_8CBD68;
        if ( __cxa_guard_acquire(&byte_8CBD68) )
        {
          dword_8CBD78 = 1;
          v9 = &qword_8CBD70;
          qword_8CBD70 = (__int64)enable_debugger_menu;
          __cxa_atexit(nullsub_53, &qword_8CBD70, &off_85BC80);
          __cxa_guard_release(&byte_8CBD68);
        }
      }
      v50 = *(_QWORD **)(dbg + 40);
      if ( !v50 )
      {
        if ( !under_debugger )
        {
          v62 = (struct _Unwind_Exception *)interr(41567, v9, v10, v11, a4);
          if ( v7 )
            a4 = qfree(v7, (const char *)v9);
          if ( v70 )
          {
            *(_QWORD *)&v71 = 0;
            a4 = qfree(v70, (const char *)v9, a4);
          }
          if ( v68 )
          {
            *(_QWORD *)&v69 = 0;
            qfree(v68, (const char *)v9, a4);
          }
          _Unwind_Resume(v62);
        }
        BUG();
      }
      v51 = 0;
      if ( *v50 )
      {
        do
        {
          v56 = "cpuregs:%d";
          v69 = 0;
          v68 = nullptr;
          sub_169A50((__int64 *)&v68, (__int64)"cpuregs:%d", v51);
          v57 = (const char *)v50[v51];
          v70 = nullptr;
          v71 = 0;
          if ( v57 )
          {
            src = v57;
            v58 = strlen(v57);
            v56 = src;
            v70 = (void *)qvector_reserve(&v70, 0, v58 + 1, 1);
            *(_QWORD *)&v71 = v58 + 1;
            memmove(v70, src, v58);
            *((_BYTE *)v70 + v58) = 0;
          }
          v55.m128i_i64[0] = 0;
          *(_DWORD *)ptr = 64;
          memset((char *)v74 + 4, 0, 28);
          v73 = &qword_8CBD70;
          v59 = &s1;
          v74[0] = 2;
          LODWORD(v74[3]) = 122;
          memset(&ptr[4], 0, 20);
          if ( (_QWORD)v69 )
            v59 = (const char *)v68;
          *(_QWORD *)&ptr[8] = v59;
          *(_QWORD *)&ptr[16] = v50[v51];
          if ( sub_538360(ptr) )
          {
            v61 = v69;
            v60 = nullptr;
            if ( (_QWORD)v69 )
            {
              nb = v69;
              v60 = (void *)qalloc_or_throw(v69);
              memcpy(v60, v68, nb);
              v61 = nb;
            }
            v52 = xmmword_8CBD98;
            v53 = qword_8CBD90;
            if ( *((_QWORD *)&xmmword_8CBD98 + 1) < (unsigned __int64)(xmmword_8CBD98 + 1) )
            {
              na = v61;
              v53 = qvector_reserve(&qword_8CBD90, qword_8CBD90, xmmword_8CBD98 + 1, 24);
              v52 = xmmword_8CBD98;
              v61 = na;
              qword_8CBD90 = v53;
            }
            v54 = v53 + 24 * v52;
            v55 = _mm_unpacklo_epi64((__m128i)v61, (__m128i)v61);
            v56 = &s1;
            *(_QWORD *)v54 = v60;
            *(__m128i *)(v54 + 8) = v55;
            *(_QWORD *)&xmmword_8CBD98 = xmmword_8CBD98 + 1;
            if ( (_QWORD)v69 )
              v56 = (const char *)v68;
            sub_536B20("Debugger/Debugger windows/Debugger window", v56, 0);
          }
          if ( v70 )
          {
            *(_QWORD *)&v71 = 0;
            *(double *)v55.m128i_i64 = qfree(v70, v56);
          }
          if ( v68 )
          {
            *(_QWORD *)&v69 = 0;
            qfree(v68, v56, *(double *)v55.m128i_i64);
          }
          ++v51;
        }
        while ( v50[v51] );
      }
    }
    v21 = 1;
    if ( byte_8CC5F6 )
      v21 = (*(_QWORD *)(dbg + 32) & 0x300000000LL) == 0x300000000LL;
    QT::QAction::setVisible(unk_8CA2F8, v21);
    v22 = 1;
    if ( byte_8CC5F6 )
      v22 = (*(_BYTE *)(dbg + 36) & 4) != 0;
    QT::QAction::setVisible(unk_8CA300, v22);
  }
  v23 = 1;
  sub_23C050((char *)qword_8CD748, 1, v10, v11, v12);
  v24 = (QT::QMenu *)sub_53DC50(qword_8CD748, "DebuggerSelected");
  v25 = (QT::QAction *)QT::QMenu::menuAction(v24);
  QT::QAction::setVisible(v25, dbg != 0);
  v26 = (QT::QMenu *)sub_53DC50(qword_8CD748, "DebuggerUnselected");
  v27 = (QT::QAction *)QT::QMenu::menuAction(v26);
  QT::QAction::setVisible(v27, dbg == 0);
  v28 = (QT::QMenu *)sub_53DC50(qword_8CD748, "DebuggerRunToAndAttach");
  v29 = (QT::QAction *)QT::QMenu::menuAction(v28);
  v30 = 0;
  QT::QAction::setVisible(v29, 0);
LABEL_25:
  sub_312B60((_DWORD)qword_8CD748, v30, v31, v32, v33, v34);
  sub_531B30(10, 0, 0);
  if ( !(_BYTE)byte_8CBD58 && __cxa_guard_acquire(&byte_8CBD58) )
  {
    QT::QKeySequence::QKeySequence((QT::QKeySequence *)&qword_8CBD60);
    __cxa_atexit((void (*)(void *))&QT::QKeySequence::~QKeySequence, &qword_8CBD60, &off_85BC80);
    __cxa_guard_release(&byte_8CBD58);
  }
  v35 = sub_534430("ProcessStart");
  isEmpty = QT::QKeySequence::isEmpty((QT::QKeySequence *)&qword_8CBD60);
  if ( v35 && isEmpty )
  {
    QT::QAction::shortcut((QT::QAction *)ptr);
    v37 = qword_8CBD60;
    qword_8CBD60 = *(_QWORD *)ptr;
    *(_QWORD *)ptr = v37;
    QT::QKeySequence::~QKeySequence((QT::QKeySequence *)ptr);
  }
  v38 = qword_8CA2D8;
  if ( dbg )
  {
    QT::QAction::setShortcut(qword_8CA2D8, (const QT::QKeySequence *)&qword_8CBD60);
    v39 = qword_8CA2C0;
    QT::QKeySequence::QKeySequence((QT::QKeySequence *)ptr);
    QT::QAction::setShortcut(v39, (const QT::QKeySequence *)ptr);
    QT::QKeySequence::~QKeySequence((QT::QKeySequence *)ptr);
  }
  else
  {
    QT::QKeySequence::QKeySequence((QT::QKeySequence *)ptr);
    QT::QAction::setShortcut(v38, (const QT::QKeySequence *)ptr);
    QT::QKeySequence::~QKeySequence((QT::QKeySequence *)ptr);
    QT::QAction::setShortcut(qword_8CA2C0, (const QT::QKeySequence *)&qword_8CBD60);
  }
  return callui(55, v23, (_DWORD)callui, v40, v41, v42);
}
