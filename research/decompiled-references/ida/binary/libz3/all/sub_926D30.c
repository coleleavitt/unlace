_OWORD *__fastcall sub_926D30(_OWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // r12
  int *v4; // rdx
  __int64 v5; // rax
  void *v6; // r13
  unsigned int v7; // r13d
  __int64 i; // rax
  int *v9; // r12
  void *v10; // r12
  void *v11; // r12
  void *v12; // r12
  void *v13; // r12
  void *v14; // r12
  void *v15; // r12
  void *v16; // r12
  void *v17; // r14
  __int64 v18; // rax
  __int64 v19; // r12
  void *v20; // r14
  void *v21; // r14
  __int64 v22; // r14
  void *v23; // r14
  void *v24; // r12
  void *v25; // r12
  void *v26; // r12
  void *v27; // r12
  void *v28; // r12
  void *v29; // r12
  void *v30; // r12
  void *v31; // r12
  void *v32; // r12
  void *v33; // r12
  void *v34; // r12
  void *v35; // r12
  __int64 *v37; // [rsp+10h] [rbp-248h]
  __int64 v38; // [rsp+60h] [rbp-1F8h]
  void *v39; // [rsp+78h] [rbp-1E0h]
  void *v40; // [rsp+78h] [rbp-1E0h]
  void *v41; // [rsp+78h] [rbp-1E0h]
  int v42; // [rsp+80h] [rbp-1D8h] BYREF
  char v43; // [rsp+84h] [rbp-1D4h]
  __int64 v44; // [rsp+88h] [rbp-1D0h]
  int v45; // [rsp+90h] [rbp-1C8h] BYREF
  char v46; // [rsp+94h] [rbp-1C4h]
  __int64 v47; // [rsp+98h] [rbp-1C0h]
  int v48; // [rsp+A0h] [rbp-1B8h] BYREF
  char v49; // [rsp+A4h] [rbp-1B4h]
  __int64 v50; // [rsp+A8h] [rbp-1B0h]
  int v51; // [rsp+B0h] [rbp-1A8h] BYREF
  char v52; // [rsp+B4h] [rbp-1A4h]
  __int64 v53; // [rsp+B8h] [rbp-1A0h]
  _QWORD v54[2]; // [rsp+C0h] [rbp-198h] BYREF
  _QWORD v55[2]; // [rsp+D0h] [rbp-188h] BYREF
  _QWORD v56[2]; // [rsp+E0h] [rbp-178h] BYREF
  _QWORD v57[2]; // [rsp+F0h] [rbp-168h] BYREF
  _QWORD v58[2]; // [rsp+100h] [rbp-158h] BYREF
  _QWORD v59[2]; // [rsp+110h] [rbp-148h] BYREF
  _QWORD v60[2]; // [rsp+120h] [rbp-138h] BYREF
  _QWORD v61[2]; // [rsp+130h] [rbp-128h] BYREF
  _QWORD v62[2]; // [rsp+140h] [rbp-118h] BYREF
  _QWORD v63[2]; // [rsp+150h] [rbp-108h] BYREF
  _QWORD v64[2]; // [rsp+160h] [rbp-F8h] BYREF
  _QWORD v65[2]; // [rsp+170h] [rbp-E8h] BYREF
  _QWORD v66[2]; // [rsp+180h] [rbp-D8h] BYREF
  _QWORD v67[2]; // [rsp+190h] [rbp-C8h] BYREF
  _QWORD v68[2]; // [rsp+1A0h] [rbp-B8h] BYREF
  _QWORD v69[2]; // [rsp+1B0h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+1C0h] [rbp-98h] BYREF
  __int64 v71; // [rsp+1C8h] [rbp-90h]
  __int64 v72; // [rsp+1D0h] [rbp-88h] BYREF
  __int64 v73; // [rsp+1D8h] [rbp-80h]
  __int64 v74; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 v75; // [rsp+1E8h] [rbp-70h]
  __int64 v76; // [rsp+1F0h] [rbp-68h] BYREF
  __int64 v77; // [rsp+1F8h] [rbp-60h]
  _QWORD v78[2]; // [rsp+200h] [rbp-58h] BYREF
  _QWORD v79[9]; // [rsp+210h] [rbp-48h] BYREF

  v3 = a3;
  v4 = (int *)(a2[45] + 32LL * a3);
  v5 = a2[44] + 8 * v3;
  v70 = 0;
  v37 = (__int64 *)v5;
  v71 = 0;
  v72 = 1;
  v73 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v70, v4);
  v6 = qword_1C7F2C0;
  v74 = 0;
  v75 = 0;
  v76 = 1;
  v77 = 0;
  sub_182CEF0(qword_1C7F2C0, &v74);
  sub_182CBA0(v6, &v76);
  BYTE4(v76) &= ~1u;
  a1[1] = 0;
  *((_DWORD *)a1 + 4) = 1;
  *a1 = 0;
  LODWORD(v76) = 1;
  sub_91F480((__int64)(a1 + 2), (__int64)&v70);
  v7 = 0;
  sub_25A130((char *)&v74);
  sub_25A130((char *)&v70);
  v38 = v3 << 6;
  for ( i = *v37; *v37; i = *v37 )
  {
    if ( v7 >= *(_DWORD *)(i - 4) )
      break;
    v56[0] = 0;
    v56[1] = 0;
    v9 = (int *)(a2[50] + v38);
    v57[0] = 1;
    v57[1] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v56, v9);
    v58[0] = 0;
    v58[1] = 0;
    v59[0] = 1;
    v59[1] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v58, v9 + 8);
    v43 &= 0xFCu;
    v10 = qword_1C7F2C0;
    v46 &= 0xFCu;
    v42 = 0;
    v44 = 0;
    v45 = 1;
    v47 = 0;
    if ( (v56[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v42, v56);
    else
      v42 = v56[0];
    if ( (v57[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v10, &v45, v57);
    }
    else
    {
      v46 &= ~1u;
      v45 = v57[0];
    }
    v49 &= 0xFCu;
    v11 = qword_1C7F2C0;
    v52 &= 0xFCu;
    v48 = 0;
    v50 = 0;
    v51 = 1;
    v53 = 0;
    if ( (v58[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v48, v58);
    else
      v48 = v58[0];
    if ( (v59[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v11, &v51, v59);
    }
    else
    {
      v52 &= ~1u;
      v51 = v59[0];
    }
    v60[0] = 0;
    v12 = qword_1C7F2C0;
    v60[1] = 0;
    v61[0] = 1;
    v61[1] = 0;
    if ( (v43 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v60, &v42);
    else
      LODWORD(v60[0]) = v42;
    if ( (v46 & 1) != 0 )
    {
      sub_182C690(v12, v61, &v45);
    }
    else
    {
      BYTE4(v61[0]) &= ~1u;
      LODWORD(v61[0]) = v45;
    }
    v62[0] = 0;
    v13 = qword_1C7F2C0;
    v62[1] = 0;
    v63[0] = 1;
    v63[1] = 0;
    if ( (v49 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v62, &v48);
    else
      LODWORD(v62[0]) = v48;
    if ( (v52 & 1) != 0 )
    {
      sub_182C690(v13, v63, &v51);
    }
    else
    {
      BYTE4(v63[0]) &= ~1u;
      LODWORD(v63[0]) = v51;
    }
    v54[0] = 0;
    v54[1] = 0;
    v55[0] = 1;
    v55[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v55);
    BYTE4(v55[0]) &= ~1u;
    v14 = qword_1C7F2C0;
    LODWORD(v55[0]) = 1;
    v64[0] = 0;
    v64[1] = 0;
    v65[0] = 1;
    v65[1] = 0;
    if ( (v54[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v64, v54);
    else
      LODWORD(v64[0]) = v54[0];
    if ( (v55[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v14, v65, v55);
    }
    else
    {
      BYTE4(v65[0]) &= ~1u;
      LODWORD(v65[0]) = v55[0];
    }
    v66[0] = 0;
    v15 = qword_1C7F2C0;
    v66[1] = 0;
    v67[0] = 1;
    v67[1] = 0;
    if ( (v60[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v66, v60);
    else
      LODWORD(v66[0]) = v60[0];
    if ( (v61[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v15, v67, v61);
    }
    else
    {
      BYTE4(v67[0]) &= ~1u;
      LODWORD(v67[0]) = v61[0];
    }
    v68[0] = 0;
    v16 = qword_1C7F2C0;
    v68[1] = 0;
    v69[0] = 1;
    v69[1] = 0;
    if ( (v62[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v68, v62);
    else
      LODWORD(v68[0]) = v62[0];
    if ( (v63[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v16, v69, v63);
    }
    else
    {
      BYTE4(v69[0]) &= ~1u;
      LODWORD(v69[0]) = v63[0];
    }
    v17 = qword_1C7F2C0;
    v18 = *v37;
    v70 = 0;
    v71 = 0;
    v72 = 1;
    v19 = v18 + 40LL * v7;
    v73 = 0;
    if ( (v64[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v70, v64);
    else
      LODWORD(v70) = v64[0];
    if ( (v65[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v17, &v72, v65);
    }
    else
    {
      BYTE4(v72) &= ~1u;
      LODWORD(v72) = v65[0];
    }
    v74 = 0;
    v20 = qword_1C7F2C0;
    v75 = 0;
    v76 = 1;
    v77 = 0;
    if ( (v66[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v74, v66);
    else
      LODWORD(v74) = v66[0];
    if ( (v67[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v20, &v76, v67);
    }
    else
    {
      BYTE4(v76) &= ~1u;
      LODWORD(v76) = v67[0];
    }
    v78[0] = 0;
    v21 = qword_1C7F2C0;
    v78[1] = 0;
    v79[0] = 1;
    v79[1] = 0;
    if ( (v68[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v78, v68);
    else
      LODWORD(v78[0]) = v68[0];
    if ( (v69[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v21, v79, v69);
    }
    else
    {
      BYTE4(v79[0]) &= ~1u;
      LODWORD(v79[0]) = v69[0];
    }
    v22 = v19 + 8;
    if ( (v72 & 0x100000000LL) != 0 || (_DWORD)v72 != 1 || (*(_BYTE *)(v19 + 28) & 1) != 0 || *(_DWORD *)(v19 + 24) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, &v70, v19 + 8);
    }
    else
    {
      v39 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, &v70, v19 + 8);
      sub_182CBA0(v39, &v72);
      BYTE4(v72) &= ~1u;
      LODWORD(v72) = 1;
    }
    if ( (v76 & 0x100000000LL) != 0 || (_DWORD)v76 != 1 || (*(_BYTE *)(v19 + 28) & 1) != 0 || *(_DWORD *)(v19 + 24) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, &v74, v19 + 8);
    }
    else
    {
      v40 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, &v74, v19 + 8);
      sub_182CBA0(v40, &v76);
      BYTE4(v76) &= ~1u;
      LODWORD(v76) = 1;
    }
    if ( (v79[0] & 0x100000000LL) != 0
      || LODWORD(v79[0]) != 1
      || (*(_BYTE *)(v19 + 28) & 1) != 0
      || *(_DWORD *)(v19 + 24) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, v78, v22);
    }
    else
    {
      v41 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, v78, v22);
      sub_182CBA0(v41, v79);
      BYTE4(v79[0]) &= ~1u;
      LODWORD(v79[0]) = 1;
    }
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)a1, (__int64)&v70, (__int64)a1);
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(a1 + 2), (__int64)&v74, (__int64)(a1 + 2));
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(a1 + 4), (__int64)v78, (__int64)(a1 + 4));
    v23 = qword_1C7F2C0;
    ++v7;
    sub_182CBA0(qword_1C7F2C0, v78);
    sub_182CBA0(v23, v79);
    v24 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v74);
    sub_182CBA0(v24, &v76);
    v25 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v70);
    sub_182CBA0(v25, &v72);
    v26 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v68);
    sub_182CBA0(v26, v69);
    v27 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v66);
    sub_182CBA0(v27, v67);
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v64);
    sub_182CBA0(v28, v65);
    v29 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v54);
    sub_182CBA0(v29, v55);
    v30 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v62);
    sub_182CBA0(v30, v63);
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v60);
    sub_182CBA0(v31, v61);
    v32 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v48);
    sub_182CBA0(v32, &v51);
    v33 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v42);
    sub_182CBA0(v33, &v45);
    v34 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v58);
    sub_182CBA0(v34, v59);
    v35 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v56);
    sub_182CBA0(v35, v57);
  }
  return a1;
}

