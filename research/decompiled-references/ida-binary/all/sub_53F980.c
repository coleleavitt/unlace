QT::QObject *__fastcall sub_53F980(
        __int64 a1,
        char **a2,
        char a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  char *p_ptr; // rbx
  char *v12; // r13
  char *v13; // rbp
  char *v14; // r14
  char *v15; // rdx
  void **v16; // rbp
  char *v17; // r14
  char *v18; // r13
  QT::QWidget *v19; // r15
  QT::QWidget *v20; // rdx
  char *v21; // r14
  QT::QWidget *v22; // r12
  char *i; // r15
  QT::QWidget *v24; // rdx
  QT::QWidget *v25; // r15
  char *v26; // r12
  const char *v27; // rdi
  char *v28; // rsi
  __int64 v29; // rcx
  QT::QWidget *v30; // r15
  char *v31; // r12
  const char *v32; // r14
  __int64 v33; // rdx
  char *v34; // rbp
  char *v35; // r15
  char *v36; // r12
  void **v37; // rbp
  __int64 v38; // rax
  const char *v39; // rbx
  size_t v40; // rax
  double v41; // xmm0_8
  size_t v42; // rax
  QT::QObject *v43; // r13
  const char *v44; // r15
  __int64 v45; // r8
  __int64 v46; // r9
  __m128 v47; // xmm4
  __m128 v48; // xmm5
  _QWORD *v49; // r12
  __int64 v50; // rbp
  __int64 v51; // rbx
  QT::QMenu *v52; // rax
  unsigned int *v53; // rax
  __int64 v54; // rdx
  const char **v55; // rax
  const char *v56; // r12
  int v57; // eax
  const char *v58; // rsi
  __int64 v59; // rax
  void *v60; // rbx
  unsigned int v61; // eax
  int v62; // edx
  const char *v63; // r15
  char v64; // al
  __int64 v65; // rax
  __int64 v66; // rdx
  char *v67; // r14
  char *v68; // rbp
  QT::QAction *v69; // r15
  const char *v70; // rbp
  char *v72; // rbp
  __int64 v73; // r15
  __int64 v74; // rax
  char *v75; // rbp
  __int64 v76; // rbp
  const char *v77; // r15
  __int64 v78; // rax
  const char *v79; // rbx
  __int64 v80; // r14
  char *v81; // rbp
  __int64 v82; // r12
  __int64 v83; // rax
  __int64 v84; // r8
  char *v85; // r12
  char *v86; // rax
  QT::QAction *v87; // rbp
  __int64 v88; // rax
  const char *v89; // r15
  __int64 v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rax
  size_t v96; // rax
  const char *v97; // rbx
  size_t v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  int *v101; // rax
  QT::QAction **v102; // rdx
  QT::QAction **v103; // rbx
  QT::QAction **v104; // r14
  const QT::QObject *v105; // rax
  char v106; // al
  volatile signed __int32 *v107; // rax
  int v108; // [rsp+0h] [rbp-F8h]
  QT::QWidget *v110; // [rsp+30h] [rbp-C8h]
  QT::QWidget *v111; // [rsp+30h] [rbp-C8h]
  void **v112; // [rsp+30h] [rbp-C8h]
  volatile signed __int32 *v114; // [rsp+40h] [rbp-B8h]
  void *v116[2]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v117; // [rsp+70h] [rbp-88h]
  void *ptr; // [rsp+80h] [rbp-78h] BYREF
  QT::QAction **v119; // [rsp+88h] [rbp-70h]
  __int64 v120; // [rsp+90h] [rbp-68h]
  void *v121; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v122; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v123; // [rsp+B8h] [rbp-40h]

  v123 = __readfsqword(0x28u);
  p_ptr = a2[1];
  if ( !p_ptr )
    goto LABEL_194;
  v12 = nullptr;
  v13 = *a2;
  v14 = *a2;
  do
  {
    if ( *((_QWORD *)v13 + 1) && !strcmp(*(const char **)v13, "actions") )
    {
      v15 = v14;
      v16 = (void **)(v13 + 24);
      goto LABEL_7;
    }
    ++v12;
    v13 += 40;
  }
  while ( p_ptr != v12 );
  v15 = v14;
  v16 = nullptr;
LABEL_7:
  v17 = v15;
  v18 = nullptr;
  v19 = (QT::QWidget *)v15;
  do
  {
    if ( *((_QWORD *)v17 + 1) && !strcmp(*(const char **)v17, "template") )
    {
      v20 = v19;
      v21 = v17 + 24;
      goto LABEL_12;
    }
    ++v18;
    v17 += 40;
  }
  while ( v18 != p_ptr );
  v20 = v19;
  v21 = nullptr;
LABEL_12:
  v110 = v20;
  v22 = v20;
  for ( i = nullptr; i != p_ptr; ++i )
  {
    if ( *((_QWORD *)v22 + 1) && !strcmp(*(const char **)v22, "live") )
    {
      v24 = v110;
      v114 = (volatile signed __int32 *)((char *)v22 + 24);
      goto LABEL_17;
    }
    v22 = (QT::QWidget *)((char *)v22 + 40);
  }
  v114 = nullptr;
  v24 = v110;
LABEL_17:
  v111 = v24;
  v25 = v24;
  v26 = nullptr;
  while ( 1 )
  {
    if ( *((_QWORD *)v25 + 1) )
    {
      v27 = *(const char **)v25;
      v28 = "label";
      if ( !strcmp(*(const char **)v25, "label") )
        break;
    }
    ++v26;
    v25 = (QT::QWidget *)((char *)v25 + 40);
    if ( v26 == p_ptr )
      goto LABEL_194;
  }
  if ( !((unsigned __int64)v114 | (unsigned __int64)v16 | (unsigned __int64)v21) )
LABEL_194:
    sub_16B930((__int64)"Missing \"name\", \"label\" or \"actions\" (or \"template\" or \"live\") property for menu");
  v30 = v111;
  v31 = nullptr;
  v32 = "name";
  do
  {
    if ( *((_QWORD *)v30 + 1) )
    {
      v27 = *(const char **)v30;
      v28 = "name";
      if ( !strcmp(*(const char **)v30, "name") )
      {
        v33 = (__int64)v111;
        v112 = v16;
        v72 = nullptr;
        v73 = v33;
        v36 = (char *)v33;
        while ( 1 )
        {
          if ( *(_QWORD *)(v73 + 8) )
          {
            v27 = *(const char **)v73;
            v28 = "name";
            if ( !strcmp(*(const char **)v73, "name") )
              break;
          }
          ++v72;
          v73 += 40;
          if ( p_ptr == v72 )
            goto LABEL_32;
        }
        v16 = v112;
        v33 = (__int64)v36;
        v74 = *(_QWORD *)(v73 + 32);
        if ( *(_DWORD *)(v73 + 24) == 2 )
        {
          v32 = &s1;
          if ( *(_QWORD *)(v74 + 8) )
            v32 = *(const char **)v74;
          goto LABEL_28;
        }
        goto LABEL_195;
      }
    }
    ++v31;
    v30 = (QT::QWidget *)((char *)v30 + 40);
  }
  while ( p_ptr != v31 );
  v33 = (__int64)v111;
  if ( a3 )
    goto LABEL_199;
  v32 = nullptr;
LABEL_28:
  v112 = v16;
  v34 = nullptr;
  v35 = p_ptr;
  p_ptr = (char *)v33;
  v36 = *(char **)(a1 + 8);
  do
  {
    if ( *((_QWORD *)p_ptr + 1) )
    {
      v27 = *(const char **)p_ptr;
      v28 = "label";
      if ( !strcmp(*(const char **)p_ptr, "label") )
        goto LABEL_33;
    }
    ++v34;
    p_ptr += 40;
  }
  while ( v35 != v34 );
LABEL_32:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          sub_53BB90(*(double *)a4.m128_u64, (__int64)v27, (__int64)v28, v33, v29);
LABEL_33:
          v37 = v112;
          v38 = *((_QWORD *)p_ptr + 4);
          if ( *((_DWORD *)p_ptr + 6) != 2 )
            goto LABEL_195;
          v39 = &s1;
          if ( *(_QWORD *)(v38 + 8) )
            v39 = *(const char **)v38;
          v40 = 0;
          if ( v39 )
            v40 = strlen(v39);
          v112 = &v121;
          v41 = QT::QString::fromUtf8(&v121, v40, v39);
          v42 = 0;
          if ( v32 )
            v42 = strlen(v32);
          p_ptr = (char *)&ptr;
          *(double *)a4.m128_u64 = QT::QString::fromUtf8(&ptr, v42, v32, v41);
          v28 = (char *)&ptr;
          v27 = v36;
          v43 = sub_53F320(v36, (const QT::QString *)&ptr, (__int64)&v121, 0, *(double *)a4.m128_u64);
          if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          {
            v27 = (const char *)ptr;
            free(ptr);
          }
          if ( v121 && !_InterlockedSub((volatile signed __int32 *)v121, 1u) )
          {
            v27 = (const char *)v121;
            free(v121);
          }
          v32 = a2[1];
          if ( v37 )
          {
            if ( !v32 )
              continue;
            p_ptr = *a2;
            v44 = nullptr;
            v36 = *a2;
            while ( 1 )
            {
              if ( *((_QWORD *)v36 + 1) )
              {
                v27 = *(const char **)v36;
                v28 = "actions";
                if ( !strcmp(*(const char **)v36, "actions") )
                  break;
              }
              ++v44;
              v36 += 40;
              if ( v32 == v44 )
                goto LABEL_32;
            }
            if ( *((_DWORD *)v36 + 6) == 4 )
            {
              v49 = *((_QWORD **)v36 + 4);
              v50 = v49[1];
              if ( !v50 )
                goto LABEL_65;
              v51 = 0;
              while ( 1 )
              {
                v53 = (unsigned int *)(*v49 + 16 * v51);
                v54 = *v53;
                if ( (_DWORD)v54 != 2 )
                  break;
                v55 = *((const char ***)v53 + 1);
                if ( v55[1] )
                {
                  v63 = *v55;
                  v64 = **v55;
                  if ( v64 )
                  {
                    if ( v64 != 45 )
                    {
                      if ( v64 == 64 )
                      {
                        v28 = (char *)v63;
                        sub_169630(
                          (int)"Unhandled special action name: \"%s\"",
                          (__int64)v63,
                          v54,
                          v29,
                          v45,
                          v46,
                          a4,
                          a5,
                          a6,
                          a7,
                          v47,
                          v48,
                          a10,
                          a11,
                          v108);
                        goto LABEL_58;
                      }
                      v65 = sub_534430(v63);
                      if ( !v65 )
                      {
                        v28 = (char *)v63;
                        sub_169700(
                          (int)"Invalid action name: %s\n",
                          (__int64)v63,
                          v66,
                          v29,
                          v45,
                          v46,
                          a4,
                          a5,
                          a6,
                          a7,
                          v47,
                          v48,
                          a10,
                          a11,
                          v108);
                        goto LABEL_58;
                      }
                      v28 = *(char **)(v65 + 192);
                      if ( !v28 )
                      {
LABEL_58:
                        if ( v50 == ++v51 )
                          goto LABEL_62;
                        continue;
                      }
LABEL_57:
                      QT::QWidget::addAction(v43, (QT::QAction *)v28);
                      goto LABEL_58;
                    }
                  }
                }
                ++v51;
                (*(void (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
                v28 = (char *)sub_531DA0();
                QT::QWidget::addAction(v43, (QT::QAction *)v28);
                if ( v50 == v51 )
                  goto LABEL_62;
              }
              if ( (_DWORD)v54 != 3 )
              {
                if ( !under_debugger )
                {
                  interr(40412, v28, v54, v29, *(double *)a4.m128_u64);
                  goto LABEL_194;
                }
LABEL_205:
                BUG();
              }
              v52 = (QT::QMenu *)sub_53F980(a1, *((_QWORD *)v53 + 1), 0);
              v28 = (char *)QT::QMenu::menuAction(v52);
              goto LABEL_57;
            }
LABEL_196:
            sub_53BB50(*(double *)a4.m128_u64, (__int64)v27, (__int64)v28, v33, v29);
            goto LABEL_197;
          }
          break;
        }
        if ( v114 )
          goto LABEL_63;
        if ( !v32 )
          continue;
        break;
      }
      v36 = nullptr;
      p_ptr = "template";
      v75 = *a2;
      while ( 1 )
      {
        if ( *((_QWORD *)v75 + 1) )
        {
          v27 = *(const char **)v75;
          v28 = "template";
          if ( !strcmp(*(const char **)v75, "template") )
            break;
        }
        ++v36;
        v75 += 40;
        if ( v32 == v36 )
          goto LABEL_32;
      }
      if ( *((_DWORD *)v75 + 6) != 3 )
      {
        if ( under_debugger )
          goto LABEL_205;
        v90 = 1279;
        interr(1279, "template", v33, v29, *(double *)a4.m128_u64);
LABEL_202:
        sub_53BB30(*(double *)a4.m128_u64, v90, (__int64)v28, v92, v93);
LABEL_203:
        sub_16B930((__int64)"Expected array of strings in \"remove\" property");
      }
      v76 = *((_QWORD *)v75 + 4);
      v77 = *(const char **)(v76 + 8);
      if ( !v77 )
        continue;
      break;
    }
    v36 = *(char **)v76;
    v32 = nullptr;
    p_ptr = "name";
    while ( 1 )
    {
      if ( *((_QWORD *)v36 + 1) )
      {
        v27 = *(const char **)v36;
        v28 = "name";
        if ( !strcmp(*(const char **)v36, "name") )
          break;
      }
      ++v32;
      v36 += 40;
      if ( v77 == v32 )
        goto LABEL_32;
    }
    v78 = *((_QWORD *)v36 + 4);
    if ( *((_DWORD *)v36 + 6) != 2 )
    {
LABEL_195:
      sub_53BBB0(*(double *)a4.m128_u64, (__int64)v27, (__int64)v28, v33, v29);
      goto LABEL_196;
    }
    v79 = &s1;
    if ( *(_QWORD *)(v78 + 8) )
      v79 = *(const char **)v78;
    if ( !sub_53DC50(*(_QWORD *)(a1 + 8), v79) )
      sub_16B930((__int64)"Couldn't find template menu \"%s\"", v79);
    QT::QWidget::actions((QT::QWidget *)&v121);
    QT::QWidget::addActions(v43, &v121);
    if ( v121 && !_InterlockedSub((volatile signed __int32 *)v121, 1u) )
      free(v121);
    v80 = *(_QWORD *)(v76 + 8);
    if ( v80 )
    {
      v81 = *(char **)v76;
      v82 = 0;
      while ( !*((_QWORD *)v81 + 1) || strcmp(*(const char **)v81, "remove") )
      {
        ++v82;
        v81 += 40;
        if ( v80 == v82 )
          goto LABEL_62;
      }
      if ( *((_DWORD *)v81 + 6) == 4 )
      {
        v83 = *((_QWORD *)v81 + 4);
        v27 = *(const char **)(v83 + 8);
        if ( v27 )
        {
          v28 = *(char **)v83;
          v33 = 0;
          v84 = *(_QWORD *)v83 + 16LL * (_QWORD)v27;
          v85 = *(char **)v83;
          v86 = *(char **)v83;
          a1 = v84;
          do
          {
            v29 = *(_DWORD *)v86 == 2;
            v86 += 16;
            v33 += v29;
          }
          while ( (char *)v84 != v86 );
          if ( (const char *)v33 != v27 )
            goto LABEL_203;
          if ( (char *)v84 != v28 )
          {
            while ( 1 )
            {
              v88 = *((_QWORD *)v85 + 1);
              if ( *(_DWORD *)v85 != 2 )
                goto LABEL_195;
              v89 = &s1;
              if ( *(_QWORD *)(v88 + 8) )
                v89 = *(const char **)v88;
              v90 = (__int64)v89;
              v91 = sub_534430(v89);
              if ( !v91 )
                break;
              v87 = *(QT::QAction **)(v91 + 192);
              if ( !v87 )
                break;
LABEL_138:
              v28 = (char *)v87;
              v27 = (const char *)v43;
              v85 += 16;
              QT::QWidget::removeAction(v43, v87);
              if ( (char *)a1 == v85 )
                goto LABEL_62;
            }
            if ( *(_DWORD *)v85 != 2 )
              goto LABEL_202;
            v94 = *((_QWORD *)v85 + 1);
            v95 = *(_QWORD *)(v94 + 8);
            if ( v95 )
            {
              v96 = v95 - 1;
              v97 = *(const char **)v94;
              v98 = v96 >> 63;
            }
            else
            {
              LOBYTE(v98) = 0;
              v96 = 0;
              v97 = &s1;
            }
            if ( !v97 || (_BYTE)v98 )
            {
              v96 = 0;
              if ( v97 )
                v96 = strlen(v97);
            }
            *(double *)a4.m128_u64 = QT::QString::fromUtf8(v116, v96, v97);
            QT::QWidget::actions((QT::QWidget *)&ptr);
            v101 = (int *)ptr;
            if ( !ptr || *(int *)ptr > 1 )
            {
              sub_1821F0((__int64)&ptr, 0, 0, 0, v99, v100);
              v101 = (int *)ptr;
            }
            v102 = v119;
            v103 = v119;
            if ( !v101 || *v101 > 1 )
            {
              sub_1821F0((__int64)&ptr, 0, 0, 0, v99, v100);
              v102 = v119;
            }
            v104 = &v102[v120];
            if ( v103 == v104 )
            {
              v107 = (volatile signed __int32 *)ptr;
              if ( !ptr )
              {
                if ( v116[0] && !_InterlockedSub((volatile signed __int32 *)v116[0], 1u) )
                  free(v116[0]);
LABEL_173:
                sub_16B930((__int64)"Failed to find action \"%s\"", v89);
              }
              v87 = nullptr;
            }
            else
            {
              do
              {
                v87 = *v103;
                v105 = (const QT::QObject *)QT::QAction::menuObject(*v103);
                if ( QT::QMetaObject::cast((QT::QMetaObject *)&QT::QMenu::staticMetaObject, v105) )
                {
                  QT::QObject::objectName((QT::QObject *)&v121);
                  if ( v117 == *((_QWORD *)&v122 + 1) )
                  {
                    LOBYTE(v108) = v117;
                    v114 = (volatile signed __int32 *)v121;
                    v106 = QT::QtPrivate::equalStrings(v117, v122, v117, v116[1]);
                    if ( v114 && !_InterlockedSub(v114, 1u) )
                    {
                      LOBYTE(v114) = v106;
                      free(v121);
                      v106 = (char)v114;
                    }
                    if ( v106 )
                      goto LABEL_166;
                  }
                  else if ( v121 && !_InterlockedSub((volatile signed __int32 *)v121, 1u) )
                  {
                    free(v121);
                  }
                }
                ++v103;
              }
              while ( v104 != v103 );
              v87 = nullptr;
LABEL_166:
              v107 = (volatile signed __int32 *)ptr;
              if ( !ptr )
              {
LABEL_169:
                if ( v116[0] && !_InterlockedSub((volatile signed __int32 *)v116[0], 1u) )
                  free(v116[0]);
                if ( !v87 )
                  goto LABEL_173;
                goto LABEL_138;
              }
            }
            if ( !_InterlockedSub(v107, 1u) )
              free(ptr);
            goto LABEL_169;
          }
        }
      }
    }
LABEL_62:
    v32 = a2[1];
LABEL_63:
    if ( !v32 )
      return v43;
    p_ptr = *a2;
LABEL_65:
    v56 = nullptr;
    while ( !*((_QWORD *)p_ptr + 1) || strcmp(*(const char **)p_ptr, "icon") )
    {
      ++v56;
      p_ptr += 40;
      if ( v32 == v56 )
        goto LABEL_84;
    }
    v57 = *((_DWORD *)p_ptr + 6);
    if ( v57 == 1 )
    {
      v62 = *((_DWORD *)p_ptr + 8);
      goto LABEL_82;
    }
    if ( v57 == 2 )
    {
      a4 = 0;
      v121 = nullptr;
      v122 = 0;
      v58 = *((const char **)p_ptr + 4);
      if ( (unsigned __int8)sub_53BCA0((__int64 *)&v121, (__int64)v58) )
      {
        v59 = (*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 224LL))(QT::QCoreApplication::self);
        v60 = v121;
        if ( v59 )
        {
          v61 = sub_53C520(v59, (__int64)&v121);
          v62 = v61;
          if ( v60 )
          {
            v108 = v61;
            *(_QWORD *)&v122 = 0;
            *(double *)a4.m128_u64 = qfree(v60, (const char *)&v121, v61);
            v62 = v108;
          }
LABEL_82:
          if ( v62 >= 0 )
          {
            (*(void (__fastcall **)(void **))(*QT::QCoreApplication::self + 136LL))(&v121);
            QT::QMenu::setIcon(v43, (const QT::QIcon *)&v121);
            QT::QIcon::~QIcon((QT::QIcon *)&v121);
          }
          goto LABEL_84;
        }
        if ( !v121 )
          goto LABEL_84;
      }
      else if ( !v121 )
      {
        goto LABEL_84;
      }
      *(_QWORD *)&v122 = 0;
      *(double *)a4.m128_u64 = qfree(v121, v58);
    }
LABEL_84:
    if ( !a3 )
    {
      v67 = a2[1];
      if ( v67 )
      {
        p_ptr = *a2;
        v68 = nullptr;
        v36 = "visible_initially";
        while ( 1 )
        {
          if ( *((_QWORD *)p_ptr + 1) )
          {
            v28 = "visible_initially";
            if ( !strcmp(*(const char **)p_ptr, "visible_initially") )
              break;
          }
          ++v68;
          p_ptr += 40;
          if ( v67 == v68 )
            return v43;
        }
        v27 = (const char *)v43;
        v69 = (QT::QAction *)QT::QMenu::menuAction(v43);
        v32 = a2[1];
        if ( !v32 )
          continue;
        v70 = nullptr;
        p_ptr = *a2;
        while ( 1 )
        {
          if ( *((_QWORD *)p_ptr + 1) )
          {
            v27 = *(const char **)p_ptr;
            v28 = "visible_initially";
            if ( !strcmp(*(const char **)p_ptr, "visible_initially") )
              break;
          }
          ++v70;
          p_ptr += 40;
          if ( v32 == v70 )
            goto LABEL_32;
        }
        if ( *((_DWORD *)p_ptr + 6) == 5 )
        {
          QT::QAction::setVisible(v69, p_ptr[32]);
          return v43;
        }
LABEL_197:
        if ( under_debugger )
          goto LABEL_205;
        interr(1281, v28, v33, v29, *(double *)a4.m128_u64);
LABEL_199:
        sub_16B930((__int64)"Toplevel menus must have a \"name\" property", v28, v33);
      }
    }
    return v43;
  }
}
