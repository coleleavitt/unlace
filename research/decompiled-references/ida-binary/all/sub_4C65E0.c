__int64 __fastcall sub_4C65E0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  _QWORD *v4; // rsi
  int v5; // r12d
  int v6; // ecx
  unsigned int v7; // edx
  int v8; // ebp
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  QT::QWidget *v12; // rbp
  QT::QWidget *v13; // rbp
  QT::QWidget *v14; // rbp
  QT::QWidget *v15; // rbp
  QT::QWidget *v16; // rbp
  QT::QWidget *v17; // rbp
  __int64 result; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  _DWORD *v22; // rax
  _DWORD *v23; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  _DWORD *v27; // rdi
  _DWORD *v28; // rdx
  _DWORD *v29; // rax
  int v30; // edx
  _DWORD *v31; // rdx
  int v32; // eax
  __int64 v34; // rdi
  unsigned __int64 v35; // rax
  _DWORD *v36; // rdi
  __int64 v38; // rdi
  __int64 v39; // rax
  _DWORD *v40; // rdi
  __int64 v42; // rdi
  __int64 v43; // rax
  _DWORD *v44; // rdi
  __m128i v45; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v46; // [rsp+18h] [rbp-30h]

  v46 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 1LL:
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL);
      v45.m128i_i64[0] = 0;
      v21 = QT::QWidget::mapTo(v20, a1, &v45);
      v4 = *(_QWORD **)(a1 + 40);
      v7 = v21;
      LODWORD(v9) = HIDWORD(v21);
      v22 = *(_DWORD **)(v4[9] + 32LL);
      v8 = v22[8] + 1 - v22[6];
      v5 = v22[7] + 1 - v22[5];
      if ( *v4 )
        goto LABEL_4;
      goto LABEL_6;
    case 2LL:
      v42 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL);
      v45.m128i_i64[0] = 0;
      v43 = QT::QWidget::mapTo(v42, a1, &v45);
      v4 = *(_QWORD **)(a1 + 40);
      v7 = v43;
      LODWORD(v9) = HIDWORD(v43);
      v44 = *(_DWORD **)(v4[9] + 32LL);
      v8 = v44[8] + 1 - v44[6];
      v5 = (v44[7] + 1 - v44[5]) / 2;
      goto LABEL_3;
    case 3LL:
      v34 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL);
      v45.m128i_i64[0] = 0;
      v35 = QT::QWidget::mapTo(v34, a1, &v45);
      v4 = *(_QWORD **)(a1 + 40);
      v9 = HIDWORD(v35);
      v36 = *(_DWORD **)(v4[9] + 32LL);
      v8 = v36[8] + 1 - v36[6];
      v5 = (v36[7] + 1 - v36[5]) / 2;
      v7 = v35 + v36[7] + 1 - v36[5] - v5;
      goto LABEL_3;
    case 4LL:
      v38 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL);
      v45.m128i_i64[0] = 0;
      v39 = QT::QWidget::mapTo(v38, a1, &v45);
      v4 = *(_QWORD **)(a1 + 40);
      v7 = v39;
      LODWORD(v9) = HIDWORD(v39);
      v40 = *(_DWORD **)(v4[9] + 32LL);
      v5 = v40[7] + 1 - v40[5];
      v8 = (v40[8] + 1 - v40[6]) / 2;
      goto LABEL_3;
    case 5LL:
      v25 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL);
      v45.m128i_i64[0] = 0;
      v26 = QT::QWidget::mapTo(v25, a1, &v45);
      v4 = *(_QWORD **)(a1 + 40);
      v7 = v26;
      v27 = *(_DWORD **)(v4[9] + 32LL);
      v5 = v27[7] + 1 - v27[5];
      v8 = (v27[8] + 1 - v27[6]) / 2;
      LODWORD(v9) = HIDWORD(v26) + v27[8] + 1 - v27[6] - v8;
      goto LABEL_3;
    case 6LL:
      v28 = *(_DWORD **)(a1 + 32);
      v4 = *(_QWORD **)(a1 + 40);
      LODWORD(v9) = 0;
      v5 = (v28[7] + 1 - v28[5]) / 4;
      v8 = v28[8] + 1 - v28[6];
      v7 = 0;
      goto LABEL_3;
    case 7LL:
      v29 = *(_DWORD **)(a1 + 32);
      v4 = *(_QWORD **)(a1 + 40);
      v30 = v29[7] + 1 - v29[5];
      LODWORD(v9) = 0;
      v8 = v29[8] + 1 - v29[6];
      v5 = v30 / 4;
      v7 = v30 - v30 / 4;
      goto LABEL_3;
    case 8LL:
      v31 = *(_DWORD **)(a1 + 32);
      v4 = *(_QWORD **)(a1 + 40);
      v5 = v31[7] + 1 - v31[5];
      v32 = v31[8] + 1 - v31[6];
      LODWORD(v9) = 0;
      v7 = 0;
      v8 = v32 / 4;
      goto LABEL_3;
    case 9LL:
      v3 = *(_DWORD **)(a1 + 32);
      v4 = *(_QWORD **)(a1 + 40);
      v5 = v3[7] + 1 - v3[5];
      v6 = v3[8] + 1 - v3[6];
      v7 = 0;
      v8 = v6 / 4;
      LODWORD(v9) = v6 - v6 / 4;
LABEL_3:
      if ( !*v4 )
      {
LABEL_6:
        v23 = *(_DWORD **)(a1 + 32);
        v7 = 0;
        v8 = v23[8] + 1 - v23[6];
        LODWORD(v9) = 0;
        v5 = v23[7] + 1 - v23[5];
      }
LABEL_4:
      v10 = v4[8];
      v45 = _mm_unpacklo_epi64(
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(v9)),
              _mm_unpacklo_epi32(
                _mm_cvtsi32_si128(v7 + *(_DWORD *)(*(_QWORD *)(v10 + 32) + 28LL) - *(_DWORD *)(*(_QWORD *)(v10 + 32)
                                                                                             + 20LL)),
                _mm_cvtsi32_si128((int)v9 + *(_DWORD *)(*(_QWORD *)(v10 + 32) + 32LL) - *(_DWORD *)(*(_QWORD *)(v10 + 32)
                                                                                                  + 24LL))));
      QT::QRubberBand::setGeometry(v10, &v45);
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL);
      v45 = _mm_unpacklo_epi64(
              _mm_unpacklo_epi32(
                _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v11 + 32) + 20LL)),
                _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v11 + 32) + 24LL))),
              _mm_unpacklo_epi32(
                _mm_cvtsi32_si128(v5 + *(_DWORD *)(*(_QWORD *)(v11 + 32) + 20LL) - 1),
                _mm_cvtsi32_si128(v8 + *(_DWORD *)(*(_QWORD *)(v11 + 32) + 24LL) - 1)));
      QT::QRubberBand::setGeometry(v11, &v45);
      v12 = *(QT::QWidget **)(*(_QWORD *)(a1 + 40) + 64LL);
      sub_47C810(nullptr);
      QT::QWidget::raise(v12);
      v13 = *(QT::QWidget **)(*(_QWORD *)(a1 + 40) + 8LL);
      sub_47C810(nullptr);
      QT::QWidget::raise(v13);
      v14 = *(QT::QWidget **)(*(_QWORD *)(a1 + 40) + 16LL);
      sub_47C810(nullptr);
      QT::QWidget::raise(v14);
      v15 = *(QT::QWidget **)(*(_QWORD *)(a1 + 40) + 24LL);
      sub_47C810(nullptr);
      QT::QWidget::raise(v15);
      v16 = *(QT::QWidget **)(*(_QWORD *)(a1 + 40) + 32LL);
      sub_47C810(nullptr);
      QT::QWidget::raise(v16);
      v17 = *(QT::QWidget **)(*(_QWORD *)(a1 + 40) + 40LL);
      sub_47C810(nullptr);
      QT::QWidget::raise(v17);
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 64LL) + 104LL))(
                 *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL),
                 1);
      break;
    default:
      result = v46 - __readfsqword(0x28u);
      break;
  }
  return result;
}
