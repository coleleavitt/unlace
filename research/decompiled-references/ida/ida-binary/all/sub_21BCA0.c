__int64 __fastcall sub_21BCA0(
        double a1,
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
  const char *v14; // rbx
  size_t v15; // rax
  size_t v16; // r13
  size_t v17; // rbp
  char *v18; // rsi
  __int64 v19; // rax
  QT::QWidget *v20; // rbx
  void *v22; // [rsp+0h] [rbp-48h] BYREF
  __int128 v23; // [rsp+8h] [rbp-40h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v14 = src;
  v24 = __readfsqword(0x28u);
  if ( !qword_8CBBD8 )
    v14 = &s1;
  v22 = nullptr;
  v23 = 0;
  if ( v14 )
  {
    v15 = strlen(v14);
    v16 = v15 + 1;
    v17 = v15;
    v22 = (void *)qvector_reserve(&v22, 0, v15 + 1, 1);
    *(_QWORD *)&v23 = v16;
    memmove(v22, v14, v17);
    *((_BYTE *)v22 + v17) = 0;
  }
  v18 = (_BYTE *)(&dword_0 + 2);
  if ( (unsigned __int8)sub_196F50(
                          (int)&v22,
                          2,
                          (int)"Please enter trace description",
                          a12,
                          a13,
                          a14,
                          (__m128)0LL,
                          a2,
                          a3,
                          a4,
                          a5,
                          a6,
                          a7,
                          a8,
                          (char)v22) )
  {
    v18 = (char *)&s1;
    if ( (_QWORD)v23 )
      v18 = (char *)v22;
    sub_20B400((__int64 *)&src, v18);
    v19 = sub_49EDE0(16);
    v20 = (QT::QWidget *)v19;
    if ( v19 )
    {
      v18 = (char *)sub_21B4A0(*(_QWORD **)(v19 + 2392));
      sub_4A3940(v20, v18);
    }
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, v18);
  }
  return 1;
}
