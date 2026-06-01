QT::QAbstractScrollArea *__fastcall sub_1B9FA0(__int64 a1, char *a2, unsigned int a3)
{
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  QT::QAbstractScrollArea *v6; // rbx
  __m128i v8; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v9; // [rsp+10h] [rbp-E8h] BYREF
  int v10; // [rsp+20h] [rbp-D8h]
  __int64 v11; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v12; // [rsp+38h] [rbp-C0h]
  __int128 v13; // [rsp+48h] [rbp-B0h]
  __int128 v14; // [rsp+58h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-90h]
  __m128i v16; // [rsp+70h] [rbp-88h]
  __m128i v17; // [rsp+80h] [rbp-78h]
  __int64 v18; // [rsp+90h] [rbp-68h]
  __int128 v19; // [rsp+98h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-50h]
  __int64 v21; // [rsp+B0h] [rbp-48h]
  char v22; // [rsp+B8h] [rbp-40h]
  __int64 v23; // [rsp+C0h] [rbp-38h]
  unsigned __int64 v24; // [rsp+C8h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v12 = 0;
  v11 = 0;
  v15 = 0;
  v17.m128i_i64[0] = 0;
  v17.m128i_i64[1] = -1;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v13 = 0;
  v14 = 0;
  v16 = 0;
  v19 = 0;
  sub_1E8870(&v8, 1);
  v4 = _mm_load_si128(&v8);
  v22 = 0;
  v16 = v4;
  v5 = _mm_load_si128(&v9);
  LODWORD(v18) = v10;
  v23 = 0;
  v17 = v5;
  sub_1B3990((__m128i *)&v11, a3);
  v6 = (QT::QAbstractScrollArea *)operator new(0x400u);
  sub_1B9D60(v6, a2, (__int64)&v11, a1);
  qfree(*((_QWORD *)&v19 + 1), a2);
  *((_QWORD *)&v19 + 1) = 0;
  qfree(v20, a2);
  v20 = 0;
  if ( (_QWORD)v19 )
    qfree(v19, a2);
  return v6;
}
