__int64 __fastcall sub_1CFF10(const __m128i *a1, const QT::QString *a2, double a3, __m128 a4)
{
  __int64 v6; // rsi
  void *v7; // rdi
  int v8; // eax
  char v9; // bp
  const char *v10; // rsi
  unsigned int v11; // ebx
  void *v13; // rdi
  void *v14; // rdi
  int v15; // eax
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-70h]
  __m128i v22; // [rsp+8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+18h] [rbp-58h]
  __m128i v24; // [rsp+28h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h]
  unsigned __int64 v26; // [rsp+40h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v6 = *((_QWORD *)a2 + 2);
  v22 = 0;
  v23 = 0;
  v7 = *((void **)a2 + 1);
  if ( !v7 )
    v7 = &QT::QString::_empty;
  v8 = QT::QString::compare_helper(v7, v6, "<Default>", 9, 1);
  v9 = v8;
  if ( !v8 )
  {
    QT::QString::assign(&a1[5], "<Default>", 9);
LABEL_5:
    v10 = nullptr;
LABEL_6:
    sub_1CFC90(a1, v10, v9, 0.0, a4);
    goto LABEL_7;
  }
  v13 = *((void **)a2 + 1);
  if ( !v13 )
    v13 = &QT::QString::_empty;
  if ( !(unsigned int)QT::QString::compare_helper(v13, *((_QWORD *)a2 + 2), "<Default debugger>", 18, 1) )
  {
    QT::QString::assign(&a1[5], "<Default debugger>", 18);
    v9 = 1;
    goto LABEL_5;
  }
  v14 = *((void **)a2 + 1);
  if ( !v14 )
    v14 = &QT::QString::_empty;
  v15 = QT::QString::compare_helper(v14, *((_QWORD *)a2 + 2), "<Database>", 10, 1);
  v10 = (const char *)&unk_5C2F25;
  v9 = v15;
  if ( !v15 )
    goto LABEL_6;
  v16 = *((void **)a2 + 1);
  if ( !v16 )
    v16 = &QT::QString::_empty;
  v9 = 1;
  v10 = (const char *)&unk_5C2F25;
  if ( !(unsigned int)QT::QString::compare_helper(v16, *((_QWORD *)a2 + 2), "<Database debugger>", 19, 1) )
    goto LABEL_6;
  v17 = *((void **)a2 + 1);
  if ( !v17 )
    v17 = &QT::QString::_empty;
  if ( (unsigned int)QT::QString::compare_helper(v17, *((_QWORD *)a2 + 2), "<Current Database>", 18, 1) )
  {
    v18 = *((void **)a2 + 1);
    if ( !v18 )
      v18 = &QT::QString::_empty;
    if ( (unsigned int)QT::QString::compare_helper(v18, *((_QWORD *)a2 + 2), "<Current Database debugger>", 27, 1) )
    {
      if ( *((_QWORD *)a2 + 2) )
      {
        QT::QString::operator=(&a1[5], a2);
        QT::QString::toUtf8_helper((QT::QString *)&v24, a2);
        v19 = _mm_load_si128(&v24);
        v9 = 0;
        v20 = v25;
        v25 = 0;
        v22 = v19;
        v21 = v24.m128i_i64[1];
        v23 = v20;
        v24 = 0;
        sub_17F470((void **)&v24);
        v10 = (const char *)v21;
        if ( !v21 )
          v10 = (const char *)&QT::QByteArray::_empty;
        goto LABEL_6;
      }
      sub_1CC990((__int64)&v24, (const char *)&unk_5C2F25);
      sub_1CEA40(a1, 0, &v24, 0, 0.0, a4);
      sub_16D970((void **)&v24);
      QT::QString::assign(&a1[5], &unk_5C2F25, 0);
    }
    else
    {
      sub_1CEA40(a1, 2, (const __m128i *)&unk_8CB2C0, 0, 0.0, a4);
    }
  }
  else
  {
    sub_1CEA40(a1, 2, xmmword_8CB2E0, 0, 0.0, a4);
  }
LABEL_7:
  v11 = 0;
  if ( a1->m128i_i32[2] )
  {
    sub_1CC990((__int64)&v24, (const char *)&unk_5C2F25);
    v11 = sub_1CF7D0(a1, (const QT::QString *)&v24);
    sub_16D970((void **)&v24);
  }
  sub_17F470((void **)&v22);
  return v11;
}
