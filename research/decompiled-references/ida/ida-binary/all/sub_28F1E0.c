__int64 __fastcall sub_28F1E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v15; // rdi
  const QT::QObject *v16; // r12
  __int64 v17; // r13
  __int64 v18; // rbp
  double (*v19)(); // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  const char *v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rbx
  unsigned __int64 v27; // rbx
  char v28; // [rsp+0h] [rbp-218h]
  double v29; // [rsp+0h] [rbp-218h]
  __int64 v30; // [rsp+8h] [rbp-210h]
  __int64 v31; // [rsp+18h] [rbp-200h] BYREF
  __int128 v32; // [rsp+20h] [rbp-1F8h] BYREF
  __int64 v33; // [rsp+30h] [rbp-1E8h]
  __int64 v34; // [rsp+38h] [rbp-1E0h]
  int v35; // [rsp+40h] [rbp-1D8h]
  __int64 v36; // [rsp+50h] [rbp-1C8h] BYREF
  __int128 v37; // [rsp+58h] [rbp-1C0h]
  __int64 v38; // [rsp+68h] [rbp-1B0h]
  __int128 v39; // [rsp+70h] [rbp-1A8h]
  const QT::QObject *v40; // [rsp+80h] [rbp-198h]
  __int64 v41; // [rsp+88h] [rbp-190h]
  int v42; // [rsp+90h] [rbp-188h]
  char v43; // [rsp+94h] [rbp-184h]
  __int128 v44; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-168h]
  __int128 v46; // [rsp+B8h] [rbp-160h]
  __int64 v47; // [rsp+C8h] [rbp-150h]
  __int128 v48; // [rsp+D0h] [rbp-148h]
  __int128 v49[3]; // [rsp+E0h] [rbp-138h] BYREF
  __int64 v50; // [rsp+110h] [rbp-108h]
  int v51; // [rsp+118h] [rbp-100h]
  __int64 v52; // [rsp+120h] [rbp-F8h]
  char v53; // [rsp+128h] [rbp-F0h]
  __m128i v54[4]; // [rsp+130h] [rbp-E8h] BYREF
  _BYTE v55[16]; // [rsp+170h] [rbp-A8h] BYREF
  _BYTE v56[88]; // [rsp+180h] [rbp-98h] BYREF
  unsigned __int64 v57; // [rsp+1D8h] [rbp-40h]

  v15 = *(_QWORD *)(a1 + 232);
  v57 = __readfsqword(0x28u);
  if ( !v15 )
    return 0;
  v16 = *(const QT::QObject **)(a1 + 104);
  if ( !v16 )
    return 0;
  if ( *((_QWORD *)v16 + 3) == -1 )
  {
    sub_169630(
      (int)"AUTOHIDE REGISTRY\nFunction has no frame, adding a default one.",
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      v28);
    a2 = 0;
    add_frame(v16, 0, 0, 0);
    v15 = *(_QWORD *)(a1 + 232);
  }
  v33 = 0;
  v17 = sub_1EB5B0(v15, a2, a3, a4, *(double *)a7.m128_u64);
  v34 = -1;
  v35 = 0;
  v32 = 0;
  v18 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v17 + 168LL))(v17, &v32, 0);
  if ( v18 )
  {
    v19 = *(double (**)())(*(_QWORD *)v17 + 312LL);
    v29 = 1.0;
    if ( v19 != sub_172F90 )
      v29 = ((double (__fastcall *)(__int64))v19)(v17);
    v20 = *(_QWORD *)(a1 + 232);
    memset(v54, 0, sizeof(v54));
    v30 = v20;
    QT::QFont::QFont((QT::QFont *)v55);
    QT::QFont::QFont((QT::QFont *)&v44);
    QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v56, (const QT::QFont *)&v44);
    QT::QFont::~QFont((QT::QFont *)&v44);
    sub_1C8200(v54, v30, (__m128d)*(unsigned __int64 *)&v29);
    v21 = sub_178210(v18, (__int64)v54, *(_QWORD *)(a1 + 232));
    v22 = (unsigned int)SWORD2(v34);
    if ( (int)v22 > *(_DWORD *)(v21 + 208) )
    {
      v25 = -1;
    }
    else
    {
      v23 = (const char *)&v36;
      v24 = *(_QWORD *)(a1 + 232);
      v36 = 0;
      v38 = 0;
      v40 = nullptr;
      v41 = -1;
      v42 = -1;
      v43 = 0;
      v37 = 0;
      v39 = 0;
      v25 = -1;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v24 + 896LL))(
             v24,
             &v36,
             v18,
             v21 + 184,
             v22,
             0) )
      {
        if ( v40 == v16 )
        {
          v25 = v41;
          if ( v41 != -1 )
          {
            v23 = (const char *)&v44;
            v31 = 0;
            v45 = 0;
            v47 = 0;
            v50 = 1;
            v51 = -1;
            v52 = 0;
            v53 = 0;
            v44 = 0;
            v46 = 0;
            v48 = 0;
            v49[0] = 0;
            get_udm_by_tid(&v31, &v44, v41);
            v27 = v44;
            clear_tinfo_t(v49);
            v25 = v27 >> 3;
            if ( v47 )
            {
              *(_QWORD *)&v48 = 0;
              qfree(v47, (const char *)&v44);
            }
            if ( v45 )
            {
              *(_QWORD *)&v46 = 0;
              qfree(v45, (const char *)&v44);
            }
            clear_tinfo_t(&v31);
          }
        }
      }
      if ( v38 )
      {
        *(_QWORD *)&v39 = 0;
        qfree(v38, v23);
      }
      if ( v36 )
      {
        *(_QWORD *)&v37 = 0;
        qfree(v36, v23);
      }
    }
    QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v56);
    QT::QFont::~QFont((QT::QFont *)v55);
  }
  else
  {
    v25 = -1;
  }
  sub_28EAC0(v16, v25);
  return 1;
}
