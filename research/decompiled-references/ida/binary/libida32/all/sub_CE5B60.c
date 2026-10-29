__int64 __fastcall sub_CE5B60(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64), __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rsi
  char v7; // al
  unsigned int v8; // r14d
  char v9; // r15
  char v10; // al
  int v11; // ecx
  char v12; // bp
  char v14; // al
  unsigned __int8 **v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  __int64 v20; // r14
  __int64 *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdx
  unsigned __int8 **v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  void *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int8 **v31; // r14
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // rax
  __int64 v38; // rbp
  __int64 v39; // rsi
  char v40; // r13
  _QWORD *v41; // rax
  _WORD *v42; // rdi
  __int16 v43; // ax
  int v44; // eax
  unsigned __int64 v45; // rdx
  void **v46; // r8
  unsigned __int8 **v47; // r15
  __int64 v48; // rax
  __int64 v49; // rax
  _BYTE *v50; // rdi
  _QWORD *v51; // rax
  _WORD *v52; // rdi
  __int16 v53; // ax
  int v54; // eax
  unsigned __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rbp
  unsigned __int64 v58; // r13
  unsigned __int64 v59; // rax
  __int64 v60; // rsi
  char v61; // r13
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  void **v68; // [rsp+8h] [rbp-160h]
  unsigned __int8 **v69; // [rsp+8h] [rbp-160h]
  unsigned __int8 **v70; // [rsp+8h] [rbp-160h]
  void **v72; // [rsp+10h] [rbp-158h]
  __int64 v73; // [rsp+28h] [rbp-140h] BYREF
  _BYTE *v74[2]; // [rsp+30h] [rbp-138h] BYREF
  __int64 v75; // [rsp+40h] [rbp-128h] BYREF
  void *v76; // [rsp+50h] [rbp-118h] BYREF
  signed __int64 v77; // [rsp+58h] [rbp-110h]
  _BYTE v78[16]; // [rsp+60h] [rbp-108h] BYREF
  _QWORD v79[3]; // [rsp+70h] [rbp-F8h] BYREF
  int v80; // [rsp+88h] [rbp-E0h]
  __int64 v81; // [rsp+90h] [rbp-D8h]
  __int64 v82; // [rsp+98h] [rbp-D0h]
  _QWORD v83[3]; // [rsp+A0h] [rbp-C8h] BYREF
  int v84; // [rsp+B8h] [rbp-B0h]
  __int64 v85; // [rsp+C0h] [rbp-A8h]
  __int64 v86; // [rsp+C8h] [rbp-A0h]
  void *v87; // [rsp+D0h] [rbp-98h] BYREF
  signed __int64 v88; // [rsp+D8h] [rbp-90h]
  __int64 v89; // [rsp+E0h] [rbp-88h] BYREF
  int v90; // [rsp+E8h] [rbp-80h]
  __int64 v91; // [rsp+F0h] [rbp-78h]
  __int64 v92; // [rsp+F8h] [rbp-70h]
  _QWORD v93[3]; // [rsp+100h] [rbp-68h] BYREF
  int v94; // [rsp+118h] [rbp-50h]
  __int64 v95; // [rsp+120h] [rbp-48h]
  __int64 v96; // [rsp+128h] [rbp-40h]

  sub_CE52D0((__int64)v79, *(_QWORD *)(a1 + 176));
  sub_CE52D0((__int64)v83, *(_QWORD *)(a1 + 176));
  if ( !v84 || v84 == 2 )
  {
    if ( v85 )
      goto LABEL_11;
  }
  else if ( v84 == 3 || v86 | v83[0] )
  {
    goto LABEL_11;
  }
  if ( !v80 || v80 == 2 )
  {
    if ( !v81 )
    {
LABEL_9:
      v5 = *(_QWORD *)(a1 + 176);
      v6 = 0;
LABEL_48:
      v8 = 1;
      v12 = a3(a4, v6);
      *(_BYTE *)sub_DFD980(v5, 8) = v12;
      goto LABEL_49;
    }
  }
  else if ( v80 != 3 && !(v82 | v79[0]) )
  {
    goto LABEL_9;
  }
LABEL_11:
  sub_DFF4A0(&v87, v83);
  sub_DFF4A0(v93, v79);
  if ( v90 )
  {
    if ( v90 != 2 )
      goto LABEL_13;
    if ( !v91 )
      goto LABEL_13;
    v34 = *(_QWORD *)(v91 + 16);
    if ( (v34 & 4) != 0 )
      goto LABEL_13;
    v35 = v34 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v35 )
      goto LABEL_13;
    v14 = sub_B559C0(v35);
  }
  else
  {
    if ( !v91 )
      goto LABEL_13;
    v14 = *(_BYTE *)(v91 + 29);
  }
  if ( v14 )
  {
    v68 = &v87;
LABEL_54:
    v74[0] = (_BYTE *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v15 = (unsigned __int8 **)sub_E0FE60(a1, v74, 2478, 0);
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    sub_E052E0(&v76, v68, v16);
    if ( v15 )
      sub_AC84E0(v15, v76, v77);
    if ( v76 != v78 )
      operator delete(v76);
    v8 = 0;
    sub_DFF560(v93);
    sub_DFF560(&v87);
    goto LABEL_49;
  }
LABEL_13:
  if ( v94 )
  {
    if ( v94 != 2 )
      goto LABEL_17;
    if ( !v95 )
      goto LABEL_17;
    v18 = *(_QWORD *)(v95 + 16);
    if ( (v18 & 4) != 0 )
      goto LABEL_17;
    v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v19 )
      goto LABEL_17;
    v7 = sub_B559C0(v19);
  }
  else
  {
    if ( !v95 )
      goto LABEL_17;
    v7 = *(_BYTE *)(v95 + 29);
  }
  if ( v7 )
  {
    v68 = (void **)v93;
    goto LABEL_54;
  }
LABEL_17:
  sub_DFF560(v93);
  sub_DFF560(&v87);
  v8 = sub_DFDF30(a1);
  if ( !(_BYTE)v8 && ((unsigned __int8)sub_DA3FF0(v83) || (unsigned __int8)sub_DA3FF0(v79)) )
    goto LABEL_49;
  if ( v84 == 2 && v80 == 2 )
  {
    v57 = *(_QWORD *)(a1 + 176);
    v58 = sub_CDA6B0((__int64)v79);
    v59 = sub_CDA6B0((__int64)v83);
    v60 = 2;
    if ( v58 <= v59 )
      v60 = v58 < v59 ? 3 : 0;
    v8 = 1;
    v61 = a3(a4, v60);
    *(_BYTE *)sub_DFD980(v57, 8) = v61;
    goto LABEL_49;
  }
  if ( !(unsigned __int8)sub_E00690(v83) || !(unsigned __int8)sub_E00690(v79) )
    goto LABEL_22;
  v20 = *(_QWORD *)sub_CDA220((__int64)v83);
  v21 = (__int64 *)sub_CDA220((__int64)v79);
  if ( (v20 & 2) == 0 )
  {
    v22 = *v21;
    v23 = 0;
    if ( (v22 & 2) == 0 )
      goto LABEL_22;
    goto LABEL_88;
  }
  v22 = *v21;
  v23 = v20 & 0xFFFFFFFFFFFFFFFCLL;
  v24 = 0;
  if ( (v22 & 2) != 0 )
LABEL_88:
    v24 = v22 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v24 != v23 && (unsigned __int8)sub_DAA760(v83, v79) )
  {
    v74[0] = (_BYTE *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v25 = (unsigned __int8 **)sub_E0FE60(a1, v74, 2425, 0);
    v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    sub_E052E0(&v76, v83, v26);
    if ( v25 )
    {
      sub_AC84E0(v25, v76, v77);
      v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_E052E0(&v87, v79, v27);
      sub_AC84E0(v25, v87, v88);
    }
    else
    {
      v63 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_E052E0(&v87, v79, v63);
    }
    if ( v87 != &v89 )
      operator delete(v87);
    v28 = v76;
    if ( v76 == v78 )
      goto LABEL_116;
    goto LABEL_115;
  }
LABEL_22:
  v8 = sub_E00420(v83, v79);
  if ( (_BYTE)v8 )
  {
    v36 = sub_DFF6D0(v83);
    v37 = sub_DFF6D0(v79);
    v38 = *(_QWORD *)(a1 + 176);
    v39 = 2;
    if ( v36 >= v37 )
      v39 = v37 < v36 ? 3 : 0;
    v40 = a3(a4, v39);
    *(_BYTE *)sub_DFD980(v38, 8) = v40;
    goto LABEL_49;
  }
  v9 = sub_CDA990((__int64)v83);
  v10 = sub_CDA990((__int64)v79);
  if ( v9 )
  {
    if ( !v10 )
    {
      if ( !v80 || v80 == 2 )
      {
        if ( !v81 )
          goto LABEL_29;
      }
      else if ( v80 != 3 && !(v79[0] | v82) )
      {
        goto LABEL_29;
      }
      if ( !(unsigned int)sub_CDA800((__int64)v79) )
      {
        v76 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
        v31 = (unsigned __int8 **)sub_E0FE60(a1, &v76, 2472, 0);
        v32 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_E052E0(&v87, v83, v32);
        if ( !v31 )
        {
LABEL_114:
          v28 = v87;
          if ( v87 == &v89 )
          {
LABEL_116:
            v8 = 0;
            goto LABEL_49;
          }
LABEL_115:
          operator delete(v28);
          goto LABEL_116;
        }
LABEL_113:
        sub_AC84E0(v31, v87, v88);
        goto LABEL_114;
      }
    }
LABEL_29:
    v11 = v84;
LABEL_30:
    if ( v11 && v11 != 2 )
    {
      if ( v11 != 3 )
      {
        v9 = 0;
        if ( !(v86 | v83[0]) )
          goto LABEL_34;
      }
      goto LABEL_61;
    }
    goto LABEL_59;
  }
  v11 = v84;
  if ( !v10 )
    goto LABEL_30;
  if ( !v84 || v84 == 2 )
  {
    v17 = v85;
    if ( !v85 )
    {
LABEL_60:
      v9 = 0;
      if ( !v17 )
        goto LABEL_34;
      goto LABEL_61;
    }
    if ( (unsigned int)sub_CDA800((__int64)v83) )
    {
LABEL_59:
      v17 = v85;
      goto LABEL_60;
    }
LABEL_112:
    v76 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v31 = (unsigned __int8 **)sub_E0FE60(a1, &v76, 2472, 0);
    v33 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    sub_E052E0(&v87, v79, v33);
    if ( !v31 )
      goto LABEL_114;
    goto LABEL_113;
  }
  if ( v84 != 3 && !(v83[0] | v86) )
    goto LABEL_34;
  if ( !(unsigned int)sub_CDA800((__int64)v83) )
    goto LABEL_112;
LABEL_61:
  if ( !v80 || v80 == 2 )
  {
    v9 = v81 != 0;
  }
  else
  {
    v9 = 1;
    if ( v80 != 3 )
      v9 = (v79[0] | v82) != 0;
  }
LABEL_34:
  sub_DFF4A0(&v87, v83);
  sub_DFF4A0(v93, v79);
  if ( !v90 || v90 == 2 )
  {
    if ( !v91 )
      goto LABEL_39;
  }
  else if ( v90 != 3 && !((unsigned __int64)v87 | v92) )
  {
    goto LABEL_39;
  }
  if ( v9 )
  {
    if ( (unsigned __int8)sub_E00630(&v87) )
    {
      if ( v90 == 1 )
      {
        v51 = (_QWORD *)v91;
      }
      else
      {
        if ( (unsigned int)(v90 - 2) <= 1 )
          goto LABEL_173;
        v51 = *(_QWORD **)(v91 + 32);
      }
      if ( (*v51 & 2) == 0 )
LABEL_173:
        BUG();
      v52 = (_WORD *)(*v51 & 0xFFFFFFFFFFFFFFFCLL);
      v53 = *v52 & 0x1FF;
      if ( v53 == 9 )
        goto LABEL_172;
      if ( ((v53 + 423) & 0x1FFu) <= 4 )
      {
        v54 = sub_BD8130((__int64)v52);
        v55 = (unsigned int)(v54 - 206);
        if ( (unsigned int)v55 <= 0x13 )
        {
          v65 = 528385;
          if ( _bittest64(&v65, v55) )
          {
            v46 = &v87;
            goto LABEL_150;
          }
        }
        else
        {
          v46 = &v87;
          if ( v54 == 1063 )
            goto LABEL_150;
        }
      }
    }
    else if ( v90 == 1 )
    {
      goto LABEL_135;
    }
  }
LABEL_39:
  if ( !v94 || v94 == 2 )
  {
    if ( !v95 )
      goto LABEL_45;
  }
  else if ( v94 != 3 && !v96 && !v93[0] )
  {
    goto LABEL_45;
  }
  if ( !v9 )
    goto LABEL_45;
  if ( !(unsigned __int8)sub_E00630(v93) )
  {
    if ( v94 != 1 )
      goto LABEL_45;
LABEL_135:
    v73 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v47 = (unsigned __int8 **)sub_E0FE60(a1, &v73, 2475, 0);
    v48 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    sub_E052E0(v74, v83, v48);
    if ( v47 )
    {
      sub_AC84E0(v47, v74[0], (signed __int64)v74[1]);
      v49 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_E052E0(&v76, v79, v49);
      sub_AC84E0(v47, v76, v77);
    }
    else
    {
      v66 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_E052E0(&v76, v79, v66);
    }
    if ( v76 != v78 )
      operator delete(v76);
    v50 = v74[0];
    if ( (__int64 *)v74[0] == &v75 )
      goto LABEL_154;
LABEL_153:
    operator delete(v50);
LABEL_154:
    sub_DFF560(v93);
    sub_DFF560(&v87);
    goto LABEL_49;
  }
  if ( v94 == 1 )
  {
    v41 = (_QWORD *)v95;
  }
  else
  {
    if ( (unsigned int)(v94 - 2) <= 1 )
      goto LABEL_173;
    v41 = *(_QWORD **)(v95 + 32);
  }
  if ( (*v41 & 2) == 0 )
    goto LABEL_173;
  v42 = (_WORD *)(*v41 & 0xFFFFFFFFFFFFFFFCLL);
  v43 = *v42 & 0x1FF;
  if ( v43 == 9 )
  {
LABEL_172:
    v76 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    sub_E0FE60(a1, &v76, 2425, 0);
    goto LABEL_154;
  }
  if ( ((v43 + 423) & 0x1FFu) > 4 )
    goto LABEL_45;
  v44 = sub_BD8130((__int64)v42);
  v45 = (unsigned int)(v44 - 206);
  if ( (unsigned int)v45 <= 0x13 )
  {
    v64 = 528385;
    if ( !_bittest64(&v64, v45) )
      goto LABEL_45;
    v46 = (void **)v93;
LABEL_150:
    v72 = v46;
    v74[0] = (_BYTE *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v70 = (unsigned __int8 **)sub_E0FE60(a1, v74, 2462, 0);
    v56 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    sub_E052E0(&v76, v72, v56);
    if ( v70 )
      sub_AC84E0(v70, v76, v77);
    v50 = v76;
    if ( v76 == v78 )
      goto LABEL_154;
    goto LABEL_153;
  }
  v46 = (void **)v93;
  if ( v44 == 1063 )
    goto LABEL_150;
LABEL_45:
  sub_DFF560(v93);
  sub_DFF560(&v87);
  if ( v84
    || *(_DWORD *)(sub_CDA220((__int64)v83) + 20) != -1
    || v80
    || *(_DWORD *)(sub_CDA220((__int64)v79) + 20) != -1 )
  {
    v5 = *(_QWORD *)(a1 + 176);
    v6 = 4;
    goto LABEL_48;
  }
  v74[0] = (_BYTE *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v69 = (unsigned __int8 **)sub_E0FE60(a1, v74, 2474, 0);
  v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  sub_E052E0(&v76, v83, v29);
  if ( v69 )
  {
    sub_AC84E0(v69, v76, v77);
    v30 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    sub_E052E0(&v87, v79, v30);
    sub_AC84E0(v69, v87, v88);
  }
  else
  {
    v62 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    sub_E052E0(&v87, v79, v62);
  }
  if ( v87 != &v89 )
    operator delete(v87);
  if ( v76 != v78 )
    operator delete(v76);
LABEL_49:
  sub_DFF560(v83);
  sub_DFF560(v79);
  return v8;
}

