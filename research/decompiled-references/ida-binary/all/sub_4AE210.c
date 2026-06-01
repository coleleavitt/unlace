__int64 __fastcall sub_4AE210(
        char *a1,
        __int64 a2,
        __int64 *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // r12d
  char v16; // r14
  __int64 *v17; // rax
  QT::QWidget *v18; // rcx
  __int64 (__fastcall *v19)(__int64, size_t *); // rax
  const void *v20; // r8
  __int64 (__fastcall *v21)(__int64, __int64 **); // rax
  const void *v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdi
  __int64 *v26; // rsi
  __int64 v27; // rax
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rbp
  int v31; // eax
  const char *v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // r12
  __int64 v35; // rbx
  __int64 *v36; // rbp
  __int64 v37; // rdi
  __int64 v38; // rbp
  __int64 v39; // rdx
  __int64 v40; // r12
  __int64 v41; // rbx
  __int64 *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // r12
  __int64 v46; // rbx
  __int64 *v47; // rax
  __int64 v48; // rdi
  __int64 v50; // rax
  __int64 v51; // rbx
  char v52; // dl
  __int64 v53; // rax
  __int64 (__fastcall *v54)(char *, __int64); // rcx
  unsigned __int64 v55; // r12
  __int64 v56; // r14
  __int64 v57; // r13
  const char *v58; // rbx
  __int64 v59; // rdi
  __int64 (*v60)(); // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // r12
  void (*v63)(); // rax
  __int64 v64; // rax
  __int64 v65; // rsi
  int v66; // eax
  const char *v67; // rsi
  int v68; // eax
  __int64 (__fastcall *v69)(__int64); // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 (__fastcall *v72)(__int64); // rax
  unsigned __int64 (__fastcall *v73)(__int64); // rax
  QT::QAbstractScrollArea *v74; // rsi
  double v75; // xmm4_8
  double v76; // xmm5_8
  __int64 v77; // rdi
  __int64 v78; // rbp
  __int64 v79; // rbx
  __int64 *v80; // r13
  const char *v81; // rsi
  __int64 v83; // [rsp+8h] [rbp-1C0h]
  __int64 v84; // [rsp+8h] [rbp-1C0h]
  QT::QWidget *v85; // [rsp+10h] [rbp-1B8h]
  QT::QWidget *v86; // [rsp+10h] [rbp-1B8h]
  __int64 v87; // [rsp+10h] [rbp-1B8h]
  const void *v88; // [rsp+18h] [rbp-1B0h]
  __int64 v89; // [rsp+27h] [rbp-1A1h] BYREF
  char v90; // [rsp+2Fh] [rbp-199h]
  __int64 (__fastcall **v91)(); // [rsp+30h] [rbp-198h] BYREF
  __int128 v92; // [rsp+38h] [rbp-190h]
  __int128 v93; // [rsp+48h] [rbp-180h] BYREF
  size_t n; // [rsp+60h] [rbp-168h] BYREF
  __int128 v95; // [rsp+68h] [rbp-160h]
  __int64 v96; // [rsp+78h] [rbp-150h]
  __int128 v97; // [rsp+80h] [rbp-148h]
  __m128i si128; // [rsp+90h] [rbp-138h]
  void *v99[2]; // [rsp+A0h] [rbp-128h]
  __int64 v100; // [rsp+B0h] [rbp-118h]
  int v101; // [rsp+B8h] [rbp-110h]
  __int64 *v102; // [rsp+C0h] [rbp-108h] BYREF
  __m128i v103; // [rsp+C8h] [rbp-100h]
  __int64 v104; // [rsp+D8h] [rbp-F0h]
  __int128 v105; // [rsp+E0h] [rbp-E8h]
  __int64 v106; // [rsp+F0h] [rbp-D8h]
  __int64 v107; // [rsp+108h] [rbp-C0h]
  __int64 v108; // [rsp+110h] [rbp-B8h]
  __int64 v109; // [rsp+120h] [rbp-A8h]
  __int64 v110; // [rsp+128h] [rbp-A0h]
  __int64 v111; // [rsp+138h] [rbp-90h]
  __int64 v112; // [rsp+140h] [rbp-88h]
  __int64 v113; // [rsp+150h] [rbp-78h]
  __int64 v114; // [rsp+158h] [rbp-70h]
  __int64 v115; // [rsp+168h] [rbp-60h]
  __int64 v116; // [rsp+170h] [rbp-58h]
  int v117; // [rsp+180h] [rbp-48h]
  unsigned __int64 v118; // [rsp+188h] [rbp-40h]

  v118 = __readfsqword(0x28u);
  v13 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  v14 = (__int64)a1;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 8LL))(v13, a1);
  v15 = *((_DWORD *)a1 + 3);
  v16 = v15 & 1;
  if ( !batch )
  {
    if ( v16 )
    {
      if ( !(unsigned __int8)sub_49EF20((__int64)a1, (__int64)a1, a4) )
        return -2;
      goto LABEL_15;
    }
LABEL_3:
    v17 = sub_4A0300(*((const char **)a1 + 5));
    v18 = (QT::QWidget *)v17;
    if ( !v17 )
      goto LABEL_13;
    v83 = v17[299];
    v19 = *(__int64 (__fastcall **)(__int64, size_t *))(*(_QWORD *)a1 + 24LL);
    if ( v19 == addon_chooser_t__::vfunc_3 )
    {
      n = 0;
      v20 = nullptr;
    }
    else
    {
      v85 = v18;
      v64 = v19((__int64)a1, &n);
      v18 = v85;
      v20 = (const void *)v64;
    }
    v21 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v83 + 24LL);
    if ( (char *)v21 == (char *)addon_chooser_t__::vfunc_3 )
    {
      v102 = nullptr;
      v14 = 0;
      v22 = nullptr;
    }
    else
    {
      v88 = v20;
      v86 = v18;
      v22 = (const void *)v21(v83, &v102);
      v14 = (__int64)v102;
      v20 = v88;
      v18 = v86;
    }
    if ( n )
    {
      if ( v14 == n )
      {
        v14 = (__int64)v22;
        v87 = (__int64)v18;
        v66 = memcmp(v20, v22, n);
        v18 = (QT::QWidget *)v87;
        if ( !v66 )
        {
          v102 = nullptr;
          LOBYTE(v106) = 0;
          v104 = 0;
          v103 = 0;
          v105 = 0;
          (*(void (__fastcall **)(__int64, __int64 **, __int64))(*(_QWORD *)v87 + 624LL))(v87, &v102, 7);
          v67 = (const char *)v87;
          sub_479090((__int64)(QT::QCoreApplication::self + 2), (QT::QObject *)v87);
          v68 = *((_DWORD *)a1 + 3);
          if ( (v68 & 0x80u) != 0 )
          {
            sub_49EF20(v83, v87, 0.0);
            v69 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 616LL);
            if ( v69 == sub_4ADEB0 )
            {
              sub_4DEC50(v87 + 104);
              v70 = v87;
              v71 = *(_QWORD *)(v87 + 2384);
              *(_BYTE *)(v87 + 2024) = 0;
              *(_QWORD *)(v87 + 1792) = -1;
              if ( v71 )
                *(_DWORD *)(v71 + 216) = 15;
            }
            else
            {
              v69(v87);
              v70 = v87;
            }
            v72 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 560LL);
            if ( v72 == sub_4A88B0 )
            {
              v84 = v70;
              vault_files_dirtree_widget_t__::vfunc_30(v70 + 104);
              v73 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v84 + 568LL);
              if ( v73 == sub_4A76D0 )
              {
                if ( *(_DWORD *)(v84 + 2376) == 2 )
                  v74 = *(QT::QAbstractScrollArea **)(v84 + 2384);
                else
                  v74 = *(QT::QAbstractScrollArea **)(v84 + 2472);
                sub_4A72C0(v84, v74);
              }
              else
              {
                ((void (__fastcall *)(__int64, __int64 **))v73)(v84, &v102);
              }
            }
            else
            {
              v84 = v70;
              ((void (__fastcall *)(__int64, __int64 **, _QWORD))v72)(v70, &v102, 0);
            }
            v67 = (const char *)a2;
            sub_4A8BF0(v84, a2, 1u, 0.0, a5, a6, a7, v75, v76, a10, a11);
            v68 = *((_DWORD *)a1 + 3);
          }
          if ( (v68 & 2) == 0 && a1 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
          sub_4DE2C0();
          v77 = (__int64)v102;
          if ( v102 )
          {
            v78 = v103.m128i_i64[0];
            if ( v103.m128i_i64[0] )
            {
              v79 = 0;
              do
              {
                ++v79;
                sub_4DE2C0();
                v77 = (__int64)v102;
              }
              while ( v78 != v79 );
            }
            v103.m128i_i64[0] = 0;
            qfree(v77, v67);
          }
          return -3;
        }
      }
    }
    v23 = *((_DWORD *)v18 + 502);
    if ( (v23 & 2) != 0 )
    {
LABEL_13:
      if ( (unsigned __int8)sub_49EF20((__int64)a1, v14, a4) )
        goto LABEL_15;
LABEL_14:
      if ( a1[12] >= 0 )
        goto LABEL_15;
      return -2;
    }
    if ( (v23 & 1) != 0 )
    {
      QT::QWidget::close(v18);
      goto LABEL_13;
    }
    v65 = (__int64)v18;
    sub_482660((__int64)(QT::QCoreApplication::self + 2), v18, 1u);
    if ( !(unsigned __int8)sub_49EF20((__int64)a1, v65, a4) )
      goto LABEL_14;
LABEL_15:
    sub_4A3550((__int64 *)&v102, (__int64)a1, nullptr, 0);
    v24 = v117 | 0x1F0;
    if ( (a1[13] & 4) == 0 )
      v24 = v117 | 0x70;
    v117 = v24;
    v25 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
    if ( !a3 )
      a3 = (__int64 *)&v102;
    v26 = a3;
    v27 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 16LL))(v25, a3);
    v30 = v27;
    if ( v27 )
      sub_4DF8B0(v27 + 104, v26);
    sub_4A8BF0(v30, a2, v15 & 1, a4, a5, a6, a7, v28, v29, a10, a11);
    if ( !v16 )
    {
      v31 = *((_DWORD *)a1 + 3);
      v32 = (const char *)v30;
      n = 0;
      v95 = 0;
      v97 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
      *(_OWORD *)v99 = 0;
      v96 = 0;
      v101 = (v31 & 0x20000) == 0 ? 0x400000 : 4194308;
      v100 = 0;
      (*(void (__fastcall **)(_QWORD *, __int64, size_t *))(QT::QCoreApplication::self[2] + 120LL))(
        QT::QCoreApplication::self + 2,
        v30,
        &n);
      if ( v99[0] && !_InterlockedSub((volatile signed __int32 *)v99[0], 1u) )
        free(v99[0]);
      v33 = v96;
      if ( v96 )
      {
        v34 = v97;
        if ( (_QWORD)v97 )
        {
          v35 = 0;
          do
          {
            v36 = (__int64 *)(v33 + 40 * v35);
            jvalue_t_clear(v36 + 3);
            v37 = *v36;
            if ( *v36 )
            {
              v36[1] = 0;
              qfree(v37, v32);
            }
            ++v35;
            v33 = v96;
          }
          while ( v34 != v35 );
        }
        *(_QWORD *)&v97 = 0;
        qfree(v33, v32);
      }
      if ( n )
      {
        *(_QWORD *)&v95 = 0;
        qfree(n, v32);
      }
      v38 = 0;
      goto LABEL_35;
    }
    sub_5266A0((QT::QWidget *)&n);
    v50 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(QT::QCoreApplication::self[2] + 88LL))(
            QT::QCoreApplication::self + 2,
            v30);
    v32 = nullptr;
    v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v50 + 72LL))(v50, 0);
    sub_53AB40((QT::QWidget *)&n);
    if ( v51 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
    if ( *(_DWORD *)(v30 + 2104) == 1 )
    {
      QT::QEvent::QEvent(&v91, 2006);
      v91 = &ISaveStateEvent___vtable;
      sub_51B5E0(v30, &v91);
      v91 = &ISaveStateEvent___vtable;
      QT::QEvent::~QEvent((QT::QEvent *)&v91);
      if ( !*(_DWORD *)(v30 + 2376) )
      {
        v32 = nullptr;
        v38 = sub_49A5E0(*(QT::QAbstractItemView **)(v30 + 2472), 0);
        goto LABEL_67;
      }
      v92 = 0;
      v91 = nullptr;
      v93 = -1;
      sub_48FF00(*(QT::QAbstractItemView **)(v30 + 2384), nullptr, (__int64 *)&v91, 8, 0);
      v32 = **(const char ***)(v30 + 2440);
      v90 = 0;
      v89 = -1;
      dirtree_resolve_cursor(&v89, v32, &v93);
      v56 = v89;
      if ( !v90 )
      {
        v57 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v30 + 2392) + 40LL))(*(_QWORD *)(v30 + 2392));
        if ( v57 )
        {
          v58 = nullptr;
          while ( 1 )
          {
            v59 = *(_QWORD *)(v30 + 2392);
            v60 = *(__int64 (**)())(*(_QWORD *)v59 + 136LL);
            v61 = -1;
            if ( v60 != addon_chooser_t__::vfunc_17 )
            {
              v32 = v58;
              v61 = ((__int64 (__fastcall *)(__int64, const char *, __int64 (*)(), __int64 (*)()))v60)(
                      v59,
                      v58,
                      v60,
                      addon_chooser_t__::vfunc_17);
            }
            if ( v56 == v61 )
              break;
            if ( (const char *)v57 == ++v58 )
              goto LABEL_118;
          }
          v38 = (__int64)v58;
          if ( v91 )
          {
            *(_QWORD *)&v92 = 0;
            qfree(v91, v32, v60, addon_chooser_t__::vfunc_17);
          }
          goto LABEL_67;
        }
      }
LABEL_118:
      if ( v91 )
      {
        *(_QWORD *)&v92 = 0;
        qfree(v91, v32);
      }
    }
    v38 = -1;
LABEL_67:
    n = (size_t)&ui_dialog_t___vtable;
    *((_QWORD *)&v95 + 1) = ui_dialog_t___vtable_at__16;
    QT::QDialog::~QDialog((QT::QDialog *)&n);
LABEL_35:
    if ( v115 )
    {
      v116 = 0;
      qfree(v115, v32);
    }
    if ( v113 )
    {
      v114 = 0;
      qfree(v113, v32);
    }
    v39 = v111;
    if ( v111 )
    {
      v40 = v112;
      if ( v112 )
      {
        v41 = 0;
        do
        {
          v42 = (__int64 *)(v39 + 24 * v41);
          v43 = *v42;
          if ( *v42 )
          {
            v42[1] = 0;
            qfree(v43, v32);
            v39 = v111;
          }
          ++v41;
        }
        while ( v40 != v41 );
      }
      v112 = 0;
      qfree(v39, v32);
    }
    v44 = v109;
    if ( v109 )
    {
      v45 = v110;
      if ( v110 )
      {
        v46 = 0;
        do
        {
          v47 = (__int64 *)(v44 + 24 * v46);
          v48 = *v47;
          if ( *v47 )
          {
            v47[1] = 0;
            qfree(v48, v32);
            v44 = v109;
          }
          ++v46;
        }
        while ( v45 != v46 );
      }
      v110 = 0;
      qfree(v44, v32);
    }
    if ( v107 )
    {
      v108 = 0;
      qfree(v107, v32);
    }
    if ( *((_QWORD *)&v105 + 1) )
    {
      v106 = 0;
      qfree(*((_QWORD *)&v105 + 1), v32);
    }
    if ( v103.m128i_i64[1] )
    {
      v104 = 0;
      qfree(v103.m128i_i64[1], v32);
    }
    return v38;
  }
  if ( !v16 )
    goto LABEL_3;
  v52 = sub_49EF20((__int64)a1, (__int64)a1, a4);
  v53 = *(_QWORD *)a1;
  if ( !v52 )
  {
    v38 = -2;
    goto LABEL_82;
  }
  v54 = *(__int64 (__fastcall **)(char *, __int64))(v53 + 72);
  if ( (a1[12] & 4) == 0 )
  {
    if ( (char *)v54 == (char *)addon_chooser_t__::vfunc_9 )
    {
      v38 = *(_QWORD *)a2;
    }
    else
    {
      v38 = v54(a1, a2);
      v53 = *(_QWORD *)a1;
    }
    goto LABEL_82;
  }
  v102 = nullptr;
  v103 = 0;
  if ( (char *)v54 != (char *)exc_chooser_t__::vfunc_9 )
  {
    v81 = (const char *)&v102;
    ((void (__fastcall *)(char *, __int64 **, __int64))v54)(a1, &v102, a2);
    v80 = v102;
    if ( !v103.m128i_i64[0] )
    {
      v38 = -1;
LABEL_128:
      if ( v80 )
      {
        v103.m128i_i64[0] = 0;
        qfree(v80, v81);
      }
      goto LABEL_72;
    }
LABEL_127:
    v38 = *v80;
    goto LABEL_128;
  }
  v38 = -1;
  v55 = *(_QWORD *)(a2 + 8);
  if ( v55 )
  {
    v80 = (__int64 *)qalloc_or_throw(8 * v55);
    v81 = *(const char **)a2;
    memcpy(v80, *(const void **)a2, 8 * v55);
    v102 = v80;
    v103 = _mm_unpacklo_epi64((__m128i)v55, (__m128i)v55);
    goto LABEL_127;
  }
LABEL_72:
  v53 = *(_QWORD *)a1;
LABEL_82:
  v62 = (*(__int64 (__fastcall **)(char *))(v53 + 40))(a1);
  v63 = *(void (**)())(*(_QWORD *)a1 + 64LL);
  if ( v63 != nullsub_4 )
    ((void (__fastcall *)(char *))v63)(a1);
  if ( (a1[12] & 2) == 0 && a1 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  if ( v38 >= 0 && v38 >= v62 )
    return v62 - 1;
  return v38;
}
