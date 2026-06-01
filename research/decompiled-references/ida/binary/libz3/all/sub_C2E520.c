__int64 __fastcall sub_C2E520(__int64 *a1, int a2, int a3, _QWORD *a4, __int64 *a5, int a6)
{
  __int64 *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rbp
  unsigned __int8 v18; // r12
  unsigned int v19; // r15d
  bool v20; // zf
  void *v21; // rbx
  _DWORD *v23; // rax
  __int64 v24; // rax
  __int64 *v25; // r15
  __int64 v26; // rax
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdi
  __int64 v31; // rax
  void *v32; // r14
  __int64 *v33; // r14
  __int64 v34; // rax
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // r14
  void *v41; // r15
  __int64 v42; // rax
  __int64 v43; // rax
  void *v44; // r12
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  bool v48; // al
  _QWORD *v49; // rax
  _QWORD *v50; // r12
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // rax
  __int64 v56; // r12
  int v57; // ecx
  int v58; // r8d
  int v59; // r9d
  _QWORD *v60; // r15
  __int64 v61; // rdi
  __int64 v62; // rax
  int v63; // ecx
  int v64; // r8d
  int v65; // r9d
  _QWORD *v66; // r12
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 *v70; // [rsp+0h] [rbp-F8h]
  int *v71; // [rsp+8h] [rbp-F0h]
  int v72; // [rsp+10h] [rbp-E8h]
  int v73; // [rsp+18h] [rbp-E0h]
  int v74; // [rsp+20h] [rbp-D8h]
  __int64 v75; // [rsp+20h] [rbp-D8h]
  char v76; // [rsp+28h] [rbp-D0h]
  __int64 v77; // [rsp+28h] [rbp-D0h]
  int v78[2]; // [rsp+30h] [rbp-C8h]
  int v79; // [rsp+38h] [rbp-C0h]
  int v80; // [rsp+40h] [rbp-B8h]
  __int64 v81; // [rsp+40h] [rbp-B8h]
  void *v82; // [rsp+48h] [rbp-B0h]
  __int64 v83; // [rsp+48h] [rbp-B0h]
  char v84; // [rsp+5Fh] [rbp-99h] BYREF
  __int64 v85; // [rsp+60h] [rbp-98h] BYREF
  __int64 v86; // [rsp+68h] [rbp-90h] BYREF
  __int64 v87; // [rsp+70h] [rbp-88h] BYREF
  __int64 v88; // [rsp+78h] [rbp-80h] BYREF
  int v89[2]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v90; // [rsp+88h] [rbp-70h]
  _QWORD v91[2]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v92; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v93; // [rsp+A8h] [rbp-50h]
  __int64 v94; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v95; // [rsp+B8h] [rbp-40h]

  v11 = (__int64 *)*a1;
  v12 = a4[1];
  *(_QWORD *)v89 = 0;
  v91[0] = 1;
  v13 = *v11;
  v90 = 0;
  v91[1] = 0;
  v71 = v89;
  if ( !(unsigned __int8)sub_1666AE0(v13, v12, v89, &v84)
    || (v91[0] & 0x100000000LL) == 0 && LODWORD(v91[0]) == 1 && v89[0] )
  {
    v19 = 5;
    goto LABEL_10;
  }
  v16 = sub_15DC610(
          **(_QWORD **)*a1,
          a2,
          a3,
          (int)a4,
          v14,
          v15,
          a6,
          (int)v89,
          v72,
          v73,
          v74,
          v76,
          **(_QWORD **)*a1,
          v79,
          v80,
          v82);
  v17 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v18 = sub_C292F0(a1, v16, a5, v70);
  if ( !v18 )
  {
    v23 = *(_DWORD **)(sub_15D1F10(*a4) + 24);
    if ( v23 && *v23 == 5 )
      v18 = v23[1] == 1;
    v24 = sub_C2C130(a1, 0);
    v75 = v24;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    sub_C282B0(*a5, a5[1]);
    *a5 = v75;
    sub_C294F0((_QWORD ***)a1, v75, v17, v70);
    sub_C2AB80((__int64)a1, v17, *a5, *v70);
    v25 = *(__int64 **)*a1;
    v26 = *v25;
    v92 = 0;
    v93 = 0;
    v81 = v26;
    v94 = 1;
    v95 = 0;
    sub_182CBA0(qword_1C7F2C0, &v94);
    v30 = v25[1];
    BYTE4(v94) &= ~1u;
    LODWORD(v94) = 1;
    if ( !v30 )
    {
      sub_16669E0(v25);
      v30 = v25[1];
    }
    v31 = sub_166A700(v30, (unsigned int)&v92, v18, v27, v28, v29);
    v77 = v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    v32 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v92);
    sub_182CBA0(v32, &v94);
    v33 = *(__int64 **)*a1;
    v34 = *v33;
    v92 = 1;
    v93 = 0;
    v83 = v34;
    v94 = 1;
    v95 = 0;
    sub_182CBA0(qword_1C7F2C0, &v94);
    v38 = v33[1];
    BYTE4(v94) &= ~1u;
    LODWORD(v94) = 1;
    if ( !v38 )
    {
      sub_16669E0(v33);
      v38 = v33[1];
    }
    v39 = sub_166A700(v38, (unsigned int)&v92, v18, v35, v36, v37);
    v40 = v39;
    if ( v39 )
      ++*(_DWORD *)(v39 + 8);
    v41 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v92);
    sub_182CBA0(v41, &v94);
    if ( v89[0] )
    {
      v19 = 5;
      if ( v18 )
      {
LABEL_36:
        if ( v40 )
        {
          v20 = (*(_DWORD *)(v40 + 8))-- == 1;
          if ( v20 )
            sub_15D7BC0(v83, v40);
        }
        sub_C282B0(v77, v81);
        goto LABEL_7;
      }
      BYTE4(v92) &= 0xFCu;
      v44 = qword_1C7F2C0;
      BYTE4(v94) &= 0xFCu;
      LODWORD(v92) = 0;
      v93 = 0;
      LODWORD(v94) = 1;
      v95 = 0;
      if ( (v91[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v92, v91);
      else
        LODWORD(v92) = v91[0];
      sub_182CBA0(v44, &v94);
      BYTE4(v94) &= ~1u;
      LODWORD(v94) = 1;
      if ( (v92 & 0x100000000LL) != 0 )
        v48 = (*(_DWORD *)(v93 + 8) & 1) == 0;
      else
        v48 = (v92 & 1) == 0;
      v20 = !v48;
      v49 = (_QWORD *)*a1;
      if ( v20 )
      {
        v50 = (_QWORD *)*v49;
        v51 = *(_QWORD *)(*v49 + 8LL);
        if ( !v51 )
        {
          sub_16669E0(*v49);
          v51 = v50[1];
        }
        sub_166A700(v51, (unsigned int)&v92, 0, v45, v46, v47);
        sub_15E1B70(*v50);
        v52 = sub_15E1B70(**(_QWORD **)*a1);
        v86 = v52;
        if ( v52 )
          ++*(_DWORD *)(v52 + 8);
        sub_C28530(a1 + 13, &v86);
      }
      else
      {
        sub_15E1B70(*(_QWORD *)*v49);
        v60 = *(_QWORD **)*a1;
        v61 = v60[1];
        if ( !v61 )
        {
          sub_16669E0(*(_QWORD *)*a1);
          v61 = v60[1];
        }
        sub_166A700(v61, (unsigned int)&v92, 0, v57, v58, v59);
        sub_15E1B70(*v60);
        sub_15E1B70(**(_QWORD **)*a1);
        sub_15E1B70(**(_QWORD **)*a1);
        sub_15E1B70(**(_QWORD **)*a1);
        sub_15E1A70(**(_QWORD **)*a1);
        v62 = sub_15E1B70(**(_QWORD **)*a1);
        v87 = v62;
        if ( v62 )
          ++*(_DWORD *)(v62 + 8);
        sub_C28530(a1 + 13, &v87);
        sub_C2BA80(a1, *v70);
        v66 = *(_QWORD **)*a1;
        v67 = v66[1];
        if ( !v67 )
        {
          sub_16669E0(*(_QWORD *)*a1);
          v67 = v66[1];
        }
        sub_166A700(v67, (unsigned int)&v92, 0, v63, v64, v65);
        sub_15E1B70(*v66);
        sub_15E1B70(**(_QWORD **)*a1);
        sub_15E1B70(**(_QWORD **)*a1);
        v68 = sub_15E1B70(**(_QWORD **)*a1);
        v88 = v68;
        if ( v68 )
          ++*(_DWORD *)(v68 + 8);
        sub_C28530(a1 + 13, &v88);
      }
      sub_C2BA80(a1, *v70);
      sub_25A130((char *)&v92);
    }
    else
    {
      if ( v18 )
      {
        if ( !a1[19] )
        {
          v55 = sub_C2C130(a1, 0);
          v56 = v55;
          if ( v55 )
            ++*(_DWORD *)(v55 + 8);
          sub_C282B0(a1[19], a1[20]);
          a1[19] = v56;
        }
      }
      else if ( !a1[21] )
      {
        v53 = sub_C2C130(a1, 0);
        v54 = v53;
        if ( v53 )
          ++*(_DWORD *)(v53 + 8);
        sub_C282B0(a1[21], a1[22]);
        a1[21] = v54;
      }
      sub_15E1B70(**(_QWORD **)*a1);
      sub_15E1B70(**(_QWORD **)*a1);
      v42 = sub_15E1B70(**(_QWORD **)*a1);
      v85 = v42;
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      sub_C28530(a1 + 13, &v85);
      sub_C2BA80(a1, *v70);
      sub_15E1B70(**(_QWORD **)*a1);
      sub_15E1B70(**(_QWORD **)*a1);
      sub_15E1A70(**(_QWORD **)*a1);
      v43 = sub_15E1B70(**(_QWORD **)*a1);
      v92 = v43;
      if ( v43 )
        ++*(_DWORD *)(v43 + 8);
      sub_C28530(a1 + 13, &v92);
      sub_C2BA80(a1, *v70);
    }
    v19 = 4;
    goto LABEL_36;
  }
  v19 = 4;
LABEL_7:
  if ( v17 )
  {
    v20 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v20 )
      sub_15D7BC0(*(_QWORD *)v78, v17);
  }
LABEL_10:
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v71);
  sub_182CBA0(v21, v91);
  return v19;
}

