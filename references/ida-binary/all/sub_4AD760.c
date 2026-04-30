__int64 __fastcall chooser_widget_t__::vfunc_5(
        __int64 a1,
        QT::QEvent *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 result; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned __int16 v18; // ax
  bool v19; // zf
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __m128 v22; // xmm1
  __m128i v23; // xmm0
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r13
  __int64 v27; // r13
  __int64 v28; // r12
  unsigned int v29; // eax
  double v30; // xmm4_8
  double v31; // xmm5_8
  void (*v32)(); // rdx
  void (*v33)(); // rax
  __int64 *v34; // rax
  int v35; // ecx
  unsigned __int64 v36; // r15
  const char *v37; // r14
  __int64 v38; // r12
  unsigned __int64 v39; // r14
  double v40; // xmm4_8
  double v41; // xmm5_8
  __int64 v42; // rax
  int v43; // esi
  double v44; // xmm4_8
  double v45; // xmm5_8
  __int64 v46; // rdi
  __int64 (__fastcall *v47)(__int64, size_t *); // rax
  int v48; // eax
  const char *v49; // rdx
  _BYTE *v50; // rax
  void *v51; // r13
  const void *v52; // r12
  void *v53; // r13
  double v54; // xmm0_8
  unsigned __int8 *v55; // r12
  __int64 v56; // r14
  unsigned int *v57; // r15
  unsigned __int8 *v58; // r13
  __int64 v59; // rax
  __int64 *v60; // rdi
  const char *v61; // rdx
  unsigned int *v62; // r12
  __int64 v63; // r14
  const char *v64; // rsi
  __int64 v65; // r12
  unsigned int *v66; // rsi
  char *s1; // [rsp+0h] [rbp-A8h]
  int v68; // [rsp+Ch] [rbp-9Ch]
  size_t n; // [rsp+18h] [rbp-90h] BYREF
  void *dest[4]; // [rsp+20h] [rbp-88h] BYREF
  int v71[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v72; // [rsp+48h] [rbp-60h]
  __int64 v73; // [rsp+58h] [rbp-50h]
  unsigned __int64 v74; // [rsp+68h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  result = sub_4E1470(a1 + 104, a1, a2);
  if ( !(_BYTE)result )
  {
    v18 = *((_WORD *)a2 + 4);
    if ( v18 != 2004 )
    {
      if ( v18 > 0x7D4u )
      {
        if ( v18 != 2005 )
        {
          if ( v18 == 2006 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 680LL))(a1);
          return QT::QWidget::event((QT::QWidget *)a1, a2);
        }
        v34 = *((__int64 **)a2 + 2);
        v35 = *(_DWORD *)(a1 + 2376);
        v36 = v34[1];
        v68 = v35;
        if ( v35 )
        {
          v37 = "full_tree";
          if ( v35 == 1 )
            v37 = "folders_only";
          s1 = (char *)v37;
          if ( !v36 )
          {
LABEL_41:
            v43 = 1;
            if ( strcmp(s1, "folders_only") )
            {
              if ( !strcmp(s1, "full_tree") )
                v43 = 2;
              else
                v43 = -1;
            }
LABEL_37:
            if ( v68 != v43 )
            {
              sub_4A96C0(a1, v43, 0, a3, a4, a5, a6, v40, v41, a9, a10);
              sub_4A4600(a1, nullptr, 7u, 0, a3, a4, a5, a6, v44, v45, a9, a10);
            }
            return QT::QWidget::event((QT::QWidget *)a1, a2);
          }
LABEL_31:
          v38 = *v34;
          v39 = 0;
          while ( !*(_QWORD *)(v38 + 8) || strcmp(*(const char **)v38, "tree_mode") )
          {
            ++v39;
            v38 += 40;
            if ( v39 >= v36 )
              goto LABEL_40;
          }
          if ( *(_DWORD *)(v38 + 24) == 2 )
          {
            v42 = *(_QWORD *)(v38 + 32);
            v43 = -1;
            if ( !*(_QWORD *)(v42 + 8) )
              goto LABEL_37;
            s1 = *(char **)v42;
            if ( !*(_QWORD *)v42 )
              goto LABEL_37;
          }
LABEL_40:
          v43 = strcmp(s1, "no_tree");
          if ( !v43 )
            goto LABEL_37;
          goto LABEL_41;
        }
        s1 = "no_tree";
        if ( v36 )
          goto LABEL_31;
        return QT::QWidget::event((QT::QWidget *)a1, a2);
      }
      if ( v18 == 39 )
      {
        if ( (*(_BYTE *)(a1 + 1785) & 1) == 0 )
        {
          v32 = nullsub_263;
          v33 = *(void (**)())(*(_QWORD *)a1 + 672LL);
          if ( v33 != nullsub_263 )
            ((void (__fastcall *)(__int64))v33)(a1);
          sub_4DFB70(a1 + 104, a1, (_DWORD)v32, v13, v14, v15);
        }
        return QT::QWidget::event((QT::QWidget *)a1, a2);
      }
      if ( v18 != 2003 || (*(_BYTE *)(a1 + 1785) & 1) != 0 )
        return QT::QWidget::event((QT::QWidget *)a1, a2);
      v19 = *((_BYTE *)a2 + 40) == 0;
      *(_QWORD *)v71 = 0;
      v73 = -1;
      v72 = 0;
      if ( !v19 )
      {
        sub_4A6DB0((__int64 *)a1, (__int64 *)v71, 3, 0.0, a4, a5, a6, v16, v17, a9, a10);
        sub_20C550((__int64 *)a2 + 2, v72);
        v62 = *(unsigned int **)v71;
        v63 = *(_QWORD *)v71 + 8 * v72;
        if ( *(_QWORD *)v71 != v63 )
        {
          do
          {
            sub_20C550((__int64 *)a2 + 2, *v62);
            v62 += 2;
          }
          while ( (unsigned int *)v63 != v62 );
        }
        v64 = (const char *)v73;
        if ( v73 != -1 )
          sub_20C550((__int64 *)a2 + 2, v73);
        if ( *(_QWORD *)v71 )
        {
          *(_QWORD *)&v72 = 0;
          qfree(*(_QWORD *)v71, v64);
        }
        return QT::QWidget::event((QT::QWidget *)a1, a2);
      }
      v20 = *((_QWORD *)a2 + 2);
      v21 = v20 + *((_QWORD *)a2 + 3);
      v22 = (__m128)v21;
      v23 = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v21);
      *(__m128i *)dest = v23;
      v24 = unpack_dd(dest, v21);
      v25 = v72;
      v26 = v24;
      if ( (unsigned __int64)v72 < v24 )
      {
        v66 = *(unsigned int **)v71;
        if ( *((_QWORD *)&v72 + 1) < (unsigned __int64)v24 )
        {
          *(_QWORD *)v71 = qvector_reserve(v71, *(_QWORD *)v71, v24, 8);
          v25 = v72;
          v66 = *(unsigned int **)v71;
        }
        memset(&v66[2 * v25], 0, 8 * (v26 - v25));
        *(_QWORD *)&v72 = v26;
      }
      else
      {
        if ( v24 != (_QWORD)v72 )
          *(_QWORD *)&v72 = v24;
        if ( !v24 )
          goto LABEL_18;
      }
      v27 = 8 * v26;
      v28 = 0;
      do
      {
        v29 = unpack_dd(dest, dest[1]);
        LODWORD(v25) = v71[0];
        *(_QWORD *)(*(_QWORD *)v71 + v28) = v29;
        v28 += 8;
      }
      while ( v28 != v27 );
LABEL_18:
      if ( dest[0] < dest[1] )
        v73 = (unsigned int)unpack_dd(dest, dest[1]);
      QT::QCoreApplication::removePostedEvents(
        (QT::QCoreApplication *)a1,
        (QT::QObject *)((char *)&stru_7C0.st_size + 1),
        v25);
      sub_4A4600(a1, (unsigned __int64 *)v71, 7u, 0, *(double *)v23.m128i_i64, v22, a5, a6, v30, v31, a9, a10);
      if ( *(_QWORD *)v71 )
      {
        *(_QWORD *)&v72 = 0;
        qfree(*(_QWORD *)v71, (const char *)v71);
      }
      return QT::QWidget::event((QT::QWidget *)a1, a2);
    }
    v46 = *(_QWORD *)(a1 + 2392);
    v47 = *(__int64 (__fastcall **)(__int64, size_t *))(*(_QWORD *)v46 + 24LL);
    if ( v47 == addon_chooser_t__::vfunc_3 )
    {
      n = 0;
      goto LABEL_46;
    }
    v50 = (_BYTE *)v47(v46, &n);
    v51 = (void *)n;
    v52 = v50;
    if ( !n || n == 1 && !*v50 )
    {
LABEL_46:
      v48 = *(_DWORD *)(a1 + 2376);
      if ( v48 != -1 )
      {
        v49 = "no_tree";
        if ( v48 )
        {
          v49 = "full_tree";
          if ( v48 == 1 )
            v49 = "folders_only";
        }
        sub_1D0CB0((__int64 *)a2 + 2, "tree_mode", v49);
      }
      return QT::QWidget::event((QT::QWidget *)a1, a2);
    }
    memset(dest, 0, 24);
    dest[0] = (void *)qvector_reserve(dest, 0, n, 1);
    memset((char *)dest[0] + (unsigned __int64)dest[1], 0, (size_t)v51 - (unsigned __int64)dest[1]);
    dest[1] = v51;
    memcpy(dest[0], v52, (size_t)v51);
    v53 = dest[1];
    v54 = 0.0;
    *(_QWORD *)v71 = 0;
    v72 = 0;
    if ( 2 * (__int64)dest[1] )
    {
      v65 = 2 * (__int64)dest[1] + 1;
      *(_QWORD *)v71 = qvector_reserve(v71, 0, v65, 1);
      memset((void *)(*(_QWORD *)v71 + v72), 0, v65 - v72);
      *(_QWORD *)&v72 = v65;
      *(_BYTE *)(*(_QWORD *)v71 + 2LL * (_QWORD)v53) = 0;
      v55 = (unsigned __int8 *)dest[0];
      v57 = *(unsigned int **)v71;
      v59 = v72;
      v58 = (unsigned __int8 *)dest[0] + (unsigned __int64)dest[1];
      v56 = *(_QWORD *)v71 + v72;
      if ( dest[0] == (char *)dest[0] + (unsigned __int64)dest[1] )
        goto LABEL_58;
    }
    else
    {
      v55 = (unsigned __int8 *)dest[0];
      v56 = 0;
      v57 = nullptr;
      v58 = (unsigned __int8 *)dest[0] + (unsigned __int64)dest[1];
      if ( (char *)dest[0] + (unsigned __int64)dest[1] == dest[0] )
      {
        v60 = (__int64 *)((char *)a2 + 16);
        v61 = &::s1;
LABEL_60:
        sub_1D0CB0(v60, "id", v61);
        if ( *(_QWORD *)v71 )
        {
          *(_QWORD *)&v72 = 0;
          v54 = qfree(*(_QWORD *)v71, "id", v54);
        }
        if ( dest[0] )
        {
          dest[1] = nullptr;
          qfree(dest[0], "id", v54);
        }
        goto LABEL_46;
      }
    }
    do
    {
      v54 = qsnprintf(v57, v56 - (_QWORD)v57, "%02X", *v55++);
      v57 = (unsigned int *)((char *)v57 + 2);
    }
    while ( v58 != v55 );
    v59 = v72;
LABEL_58:
    v60 = (__int64 *)((char *)a2 + 16);
    v61 = &::s1;
    if ( v59 )
      v61 = *(const char **)v71;
    goto LABEL_60;
  }
  return result;
}
