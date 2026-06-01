__int64 __fastcall sub_4EB350(__int64 a1, unsigned int a2, __int64 a3, QT::QPainter *a4, __int64 a5, double a6)
{
  const __m128i *v10; // r13
  __int64 v11; // rax
  __int32 v12; // edx
  __m128i v13; // xmm0
  __int64 v14; // rax
  unsigned int v15; // r15d
  unsigned int v16; // [rsp+2Ch] [rbp-14Ch]
  char v17[8]; // [rsp+48h] [rbp-130h] BYREF
  _BYTE v18[40]; // [rsp+50h] [rbp-128h] BYREF
  char v19[8]; // [rsp+78h] [rbp-100h] BYREF
  unsigned int v20; // [rsp+80h] [rbp-F8h]
  __int64 v21; // [rsp+90h] [rbp-E8h]
  __int64 v22; // [rsp+98h] [rbp-E0h]
  __int64 v23; // [rsp+A0h] [rbp-D8h]
  _BYTE v24[20]; // [rsp+A8h] [rbp-D0h] BYREF
  __int32 v25; // [rsp+BCh] [rbp-BCh]
  char v26[8]; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-B0h]
  __m128i v28; // [rsp+D0h] [rbp-A8h]
  __int64 v29; // [rsp+E0h] [rbp-98h]
  __int32 v30; // [rsp+E8h] [rbp-90h]
  char v31[8]; // [rsp+F0h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v33; // [rsp+108h] [rbp-70h]
  __int32 v34; // [rsp+110h] [rbp-68h]
  char v35[8]; // [rsp+118h] [rbp-60h] BYREF
  int v36; // [rsp+120h] [rbp-58h] BYREF
  __int64 v37; // [rsp+124h] [rbp-54h]
  __int16 v38; // [rsp+12Ch] [rbp-4Ch]
  unsigned __int64 v39; // [rsp+138h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( a2 != 45 )
    return QT::QProxyStyle::drawControl(a1, a2, a3, a4, a5);
  v10 = nullptr;
  v11 = sub_4E1190(a6, a1, a5, (_QWORD *)a3, (__int64)a4);
  if ( a3 )
  {
    if ( *(int *)a3 > 0 )
    {
      v10 = (const __m128i *)a3;
      if ( *(_DWORD *)(a3 + 4) != 10 )
        v10 = nullptr;
    }
  }
  v12 = v10->m128i_i32[2];
  v36 = 0;
  v38 = 0;
  v37 = 0xFFFF;
  v16 = v12 & 0x8000;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, int *, __int64, const __m128i *, _QWORD))(*(_QWORD *)v11 + 184LL))(
          v11,
          &v36,
          a5,
          v10 + 8,
          v16 >> 15) )
  {
    sub_4E1220(a1, a3, (__int64)v10, a4, a5, a6);
    return QT::QProxyStyle::drawControl(a1, a2, a3, a4, a5);
  }
  QT::QStyleOption::QStyleOption((QT::QStyleOption *)v18, 1, 10);
  v21 = 0;
  v23 = -1;
  QT::QFont::QFont((QT::QFont *)v24);
  v25 = 0;
  QT::QLocale::QLocale((QT::QLocale *)v26);
  v28 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v29 = 0;
  QT::QIcon::QIcon((QT::QIcon *)v31);
  v33 = 0;
  *(_OWORD *)ptr = 0;
  QT::QBrush::QBrush((QT::QBrush *)v35);
  QT::QStyleOption::operator=(v18, v10);
  v21 = v10[4].m128i_i64[0];
  v22 = v10[4].m128i_i64[1];
  v23 = v10[5].m128i_i64[0];
  QT::QFont::operator=(v24, &v10[5].m128i_u64[1]);
  v24[16] = v10[6].m128i_i8[8];
  v25 = v10[6].m128i_i32[3];
  QT::QLocale::operator=(v26, &v10[7]);
  v13 = _mm_loadu_si128(v10 + 8);
  v27 = v10[7].m128i_i64[1];
  v14 = v10[9].m128i_i64[0];
  v28 = v13;
  v29 = v14;
  v30 = v10[9].m128i_i32[2];
  QT::QIcon::operator=(v31, &v10[10]);
  QT::QString::operator=(ptr, &v10[10].m128i_u64[1]);
  v34 = v10[12].m128i_i32[0];
  QT::QBrush::operator=(v35, &v10[12].m128i_u64[1]);
  v15 = v20;
  QT::QBrush::QBrush(v17, &v36, 1);
  QT::QPalette::setBrush(v19, v15, v16 == 0 ? 6 : 13, v17);
  QT::QBrush::~QBrush((QT::QBrush *)v17);
  QT::QProxyStyle::drawControl(a1, 45, v18, a4, a5);
  QT::QBrush::~QBrush((QT::QBrush *)v35);
  if ( ptr[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  QT::QIcon::~QIcon((QT::QIcon *)v31);
  QT::QLocale::~QLocale((QT::QLocale *)v26);
  QT::QFont::~QFont((QT::QFont *)v24);
  QT::QStyleOption::~QStyleOption((QT::QStyleOption *)v18);
  return v39 - __readfsqword(0x28u);
}
