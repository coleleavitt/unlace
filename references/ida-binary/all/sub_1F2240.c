unsigned __int64 __fastcall sub_1F2240(QT::QWidget *this, _QWORD *a2, __int64 a3, int *a4, char a5, char a6, double a7)
{
  const char *v7; // r14
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rsi
  QT::QWidget *v16; // rdi
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // r11
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rbx
  __int64 v24; // rbp
  const char *v25; // rsi
  const char *v26; // rdi
  char v27; // r11
  int v28; // r14d
  int v29; // r13d
  int v30; // eax
  bool v31; // cl
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rsi
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // r14
  int v43; // eax
  __int64 v44; // r13
  __int64 v45; // r14
  _QWORD *v46; // rax
  unsigned int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rcx
  __int64 v51; // rsi
  unsigned __int64 v52; // rdi
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rbx
  int v57; // eax
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // r13
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  _DWORD *v69; // r8
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // r13
  __int64 v73; // rax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // eax
  __int64 v81; // rax
  int v82; // eax
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  int v88; // eax
  int v89; // eax
  int v90; // eax
  struct _Unwind_Exception *v91; // rbx
  __int64 v92; // [rsp-10h] [rbp-A8h]
  const char *v93; // [rsp+0h] [rbp-98h]
  __int64 v94; // [rsp+0h] [rbp-98h]
  int v95; // [rsp+0h] [rbp-98h]
  unsigned int v96; // [rsp+0h] [rbp-98h]
  unsigned int v97; // [rsp+0h] [rbp-98h]
  __int64 *v98; // [rsp+8h] [rbp-90h]
  bool v99; // [rsp+8h] [rbp-90h]
  _QWORD *v100; // [rsp+10h] [rbp-88h]
  __int64 v101; // [rsp+10h] [rbp-88h]
  __int64 v102; // [rsp+10h] [rbp-88h]
  __int64 v103; // [rsp+18h] [rbp-80h]
  char v105; // [rsp+24h] [rbp-74h]
  int v106; // [rsp+24h] [rbp-74h]
  int v107; // [rsp+24h] [rbp-74h]
  char v108; // [rsp+28h] [rbp-70h]
  bool v109; // [rsp+28h] [rbp-70h]
  char v110; // [rsp+2Eh] [rbp-6Ah]
  bool v111; // [rsp+2Fh] [rbp-69h]
  __int64 v112; // [rsp+30h] [rbp-68h] BYREF
  int v113; // [rsp+38h] [rbp-60h]
  _DWORD *v114; // [rsp+40h] [rbp-58h] BYREF
  __int128 v115; // [rsp+48h] [rbp-50h]
  unsigned __int64 v116; // [rsp+58h] [rbp-40h]

  v7 = &s1;
  v10 = a2;
  v11 = a2[2];
  v116 = __readfsqword(0x28u);
  v93 = &s1;
  if ( v11 )
  {
    v93 = (const char *)a2[1];
    v7 = &v93[v11 - 1];
  }
  v14 = sub_178210((__int64)a2, a3 + 8, (__int64)this);
  v98 = (__int64 *)*a2;
  if ( (*((_BYTE *)this + 564) & 4) != 0 )
    a6 &= ~8u;
  if ( (a6 & 1) == 0 )
  {
    v103 = -1;
    goto LABEL_74;
  }
  if ( *((_BYTE *)a4 + 4) )
  {
    v59 = *(_QWORD *)(v14 + 168);
    v60 = *(_QWORD *)(v14 + 160);
    if ( *(_QWORD *)(v14 + 176) < (unsigned __int64)(v59 + 1) )
    {
      v78 = qvector_reserve(v14 + 160, v60, v59 + 1, 16);
      *(_QWORD *)(v14 + 160) = v78;
      v60 = v78;
      v59 = *(_QWORD *)(v14 + 168);
    }
    v61 = v60 + 16 * v59;
    *(_QWORD *)v61 = -1;
    *(_DWORD *)(v61 + 8) = -1;
    *(_BYTE *)(v61 + 12) = 0;
    ++*(_QWORD *)(v14 + 168);
    v62 = *a4;
    *(_QWORD *)v61 = 0x7FFFFFFFFFFFFFFFLL;
    *(_DWORD *)(v61 + 8) = v62;
    *(_BYTE *)(v61 + 12) = 1;
  }
  a7 = 0.0;
  v15 = (__int64)&v114;
  v16 = (QT::QWidget *)v14;
  v115 = 0;
  v114 = nullptr;
  sub_174A70(v14, (__int64 *)&v114, (__int64)(v10 + 1), 19, 0);
  v103 = -1;
  if ( (_QWORD)v115 )
  {
    v68 = *(_QWORD *)(v14 + 144);
    v69 = v114;
    v70 = *(_QWORD *)(v14 + 136);
    v103 = v68;
    v71 = v68 + 1;
    if ( *(_QWORD *)(v14 + 152) < (unsigned __int64)(v68 + 1) )
    {
      v16 = (QT::QWidget *)(v14 + 136);
      v102 = (__int64)v114;
      v77 = qvector_reserve(v14 + 136, v70, v71, 16);
      *(_QWORD *)(v14 + 136) = v77;
      v70 = v77;
      v69 = (_DWORD *)v102;
      v68 = *(_QWORD *)(v14 + 144);
    }
    v72 = v70 + 16 * v68;
    *(_QWORD *)v72 = -1;
    *(_DWORD *)(v72 + 8) = -1;
    *(_BYTE *)(v72 + 12) = 0;
    ++*(_QWORD *)(v14 + 144);
    *(_DWORD *)v72 = *v69;
    *(_QWORD *)(v72 + 4) = (unsigned int)v69[1];
    *(_BYTE *)(v72 + 12) = 1;
    v15 = *((_QWORD *)this + 53);
    if ( !v15 )
      goto LABEL_151;
    v73 = *v98;
    if ( *((int *)this + 235) <= 740 )
      v74 = (*(__int64 (__fastcall **)(__int64 *))(v73 + 40))(v98);
    else
      v74 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v73 + 160))(v98, v15, *((_QWORD *)this + 91));
    if ( v74 )
    {
      v75 = *(_DWORD *)(v72 + 8);
    }
    else
    {
      if ( a5 )
      {
        v15 = 10;
        v76 = sub_1737D0((__int64)this, 0xAu);
        *(_DWORD *)(v72 + 8) = v76;
        *(_BYTE *)(v72 + 12) = 1;
      }
      else
      {
        v76 = *(_DWORD *)(v72 + 8);
      }
      if ( v76 )
        goto LABEL_8;
      v15 = 9;
      v75 = sub_1737D0((__int64)this, 9u);
      *(_DWORD *)(v72 + 8) = v75;
      *(_BYTE *)(v72 + 12) = 1;
    }
    if ( !v75 )
    {
      v15 = *((unsigned __int8 *)v10 + 32);
      *(_DWORD *)(v72 + 8) = sub_1737D0((__int64)this, v15);
      *(_BYTE *)(v72 + 12) = 1;
    }
  }
LABEL_8:
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    qfree(v114, (const char *)v15);
    if ( (a6 & 2) == 0 )
      goto LABEL_75;
    goto LABEL_10;
  }
LABEL_74:
  if ( (a6 & 2) == 0 )
    goto LABEL_75;
LABEL_10:
  v18 = QT::QMetaObject::cast((QT::QMetaObject *)&off_886F00, this) == 0;
  v19 = *((_QWORD *)this + 75);
  v105 = !v18;
  if ( !v19 )
    goto LABEL_75;
  v20 = *((_QWORD *)this + 74);
  v13 = v20 + 80 * v19;
  if ( v20 == v13 )
    goto LABEL_75;
  v21 = *((_QWORD *)this + 74);
  do
  {
    v22 = v21;
    if ( (*(_BYTE *)(v21 + 72) & 4) == 0 )
    {
      v111 = v21 != 0;
      goto LABEL_16;
    }
    v21 += 80;
  }
  while ( v13 != v21 );
  v111 = 0;
  v22 = 0;
LABEL_16:
  v100 = v10;
  v23 = v13;
  v108 = a6;
  v24 = *((_QWORD *)this + 74);
  v110 = 0;
  do
  {
    while ( 1 )
    {
      if ( v24 != v22 && *(_QWORD *)(v24 + 16) > 1u )
      {
        sub_1F1F40((__int64)this, (_DWORD *)v24, v100, (_QWORD *)v14, v93, (unsigned __int64)v7, v105);
        if ( v22 )
          break;
      }
      v24 += 80;
      if ( v23 == v24 )
        goto LABEL_26;
    }
    v25 = &s1;
    if ( *(_QWORD *)(v24 + 40) )
      v25 = *(const char **)(v24 + 32);
    v26 = &s1;
    if ( *(_QWORD *)(v22 + 40) )
      v26 = *(const char **)(v22 + 32);
    v24 += 80;
    v110 |= strcmp(v26, v25) == 0;
  }
  while ( v23 != v24 );
LABEL_26:
  v10 = v100;
  a6 = v108;
  if ( v110 == 1 || !v111 )
  {
LABEL_75:
    if ( (a6 & 0x20) == 0 )
    {
      if ( (a6 & 4) == 0 )
        goto LABEL_63;
LABEL_50:
      v44 = *((_QWORD *)this + 103);
      v45 = v44 + 8LL * *((_QWORD *)this + 104);
      if ( v45 == v44 )
        goto LABEL_63;
      while ( 1 )
      {
        v46 = *(_QWORD **)v44;
        if ( **(_QWORD ***)v44 != v10 )
          goto LABEL_52;
        v13 = *((unsigned int *)v46 + 2);
        if ( (int)v13 < 0 )
          goto LABEL_52;
        v47 = *((_DWORD *)v46 + 3);
        if ( v47 > 0xFFFFFF )
          goto LABEL_59;
        if ( v47 && (unsigned __int64)v47 < *((_QWORD *)this + 7) )
        {
          v48 = sub_524F70();
          v47 = sub_524F80((char *)this + 40, v48, 0);
          LODWORD(v13) = *(_DWORD *)(*(_QWORD *)v44 + 8LL);
LABEL_59:
          v49 = *(_QWORD *)(v14 + 168);
          v50 = *(_QWORD *)(v14 + 176);
          v51 = *(_QWORD *)(v14 + 160);
          v52 = v49 + 1;
          if ( (v13 & 1) == 0 )
          {
            if ( v50 < v52 )
            {
              v96 = v47;
              v86 = qvector_reserve(v14 + 160, v51, v52, 16);
              v47 = v96;
              *(_QWORD *)(v14 + 160) = v86;
              v51 = v86;
              v49 = *(_QWORD *)(v14 + 168);
            }
            v67 = 16 * v49;
            *(_QWORD *)(v51 + v67) = -1;
            v13 = v51 + v67;
            *(_DWORD *)(v13 + 8) = -1;
            *(_BYTE *)(v13 + 12) = 0;
            ++*(_QWORD *)(v14 + 168);
            *(_QWORD *)v13 = 0x7FFFFFFFFFFFFFFFLL;
            *(_DWORD *)(v13 + 8) = v47;
            *(_BYTE *)(v13 + 12) = 1;
            goto LABEL_52;
          }
          if ( v50 < v52 )
          {
            v97 = v47;
            v87 = qvector_reserve(v14 + 160, v51, v52, 16);
            v47 = v97;
            *(_QWORD *)(v14 + 160) = v87;
            v51 = v87;
            v49 = *(_QWORD *)(v14 + 168);
          }
          v44 += 8;
          v13 = v51 + 16 * v49;
          *(_QWORD *)v13 = -1;
          *(_DWORD *)(v13 + 8) = -1;
          *(_BYTE *)(v13 + 12) = 0;
          ++*(_QWORD *)(v14 + 168);
          *(_DWORD *)v13 = *(_DWORD *)(*(_QWORD *)(v44 - 8) + 16LL);
          v53 = *(_DWORD *)(*(_QWORD *)(v44 - 8) + 20LL);
          *(_DWORD *)(v13 + 8) = v47;
          *(_BYTE *)(v13 + 12) = 1;
          *(_DWORD *)(v13 + 4) = v53;
          if ( v45 == v44 )
            goto LABEL_63;
        }
        else
        {
LABEL_52:
          v44 += 8;
          if ( v45 == v44 )
            goto LABEL_63;
        }
      }
    }
    goto LABEL_29;
  }
  sub_1F1F40((__int64)this, (_DWORD *)v22, v100, (_QWORD *)v14, v93, (unsigned __int64)v7, v105);
  v13 = v92;
  if ( (v108 & 0x20) == 0 )
    goto LABEL_49;
LABEL_29:
  if ( !*((_QWORD *)this + 28) )
    goto LABEL_49;
  v112 = 0;
  v113 = 0;
  v114 = nullptr;
  LODWORD(v115) = 0;
  v27 = sub_1F07A0((__int64)this, (__int64)&v112, (__int64)&v114, nullptr);
  if ( !v27 )
    goto LABEL_49;
  v28 = v113;
  v29 = v115;
  v94 = v112;
  v101 = (__int64)v114;
  if ( *((_BYTE *)this + 740) )
  {
    if ( *((int *)this + 235) <= 740 )
      v82 = l_compare(v98, v112);
    else
      v82 = l_compare2(v98, v112, *((_QWORD *)this + 91));
    if ( v82 < 0
      || (*((int *)this + 235) <= 740
        ? (v88 = l_compare(v98, v101))
        : (v88 = l_compare2(v98, v101, *((_QWORD *)this + 91))),
          v88 >= 0) )
    {
      if ( (*(unsigned int (__fastcall **)(QT::QWidget *, __int64, __int64 *))(*(_QWORD *)this + 464LL))(this, v94, v98) == -1
        && (*(unsigned int (__fastcall **)(QT::QWidget *, __int64, __int64 *))(*(_QWORD *)this + 464LL))(
             this,
             v101,
             v98) == -1 )
      {
        goto LABEL_49;
      }
    }
    if ( v28 < v29 )
      goto LABEL_105;
    v83 = v28;
    v28 = v29;
    v29 = v83;
LABEL_104:
    if ( v29 <= v28 )
      goto LABEL_49;
LABEL_105:
    v80 = v28;
    v28 = v29;
    v31 = v29 == 0x7FFFFFFF;
    v29 = v80;
LABEL_36:
    v95 = v28 - v29;
    if ( v103 == -1 )
    {
      v32 = *(_QWORD *)(v14 + 144);
      v33 = v32 + 1;
      goto LABEL_38;
    }
LABEL_107:
    v99 = v31;
    memmove(
      (void *)(*(_QWORD *)(v14 + 136) + 16 * v103),
      (const void *)(*(_QWORD *)(v14 + 136) + 16 * v103 + 16),
      16 * (*(_QWORD *)(v14 + 144) - v103) - 16);
    v33 = *(_QWORD *)(v14 + 144);
    v31 = v99;
    v32 = v33 - 1;
    *(_QWORD *)(v14 + 144) = v33 - 1;
LABEL_38:
    if ( v29 )
      goto LABEL_40;
    goto LABEL_39;
  }
  v109 = v27;
  v15 = (__int64)v114;
  v16 = this;
  v106 = (*(__int64 (__fastcall **)(QT::QWidget *, __int64, __int64 *))(*(_QWORD *)this + 464LL))(this, v112, v98);
  v30 = (*(__int64 (__fastcall **)(QT::QWidget *, __int64, __int64 *))(*(_QWORD *)this + 464LL))(this, v101, v98);
  v31 = 0;
  if ( v106 != -1 )
  {
    if ( v30 == -1 )
    {
      v29 = 0x7FFFFFFF;
    }
    else if ( v28 > v29 )
    {
      v31 = v28 == 0x7FFFFFFF;
      goto LABEL_36;
    }
    goto LABEL_104;
  }
  if ( v30 == -1 )
  {
    if ( *((_QWORD *)this + 53) )
    {
      v107 = *((__int16 *)this + 206);
      if ( *((int *)this + 235) <= 740 )
        v89 = l_compare(v98, v94);
      else
        v89 = l_compare2(v98, v94, *((_QWORD *)this + 91));
      if ( v89 )
      {
        if ( v89 <= 0 )
          goto LABEL_49;
      }
      else if ( v107 <= v28 )
      {
        goto LABEL_49;
      }
      if ( *((int *)this + 235) <= 740 )
        v90 = l_compare(v98, v101);
      else
        v90 = l_compare2(v98, v101, *((_QWORD *)this + 91));
      if ( v90 )
      {
        if ( v90 > 0 )
          goto LABEL_49;
        if ( v103 != -1 )
        {
          v95 = 0x7FFFFFFF;
          v31 = v109;
          v29 = 0;
          v28 = 0x7FFFFFFF;
          goto LABEL_107;
        }
      }
      else
      {
        if ( v107 > v29 )
          goto LABEL_49;
        if ( v103 != -1 )
        {
          v95 = 0x7FFFFFFF;
          v31 = v109;
          v29 = 0;
          v28 = 0x7FFFFFFF;
          goto LABEL_107;
        }
      }
      v32 = *(_QWORD *)(v14 + 144);
      v95 = 0x7FFFFFFF;
      v31 = v109;
      v28 = 0x7FFFFFFF;
      v33 = v32 + 1;
LABEL_39:
      v29 = -1;
      goto LABEL_40;
    }
    sub_1E69C0(a7, (__int64)this, v101, v13, 0);
LABEL_151:
    v91 = (struct _Unwind_Exception *)sub_1E69C0(a7, (__int64)v16, v15, v71, v17);
    if ( v114 )
    {
      *(_QWORD *)&v115 = 0;
      qfree(v114, (const char *)v15);
    }
    _Unwind_Resume(v91);
  }
  if ( v29 >= 0 )
  {
    if ( !v29 )
      goto LABEL_49;
    v31 = v29 == 0x7FFFFFFF;
    if ( v103 == -1 )
    {
      v32 = *(_QWORD *)(v14 + 144);
      v95 = v29;
      v28 = v29;
      v29 = -1;
      v33 = v32 + 1;
LABEL_40:
      if ( *(_DWORD *)(v14 + 208) < v28 )
      {
        v18 = !v31;
        v34 = 0x7FFFFFFF;
        if ( v18 )
          v34 = v95;
        v95 = v34;
      }
      goto LABEL_44;
    }
    v95 = v29;
    v28 = v29;
    v29 = 0;
    goto LABEL_107;
  }
  v95 = -v29;
  if ( v103 != -1 )
  {
    v28 = 0;
    goto LABEL_107;
  }
  v32 = *(_QWORD *)(v14 + 144);
  v33 = v32 + 1;
LABEL_44:
  v35 = *(_QWORD *)(v14 + 136);
  if ( *(_QWORD *)(v14 + 152) < v33 )
  {
    v85 = qvector_reserve(v14 + 136, v35, v33, 16);
    v32 = *(_QWORD *)(v14 + 144);
    *(_QWORD *)(v14 + 136) = v85;
    v35 = v85;
  }
  v36 = v35 + 16 * v32;
  *(_QWORD *)v36 = -1;
  *(_DWORD *)(v36 + 8) = -1;
  *(_BYTE *)(v36 + 12) = 0;
  ++*(_QWORD *)(v14 + 144);
  *(_DWORD *)v36 = v29;
  *(_DWORD *)(v36 + 4) = v95;
  *(_DWORD *)(v36 + 8) = -1;
  *(_BYTE *)(v36 + 12) = 0;
  v37 = QT::QWidget::palette(this);
  v38 = QT::QPalette::brush(v37, 4, 13);
  v39 = QT::QColor::rgba((QT::QColor *)(*(_QWORD *)v38 + 8LL));
  *(_BYTE *)(v36 + 12) = 1;
  *(_DWORD *)(v36 + 8) = __ROR4__(_byteswap_ulong(v39), 8);
  v40 = *(_QWORD *)(v14 + 168);
  v41 = *(_QWORD *)(v14 + 160);
  if ( *(_QWORD *)(v14 + 176) < (unsigned __int64)(v40 + 1) )
  {
    v84 = qvector_reserve(v14 + 160, v41, v40 + 1, 16);
    *(_QWORD *)(v14 + 160) = v84;
    v41 = v84;
    v40 = *(_QWORD *)(v14 + 168);
  }
  v42 = v41 + 16 * v40;
  *(_QWORD *)v42 = -1;
  *(_DWORD *)(v42 + 8) = -1;
  *(_BYTE *)(v42 + 12) = 0;
  ++*(_QWORD *)(v14 + 168);
  *(_DWORD *)v42 = v29;
  *(_DWORD *)(v42 + 4) = v95;
  *(_DWORD *)(v42 + 8) = -1;
  *(_BYTE *)(v42 + 12) = 0;
  v43 = sub_1737D0((__int64)this, 2u);
  *(_BYTE *)(v42 + 12) = 1;
  *(_DWORD *)(v42 + 8) = v43;
LABEL_49:
  if ( (a6 & 4) != 0 )
    goto LABEL_50;
LABEL_63:
  if ( (a6 & 8) == 0 || !a5 )
  {
    if ( (a6 & 0x10) == 0 )
      return v116 - __readfsqword(0x28u);
    goto LABEL_66;
  }
  v63 = *(_QWORD *)(v14 + 168);
  v64 = *(_QWORD *)(v14 + 160);
  if ( *(_QWORD *)(v14 + 176) < (unsigned __int64)(v63 + 1) )
  {
    v79 = qvector_reserve(v14 + 160, v64, v63 + 1, 16);
    v63 = *(_QWORD *)(v14 + 168);
    *(_QWORD *)(v14 + 160) = v79;
    v64 = v79;
  }
  v65 = v64 + 16 * v63;
  *(_QWORD *)v65 = -1;
  *(_DWORD *)(v65 + 8) = -1;
  *(_BYTE *)(v65 + 12) = 0;
  ++*(_QWORD *)(v14 + 168);
  v66 = sub_524F80((char *)this + 40, 2165563982LL, 0);
  v13 = 0x7FFFFFFFFFFFFFFFLL;
  *(_BYTE *)(v65 + 12) = 1;
  *(_DWORD *)(v65 + 8) = v66;
  *(_QWORD *)v65 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (a6 & 0x10) != 0 )
  {
LABEL_66:
    if ( dbg
      && *((_BYTE *)v10 + 40)
      && (*(unsigned __int8 (__fastcall **)(QT::QWidget *, _QWORD, __int64))(*(_QWORD *)this + 936LL))(this, *v10, v13) )
    {
      v54 = *(_QWORD *)(v14 + 168);
      v55 = *(_QWORD *)(v14 + 160);
      if ( *(_QWORD *)(v14 + 176) < (unsigned __int64)(v54 + 1) )
      {
        v81 = qvector_reserve(v14 + 160, v55, v54 + 1, 16);
        v54 = *(_QWORD *)(v14 + 168);
        *(_QWORD *)(v14 + 160) = v81;
        v55 = v81;
      }
      v56 = v55 + 16 * v54;
      *(_QWORD *)v56 = -1;
      *(_DWORD *)(v56 + 8) = -1;
      *(_BYTE *)(v56 + 12) = 0;
      ++*(_QWORD *)(v14 + 168);
      v57 = sub_524F80((char *)this + 40, 2165563983LL, 0);
      *(_BYTE *)(v56 + 12) = 1;
      *(_DWORD *)(v56 + 8) = v57;
      *(_QWORD *)v56 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  return v116 - __readfsqword(0x28u);
}
