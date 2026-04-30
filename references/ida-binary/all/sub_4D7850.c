unsigned __int64 __fastcall sub_4D7850(__m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v3; // rax
  const char *v4; // rbp
  size_t v5; // rdx
  double v6; // xmm0_8
  __int64 v7; // rbp
  int Data; // ebp
  QT::QComboBox *v9; // r15
  __int64 v10; // rax
  size_t v11; // rax
  const char *v12; // rbx
  size_t v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rdx
  void *v16; // rbp
  void **v17; // rbx
  __int64 v18; // rcx
  void **i; // r12
  void **v20; // rbx
  void **v21; // rbp
  void *v23[4]; // [rsp+0h] [rbp-D8h] BYREF
  void *v24[4]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-98h] BYREF
  __int128 v26; // [rsp+48h] [rbp-90h]
  void *ptr[2]; // [rsp+58h] [rbp-80h] BYREF
  __int64 v28; // [rsp+68h] [rbp-70h]
  __int128 v29; // [rsp+70h] [rbp-68h] BYREF
  __int64 v30; // [rsp+80h] [rbp-58h]
  __int64 v31; // [rsp+88h] [rbp-50h]
  unsigned __int64 v32; // [rsp+98h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  sub_4D6B90(a1, a2);
  v2 = *(_QWORD *)(a2 + 48);
  if ( v2 )
  {
    v3 = v2 - 1;
    v4 = *(const char **)(a2 + 40);
    v5 = v3 >> 63;
  }
  else
  {
    LOBYTE(v5) = 0;
    v3 = 0;
    v4 = &s1;
  }
  if ( !v4 || (_BYTE)v5 )
  {
    v3 = 0;
    if ( v4 )
      v3 = strlen(v4);
  }
  v6 = QT::QString::fromUtf8(v23, v3, v4);
  v7 = *(_QWORD *)(a1[6].m128i_i64[0] + 24);
  QT::QVariant::QVariant((QT::QVariant *)&v29, (const QT::QString *)v23);
  Data = QT::QComboBox::findData(v7, &v29, 0, 16, v6);
  QT::QVariant::~QVariant((QT::QVariant *)&v29);
  if ( Data != -1 )
    QT::QComboBox::removeItem(*(QT::QComboBox **)(a1[6].m128i_i64[0] + 24), Data);
  v9 = *(QT::QComboBox **)(a1[6].m128i_i64[0] + 24);
  v29 = 0;
  v30 = 0;
  v31 = 2;
  QT::QIcon::QIcon((QT::QIcon *)&v25);
  QT::QComboBox::insertItem(v9, 0, (const QT::QIcon *)&v25, (const QT::QString *)v23, (const QT::QVariant *)&v29);
  QT::QIcon::~QIcon((QT::QIcon *)&v25);
  QT::QVariant::~QVariant((QT::QVariant *)&v29);
  QT::QComboBox::setCurrentIndex(*(QT::QComboBox **)(a1[6].m128i_i64[0] + 24), -1);
  sub_4D39D0((__int64)a1);
  v25 = 0;
  v28 = 0;
  v26 = 0;
  *(_OWORD *)ptr = 0;
  sub_4F65D0(&v25, "UIFLTR");
  v10 = *(_QWORD *)(a2 + 48);
  if ( v10 )
  {
    v11 = v10 - 1;
    v12 = *(const char **)(a2 + 40);
    v13 = v11 >> 63;
  }
  else
  {
    LOBYTE(v13) = 0;
    v11 = 0;
    v12 = &s1;
  }
  if ( !v12 || (_BYTE)v13 )
  {
    v11 = 0;
    if ( v12 )
      v11 = strlen(v12);
  }
  QT::QString::fromUtf8(v24, v11, v12);
  sub_4F6A20(&v25, v24);
  if ( v24[0] && !_InterlockedSub((volatile signed __int32 *)v24[0], 1u) )
    free(v24[0]);
  v14 = _mm_loadu_si128((const __m128i *)ptr);
  v15 = v28;
  if ( v14.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v14.m128i_i64[0], 1u);
  v16 = xmmword_8D24A0;
  v17 = (void **)*(&xmmword_8D24A0 + 1);
  *(__m128i *)&xmmword_8D24A0 = v14;
  v18 = qword_8D24B0;
  qword_8D24B0 = v15;
  if ( v16 && !_InterlockedSub((volatile signed __int32 *)v16, 1u) )
  {
    for ( i = &v17[3 * v18]; i != v17; v17 += 3 )
    {
      if ( *v17 && !_InterlockedSub((volatile signed __int32 *)*v17, 1u) )
        free(*v17);
    }
    free(v16);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v20 = (void **)ptr[1];
    v21 = (void **)((char *)ptr[1] + 24 * v28);
    if ( ptr[1] != v21 )
    {
      do
      {
        if ( *v20 && !_InterlockedSub((volatile signed __int32 *)*v20, 1u) )
          free(*v20);
        v20 += 3;
      }
      while ( v21 != v20 );
    }
    free(ptr[0]);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25, (const char *)v24, v15, v18);
  }
  if ( v23[0] && !_InterlockedSub((volatile signed __int32 *)v23[0], 1u) )
    free(v23[0]);
  return v32 - __readfsqword(0x28u);
}
