__int64 __fastcall sub_8A5510(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int **v4; // rbp
  int *v5; // rdx
  void *v6; // r14
  void *v7; // rdi
  void *v8; // rdi
  unsigned int *v9; // rbp
  int v10; // eax
  int v11; // eax
  void *v12; // r14
  void *v13; // r14
  void *v14; // r14
  void *v15; // r14
  void *v16; // r14
  void *v17; // r14
  void *v18; // r14
  void *v19; // r14
  void *v20; // r14
  void *v21; // r14
  void *v22; // r14
  void *v23; // r15
  void *v24; // r14
  void *v25; // r14
  void *v26; // r14
  void *v27; // r14
  void *v28; // r14
  void *v29; // r14
  void *v30; // r14
  void *v31; // r14
  void *v32; // r14
  void *v33; // r14
  void *v34; // r14
  __int64 v35; // rax
  void *v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rax
  int *v39; // r14
  unsigned int *v41; // [rsp+70h] [rbp-1D8h]
  void *v42; // [rsp+78h] [rbp-1D0h]
  void *v43; // [rsp+78h] [rbp-1D0h]
  void *v44; // [rsp+78h] [rbp-1D0h]
  int v45; // [rsp+80h] [rbp-1C8h] BYREF
  char v46; // [rsp+84h] [rbp-1C4h]
  __int64 v47; // [rsp+88h] [rbp-1C0h]
  int v48; // [rsp+90h] [rbp-1B8h] BYREF
  char v49; // [rsp+94h] [rbp-1B4h]
  __int64 v50; // [rsp+98h] [rbp-1B0h]
  int v51; // [rsp+A0h] [rbp-1A8h] BYREF
  char v52; // [rsp+A4h] [rbp-1A4h]
  __int64 v53; // [rsp+A8h] [rbp-1A0h]
  int v54; // [rsp+B0h] [rbp-198h] BYREF
  char v55; // [rsp+B4h] [rbp-194h]
  __int64 v56; // [rsp+B8h] [rbp-190h]
  _QWORD v57[2]; // [rsp+C0h] [rbp-188h] BYREF
  _QWORD v58[2]; // [rsp+D0h] [rbp-178h] BYREF
  int v59; // [rsp+E0h] [rbp-168h] BYREF
  char v60; // [rsp+E4h] [rbp-164h]
  __int64 v61; // [rsp+E8h] [rbp-160h]
  int v62; // [rsp+F0h] [rbp-158h] BYREF
  char v63; // [rsp+F4h] [rbp-154h]
  __int64 v64; // [rsp+F8h] [rbp-150h]
  int v65; // [rsp+100h] [rbp-148h]
  _QWORD v66[2]; // [rsp+110h] [rbp-138h] BYREF
  _QWORD v67[2]; // [rsp+120h] [rbp-128h] BYREF
  _QWORD v68[2]; // [rsp+130h] [rbp-118h] BYREF
  _QWORD v69[2]; // [rsp+140h] [rbp-108h] BYREF
  _QWORD v70[2]; // [rsp+150h] [rbp-F8h] BYREF
  _QWORD v71[2]; // [rsp+160h] [rbp-E8h] BYREF
  _QWORD v72[2]; // [rsp+170h] [rbp-D8h] BYREF
  _QWORD v73[2]; // [rsp+180h] [rbp-C8h] BYREF
  _QWORD v74[2]; // [rsp+190h] [rbp-B8h] BYREF
  _QWORD v75[2]; // [rsp+1A0h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+1B0h] [rbp-98h] BYREF
  __int64 v77; // [rsp+1B8h] [rbp-90h]
  __int64 v78; // [rsp+1C0h] [rbp-88h] BYREF
  __int64 v79; // [rsp+1C8h] [rbp-80h]
  __int64 v80; // [rsp+1D0h] [rbp-78h] BYREF
  __int64 v81; // [rsp+1D8h] [rbp-70h]
  __int64 v82; // [rsp+1E0h] [rbp-68h] BYREF
  __int64 v83; // [rsp+1E8h] [rbp-60h]
  _QWORD v84[2]; // [rsp+1F0h] [rbp-58h] BYREF
  _QWORD v85[9]; // [rsp+200h] [rbp-48h] BYREF

  v4 = (unsigned int **)(a2[100] + 8LL * a3);
  v5 = (int *)(a2[101] + 32LL * a3);
  v76 = 0;
  v77 = 0;
  v78 = 1;
  v79 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v76, v5);
  v6 = qword_1C7F2C0;
  v80 = 0;
  v81 = 0;
  v82 = 1;
  v83 = 0;
  sub_182CEF0(qword_1C7F2C0, &v80);
  sub_182CBA0(v6, &v82);
  *(_BYTE *)(a1 + 36) &= 0xFCu;
  v7 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 52) &= 0xFCu;
  *(_OWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)a1 = 0;
  BYTE4(v82) &= ~1u;
  LODWORD(v82) = 1;
  sub_27B950((__int64)v7, a1 + 32, (int *)&v76);
  *(_BYTE *)(a1 + 68) &= 0xFCu;
  v8 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 84) &= 0xFCu;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  sub_27B950((__int64)v8, a1 + 64, (int *)&v80);
  sub_25A130((char *)&v80);
  sub_25A130((char *)&v76);
  v9 = *v4;
  if ( v9 )
  {
    v41 = &v9[10 * *(v9 - 1)];
    while ( v41 != v9 )
    {
      v35 = *v9;
      v36 = qword_1C7F2C0;
      v59 = 0;
      v60 &= 0xFCu;
      v37 = 5 * v35;
      v63 &= 0xFCu;
      v61 = 0;
      v38 = a2[30];
      v62 = 1;
      v64 = 0;
      v39 = (int *)(v38 + 8 * v37);
      if ( (v39[1] & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, &v59, v38 + 8 * v37);
        if ( (v39[5] & 1) != 0 )
        {
LABEL_58:
          sub_182C690(v36, &v62, v39 + 4);
          goto LABEL_6;
        }
      }
      else
      {
        v59 = *v39;
        if ( (v39[5] & 1) != 0 )
          goto LABEL_58;
      }
      v10 = v39[4];
      v63 &= ~1u;
      v62 = v10;
LABEL_6:
      v11 = v39[8];
      v12 = qword_1C7F2C0;
      v45 = 0;
      v46 &= 0xFCu;
      v49 &= 0xFCu;
      v65 = v11;
      v47 = 0;
      v48 = 1;
      v50 = 0;
      if ( (v60 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v45, &v59);
      else
        v45 = v59;
      if ( (v63 & 1) != 0 )
      {
        sub_182C690(v12, &v48, &v62);
      }
      else
      {
        v49 &= ~1u;
        v48 = v62;
      }
      v77 = 0;
      BYTE4(v76) &= 0xFCu;
      LODWORD(v76) = v65;
      BYTE4(v78) &= 0xFCu;
      LODWORD(v78) = 1;
      v79 = 0;
      sub_182CBA0(qword_1C7F2C0, &v78);
      BYTE4(v78) &= ~1u;
      v13 = qword_1C7F2C0;
      v52 &= 0xFCu;
      v55 &= 0xFCu;
      LODWORD(v78) = 1;
      v51 = 0;
      v53 = 0;
      v54 = 1;
      v56 = 0;
      if ( (v76 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v51, &v76);
      else
        v51 = v76;
      if ( (v78 & 0x100000000LL) != 0 )
      {
        sub_182C690(v13, &v54, &v78);
      }
      else
      {
        v55 &= ~1u;
        v54 = v78;
      }
      v14 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v76);
      sub_182CBA0(v14, &v78);
      v15 = qword_1C7F2C0;
      v66[0] = 0;
      v66[1] = 0;
      v67[0] = 1;
      v67[1] = 0;
      if ( (v46 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v66, &v45);
      else
        LODWORD(v66[0]) = v45;
      if ( (v49 & 1) != 0 )
      {
        sub_182C690(v15, v67, &v48);
      }
      else
      {
        BYTE4(v67[0]) &= ~1u;
        LODWORD(v67[0]) = v48;
      }
      v68[0] = 0;
      v16 = qword_1C7F2C0;
      v68[1] = 0;
      v69[0] = 1;
      v69[1] = 0;
      if ( (v52 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v68, &v51);
      else
        LODWORD(v68[0]) = v51;
      if ( (v55 & 1) != 0 )
      {
        sub_182C690(v16, v69, &v54);
      }
      else
      {
        BYTE4(v69[0]) &= ~1u;
        LODWORD(v69[0]) = v54;
      }
      v57[0] = 0;
      v57[1] = 0;
      v58[0] = 1;
      v58[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v58);
      BYTE4(v58[0]) &= ~1u;
      v17 = qword_1C7F2C0;
      LODWORD(v58[0]) = 1;
      v70[0] = 0;
      v70[1] = 0;
      v71[0] = 1;
      v71[1] = 0;
      if ( (v57[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v70, v57);
      else
        LODWORD(v70[0]) = v57[0];
      if ( (v58[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v17, v71, v58);
      }
      else
      {
        BYTE4(v71[0]) &= ~1u;
        LODWORD(v71[0]) = v58[0];
      }
      v72[0] = 0;
      v18 = qword_1C7F2C0;
      v72[1] = 0;
      v73[0] = 1;
      v73[1] = 0;
      if ( (v66[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v72, v66);
      else
        LODWORD(v72[0]) = v66[0];
      if ( (v67[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v18, v73, v67);
      }
      else
      {
        BYTE4(v73[0]) &= ~1u;
        LODWORD(v73[0]) = v67[0];
      }
      v74[0] = 0;
      v19 = qword_1C7F2C0;
      v74[1] = 0;
      v75[0] = 1;
      v75[1] = 0;
      if ( (v68[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v74, v68);
      else
        LODWORD(v74[0]) = v68[0];
      if ( (v69[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v19, v75, v69);
      }
      else
      {
        BYTE4(v75[0]) &= ~1u;
        LODWORD(v75[0]) = v69[0];
      }
      v76 = 0;
      v20 = qword_1C7F2C0;
      v77 = 0;
      v78 = 1;
      v79 = 0;
      if ( (v70[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v76, v70);
      else
        LODWORD(v76) = v70[0];
      if ( (v71[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v20, &v78, v71);
      }
      else
      {
        BYTE4(v78) &= ~1u;
        LODWORD(v78) = v71[0];
      }
      v80 = 0;
      v21 = qword_1C7F2C0;
      v81 = 0;
      v82 = 1;
      v83 = 0;
      if ( (v72[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v80, v72);
      else
        LODWORD(v80) = v72[0];
      if ( (v73[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v21, &v82, v73);
      }
      else
      {
        BYTE4(v82) &= ~1u;
        LODWORD(v82) = v73[0];
      }
      v84[0] = 0;
      v22 = qword_1C7F2C0;
      v84[1] = 0;
      v85[0] = 1;
      v85[1] = 0;
      if ( (v74[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v84, v74);
      else
        LODWORD(v84[0]) = v74[0];
      if ( (v75[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v22, v85, v75);
      }
      else
      {
        BYTE4(v85[0]) &= ~1u;
        LODWORD(v85[0]) = v75[0];
      }
      if ( (v78 & 0x100000000LL) != 0 || (_DWORD)v78 != 1 || (v9[7] & 1) != 0 || v9[6] != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, &v76, v9 + 2);
      }
      else
      {
        v44 = qword_1C7F2C0;
        sub_1831650(qword_1C7F2C0, &v76, v9 + 2);
        sub_182CBA0(v44, &v78);
        BYTE4(v78) &= ~1u;
        LODWORD(v78) = 1;
      }
      if ( (v82 & 0x100000000LL) != 0 || (_DWORD)v82 != 1 || (v9[7] & 1) != 0 || v9[6] != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, &v80, v9 + 2);
      }
      else
      {
        v42 = qword_1C7F2C0;
        sub_1831650(qword_1C7F2C0, &v80, v9 + 2);
        sub_182CBA0(v42, &v82);
        BYTE4(v82) &= ~1u;
        LODWORD(v82) = 1;
      }
      if ( (v85[0] & 0x100000000LL) != 0 || LODWORD(v85[0]) != 1 || (v9[7] & 1) != 0 || v9[6] != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, v84, v9 + 2);
      }
      else
      {
        v43 = qword_1C7F2C0;
        sub_1831650(qword_1C7F2C0, v84, v9 + 2);
        sub_182CBA0(v43, v85);
        BYTE4(v85[0]) &= ~1u;
        LODWORD(v85[0]) = 1;
      }
      sub_2FC4A0((__int64)qword_1C7F2C0, a1, (__int64)&v76, a1);
      sub_2FC4A0((__int64)qword_1C7F2C0, a1 + 32, (__int64)&v80, a1 + 32);
      sub_2FC4A0((__int64)qword_1C7F2C0, a1 + 64, (__int64)v84, a1 + 64);
      v23 = qword_1C7F2C0;
      v9 += 10;
      sub_182CBA0(qword_1C7F2C0, v84);
      sub_182CBA0(v23, v85);
      v24 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v80);
      sub_182CBA0(v24, &v82);
      v25 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v76);
      sub_182CBA0(v25, &v78);
      v26 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v74);
      sub_182CBA0(v26, v75);
      v27 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v72);
      sub_182CBA0(v27, v73);
      v28 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v70);
      sub_182CBA0(v28, v71);
      v29 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v57);
      sub_182CBA0(v29, v58);
      v30 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v68);
      sub_182CBA0(v30, v69);
      v31 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v66);
      sub_182CBA0(v31, v67);
      v32 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v51);
      sub_182CBA0(v32, &v54);
      v33 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v45);
      sub_182CBA0(v33, &v48);
      v34 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v59);
      sub_182CBA0(v34, &v62);
    }
  }
  return a1;
}

