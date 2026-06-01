__int64 __fastcall copycontent_watch_ah_t__::vfunc_4(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        QT::QAbstractItemView *a10)
{
  double v10; // xmm0_8
  void **v11; // rsi
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 v20; // rbx
  const char *v21; // rbp
  unsigned __int64 v22; // rdx
  size_t v23; // rax
  const char *v25; // [rsp+0h] [rbp-78h] BYREF
  __int128 v26; // [rsp+8h] [rbp-70h]
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  __int128 v28; // [rsp+28h] [rbp-50h]
  void *ptr[7]; // [rsp+40h] [rbp-38h] BYREF

  v10 = 0.0;
  ptr[3] = (void *)__readfsqword(0x28u);
  v25 = nullptr;
  v27 = 0;
  v26 = 0;
  v28 = 0;
  v11 = (void **)(*(_QWORD *)(QT::QAbstractItemView::model(a10) + 32LL) + 16LL);
  if ( (unsigned int)sub_3E66C0((__int64)&v25, (__int64 **)v11, (__int64)&v27, 0.0, a2, a3, a4, v12, v13, a7, a8) == -1 )
  {
    sub_169700(
      (int)"error: couldn't copy all the content (too large)\n",
      (__int64)v11,
      v14,
      v15,
      v16,
      v17,
      (__m128)0LL,
      a2,
      a3,
      a4,
      v18,
      v19,
      a7,
      a8,
      (char)v25);
    goto LABEL_8;
  }
  v20 = QT::QGuiApplication::clipboard((QT::QGuiApplication *)&v25);
  if ( (_QWORD)v26 )
  {
    v23 = v26 - 1;
    v21 = v25;
    v22 = (unsigned __int64)(v26 - 1) >> 63;
    if ( !v25 )
    {
LABEL_12:
      v23 = 0;
      if ( v21 )
        v23 = strlen(v21);
      goto LABEL_5;
    }
  }
  else
  {
    v21 = &s1;
    LOBYTE(v22) = 0;
    v23 = 0;
    if ( !&s1 )
      goto LABEL_12;
  }
  if ( (_BYTE)v22 )
    goto LABEL_12;
LABEL_5:
  v10 = QT::QString::fromUtf8(ptr, v23, v21);
  v11 = ptr;
  QT::QClipboard::setText(v20, ptr, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
LABEL_8:
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25, (const char *)v11, v10);
  }
  return 0;
}
