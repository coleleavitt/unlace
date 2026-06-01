_OWORD *__fastcall sub_924350(_OWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // rax
  int *v4; // rax
  void *v5; // r13
  unsigned int v6; // r14d
  __int64 i; // rax
  int *v8; // rdx
  void *v9; // r13
  void *v10; // r15
  void *v11; // r13
  void *v12; // r13
  void *v13; // r13
  void *v14; // r13
  void *v15; // r13
  void *v16; // r15
  __int64 v17; // rax
  __int64 v18; // r13
  void *v19; // r15
  void *v20; // r15
  __int64 v21; // r15
  void *v22; // r15
  void *v23; // r13
  void *v24; // r13
  void *v25; // r13
  void *v26; // r13
  void *v27; // r13
  void *v28; // r13
  void *v29; // r13
  void *v30; // r13
  void *v31; // r13
  void *v32; // r13
  void *v33; // r13
  __int64 *v35; // [rsp+18h] [rbp-220h]
  __int64 v36; // [rsp+60h] [rbp-1D8h]
  void *v37; // [rsp+78h] [rbp-1C0h]
  void *v38; // [rsp+78h] [rbp-1C0h]
  void *v39; // [rsp+78h] [rbp-1C0h]
  _QWORD v40[2]; // [rsp+80h] [rbp-1B8h] BYREF
  _QWORD v41[2]; // [rsp+90h] [rbp-1A8h] BYREF
  int v42; // [rsp+A0h] [rbp-198h] BYREF
  char v43; // [rsp+A4h] [rbp-194h]
  __int64 v44; // [rsp+A8h] [rbp-190h]
  int v45; // [rsp+B0h] [rbp-188h] BYREF
  char v46; // [rsp+B4h] [rbp-184h]
  __int64 v47; // [rsp+B8h] [rbp-180h]
  int v48; // [rsp+C0h] [rbp-178h] BYREF
  char v49; // [rsp+C4h] [rbp-174h]
  __int64 v50; // [rsp+C8h] [rbp-170h]
  int v51; // [rsp+D0h] [rbp-168h] BYREF
  char v52; // [rsp+D4h] [rbp-164h]
  __int64 v53; // [rsp+D8h] [rbp-160h]
  _QWORD v54[2]; // [rsp+E0h] [rbp-158h] BYREF
  _QWORD v55[2]; // [rsp+F0h] [rbp-148h] BYREF
  _QWORD v56[2]; // [rsp+100h] [rbp-138h] BYREF
  _QWORD v57[2]; // [rsp+110h] [rbp-128h] BYREF
  _QWORD v58[2]; // [rsp+120h] [rbp-118h] BYREF
  _QWORD v59[2]; // [rsp+130h] [rbp-108h] BYREF
  _QWORD v60[2]; // [rsp+140h] [rbp-F8h] BYREF
  _QWORD v61[2]; // [rsp+150h] [rbp-E8h] BYREF
  _QWORD v62[2]; // [rsp+160h] [rbp-D8h] BYREF
  _QWORD v63[2]; // [rsp+170h] [rbp-C8h] BYREF
  _QWORD v64[2]; // [rsp+180h] [rbp-B8h] BYREF
  _QWORD v65[2]; // [rsp+190h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+1A0h] [rbp-98h] BYREF
  __int64 v67; // [rsp+1A8h] [rbp-90h]
  __int64 v68; // [rsp+1B0h] [rbp-88h] BYREF
  __int64 v69; // [rsp+1B8h] [rbp-80h]
  __int64 v70; // [rsp+1C0h] [rbp-78h] BYREF
  __int64 v71; // [rsp+1C8h] [rbp-70h]
  __int64 v72; // [rsp+1D0h] [rbp-68h] BYREF
  __int64 v73; // [rsp+1D8h] [rbp-60h]
  _QWORD v74[2]; // [rsp+1E0h] [rbp-58h] BYREF
  _QWORD v75[9]; // [rsp+1F0h] [rbp-48h] BYREF

  v3 = a2[36];
  v66 = 0;
  v35 = (__int64 *)(v3 + 8LL * a3);
  v67 = 0;
  v36 = 32LL * a3;
  v4 = (int *)(a2[37] + v36);
  v68 = 1;
  v69 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v66, v4);
  v5 = qword_1C7F2C0;
  v70 = 0;
  v71 = 0;
  v72 = 1;
  v73 = 0;
  sub_182CEF0(qword_1C7F2C0, &v70);
  sub_182CBA0(v5, &v72);
  BYTE4(v72) &= ~1u;
  a1[1] = 0;
  *((_DWORD *)a1 + 4) = 1;
  *a1 = 0;
  LODWORD(v72) = 1;
  sub_91F480((__int64)(a1 + 2), (__int64)&v66);
  v6 = 0;
  sub_25A130((char *)&v70);
  sub_25A130((char *)&v66);
  for ( i = *v35; *v35; i = *v35 )
  {
    if ( v6 >= *(_DWORD *)(i - 4) )
      break;
    v40[0] = 0;
    v40[1] = 0;
    v8 = (int *)(a2[42] + v36);
    v41[0] = 1;
    v41[1] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v40, v8);
    v43 &= 0xFCu;
    v9 = qword_1C7F2C0;
    v46 &= 0xFCu;
    v42 = 0;
    v44 = 0;
    v45 = 1;
    v47 = 0;
    if ( (v40[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v42, v40);
    else
      v42 = v40[0];
    if ( (v41[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v9, &v45, v41);
    }
    else
    {
      v46 &= ~1u;
      v45 = v41[0];
    }
    v10 = qword_1C7F2C0;
    v48 = 0;
    v49 &= 0xFCu;
    v52 &= 0xFCu;
    v50 = 0;
    v51 = 1;
    v53 = 0;
    if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v48, &qword_1C7F2A0);
    else
      v48 = qword_1C7F2A0;
    if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
    {
      sub_182C690(v10, &v51, &qword_1C7F2B0);
    }
    else
    {
      v52 &= ~1u;
      v51 = qword_1C7F2B0;
    }
    v56[0] = 0;
    v11 = qword_1C7F2C0;
    v56[1] = 0;
    v57[0] = 1;
    v57[1] = 0;
    if ( (v43 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v56, &v42);
    else
      LODWORD(v56[0]) = v42;
    if ( (v46 & 1) != 0 )
    {
      sub_182C690(v11, v57, &v45);
    }
    else
    {
      BYTE4(v57[0]) &= ~1u;
      LODWORD(v57[0]) = v45;
    }
    v58[0] = 0;
    v12 = qword_1C7F2C0;
    v58[1] = 0;
    v59[0] = 1;
    v59[1] = 0;
    if ( (v49 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v58, &v48);
    else
      LODWORD(v58[0]) = v48;
    if ( (v52 & 1) != 0 )
    {
      sub_182C690(v12, v59, &v51);
    }
    else
    {
      BYTE4(v59[0]) &= ~1u;
      LODWORD(v59[0]) = v51;
    }
    v54[0] = 0;
    v54[1] = 0;
    v55[0] = 1;
    v55[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v55);
    BYTE4(v55[0]) &= ~1u;
    v13 = qword_1C7F2C0;
    LODWORD(v55[0]) = 1;
    v60[0] = 0;
    v60[1] = 0;
    v61[0] = 1;
    v61[1] = 0;
    if ( (v54[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v60, v54);
    else
      LODWORD(v60[0]) = v54[0];
    if ( (v55[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v13, v61, v55);
    }
    else
    {
      BYTE4(v61[0]) &= ~1u;
      LODWORD(v61[0]) = v55[0];
    }
    v62[0] = 0;
    v14 = qword_1C7F2C0;
    v62[1] = 0;
    v63[0] = 1;
    v63[1] = 0;
    if ( (v56[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v62, v56);
    else
      LODWORD(v62[0]) = v56[0];
    if ( (v57[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v14, v63, v57);
    }
    else
    {
      BYTE4(v63[0]) &= ~1u;
      LODWORD(v63[0]) = v57[0];
    }
    v64[0] = 0;
    v15 = qword_1C7F2C0;
    v64[1] = 0;
    v65[0] = 1;
    v65[1] = 0;
    if ( (v58[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v64, v58);
    else
      LODWORD(v64[0]) = v58[0];
    if ( (v59[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v15, v65, v59);
    }
    else
    {
      BYTE4(v65[0]) &= ~1u;
      LODWORD(v65[0]) = v59[0];
    }
    v16 = qword_1C7F2C0;
    v17 = *v35;
    v66 = 0;
    v67 = 0;
    v68 = 1;
    v18 = v17 + 40LL * v6;
    v69 = 0;
    if ( (v60[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v66, v60);
    else
      LODWORD(v66) = v60[0];
    if ( (v61[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v16, &v68, v61);
    }
    else
    {
      BYTE4(v68) &= ~1u;
      LODWORD(v68) = v61[0];
    }
    v70 = 0;
    v19 = qword_1C7F2C0;
    v71 = 0;
    v72 = 1;
    v73 = 0;
    if ( (v62[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v70, v62);
    else
      LODWORD(v70) = v62[0];
    if ( (v63[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v19, &v72, v63);
    }
    else
    {
      BYTE4(v72) &= ~1u;
      LODWORD(v72) = v63[0];
    }
    v74[0] = 0;
    v20 = qword_1C7F2C0;
    v74[1] = 0;
    v75[0] = 1;
    v75[1] = 0;
    if ( (v64[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v74, v64);
    else
      LODWORD(v74[0]) = v64[0];
    if ( (v65[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v20, v75, v65);
    }
    else
    {
      BYTE4(v75[0]) &= ~1u;
      LODWORD(v75[0]) = v65[0];
    }
    v21 = v18 + 8;
    if ( (v68 & 0x100000000LL) != 0 || (_DWORD)v68 != 1 || (*(_BYTE *)(v18 + 28) & 1) != 0 || *(_DWORD *)(v18 + 24) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, &v66, v18 + 8);
    }
    else
    {
      v37 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, &v66, v18 + 8);
      sub_182CBA0(v37, &v68);
      BYTE4(v68) &= ~1u;
      LODWORD(v68) = 1;
    }
    if ( (v72 & 0x100000000LL) != 0 || (_DWORD)v72 != 1 || (*(_BYTE *)(v18 + 28) & 1) != 0 || *(_DWORD *)(v18 + 24) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, &v70, v18 + 8);
    }
    else
    {
      v38 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, &v70, v18 + 8);
      sub_182CBA0(v38, &v72);
      BYTE4(v72) &= ~1u;
      LODWORD(v72) = 1;
    }
    if ( (v75[0] & 0x100000000LL) != 0
      || LODWORD(v75[0]) != 1
      || (*(_BYTE *)(v18 + 28) & 1) != 0
      || *(_DWORD *)(v18 + 24) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, v74, v21);
    }
    else
    {
      v39 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, v74, v21);
      sub_182CBA0(v39, v75);
      BYTE4(v75[0]) &= ~1u;
      LODWORD(v75[0]) = 1;
    }
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)a1, (__int64)&v66, (__int64)a1);
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(a1 + 2), (__int64)&v70, (__int64)(a1 + 2));
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(a1 + 4), (__int64)v74, (__int64)(a1 + 4));
    v22 = qword_1C7F2C0;
    ++v6;
    sub_182CBA0(qword_1C7F2C0, v74);
    sub_182CBA0(v22, v75);
    v23 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v70);
    sub_182CBA0(v23, &v72);
    v24 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v66);
    sub_182CBA0(v24, &v68);
    v25 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v64);
    sub_182CBA0(v25, v65);
    v26 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v62);
    sub_182CBA0(v26, v63);
    v27 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v60);
    sub_182CBA0(v27, v61);
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v54);
    sub_182CBA0(v28, v55);
    v29 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v58);
    sub_182CBA0(v29, v59);
    v30 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v56);
    sub_182CBA0(v30, v57);
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v48);
    sub_182CBA0(v31, &v51);
    v32 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v42);
    sub_182CBA0(v32, &v45);
    v33 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v40);
    sub_182CBA0(v33, v41);
  }
  return a1;
}

