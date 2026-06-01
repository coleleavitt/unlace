unsigned __int64 __fastcall sub_284180(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rax
  __int64 v14; // rbp
  int v15; // r14d
  int v16; // r12d
  int v17; // r13d
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // rdi
  unsigned __int64 v22; // [rsp+8h] [rbp-140h]
  __m128 v23; // [rsp+10h] [rbp-138h]
  __m128i v24; // [rsp+20h] [rbp-128h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-118h]
  int v26; // [rsp+38h] [rbp-110h]
  unsigned int v27; // [rsp+3Ch] [rbp-10Ch]
  int v28; // [rsp+40h] [rbp-108h]
  __int64 v29; // [rsp+48h] [rbp-100h]
  _BYTE v30[64]; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v31[16]; // [rsp+90h] [rbp-B8h] BYREF
  _BYTE v32[96]; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+100h] [rbp-48h]
  unsigned __int64 v34; // [rsp+118h] [rbp-30h]

  v12 = *(_QWORD *)(a1 + 16);
  v34 = __readfsqword(0x28u);
  v14 = sub_1EA680(v12 + 384, a2, a3, a4, a5);
  v15 = *(_DWORD *)(v14 + 24);
  v16 = *(unsigned __int16 *)(v14 + 28);
  v17 = *(_DWORD *)(v14 + 32);
  v23 = *(__m128 *)v14;
  v22 = *(_QWORD *)(v14 + 16);
  sub_283F90((__int64)v30, a1);
  v20 = *(_QWORD *)(v14 + 40);
  v26 = v15;
  v28 = v17;
  v29 = v20;
  v24 = (__m128i)v23;
  v25 = v22;
  v27 = v16 | ((unsigned int)(v33 / 2) << 16);
  if ( v20 )
    v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  sub_1FF700(*(_QWORD *)(a1 + 16) + 384LL, &v24, (__m128)v22, v23, a7, a8, v18, v19, a11, a12);
  if ( v29 )
    qfree(v29, v24.m128i_i8);
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v32);
  QT::QFont::~QFont((QT::QFont *)v31);
  return v34 - __readfsqword(0x28u);
}
