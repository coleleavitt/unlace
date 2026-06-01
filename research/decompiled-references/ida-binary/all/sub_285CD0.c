__int64 __fastcall sub_285CD0(QT::QAbstractScrollArea **a1, __int64 a2, char a3, double a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  const __m128i *v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int16 epi16; // si
  __m128i v12; // xmm0
  __int64 (__fastcall *v14)(__int64); // rax
  QT::QCursor *v15; // rax
  unsigned __int16 v16; // r12
  __int64 (__fastcall *v17)(__int64); // rax
  QT::QCursor *v18; // rax
  int v19; // eax
  __int64 v20; // [rsp+8h] [rbp-50h] BYREF
  __m128i v21; // [rsp+10h] [rbp-48h] BYREF
  __m128i v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+30h] [rbp-28h]
  unsigned __int64 v24; // [rsp+38h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  sub_176E70((QT::QCoreApplication *)a1);
  v8 = (const __m128i *)sub_1EA6A0((__int64)a1[2] + 384, a2, v6, v7, a4);
  v9 = v8[2].m128i_i64[0];
  v21 = _mm_loadu_si128(v8);
  v23 = v9;
  v22 = _mm_loadu_si128(v8 + 1);
  if ( a3 )
  {
    v14 = *((__int64 (__fastcall **)(__int64))*a1 + 24);
    if ( v14 == sub_285BA0 )
    {
      v15 = (QT::QCursor *)QT::QAbstractScrollArea::viewport(a1[2]);
      v20 = sub_1C7B10(v15);
      sub_2857B0((__int64)a1, (int *)&v20, (int *)&v20 + 1, 1u);
      v16 = v20;
    }
    else
    {
      v16 = v14((__int64)a1);
    }
    v17 = *((__int64 (__fastcall **)(__int64))*a1 + 25);
    if ( v17 == sub_285C10 )
    {
      v18 = (QT::QCursor *)QT::QAbstractScrollArea::viewport(a1[2]);
      HIDWORD(v20) = (unsigned __int64)sub_1C7B10(v18) >> 32;
      sub_2857B0((__int64)a1, nullptr, (int *)&v20 + 1, 1u);
      v19 = HIDWORD(v20);
    }
    else
    {
      v19 = v17((__int64)a1);
    }
    v10 = _mm_cvtsi32_si128(v16 | (unsigned int)(v19 << 16));
  }
  else
  {
    v10 = _mm_cvtsi32_si128(v8[1].m128i_u32[3]);
  }
  epi16 = _mm_extract_epi16(v10, 1);
  if ( a2 )
  {
    v22.m128i_i32[3] = _mm_cvtsi128_si32(v10);
    v12 = _mm_load_si128(&v21);
    *(_DWORD *)(a2 + 32) = v23;
    *(__m128i *)a2 = v12;
    *(__m128i *)(a2 + 16) = _mm_load_si128(&v22);
  }
  return sub_284860((__int64)a1, epi16);
}
