unsigned __int64 __fastcall shortcutlist_chooser_t__::vfunc_6(
        __int64 a1,
        void **p_ptr,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5,
        double a6)
{
  QT::QKeySequence *v6; // rbp
  QT::QKeySequence *v7; // r12
  QT::QKeySequence *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 *v11; // r12
  char *v12; // r14
  size_t v13; // rax
  size_t v14; // r8
  int v15; // ebp
  __int64 v16; // rcx
  char *v18; // r14
  size_t v19; // rax
  size_t v20; // r8
  unsigned __int64 v21; // rax
  const char *v22; // r14
  const char *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  void *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // r8
  char *v29; // rdx
  char *v30; // r14
  __int64 v31; // r15
  char *v32; // r10
  __int64 v33; // rsi
  QT::QKeySequence *v34; // rbp
  QT::QKeySequence *v35; // r14
  QT::QKeySequence *v36; // rdi
  QT::QKeySequence *v37; // r15
  __int64 v38; // rbp
  unsigned __int64 v39; // rdx
  __int64 v40; // rbp
  unsigned __int64 v41; // rdx
  __int64 v42; // r8
  void **v43; // rsi
  unsigned __int64 v44; // rbp
  void **v45; // rbx
  void *v46; // rdi
  signed __int64 v47; // r15
  QT::QKeySequence *v48; // rbx
  QT::QKeySequence *v49; // rbp
  QT::QKeySequence *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rbp
  __int64 v53; // rbx
  __int64 *v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // rbp
  size_t v60; // rbx
  void *v61; // rdi
  size_t v62; // rax
  void *v63; // rdi
  size_t v64; // rdx
  void *v65; // rdi
  size_t v66; // rdx
  char *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  struct _Unwind_Exception *v74; // rbx
  __int64 v75; // r8
  __int64 v76; // [rsp+0h] [rbp-E8h]
  size_t v77; // [rsp+0h] [rbp-E8h]
  size_t v78; // [rsp+0h] [rbp-E8h]
  size_t v79; // [rsp+0h] [rbp-E8h]
  size_t v80; // [rsp+0h] [rbp-E8h]
  __int64 v81; // [rsp+8h] [rbp-E0h]
  __int64 v82; // [rsp+10h] [rbp-D8h]
  void **v83; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v84; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v85; // [rsp+20h] [rbp-C8h]
  char *v86; // [rsp+20h] [rbp-C8h]
  size_t v87; // [rsp+20h] [rbp-C8h]
  size_t v88; // [rsp+20h] [rbp-C8h]
  __int64 v89; // [rsp+28h] [rbp-C0h]
  __int64 v90; // [rsp+28h] [rbp-C0h]
  char *v91; // [rsp+28h] [rbp-C0h]
  __int64 *v92; // [rsp+30h] [rbp-B8h]
  __int64 v96; // [rsp+50h] [rbp-98h] BYREF
  __int128 v97; // [rsp+58h] [rbp-90h]
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  QT::QKeySequence *v99; // [rsp+78h] [rbp-70h]
  __int64 v100; // [rsp+80h] [rbp-68h]
  void *src; // [rsp+90h] [rbp-58h] BYREF
  char *s; // [rsp+98h] [rbp-50h]
  unsigned __int64 v103; // [rsp+A8h] [rbp-40h]

  v81 = a1;
  v83 = p_ptr;
  v103 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 184);
  if ( *(_DWORD *)(v9 + 80) <= a5 )
  {
LABEL_109:
    v74 = (struct _Unwind_Exception *)sub_1851C0(a6, a1, (__int64)p_ptr, (__int64)a3, a4);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    {
      v6 = v99;
      v7 = (QT::QKeySequence *)((char *)v99 + 8 * v100);
      while ( v7 != v6 )
      {
        v8 = v6;
        v6 = (QT::QKeySequence *)((char *)v6 + 8);
        QT::QKeySequence::~QKeySequence(v8);
      }
      free(ptr);
    }
    sub_1805D0(v92, (__int64)p_ptr, v72, v73, v75);
    _Unwind_Resume(v74);
  }
  v10 = 0;
  v82 = *(_QWORD *)(*(_QWORD *)(v9 + 72) + 8LL * (int)a5);
  if ( *(int *)(a1 + 48) > 0 )
  {
    do
    {
      v11 = (__int64 *)((char *)*v83 + 24 * v10);
      switch ( *(_DWORD *)(*(_QWORD *)(v81 + 192) + 4 * v10) )
      {
        case 1:
          if ( v11 == (__int64 *)(v82 + 32) )
            goto LABEL_13;
          v44 = *(_QWORD *)(v82 + 40);
          if ( v44 < 2 )
            goto LABEL_34;
          v45 = *(void ***)(v82 + 32);
          v46 = (void *)*v11;
          if ( v11[2] < v44 )
          {
            v71 = qvector_reserve((char *)*v83 + 24 * v10, *v11, *(_QWORD *)(v82 + 40), 1);
            *v11 = v71;
            v46 = (void *)v71;
          }
          v11[1] = v44;
          p_ptr = v45;
          memmove(v46, v45, v44 - 1);
          *(_BYTE *)(*v11 + v44 - 1) = 0;
          goto LABEL_13;
        case 2:
          a6 = 0.0;
          v96 = 0;
          v23 = &s1;
          v97 = 0;
          if ( *(_QWORD *)(v82 + 40) )
            v23 = *(const char **)(v82 + 32);
          v92 = &v96;
          sub_4B1970(&v96, 0, v23);
          p_ptr = *(void ***)(v82 + 192);
          QT::QAction::shortcuts((QT::QAction *)&ptr);
          v76 = 0;
          if ( !(_QWORD)v97 )
            goto LABEL_66;
LABEL_39:
          v26 = (void *)(24 * v76 + v96);
          sub_5329D0(&src, v26);
          v29 = s;
          if ( s )
          {
            v30 = s - 1;
            if ( s != (_BYTE *)&dword_0 + 1 )
            {
              v31 = v11[1];
              v32 = s - 1;
              if ( v31 )
              {
                v32 = &v30[--v31];
                v29 = &s[v31];
              }
              v33 = *v11;
              if ( v11[2] < (unsigned __int64)v29 )
              {
                v91 = v32;
                v86 = v29;
                v58 = qvector_reserve(v11, v33, v29, 1);
                *v11 = v58;
                v32 = v91;
                v33 = v58;
                v29 = v86;
              }
              v11[1] = (__int64)v29;
              v32[v33] = 0;
              v26 = src;
              memcpy((void *)(v31 + *v11), src, (size_t)v30);
            }
          }
          if ( src )
          {
            s = nullptr;
            qfree(src, v26, v29, v27, v28);
          }
          sub_532340(&src, 24 * v76 + v96);
          if ( v100 <= 0 )
            goto LABEL_52;
          v34 = (QT::QKeySequence *)((char *)v99 + 8 * v100);
          v35 = v99;
          break;
        case 3:
          p_ptr = (void **)v82;
          sub_180980((__int64 *)*v83 + 3 * v10, v82);
          goto LABEL_13;
        case 4:
          v21 = *(int *)(v82 + 120);
          if ( v21 > 7 )
          {
            v59 = 8;
            v60 = 7;
            v22 = "unknown";
          }
          else
          {
            v22 = off_8BA420[v21];
            if ( !v22 || (v62 = strlen(off_8BA420[v21]), (v60 = v62) == 0) )
            {
LABEL_34:
              v11[1] = 0;
              goto LABEL_13;
            }
            v59 = v62 + 1;
          }
          v61 = (void *)*v11;
          if ( v11[2] < v59 )
          {
            v70 = qvector_reserve(v11, *v11, v59, 1);
            *v11 = v70;
            v61 = (void *)v70;
          }
          v11[1] = v59;
          p_ptr = (void **)v22;
          memmove(v61, v22, v60);
          *(_BYTE *)(*v11 + v60) = 0;
          goto LABEL_13;
        case 5:
          QT::QAction::text((QT::QAction *)&ptr);
          QT::QString::toUtf8_helper((QT::QString *)&src, (const QT::QString *)&ptr);
          v18 = s;
          if ( (s || (v18 = (char *)&QT::QByteArray::_empty) != nullptr) && (v19 = strlen(v18), (v20 = v19) != 0) )
          {
            v63 = (void *)*v11;
            v64 = v19 + 1;
            if ( v11[2] < v19 + 1 )
            {
              v80 = v19 + 1;
              v88 = v19;
              v69 = qvector_reserve(v11, *v11, v64, 1);
              v20 = v88;
              v64 = v80;
              *v11 = v69;
              v63 = (void *)v69;
            }
            v11[1] = v64;
            v77 = v20;
            memmove(v63, v18, v20);
            *(_BYTE *)(*v11 + v77) = 0;
          }
          else
          {
            v11[1] = 0;
          }
          if ( src && !_InterlockedSub((volatile signed __int32 *)src, 1u) )
            free(src);
          if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
            free(ptr);
          sub_185800((__int64)v11, "~", (const char *)&unk_5C2F25);
          p_ptr = (void **)"&";
          sub_185800((__int64)v11, "&", (const char *)&unk_5C2F25);
          goto LABEL_13;
        case 6:
          QT::QAction::toolTip((QT::QAction *)&ptr);
          p_ptr = &ptr;
          QT::QString::toUtf8_helper((QT::QString *)&src, (const QT::QString *)&ptr);
          v12 = s;
          if ( (s || (v12 = (char *)&QT::QByteArray::_empty) != nullptr) && (v13 = strlen(v12), (v14 = v13) != 0) )
          {
            v65 = (void *)*v11;
            v66 = v13 + 1;
            if ( v11[2] < v13 + 1 )
            {
              v79 = v13 + 1;
              v87 = v13;
              v68 = qvector_reserve(v11, *v11, v66, 1);
              v14 = v87;
              v66 = v79;
              *v11 = v68;
              v65 = (void *)v68;
            }
            v11[1] = v66;
            p_ptr = (void **)v12;
            v78 = v14;
            memmove(v65, v12, v14);
            *(_BYTE *)(*v11 + v78) = 0;
          }
          else
          {
            v11[1] = 0;
          }
          if ( src && !_InterlockedSub((volatile signed __int32 *)src, 1u) )
            free(src);
          if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
            free(ptr);
          goto LABEL_13;
        default:
          if ( under_debugger )
            BUG();
          a1 = 1324;
          interr(1324, p_ptr, *v83, v83, a6);
          goto LABEL_109;
      }
      do
      {
        v37 = v35;
        if ( v34 == v35 )
        {
LABEL_52:
          QT::QKeySequence::~QKeySequence((QT::QKeySequence *)&src);
LABEL_53:
          v38 = v11[1];
          if ( v38 )
          {
            v25 = v38 + 10;
            v39 = v38 + 11;
            p_ptr = (void **)*v11;
            --v38;
            if ( v11[2] >= v39 )
              goto LABEL_55;
LABEL_81:
            v90 = v25;
            v85 = v39;
            v57 = qvector_reserve(v11, p_ptr, v39, 1);
            *v11 = v57;
            v25 = v90;
            p_ptr = (void **)v57;
            v39 = v85;
          }
          else
          {
            p_ptr = (void **)*v11;
            v39 = 12;
            v25 = 11;
            if ( (unsigned __int64)v11[2] < 0xC )
              goto LABEL_81;
          }
LABEL_55:
          v11[1] = v39;
          *((_BYTE *)p_ptr + v25) = 0;
          qmemcpy((void *)(*v11 + v38), " (disabled)", 11);
          if ( ++v76 >= (unsigned __int64)v97 )
            goto LABEL_66;
LABEL_56:
          v40 = v11[1];
          if ( v40 )
          {
            v41 = v40 + 1;
            v42 = v11[1];
            v43 = (void **)*v11;
            --v40;
            if ( v11[2] >= v41 )
            {
LABEL_58:
              v11[1] = v41;
              *((_BYTE *)v43 + v42) = 0;
              *(_BYTE *)(*v11 + v40) = 44;
              goto LABEL_39;
            }
          }
          else
          {
            v43 = (void **)*v11;
            v41 = 2;
            v42 = 1;
            if ( (unsigned __int64)v11[2] >= 2 )
              goto LABEL_58;
          }
          v89 = v42;
          v84 = v41;
          v56 = qvector_reserve(v11, v43, v41, 1);
          *v11 = v56;
          v42 = v89;
          v43 = (void **)v56;
          v41 = v84;
          goto LABEL_58;
        }
        v36 = v35;
        p_ptr = &src;
        v35 = (QT::QKeySequence *)((char *)v35 + 8);
      }
      while ( !(unsigned __int8)QT::QKeySequence::operator==(v36, &src) );
      v47 = v37 - v99;
      QT::QKeySequence::~QKeySequence((QT::QKeySequence *)&src);
      if ( v47 == -8 )
        goto LABEL_53;
      if ( ++v76 < (unsigned __int64)v97 )
        goto LABEL_56;
LABEL_66:
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      {
        v48 = v99;
        v49 = (QT::QKeySequence *)((char *)v99 + 8 * v100);
        if ( v99 != v49 )
        {
          do
          {
            v50 = v48;
            v48 = (QT::QKeySequence *)((char *)v48 + 8);
            QT::QKeySequence::~QKeySequence(v50);
          }
          while ( v49 != v48 );
        }
        free(ptr);
      }
      v51 = v96;
      if ( v96 )
      {
        v52 = v97;
        if ( (_QWORD)v97 )
        {
          v53 = 0;
          do
          {
            v54 = (__int64 *)(v51 + 24 * v53);
            v55 = *v54;
            if ( *v54 )
            {
              v54[1] = 0;
              qfree(v55, p_ptr, v51, v24, v25);
              v51 = v96;
            }
            ++v53;
          }
          while ( v52 != v53 );
        }
        *(_QWORD *)&v97 = 0;
        qfree(v51, p_ptr, v51, v24, v25);
      }
LABEL_13:
      ++v10;
    }
    while ( *(_DWORD *)(v81 + 48) > (int)v10 );
  }
  *a3 = 172;
  if ( *(_QWORD *)(v82 + 192) )
  {
    QT::QAction::icon((QT::QAction *)&src);
    v15 = sub_1C7D70(&src);
    QT::QIcon::~QIcon((QT::QIcon *)&src);
    if ( v15 != -1 )
      *a3 = v15;
  }
  if ( !*(_QWORD *)(v82 + 40) )
  {
    if ( !(unsigned __int8)sub_4B16A0(0, &s1, 1) )
      goto LABEL_19;
LABEL_98:
    *(_DWORD *)(a4 + 8) = (_DWORD)&unk_80FFFF;
    if ( *(int *)(v82 + 120) > 3 )
      goto LABEL_20;
    goto LABEL_99;
  }
  if ( (unsigned __int8)sub_4B16A0(0, *(_QWORD *)(v82 + 32), 1) )
    goto LABEL_98;
LABEL_19:
  if ( *(int *)(v82 + 120) > 3 )
  {
LABEL_20:
    *(_DWORD *)(a4 + 4) |= 8u;
    return v103 - __readfsqword(0x28u);
  }
LABEL_99:
  if ( (unsigned int)sub_187500(*(_QWORD *)(v81 + 184), a5, 1, v16, a6) != -1 )
  {
    LODWORD(v67) = 43775;
    if ( *(_DWORD *)(a4 + 8) == -1 )
      v67 = "nTracebufInfo";
    *(_DWORD *)(a4 + 8) = (_DWORD)v67;
  }
  if ( *(int *)(v82 + 120) > 3 )
    goto LABEL_20;
  return v103 - __readfsqword(0x28u);
}
