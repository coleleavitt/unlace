unsigned __int64 __fastcall sub_2B6E80(__int64 a1, double *a2, int *a3, unsigned int a4, double a5)
{
  _DWORD *v7; // rax
  int v8; // ebx
  __int64 v9; // rsi
  __int64 (*v10)(); // rax
  int v11; // r14d
  double v12; // xmm0_8
  int v13; // eax
  char v15; // al
  __int64 v18; // [rsp+20h] [rbp-108h]
  int v19; // [rsp+28h] [rbp-100h]
  int v20; // [rsp+2Ch] [rbp-FCh]
  _BYTE v21[16]; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v22[4]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v23[16]; // [rsp+80h] [rbp-A8h] BYREF
  _BYTE v24[40]; // [rsp+90h] [rbp-98h] BYREF
  double v25; // [rsp+B8h] [rbp-70h]
  unsigned __int64 v26; // [rsp+E8h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v7 = *(_DWORD **)(QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a1 + 16)) + 32LL);
  memset(v22, 0, sizeof(v22));
  v19 = v7[8];
  v8 = v7[7] + 1 - v7[5];
  v20 = v7[6];
  v18 = *(_QWORD *)(a1 + 16);
  QT::QFont::QFont((QT::QFont *)v23);
  QT::QFont::QFont((QT::QFont *)v21);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v24, (const QT::QFont *)v21);
  QT::QFont::~QFont((QT::QFont *)v21);
  sub_1C8200(v22, v18, (__m128d)*(unsigned __int64 *)&a5);
  if ( (a4 & 1) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 440);
    v10 = *(__int64 (**)())(*(_QWORD *)a1 + 640LL);
    v11 = v8 / 3;
    if ( v9 )
      v9 = *(_QWORD *)(v9 + 8);
    if ( v10 == sub_2B2460 )
    {
      v12 = v25;
    }
    else
    {
      v15 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))v10)(a1, v9, a4);
      v12 = v25;
      if ( (v15 & 0x10) != 0 )
      {
        v13 = (int)(v25 + v25);
        goto LABEL_8;
      }
    }
    v13 = (int)((double)*(int *)(a1 + 432) + v12 + v12);
  }
  else
  {
    v11 = v8 / 2;
    v13 = (v19 + 1 - v20) / 2;
  }
LABEL_8:
  *a2 = a5;
  a2[1] = (double)*a3 - (double)v11 / a5;
  a2[2] = (double)a3[1] - (double)v13 / a5;
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v24);
  QT::QFont::~QFont((QT::QFont *)v23);
  return v26 - __readfsqword(0x28u);
}
