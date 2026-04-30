__int64 __fastcall sub_285150(
        _QWORD *a1,
        unsigned __int8 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebp
  const __m128i *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // rdx
  int v21; // r13d
  __m128i v22; // xmm0
  int v23; // eax
  unsigned int v24; // r12d
  __int16 v25; // bp
  __int64 v26; // rax
  const char *v27; // rdi
  __m128i v29; // [rsp+0h] [rbp-128h] BYREF
  __m128i v30; // [rsp+10h] [rbp-118h]
  __int64 v31; // [rsp+20h] [rbp-108h]
  char v32[64]; // [rsp+30h] [rbp-F8h] BYREF
  char v33[16]; // [rsp+70h] [rbp-B8h] BYREF
  char v34[96]; // [rsp+80h] [rbp-A8h] BYREF
  unsigned int v35; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v36; // [rsp+F8h] [rbp-30h]

  v36 = __readfsqword(0x28u);
  sub_283F90((__int64)v32, (__int64)a1);
  v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 248LL))(a1, a2, v35);
  if ( !(_BYTE)v13 )
  {
    v14 = (const __m128i *)sub_1EA680(a1[2] + 384LL, a2, v11, v12, a3);
    v20 = v14[2].m128i_i64[0];
    v21 = v14[1].m128i_i16[7];
    v29 = _mm_loadu_si128(v14);
    v22 = _mm_loadu_si128(v14 + 1);
    v31 = v20;
    v30 = v22;
    if ( a2 )
    {
      if ( (_WORD)v21 )
      {
        if ( (*(_BYTE *)(a1[2] + 952LL) & 2) != 0 )
          v30.m128i_i16[6] = 0;
        v25 = 0;
        v24 = 0;
        goto LABEL_13;
      }
    }
    else
    {
      v23 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*a1 + 208LL))(
              a1,
              1,
              v20,
              v15,
              v16,
              v17,
              v29.m128i_i64[0],
              v29.m128i_i64[1],
              v30.m128i_i64[0],
              v30.m128i_i64[1],
              v31);
      v24 = v23;
      if ( v21 != v23 )
      {
        v25 = v23;
        if ( (*(_BYTE *)(a1[2] + 952LL) & 2) != 0 )
        {
          v26 = sub_284860((__int64)a1, v23);
          if ( v26 )
          {
            v27 = &s1;
            if ( *(_QWORD *)(v26 + 16) )
              v27 = *(const char **)(v26 + 8);
            v30.m128i_i16[6] = tag_strlen(v27);
          }
        }
LABEL_13:
        v30.m128i_i16[7] = v25;
        v13 = sub_284C60((__int64)a1, v24, &v29, 0, *(double *)v22.m128i_i64, a4, a5, a6, v18, v19, a9, a10);
      }
    }
  }
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v34);
  QT::QFont::~QFont((QT::QFont *)v33);
  return v13;
}
