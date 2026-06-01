QT::QWidget *__fastcall sub_1E3BF0(int a1)
{
  QT::QWidget *v1; // rbx
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v6; // [rsp+10h] [rbp-D8h] BYREF
  int v7; // [rsp+20h] [rbp-C8h]
  __int64 v8; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v9; // [rsp+38h] [rbp-B0h]
  __int128 v10; // [rsp+48h] [rbp-A0h]
  __int128 v11; // [rsp+58h] [rbp-90h]
  __int64 v12; // [rsp+68h] [rbp-80h]
  __m128i v13; // [rsp+70h] [rbp-78h]
  __m128i v14; // [rsp+80h] [rbp-68h]
  __int64 v15; // [rsp+90h] [rbp-58h]
  __int128 v16; // [rsp+98h] [rbp-50h]
  __int64 v17; // [rsp+A8h] [rbp-40h]
  __int64 v18; // [rsp+B0h] [rbp-38h]
  char v19; // [rsp+B8h] [rbp-30h]
  __int64 v20; // [rsp+C0h] [rbp-28h]
  unsigned __int64 v21; // [rsp+C8h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  if ( a1 < 0 )
    return nullptr;
  v1 = (QT::QWidget *)sub_1E2ED0(a1);
  if ( v1 )
  {
    sub_479090(QT::QCoreApplication::self + 2, v1, 1);
  }
  else
  {
    v8 = 0;
    v12 = 0;
    v14.m128i_i64[0] = 0;
    v14.m128i_i64[1] = -1;
    v15 = 0;
    v17 = 0;
    v18 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v13 = 0;
    v16 = 0;
    sub_1E8870(&v5, 1);
    v3 = _mm_load_si128(&v5);
    v19 = 0;
    v20 = 0;
    v13 = v3;
    v4 = _mm_load_si128(&v6);
    LODWORD(v15) = v7;
    v14 = v4;
    sub_1E2AF0(&v8);
    v1 = (QT::QWidget *)operator new(0x428u);
    sub_1E39B0(v1, (char *)"CPU Registers", a1, (__int64)&v8);
    sub_236750();
    qfree(*((_QWORD *)&v16 + 1), "CPU Registers");
    *((_QWORD *)&v16 + 1) = 0;
    qfree(v17, "CPU Registers");
    v17 = 0;
    if ( (_QWORD)v16 )
      qfree(v16, "CPU Registers");
  }
  return v1;
}
