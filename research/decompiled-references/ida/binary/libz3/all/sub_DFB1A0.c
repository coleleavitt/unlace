__int64 __fastcall sub_DFB1A0(_QWORD *a1, char a2)
{
  char **exception; // r13
  __int64 v4; // rdi
  unsigned int v5; // r14d
  __int64 *v6; // rbp
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned int v13; // r14d
  __int64 v14; // rbp
  __int64 v15; // rcx
  unsigned int v16; // r14d
  __int64 v17; // rbp
  __int64 v18; // rcx
  unsigned int v19; // r14d
  __int64 v20; // rbp
  _QWORD *v21; // rbp
  _OWORD *v22; // rax
  _OWORD *v23; // rax
  _QWORD *v24; // r14
  unsigned int v25; // r15d
  __int64 v26; // rbp
  __int64 v27; // rcx
  unsigned int v28; // r15d
  __int64 v29; // rbp
  __int64 v30; // rcx
  unsigned int v31; // r15d
  __int64 v32; // rbp
  __int64 v33; // rcx
  unsigned int v34; // r15d
  __int64 v35; // rbp
  _BOOL4 v36; // r15d
  __int64 v37; // rbp
  _BOOL8 v38; // r15
  __int64 v39; // rbp
  _QWORD *v40; // rbp
  void (__fastcall ***v41)(_QWORD); // r12
  __int64 v43; // rcx
  __int64 v44; // r15
  unsigned int v45; // r14d
  _QWORD *v46; // rax
  unsigned int *v47; // rax
  __int64 v48; // rcx
  unsigned int *v49; // rbp
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // r12d
  unsigned int v54; // r12d
  unsigned int v55; // r12d
  unsigned int v56; // r12d
  unsigned int v57; // r12d
  unsigned int v58; // r12d
  unsigned int v59; // r12d
  unsigned int v60; // r14d
  unsigned int *v61; // r15
  __int64 v62; // rax
  int v63; // edx
  int v64; // ecx
  int v65; // r8d
  int v66; // r9d
  unsigned int v67; // r8d
  size_t v68; // rsi
  unsigned int *v69; // rax
  __int64 v70; // [rsp+8h] [rbp-C0h]
  unsigned int *v71; // [rsp+8h] [rbp-C0h]
  __int64 v72; // [rsp+8h] [rbp-C0h]
  __int64 *v73; // [rsp+10h] [rbp-B8h]
  unsigned int v74; // [rsp+10h] [rbp-B8h]
  unsigned int *v76; // [rsp+28h] [rbp-A0h] BYREF
  char v77[8]; // [rsp+30h] [rbp-98h] BYREF
  char v78[8]; // [rsp+38h] [rbp-90h] BYREF
  char v79[8]; // [rsp+40h] [rbp-88h] BYREF
  char v80[8]; // [rsp+48h] [rbp-80h] BYREF
  char v81[8]; // [rsp+50h] [rbp-78h] BYREF
  char v82[8]; // [rsp+58h] [rbp-70h] BYREF
  char v83[8]; // [rsp+60h] [rbp-68h] BYREF
  char v84[8]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v85[11]; // [rsp+70h] [rbp-58h] BYREF

  v4 = a1[37];
  if ( a2 )
  {
    v5 = 1;
    v6 = (__int64 *)sub_15D2690(v4, 0);
    sub_E00280((_DWORD)a1, (_DWORD)v6, v7, v8, v9, v10);
    sub_DF9B00((__int64)a1, v6);
    if ( a1[31] )
      v5 = (unsigned __int8)sub_E3A250((int)a1 + 248);
    v11 = sub_186B270(0x1C0u);
    sub_1666480(v11);
    sub_180C5A0(v85, "arith");
    v12 = v5;
    v13 = 1;
    sub_E00340(a1, v85, v11, v12);
    if ( a1[31] )
      v13 = (unsigned __int8)sub_E3A680((int)a1 + 248);
    v14 = sub_186B270(0x268u);
    sub_1672BD0(v14);
    sub_180C5A0(v85, "bv");
    v15 = v13;
    v16 = 1;
    sub_E00340(a1, v85, v14, v15);
    if ( a1[31] )
      v16 = (unsigned __int8)sub_E3AE70((int)a1 + 248);
    v17 = sub_186B270(0x88u);
    sub_1684100(v17);
    sub_180C5A0(v85, "array");
    v18 = v16;
    v19 = 1;
    sub_E00340(a1, v85, v17, v18);
    if ( a1[31] )
      v19 = (unsigned __int8)sub_E3AC50((int)a1 + 248);
    v20 = sub_186B270(0x168u);
    sub_D0E7F0(v20);
    sub_180C5A0(v85, "datatype");
    sub_E00340(a1, v85, v20, v19);
    v21 = (_QWORD *)sub_186B270(0x58u);
    memset(v21, 0, 0x58u);
    *((_DWORD *)v21 + 4) = -1;
    *v21 = &off_1C7A610;
    v22 = (_OWORD *)sub_186B270(0x80u);
    v21[4] = v22;
    *((_DWORD *)v21 + 12) = 0;
    v21[5] = 8;
    *v22 = 0;
    v22[1] = 0;
    v22[2] = 0;
    v22[3] = 0;
    v22[4] = 0;
    v22[5] = 0;
    v22[6] = 0;
    v22[7] = 0;
    v23 = (_OWORD *)sub_186B270(0x80u);
    v21[7] = v23;
    v21[8] = 8;
    *((_DWORD *)v21 + 18) = 0;
    *((_BYTE *)v21 + 80) = 0;
    *v23 = 0;
    v23[1] = 0;
    v23[2] = 0;
    v23[3] = 0;
    v23[4] = 0;
    v23[5] = 0;
    v23[6] = 0;
    v23[7] = 0;
    sub_180C5A0(v85, "recfun");
    sub_E00340(a1, v85, v21, 1);
    if ( a1[31] )
    {
      v24 = a1 + 31;
      v25 = (unsigned __int8)sub_E3AA00((int)a1 + 248);
    }
    else
    {
      v25 = 1;
      v24 = a1 + 31;
    }
    v26 = sub_186B270(0x28u);
    sub_1682320(v26);
    sub_180C5A0(v85, "char");
    v27 = v25;
    v28 = 1;
    sub_E00340(a1, v85, v26, v27);
    if ( a1[31] )
      v28 = (unsigned __int8)sub_E3AA00((int)v24);
    v29 = sub_186B270(0x60u);
    sub_163AF90(v29);
    sub_180C5A0(v85, "seq");
    v30 = v28;
    v31 = 1;
    sub_E00340(a1, v85, v29, v30);
    if ( a1[31] )
      v31 = (unsigned __int8)sub_E3A060((int)v24);
    v32 = sub_186B270(0x40u);
    sub_168D980(v32);
    sub_180C5A0(v85, "pb");
    v33 = v31;
    v34 = 1;
    sub_E00340(a1, v85, v32, v33);
    if ( a1[31] )
      v34 = (unsigned __int8)sub_E3AAB0((int)v24);
    v35 = sub_186B270(0x3F0u);
    sub_15C5D50(v35);
    sub_180C5A0(v85, "fpa");
    sub_E00340(a1, v85, v35, v34);
    v36 = a1[31] == 0;
    v37 = sub_186B270(0xA0u);
    sub_1624E10(v37);
    sub_180C5A0(v85, "datalog_relation");
    sub_E00340(a1, v85, v37, v36);
    v38 = a1[31] == 0;
    v39 = sub_186B270(0x50u);
    sub_1664950(v39);
    sub_180C5A0(v85, "specrels");
    sub_E00340(a1, v85, v39, v38);
    v40 = (_QWORD *)sub_186B270(0x28u);
    *v40 = off_1C5B3B0;
    v40[1] = a1;
    sub_DFBCB0(a1);
    sub_15F01E0(v40 + 2, a1[37]);
    v41 = (void (__fastcall ***)(_QWORD))a1[114];
    if ( v40 == v41 )
      goto LABEL_22;
    goto LABEL_19;
  }
  v43 = *(_QWORD *)(v4 + 568);
  v44 = v43 + 16LL * *(unsigned int *)(v4 + 576);
  if ( v43 == v44 )
    goto LABEL_71;
  while ( !*(_QWORD *)v43 || *(_QWORD *)v43 == qword_1C7F378 )
  {
    v43 += 16;
    if ( v44 == v43 )
      goto LABEL_71;
  }
  if ( v43 == v44 )
  {
LABEL_71:
    v49 = nullptr;
  }
  else
  {
    v70 = v43;
    v45 = *(_DWORD *)(v43 + 8);
    v46 = (_QWORD *)sub_186B270(0x10u);
    *v46 = 2;
    v47 = (unsigned int *)(v46 + 1);
    v48 = v70;
    v49 = v47;
LABEL_33:
    *v47 = v45;
    v50 = v48 + 16;
    ++*(v49 - 1);
    if ( v44 != v48 + 16 )
    {
      do
      {
        while ( 1 )
        {
          v51 = v50;
          if ( !*(_QWORD *)v50 || *(_QWORD *)v50 == qword_1C7F378 )
            break;
          if ( v50 == v44 )
            goto LABEL_39;
          v45 = *(_DWORD *)(v50 + 8);
          v52 = *(v49 - 1);
          if ( (_DWORD)v52 == *(v49 - 2) )
          {
            v67 = (unsigned int)(3 * v52 + 1) >> 1;
            v68 = 4 * v67 + 8;
            if ( 4 * (int)v52 + 8 >= (unsigned int)v68 || (unsigned int)v52 >= v67 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_DF63A0(v85, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v85);
              sub_233E40((__int64)v85);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v74 = (unsigned int)(3 * v52 + 1) >> 1;
            v72 = v51;
            v69 = (unsigned int *)sub_186B300(v49 - 2, v68);
            v49 = v69 + 2;
            v48 = v72;
            *v69 = v74;
            v47 = &v69[v69[1] + 2];
            goto LABEL_33;
          }
          v49[v52] = v45;
          v50 = v51 + 16;
          ++*(v49 - 1);
          if ( v44 == v51 + 16 )
            goto LABEL_39;
        }
        v50 += 16;
      }
      while ( v44 != v50 );
      if ( a1[31] )
        goto LABEL_40;
      goto LABEL_66;
    }
  }
LABEL_39:
  if ( !a1[31] )
  {
LABEL_66:
    v53 = 1;
    goto LABEL_41;
  }
LABEL_40:
  v53 = (unsigned __int8)sub_E3A250((int)a1 + 248);
LABEL_41:
  sub_180C5A0(v77, "arith");
  v76 = v49;
  sub_E00390(a1, v77, v53, &v76);
  if ( a1[31] )
    v54 = (unsigned __int8)sub_E3A680((int)a1 + 248);
  else
    v54 = 1;
  sub_180C5A0(v78, "bv");
  sub_E00390(a1, v78, v54, &v76);
  if ( a1[31] )
    v55 = (unsigned __int8)sub_E3AE70((int)a1 + 248);
  else
    v55 = 1;
  sub_180C5A0(v79, "array");
  sub_E00390(a1, v79, v55, &v76);
  if ( a1[31] )
    v56 = (unsigned __int8)sub_E3AC50((int)a1 + 248);
  else
    v56 = 1;
  sub_180C5A0(v80, "datatype");
  sub_E00390(a1, v80, v56, &v76);
  sub_180C5A0(v81, "recfun");
  sub_E00390(a1, v81, 1, &v76);
  if ( a1[31] )
    v57 = (unsigned __int8)sub_E3AA00((int)a1 + 248);
  else
    v57 = 1;
  sub_180C5A0(v82, "char");
  sub_E00390(a1, v82, v57, &v76);
  if ( a1[31] )
    v58 = (unsigned __int8)sub_E3AA00((int)a1 + 248);
  else
    v58 = 1;
  sub_180C5A0(v83, "seq");
  sub_E00390(a1, v83, v58, &v76);
  if ( a1[31] )
    v59 = (unsigned __int8)sub_E3AAB0((int)a1 + 248);
  else
    v59 = 1;
  sub_180C5A0(v84, "fpa");
  sub_E00390(a1, v84, v59, &v76);
  if ( a1[31] )
    v60 = (unsigned __int8)sub_E3A060((int)a1 + 248);
  else
    v60 = 1;
  sub_180C5A0(v85, "pb");
  sub_E00390(a1, v85, v60, &v76);
  if ( v49 )
  {
    v61 = v49;
    v71 = &v49[*(v49 - 1)];
    if ( v49 != v71 )
    {
      do
      {
        v62 = sub_15D2690(a1[37], *v61);
        if ( v62 )
        {
          v73 = (__int64 *)v62;
          sub_E00280((_DWORD)a1, v62, v63, v64, v65, v66);
          sub_DF9B00((__int64)a1, v73);
        }
        ++v61;
      }
      while ( v71 != v61 );
    }
    sub_186B220(v49 - 2);
  }
  v40 = (_QWORD *)sub_186B270(0x28u);
  *v40 = off_1C5B3B0;
  v40[1] = a1;
  sub_DFBCB0(a1);
  sub_15F01E0(v40 + 2, a1[37]);
  v41 = (void (__fastcall ***)(_QWORD))a1[114];
  if ( v40 == v41 )
  {
    v24 = a1 + 31;
    *(_QWORD *)(a1[39] + 104LL) = v40;
    goto LABEL_25;
  }
  v24 = a1 + 31;
LABEL_19:
  if ( v41 )
  {
    (**v41)(v41);
    sub_186B220(v41);
  }
  a1[114] = v40;
LABEL_22:
  *(_QWORD *)(a1[39] + 104LL) = v40;
  if ( !a1[31] && a2 )
    sub_DFB140((__int64)a1);
LABEL_25:
  if ( a1[107] )
    sub_DFED30(a1);
  sub_DFBCB0(a1);
  return sub_E2D2A0(a1 + 41, a1[37], v24);
}

