unsigned __int64 __fastcall sub_53CF40(
        QT::QMainWindow *this,
        char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // rbp
  __int64 (*v16)(); // rcx
  unsigned int *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  void (*v20)(); // rax
  __int64 *v22; // rax
  __int64 v23; // rbx
  void **v24; // r15
  __int64 v25; // r13
  __int64 v26; // r12
  void **v27; // r12
  __int64 v28; // r13
  char v29; // al
  void **v30; // r13
  __int64 v31; // r12
  const char *p_ptr; // rdi
  __int64 v33; // r12
  const char **v34; // rax
  const char *v35; // rdx
  __int64 v36; // rcx
  const char *v37; // rdx
  __int64 *v38; // rax
  __int64 v39; // r13
  __int64 v40; // rbx
  __int64 v41; // rbp
  const char *v42; // r12
  __int64 v43; // rdx
  __int64 v44; // rax
  QT::QToolBar *v45; // rbx
  void **v46; // r12
  __int64 v47; // r13
  _QWORD *v48; // r12
  __int64 v49; // r13
  __int64 v50; // r15
  __int64 v51; // rax
  const char **v52; // rdx
  char *v53; // rbp
  char v54; // al
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __m128 v59; // xmm4
  __m128 v60; // xmm5
  void (*v61)(); // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __m128 v66; // xmm4
  __m128 v67; // xmm5
  __int64 (*v68)(); // rax
  char v69; // [rsp+0h] [rbp-A8h]
  char *v70; // [rsp+8h] [rbp-A0h]
  __int64 v71; // [rsp+10h] [rbp-98h]
  __int64 *v72; // [rsp+18h] [rbp-90h]
  __int64 v73; // [rsp+20h] [rbp-88h]
  void *v74[4]; // [rsp+30h] [rbp-78h] BYREF
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  const char *v76; // [rsp+58h] [rbp-50h]
  unsigned __int64 v77; // [rsp+68h] [rbp-40h]

  v70 = a2;
  v77 = __readfsqword(0x28u);
  v71 = *((_QWORD *)a2 + 1);
  if ( v71 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = (__int64 (*)())v70;
      v17 = (unsigned int *)(*(_QWORD *)v70 + 16 * v15);
      v18 = *v17;
      if ( (_DWORD)v18 == 2 )
        break;
      if ( (_DWORD)v18 == 3 )
      {
        v22 = *((__int64 **)v17 + 1);
        v23 = v22[1];
        v72 = v22;
        if ( v23 )
        {
          v24 = (void **)*v22;
          v25 = 0;
          v26 = *v22;
          while ( 1 )
          {
            if ( *(_QWORD *)(v26 + 8) )
            {
              a2 = "label";
              if ( !strcmp(*(const char **)v26, "label") )
                break;
            }
            ++v25;
            v26 += 40;
            if ( v23 == v25 )
              goto LABEL_20;
          }
          v27 = v24;
          v28 = 0;
          while ( 1 )
          {
            if ( v27[1] )
            {
              a2 = "name";
              if ( !strcmp((const char *)*v27, "name") )
                break;
            }
            ++v28;
            v27 += 5;
            if ( v23 == v28 )
              goto LABEL_20;
          }
          v30 = v24;
          v31 = 0;
          while ( 1 )
          {
            if ( v30[1] )
            {
              p_ptr = (const char *)*v30;
              a2 = "actions";
              if ( !strcmp((const char *)*v30, "actions") )
                break;
            }
            ++v31;
            v30 += 5;
            if ( v23 == v31 )
              goto LABEL_20;
          }
          v33 = 0;
          while ( 1 )
          {
            if ( v24[1] )
            {
              p_ptr = (const char *)*v24;
              a2 = "label";
              if ( !strcmp((const char *)*v24, "label") )
                break;
            }
            ++v33;
            v24 += 5;
            if ( v23 == v33 )
              goto LABEL_35;
          }
          while ( 1 )
          {
            v34 = (const char **)v24[4];
            if ( *((_DWORD *)v24 + 6) != 2 )
              goto LABEL_88;
            v35 = &s1;
            if ( v34[1] )
              v35 = *v34;
            v24 = v74;
            QT::QMetaObject::tr((QT::QMetaObject *)v74, off_89ED00, v35, 0);
            a2 = (char *)v74;
            p_ptr = (const char *)&ptr;
            QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v74);
            v37 = v76;
            if ( v76 )
            {
              v38 = v72;
              v39 = v72[1];
              if ( !v39 )
                goto LABEL_82;
            }
            else
            {
              v38 = v72;
              v37 = (const char *)&QT::QByteArray::_empty;
              v39 = v72[1];
              if ( !v39 )
              {
LABEL_82:
                sub_53BB90(*(double *)a3.m128_u64, (__int64)p_ptr, (__int64)a2, (__int64)v37, v36);
LABEL_83:
                if ( under_debugger )
LABEL_89:
                  BUG();
                p_ptr = (_BYTE *)(elf_gnu_hash_bucket + 422);
                interr(1278, a2, v52, v16, *(double *)a3.m128_u64);
LABEL_85:
                sub_53BB70(*(double *)a3.m128_u64, (__int64)p_ptr, (__int64)a2, v62, v63);
LABEL_86:
                sub_53BB50(*(double *)a3.m128_u64, (__int64)p_ptr, (__int64)a2, v18, (__int64)v16);
LABEL_87:
                sub_53BBB0(*(double *)a3.m128_u64, (__int64)p_ptr, (__int64)a2, v43, v36);
LABEL_88:
                sub_53BBB0(*(double *)a3.m128_u64, (__int64)p_ptr, (__int64)a2, v18, (__int64)v16);
              }
            }
            v73 = v15;
            v40 = *v38;
            v41 = 0;
            v42 = v37;
            while ( 1 )
            {
              if ( *(_QWORD *)(v40 + 8) )
              {
                p_ptr = *(const char **)v40;
                a2 = "name";
                if ( !strcmp(*(const char **)v40, "name") )
                  break;
              }
              ++v41;
              v40 += 40;
              if ( v39 == v41 )
                goto LABEL_82;
            }
            v15 = v73;
            v43 = (__int64)v42;
            v44 = *(_QWORD *)(v40 + 32);
            if ( *(_DWORD *)(v40 + 24) != 2 )
              goto LABEL_87;
            a2 = (char *)&s1;
            if ( *(_QWORD *)(v44 + 8) )
              a2 = *(char **)v44;
            p_ptr = (const char *)this;
            v45 = sub_53CA10(this, a2, v42, v36, *(double *)a3.m128_u64);
            if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
            {
              p_ptr = (const char *)ptr;
              free(ptr);
            }
            if ( v74[0] && !_InterlockedSub((volatile signed __int32 *)v74[0], 1u) )
            {
              p_ptr = (const char *)v74[0];
              free(v74[0]);
            }
            v46 = (void **)v72[1];
            if ( v46 )
              break;
LABEL_35:
            sub_53BB90(*(double *)a3.m128_u64, (__int64)p_ptr, (__int64)a2, v18, (__int64)v16);
          }
          v47 = *v72;
          v24 = nullptr;
          while ( 1 )
          {
            if ( *(_QWORD *)(v47 + 8) )
            {
              p_ptr = *(const char **)v47;
              a2 = "actions";
              if ( !strcmp(*(const char **)v47, "actions") )
                break;
            }
            v24 = (void **)((char *)v24 + 1);
            v47 += 40;
            if ( v46 == v24 )
              goto LABEL_35;
          }
          if ( *(_DWORD *)(v47 + 24) != 4 )
            goto LABEL_86;
          v48 = *(_QWORD **)(v47 + 32);
          v49 = v48[1];
          if ( !v49 )
          {
LABEL_73:
            (*(void (__fastcall **)(QT::QToolBar *, _QWORD))(*(_QWORD *)v45 + 104LL))(v45, 0);
            a2 = (char *)v45;
            QT::QMainWindow::addToolBar(this, v45);
            v61 = *(void (**)())(*(_QWORD *)this + 432LL);
            if ( v61 != nullsub_303 )
            {
              a2 = (char *)v45;
              ((void (__fastcall *)(QT::QMainWindow *, QT::QToolBar *))v61)(this, v45);
            }
            goto LABEL_5;
          }
          v50 = 0;
          while ( 1 )
          {
            v51 = *v48 + 16 * v50;
            v52 = *(const char ***)(v51 + 8);
            if ( *(_DWORD *)v51 != 2 )
              goto LABEL_83;
            if ( !v52[1] )
              break;
            v53 = (char *)*v52;
            v54 = **v52;
            if ( !v54 || v54 == 45 )
              break;
            if ( v54 == 64 )
            {
              p_ptr = (const char *)&QT::QToolBar::staticMetaObject;
              a2 = (char *)v45;
              v62 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QToolBar::staticMetaObject, v45);
              if ( !v62 )
                goto LABEL_85;
              v16 = sub_53BAC0;
              v68 = *(__int64 (**)())(*(_QWORD *)this + 440LL);
              if ( v68 == sub_53BAC0
                || (a2 = v53, !((unsigned __int8 (__fastcall *)(QT::QMainWindow *, char *, __int64))v68)(this, v53, v62)) )
              {
                a2 = v53;
                sub_169630(
                  (int)"Unhandled special action name: \"%s\"",
                  (__int64)v53,
                  v62,
                  (__int64)v16,
                  v64,
                  v65,
                  a3,
                  a4,
                  a5,
                  a6,
                  v66,
                  v67,
                  a9,
                  a10,
                  v69);
              }
              goto LABEL_63;
            }
            v55 = sub_534430(*v52);
            if ( !v55 )
            {
              a2 = v53;
              sub_169700(
                (int)"Invalid action name: %s\n",
                (__int64)v53,
                v56,
                (__int64)v16,
                v57,
                v58,
                a3,
                a4,
                a5,
                a6,
                v59,
                v60,
                a9,
                a10,
                v69);
LABEL_63:
              if ( v49 == ++v50 )
                goto LABEL_72;
              continue;
            }
            a2 = *(char **)(v55 + 192);
            if ( !a2 )
              goto LABEL_63;
            ++v50;
            QT::QWidget::addAction(v45, (QT::QAction *)a2);
            if ( v49 == v50 )
            {
LABEL_72:
              v15 = v73;
              goto LABEL_73;
            }
          }
          (*(void (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
          a2 = (char *)sub_531DA0();
          QT::QWidget::addAction(v45, (QT::QAction *)a2);
          goto LABEL_63;
        }
LABEL_20:
        if ( under_debugger )
          goto LABEL_89;
        v19 = interr(40414, a2, v18, v16, *(double *)a3.m128_u64);
LABEL_22:
        a2 = *(char **)v19;
        v29 = **(_BYTE **)v19;
        if ( v29 && (v29 != 45 || a2[1]) )
        {
          sub_169630(
            (int)"Bad toolbar descripton \"%s\"",
            (__int64)a2,
            v18,
            (__int64)v16,
            a13,
            a14,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            v69);
          goto LABEL_5;
        }
LABEL_8:
        a2 = &byte_4;
        QT::QMainWindow::addToolBarBreak(this, 4);
        v20 = *(void (**)())(*(_QWORD *)this + 432LL);
        if ( v20 == nullsub_303 )
          goto LABEL_5;
        a2 = nullptr;
        ++v15;
        ((void (__fastcall *)(QT::QMainWindow *, _QWORD))v20)(this, 0);
        if ( v71 == v15 )
          return v77 - __readfsqword(0x28u);
      }
      else
      {
        a2 = (char *)v15;
        sub_169630(
          (int)"Bad toolbar descripton #%zu",
          v15,
          v18,
          (__int64)v70,
          a13,
          a14,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          v69);
LABEL_5:
        if ( v71 == ++v15 )
          return v77 - __readfsqword(0x28u);
      }
    }
    v19 = *((_QWORD *)v17 + 1);
    if ( !*(_QWORD *)(v19 + 8) )
      goto LABEL_8;
    goto LABEL_22;
  }
  return v77 - __readfsqword(0x28u);
}
