__int64 __fastcall sub_1FFDF0(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __m128i a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // r12
  __int32 v15; // eax
  const __m128i *v16; // rbx
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rax
  __int32 v24; // eax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int32 v33; // eax
  QT::QCoreApplication *v34; // rdi
  __int32 v36; // eax
  __int64 v37; // rdi
  __m128i **v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int32 v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbp
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // r8
  __int64 v50; // r9
  double v51; // xmm4_8
  double v52; // xmm5_8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int32 v55; // eax
  QT::QCoreApplication *v56; // rdi
  struct _Unwind_Exception *v57; // rbx
  __m128i v58; // [rsp+0h] [rbp-128h] BYREF
  __m128 v59; // [rsp+10h] [rbp-118h]
  __int64 v60; // [rsp+20h] [rbp-108h]
  __int64 v61; // [rsp+28h] [rbp-100h]
  _BYTE v62[64]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v63[16]; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE v64[96]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v66; // [rsp+F8h] [rbp-30h]

  v15 = a2->m128i_i32[0];
  v66 = __readfsqword(0x28u);
  v16 = a1;
  if ( v15 == 4 )
  {
    v38 = (__m128i **)a2->m128i_i64[1];
    if ( !v38 )
      return v66 - __readfsqword(0x28u);
    a2 = *v38;
    if ( *v38 >= v38[1] )
      return v66 - __readfsqword(0x28u);
    v14 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, _QWORD, _QWORD))(a1->m128i_i64[0] + 952))(a1, a2, 0, 0);
    if ( !v14 )
      return v66 - __readfsqword(0x28u);
    a1 = (__m128i *)a1[26].m128i_i64[1];
    if ( !a1 )
    {
LABEL_65:
      v57 = (struct _Unwind_Exception *)sub_1E69C0(*(double *)a7.m128i_i64, (__int64)a1, (__int64)a2, v39, v40);
      qfree(v14, a2->m128i_i8);
      _Unwind_Resume(v57);
    }
    v41 = v16[26].m128i_i32[0];
    v58 = _mm_loadu_si128(v16 + 24);
    a7 = _mm_loadu_si128(v16 + 25);
    LODWORD(v60) = v41;
    v42 = a1->m128i_i64[0];
    v59 = (__m128)a7;
    v43 = (*(__int64 (__fastcall **)(__m128i *))(v42 + 16))(a1);
    if ( v43 )
      *(double *)a7.m128i_i64 = qfree(v43, a2->m128i_i8);
    v44 = (*(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)v14 + 16LL))(v14, *(double *)a7.m128i_i64);
    sub_283F90(
      (unsigned int)v62,
      v16[55].m128i_i64[1],
      v45,
      v46,
      v47,
      v48,
      v58.m128i_i32[0],
      v58.m128i_i32[2],
      v59.m128_i32[0],
      v59.m128_i32[2],
      v60);
    a2 = &v58;
    a1 = (__m128i *)v16;
    v61 = v44;
    v59.m128_i16[7] = v65 / 2;
    sub_1FFC10((__int64)v16, &v58, 0, 0, v49, v50, *(double *)a7.m128i_i64, a8, a9, a10, v51, v52, a13, a14);
    if ( v16[60].m128i_i8[8] )
    {
      if ( !v16[26].m128i_i64[1] )
      {
LABEL_64:
        sub_1E69C0(*(double *)a7.m128i_i64, (__int64)a1, (__int64)a2, v53, v54);
        goto LABEL_65;
      }
      v55 = v16[26].m128i_i32[0];
      if ( v55 == 2 )
      {
        v56 = (QT::QCoreApplication *)v16[56].m128i_i64[0];
      }
      else if ( v55 == 3 )
      {
        v56 = (QT::QCoreApplication *)v16[56].m128i_i64[1];
      }
      else
      {
        v56 = nullptr;
        if ( v55 == 1 )
          v56 = (QT::QCoreApplication *)v16[55].m128i_i64[1];
      }
    }
    else
    {
      v56 = nullptr;
    }
    sub_176E70(v56);
    QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v64);
    QT::QFont::~QFont((QT::QFont *)v63);
    if ( v44 )
      *(double *)a7.m128i_i64 = qfree(v44, v58.m128i_i8);
    qfree(v14, v58.m128i_i8, *(double *)a7.m128i_i64);
    return v66 - __readfsqword(0x28u);
  }
  if ( v15 != 5 )
  {
    if ( v15 != 1 )
      return v66 - __readfsqword(0x28u);
    v17 = a2->m128i_i64[1];
    a2 = (__m128i *)a1[55].m128i_i64[1];
    v18 = *(_QWORD *)(v17 + 8);
    sub_283F90(
      (unsigned int)v62,
      (_DWORD)a2,
      a3,
      a4,
      a5,
      a6,
      v58.m128i_i32[0],
      v58.m128i_i32[2],
      v59.m128_i32[0],
      v59.m128_i32[2],
      v60);
    v22 = v65;
    if ( v65 <= 0 )
    {
LABEL_21:
      QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v64);
      QT::QFont::~QFont((QT::QFont *)v63);
      return v66 - __readfsqword(0x28u);
    }
    LODWORD(v23) = *(_DWORD *)v17;
    if ( *(_DWORD *)v17 == -2 )
    {
      v23 = v65 >> 1;
    }
    else
    {
      if ( (int)v23 < -1 )
      {
        v22 = (unsigned int)(v23 + 4);
        v14 = 0;
        if ( (unsigned int)v22 <= 1 )
          goto LABEL_8;
LABEL_49:
        v14 = 0;
        if ( (int)v23 >= 0 )
          v14 = (unsigned int)v23;
LABEL_8:
        a1 = (__m128i *)a1[26].m128i_i64[1];
        if ( a1 )
        {
          v24 = v16[26].m128i_i32[0];
          v58 = _mm_loadu_si128(v16 + 24);
          a7 = _mm_loadu_si128(v16 + 25);
          v25 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, unsigned __int64, __int32))(a1->m128i_i64[0] + 16))(
                  a1,
                  a2,
                  v22,
                  v19,
                  v20,
                  v21,
                  v58.m128i_i64[0],
                  v58.m128i_i64[1],
                  a7.m128i_i64[0],
                  a7.m128i_u64[1],
                  v24);
          v30 = *(_QWORD *)(v18 + 8);
          if ( v25 )
            *(double *)a7.m128i_i64 = qfree(v25, a2->m128i_i8);
          if ( v30 )
            v30 = (*(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)v30 + 16LL))(v30, *(double *)a7.m128i_i64);
          a2 = &v58;
          a1 = (__m128i *)v16;
          v59.m128_i16[7] = v14;
          v61 = v30;
          sub_1FFC10((__int64)v16, &v58, 0, 0, v26, v27, *(double *)a7.m128i_i64, a8, a9, a10, v28, v29, a13, a14);
          if ( !v16[60].m128i_i8[8] )
          {
            v34 = nullptr;
LABEL_19:
            sub_176E70(v34);
            if ( v30 )
              qfree(v30, v58.m128i_i8);
            goto LABEL_21;
          }
          if ( v16[26].m128i_i64[1] )
          {
            v33 = v16[26].m128i_i32[0];
            if ( v33 == 2 )
            {
              v34 = (QT::QCoreApplication *)v16[56].m128i_i64[0];
            }
            else if ( v33 == 3 )
            {
              v34 = (QT::QCoreApplication *)v16[56].m128i_i64[1];
            }
            else
            {
              v34 = nullptr;
              if ( v33 == 1 )
                v34 = (QT::QCoreApplication *)v16[55].m128i_i64[1];
            }
            goto LABEL_19;
          }
          goto LABEL_63;
        }
LABEL_62:
        sub_1E69C0(*(double *)a7.m128i_i64, (__int64)a1, (__int64)a2, v22, v19);
LABEL_63:
        sub_1E69C0(*(double *)a7.m128i_i64, (__int64)a1, (__int64)a2, v31, v32);
        goto LABEL_64;
      }
      if ( (_DWORD)v23 == -1 )
        LODWORD(v23) = v65 - 1;
    }
    v19 = (int)v23;
    v14 = (unsigned int)(v65 - 1);
    if ( (int)v23 >= v65 )
      goto LABEL_8;
    goto LABEL_49;
  }
  if ( a1[60].m128i_i8[8] )
  {
    if ( !a1[26].m128i_i64[1] )
    {
      sub_1E69C0(*(double *)a7.m128i_i64, (__int64)a1, (__int64)a2, a3, a4);
      goto LABEL_62;
    }
    v36 = a1[26].m128i_i32[0];
    if ( v36 == 2 )
    {
      v37 = a1[56].m128i_i64[0];
    }
    else if ( v36 == 3 )
    {
      v37 = a1[56].m128i_i64[1];
    }
    else
    {
      v37 = 0;
      if ( v36 == 1 )
        v37 = v16[55].m128i_i64[1];
    }
  }
  else
  {
    v37 = 0;
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v37 + 152LL))(v37, 0, 0);
}
