__m128i *__fastcall sub_2D9F60(
        __m128i *a1,
        QT::QAccessibleWidget *this,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  QT::QAccessibleWidget *v6; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v25; // r8d
  int v26; // r9d
  void *v27; // rcx
  _QWORD v28[2]; // [rsp+0h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v30; // [rsp+20h] [rbp-38h]
  unsigned __int64 v31; // [rsp+28h] [rbp-30h]

  v6 = this;
  v31 = __readfsqword(0x28u);
  if ( (debug & 0x80000) != 0 && (::a6[0] & 0x10) != 0 )
  {
    this = (QT::QAccessibleWidget *)"%s IDAMemoAccessible::text(startOffset=%d, endOffset=%d)\n";
    sub_4F7CB0(
      16,
      (unsigned int)"%s IDAMemoAccessible::text(startOffset=%d, endOffset=%d)\n",
      (unsigned int)&unk_5C2F25,
      a3,
      a4,
      a6);
  }
  a1[1].m128i_i64[0] = 0;
  *a1 = 0;
  v9 = sub_2D89B0(v6, (__int64)this, 0.0);
  v28[1] = v10;
  v28[0] = v9;
  sub_2D8310((__int64)v28, (const char *)a3, 0, v11, v12, v13, 0.0);
  sub_2D8310((__int64)v28, (const char *)a4, 1, v14, v15, v16, 0.0);
  sub_2D9970((const QT::QString *)ptr, (__int64)v28, v17, v18, v19, v20);
  v21 = _mm_loadu_si128(a1);
  v22 = a1[1].m128i_i64[0];
  v23 = v30;
  *a1 = _mm_load_si128((const __m128i *)ptr);
  a1[1].m128i_i64[0] = v23;
  v30 = v22;
  *(__m128i *)ptr = v21;
  if ( v21.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v21.m128i_i64[0], 1u) )
    free(ptr[0]);
  if ( (debug & 0x80000) != 0 && (::a6[0] & 0x10) != 0 )
  {
    QT::QString::toUtf8_helper((QT::QString *)ptr, (const QT::QString *)a1);
    LODWORD(v27) = ptr[1];
    if ( !ptr[1] )
      v27 = &QT::QByteArray::_empty;
    sub_4F7CB0(
      16,
      (unsigned int)"%s IDAMemoAccessible::text() => %s\n",
      (unsigned int)&unk_5C2F25,
      (_DWORD)v27,
      v25,
      v26);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return a1;
}
