__int64 __fastcall sub_4BF8B0(
        const __m128i *a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v9; // r14
  const char *v10; // r12
  const char *v11; // rdx
  int v12; // ecx
  char *v13; // rbx
  int v14; // r8d
  __int64 v15; // rbp
  QT::QMessageBox *v16; // rax
  const char *v17; // rsi
  const __m128i *v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  _QWORD *v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  size_t v35; // r13
  __int64 v36; // r15
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  char *v42; // rbx
  char *v43; // r13
  char *v44; // r12
  char *v45; // rsi
  __int64 v46; // r12
  unsigned __int64 v47; // r14
  char *v48; // rax
  __int64 v49; // r14
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __m128 v56; // xmm4
  __m128 v57; // xmm5
  QT::QPushButton *v58; // rbx
  __int64 v59; // rax
  bool v60; // zf
  __int64 v61; // rsi
  QT::QAbstractButton *v62; // rax
  char isChecked; // al
  __int64 v65; // r10
  unsigned int v66; // esi
  const char **v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rbx
  const char *v70; // rax
  char *v71; // rdi
  __int64 v72; // rbx
  size_t v73; // rax
  size_t v74; // r13
  size_t v75; // r14
  __int64 v76; // rbx
  _BOOL4 v77; // ebp
  __m128 *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  QT::QMessageBox *v81; // [rsp+0h] [rbp-2988h]
  QT::QMessageBox *v82; // [rsp+0h] [rbp-2988h]
  QT::QMessageBox *v83; // [rsp+0h] [rbp-2988h]
  const __m128i *v84; // [rsp+8h] [rbp-2980h]
  _QWORD *v85; // [rsp+8h] [rbp-2980h]
  __int64 v86; // [rsp+8h] [rbp-2980h]
  const char *v87; // [rsp+10h] [rbp-2978h]
  int v88; // [rsp+2Ch] [rbp-295Ch] BYREF
  char *s; // [rsp+30h] [rbp-2958h] BYREF
  __m128 v90; // [rsp+38h] [rbp-2950h]
  __int64 (__fastcall **v91)(); // [rsp+50h] [rbp-2938h] BYREF
  __m128i v92; // [rsp+58h] [rbp-2930h] BYREF
  __int64 v93; // [rsp+78h] [rbp-2910h]
  __int64 v94; // [rsp+80h] [rbp-2908h]
  _QWORD v95[3]; // [rsp+A0h] [rbp-28E8h] BYREF
  int v96; // [rsp+B8h] [rbp-28D0h]
  __int64 v97; // [rsp+C0h] [rbp-28C8h]
  __int64 v98; // [rsp+C8h] [rbp-28C0h]
  __int64 v99; // [rsp+D8h] [rbp-28B0h]
  __int64 v100; // [rsp+E0h] [rbp-28A8h]
  __int64 v101; // [rsp+100h] [rbp-2888h] BYREF
  unsigned __int64 v102; // [rsp+108h] [rbp-2880h]
  char v103; // [rsp+118h] [rbp-2870h]
  __m128 v104; // [rsp+128h] [rbp-2860h]
  __int64 v105; // [rsp+138h] [rbp-2850h]
  char v106[10248]; // [rsp+140h] [rbp-2848h] BYREF
  unsigned __int64 v107; // [rsp+2948h] [rbp-40h]

  v9 = (const char *)a1[3].m128i_i64[0];
  v10 = (const char *)a1[4].m128i_i64[1];
  v107 = __readfsqword(0x28u);
  v11 = (const char *)a1[1].m128i_i64[1];
  v12 = a1[10].m128i_i32[3];
  v13 = (char *)a1[6].m128i_i64[0];
  v14 = a1[11].m128i_i32[0];
  v15 = a1[10].m128i_i32[2];
  v16 = (QT::QMessageBox *)a1[7].m128i_i64[1];
  if ( !v9 || *v9 )
  {
    if ( !v10 )
      goto LABEL_6;
  }
  else
  {
    v9 = "~Y~es";
    if ( !v10 )
    {
      v9 = "OK";
      goto LABEL_6;
    }
  }
  if ( !*v10 )
    v10 = "~N~o";
LABEL_6:
  if ( v13 && !*v13 )
    v13 = "~C~ancel";
  if ( *(_BYTE *)v16 == 37 && *((_BYTE *)v16 + 1) == 115 && !*((_BYTE *)v16 + 2) )
  {
    a2 = (__m128)_mm_loadu_si128(a1 + 9);
    v18 = a1 + 9;
    v104 = a2;
    v65 = a1[10].m128i_i64[0];
    v66 = _mm_cvtsi128_si32((__m128i)a2);
    v105 = v65;
    if ( v66 > 0x2F )
    {
      v67 = (const char **)v104.m128_u64[1];
      v104.m128_u64[1] += 8LL;
    }
    else
    {
      v104.m128_i32[0] = v66 + 8;
      v67 = (const char **)(v65 + v66);
    }
    v17 = *v67;
  }
  else
  {
    v17 = (const char *)a1[7].m128i_i64[1];
    v18 = a1 + 9;
  }
  v84 = v18;
  v81 = v16;
  sub_4BF5C0((__int64)v95, v17, v11, v12, v14, *(double *)a2.m128_u64, a3, a4, a5, a6, a7, a8, a9);
  qvsnprintf(v106, 10240, v81, v84, v19, v20);
  sub_4BEF60(&v101, nullptr, v106);
  strrpl(v106, 3, 32);
  v87 = sub_4BF130((__int64)v95, v106, a2, a3, a4, a5, v21, v22, a8, a9);
  v28 = QT::QCoreApplication::self;
  if ( !QT::QCoreApplication::self )
  {
    v61 = (__int64)*(&off_86D1C0 + v96);
    sub_169700(
      (int)"[%s] %s -> Cancel\n",
      v61,
      (__int64)v87,
      v23,
      v24,
      v25,
      a2,
      a3,
      a4,
      a5,
      v26,
      v27,
      a8,
      a9,
      (char)v81);
    v15 = -1;
    goto LABEL_63;
  }
  v85 = QT::QCoreApplication::self + 2;
  LOBYTE(v82) = (*(__int64 (__fastcall **)(_QWORD *, int *, _QWORD *))(QT::QCoreApplication::self[2] + 184LL))(
                  QT::QCoreApplication::self + 2,
                  &v88,
                  v95);
  if ( (_BYTE)v82 )
  {
    v15 = v88;
    sub_169700((int)"[autohidden] ", (__int64)&v88, v29, v30, v31, v32, a2, a3, a4, a5, v33, v34, a8, a9, (char)v82);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(v28[2] + 160LL))(v85) != 1 || (_BYTE)v82 )
  {
    s = nullptr;
    a2 = 0;
    v90 = 0;
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        if ( v9 )
        {
          v13 = (char *)v9;
          v35 = strlen(v9);
          v36 = v35 + 1;
        }
        else
        {
          v36 = 4;
          v35 = 3;
          v13 = "Yes";
        }
      }
      else if ( (_DWORD)v15 == -1 )
      {
        if ( v13 )
        {
          v35 = strlen(v13);
          v36 = v35 + 1;
        }
        else
        {
          v36 = 7;
          v35 = 6;
          v13 = "Cancel";
        }
      }
      else
      {
        v36 = 2;
        v35 = 1;
        v13 = "?";
      }
    }
    else if ( v10 )
    {
      v13 = (char *)v10;
      v35 = strlen(v10);
      v36 = v35 + 1;
    }
    else
    {
      v36 = 3;
      v35 = 2;
      v13 = "No";
    }
    s = (char *)qvector_reserve(&s, 0, v36, 1);
    v90.m128_u64[0] = v36;
    memmove(s, v13, v35);
    s[v35] = 0;
    if ( (_BYTE)v82 )
    {
      a2 = 0;
      v42 = nullptr;
      v91 = nullptr;
      v92 = 0;
      v43 = (char *)&s1;
      if ( v90.m128_u64[0] )
      {
        v43 = s;
        v42 = strchr(s, 126);
      }
      v44 = v43;
      v45 = nullptr;
      while ( v42 )
      {
        if ( v42 != v44 )
        {
          v49 = v92.m128i_i64[0];
          v50 = v42 - v44;
          if ( v92.m128i_i64[0] )
          {
            v49 = v92.m128i_i64[0] - 1;
            v50 = v42 - v44 + v92.m128i_i64[0] - 1;
          }
          v51 = v50 + 1;
          if ( v92.m128i_i64[1] < (unsigned __int64)(v50 + 1) )
          {
            v86 = v50;
            v82 = (QT::QMessageBox *)(v50 + 1);
            v91 = (__int64 (__fastcall **)())qvector_reserve(&v91, v45, v51, 1);
            v50 = v86;
            v45 = (char *)v91;
            v51 = (__int64)v82;
          }
          v92.m128i_i64[0] = v51;
          v45[v50] = 0;
          memmove((char *)v91 + v49, v44, v42 - v44);
          v45 = (char *)v91;
        }
        v46 = v92.m128i_i64[0];
        v47 = 1;
        if ( v92.m128i_i64[0] )
        {
          v47 = v92.m128i_i64[0];
          v46 = v92.m128i_i64[0] - 1;
        }
        if ( v92.m128i_i64[1] < v47 )
        {
          v91 = (__int64 (__fastcall **)())qvector_reserve(&v91, v45, v47, 1);
          v45 = (char *)v91;
        }
        v92.m128i_i64[0] = v47;
        v45[v46] = 0;
        v44 = v42 + 1;
        v48 = strchr(v42 + 1, 126);
        v45 = (char *)v91;
        v42 = v48;
      }
      if ( v44 == v43 )
      {
        v71 = v45;
      }
      else
      {
        if ( *v44 && v44 )
        {
          v72 = v92.m128i_i64[0];
          LOBYTE(v82) = (_BYTE)v45;
          v73 = strlen(v44);
          v74 = v73;
          v75 = v73;
          if ( v72 )
          {
            --v72;
            v75 = v73 + v72;
          }
          if ( v92.m128i_i64[1] < v75 + 1 )
          {
            v91 = (__int64 (__fastcall **)())qvector_reserve(&v91, v45, v75 + 1, 1);
            v45 = (char *)v91;
          }
          v92.m128i_i64[0] = v75 + 1;
          v45[v75] = 0;
          memmove((char *)v91 + v72, v44, v74);
          v45 = (char *)v91;
        }
        v71 = s;
        s = v45;
        a2 = (__m128)_mm_loadu_si128(&v92);
        v91 = (__int64 (__fastcall **)())v71;
        v92.m128i_i64[1] = v90.m128_i64[1];
        v90 = a2;
      }
      if ( v71 )
      {
        v92.m128i_i64[0] = 0;
        *(double *)a2.m128_u64 = qfree(v71, v45);
      }
      v13 = (char *)&s1;
      if ( v90.m128_u64[0] )
        v13 = s;
    }
    v61 = (__int64)v87;
    sub_169700(
      (int)"%s -> %s\n",
      (__int64)v87,
      (__int64)v13,
      v37,
      v38,
      v39,
      a2,
      a3,
      a4,
      a5,
      v40,
      v41,
      a8,
      a9,
      (char)v82);
    if ( s )
    {
      v90.m128_u64[0] = 0;
      *(double *)a2.m128_u64 = qfree(s, v87);
    }
    goto LABEL_63;
  }
  v83 = (QT::QMessageBox *)&v91;
  sub_517320((QT::QWidget *)&v91);
  if ( v103 )
  {
    if ( (_DWORD)v15 == -1 )
    {
      if ( !v9 )
      {
        if ( v10 )
        {
          v80 = sub_517290(&v91, &stru_10000, v10);
          LODWORD(v15) = 0;
          v10 = (const char *)v80;
          if ( v102 <= 1 )
          {
            if ( v80 )
            {
LABEL_92:
              QT::QMessageBox::setEscapeButton(&v91, &stru_10000);
              if ( !(_DWORD)v15 )
              {
                v58 = (QT::QPushButton *)v10;
                goto LABEL_96;
              }
              if ( (_DWORD)v15 != 1 )
              {
LABEL_51:
                v59 = dword_8C3000;
                LOBYTE(s) = 0;
                v60 = dword_8C3000 == 0;
                if ( dword_8C3000 >= 0 )
                  goto LABEL_52;
LABEL_97:
                v68 = (*(__int64 (__fastcall **)(_QWORD *))(v28[2] + 88LL))(v85);
                v61 = 0;
                v69 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v68 + 72LL))(v68, 0);
                QT::QDialog::exec((QT::QDialog *)&v91);
                if ( v69 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 8LL))(v69);
                goto LABEL_99;
              }
              goto LABEL_94;
            }
            goto LABEL_119;
          }
LABEL_134:
          sub_517100(&v91, &v101);
          goto LABEL_91;
        }
        if ( v102 <= 1 )
          goto LABEL_51;
LABEL_140:
        sub_517100(&v91, &v101);
        goto LABEL_119;
      }
      v79 = sub_517290(&v91, 0x4000, v9);
      v9 = (const char *)v79;
      if ( v10 )
      {
        v10 = (const char *)sub_517290(&v91, &stru_10000, v10);
        LODWORD(v15) = 0;
LABEL_90:
        if ( v102 <= 1 )
          goto LABEL_91;
        goto LABEL_134;
      }
      LODWORD(v15) = 0;
      if ( v102 > 1 )
      {
LABEL_143:
        sub_517100(&v91, &v101);
        goto LABEL_84;
      }
      if ( v79 )
      {
LABEL_85:
        QT::QMessageBox::setEscapeButton(&v91, 0x4000);
        if ( (_DWORD)v15 == 1 )
        {
          v58 = (QT::QPushButton *)v9;
          v10 = nullptr;
          goto LABEL_96;
        }
        goto LABEL_86;
      }
    }
    else
    {
      if ( v9 )
      {
        v9 = (const char *)sub_517290(&v91, 0x4000, v9);
        v13 = nullptr;
        if ( v10 )
          goto LABEL_44;
        goto LABEL_83;
      }
      if ( v10 )
      {
        v10 = (const char *)sub_517290(&v91, &stru_10000, v10);
        goto LABEL_90;
      }
      if ( v102 > 1 )
        goto LABEL_140;
    }
LABEL_119:
    v9 = nullptr;
LABEL_86:
    v10 = nullptr;
    goto LABEL_51;
  }
  if ( !v9 )
  {
    if ( !v10 )
    {
      if ( !v13 )
      {
        if ( v102 > 1 )
          sub_517100(&v91, &v101);
LABEL_118:
        v9 = nullptr;
        v10 = nullptr;
        if ( (_DWORD)v15 == -1 )
          goto LABEL_51;
        goto LABEL_119;
      }
      goto LABEL_45;
    }
LABEL_44:
    v10 = (const char *)sub_517290(&v91, &stru_10000, v10);
    if ( v13 )
      goto LABEL_45;
    goto LABEL_90;
  }
  v9 = (const char *)sub_517290(&v91, 0x4000, v9);
  if ( v10 )
    goto LABEL_44;
  if ( !v13 )
  {
LABEL_83:
    if ( v102 <= 1 )
      goto LABEL_84;
    goto LABEL_143;
  }
LABEL_45:
  v58 = (QT::QPushButton *)sub_517290(&v91, 0x400000, v13);
  if ( v102 > 1 )
    sub_517100(&v91, &v101);
  if ( !v58 )
  {
LABEL_91:
    if ( v10 )
      goto LABEL_92;
LABEL_84:
    if ( v9 )
      goto LABEL_85;
    goto LABEL_118;
  }
  QT::QMessageBox::setEscapeButton(&v91, 0x400000);
  if ( !(_DWORD)v15 )
  {
    v58 = (QT::QPushButton *)v10;
LABEL_95:
    if ( v58 )
      goto LABEL_96;
    goto LABEL_51;
  }
  if ( (_DWORD)v15 == 1 )
  {
LABEL_94:
    v58 = (QT::QPushButton *)v9;
    goto LABEL_95;
  }
  if ( (_DWORD)v15 != -1 )
    goto LABEL_51;
LABEL_96:
  QT::QWidget::setFocus(v58, 7);
  QT::QMessageBox::setDefaultButton((QT::QMessageBox *)&v91, v58);
  v59 = dword_8C3000;
  LOBYTE(s) = 0;
  v60 = dword_8C3000 == 0;
  if ( dword_8C3000 < 0 )
    goto LABEL_97;
LABEL_52:
  if ( v60 )
  {
    LOBYTE(s) = 1;
    goto LABEL_54;
  }
  v76 = 1000000 * v59;
  v77 = 1000000 * v59 > 1999999999;
  v78 = (__m128 *)operator new(0x20u);
  v78->m128_i32[0] = 1;
  v61 = v77;
  v78->m128_u64[1] = (unsigned __int64)sub_4BEE20;
  a3 = (__m128)(unsigned __int64)&v91;
  a2 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)&s, (__m128i)(unsigned __int64)&v91);
  v78[1] = a2;
  QT::QTimer::singleShotImpl(v76, v77, &v91);
  if ( dword_8C3000 )
    goto LABEL_97;
LABEL_99:
  if ( !(_BYTE)s )
  {
LABEL_100:
    v70 = (const char *)QT::QMessageBox::clickedButton(v83);
    v15 = 1;
    if ( v70 != v9 )
      v15 = -(v70 != v10);
    goto LABEL_56;
  }
LABEL_54:
  v61 = (__int64)v87;
  sub_169700((int)"%s\n", (__int64)v87, v52, v53, v54, v55, a2, a3, a4, a5, v56, v57, a8, a9, (char)&v91);
  if ( !(_BYTE)s )
    goto LABEL_100;
  v15 = -1;
LABEL_56:
  if ( QT::QMessageBox::checkBox(v83) )
  {
    v62 = (QT::QAbstractButton *)QT::QMessageBox::checkBox(v83);
    isChecked = QT::QAbstractButton::isChecked(v62);
    if ( (_DWORD)v15 != -1 )
    {
      if ( isChecked )
      {
        v61 = (__int64)v95;
        (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD))(v28[2] + 192LL))(v85, v95, (unsigned int)v15);
      }
    }
  }
  v91 = &message_box_t___vtable;
  v92.m128i_i64[1] = (__int64)message_box_t___vtable_at__16;
  if ( v93 )
  {
    v94 = 0;
    *(double *)a2.m128_u64 = qfree(v93, (const char *)v61);
  }
  QT::QMessageBox::~QMessageBox(v83);
LABEL_63:
  if ( v101 )
  {
    v102 = 0;
    *(double *)a2.m128_u64 = qfree(v101, (const char *)v61, *(double *)a2.m128_u64);
  }
  if ( v99 )
  {
    v100 = 0;
    *(double *)a2.m128_u64 = qfree(v99, (const char *)v61, *(double *)a2.m128_u64);
  }
  if ( v97 )
  {
    v98 = 0;
    *(double *)a2.m128_u64 = qfree(v97, (const char *)v61, *(double *)a2.m128_u64);
  }
  if ( v95[0] )
  {
    v95[1] = 0;
    qfree(v95[0], (const char *)v61, *(double *)a2.m128_u64);
  }
  return v15;
}
