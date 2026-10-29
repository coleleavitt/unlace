__int64 __fastcall sub_2EE90(
        __int64 a1,
        int a2,
        int a3,
        __int16 a4,
        __int64 a5,
        const char *a6,
        double a7,
        double a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r10
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __m128 v22; // xmm0
  char v23; // al
  __int16 v25; // ax
  const char *v26; // [rsp+10h] [rbp-B8h]
  __m128 v27; // [rsp+30h] [rbp-98h] BYREF
  int v28; // [rsp+40h] [rbp-88h]
  __int16 v29; // [rsp+44h] [rbp-84h]
  const char *v30; // [rsp+48h] [rbp-80h]
  __int64 v31; // [rsp+50h] [rbp-78h]
  __int64 v32; // [rsp+58h] [rbp-70h]
  int v33; // [rsp+60h] [rbp-68h]
  __int128 v34; // [rsp+68h] [rbp-60h]
  bool v35; // [rsp+78h] [rbp-50h]
  char v36; // [rsp+79h] [rbp-4Fh]
  unsigned __int64 v37; // [rsp+88h] [rbp-40h]

  v14 = a1;
  v37 = __readfsqword(0x28u);
  v19 = a10;
  v20 = a11;
  v21 = a13;
  if ( a2 == 9 )
  {
    v26 = a6;
    v25 = sub_43FB0(*(_QWORD *)(a1 + 8));
    v14 = a1;
    a6 = v26;
    v19 = a10;
    v20 = a11;
    v21 = a13;
    if ( !v25 )
      return sub_BFC0((__int64)"AUTOHIDE SESSION\n%a: undefined %s custom fixup handler", a7, a6);
  }
  if ( a5 && !a4 )
    return sub_BFC0((__int64)"AUTOHIDE SESSION\n%a: undefined %s custom fixup handler", a7, a6);
  v22 = (__m128)_mm_loadu_si128((const __m128i *)(v14 + 8));
  v28 = a2;
  v31 = v19;
  v35 = a2 > 5;
  v29 = a4;
  v23 = *(_BYTE *)(_mm_movehl_ps(a9, v22).m128_u64[0] + 617);
  v30 = a6;
  v32 = v20;
  v33 = 0;
  v36 = v23;
  v27 = v22;
  v34 = 0;
  if ( (unsigned __int8)sub_2DBA0((__int64)&v27, a12, v21, *(double *)v22.m128_u64, 0.0)
    && (unsigned __int8)sub_2DCE0((__int64)&v27, *(double *)v22.m128_u64, 0.0)
    && (unsigned __int8)sub_2DD80((__int64)&v27, a3, *(double *)v22.m128_u64, 0.0)
    && (unsigned __int8)sub_2DE70((__int64)&v27, *(double *)v22.m128_u64)
    && (!v35 || (unsigned __int8)sub_2DF10(&v27, a14, a12, a3)) )
  {
    sub_2EA10((__int64)&v27);
  }
  return v37 - __readfsqword(0x28u);
}

