_OWORD *__fastcall sub_925FA0(_OWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // r12
  int *v4; // rdx
  __int64 v5; // rax
  void *v6; // r13
  unsigned int v7; // r13d
  __int64 i; // rax
  int v9; // eax
  void *v10; // r12
  void *v11; // r12
  void *v12; // r12
  void *v13; // r12
  void *v14; // r12
  void *v15; // r14
  __int64 v16; // rax
  __int64 v17; // r12
  void *v18; // r14
  void *v19; // r14
  __int64 v20; // r14
  void *v21; // r14
  void *v22; // r12
  void *v23; // r12
  void *v24; // r12
  void *v25; // r12
  void *v26; // r12
  void *v27; // r12
  void *v28; // r12
  void *v29; // r12
  void *v30; // r12
  void *v31; // r12
  __int64 *v33; // [rsp+10h] [rbp-208h]
  __int64 v34; // [rsp+60h] [rbp-1B8h]
  void *v35; // [rsp+78h] [rbp-1A0h]
  void *v36; // [rsp+78h] [rbp-1A0h]
  void *v37; // [rsp+78h] [rbp-1A0h]
  int v38; // [rsp+80h] [rbp-198h] BYREF
  char v39; // [rsp+84h] [rbp-194h]
  __int64 v40; // [rsp+88h] [rbp-190h]
  int v41; // [rsp+90h] [rbp-188h] BYREF
  char v42; // [rsp+94h] [rbp-184h]
  __int64 v43; // [rsp+98h] [rbp-180h]
  int v44; // [rsp+A0h] [rbp-178h] BYREF
  char v45; // [rsp+A4h] [rbp-174h]
  __int64 v46; // [rsp+A8h] [rbp-170h]
  int v47; // [rsp+B0h] [rbp-168h] BYREF
  char v48; // [rsp+B4h] [rbp-164h]
  __int64 v49; // [rsp+B8h] [rbp-160h]
  _QWORD v50[2]; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v51[2]; // [rsp+D0h] [rbp-148h] BYREF
  _QWORD v52[2]; // [rsp+E0h] [rbp-138h] BYREF
  _QWORD v53[2]; // [rsp+F0h] [rbp-128h] BYREF
  _QWORD v54[2]; // [rsp+100h] [rbp-118h] BYREF
  _QWORD v55[2]; // [rsp+110h] [rbp-108h] BYREF
  _QWORD v56[2]; // [rsp+120h] [rbp-F8h] BYREF
  _QWORD v57[2]; // [rsp+130h] [rbp-E8h] BYREF
  _QWORD v58[2]; // [rsp+140h] [rbp-D8h] BYREF
  _QWORD v59[2]; // [rsp+150h] [rbp-C8h] BYREF
  _QWORD v60[2]; // [rsp+160h] [rbp-B8h] BYREF
  _QWORD v61[2]; // [rsp+170h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+180h] [rbp-98h] BYREF
  __int64 v63; // [rsp+188h] [rbp-90h]
  __int64 v64; // [rsp+190h] [rbp-88h] BYREF
  __int64 v65; // [rsp+198h] [rbp-80h]
  __int64 v66; // [rsp+1A0h] [rbp-78h] BYREF
  __int64 v67; // [rsp+1A8h] [rbp-70h]
  __int64 v68; // [rsp+1B0h] [rbp-68h] BYREF
  __int64 v69; // [rsp+1B8h] [rbp-60h]
  _QWORD v70[2]; // [rsp+1C0h] [rbp-58h] BYREF
  _QWORD v71[9]; // [rsp+1D0h] [rbp-48h] BYREF

  v3 = a3;
  v4 = (int *)(a2[30] + 32LL * a3);
  v5 = a2[29] + 8 * v3;
  v62 = 0;
  v33 = (__int64 *)v5;
  v63 = 0;
  v64 = 1;
  v65 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v62, v4);
  v6 = qword_1C7F2C0;
  v66 = 0;
  v67 = 0;
  v68 = 1;
  v69 = 0;
  sub_182CEF0(qword_1C7F2C0, &v66);
  sub_182CBA0(v6, &v68);
  BYTE4(v68) &= ~1u;
  a1[1] = 0;
  *((_DWORD *)a1 + 4) = 1;
  *a1 = 0;
  LODWORD(v68) = 1;
  sub_91F480((__int64)(a1 + 2), (__int64)&v62);
  v7 = 0;
  sub_25A130((char *)&v66);
  sub_25A130((char *)&v62);
  v34 = 4 * v3;
  for ( i = *v33; *v33; i = *v33 )
  {
    if ( v7 >= *(_DWORD *)(i - 4) )
      break;
    v9 = *(_DWORD *)(a2[35] + v34);
    v39 &= 0xFCu;
    v42 &= 0xFCu;
    v40 = 0;
    v41 = 1;
    v43 = 0;
    v38 = v9;
    sub_182CBA0(qword_1C7F2C0, &v41);
    v41 = 1;
    v42 &= ~1u;
    v45 &= 0xFCu;
    v48 &= 0xFCu;
    v44 = dword_1C7F370;
    v46 = 0;
    v47 = 1;
    v49 = 0;
    sub_182CBA0(qword_1C7F2C0, &v47);
    v48 &= ~1u;
    v10 = qword_1C7F2C0;
    v47 = 1;
    v52[0] = 0;
    v52[1] = 0;
    v53[0] = 1;
    v53[1] = 0;
    if ( (v39 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v52, &v38);
    else
      LODWORD(v52[0]) = v38;
    if ( (v42 & 1) != 0 )
    {
      sub_182C690(v10, v53, &v41);
    }
    else
    {
      BYTE4(v53[0]) &= ~1u;
      LODWORD(v53[0]) = v41;
    }
    v54[0] = 0;
    v11 = qword_1C7F2C0;
    v54[1] = 0;
    v55[0] = 1;
    v55[1] = 0;
    if ( (v45 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v54, &v44);
    else
      LODWORD(v54[0]) = v44;
    if ( (v48 & 1) != 0 )
    {
      sub_182C690(v11, v55, &v47);
    }
    else
    {
      BYTE4(v55[0]) &= ~1u;
      LODWORD(v55[0]) = v47;
    }
    v50[0] = 0;
    v50[1] = 0;
    v51[0] = 1;
    v51[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v51);
    BYTE4(v51[0]) &= ~1u;
    v12 = qword_1C7F2C0;
    LODWORD(v51[0]) = 1;
    v56[0] = 0;
    v56[1] = 0;
    v57[0] = 1;
    v57[1] = 0;
    if ( (v50[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v56, v50);
    else
      LODWORD(v56[0]) = v50[0];
    if ( (v51[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v12, v57, v51);
    }
    else
    {
      BYTE4(v57[0]) &= ~1u;
      LODWORD(v57[0]) = v51[0];
    }
    v58[0] = 0;
    v13 = qword_1C7F2C0;
    v58[1] = 0;
    v59[0] = 1;
    v59[1] = 0;
    if ( (v52[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v58, v52);
    else
      LODWORD(v58[0]) = v52[0];
    if ( (v53[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v13, v59, v53);
    }
    else
    {
      BYTE4(v59[0]) &= ~1u;
      LODWORD(v59[0]) = v53[0];
    }
    v60[0] = 0;
    v14 = qword_1C7F2C0;
    v60[1] = 0;
    v61[0] = 1;
    v61[1] = 0;
    if ( (v54[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v60, v54);
    else
      LODWORD(v60[0]) = v54[0];
    if ( (v55[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v14, v61, v55);
    }
    else
    {
      BYTE4(v61[0]) &= ~1u;
      LODWORD(v61[0]) = v55[0];
    }
    v15 = qword_1C7F2C0;
    v16 = *v33;
    v62 = 0;
    v63 = 0;
    v64 = 1;
    v17 = v16 + 40LL * v7;
    v65 = 0;
    if ( (v56[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v62, v56);
    else
      LODWORD(v62) = v56[0];
    if ( (v57[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v15, &v64, v57);
    }
    else
    {
      BYTE4(v64) &= ~1u;
      LODWORD(v64) = v57[0];
    }
    v66 = 0;
    v18 = qword_1C7F2C0;
    v67 = 0;
    v68 = 1;
    v69 = 0;
    if ( (v58[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v66, v58);
    else
      LODWORD(v66) = v58[0];
    if ( (v59[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v18, &v68, v59);
    }
    else
    {
      BYTE4(v68) &= ~1u;
      LODWORD(v68) = v59[0];
    }
    v70[0] = 0;
    v19 = qword_1C7F2C0;
    v70[1] = 0;
    v71[0] = 1;
    v71[1] = 0;
    if ( (v60[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v70, v60);
    else
      LODWORD(v70[0]) = v60[0];
    if ( (v61[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v19, v71, v61);
    }
    else
    {
      BYTE4(v71[0]) &= ~1u;
      LODWORD(v71[0]) = v61[0];
    }
    v20 = v17 + 8;
    if ( (v64 & 0x100000000LL) != 0 || (_DWORD)v64 != 1 || (*(_BYTE *)(v17 + 28) & 1) != 0 || *(_DWORD *)(v17 + 24) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, &v62, v17 + 8);
    }
    else
    {
      v35 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, &v62, v17 + 8);
      sub_182CBA0(v35, &v64);
      BYTE4(v64) &= ~1u;
      LODWORD(v64) = 1;
    }
    if ( (v68 & 0x100000000LL) != 0 || (_DWORD)v68 != 1 || (*(_BYTE *)(v17 + 28) & 1) != 0 || *(_DWORD *)(v17 + 24) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, &v66, v17 + 8);
    }
    else
    {
      v36 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, &v66, v17 + 8);
      sub_182CBA0(v36, &v68);
      BYTE4(v68) &= ~1u;
      LODWORD(v68) = 1;
    }
    if ( (v71[0] & 0x100000000LL) != 0
      || LODWORD(v71[0]) != 1
      || (*(_BYTE *)(v17 + 28) & 1) != 0
      || *(_DWORD *)(v17 + 24) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, v70, v20);
    }
    else
    {
      v37 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, v70, v20);
      sub_182CBA0(v37, v71);
      BYTE4(v71[0]) &= ~1u;
      LODWORD(v71[0]) = 1;
    }
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)a1, (__int64)&v62, (__int64)a1);
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(a1 + 2), (__int64)&v66, (__int64)(a1 + 2));
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(a1 + 4), (__int64)v70, (__int64)(a1 + 4));
    v21 = qword_1C7F2C0;
    ++v7;
    sub_182CBA0(qword_1C7F2C0, v70);
    sub_182CBA0(v21, v71);
    v22 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v66);
    sub_182CBA0(v22, &v68);
    v23 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v62);
    sub_182CBA0(v23, &v64);
    v24 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v60);
    sub_182CBA0(v24, v61);
    v25 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v58);
    sub_182CBA0(v25, v59);
    v26 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v56);
    sub_182CBA0(v26, v57);
    v27 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v50);
    sub_182CBA0(v27, v51);
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v54);
    sub_182CBA0(v28, v55);
    v29 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v52);
    sub_182CBA0(v29, v53);
    v30 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v44);
    sub_182CBA0(v30, &v47);
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v38);
    sub_182CBA0(v31, &v41);
  }
  return a1;
}

