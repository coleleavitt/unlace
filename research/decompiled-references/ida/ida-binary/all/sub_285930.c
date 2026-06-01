__int64 __fastcall sub_285930(
        QT::QCoreApplication *a1,
        int a2,
        int a3,
        int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  double v18; // xmm0_8
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  const __m128i *v22; // rax
  __int64 v23; // rdi
  __m128i v24; // xmm0
  __int64 v25; // rcx
  double v26; // xmm4_8
  double v27; // xmm5_8
  __int64 v28; // rdx
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  int v33; // [rsp+8h] [rbp-130h] BYREF
  int v34; // [rsp+Ch] [rbp-12Ch] BYREF
  __m128i v35; // [rsp+10h] [rbp-128h] BYREF
  __m128i v36; // [rsp+20h] [rbp-118h]
  __int64 v37; // [rsp+30h] [rbp-108h]
  _BYTE v38[64]; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v39[16]; // [rsp+80h] [rbp-B8h] BYREF
  _BYTE v40[24]; // [rsp+90h] [rbp-A8h] BYREF
  double v41; // [rsp+A8h] [rbp-90h]
  double v42; // [rsp+B8h] [rbp-80h]
  __int64 v43; // [rsp+E8h] [rbp-50h]
  __int64 v44; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v45; // [rsp+108h] [rbp-30h]

  v12 = a3;
  v45 = __readfsqword(0x28u);
  sub_176E70(a1);
  v33 = a2;
  v34 = v12;
  sub_2857B0((__int64)a1, &v33, &v34, 0);
  sub_283F90((__int64)v38, (__int64)a1);
  if ( a2 < 0 )
  {
    (*(void (__fastcall **)(QT::QCoreApplication *, __int64))(*(_QWORD *)a1 + 224LL))(a1, 1);
    goto LABEL_4;
  }
  if ( a2 >= (__int64)(unsigned int)(int)((double)(int)v43 * v41) )
  {
    (*(void (__fastcall **)(QT::QCoreApplication *, _QWORD))(*(_QWORD *)a1 + 224LL))(a1, 0);
    goto LABEL_4;
  }
  if ( (int)v12 >= 0 )
  {
    v18 = (double)(int)v44 * v42;
    if ( v12 < (unsigned int)(int)v18 )
    {
      v22 = (const __m128i *)sub_1EA6A0(*((_QWORD *)a1 + 2) + 384LL, (__int64)a1, v14, v15, v18);
      v23 = *((_QWORD *)a1 + 2);
      v35 = _mm_loadu_si128(v22);
      v24 = _mm_loadu_si128(v22 + 1);
      v36 = v24;
      v37 = v22[2].m128i_i64[0];
      v36.m128i_i16[6] = v33;
      v36.m128i_i16[7] = v34;
      sub_2004D0(v23, v35.m128i_i8, 0, v25, *(double *)v24.m128i_i64, a6, a7, a8, v26, v27, a11, a12);
      v16 = 0;
      goto LABEL_5;
    }
    if ( (unsigned int)(a4 - 1) <= 1 )
    {
      v28 = *((_QWORD *)a1 + 2);
      v29 = *(_DWORD *)(v28 + 736);
      if ( v29 <= 0 )
      {
        *(_DWORD *)(v28 + 736) = 1;
        v31 = *(_QWORD *)a1;
      }
      else
      {
        v30 = v29 + 1;
        *(_DWORD *)(v28 + 736) = v30;
        v31 = *(_QWORD *)a1;
        if ( v30 > 64 )
        {
          (*(void (__fastcall **)(QT::QCoreApplication *, _QWORD))(v31 + 240))(a1, 0);
          goto LABEL_4;
        }
      }
      (*(void (__fastcall **)(QT::QCoreApplication *, _QWORD))(v31 + 232))(a1, 0);
      goto LABEL_4;
    }
LABEL_9:
    v16 = 0;
    goto LABEL_5;
  }
  if ( (unsigned int)(a4 - 1) > 1 )
    goto LABEL_9;
  v19 = *((_QWORD *)a1 + 2);
  v20 = *(_DWORD *)(v19 + 736);
  if ( v20 <= 0 )
  {
    v32 = v20 - 1;
    *(_DWORD *)(v19 + 736) = v32;
    v21 = *(_QWORD *)a1;
    if ( v32 < -64 )
    {
      (*(void (__fastcall **)(QT::QCoreApplication *, __int64))(v21 + 240))(a1, 1);
      goto LABEL_4;
    }
  }
  else
  {
    *(_DWORD *)(v19 + 736) = -1;
    v21 = *(_QWORD *)a1;
  }
  (*(void (__fastcall **)(QT::QCoreApplication *, __int64))(v21 + 232))(a1, 1);
LABEL_4:
  v16 = 1;
LABEL_5:
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v40);
  QT::QFont::~QFont((QT::QFont *)v39);
  return v16;
}
