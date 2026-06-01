__int64 __fastcall sub_8A2720(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int **v4; // rbp
  int *v5; // rdx
  void *v6; // r13
  void *v7; // rdi
  void *v8; // rdi
  unsigned int *v9; // rbp
  int v10; // eax
  void *v11; // r13
  void *v12; // r14
  void *v13; // r13
  void *v14; // r13
  void *v15; // r13
  void *v16; // r13
  void *v17; // r13
  void *v18; // r13
  void *v19; // r13
  void *v20; // r13
  void *v21; // r14
  void *v22; // r13
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
  __int64 v33; // r13
  void *v34; // r14
  __int64 v35; // r13
  unsigned int *v37; // [rsp+70h] [rbp-1C8h]
  void *v38; // [rsp+78h] [rbp-1C0h]
  void *v39; // [rsp+78h] [rbp-1C0h]
  void *v40; // [rsp+78h] [rbp-1C0h]
  int v41; // [rsp+80h] [rbp-1B8h] BYREF
  char v42; // [rsp+84h] [rbp-1B4h]
  __int64 v43; // [rsp+88h] [rbp-1B0h]
  int v44; // [rsp+90h] [rbp-1A8h] BYREF
  char v45; // [rsp+94h] [rbp-1A4h]
  __int64 v46; // [rsp+98h] [rbp-1A0h]
  int v47; // [rsp+A0h] [rbp-198h] BYREF
  char v48; // [rsp+A4h] [rbp-194h]
  __int64 v49; // [rsp+A8h] [rbp-190h]
  int v50; // [rsp+B0h] [rbp-188h] BYREF
  char v51; // [rsp+B4h] [rbp-184h]
  __int64 v52; // [rsp+B8h] [rbp-180h]
  int v53; // [rsp+C0h] [rbp-178h] BYREF
  char v54; // [rsp+C4h] [rbp-174h]
  __int64 v55; // [rsp+C8h] [rbp-170h]
  int v56; // [rsp+D0h] [rbp-168h] BYREF
  char v57; // [rsp+D4h] [rbp-164h]
  __int64 v58; // [rsp+D8h] [rbp-160h]
  _QWORD v59[2]; // [rsp+E0h] [rbp-158h] BYREF
  _QWORD v60[2]; // [rsp+F0h] [rbp-148h] BYREF
  _QWORD v61[2]; // [rsp+100h] [rbp-138h] BYREF
  _QWORD v62[2]; // [rsp+110h] [rbp-128h] BYREF
  _QWORD v63[2]; // [rsp+120h] [rbp-118h] BYREF
  _QWORD v64[2]; // [rsp+130h] [rbp-108h] BYREF
  _QWORD v65[2]; // [rsp+140h] [rbp-F8h] BYREF
  _QWORD v66[2]; // [rsp+150h] [rbp-E8h] BYREF
  _QWORD v67[2]; // [rsp+160h] [rbp-D8h] BYREF
  _QWORD v68[2]; // [rsp+170h] [rbp-C8h] BYREF
  _QWORD v69[2]; // [rsp+180h] [rbp-B8h] BYREF
  _QWORD v70[2]; // [rsp+190h] [rbp-A8h] BYREF
  __int64 v71; // [rsp+1A0h] [rbp-98h] BYREF
  __int64 v72; // [rsp+1A8h] [rbp-90h]
  __int64 v73; // [rsp+1B0h] [rbp-88h] BYREF
  __int64 v74; // [rsp+1B8h] [rbp-80h]
  __int64 v75; // [rsp+1C0h] [rbp-78h] BYREF
  __int64 v76; // [rsp+1C8h] [rbp-70h]
  __int64 v77; // [rsp+1D0h] [rbp-68h] BYREF
  __int64 v78; // [rsp+1D8h] [rbp-60h]
  _QWORD v79[2]; // [rsp+1E0h] [rbp-58h] BYREF
  _QWORD v80[9]; // [rsp+1F0h] [rbp-48h] BYREF

  v4 = (unsigned int **)(a2[99] + 8LL * a3);
  v5 = (int *)(a2[100] + 32LL * a3);
  v71 = 0;
  v72 = 0;
  v73 = 1;
  v74 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v71, v5);
  v6 = qword_1C7F2C0;
  v75 = 0;
  v76 = 0;
  v77 = 1;
  v78 = 0;
  sub_182CEF0(qword_1C7F2C0, &v75);
  sub_182CBA0(v6, &v77);
  *(_BYTE *)(a1 + 36) &= 0xFCu;
  v7 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 52) &= 0xFCu;
  *(_OWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)a1 = 0;
  BYTE4(v77) &= ~1u;
  LODWORD(v77) = 1;
  sub_27B950((__int64)v7, a1 + 32, (int *)&v71);
  *(_BYTE *)(a1 + 68) &= 0xFCu;
  v8 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 84) &= 0xFCu;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  sub_27B950((__int64)v8, a1 + 64, (int *)&v75);
  sub_25A130((char *)&v75);
  sub_25A130((char *)&v71);
  v9 = *v4;
  if ( v9 )
  {
    v37 = &v9[10 * *(v9 - 1)];
    while ( v37 != v9 )
    {
      v33 = *v9;
      v41 = 0;
      v42 &= 0xFCu;
      v34 = qword_1C7F2C0;
      v35 = a2[29] + 32 * v33;
      v45 &= 0xFCu;
      v43 = 0;
      v44 = 1;
      v46 = 0;
      if ( (*(_BYTE *)(v35 + 4) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, &v41, v35);
        if ( (*(_BYTE *)(v35 + 20) & 1) != 0 )
        {
LABEL_58:
          sub_182C690(v34, &v44, v35 + 16);
          goto LABEL_6;
        }
      }
      else
      {
        v41 = *(_DWORD *)v35;
        if ( (*(_BYTE *)(v35 + 20) & 1) != 0 )
          goto LABEL_58;
      }
      v10 = *(_DWORD *)(v35 + 16);
      v45 &= ~1u;
      v44 = v10;
LABEL_6:
      v48 &= 0xFCu;
      v11 = qword_1C7F2C0;
      v51 &= 0xFCu;
      v47 = 0;
      v49 = 0;
      v50 = 1;
      v52 = 0;
      if ( (v42 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v47, &v41);
      else
        v47 = v41;
      if ( (v45 & 1) != 0 )
      {
        sub_182C690(v11, &v50, &v44);
      }
      else
      {
        v51 &= ~1u;
        v50 = v44;
      }
      v12 = qword_1C7F2C0;
      v53 = 0;
      v54 &= 0xFCu;
      v57 &= 0xFCu;
      v55 = 0;
      v56 = 1;
      v58 = 0;
      if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v53, &qword_1C7F2A0);
      else
        v53 = qword_1C7F2A0;
      if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
      {
        sub_182C690(v12, &v56, &qword_1C7F2B0);
      }
      else
      {
        v57 &= ~1u;
        v56 = qword_1C7F2B0;
      }
      v61[0] = 0;
      v13 = qword_1C7F2C0;
      v61[1] = 0;
      v62[0] = 1;
      v62[1] = 0;
      if ( (v48 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v61, &v47);
      else
        LODWORD(v61[0]) = v47;
      if ( (v51 & 1) != 0 )
      {
        sub_182C690(v13, v62, &v50);
      }
      else
      {
        BYTE4(v62[0]) &= ~1u;
        LODWORD(v62[0]) = v50;
      }
      v63[0] = 0;
      v14 = qword_1C7F2C0;
      v63[1] = 0;
      v64[0] = 1;
      v64[1] = 0;
      if ( (v54 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v63, &v53);
      else
        LODWORD(v63[0]) = v53;
      if ( (v57 & 1) != 0 )
      {
        sub_182C690(v14, v64, &v56);
      }
      else
      {
        BYTE4(v64[0]) &= ~1u;
        LODWORD(v64[0]) = v56;
      }
      v59[0] = 0;
      v59[1] = 0;
      v60[0] = 1;
      v60[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v60);
      BYTE4(v60[0]) &= ~1u;
      v15 = qword_1C7F2C0;
      LODWORD(v60[0]) = 1;
      v65[0] = 0;
      v65[1] = 0;
      v66[0] = 1;
      v66[1] = 0;
      if ( (v59[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v65, v59);
      else
        LODWORD(v65[0]) = v59[0];
      if ( (v60[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v15, v66, v60);
      }
      else
      {
        BYTE4(v66[0]) &= ~1u;
        LODWORD(v66[0]) = v60[0];
      }
      v67[0] = 0;
      v16 = qword_1C7F2C0;
      v67[1] = 0;
      v68[0] = 1;
      v68[1] = 0;
      if ( (v61[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v67, v61);
      else
        LODWORD(v67[0]) = v61[0];
      if ( (v62[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v16, v68, v62);
      }
      else
      {
        BYTE4(v68[0]) &= ~1u;
        LODWORD(v68[0]) = v62[0];
      }
      v69[0] = 0;
      v17 = qword_1C7F2C0;
      v69[1] = 0;
      v70[0] = 1;
      v70[1] = 0;
      if ( (v63[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v69, v63);
      else
        LODWORD(v69[0]) = v63[0];
      if ( (v64[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v17, v70, v64);
      }
      else
      {
        BYTE4(v70[0]) &= ~1u;
        LODWORD(v70[0]) = v64[0];
      }
      v71 = 0;
      v18 = qword_1C7F2C0;
      v72 = 0;
      v73 = 1;
      v74 = 0;
      if ( (v65[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v71, v65);
      else
        LODWORD(v71) = v65[0];
      if ( (v66[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v18, &v73, v66);
      }
      else
      {
        BYTE4(v73) &= ~1u;
        LODWORD(v73) = v66[0];
      }
      v75 = 0;
      v19 = qword_1C7F2C0;
      v76 = 0;
      v77 = 1;
      v78 = 0;
      if ( (v67[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v75, v67);
      else
        LODWORD(v75) = v67[0];
      if ( (v68[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v19, &v77, v68);
      }
      else
      {
        BYTE4(v77) &= ~1u;
        LODWORD(v77) = v68[0];
      }
      v79[0] = 0;
      v20 = qword_1C7F2C0;
      v79[1] = 0;
      v80[0] = 1;
      v80[1] = 0;
      if ( (v69[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v79, v69);
      else
        LODWORD(v79[0]) = v69[0];
      if ( (v70[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v20, v80, v70);
      }
      else
      {
        BYTE4(v80[0]) &= ~1u;
        LODWORD(v80[0]) = v70[0];
      }
      if ( (v73 & 0x100000000LL) != 0 || (_DWORD)v73 != 1 || (v9[7] & 1) != 0 || v9[6] != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, &v71, v9 + 2);
      }
      else
      {
        v40 = qword_1C7F2C0;
        sub_1831650(qword_1C7F2C0, &v71, v9 + 2);
        sub_182CBA0(v40, &v73);
        BYTE4(v73) &= ~1u;
        LODWORD(v73) = 1;
      }
      if ( (v77 & 0x100000000LL) != 0 || (_DWORD)v77 != 1 || (v9[7] & 1) != 0 || v9[6] != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, &v75, v9 + 2);
      }
      else
      {
        v38 = qword_1C7F2C0;
        sub_1831650(qword_1C7F2C0, &v75, v9 + 2);
        sub_182CBA0(v38, &v77);
        BYTE4(v77) &= ~1u;
        LODWORD(v77) = 1;
      }
      if ( (v80[0] & 0x100000000LL) != 0 || LODWORD(v80[0]) != 1 || (v9[7] & 1) != 0 || v9[6] != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, v79, v9 + 2);
      }
      else
      {
        v39 = qword_1C7F2C0;
        sub_1831650(qword_1C7F2C0, v79, v9 + 2);
        sub_182CBA0(v39, v80);
        BYTE4(v80[0]) &= ~1u;
        LODWORD(v80[0]) = 1;
      }
      sub_2FC4A0((__int64)qword_1C7F2C0, a1, (__int64)&v71, a1);
      sub_2FC4A0((__int64)qword_1C7F2C0, a1 + 32, (__int64)&v75, a1 + 32);
      sub_2FC4A0((__int64)qword_1C7F2C0, a1 + 64, (__int64)v79, a1 + 64);
      v21 = qword_1C7F2C0;
      v9 += 10;
      sub_182CBA0(qword_1C7F2C0, v79);
      sub_182CBA0(v21, v80);
      v22 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v75);
      sub_182CBA0(v22, &v77);
      v23 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v71);
      sub_182CBA0(v23, &v73);
      v24 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v69);
      sub_182CBA0(v24, v70);
      v25 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v67);
      sub_182CBA0(v25, v68);
      v26 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v65);
      sub_182CBA0(v26, v66);
      v27 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v59);
      sub_182CBA0(v27, v60);
      v28 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v63);
      sub_182CBA0(v28, v64);
      v29 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v61);
      sub_182CBA0(v29, v62);
      v30 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v53);
      sub_182CBA0(v30, &v56);
      v31 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v47);
      sub_182CBA0(v31, &v50);
      v32 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v41);
      sub_182CBA0(v32, &v44);
    }
  }
  return a1;
}

