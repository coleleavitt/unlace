unsigned __int64 __fastcall sub_18DEE0(__int64 a1)
{
  __int64 v2; // r12
  unsigned __int64 v3; // r15
  char v4; // r13
  char *p_s2; // rax
  double v6; // rdx
  const char *v7; // rcx
  __m128i v8; // xmm1
  __m128 v9; // xmm0
  __int64 v10; // rsi
  _QWORD *func; // r15
  __int64 v12; // rax
  __int64 v13; // r14
  __int16 v14; // r13
  char aflags; // al
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int16 v19; // r13
  int v20; // r13d
  size_t v21; // rax
  unsigned __int64 v22; // rdx
  const char *v23; // r12
  __m128i v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbp
  bool v28; // si
  QT::QWidget *v29; // rdi
  bool v30; // si
  QT::QWidget *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  QT::QWidget *v36; // rdi
  int v37; // eax
  double v38; // [rsp+0h] [rbp-A0h]
  const char *v39; // [rsp+8h] [rbp-98h] BYREF
  __m128i v40; // [rsp+10h] [rbp-90h] BYREF
  char *s2; // [rsp+28h] [rbp-78h] BYREF
  __int128 v42; // [rsp+30h] [rbp-70h]
  _BYTE ptr[24]; // [rsp+48h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+60h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v40 = 0;
  v42 = 0;
  v39 = nullptr;
  s2 = nullptr;
  memset(ptr, 0, sizeof(ptr));
  v2 = *(_QWORD *)(a1 + 72);
  get_ea_name(ptr, v2, 0, 0);
  if ( (get_aflags(v2) & 0x4000) == 0 )
  {
    v3 = *(_QWORD *)&ptr[8];
    v4 = 0;
    p_s2 = ptr;
    goto LABEL_3;
  }
  get_ea_name(&s2, v2, 64, 0);
  v3 = v42;
  if ( *(_QWORD *)&ptr[8] > 1u )
  {
    v6 = *(double *)ptr;
    if ( !(_QWORD)v42 )
    {
      if ( **(_BYTE **)ptr )
        goto LABEL_34;
LABEL_57:
      p_s2 = ptr;
      v4 = 0;
LABEL_5:
      v7 = v39;
      v39 = *(const char **)&v6;
      v8 = _mm_loadu_si128(&v40);
      v9 = _mm_loadh_ps((const double *)p_s2 + 2);
      *(_QWORD *)p_s2 = v7;
      *(__m128i *)(p_s2 + 8) = v8;
      v40 = (__m128i)v9;
      v10 = 4;
      func = (_QWORD *)get_func(v2);
      v12 = get_flags_ex(v2, 4) & 0xC000;
      v13 = v12;
      if ( v4 )
      {
        v14 = (unsigned __int8)is_in_nlist(v2) == 0 ? 640 : 512;
        goto LABEL_7;
      }
      if ( v12 == 0x8000 && func )
      {
        if ( v2 != *func )
        {
          v10 = v2;
          if ( !(unsigned __int8)has_external_refs(func, v2) )
          {
            if ( (unsigned __int8)is_in_nlist(v2) )
            {
              aflags = get_aflags(v2);
              v18 = aflags & 4;
              v19 = (_DWORD)v18 == 0 ? 516 : 514;
            }
            else
            {
              aflags = get_aflags(v2);
              v18 = aflags & 4;
              v19 = (_DWORD)v18 == 0 ? 644 : 642;
            }
            goto LABEL_50;
          }
        }
        if ( !(unsigned __int8)is_in_nlist(v2) )
        {
LABEL_59:
          aflags = get_aflags(v2);
          v18 = aflags & 4;
          v20 = (_DWORD)v18 == 0 ? 68 : 66;
          goto LABEL_9;
        }
      }
      else if ( !(unsigned __int8)is_in_nlist(v2) )
      {
        if ( v13 == 0x8000 )
          goto LABEL_59;
        v14 = 128;
LABEL_7:
        aflags = get_aflags(v2);
        v18 = (aflags & 4) == 0 ? 4 : 2;
        v19 = ((aflags & 4) == 0 ? 4 : 2) | v14;
        if ( v13 == 49152 )
        {
          LOWORD(v20) = v19 | 0x20;
LABEL_9:
          *(_WORD *)(a1 + 80) = v20 | ((aflags & 8) == 0 ? 16 : 8);
          goto LABEL_10;
        }
LABEL_50:
        LOWORD(v20) = v19 | 0x40;
        goto LABEL_9;
      }
      v14 = 0;
      goto LABEL_7;
    }
    v38 = *(double *)ptr;
    v37 = strcmp(*(const char **)ptr, s2);
    v6 = v38;
    if ( !v37 )
      goto LABEL_57;
  }
  v4 = 1;
  p_s2 = (char *)&s2;
LABEL_3:
  if ( v3 > 1 )
  {
    v6 = *(double *)p_s2;
    goto LABEL_5;
  }
LABEL_34:
  v10 = 4;
  if ( (get_flags_ex(v2, 4) & 0x4000) == 0 )
  {
    v10 = v2;
    get_entry_name(&v39, v2);
  }
LABEL_10:
  if ( *(_QWORD *)ptr )
  {
    *(_QWORD *)&ptr[8] = 0;
    qfree(*(_QWORD *)ptr, v10, v18, v16, v17);
  }
  if ( s2 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(s2, v10, v18, v16, v17);
  }
  v21 = v40.m128i_i64[0];
  LOBYTE(v22) = 0;
  v23 = &s1;
  if ( v40.m128i_i64[0] )
  {
    v21 = v40.m128i_i64[0] - 1;
    v23 = v39;
    v22 = (unsigned __int64)(v40.m128i_i64[0] - 1) >> 63;
  }
  if ( !v23 || (_BYTE)v22 )
  {
    v21 = 0;
    if ( v23 )
      v21 = strlen(v23);
  }
  QT::QString::fromUtf8(ptr, v21, v23);
  v24 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v25 = *(_QWORD *)(a1 + 104);
  v26 = *(_QWORD *)&ptr[16];
  *(__m128i *)(a1 + 88) = _mm_load_si128((const __m128i *)ptr);
  *(_QWORD *)(a1 + 104) = v26;
  *(_QWORD *)&ptr[16] = v25;
  *(__m128i *)ptr = v24;
  if ( v24.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v24.m128i_i64[0], 1u) )
    free(*(void **)ptr);
  QT::QComboBox::setEditText(*(QT::QComboBox **)(*(_QWORD *)(a1 + 56) + 32LL), (const QT::QString *)(a1 + 88));
  QT::QAbstractButton::setChecked(
    *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 80LL),
    (*(_BYTE *)(a1 + 81) & 2) != 0);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 88LL), *(_BYTE *)(a1 + 80) >> 7);
  QT::QAbstractButton::setChecked(
    *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 96LL),
    (*(_BYTE *)(a1 + 80) & 2) != 0);
  QT::QAbstractButton::setChecked(
    *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 104LL),
    (*(_BYTE *)(a1 + 80) & 0x20) != 0);
  QT::QAbstractButton::setChecked(
    *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 112LL),
    (*(_BYTE *)(a1 + 80) & 8) != 0);
  QT::QString::toUtf8_helper((QT::QString *)ptr, (const QT::QString *)(a1 + 88));
  v27 = dummy_name_ea(*(_QWORD *)&ptr[8]);
  if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
    free(*(void **)ptr);
  if ( (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 96LL))
    || (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 112LL)) )
  {
    v28 = 0;
  }
  else
  {
    v28 = (QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 88LL)) ^ 1) & (v27 == -1);
  }
  QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 80LL), v28);
  v29 = *(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 88LL);
  if ( v27 != -1 )
  {
    QT::QWidget::setEnabled(v29, 0);
    QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 96LL), 0);
    v30 = 0;
    v31 = *(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 112LL);
    goto LABEL_28;
  }
  if ( (*(_BYTE *)(a1 + 81) & 2) == 0 )
  {
    QT::QWidget::setEnabled(v29, 1);
    v36 = *(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 96LL);
    if ( (*(_BYTE *)(a1 + 81) & 2) == 0 )
      goto LABEL_42;
LABEL_52:
    QT::QWidget::setEnabled(v36, 0);
    goto LABEL_43;
  }
  QT::QWidget::setEnabled(v29, 0);
  v36 = *(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 96LL);
  if ( (*(_BYTE *)(a1 + 81) & 2) != 0 )
    goto LABEL_52;
LABEL_42:
  QT::QWidget::setEnabled(v36, 1);
LABEL_43:
  v31 = *(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 112LL);
  v30 = (*(_BYTE *)(a1 + 81) & 2) == 0;
LABEL_28:
  QT::QWidget::setEnabled(v31, v30);
  QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 104LL), 0);
  if ( v39 )
  {
    v40.m128i_i64[0] = 0;
    qfree(v39, 0, v32, v33, v34);
  }
  return v44 - __readfsqword(0x28u);
}
