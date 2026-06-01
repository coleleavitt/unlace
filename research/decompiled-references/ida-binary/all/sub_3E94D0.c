__int64 __fastcall sub_3E94D0(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 i; // rbx
  unsigned __int64 v3; // rax
  const char *v4; // rdx
  unsigned __int64 v5; // rcx
  double v6; // xmm0_8
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  size_t v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  QT::QListWidget *v14; // rbx
  unsigned int v15; // eax
  _BOOL8 v16; // rsi
  void **v17; // rbx
  void **v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rdi
  const char *v25; // [rsp+0h] [rbp-B0h]
  int v26; // [rsp+10h] [rbp-A0h]
  __int64 v27; // [rsp+18h] [rbp-98h] BYREF
  __int128 v28; // [rsp+20h] [rbp-90h]
  void *v29[2]; // [rsp+38h] [rbp-78h] BYREF
  __int64 v30; // [rsp+48h] [rbp-68h]
  __m128i ptr; // [rsp+58h] [rbp-58h] BYREF
  __int64 v32; // [rsp+68h] [rbp-48h]
  unsigned __int64 v33; // [rsp+70h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v28 = 0;
  v27 = 0;
  reg_read_strlist(&v27, "History64");
  v30 = 0;
  *(_OWORD *)v29 = 0;
  v26 = v28;
  if ( (int)v28 > 0 )
  {
    for ( i = 0; i != 8 * (3LL * (unsigned int)(v26 - 1) + 3); i += 24 )
    {
      v10 = *(_QWORD *)(i + v27 + 8);
      if ( v10 )
      {
        v3 = v10 - 1;
        v4 = *(const char **)(i + v27);
        v5 = v3 >> 63;
        if ( !v4 )
          goto LABEL_13;
      }
      else
      {
        v4 = &s1;
        LOBYTE(v5) = 0;
        v3 = 0;
        if ( !&s1 )
          goto LABEL_13;
      }
      if ( !(_BYTE)v5 )
        goto LABEL_5;
LABEL_13:
      v3 = 0;
      if ( !v4 )
      {
LABEL_5:
        v6 = QT::QString::fromUtf8(&ptr, v3, v4);
        goto LABEL_6;
      }
      v25 = v4;
      v11 = strlen(v4);
      v6 = QT::QString::fromUtf8(&ptr, v11, v25);
LABEL_6:
      v1 = v32;
      if ( QT::QtPrivate::QStringList_indexOf(v29, v32, ptr.m128i_i64[1], 0, 1, v6) == -1 )
      {
        sub_1D5510((__m128i *)v29, v30, &ptr, v7, v8, v9);
        if ( !v29[0] || *(int *)v29[0] > 1 )
          sub_1B21C0((__m128i *)v29, 0, 0, 0, v12, v13);
      }
      if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
        free((void *)ptr.m128i_i64[0]);
    }
  }
  v14 = *(QT::QListWidget **)(*(_QWORD *)(a1 + 48) + 112LL);
  v15 = QT::QListWidget::count(v14);
  QT::QListWidget::insertItems(v14, v15, v29);
  QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 48) + 64LL), v26 != 0);
  if ( v26 )
  {
    QT::QListWidget::setCurrentRow(*(QT::QListWidget **)(*(_QWORD *)(a1 + 48) + 112LL), 0);
    QT::QWidget::setFocus(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL), 7);
  }
  v16 = v26 != 0;
  (*(void (__fastcall **)(_QWORD, _BOOL8))(**(_QWORD **)(*(_QWORD *)(a1 + 48) + 112LL) + 104LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 112LL),
    v16);
  if ( v29[0] && !_InterlockedSub((volatile signed __int32 *)v29[0], 1u) )
  {
    v17 = (void **)v29[1];
    v18 = (void **)((char *)v29[1] + 24 * v30);
    if ( v29[1] != v18 )
    {
      do
      {
        if ( *v17 && !_InterlockedSub((volatile signed __int32 *)*v17, 1u) )
          free(*v17);
        v17 += 3;
      }
      while ( v18 != v17 );
    }
    free(v29[0]);
  }
  v19 = v27;
  if ( v27 )
  {
    v20 = v28;
    if ( (_QWORD)v28 )
    {
      v21 = 0;
      do
      {
        v22 = (__int64 *)(v19 + 24 * v21);
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          qfree(v23, (const char *)v16);
          v19 = v27;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v28 = 0;
    qfree(v19, (const char *)v16);
  }
  LOBYTE(v1) = v26 != 0;
  return v1;
}
