__int64 __fastcall sub_CF9FE0(__int64 a1, int a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  __int64 v10; // r11
  __int64 v11; // rax
  int v12; // eax
  int v13; // edx
  void *v14; // r12
  __int64 v15; // rdx
  char v16; // cl
  __int64 v17; // rax
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdi
  __int64 v21; // rax
  char v22; // r13
  __int64 v23; // r12
  __int64 v24; // r12
  __int64 v25; // r13
  int v26; // eax
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdi
  void *v31; // rbx
  void *v32; // rbx
  int *v34; // rax
  unsigned int v35; // eax
  void *v36; // r12
  void *v37; // rdi
  void *v38; // r12
  void *v39; // r12
  int v40; // edx
  __int64 v41; // rdx
  char v42; // cl
  __int64 v43; // rdx
  void *v44; // r13
  __int64 v45; // rdi
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // rax
  int v51; // eax
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  __int64 v55; // rdi
  void *v56; // rbx
  void *v57; // rbx
  void *v58; // r13
  int v59; // edx
  void *v60; // r13
  __int64 v61; // rdx
  char v62; // cl
  __int64 v63; // rdx
  void *v64; // r13
  void *v65; // r12
  void *v66; // rdi
  int v67; // [rsp+0h] [rbp-128h]
  int v68[2]; // [rsp+8h] [rbp-120h]
  int v69[2]; // [rsp+8h] [rbp-120h]
  char v70; // [rsp+10h] [rbp-118h]
  int v71; // [rsp+10h] [rbp-118h]
  int v72[2]; // [rsp+20h] [rbp-108h]
  int v73[2]; // [rsp+20h] [rbp-108h]
  char v74; // [rsp+28h] [rbp-100h]
  char v75[8]; // [rsp+28h] [rbp-100h]
  unsigned int v76; // [rsp+28h] [rbp-100h]
  unsigned int v77; // [rsp+28h] [rbp-100h]
  int v78; // [rsp+30h] [rbp-F8h]
  unsigned int v79; // [rsp+30h] [rbp-F8h]
  int v80; // [rsp+30h] [rbp-F8h]
  int v81[2]; // [rsp+30h] [rbp-F8h]
  int v82; // [rsp+38h] [rbp-F0h]
  void *v83; // [rsp+38h] [rbp-F0h]
  int v84; // [rsp+40h] [rbp-E8h]
  void *ptr; // [rsp+48h] [rbp-E0h]
  void *ptra; // [rsp+48h] [rbp-E0h]
  __int64 v87; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v88; // [rsp+58h] [rbp-D0h]
  __int64 v89; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v90; // [rsp+68h] [rbp-C0h]
  int v91; // [rsp+70h] [rbp-B8h] BYREF
  char v92; // [rsp+74h] [rbp-B4h]
  int v93; // [rsp+80h] [rbp-A8h] BYREF
  char v94; // [rsp+84h] [rbp-A4h]
  int v95[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v96; // [rsp+98h] [rbp-90h]
  int v97[2]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v98; // [rsp+A8h] [rbp-80h]
  int v99; // [rsp+B0h] [rbp-78h] BYREF
  char v100; // [rsp+B4h] [rbp-74h]
  __int64 v101; // [rsp+B8h] [rbp-70h]
  int v102; // [rsp+C0h] [rbp-68h] BYREF
  char v103; // [rsp+C4h] [rbp-64h]
  __int64 v104; // [rsp+C8h] [rbp-60h]
  int v105[2]; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v106; // [rsp+D8h] [rbp-50h]
  int v107[2]; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v108; // [rsp+E8h] [rbp-40h]

  if ( *(_BYTE *)a1 )
    return 0;
  v5 = *(_QWORD *)(a1 + 16);
  if ( !(unsigned __int8)sub_CF72A0(*(_QWORD *)(a1 + 8), v5, a3) )
  {
    if ( (unsigned __int8)sub_CF72A0(v10, v5, a4) )
    {
      v74 = a1 + 48;
      v11 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(a3) + 24) + 8LL);
      if ( !*(_BYTE *)(v11 + 8) )
      {
        v12 = *(_DWORD *)v11;
        *(_QWORD *)v95 = 0;
        v96 = 0;
        v78 = v12;
        *(_QWORD *)v97 = 1;
        v98 = 0;
        if ( a5 )
        {
          sub_17F6290(&v99, (unsigned int)(v12 - 1));
          LOBYTE(v105[1]) &= 0xFCu;
          LOBYTE(v107[1]) &= 0xFCu;
          v105[0] = 0;
          v58 = qword_1C7F2C0;
          v106 = 0;
          v107[0] = 1;
          v108 = 0;
          if ( (v100 & 1) != 0 )
            sub_182C690(qword_1C7F2C0, v105, &v99);
          else
            v105[0] = v99;
          if ( (v103 & 1) != 0 )
          {
            sub_182C690(v58, v107, &v102);
          }
          else
          {
            LOBYTE(v107[1]) &= ~1u;
            v107[0] = v102;
          }
          sub_1831620(qword_1C7F2C0, v105);
          v59 = v105[0];
          v60 = qword_1C7F2C0;
          v105[0] = v95[0];
          v95[0] = v59;
          v61 = v106;
          v106 = v96;
          v96 = v61;
          v62 = v105[1] & 1;
          LOBYTE(v61) = v95[1] & 0xFC | v105[1] & 2;
          LOBYTE(v105[1]) = v95[1] & 1 | v105[1] & 0xFC | v95[1] & 2;
          LOBYTE(v95[1]) = v62 | v61;
          LODWORD(v61) = v107[0];
          v107[0] = v97[0];
          v97[0] = v61;
          v63 = v108;
          v108 = v98;
          v98 = v63;
          LOBYTE(v63) = v107[1] & 1 | v97[1] & 0xFC | v107[1] & 2;
          LOBYTE(v107[1]) = v97[1] & 1 | v107[1] & 0xFC | v97[1] & 2;
          LOBYTE(v97[1]) = v63;
          sub_182CBA0(qword_1C7F2C0, v105);
          sub_182CBA0(v60, v107);
          v64 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v99);
          sub_182CBA0(v64, &v102);
        }
        else
        {
          *(_QWORD *)v105 = 0;
          v106 = 0;
          *(_QWORD *)v107 = 1;
          v108 = 0;
          sub_182CBA0(qword_1C7F2C0, v107);
          v13 = v105[0];
          v14 = qword_1C7F2C0;
          v105[0] = v95[0];
          v95[0] = v13;
          v15 = v106;
          v106 = v96;
          v96 = v15;
          v16 = v105[1] & 1;
          LOBYTE(v15) = v95[1] & 0xFC | v105[1] & 2;
          LOBYTE(v105[1]) = v95[1] & 1 | v105[1] & 0xFC | v95[1] & 2;
          LOBYTE(v95[1]) = v16 | v15;
          v107[0] = v97[0];
          v17 = v98;
          v98 = v108;
          v108 = v17;
          v97[0] = 1;
          LOBYTE(v15) = v97[1] & 0xFC | v107[1] & 2;
          LOBYTE(v107[1]) = v97[1] & 1 | v97[1] & 2 | v107[1] & 0xFC;
          LOBYTE(v97[1]) = v15;
          sub_182CBA0(qword_1C7F2C0, v105);
          sub_182CBA0(v14, v107);
        }
        v20 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)v105 = a3;
        v106 = a4;
        v21 = sub_15DC610(
                v20,
                a2,
                2,
                (int)v105,
                v18,
                v19,
                v67,
                (int)v105,
                (int)v95,
                a2,
                (int)v107,
                v74,
                v78,
                v82,
                v84,
                ptr);
        v22 = sub_CF9350(a1, v21, &v99);
        v23 = *(_QWORD *)(a1 + 32);
        sub_1674520(*(_QWORD *)v75, v95, v79);
        sub_15E1B70(v23);
        v24 = sub_15E1B70(v23);
        if ( *(_QWORD *)(a1 + 24) && v22 )
        {
          v25 = *(_QWORD *)(a1 + 32);
          *(_QWORD *)v105 = 1;
          v106 = 0;
          *(_QWORD *)v107 = 1;
          v108 = 0;
          sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v72);
          v107[0] = 1;
          LOBYTE(v107[1]) &= ~1u;
          sub_1674520(*(_QWORD *)v75, *(_QWORD *)v68, v79);
          sub_15E1B70(*(_QWORD *)(a1 + 56));
          v26 = sub_15E1BF0(v25);
          v30 = *(_QWORD *)(a1 + 24);
          if ( v30 )
            sub_13333D0(v30, *(_QWORD *)(a4 + 16), v26, v27, v28, v29);
          v31 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v68);
          sub_182CBA0(v31, *(_QWORD *)v72);
        }
        v32 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v95);
        sub_182CBA0(v32, v97);
        return v24;
      }
LABEL_66:
      sub_DBF6E(0);
    }
    return 0;
  }
  v80 = a1 + 48;
  v34 = *(int **)(*(_QWORD *)(sub_15D1F10(a3) + 24) + 8LL);
  if ( *((_BYTE *)v34 + 8) )
    goto LABEL_66;
  v35 = *v34;
  v87 = 0;
  v88 = 0;
  v76 = v35;
  v89 = 1;
  v90 = 0;
  *(_QWORD *)v95 = 1;
  v96 = 0;
  *(_QWORD *)v97 = 1;
  v98 = 0;
  if ( a5 )
  {
    sub_182CBA0(qword_1C7F2C0, v97);
    LOBYTE(v97[1]) &= ~1u;
    v97[0] = 1;
    sub_17F6290(&v91, v76 - 1);
    *(_QWORD *)v105 = 0;
    v36 = qword_1C7F2C0;
    v106 = 0;
    *(_QWORD *)v107 = 1;
    v108 = 0;
    if ( (v92 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v105, &v91);
    else
      v105[0] = v91;
    if ( (v94 & 1) != 0 )
    {
      sub_182C690(v36, v107, &v93);
    }
    else
    {
      LOBYTE(v107[1]) &= ~1u;
      v107[0] = v93;
    }
    v37 = qword_1C7F2C0;
    if ( (v107[1] & 1) != 0 || v107[0] != 1 || (v97[1] & 1) != 0 || v97[0] != 1 )
    {
      sub_1852000(qword_1C7F2C0, v105, v95);
    }
    else
    {
      sub_1832A70(qword_1C7F2C0, v105, v95);
      sub_182CBA0(v37, v107);
      LOBYTE(v107[1]) &= ~1u;
      v107[0] = 1;
    }
    v100 &= 0xFCu;
    v38 = qword_1C7F2C0;
    v103 &= 0xFCu;
    v99 = 0;
    v101 = 0;
    v102 = 1;
    v104 = 0;
    if ( (v105[1] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v99, v105);
    else
      v99 = v105[0];
    if ( (v107[1] & 1) == 0 )
    {
      v103 &= ~1u;
      v102 = v107[0];
      goto LABEL_28;
    }
  }
  else
  {
    sub_182CBA0(qword_1C7F2C0, v97);
    LOBYTE(v97[1]) &= ~1u;
    v97[0] = 1;
    sub_17F6290(&v91, v76);
    *(_QWORD *)v105 = 0;
    v65 = qword_1C7F2C0;
    v106 = 0;
    *(_QWORD *)v107 = 1;
    v108 = 0;
    if ( (v92 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v105, &v91);
    else
      v105[0] = v91;
    if ( (v94 & 1) != 0 )
    {
      sub_182C690(v65, v107, &v93);
    }
    else
    {
      LOBYTE(v107[1]) &= ~1u;
      v107[0] = v93;
    }
    v66 = qword_1C7F2C0;
    if ( (v107[1] & 1) != 0 || v107[0] != 1 || (v97[1] & 1) != 0 || v97[0] != 1 )
    {
      sub_1852000(qword_1C7F2C0, v105, v95);
    }
    else
    {
      sub_1832A70(qword_1C7F2C0, v105, v95);
      sub_182CBA0(v66, v107);
      LOBYTE(v107[1]) &= ~1u;
      v107[0] = 1;
    }
    v100 &= 0xFCu;
    v38 = qword_1C7F2C0;
    v103 &= 0xFCu;
    v99 = 0;
    v101 = 0;
    v102 = 1;
    v104 = 0;
    if ( (v105[1] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v99, v105);
    else
      v99 = v105[0];
    if ( (v107[1] & 1) == 0 )
    {
      v103 &= ~1u;
      v102 = v107[0];
      goto LABEL_28;
    }
  }
  sub_182C690(v38, &v102, v107);
LABEL_28:
  v39 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v105);
  sub_182CBA0(v39, v107);
  v40 = v99;
  v99 = v87;
  LODWORD(v87) = v40;
  v41 = v101;
  v101 = v88;
  v88 = v41;
  ptra = qword_1C7F2C0;
  v42 = v100 & 1;
  LOBYTE(v41) = BYTE4(v87) & 0xFC | v100 & 2;
  v100 = BYTE4(v87) & 1 | v100 & 0xFC | BYTE4(v87) & 2;
  BYTE4(v87) = v42 | v41;
  LODWORD(v41) = v102;
  v102 = v89;
  LODWORD(v89) = v41;
  v43 = v104;
  v104 = v90;
  v90 = v43;
  LOBYTE(v43) = v103 & 1 | BYTE4(v89) & 0xFC | v103 & 2;
  v103 = BYTE4(v89) & 1 | v103 & 0xFC | BYTE4(v89) & 2;
  BYTE4(v89) = v43;
  sub_182CBA0(qword_1C7F2C0, &v99);
  sub_182CBA0(ptra, &v102);
  v83 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v91);
  sub_182CBA0(v83, &v93);
  v44 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v95);
  sub_182CBA0(v44, v97);
  v45 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)v105 = a3;
  v106 = a4;
  v48 = sub_15DC610(
          v45,
          a2,
          2,
          (int)v105,
          v46,
          v47,
          v67,
          (int)v105,
          (int)v95,
          a2,
          (int)v107,
          v76,
          v80,
          (int)v83,
          (int)v97,
          ptra);
  v70 = sub_CF9350(a1, v48, &v99);
  v49 = *(_QWORD *)(a1 + 32);
  sub_1674520(*(_QWORD *)v81, &v87, v77);
  sub_15E1B70(v49);
  v24 = sub_15E1B70(v49);
  if ( *(_QWORD *)(a1 + 24) && v70 )
  {
    v50 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)v105 = 1;
    v106 = 0;
    v71 = v50;
    *(_QWORD *)v107 = 1;
    v108 = 0;
    sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v73);
    v107[0] = 1;
    LOBYTE(v107[1]) &= ~1u;
    sub_1674520(*(_QWORD *)v81, *(_QWORD *)v69, v77);
    sub_15E1B70(*(_QWORD *)(a1 + 56));
    v51 = sub_15E1BF0(v71);
    v55 = *(_QWORD *)(a1 + 24);
    if ( v55 )
      sub_13333D0(v55, *(_QWORD *)(a3 + 16), v51, v52, v53, v54);
    v56 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v69);
    sub_182CBA0(v56, *(_QWORD *)v73);
  }
  v57 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v87);
  sub_182CBA0(v57, &v89);
  return v24;
}

