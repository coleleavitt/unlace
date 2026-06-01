__int64 __fastcall sub_2B5A50(_QWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int v7; // eax
  __int64 v9; // rax
  unsigned __int64 v11; // rbx
  int v12; // r13d
  __int64 (__fastcall *v13)(__int64, int, int); // rax
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rsi
  __int16 v17; // ax
  __int64 v18; // [rsp+18h] [rbp-100h]
  _BYTE v19[16]; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v20[4]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v21[16]; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v22[40]; // [rsp+80h] [rbp-98h] BYREF
  double v23; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v24; // [rsp+D8h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( a3[16] > *a4 )
    return 0;
  if ( *a4 >= a3[18] )
    return 0;
  v7 = a4[1];
  if ( a3[17] > v7 || v7 >= a3[19] )
    return 0;
  v9 = a1[2];
  v11 = a5;
  memset(v20, 0, sizeof(v20));
  v18 = v9;
  QT::QFont::QFont((QT::QFont *)v21);
  QT::QFont::QFont((QT::QFont *)v19);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v22, (const QT::QFont *)v19);
  QT::QFont::~QFont((QT::QFont *)v19);
  sub_1C8200(v20, v18, (__m128d)0x3FF0000000000000uLL);
  v12 = (int)((double)(a4[1] - a3[17]) / v23);
  v13 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 672LL);
  if ( v13 == sub_2B23E0 )
  {
    if ( (v11 & 0x80000000) != 0LL )
      goto LABEL_15;
    v14 = a1[55];
    if ( v11 >= *(_QWORD *)(v14 + 24) )
      goto LABEL_15;
    v15 = (_QWORD *)(*(_QWORD *)(v14 + 16) + 24 * v11);
    if ( v12 < 0 || (unsigned __int64)v12 >= v15[1] )
      goto LABEL_15;
    v16 = *v15 + 272LL * v12;
  }
  else
  {
    v16 = v13((__int64)a1, v11, v12);
  }
  if ( !v16 )
  {
LABEL_15:
    v17 = 0;
    goto LABEL_14;
  }
  v17 = sub_1784C0((__int64)a1, v16, (unsigned int)(*a4 - a3[16]), (__int64)v20, 0);
LABEL_14:
  *(_WORD *)(a2 + 4) = v17;
  *(_WORD *)(a2 + 6) = v12;
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v22);
  QT::QFont::~QFont((QT::QFont *)v21);
  return 1;
}
