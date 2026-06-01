QT::QWidget *__fastcall sub_4B8F00(
        _QWORD *a1,
        char *a2,
        int *a3,
        __int64 a4,
        __int64 *a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  int v14; // r12d
  int v15; // eax
  __int64 v17; // rax
  const char *v18; // rsi
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r9d
  unsigned __int64 v25; // r13
  __int64 v26; // r12
  __int64 p_s1; // rsi
  char v28; // r14
  char *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 (__fastcall *v33)(__int64, QT::QWidget *, _QWORD); // r13
  QT::QWidget *v34; // rbx
  QT::QWidget *v35; // rbx
  _QWORD *v36; // rdx
  _QWORD *v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rcx
  __int64 *v40; // rax
  __int64 v41; // rbx
  __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __m128 v48; // xmm4
  __m128 v49; // xmm5
  __int64 v50; // rax
  char *v51; // rbx
  __int64 v53; // rax
  __int64 v54; // r14
  size_t v55; // rbx
  char *v56; // rax
  QT::QWidget *v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned int v60; // r14d
  __int64 *v61; // rax
  __int64 v62; // r13
  __int64 v63; // r14
  __int64 v64; // r15
  const char *v65; // rdi
  int v66; // r9d
  __int64 v67; // r15
  __int64 v68; // r13
  __int64 v69; // rax
  __int64 v70; // r14
  __int64 v71; // rax
  int v72; // [rsp+0h] [rbp-A8h]
  _QWORD *v73; // [rsp+8h] [rbp-A0h]
  char *v74; // [rsp+10h] [rbp-98h]
  void (__fastcall *v75)(QT::QWidget *, __int64, __int64); // [rsp+18h] [rbp-90h]
  __int64 v76; // [rsp+18h] [rbp-90h]
  __int64 *v77; // [rsp+20h] [rbp-88h]
  __int64 v78; // [rsp+28h] [rbp-80h]
  char *v79; // [rsp+30h] [rbp-78h] BYREF
  __int128 v80; // [rsp+38h] [rbp-70h]
  __int64 v81; // [rsp+48h] [rbp-60h]
  char *s1; // [rsp+50h] [rbp-58h] BYREF
  __int128 v83; // [rsp+58h] [rbp-50h]
  unsigned __int64 v84; // [rsp+68h] [rbp-40h]

  v14 = a4;
  v15 = *a3;
  v73 = a1;
  v74 = a2;
  v84 = __readfsqword(0x28u);
  if ( v15 == 3 )
  {
    v40 = *((__int64 **)a3 + 1);
    v41 = v40[1];
    v77 = v40;
    if ( !v41 )
      goto LABEL_36;
    v42 = *v40;
    v43 = 0;
    while ( !*(_QWORD *)(v42 + 8) || strcmp(*(const char **)v42, "type") )
    {
      ++v43;
      v42 += 40;
      if ( v41 == v43 )
        goto LABEL_36;
    }
    if ( *(_DWORD *)(v42 + 24) == 2 )
    {
      v54 = *(_QWORD *)(v42 + 32);
      a6 = 0;
      v79 = nullptr;
      v80 = 0;
      v55 = *(_QWORD *)(v54 + 8);
      if ( !v55 )
        goto LABEL_37;
      v56 = (char *)qalloc_or_throw(*(_QWORD *)(v54 + 8));
      *((_QWORD *)&v80 + 1) = v55;
      v79 = v56;
      memcpy(v56, *(const void **)v54, v55);
      *(_QWORD *)&v80 = v55;
    }
    else
    {
LABEL_36:
      a6 = 0;
      v80 = 0;
      v79 = nullptr;
      v50 = qvector_reserve(&v79, 0, 7, 1);
      v79 = (char *)v50;
      *(_QWORD *)&v80 = 7;
      *(_DWORD *)v50 = 1819308918;
      *(_WORD *)(v50 + 4) = 29801;
      v79[6] = 0;
      if ( !(_QWORD)v80 )
      {
LABEL_37:
        v51 = (char *)&::s1;
LABEL_38:
        p_s1 = (__int64)v51;
        sub_169700(
          (int)"WARNING: unknown composite type: %s\n",
          (__int64)v51,
          v44,
          v45,
          v46,
          v47,
          a6,
          a7,
          a8,
          a9,
          v48,
          v49,
          a12,
          a13,
          v72);
        goto LABEL_39;
      }
    }
    v51 = v79;
    if ( !strcmp(v79, "vsplit") || !strcmp(v51, "hsplit") )
    {
      v35 = (QT::QWidget *)operator new(0x70u);
      sub_4D0770(v35);
      v60 = 1;
      if ( (_QWORD)v80 && !strcmp(v79, "vsplit") )
        v60 = 2;
      v57 = *((QT::QWidget **)v35 + 13);
      p_s1 = v60;
      QT::QSplitter::setOrientation(v57, v60);
    }
    else
    {
      if ( strcmp(v51, "tabs") )
        goto LABEL_38;
      p_s1 = 0xFFFFFFFFLL;
      v57 = (QT::QWidget *)operator new(0x60u);
      v35 = v57;
      sub_4CE960(v57);
    }
    if ( v35 )
    {
      if ( *a3 != 3 )
        sub_4B5660(*(double *)a6.m128_u64, (__int64)v57, p_s1, v58, v59);
      v61 = *((__int64 **)a3 + 1);
      v62 = v61[1];
      if ( !v62 )
        goto LABEL_81;
      v63 = *v61;
      v64 = 0;
      while ( 1 )
      {
        if ( *(_QWORD *)(v63 + 8) )
        {
          v65 = *(const char **)v63;
          p_s1 = (__int64)"children";
          if ( !strcmp(*(const char **)v63, "children") )
            break;
        }
        ++v64;
        v63 += 40;
        if ( v62 == v64 )
          goto LABEL_81;
      }
      if ( *(_DWORD *)(v63 + 24) != 4 )
        goto LABEL_80;
      v67 = *(_QWORD *)(v63 + 32);
      v68 = 0;
      v78 = *(_QWORD *)(v67 + 8);
      if ( v78 )
      {
        do
        {
          p_s1 = (__int64)v74;
          v69 = sub_4B8F00(
                  (_DWORD)v73,
                  (_DWORD)v74,
                  *(_DWORD *)v67 + 16 * (int)v68,
                  v14,
                  (_DWORD)a5,
                  v66,
                  v72,
                  (_DWORD)v73,
                  (_DWORD)v74,
                  (_DWORD)v75,
                  (_DWORD)v77,
                  v78,
                  (__int64)v79,
                  v80,
                  DWORD2(v80),
                  v81,
                  (__int64)s1,
                  v83,
                  *((__int64 *)&v83 + 1));
          v70 = v69;
          if ( v69 )
          {
            if ( !*(_DWORD *)(v69 + 40) )
              (*(void (__fastcall **)(_QWORD *, __int64, QT::QWidget *))(*QT::QCoreApplication::self + 400LL))(
                QT::QCoreApplication::self,
                v69,
                v35);
            v75 = *(void (__fastcall **)(QT::QWidget *, __int64, __int64))(*(_QWORD *)v35 + 472LL);
            p_s1 = (*(unsigned int (__fastcall **)(QT::QWidget *))(*(_QWORD *)v35 + 464LL))(v35);
            v75(v35, p_s1, v70);
          }
          ++v68;
        }
        while ( v78 != v68 );
      }
      if ( (*(unsigned int (__fastcall **)(QT::QWidget *))(*(_QWORD *)v35 + 464LL))(v35) )
      {
        if ( v79 )
        {
          *(_QWORD *)&v80 = 0;
          qfree(v79, (const char *)p_s1);
        }
        goto LABEL_21;
      }
      (*(void (__fastcall **)(QT::QWidget *))(*(_QWORD *)v35 + 32LL))(v35);
    }
LABEL_39:
    if ( v79 )
    {
      *(_QWORD *)&v80 = 0;
      qfree(v79, (const char *)p_s1);
    }
    return nullptr;
  }
  if ( v15 != 2 )
    return nullptr;
  v17 = *((_QWORD *)a3 + 1);
  v18 = &::s1;
  v76 = v17;
  if ( *(_QWORD *)(v17 + 8) )
    v18 = *(const char **)v17;
  v19 = 0;
  v20 = sub_4B76C0(a4, v18, 0, a4, *(double *)a6.m128_u64);
  v25 = a5[1];
  v77 = (__int64 *)v20;
  if ( !v25 )
    goto LABEL_76;
  do
  {
    v30 = *a5;
    a6.m128_u64[0] = 0;
    s1 = nullptr;
    v83 = 0;
    v31 = *(_QWORD *)(v30 + 8 * v19);
    v28 = *(_BYTE *)(v31 + 24);
    if ( !v28 )
    {
      v26 = *(_QWORD *)(v31 + 16);
      if ( !v26 )
      {
        v28 = 1;
        goto LABEL_15;
      }
      p_s1 = (__int64)&s1;
      v28 = (*(__int64 (__fastcall **)(_QWORD *, char **, _QWORD))(QT::QCoreApplication::self[2] + 72LL))(
              QT::QCoreApplication::self + 2,
              &s1,
              *(_QWORD *)(v31 + 16));
      if ( !v28 )
      {
        v28 = 1;
        v26 = 0;
LABEL_13:
        if ( s1 )
        {
          *(_QWORD *)&v83 = 0;
          *(double *)a6.m128_u64 = qfree(s1, (const char *)p_s1);
        }
LABEL_15:
        if ( ++v19 >= v25 )
          break;
        continue;
      }
      v22 = v76;
      if ( *(_QWORD *)(v76 + 8) )
      {
        p_s1 = *(_QWORD *)v76;
        v29 = (char *)&::s1;
        if ( !(_QWORD)v83 )
          goto LABEL_12;
      }
      else
      {
        p_s1 = (__int64)&::s1;
        if ( !(_QWORD)v83 )
          goto LABEL_46;
      }
      v29 = s1;
LABEL_12:
      v26 = 0;
      if ( strcmp(v29, (const char *)p_s1) )
        goto LABEL_13;
LABEL_46:
      v53 = *(_QWORD *)(*a5 + 8 * v19);
      if ( *(_BYTE *)(v53 + 24) )
      {
        if ( !under_debugger )
        {
          v65 = (_BYTE *)(&stru_9D90 + 9);
          interr(40345, p_s1, v21, v22, 0.0);
LABEL_80:
          sub_4B5680(*(double *)a6.m128_u64, (__int64)v65, p_s1, v58, v59);
LABEL_81:
          if ( !under_debugger )
            interr(1289, p_s1, v58, v59, *(double *)a6.m128_u64);
        }
        BUG();
      }
      v26 = *(_QWORD *)(v53 + 16);
      v28 = v26 == 0;
      goto LABEL_13;
    }
    ++v19;
    v26 = 0;
    if ( v19 >= v25 )
      break;
  }
  while ( v28 );
  if ( v26 )
    goto LABEL_20;
LABEL_76:
  sub_4B81F0((const char **)v76, v77, v21, v22, v23, v24);
  v26 = v71;
  if ( !v71 )
    return nullptr;
LABEL_20:
  v32 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  v33 = *(__int64 (__fastcall **)(__int64, QT::QWidget *, _QWORD))(*(_QWORD *)v32 + 128LL);
  v34 = (QT::QWidget *)operator new(0x30u);
  sub_4B8E20(v34, v26, *(double *)a6.m128_u64);
  v35 = (QT::QWidget *)v33(v32, v34, 0);
  ++*(_DWORD *)v74;
  if ( !v35 )
    return nullptr;
LABEL_21:
  v79 = (char *)v35;
  v36 = (_QWORD *)v73[2];
  v37 = v73 + 1;
  if ( !v36 )
    goto LABEL_28;
  do
  {
    while ( 1 )
    {
      v38 = v36[2];
      v39 = v36[3];
      if ( v36[4] < (unsigned __int64)v35 )
        break;
      v37 = v36;
      v36 = (_QWORD *)v36[2];
      if ( !v38 )
        goto LABEL_26;
    }
    v36 = (_QWORD *)v36[3];
  }
  while ( v39 );
LABEL_26:
  if ( v37 == v73 + 1 || (unsigned __int64)v35 < v37[4] )
  {
LABEL_28:
    s1 = (char *)&v79;
    v37 = sub_4B57C0(v73, v37, (unsigned __int64 **)&s1);
  }
  v37[5] = v77;
  return v35;
}
