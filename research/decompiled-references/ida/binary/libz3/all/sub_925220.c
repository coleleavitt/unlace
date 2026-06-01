_OWORD *__fastcall sub_925220(_OWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // rax
  int *v4; // rdx
  __int64 *v5; // rax
  void *v6; // r12
  unsigned int v7; // r13d
  __int64 i; // rax
  int *v9; // rax
  int v10; // edx
  int v11; // r12d
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
  __int64 *v35; // [rsp+10h] [rbp-208h]
  __int64 v36; // [rsp+60h] [rbp-1B8h]
  void *v37; // [rsp+78h] [rbp-1A0h]
  void *v38; // [rsp+78h] [rbp-1A0h]
  void *v39; // [rsp+78h] [rbp-1A0h]
  int v40; // [rsp+80h] [rbp-198h] BYREF
  char v41; // [rsp+84h] [rbp-194h]
  __int64 v42; // [rsp+88h] [rbp-190h]
  int v43; // [rsp+90h] [rbp-188h] BYREF
  char v44; // [rsp+94h] [rbp-184h]
  __int64 v45; // [rsp+98h] [rbp-180h]
  int v46; // [rsp+A0h] [rbp-178h] BYREF
  char v47; // [rsp+A4h] [rbp-174h]
  __int64 v48; // [rsp+A8h] [rbp-170h]
  int v49; // [rsp+B0h] [rbp-168h] BYREF
  char v50; // [rsp+B4h] [rbp-164h]
  __int64 v51; // [rsp+B8h] [rbp-160h]
  _QWORD v52[2]; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v53[2]; // [rsp+D0h] [rbp-148h] BYREF
  _QWORD v54[2]; // [rsp+E0h] [rbp-138h] BYREF
  _QWORD v55[2]; // [rsp+F0h] [rbp-128h] BYREF
  _QWORD v56[2]; // [rsp+100h] [rbp-118h] BYREF
  _QWORD v57[2]; // [rsp+110h] [rbp-108h] BYREF
  _QWORD v58[2]; // [rsp+120h] [rbp-F8h] BYREF
  _QWORD v59[2]; // [rsp+130h] [rbp-E8h] BYREF
  _QWORD v60[2]; // [rsp+140h] [rbp-D8h] BYREF
  _QWORD v61[2]; // [rsp+150h] [rbp-C8h] BYREF
  _QWORD v62[2]; // [rsp+160h] [rbp-B8h] BYREF
  _QWORD v63[2]; // [rsp+170h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+180h] [rbp-98h] BYREF
  __int64 v65; // [rsp+188h] [rbp-90h]
  __int64 v66; // [rsp+190h] [rbp-88h] BYREF
  __int64 v67; // [rsp+198h] [rbp-80h]
  __int64 v68; // [rsp+1A0h] [rbp-78h] BYREF
  __int64 v69; // [rsp+1A8h] [rbp-70h]
  __int64 v70; // [rsp+1B0h] [rbp-68h] BYREF
  __int64 v71; // [rsp+1B8h] [rbp-60h]
  _QWORD v72[2]; // [rsp+1C0h] [rbp-58h] BYREF
  _QWORD v73[9]; // [rsp+1D0h] [rbp-48h] BYREF

  v3 = 8LL * a3;
  v4 = (int *)(a2[31] + 32LL * a3);
  v36 = v3;
  v5 = (__int64 *)(a2[30] + v3);
  v64 = 0;
  v35 = v5;
  v65 = 0;
  v66 = 1;
  v67 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v64, v4);
  v6 = qword_1C7F2C0;
  v68 = 0;
  v69 = 0;
  v70 = 1;
  v71 = 0;
  sub_182CEF0(qword_1C7F2C0, &v68);
  sub_182CBA0(v6, &v70);
  BYTE4(v70) &= ~1u;
  a1[1] = 0;
  *((_DWORD *)a1 + 4) = 1;
  *a1 = 0;
  LODWORD(v70) = 1;
  sub_91F480((__int64)(a1 + 2), (__int64)&v64);
  v7 = 0;
  sub_25A130((char *)&v68);
  sub_25A130((char *)&v64);
  for ( i = *v35; *v35; i = *v35 )
  {
    if ( v7 >= *(_DWORD *)(i - 4) )
      break;
    v9 = (int *)(a2[36] + v36);
    v10 = *v9;
    v11 = v9[1];
    v42 = 0;
    v41 &= 0xFCu;
    v44 &= 0xFCu;
    v43 = 1;
    v45 = 0;
    v40 = v10;
    sub_182CBA0(qword_1C7F2C0, &v43);
    v44 &= ~1u;
    v47 &= 0xFCu;
    v50 &= 0xFCu;
    v43 = 1;
    v48 = 0;
    v49 = 1;
    v51 = 0;
    v46 = v11;
    sub_182CBA0(qword_1C7F2C0, &v49);
    v50 &= ~1u;
    v12 = qword_1C7F2C0;
    v49 = 1;
    v54[0] = 0;
    v54[1] = 0;
    v55[0] = 1;
    v55[1] = 0;
    if ( (v41 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v54, &v40);
    else
      LODWORD(v54[0]) = v40;
    if ( (v44 & 1) != 0 )
    {
      sub_182C690(v12, v55, &v43);
    }
    else
    {
      BYTE4(v55[0]) &= ~1u;
      LODWORD(v55[0]) = v43;
    }
    v56[0] = 0;
    v13 = qword_1C7F2C0;
    v56[1] = 0;
    v57[0] = 1;
    v57[1] = 0;
    if ( (v47 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v56, &v46);
    else
      LODWORD(v56[0]) = v46;
    if ( (v50 & 1) != 0 )
    {
      sub_182C690(v13, v57, &v49);
    }
    else
    {
      BYTE4(v57[0]) &= ~1u;
      LODWORD(v57[0]) = v49;
    }
    v52[0] = 0;
    v52[1] = 0;
    v53[0] = 1;
    v53[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v53);
    BYTE4(v53[0]) &= ~1u;
    v14 = qword_1C7F2C0;
    LODWORD(v53[0]) = 1;
    v58[0] = 0;
    v58[1] = 0;
    v59[0] = 1;
    v59[1] = 0;
    if ( (v52[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v58, v52);
    else
      LODWORD(v58[0]) = v52[0];
    if ( (v53[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v14, v59, v53);
    }
    else
    {
      BYTE4(v59[0]) &= ~1u;
      LODWORD(v59[0]) = v53[0];
    }
    v60[0] = 0;
    v15 = qword_1C7F2C0;
    v60[1] = 0;
    v61[0] = 1;
    v61[1] = 0;
    if ( (v54[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v60, v54);
    else
      LODWORD(v60[0]) = v54[0];
    if ( (v55[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v15, v61, v55);
    }
    else
    {
      BYTE4(v61[0]) &= ~1u;
      LODWORD(v61[0]) = v55[0];
    }
    v62[0] = 0;
    v16 = qword_1C7F2C0;
    v62[1] = 0;
    v63[0] = 1;
    v63[1] = 0;
    if ( (v56[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v62, v56);
    else
      LODWORD(v62[0]) = v56[0];
    if ( (v57[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v16, v63, v57);
    }
    else
    {
      BYTE4(v63[0]) &= ~1u;
      LODWORD(v63[0]) = v57[0];
    }
    v17 = qword_1C7F2C0;
    v18 = *v35;
    v64 = 0;
    v65 = 0;
    v66 = 1;
    v19 = v18 + 40LL * v7;
    v67 = 0;
    if ( (v58[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v64, v58);
    else
      LODWORD(v64) = v58[0];
    if ( (v59[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v17, &v66, v59);
    }
    else
    {
      BYTE4(v66) &= ~1u;
      LODWORD(v66) = v59[0];
    }
    v68 = 0;
    v20 = qword_1C7F2C0;
    v69 = 0;
    v70 = 1;
    v71 = 0;
    if ( (v60[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v68, v60);
    else
      LODWORD(v68) = v60[0];
    if ( (v61[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v20, &v70, v61);
    }
    else
    {
      BYTE4(v70) &= ~1u;
      LODWORD(v70) = v61[0];
    }
    v72[0] = 0;
    v21 = qword_1C7F2C0;
    v72[1] = 0;
    v73[0] = 1;
    v73[1] = 0;
    if ( (v62[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v72, v62);
    else
      LODWORD(v72[0]) = v62[0];
    if ( (v63[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v21, v73, v63);
    }
    else
    {
      BYTE4(v73[0]) &= ~1u;
      LODWORD(v73[0]) = v63[0];
    }
    v22 = v19 + 8;
    if ( (v66 & 0x100000000LL) != 0 || (_DWORD)v66 != 1 || (*(_BYTE *)(v19 + 28) & 1) != 0 || *(_DWORD *)(v19 + 24) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, &v64, v19 + 8);
    }
    else
    {
      v37 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, &v64, v19 + 8);
      sub_182CBA0(v37, &v66);
      BYTE4(v66) &= ~1u;
      LODWORD(v66) = 1;
    }
    if ( (v70 & 0x100000000LL) != 0 || (_DWORD)v70 != 1 || (*(_BYTE *)(v19 + 28) & 1) != 0 || *(_DWORD *)(v19 + 24) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, &v68, v19 + 8);
    }
    else
    {
      v38 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, &v68, v19 + 8);
      sub_182CBA0(v38, &v70);
      BYTE4(v70) &= ~1u;
      LODWORD(v70) = 1;
    }
    if ( (v73[0] & 0x100000000LL) != 0
      || LODWORD(v73[0]) != 1
      || (*(_BYTE *)(v19 + 28) & 1) != 0
      || *(_DWORD *)(v19 + 24) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, v72, v22);
    }
    else
    {
      v39 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, v72, v22);
      sub_182CBA0(v39, v73);
      BYTE4(v73[0]) &= ~1u;
      LODWORD(v73[0]) = 1;
    }
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)a1, (__int64)&v64, (__int64)a1);
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(a1 + 2), (__int64)&v68, (__int64)(a1 + 2));
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(a1 + 4), (__int64)v72, (__int64)(a1 + 4));
    v23 = qword_1C7F2C0;
    ++v7;
    sub_182CBA0(qword_1C7F2C0, v72);
    sub_182CBA0(v23, v73);
    v24 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v68);
    sub_182CBA0(v24, &v70);
    v25 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v64);
    sub_182CBA0(v25, &v66);
    v26 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v62);
    sub_182CBA0(v26, v63);
    v27 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v60);
    sub_182CBA0(v27, v61);
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v58);
    sub_182CBA0(v28, v59);
    v29 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v52);
    sub_182CBA0(v29, v53);
    v30 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v56);
    sub_182CBA0(v30, v57);
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v54);
    sub_182CBA0(v31, v55);
    v32 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v46);
    sub_182CBA0(v32, &v49);
    v33 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v40);
    sub_182CBA0(v33, &v43);
  }
  return a1;
}

