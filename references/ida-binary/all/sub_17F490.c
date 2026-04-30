__int64 __fastcall sub_17F490(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rax
  const char *v15; // rbx
  size_t v16; // rax
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v14 = sub_17CD60(
          0,
          (int)&unk_5C2F25,
          (int)"Select file to open",
          a12,
          a13,
          a14,
          a1,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          (char)ptr[0]);
  if ( v14 )
  {
    v15 = (const char *)v14;
    if ( unk_8BDE41 )
      QT::QAction::isEnabled(qword_8C9928);
    v16 = strlen(v15);
    QT::QString::fromUtf8(ptr, v16, v15);
    sub_30A6D0((QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return 1;
}
