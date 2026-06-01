unsigned __int64 __fastcall sub_2852C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rax
  __int64 v14; // rax
  unsigned int v15; // ebp
  const __m128i *v16; // rbx
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 v19; // rsi
  int v20; // ecx
  int v21; // eax
  _QWORD *v23; // rax
  _QWORD *v24; // r13
  __int64 v25; // rax
  const char *v26; // rdi
  bool v27; // zf
  __m128i v28; // xmm0
  double v29; // xmm4_8
  double v30; // xmm5_8
  __m128i v31; // [rsp+0h] [rbp-128h] BYREF
  __m128i v32; // [rsp+10h] [rbp-118h]
  __int64 v33; // [rsp+20h] [rbp-108h]
  char v34[64]; // [rsp+30h] [rbp-F8h] BYREF
  char v35[16]; // [rsp+70h] [rbp-B8h] BYREF
  char v36[96]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v38; // [rsp+F8h] [rbp-30h]

  v12 = *(_QWORD *)(a1 + 16);
  v38 = __readfsqword(0x28u);
  v14 = sub_1EA680(v12 + 384, a2, a3, a4, a5);
  v15 = *(__int16 *)(v14 + 30);
  v16 = (const __m128i *)v14;
  sub_283F90((__int64)v34, a1);
  v19 = v15 + 1;
  v20 = v37;
  if ( (int)v19 < v37 )
  {
    if ( (unsigned __int8)sub_284C60(a1, v19, v16, 1, a5, a6, a7, a8, v17, v18, a11, a12) )
      goto LABEL_7;
    v20 = v37;
  }
  v21 = (*(_QWORD *)(a1 + 416) == 0)
      + -252645135 * ((__int64)(*(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 360)) >> 4)
      + ((__int64)(*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384)) >> 3)
      - 252645135 * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
      - 1
      - *(_DWORD *)(a1 + 424);
  if ( v20 < 0 )
    v20 = 0;
  if ( v21 > v20 )
    v21 = v20;
  if ( v15 == v21 - 1 && (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 952LL) & 2) != 0 )
  {
    v23 = (_QWORD *)sub_284860(a1, v15);
    v24 = v23;
    if ( v23 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v23 + 80LL))(
             *v23,
             *(_QWORD *)(*(_QWORD *)(a1 + 16) + 728LL)) )
      {
        v25 = v16[2].m128i_i64[0];
        v26 = &s1;
        v27 = v24[2] == 0;
        v31 = _mm_loadu_si128(v16);
        v28 = _mm_loadu_si128(v16 + 1);
        v33 = v25;
        v32 = v28;
        if ( !v27 )
          v26 = (const char *)v24[1];
        v32.m128i_i16[6] = tag_strlen(v26);
        sub_284C60(a1, v15, &v31, 1, *(double *)v28.m128i_i64, a6, a7, a8, v29, v30, a11, a12);
      }
    }
  }
LABEL_7:
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v36);
  QT::QFont::~QFont((QT::QFont *)v35);
  return v38 - __readfsqword(0x28u);
}
