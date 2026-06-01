unsigned __int64 __fastcall sub_2F8F30(__int64 a1, int a2, char a3)
{
  int v5; // ebp
  __int64 *v6; // r14
  __int64 v7; // r12
  size_t v8; // r15
  const char *v9; // rsi
  const char *v10; // rsi
  double v11; // xmm0_8
  size_t v12; // r13
  const char *v13; // rsi
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  const char *v17; // rsi
  const char *v18; // rdi
  QT::QWidget *v19; // rdi
  char v20; // si
  __int64 v21; // rax
  bool v22; // dl
  __int64 v23; // rax
  __int64 v24; // r13
  bool v25; // cl
  int v26; // eax
  QT::QWidget *v27; // rdi
  bool v28; // r14
  char v29; // cl
  bool v30; // si
  QT::QWidget *v31; // rdi
  QT::QWidget *v32; // rdi
  bool v33; // al
  bool v34; // r14
  char v35; // si
  __int64 v36; // rax
  bool v37; // al
  __int64 v38; // rax
  QT::QWidget *v39; // r14
  int v40; // eax
  QT::QWidget *v41; // rdi
  double v42; // xmm0_8
  QT::QLineEdit *v43; // rbx
  size_t v44; // rax
  char v46; // al
  void *v47; // rax
  _BYTE *v48; // r12
  char *v49; // rax
  int v50; // eax
  _BYTE *v51; // rdi
  __int64 v52; // r13
  __int64 v53; // rax
  int v54; // eax
  unsigned __int64 v55; // r12
  bool v56; // [rsp+0h] [rbp-488h]
  bool v57; // [rsp+0h] [rbp-488h]
  QT::QWidget *v58; // [rsp+0h] [rbp-488h]
  bool v59; // [rsp+0h] [rbp-488h]
  bool v60; // [rsp+Ah] [rbp-47Eh]
  bool v61; // [rsp+Ch] [rbp-47Ch]
  __int64 v62; // [rsp+10h] [rbp-478h] BYREF
  unsigned __int64 v63; // [rsp+18h] [rbp-470h] BYREF
  void *ptr; // [rsp+20h] [rbp-468h] BYREF
  __int128 v65; // [rsp+28h] [rbp-460h]
  char s[1032]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v67; // [rsp+448h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return v67 - __readfsqword(0x28u);
  v5 = sub_2F8E30((__m128i *)(a1 + 88), a2, &v62);
  v6 = (__int64 *)sub_2E41D0(*(_QWORD *)(a1 + 72));
  if ( a3 )
  {
    v7 = v62;
    ptr = nullptr;
    v65 = 0;
    v8 = *(_QWORD *)(v62 + 64);
    if ( !v8 )
    {
      v63 = -1;
LABEL_5:
      v9 = &s1;
LABEL_6:
      if ( !sub_2E3EC0(v6, v9, &v63) )
        sub_2E3F60(v6, &v63);
      v10 = (const char *)v63;
      if ( v63 < v6[1] )
      {
        sub_2E4320(*(QT::QAbstractItemView **)(a1 + 72));
        sub_4E4770(*(_QWORD *)(a1 + 72) + 304LL);
        v10 = (_BYTE *)(&dword_0 + 1);
        sub_2F7090(a1, 1u);
      }
      if ( ptr )
      {
        *(_QWORD *)&v65 = 0;
        qfree(ptr, v10);
      }
      goto LABEL_12;
    }
    v47 = (void *)qalloc_or_throw(*(_QWORD *)(v62 + 64));
    *((_QWORD *)&v65 + 1) = v8;
    ptr = v47;
    memcpy(v47, *(const void **)(v7 + 56), v8);
    *(_QWORD *)&v65 = v8;
    v48 = ptr;
    v49 = strchr((const char *)ptr, 58);
    if ( v49 )
    {
      v50 = (_DWORD)v49 - (_DWORD)v48;
      v51 = v48;
      if ( v50 != -1 )
      {
        v52 = v50;
        if ( v50 )
        {
          v55 = v50 + 1LL;
          if ( v8 < v55 )
          {
            if ( *((_QWORD *)&v65 + 1) < v55 )
            {
              ptr = (void *)qvector_reserve(&ptr, v51, v50 + 1LL, 1);
              v8 = v65;
              v51 = ptr;
            }
            memset(&v51[v8], 0, v55 - v8);
            *(_QWORD *)&v65 = v52 + 1;
            v51 = ptr;
          }
          else if ( v8 != v50 + 1LL )
          {
            *(_QWORD *)&v65 = v50 + 1LL;
          }
          v51[v52] = 0;
          v53 = v65;
LABEL_69:
          v63 = -1;
          v48 = ptr;
          if ( !v53 )
            goto LABEL_5;
LABEL_70:
          v9 = v48;
          goto LABEL_6;
        }
        if ( v48 )
        {
          *(_QWORD *)&v65 = 0;
          qfree(v48, (const char *)&word_3A);
          ptr = nullptr;
          v53 = v65;
          *((_QWORD *)&v65 + 1) = 0;
          goto LABEL_69;
        }
      }
    }
    v63 = -1;
    goto LABEL_70;
  }
LABEL_12:
  if ( !getinf_buf(1, s, 16) )
    s[0] = 0;
  v11 = 0.0;
  ptr = nullptr;
  v65 = 0;
  v12 = strlen(s);
  ptr = (void *)qvector_reserve(&ptr, 0, v12 + 1, 1);
  *(_QWORD *)&v65 = v12 + 1;
  memmove(ptr, s, v12);
  v13 = &s1;
  *((_BYTE *)ptr + v12) = 0;
  if ( (_QWORD)v65 )
    v13 = (const char *)ptr;
  v14 = sub_2E3EC0(v6, v13, nullptr);
  if ( ptr )
  {
    *(_QWORD *)&v65 = 0;
    v11 = qfree(ptr, v13);
  }
  if ( !sub_2E41E0(*(QT::QAbstractItemView **)(a1 + 72)) || !v14 )
    goto LABEL_25;
  v15 = sub_2E41E0(*(QT::QAbstractItemView **)(a1 + 72));
  v16 = *(_QWORD *)(v15 + 8);
  if ( *(_QWORD *)(v14 + 8) )
  {
    v17 = *(const char **)v14;
    v18 = &s1;
    if ( !v16 )
    {
LABEL_23:
      if ( !strcmp(v18, v17) )
        goto LABEL_24;
LABEL_25:
      v20 = 1;
      v19 = *(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 144LL);
      goto LABEL_26;
    }
LABEL_22:
    v18 = *(const char **)v15;
    goto LABEL_23;
  }
  v17 = &s1;
  if ( v16 )
    goto LABEL_22;
LABEL_24:
  v19 = *(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 144LL);
  v20 = (*(_BYTE *)(**(_QWORD **)(a1 + 80) + 12LL) & 2) != 0;
LABEL_26:
  QT::QWidget::setEnabled(v19, v20);
  v21 = sub_2E41E0(*(QT::QAbstractItemView **)(a1 + 72));
  v22 = 0;
  if ( v21 && (v23 = sub_2E41E0(*(QT::QAbstractItemView **)(a1 + 72)), v22 = 0, *(_QWORD *)(v23 + 8)) )
  {
    v54 = strcmp(*(const char **)v23, "Intel 80x86 processors");
    v24 = v62;
    v22 = v54 == 0;
    v25 = 0;
    if ( !v62 )
      goto LABEL_31;
  }
  else
  {
    v24 = v62;
    v25 = 0;
    if ( !v62 )
      goto LABEL_31;
  }
  if ( *(_QWORD *)(v24 + 40) )
  {
    v56 = v22;
    v26 = strcmp(*(const char **)(v24 + 32), "Dump file");
    v22 = v56;
    v25 = v26 == 0;
  }
LABEL_31:
  v27 = *(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 80LL);
  if ( v5 == 2 || v5 == 5 )
  {
    v34 = 0;
    v59 = v22;
    QT::QWidget::setEnabled(v27, v22);
    v30 = v59;
    v31 = *(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 72LL);
    v46 = 1;
LABEL_54:
    v57 = v46;
    QT::QWidget::setEnabled(v31, v30);
    v33 = v57;
    v32 = *(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 200LL);
    goto LABEL_35;
  }
  v60 = (unsigned int)(v5 - 22) <= 1;
  v28 = v25 || v5 == 13;
  v61 = v28 && v22;
  QT::QWidget::setEnabled(v27, v28 && v22);
  v29 = v28;
  v57 = v28;
  v30 = v61;
  v31 = *(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 72LL);
  if ( !v60 && v5 != 9 )
  {
    v34 = !v28;
    v46 = v29;
    goto LABEL_54;
  }
  QT::QWidget::setEnabled(v31, 1);
  v32 = *(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 200LL);
  v33 = v28 || v60;
  v34 = 0;
LABEL_35:
  QT::QWidget::setEnabled(v32, v33);
  QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 192LL), v57);
  QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 224LL), v34);
  QT::QWidget::setEnabled(
    *(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 232LL),
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 72LL) + 32LL) + 8LL) & 1);
  QT::QWidget::setEnabled(
    *(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 240LL),
    (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 232LL) + 32LL) + 8LL) & 1) == 0);
  v35 = 1;
  if ( (v5 & 0xFFFFFFF7) != 4 )
    v35 = ((v5 - 10) & 0xFFFFFFF7) == 0;
  QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 184LL), v35);
  v36 = *(_QWORD *)(a1 + 64);
  if ( v24 )
  {
    v58 = *(QT::QWidget **)(v36 + 216);
    v37 = sub_2F5560(v24);
    QT::QWidget::setEnabled(v58, v37);
    QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 208LL), v5 == 11);
    v38 = *(_QWORD *)(a1 + 64);
    v39 = *(QT::QWidget **)(v38 + 176);
    if ( v5 == 18 )
    {
      QT::QWidget::setEnabled(*(QT::QWidget **)(v38 + 176), 1);
    }
    else if ( v5 == 17 && *(_QWORD *)(v24 + 40) > 6u )
    {
      v40 = strncmp(*(const char **)(v24 + 32), "JavaVM", 6u);
      QT::QWidget::setEnabled(v39, v40 == 0);
    }
    else
    {
      QT::QWidget::setEnabled(*(QT::QWidget **)(v38 + 176), 0);
    }
    if ( !getinf(12)
      && ((unsigned int)(*(_DWORD *)(v24 + 80) - 22) <= 1
       || *(_QWORD *)(v24 + 40) && !strcmp(*(const char **)(v24 + 32), "Amiga hunk file")) )
    {
      setinf(12, 4096);
    }
  }
  else
  {
    QT::QWidget::setEnabled(*(QT::QWidget **)(v36 + 216), 0);
    QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 208LL), v5 == 11);
    v41 = *(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 176LL);
    if ( v5 == 18 )
      QT::QWidget::setEnabled(v41, 1);
    else
      QT::QWidget::setEnabled(v41, 0);
  }
  getinf(12);
  v42 = qsnprintf(s, 1024, "0x%08a", v11);
  v43 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 64) + 72LL);
  v44 = strlen(s);
  QT::QString::fromUtf8(&ptr, v44, s, v42);
  QT::QLineEdit::setText(v43, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v67 - __readfsqword(0x28u);
}
