__int64 __fastcall sub_3A1450(__int64 *a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  QT::QAbstractScrollArea *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __m128i v12; // xmm0
  int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 result; // rax
  __m128i v19; // xmm0
  int v20; // edx
  __m128i v21; // xmm0
  _DWORD v22[4]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v23[2]; // [rsp+10h] [rbp-88h] BYREF
  __m128i v24; // [rsp+20h] [rbp-78h] BYREF
  int v25; // [rsp+30h] [rbp-68h]
  __m128i v26; // [rsp+40h] [rbp-58h] BYREF
  int v27; // [rsp+50h] [rbp-48h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v6 = sub_49AD60(a1);
  v7 = *a3;
  v8 = (QT::QAbstractScrollArea *)v6;
  v9 = *a1;
  v24 = 0;
  v25 = 0;
  (*(void (__fastcall **)(__int64 *, __m128i *, __int64, __int64))(v9 + 848))(a1, &v24, v7, 2);
  v10 = a3[1];
  v11 = *a1;
  v27 = 0;
  v26 = 0;
  if ( ((*(__int64 (__fastcall **)(__int64 *, __m128i *, __int64, __int64))(v11 + 848))(a1, &v26, v10 - 1, 1) & 2) != 0 )
  {
    v12 = _mm_load_si128(&v24);
    v27 = 2;
    v26 = v12;
  }
  v13 = sub_277B90((unsigned int *)&v26);
  v14 = QT::QAbstractScrollArea::viewport(v8);
  v22[2] = *(_DWORD *)(*(_QWORD *)(v14 + 32) + 28LL) + 1 - *(_DWORD *)(*(_QWORD *)(v14 + 32) + 20LL);
  v22[0] = 0;
  v22[1] = sub_277B90((unsigned int *)&v24);
  v22[3] = v13;
  v15 = QT::QAbstractScrollArea::viewport(v8);
  v23[0] = 0;
  v23[1] = _mm_sub_epi32(
             _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v15 + 32) + 28LL)),
             _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v15 + 32) + 20LL))).m128i_u64[0];
  v16 = QT::QRect::operator&(v23, v22);
  if ( __PAIR64__(HIDWORD(v16) - 1, (int)v16 - 1) != v17 )
  {
    result = 1;
LABEL_5:
    v19 = _mm_load_si128(&v24);
    *(_DWORD *)(a2 + 16) = v25;
    v20 = v27;
    *(__m128i *)a2 = v19;
    v21 = _mm_load_si128(&v26);
    *(_DWORD *)(a2 + 36) = v20;
    *(__m128i *)(a2 + 20) = v21;
    return result;
  }
  result = 0;
  if ( !a4 )
    goto LABEL_5;
  return result;
}
