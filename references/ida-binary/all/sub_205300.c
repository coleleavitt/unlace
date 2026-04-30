unsigned __int64 __fastcall sub_205300(
        __m128i *a1,
        __m128i *a2,
        __m128 *a3,
        unsigned int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __m128i *v13; // rbx
  int v14; // edx
  __m128 v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r15d
  __int64 v19; // r12
  int v20; // eax
  QT::QAccessibleEvent *v21; // rdi
  __m128i *v22; // rsi
  int v23; // r13d
  __int64 v24; // rdi
  QT::QAccessibleEvent *v25; // r14
  unsigned __int64 v26; // xmm0_8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int32 v31; // edx
  __int64 (__fastcall *v32)(__int64, __int64, __int64); // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 (__fastcall *v35)(QT::QAbstractScrollArea *); // rax
  QT::QWidget *v36; // rax
  QT::QWidget *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __m128 v42; // xmm4
  __m128 v43; // xmm5
  bool v44; // r12
  void (__fastcall *v45)(__m128i *, __m128i *, __m128i *, unsigned int *, __int64, double); // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  bool v48; // zf
  __int64 v49; // rdx
  __int64 v50; // rcx
  const char *v51; // rsi
  double v53; // xmm0_8
  __int64 v54; // rdi
  double v55; // xmm4_8
  double v56; // xmm5_8
  __int32 v57; // eax
  __int32 v58; // eax
  double v59; // xmm4_8
  double v60; // xmm5_8
  __int32 v61; // eax
  int v62; // eax
  char v63; // [rsp+0h] [rbp-158h]
  __int64 v65; // [rsp+10h] [rbp-148h]
  __int64 v66; // [rsp+18h] [rbp-140h]
  __int64 v67; // [rsp+20h] [rbp-138h]
  __int64 v68; // [rsp+28h] [rbp-130h]
  bool v69; // [rsp+36h] [rbp-122h]
  char v70; // [rsp+37h] [rbp-121h]
  int v71; // [rsp+38h] [rbp-120h]
  unsigned int v72; // [rsp+3Ch] [rbp-11Ch] BYREF
  __int64 v73; // [rsp+40h] [rbp-118h] BYREF
  __int128 v74; // [rsp+48h] [rbp-110h]
  __int64 v75; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v76; // [rsp+68h] [rbp-F0h]
  __m128 v77; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int64 v78; // [rsp+90h] [rbp-C8h]
  unsigned __int64 v79; // [rsp+98h] [rbp-C0h]
  int v80; // [rsp+A0h] [rbp-B8h]
  QT::QAccessibleEvent *v81; // [rsp+A8h] [rbp-B0h]
  char v82[8]; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v83; // [rsp+C0h] [rbp-98h]
  char v84; // [rsp+C8h] [rbp-90h]
  char v85[16]; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v86; // [rsp+E0h] [rbp-78h] BYREF
  unsigned __int64 v87; // [rsp+F0h] [rbp-68h]
  int v88; // [rsp+F8h] [rbp-60h]
  __int32 v89; // [rsp+FCh] [rbp-5Ch]
  int v90; // [rsp+100h] [rbp-58h]
  __int64 v91; // [rsp+108h] [rbp-50h]
  unsigned __int64 v92; // [rsp+118h] [rbp-40h]

  v13 = a1;
  v72 = a4;
  v92 = __readfsqword(0x28u);
  v71 = BYTE1(a4);
  v69 = BYTE1(a4) == 5;
  v70 = (BYTE1(a4) - 2) & 0xFD;
  if ( v70 && BYTE1(a4) != 5 )
    v14 = a3[2].m128_i32[0];
  else
    v14 = a1[59].m128i_i32[0];
  v15 = 0;
  v73 = 0;
  v74 = 0;
  sub_1EB3E0(a1, &v73, v14);
  v66 = v74;
  if ( !(_QWORD)v74 )
  {
    v68 = 0;
    v18 = 0;
    v65 = 0;
    goto LABEL_37;
  }
  v67 = 0;
  v18 = 0;
  v19 = 0;
  v65 = 0;
  v68 = 0;
  while ( 1 )
  {
    v25 = *(QT::QAccessibleEvent **)(v73 + 8 * v19);
    sub_178B40((__int64)v25);
    a6 = *a3;
    v26 = a3[1].m128_u64[0];
    if ( v25 == (QT::QAccessibleEvent *)v13[55].m128i_i64[1] )
    {
      v20 = 1;
    }
    else if ( v25 == (QT::QAccessibleEvent *)v13[56].m128i_i64[0] )
    {
      v20 = 2;
    }
    else
    {
      v20 = 0;
      if ( v25 == (QT::QAccessibleEvent *)v13[56].m128i_i64[1] )
        v20 = 3;
    }
    v21 = (QT::QAccessibleEvent *)a3[2].m128_u64[1];
    v79 = a3[1].m128_u64[1];
    v80 = v20;
    v81 = v21;
    v77 = a6;
    v78 = v26;
    if ( v21 )
      v81 = (QT::QAccessibleEvent *)(*(__int64 (__fastcall **)(QT::QAccessibleEvent *))(*(_QWORD *)v21 + 16LL))(v21);
    v15 = 0;
    v75 = 0;
    v22 = (__m128i *)&v75;
    v76 = 0;
    v23 = (*(__int64 (__fastcall **)(QT::QAccessibleEvent *, __int64 *, __m128i *, __m128 *, _QWORD))(*(_QWORD *)v25 + 104LL))(
            v25,
            &v75,
            a2,
            &v77,
            v72);
    if ( !v23 )
      break;
    sub_174EE0((__int64)v25);
    v24 = v75;
    if ( !v18 )
    {
      v16 = *((_QWORD *)&v76 + 1);
      v18 = v23;
      v17 = v67;
      v68 = v76;
      *((_QWORD *)&v76 + 1) = v67;
      v75 = v65;
      v67 = v16;
      v65 = v24;
      v24 = v75;
    }
    if ( v24 )
    {
      *(_QWORD *)&v76 = 0;
      *(double *)v15.m128_u64 = qfree(v24, (const char *)&v75);
    }
    a1 = (__m128i *)v81;
    if ( v81 )
      *(double *)v15.m128_u64 = qfree(v81, (const char *)&v75);
    if ( ++v19 == v66 )
      goto LABEL_37;
  }
  if ( v25 )
  {
    v22 = v13;
    sub_1E96E0((QT::QObject *)v82, 0.0, (__int64)v13, 0);
    if ( !v84 && v83 && *(_DWORD *)(v83 + 964) == 1 )
      dto_copy_to_inf(v85);
    *(_QWORD *)v82 = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)v82);
  }
  a1 = (__m128i *)v25;
  sub_174ED0((__int64 *)v25);
  if ( !v13[26].m128i_i64[1] )
  {
    sub_1E69C0(0.0, (__int64)v25, (__int64)v22, v27, v17);
    goto LABEL_131;
  }
  v16 = v13[26].m128i_u32[0];
  if ( v25 == (QT::QAccessibleEvent *)v13[55].m128i_i64[1] )
  {
    if ( (_DWORD)v16 == 1 )
      goto LABEL_33;
    a6 = (__m128)v13[24];
    v15 = (__m128)v13[25].m128i_u64[0];
    v23 = 1;
    v30 = v13[25].m128i_u32[2];
    v31 = v13[25].m128i_i32[3];
  }
  else if ( v25 == (QT::QAccessibleEvent *)v13[56].m128i_i64[0] )
  {
    if ( (_DWORD)v16 == 2 )
      goto LABEL_33;
    a6 = (__m128)v13[24];
    v15 = (__m128)v13[25].m128i_u64[0];
    v23 = 2;
    v30 = v13[25].m128i_u32[2];
    v31 = v13[25].m128i_i32[3];
  }
  else
  {
    if ( v25 == (QT::QAccessibleEvent *)v13[56].m128i_i64[1] )
      v17 = 3;
    else
      v17 = 0;
    if ( (_DWORD)v16 == (_DWORD)v17 )
      goto LABEL_33;
    a6 = (__m128)v13[24];
    v15 = (__m128)v13[25].m128i_u64[0];
    v30 = v13[25].m128i_u32[2];
    v31 = v13[25].m128i_i32[3];
    if ( v25 == (QT::QAccessibleEvent *)v13[56].m128i_i64[1] )
      v23 = 3;
  }
  v89 = v31;
  v22 = &v86;
  v88 = v30;
  v90 = v23;
  v91 = 0;
  v86 = (__m128i)a6;
  v87 = v15.m128_u64[0];
  sub_1F1190(v13 + 24, &v86, 2, v30, v28, v29, (__m128i)v15);
LABEL_33:
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    *(double *)v15.m128_u64 = qfree(v75, v22->m128i_i8);
  }
  a1 = (__m128i *)v81;
  if ( v81 )
    *(double *)v15.m128_u64 = qfree(v81, v22->m128i_i8);
LABEL_37:
  v22 = (__m128i *)v13[26].m128i_i64[1];
  if ( !v22 )
  {
LABEL_131:
    sub_1E69C0(*(double *)v15.m128_u64, (__int64)a1, (__int64)v22, v16, v17);
LABEL_132:
    sub_1E69C0(*(double *)v15.m128_u64, (__int64)a1, (__int64)v22, v46, v47);
    goto LABEL_133;
  }
  v32 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v13->m128i_i64[0] + 928);
  if ( v32 == sub_1F09A0 )
  {
    v33 = a2[2].m128i_i64[1];
    if ( !v33 )
    {
LABEL_42:
      sub_459B80(v13, v22);
      goto LABEL_43;
    }
    if ( sub_1F0940((__int64)v13, (__int64)v22, v33) )
      goto LABEL_47;
LABEL_41:
    v22 = (__m128i *)v13[26].m128i_i64[1];
    goto LABEL_42;
  }
  v62 = v32((__int64)v13, (__int64)a2, (__int64)v13[24].m128i_i64);
  if ( v62 <= 0 )
    goto LABEL_47;
  if ( v62 == 1 )
    goto LABEL_41;
LABEL_43:
  sub_204FC0(v13, (__int64)v13[24].m128i_i64);
  v34 = v13->m128i_i64[0];
  v13[55].m128i_i8[0] = 0;
  v35 = *(__int64 (__fastcall **)(QT::QAbstractScrollArea *))(v34 + 760);
  if ( v35 == sub_1E6980 )
  {
    v36 = (QT::QWidget *)QT::QAbstractScrollArea::viewport((QT::QAbstractScrollArea *)v13);
    QT::QWidget::update(v36);
    v37 = (QT::QWidget *)v13[48].m128i_i64[0];
    if ( v37 && *(char *)(*((_QWORD *)v37 + 4) + 9LL) < 0 )
      QT::QWidget::update(v37);
  }
  else
  {
    v35((QT::QAbstractScrollArea *)v13);
  }
LABEL_47:
  v22 = a2;
  (*(void (__fastcall **)(__m128i *, __m128i *, __m128i *, _QWORD))(v13->m128i_i64[0] + 912))(v13, a2, v13 + 24, 0);
  v44 = 1;
  if ( v13[26].m128i_i32[0] != 1 )
    v44 = v13[25].m128i_i32[2] >= 0;
  a1 = (__m128i *)v13[14].m128i_i64[0];
  if ( !a1 )
  {
    v58 = v13[59].m128i_i32[1];
    if ( v58 == 6 )
    {
      v38 = v13[59].m128i_u32[2];
      if ( (v38 & 2) == 0 )
      {
        if ( !v44 )
          goto LABEL_53;
        goto LABEL_88;
      }
LABEL_112:
      sub_1FD6A0(
        (__int64)&v13[13].m128i_i64[1],
        (const char *)a2[2].m128i_i64[1],
        a2[1].m128i_i16[6],
        1,
        *(double *)v15.m128_u64,
        a6,
        a7,
        a8,
        *(double *)v42.m128_u64,
        *(double *)v43.m128_u64,
        a11,
        a12);
      v22 = (__m128i *)v13[26].m128i_i64[1];
      a1 = (__m128i *)((char *)v13 + 216);
      *(double *)v15.m128_u64 = sub_1FD9E0(
                                  (__int64)&v13[13].m128i_i64[1],
                                  v22->m128i_i8,
                                  v13[25].m128i_i16[6],
                                  *(double *)v15.m128_u64,
                                  a6,
                                  a7,
                                  a8,
                                  v59,
                                  v60,
                                  a11,
                                  a12);
      goto LABEL_52;
    }
    if ( v58 == 10 )
    {
      if ( (v13[59].m128i_i8[8] & 0x20) != 0 )
        goto LABEL_96;
      goto LABEL_52;
    }
    goto LABEL_93;
  }
  if ( !v13[15].m128i_i8[0] )
  {
LABEL_51:
    v22 = (__m128i *)v13[26].m128i_i64[1];
    a1 = (__m128i *)((char *)v13 + 216);
    *(double *)v15.m128_u64 = sub_1FD9E0(
                                (__int64)&v13[13].m128i_i64[1],
                                v22->m128i_i8,
                                v13[25].m128i_i16[6],
                                *(double *)v15.m128_u64,
                                a6,
                                a7,
                                a8,
                                *(double *)v42.m128_u64,
                                *(double *)v43.m128_u64,
                                a11,
                                a12);
    goto LABEL_52;
  }
  v58 = v13[59].m128i_i32[1];
  if ( v58 != 6 )
  {
    if ( v58 == 10 )
    {
      if ( (v13[59].m128i_i8[8] & 0x20) != 0 )
      {
LABEL_114:
        if ( !v13[15].m128i_i8[0] )
          goto LABEL_51;
        v61 = v13[59].m128i_i32[1];
        v22 = (__m128i *)v13[59].m128i_u32[2];
        LOBYTE(v39) = v61 == 2;
        LOBYTE(v38) = v61 == 2 || v61 == 7;
        if ( (_BYTE)v38 )
          goto LABEL_51;
        if ( ((unsigned __int8)v22 & 2) != 0 )
          goto LABEL_51;
        if ( v61 == 1 )
        {
          v22 = (__m128i *)((unsigned __int8)v22 & 0x10);
          if ( (_DWORD)v22 )
            goto LABEL_51;
        }
        goto LABEL_73;
      }
LABEL_52:
      if ( !v44 )
        goto LABEL_53;
      goto LABEL_75;
    }
LABEL_93:
    v38 = (unsigned int)(v58 - 1);
    if ( (unsigned int)v38 <= 1 || v58 == 7 )
    {
      if ( !a1 )
      {
LABEL_96:
        v22 = (__m128i *)v13[59].m128i_u32[2];
        LOBYTE(v39) = v58 == 2;
        LOBYTE(v38) = v58 == 2 || v58 == 7;
        if ( !(_BYTE)v38 && ((unsigned __int8)v22 & 2) == 0 )
        {
          if ( v58 != 1 )
            goto LABEL_52;
          v22 = (__m128i *)((unsigned __int8)v22 & 0x10);
          if ( !(_DWORD)v22 )
          {
            if ( !v44 )
              goto LABEL_53;
            goto LABEL_79;
          }
        }
        goto LABEL_112;
      }
      goto LABEL_114;
    }
    goto LABEL_52;
  }
  if ( (v13[59].m128i_i8[8] & 2) != 0 )
    goto LABEL_51;
LABEL_73:
  if ( !v44 )
    goto LABEL_53;
  v53 = qfree(a1, v22->m128i_i8);
  v13[14].m128i_i64[0] = 0;
  v54 = v13[15].m128i_i64[1];
  v13[14].m128i_i32[2] = 0;
  *(double *)v15.m128_u64 = qfree(v54, v22->m128i_i8, v53);
  v13[15].m128i_i64[1] = 0;
  a1 = (__m128i *)v13[13].m128i_i64[1];
  v13[16].m128i_i32[0] = 0;
  sub_1FD320((__int64)a1, *(double *)v15.m128_u64, a6, a7, a8, v55, v56, a11, a12);
LABEL_75:
  v57 = v13[59].m128i_i32[1];
  v38 = v13[59].m128i_u32[2];
  if ( v57 != 10 && v57 != 6 && v57 != 11 )
  {
    if ( (unsigned int)(v57 - 1) > 1 )
      goto LABEL_53;
LABEL_79:
    if ( !v70 )
      goto LABEL_82;
    goto LABEL_80;
  }
LABEL_88:
  v38 &= 1u;
  if ( (_DWORD)v38 )
    goto LABEL_53;
  if ( !v70 )
    goto LABEL_82;
LABEL_80:
  if ( v71 != 1 && !v69 )
  {
LABEL_53:
    if ( !v13[60].m128i_i8[8] )
      goto LABEL_54;
    goto LABEL_83;
  }
LABEL_82:
  a1 = v13;
  sub_1F3DE0((__int64)v13, v22->m128i_i8, v38, v39, *(double *)v15.m128_u64);
  if ( !v13[60].m128i_i8[8] )
  {
LABEL_54:
    if ( v18 != 2 )
      goto LABEL_55;
    goto LABEL_84;
  }
LABEL_83:
  v22 = nullptr;
  a1 = v13;
  sub_1E70E0((QT::QWidget **)v13, 0);
  if ( v18 != 2 )
  {
LABEL_55:
    if ( v18 == 3 )
    {
      v22 = (__m128i *)&s1;
      if ( v68 )
        v22 = (__m128i *)v65;
      a1 = (__m128i *)"%s";
      sub_169630((int)"%s", (__int64)v22, v38, v39, v40, v41, v15, a6, a7, a8, v42, v43, a11, a12, v63);
    }
    goto LABEL_59;
  }
LABEL_84:
  v22 = (__m128i *)&s1;
  if ( v68 )
    v22 = (__m128i *)v65;
  a1 = (__m128i *)"%s";
  sub_16B9E0((int)"%s", (__int64)v22, v38, v39, v40, v41, v15, a6, a7, a8, v42, v43, a11, a12, v63);
LABEL_59:
  if ( !v13[26].m128i_i64[1] )
    goto LABEL_134;
  v45 = (void (__fastcall *)(__m128i *, __m128i *, __m128i *, unsigned int *, __int64, double))v13[22].m128i_i64[0];
  if ( v45 )
  {
    v22 = a2;
    a1 = v13;
    v13[60].m128i_i8[9] = 1;
    v45(v13, a2, v13 + 24, &v72, v13[23].m128i_i64[1], *(double *)v15.m128_u64);
    v48 = v13[26].m128i_i64[1] == 0;
    v13[60].m128i_i8[9] = 0;
    if ( v48 )
      goto LABEL_132;
  }
  v22 = a2;
  a1 = v13;
  sub_459CC0(v13, a2, &v13[24], *(double *)v15.m128_u64);
  if ( !v13[26].m128i_i64[1] )
  {
LABEL_133:
    sub_1E69C0(*(double *)v15.m128_u64, (__int64)a1, (__int64)v22, v49, v50);
LABEL_134:
    sub_1E69C0(*(double *)v15.m128_u64, (__int64)a1, (__int64)v22, v38, v39);
  }
  v51 = (const char *)v13;
  sub_1F4990(0xAu, v13, &v13[24], a2);
  if ( v13[59].m128i_i32[1] != 10 || (v13[59].m128i_i8[8] & 0x20) == 0 )
  {
    v51 = nullptr;
    sub_531B30(2, 0, 0);
  }
  sub_2D9550((QT::QAccessibleEvent *)v13);
  if ( v65 )
    *(double *)v15.m128_u64 = qfree(v65, v51);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73, v51, *(double *)v15.m128_u64);
  }
  return v92 - __readfsqword(0x28u);
}
