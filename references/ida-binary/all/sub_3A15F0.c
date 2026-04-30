__int64 __fastcall sub_3A15F0(__int64 a1, __m128i *a2, __int64 a3, char a4)
{
  QT::QAbstractScrollArea *v6; // rbp
  __int64 *v7; // r14
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(QT::QAbstractScrollArea *, __m128i *); // r15
  __int64 v12; // rax
  __m128i v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // ebp
  char v20; // di
  signed int v21; // eax
  signed int v22; // esi
  signed int v23; // ecx
  signed int v24; // edx
  signed int v25; // r8d
  int v26; // eax
  __int32 v27; // edx
  int v29; // eax
  signed int v30; // r8d
  char v32; // [rsp+1Fh] [rbp-89h] BYREF
  __m128i si128; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v34[4]; // [rsp+30h] [rbp-78h] BYREF
  __m128i v35; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v6 = (QT::QAbstractScrollArea *)sub_49AD60(a1);
  v7 = (__int64 *)QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 2472));
  v8 = a4 & 1;
  v9 = sub_4A0BB0(a1, a3, a4 & 1, &v32);
  if ( v9 < 0 )
  {
    if ( (a4 & 2) == 0 )
    {
      v23 = 0;
      v22 = 0;
      v24 = 0;
      v20 = v32;
      v21 = 0;
      v19 = 3;
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
      goto LABEL_9;
    }
    v21 = sub_4A0DB0(a1);
    if ( !v21 )
    {
      v23 = 0;
      v22 = 0;
      v24 = 0;
      v20 = v32;
      v19 = 3;
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
      goto LABEL_9;
    }
    if ( (a4 & 1) != 0 )
    {
      v29 = sub_4A0DB0(a1);
      v32 = 1;
      --v29;
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
      v10 = (unsigned int)v29;
      if ( v29 < 0 )
      {
        v20 = 1;
        v19 = 3;
        v35 = 0;
        goto LABEL_17;
      }
    }
    else
    {
      v32 = 1;
      v10 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
    }
  }
  else
  {
    v10 = (unsigned int)v9;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  }
  v11 = *(__int64 (__fastcall **)(QT::QAbstractScrollArea *, __m128i *))(*(_QWORD *)v6 + 480LL);
  v12 = *v7;
  v34[0] = -1;
  v34[1] = 0;
  v34[2] = 0;
  (*(void (__fastcall **)(__m128i *, __int64 *, __int64, _QWORD, _QWORD *))(v12 + 96))(&v35, v7, v10, 0, v34);
  v13.m128i_i64[0] = v11(v6, &v35);
  si128 = v13;
  v14 = *(_QWORD *)(QT::QAbstractScrollArea::viewport(v6) + 32LL);
  v15 = _mm_loadl_epi64((const __m128i *)(v14 + 28));
  v16 = _mm_loadl_epi64((const __m128i *)(v14 + 20));
  v35.m128i_i64[0] = 0;
  v35.m128i_i64[1] = _mm_sub_epi32(v15, v16).m128i_u64[0];
  v17 = QT::QRect::operator&(&v35, &si128);
  if ( __PAIR64__(HIDWORD(v17) - 1, (int)v17 - 1) == v18 )
  {
    v19 = 1;
    v21 = si128.m128i_i32[0];
    v22 = si128.m128i_i32[1];
    v24 = si128.m128i_i32[2] + 1;
    v23 = si128.m128i_i32[3] + 1;
    v20 = v32;
  }
  else
  {
    v19 = 0;
    v20 = v32;
    v21 = si128.m128i_i32[0];
    v22 = si128.m128i_i32[1];
    v23 = si128.m128i_i32[3] + 1;
    v24 = si128.m128i_i32[2] + 1;
  }
  if ( v24 >= v21 )
  {
    v25 = v24;
    v24 = v21;
    v21 = v25;
  }
  if ( v23 >= v22 )
  {
    v30 = v22;
    v22 = v23;
    v23 = v30;
  }
LABEL_9:
  v35 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), _mm_cvtsi32_si128(v23)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(v22)));
  if ( !v8 )
  {
    v26 = 1;
    v27 = 2;
    goto LABEL_11;
  }
LABEL_17:
  v26 = 2;
  v27 = 1;
LABEL_11:
  if ( v20 )
    v27 = v26;
  sub_277B80(a2, &v35, v27);
  return v19;
}
