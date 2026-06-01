__int64 __fastcall sub_D66200(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 *a5, int a6)
{
  int v8; // eax
  __int64 v9; // rdi
  int v10; // r12d
  _DWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r13
  void *v15; // r15
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rax
  int v25; // r9d
  int v26; // r9d
  int v27; // r9d
  int v28; // r9d
  bool v29; // zf
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdx
  void *v35; // rbx
  void *v36; // rbx
  __int64 v38; // rsi
  void *v39; // r14
  void *v40; // rbx
  _DWORD *v41; // rax
  __int64 v42; // [rsp+0h] [rbp-260h]
  __int64 v43; // [rsp+8h] [rbp-258h]
  __int64 v44; // [rsp+10h] [rbp-250h]
  __int64 v45; // [rsp+18h] [rbp-248h]
  int v46[2]; // [rsp+28h] [rbp-238h]
  __int64 v47; // [rsp+30h] [rbp-230h]
  __int64 v48; // [rsp+38h] [rbp-228h]
  __int64 v49; // [rsp+40h] [rbp-220h]
  __int64 v50; // [rsp+48h] [rbp-218h]
  __int64 v51; // [rsp+50h] [rbp-210h]
  __int64 v52; // [rsp+58h] [rbp-208h]
  void *v53; // [rsp+60h] [rbp-200h]
  void *v54; // [rsp+60h] [rbp-200h]
  __int64 v55; // [rsp+68h] [rbp-1F8h]
  int v56; // [rsp+70h] [rbp-1F0h]
  __int64 v57; // [rsp+70h] [rbp-1F0h]
  __int64 v58; // [rsp+70h] [rbp-1F0h]
  int v60; // [rsp+78h] [rbp-1E8h]
  int v61; // [rsp+78h] [rbp-1E8h]
  int v62; // [rsp+78h] [rbp-1E8h]
  int v63; // [rsp+78h] [rbp-1E8h]
  int v64; // [rsp+78h] [rbp-1E8h]
  int v65; // [rsp+78h] [rbp-1E8h]
  __int64 v66; // [rsp+90h] [rbp-1D0h] BYREF
  __int64 v67; // [rsp+98h] [rbp-1C8h]
  __int64 v68; // [rsp+A0h] [rbp-1C0h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-1B8h]
  __int64 v70; // [rsp+B0h] [rbp-1B0h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-1A8h]
  __int64 v72; // [rsp+C0h] [rbp-1A0h] BYREF
  __int64 v73; // [rsp+C8h] [rbp-198h]
  __int64 v74; // [rsp+D0h] [rbp-190h] BYREF
  __int64 v75; // [rsp+D8h] [rbp-188h]
  _QWORD v76[2]; // [rsp+E0h] [rbp-180h] BYREF
  _QWORD v77[2]; // [rsp+F0h] [rbp-170h] BYREF
  _QWORD v78[2]; // [rsp+100h] [rbp-160h] BYREF
  _QWORD v79[2]; // [rsp+110h] [rbp-150h] BYREF
  __int64 v80; // [rsp+120h] [rbp-140h] BYREF
  __int64 v81; // [rsp+128h] [rbp-138h]
  __int64 v82; // [rsp+130h] [rbp-130h] BYREF
  __int64 v83; // [rsp+138h] [rbp-128h]
  __int64 v84; // [rsp+140h] [rbp-120h]
  _BYTE v85[8]; // [rsp+148h] [rbp-118h] BYREF
  _BYTE v86[32]; // [rsp+150h] [rbp-110h] BYREF
  __int64 v87; // [rsp+170h] [rbp-F0h] BYREF
  _BYTE v88[8]; // [rsp+178h] [rbp-E8h] BYREF
  _BYTE v89[32]; // [rsp+180h] [rbp-E0h] BYREF
  __int64 v90; // [rsp+1A0h] [rbp-C0h] BYREF
  _BYTE v91[8]; // [rsp+1A8h] [rbp-B8h] BYREF
  _BYTE v92[32]; // [rsp+1B0h] [rbp-B0h] BYREF
  __int64 v93; // [rsp+1D0h] [rbp-90h] BYREF
  _BYTE v94[8]; // [rsp+1D8h] [rbp-88h] BYREF
  _BYTE v95[32]; // [rsp+1E0h] [rbp-80h] BYREF
  __int64 v96; // [rsp+200h] [rbp-60h] BYREF
  _BYTE v97[8]; // [rsp+208h] [rbp-58h] BYREF
  _BYTE v98[80]; // [rsp+210h] [rbp-50h] BYREF

  v56 = sub_15C5540((int)a1 + 432, *(_QWORD *)(a2 + 40), a3, a4, (_DWORD)a5, a6);
  v8 = sub_15C5560(a1 + 54, *(_QWORD *)(a2 + 40));
  v9 = *(_QWORD *)(a4 + 8);
  v76[0] = 0;
  v76[1] = 0;
  v10 = v8;
  v77[0] = 1;
  v77[1] = 0;
  v78[0] = 0;
  v78[1] = 0;
  v79[0] = 1;
  v79[1] = 0;
  v11 = *(_DWORD **)(sub_15D1F10(v9) + 24);
  if ( v11
    && *v11 == 5
    && v11[1] == 1
    && (v41 = *(_DWORD **)(sub_15D1F10(*(_QWORD *)(a4 + 16)) + 24)) != nullptr
    && *v41 == 5
    && !v41[1] )
  {
    if ( !(unsigned __int8)sub_1666AE0(a1 + 32, *(_QWORD *)(a4 + 8), v78, &v87)
      || !(unsigned __int8)sub_1666AE0(a1 + 32, *(_QWORD *)(a4 + 16), v76, &v90) )
    {
      v38 = 2870;
      sub_1872CE0("");
LABEL_35:
      sub_1873130(114, v38);
    }
  }
  else if ( !(unsigned __int8)sub_1666AE0(a1 + 32, *(_QWORD *)(a4 + 16), v78, &v93)
         || !(unsigned __int8)sub_1666AE0(a1 + 32, *(_QWORD *)(a4 + 8), v76, &v96) )
  {
    v38 = 2875;
    sub_1872CE0("");
    goto LABEL_35;
  }
  if ( LODWORD(v76[0]) )
  {
    v84 = a1[62];
    sub_181A6B0(v85);
    v87 = a1[62];
    sub_181A6B0(v88);
    v90 = a1[62];
    sub_181A6B0(v91);
    v93 = a1[62];
    sub_181A6B0(v94);
    v96 = a1[62];
    sub_181A6B0(v97);
    sub_1823000(a1[62], (unsigned int)v85, v56, v10, 0, (unsigned int)v78, (__int64)v76);
    sub_1823000(a1[62], (unsigned int)v88, v56, v10, 1, (unsigned int)v78, (__int64)v76);
    sub_1823000(a1[62], (unsigned int)v91, v56, v10, 2, (unsigned int)v78, (__int64)v76);
    sub_1823000(a1[62], (unsigned int)v94, v56, v10, 3, (unsigned int)v78, (__int64)v76);
    sub_1823000(a1[62], (unsigned int)v97, v56, v10, 4, (unsigned int)v78, (__int64)v76);
    v12 = a1[1];
    v13 = *(_QWORD *)(a2 + 40);
    v66 = 0;
    v57 = v12;
    v14 = v12;
    v67 = v12;
    sub_D65DE0(a1, v13, (__int64)v85, &v66);
    v69 = v14;
    v47 = v66;
    v68 = 0;
    v42 = v67;
    sub_D65DE0(a1, v13, (__int64)v88, &v68);
    v70 = 0;
    v48 = v68;
    v43 = v69;
    v71 = v57;
    sub_D65DE0(a1, v13, (__int64)v91, &v70);
    v72 = 0;
    v49 = v70;
    v44 = v71;
    v73 = v57;
    sub_D65DE0(a1, v13, (__int64)v94, &v72);
    v74 = 0;
    v50 = v72;
    v45 = v73;
    v75 = v57;
    sub_D65DE0(a1, v13, (__int64)v97, &v74);
    v80 = 2;
    v81 = 0;
    v51 = v74;
    v82 = 1;
    v83 = 0;
    v58 = v75;
    *(_QWORD *)v46 = a1[1];
    v52 = (__int64)(a1 + 29);
    sub_182CBA0(qword_1C7F2C0, &v82);
    BYTE4(v82) &= ~1u;
    LODWORD(v82) = 1;
    sub_1674520(a1 + 29, &v80, 3);
    v15 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v80);
    sub_182CBA0(v15, &v82);
    v16 = sub_15E1B70(v46[0]);
    v17 = v16;
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    v80 = 2;
    v81 = 0;
    v18 = a1[1];
    v82 = 1;
    v83 = 0;
    sub_182CBA0(qword_1C7F2C0, &v82);
    LODWORD(v82) = 1;
    BYTE4(v82) &= ~1u;
    sub_1674520(v52, &v80, 3);
    v53 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v80);
    sub_182CBA0(v53, &v82);
    v19 = sub_15E1B70(v18);
    v20 = v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    v21 = a1[1];
    sub_D50390(v52, 3u);
    v22 = sub_15E1B70(v21);
    v23 = v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    v54 = (void *)a1[1];
    sub_D50430(v52, 3u);
    v24 = sub_15E1B70((int)v54);
    v55 = v24;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    sub_D51DB0((__int64)a1, v17, v50, v51, a5, v25);
    sub_D51DB0((__int64)a1, v20, v49, *a5, a5, v26);
    sub_D51DB0((__int64)a1, v23, v48, *a5, a5, v27);
    sub_D51DB0((__int64)a1, v55, v47, *a5, a5, v28);
    if ( v55 && (v60 = *(_DWORD *)(v55 + 8), *(_DWORD *)(v55 + 8) = v60 - 1, v60 == 1) )
    {
      sub_15D7BC0(*(_QWORD *)v46, v55);
      if ( !v23 )
        goto LABEL_18;
    }
    else if ( !v23 )
    {
      goto LABEL_18;
    }
    v29 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v29 )
    {
      sub_15D7BC0(*(_QWORD *)v46, v23);
      if ( !v20 )
        goto LABEL_20;
      goto LABEL_19;
    }
LABEL_18:
    if ( !v20 )
      goto LABEL_20;
LABEL_19:
    v29 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v29 )
    {
      sub_15D7BC0(*(_QWORD *)v46, v20);
      if ( !v17 )
        goto LABEL_22;
      goto LABEL_21;
    }
LABEL_20:
    if ( !v17 )
      goto LABEL_22;
LABEL_21:
    v29 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v29 )
    {
      sub_15D7BC0(*(_QWORD *)v46, v17);
      v30 = v51;
      if ( !v51 )
        goto LABEL_24;
      goto LABEL_23;
    }
LABEL_22:
    v30 = v51;
    if ( !v51 )
      goto LABEL_24;
LABEL_23:
    v61 = *(_DWORD *)(v30 + 8);
    *(_DWORD *)(v30 + 8) = v61 - 1;
    if ( v61 == 1 )
    {
      sub_15D7BC0(v58, v30);
      v31 = v50;
      if ( !v50 )
        goto LABEL_26;
      goto LABEL_25;
    }
LABEL_24:
    v31 = v50;
    if ( !v50 )
      goto LABEL_26;
LABEL_25:
    v62 = *(_DWORD *)(v31 + 8);
    *(_DWORD *)(v31 + 8) = v62 - 1;
    if ( v62 == 1 )
    {
      sub_15D7BC0(v45, v31);
      v32 = v49;
      if ( !v49 )
        goto LABEL_28;
      goto LABEL_27;
    }
LABEL_26:
    v32 = v49;
    if ( !v49 )
      goto LABEL_28;
LABEL_27:
    v63 = *(_DWORD *)(v32 + 8);
    *(_DWORD *)(v32 + 8) = v63 - 1;
    if ( v63 == 1 )
    {
      sub_15D7BC0(v44, v32);
      v33 = v48;
      if ( !v48 )
        goto LABEL_30;
      goto LABEL_29;
    }
LABEL_28:
    v33 = v48;
    if ( !v48 )
      goto LABEL_30;
LABEL_29:
    v64 = *(_DWORD *)(v33 + 8);
    *(_DWORD *)(v33 + 8) = v64 - 1;
    if ( v64 == 1 )
    {
      sub_15D7BC0(v43, v33);
      v34 = v47;
      if ( v47 )
      {
LABEL_31:
        v65 = *(_DWORD *)(v34 + 8);
        *(_DWORD *)(v34 + 8) = v65 - 1;
        if ( v65 == 1 )
          sub_15D7BC0(v42, v34);
      }
LABEL_33:
      sub_182EF00(*(_QWORD *)(v96 + 728), v98);
      sub_182EF00(*(_QWORD *)(v93 + 728), v95);
      sub_182EF00(*(_QWORD *)(v90 + 728), v92);
      sub_182EF00(*(_QWORD *)(v87 + 728), v89);
      sub_182EF00(*(_QWORD *)(v84 + 728), v86);
      v35 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v78);
      sub_182CBA0(v35, v79);
      v36 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v76);
      return sub_182CBA0(v36, v77);
    }
LABEL_30:
    v34 = v47;
    if ( v47 )
      goto LABEL_31;
    goto LABEL_33;
  }
  sub_D518E0((__int64)a1, *(_QWORD *)(a2 + 40), a5);
  v39 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v78);
  sub_182CBA0(v39, v79);
  v40 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v76);
  return sub_182CBA0(v40, v77);
}

