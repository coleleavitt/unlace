__int64 __fastcall sub_2BAD60(
        __int64 *a1,
        _DWORD *a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned int v11; // r13d
  __int64 v12; // r14
  _DWORD *v14; // r12
  __int64 (__fastcall *v15)(__int64); // rax
  signed int v16; // eax
  _DWORD *v17; // rax
  __int64 v19; // rax
  unsigned int v20; // r14d
  __int64 (*v21)(); // rax
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __int64 v24; // rax
  double v25; // xmm1_8
  unsigned __int8 v26; // [rsp+7h] [rbp-151h]
  __int64 v27; // [rsp+8h] [rbp-150h]
  _BYTE v28[16]; // [rsp+10h] [rbp-148h] BYREF
  int v29[4]; // [rsp+20h] [rbp-138h] BYREF
  int v30[4]; // [rsp+30h] [rbp-128h]
  int v31[4]; // [rsp+40h] [rbp-118h]
  int v32[4]; // [rsp+50h] [rbp-108h]
  int v33[4]; // [rsp+60h] [rbp-F8h]
  int v34[4]; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v35; // [rsp+80h] [rbp-D8h]
  __int128 v36; // [rsp+90h] [rbp-C8h]
  __int128 v37; // [rsp+A0h] [rbp-B8h]
  _BYTE v38[16]; // [rsp+B0h] [rbp-A8h] BYREF
  _BYTE v39[24]; // [rsp+C0h] [rbp-98h] BYREF
  double v40; // [rsp+D8h] [rbp-80h]
  double v41; // [rsp+E8h] [rbp-70h]
  unsigned __int64 v42; // [rsp+118h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v11 = *(_DWORD *)a3;
  if ( *(int *)a3 < 0 )
    return 0;
  v12 = a1[55];
  v14 = *(_DWORD **)(v12 + 8);
  v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL);
  v16 = v15 == interactive_graph_t__::vfunc_7 ? v14[46] : v15(*(_QWORD *)(v12 + 8));
  if ( (int)v11 >= v16 )
    return 0;
  v17 = (_DWORD *)(*(_QWORD *)(v12 + 40) + 12LL * (int)v11);
  if ( *v17 < (unsigned int)*(__int16 *)(a3 + 4) || (unsigned int)*(__int16 *)(a3 + 6) >= v17[1] )
    return 0;
  v19 = *a1;
  v20 = 0;
  *(_OWORD *)v29 = 0;
  v21 = *(__int64 (**)())(v19 + 640);
  *(_OWORD *)v30 = 0;
  *(_OWORD *)v31 = 0;
  *(_OWORD *)v32 = 0;
  *(_OWORD *)v33 = 0;
  if ( v21 != sub_2B2460 )
    v20 = ((__int64 (__fastcall *)(__int64 *, _DWORD *, _QWORD))v21)(a1, v14, v11);
  if ( !v14 )
    return 0;
  *(__m128i *)v34 = _mm_loadu_si128((const __m128i *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v14 + 152LL))(
                                                       v14,
                                                       v11));
  v26 = sub_2B9380(
          (__int64)a1,
          (__int64)v29,
          (const __m128i *)v34,
          v11,
          1,
          v20,
          *(double *)v34,
          a5,
          a6,
          a7,
          v22,
          v23,
          a10,
          a11);
  if ( !v26 )
    return 0;
  v24 = a1[2];
  *(_OWORD *)v34 = 0;
  v27 = v24;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  QT::QFont::QFont((QT::QFont *)v38);
  QT::QFont::QFont((QT::QFont *)v28);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v39, (const QT::QFont *)v28);
  QT::QFont::~QFont((QT::QFont *)v28);
  sub_1C8200((__m128i *)v34, v27, (__m128d)0x3FF0000000000000uLL);
  v25 = (double)v33[1];
  *a2 = (int)((double)*(__int16 *)(a3 + 4) * v40 + (double)v33[0]);
  a2[1] = (int)((double)*(__int16 *)(a3 + 6) * v41 + v25);
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v39);
  QT::QFont::~QFont((QT::QFont *)v38);
  return v26;
}
