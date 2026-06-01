__int64 __fastcall sub_1CFC90(const __m128i *a1, const char *a2, char a3, double a4, __m128 a5)
{
  __m128i v5; // xmm0
  void *v7; // rsi
  __int64 v8; // rsi
  unsigned int v9; // ebx
  size_t v11; // rax
  __m128i v12; // xmm1
  __int64 v13; // rax
  __m128i v14; // xmm0
  size_t v15; // rax
  __m128i si128; // xmm0
  const __m128i *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __m128i v20; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+10h] [rbp-98h]
  void *v22[4]; // [rsp+20h] [rbp-88h] BYREF
  __m128i v23; // [rsp+40h] [rbp-68h] BYREF
  __int64 v24; // [rsp+50h] [rbp-58h]
  __m128i v25; // [rsp+60h] [rbp-48h] BYREF
  __int64 v26; // [rsp+70h] [rbp-38h]
  unsigned __int64 v27; // [rsp+78h] [rbp-30h]

  v5.m128i_i64[0] = 0;
  v27 = __readfsqword(0x28u);
  v20 = 0;
  v21 = 0;
  if ( !a2 )
  {
    QT::QString::operator=(&v20, &xmmword_8CB340);
    if ( a3 )
    {
      QT::QString::append((QT::QString *)&v20, (const QT::QString *)&unk_8CB300);
      QT::QString::append(&v20, "64", 2);
      QT::QString::append(&v20, "\\", 1);
    }
    else
    {
      QT::QString::append((QT::QString *)&v20, (const QT::QString *)&unk_8CB320);
    }
LABEL_12:
    v8 = 1;
    goto LABEL_6;
  }
  if ( *a2 )
  {
    v11 = strlen(a2);
    QT::QString::fromUtf8(&v25, v11, a2);
    v12 = _mm_load_si128(&v25);
    v13 = a1[6].m128i_i64[0];
    v14 = _mm_loadu_si128(a1 + 5);
    a1[6].m128i_i64[0] = v26;
    a1[5] = v12;
    v26 = v13;
    v25 = v14;
    sub_16D970((void **)&v25);
    v15 = strlen(a2);
    QT::QString::fromUtf8(v22, v15, a2);
    si128 = _mm_load_si128((const __m128i *)&xmmword_8CB340);
    v24 = qword_8CB350;
    v23 = si128;
    if ( si128.m128i_i64[0] )
      _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
    QT::QString::append((QT::QString *)&v23, (const QT::QString *)v22);
    v17 = (const __m128i *)QT::QString::append(&v23, "\\", 1);
    v18 = v17[1].m128i_i64[0];
    a5 = (__m128)_mm_loadu_si128(v17);
    v17[1].m128i_i64[0] = 0;
    *v17 = 0;
    v5 = _mm_load_si128(&v20);
    v19 = v21;
    v20 = (__m128i)a5;
    v21 = v18;
    v26 = v19;
    v25 = v5;
    sub_16D970((void **)&v25);
    sub_16D970((void **)&v23);
    sub_16D970(v22);
    goto LABEL_12;
  }
  v7 = &unk_8CB320;
  if ( a3 )
    v7 = &unk_8CB300;
  QT::QString::operator=(&v20, v7);
  v8 = 2;
LABEL_6:
  sub_1CEA40(a1, v8, &v20, 0, *(double *)v5.m128i_i64, a5);
  v9 = 0;
  if ( a1->m128i_i32[2] )
  {
    sub_1CC990((__int64)&v25, (const char *)&unk_5C2F25);
    v9 = sub_1CF7D0(a1, (const QT::QString *)&v25);
    sub_16D970((void **)&v25);
  }
  sub_16D970((void **)&v20);
  return v9;
}
