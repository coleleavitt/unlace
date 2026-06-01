unsigned __int64 __fastcall sub_5153D0(__m128i *this, int a2)
{
  __m128i v2; // xmm0
  __m128i v4; // xmm1
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  int v7; // r15d
  QT::QTextLayout *v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // r12d
  double v11; // xmm0_8
  int v12; // eax
  int v13; // r13d
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rax
  QT::QTextLayout *v17; // r15
  QT::QTextLayout *v19; // rdi
  int v20; // eax
  int v21; // esi
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  QT::QTextLayout *v24; // rdi
  __int64 v25; // rdx
  int v26; // [rsp+4h] [rbp-94h]
  __int64 v27; // [rsp+8h] [rbp-90h]
  double v28; // [rsp+10h] [rbp-88h]
  int v29; // [rsp+18h] [rbp-80h]
  int v30; // [rsp+1Ch] [rbp-7Ch]
  int v31; // [rsp+2Ch] [rbp-6Ch] BYREF
  int v32; // [rsp+30h] [rbp-68h] BYREF
  __int64 v33; // [rsp+38h] [rbp-60h]
  _QWORD v34[3]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v2 = _mm_loadl_epi64(this + 7);
  v35 = __readfsqword(0x28u);
  v4 = _mm_shuffle_epi32(v2, 229);
  v5 = (unsigned int)_mm_cvtsi128_si32(v4);
  if ( (unsigned __int64)(unsigned int)v5 < *((_QWORD *)this + 8) )
  {
    v6 = *((_QWORD *)this + 7) + 48LL * (unsigned int)v5;
    if ( v6 )
    {
      v7 = _mm_cvtsi128_si32(v2);
      v8 = *(QT::QTextLayout **)(v6 + 24);
      v27 = v2.m128i_i64[0];
      v26 = v7;
      v32 = QT::QTextLayout::lineForTextPosition(v8, v7);
      v33 = v9;
      if ( v9 )
      {
        v10 = v5;
        v31 = v7;
        v11 = QT::QTextLine::cursorToX(&v32, &v31, 0);
        v12 = -a2;
        v28 = v11;
        if ( a2 > 0 )
          v12 = a2;
        v29 = v12;
        if ( v12 )
        {
          v13 = 0;
          LODWORD(v27) = 2 * (a2 > 0) - 1;
          do
          {
            if ( v5 >= *((_QWORD *)this + 8) )
              break;
            v14 = *((_QWORD *)this + 7) + 48 * v5;
            if ( !v14 )
              break;
            v15 = QT::QTextLayout::lineForTextPosition(*(QT::QTextLayout **)(*((_QWORD *)this + 7) + 48 * v5 + 24), v26);
            if ( v15 + (int)v27 >= 0 )
            {
              v19 = *(QT::QTextLayout **)(v14 + 24);
              v30 = v15 + v27;
              v20 = QT::QTextLayout::lineCount(v19);
              v21 = v30;
              if ( v30 < v20 )
              {
                v24 = *(QT::QTextLayout **)(v14 + 24);
                goto LABEL_23;
              }
              v22 = *((_QWORD *)this + 8);
              if ( v5 >= v22 - 1 )
                break;
              v5 = ++v10;
              if ( v10 >= v22 )
                break;
              v23 = *((_QWORD *)this + 7) + 48LL * v10;
              if ( !v23 )
                break;
              v21 = 0;
              v24 = *(QT::QTextLayout **)(v23 + 24);
              if ( (int)QT::QTextLayout::lineCount(v24) > 0 )
                goto LABEL_23;
            }
            else
            {
              if ( !v10 )
                break;
              v5 = --v10;
              if ( (unsigned __int64)v10 >= *((_QWORD *)this + 8) )
                break;
              v16 = *((_QWORD *)this + 7) + 48LL * v10;
              if ( !v16 )
                break;
              v17 = *(QT::QTextLayout **)(v16 + 24);
              if ( (int)QT::QTextLayout::lineCount(v17) > 0 )
              {
                v24 = v17;
                v21 = QT::QTextLayout::lineCount(v17) - 1;
LABEL_23:
                LODWORD(v34[0]) = QT::QTextLayout::lineAt(v24, v21);
                v34[1] = v25;
                v26 = QT::QTextLine::xToCursor(v34, 0);
              }
            }
            ++v13;
          }
          while ( v29 != v13 );
        }
        v2.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), _mm_cvtsi32_si128(v10)).m128i_u64[0];
      }
    }
  }
  v34[0] = v2.m128i_i64[0];
  sub_514C10((QT::QAbstractScrollArea *)this, (int *)v34, 2, 1, *(double *)v2.m128i_i64, *(double *)v4.m128i_i64);
  return v35 - __readfsqword(0x28u);
}
