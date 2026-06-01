__int64 __fastcall sub_8A36E0(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int **v4; // rbp
  int *v5; // rdx
  void *v6; // r13
  void *v7; // rdi
  void *v8; // rdi
  unsigned int *v9; // rbp
  void *v10; // r13
  void *v11; // r13
  void *v12; // r13
  void *v13; // r13
  void *v14; // r13
  void *v15; // r13
  void *v16; // r13
  void *v17; // r14
  void *v18; // r13
  void *v19; // r13
  void *v20; // r13
  void *v21; // r13
  void *v22; // r13
  void *v23; // r13
  void *v24; // r13
  void *v25; // r13
  void *v26; // r13
  void *v27; // r13
  int v28; // eax
  void *v29; // r13
  unsigned int *v31; // [rsp+70h] [rbp-1A8h]
  void *v32; // [rsp+78h] [rbp-1A0h]
  void *v33; // [rsp+78h] [rbp-1A0h]
  void *v34; // [rsp+78h] [rbp-1A0h]
  int v35; // [rsp+80h] [rbp-198h] BYREF
  char v36; // [rsp+84h] [rbp-194h]
  __int64 v37; // [rsp+88h] [rbp-190h]
  int v38; // [rsp+90h] [rbp-188h] BYREF
  char v39; // [rsp+94h] [rbp-184h]
  __int64 v40; // [rsp+98h] [rbp-180h]
  int v41; // [rsp+A0h] [rbp-178h] BYREF
  char v42; // [rsp+A4h] [rbp-174h]
  __int64 v43; // [rsp+A8h] [rbp-170h]
  int v44; // [rsp+B0h] [rbp-168h] BYREF
  char v45; // [rsp+B4h] [rbp-164h]
  __int64 v46; // [rsp+B8h] [rbp-160h]
  _QWORD v47[2]; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v48[2]; // [rsp+D0h] [rbp-148h] BYREF
  _QWORD v49[2]; // [rsp+E0h] [rbp-138h] BYREF
  _QWORD v50[2]; // [rsp+F0h] [rbp-128h] BYREF
  _QWORD v51[2]; // [rsp+100h] [rbp-118h] BYREF
  _QWORD v52[2]; // [rsp+110h] [rbp-108h] BYREF
  _QWORD v53[2]; // [rsp+120h] [rbp-F8h] BYREF
  _QWORD v54[2]; // [rsp+130h] [rbp-E8h] BYREF
  _QWORD v55[2]; // [rsp+140h] [rbp-D8h] BYREF
  _QWORD v56[2]; // [rsp+150h] [rbp-C8h] BYREF
  _QWORD v57[2]; // [rsp+160h] [rbp-B8h] BYREF
  _QWORD v58[2]; // [rsp+170h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+180h] [rbp-98h] BYREF
  __int64 v60; // [rsp+188h] [rbp-90h]
  __int64 v61; // [rsp+190h] [rbp-88h] BYREF
  __int64 v62; // [rsp+198h] [rbp-80h]
  __int64 v63; // [rsp+1A0h] [rbp-78h] BYREF
  __int64 v64; // [rsp+1A8h] [rbp-70h]
  __int64 v65; // [rsp+1B0h] [rbp-68h] BYREF
  __int64 v66; // [rsp+1B8h] [rbp-60h]
  _QWORD v67[2]; // [rsp+1C0h] [rbp-58h] BYREF
  _QWORD v68[9]; // [rsp+1D0h] [rbp-48h] BYREF

  v4 = (unsigned int **)(a2[96] + 8LL * a3);
  v5 = (int *)(a2[97] + 32LL * a3);
  v59 = 0;
  v60 = 0;
  v61 = 1;
  v62 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v59, v5);
  v6 = qword_1C7F2C0;
  v63 = 0;
  v64 = 0;
  v65 = 1;
  v66 = 0;
  sub_182CEF0(qword_1C7F2C0, &v63);
  sub_182CBA0(v6, &v65);
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
  BYTE4(v65) &= ~1u;
  LODWORD(v65) = 1;
  sub_27B950((__int64)v7, a1 + 32, (int *)&v59);
  *(_BYTE *)(a1 + 68) &= 0xFCu;
  v8 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 84) &= 0xFCu;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  sub_27B950((__int64)v8, a1 + 64, (int *)&v63);
  sub_25A130((char *)&v63);
  sub_25A130((char *)&v59);
  v9 = *v4;
  if ( v9 )
  {
    v31 = &v9[10 * *(v9 - 1)];
    while ( v31 != v9 )
    {
      v28 = *(_DWORD *)(a2[26] + 4LL * *v9);
      v36 &= 0xFCu;
      v39 &= 0xFCu;
      v37 = 0;
      v38 = 1;
      v40 = 0;
      v35 = v28;
      sub_182CBA0(qword_1C7F2C0, &v38);
      v38 = 1;
      v39 &= ~1u;
      v42 &= 0xFCu;
      v45 &= 0xFCu;
      v43 = 0;
      v44 = 1;
      v46 = 0;
      v41 = dword_1C7F370;
      sub_182CBA0(qword_1C7F2C0, &v44);
      v45 &= ~1u;
      v29 = qword_1C7F2C0;
      v44 = 1;
      v49[0] = 0;
      v49[1] = 0;
      v50[0] = 1;
      v50[1] = 0;
      if ( (v36 & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v49, &v35);
        if ( (v39 & 1) != 0 )
        {
LABEL_46:
          sub_182C690(v29, v50, &v38);
          goto LABEL_6;
        }
      }
      else
      {
        LODWORD(v49[0]) = v35;
        if ( (v39 & 1) != 0 )
          goto LABEL_46;
      }
      BYTE4(v50[0]) &= ~1u;
      LODWORD(v50[0]) = v38;
LABEL_6:
      v51[0] = 0;
      v10 = qword_1C7F2C0;
      v51[1] = 0;
      v52[0] = 1;
      v52[1] = 0;
      if ( (v42 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v51, &v41);
      else
        LODWORD(v51[0]) = v41;
      if ( (v45 & 1) != 0 )
      {
        sub_182C690(v10, v52, &v44);
      }
      else
      {
        BYTE4(v52[0]) &= ~1u;
        LODWORD(v52[0]) = v44;
      }
      v47[0] = 0;
      v47[1] = 0;
      v48[0] = 1;
      v48[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v48);
      BYTE4(v48[0]) &= ~1u;
      v11 = qword_1C7F2C0;
      LODWORD(v48[0]) = 1;
      v53[0] = 0;
      v53[1] = 0;
      v54[0] = 1;
      v54[1] = 0;
      if ( (v47[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v53, v47);
      else
        LODWORD(v53[0]) = v47[0];
      if ( (v48[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v11, v54, v48);
      }
      else
      {
        BYTE4(v54[0]) &= ~1u;
        LODWORD(v54[0]) = v48[0];
      }
      v55[0] = 0;
      v12 = qword_1C7F2C0;
      v55[1] = 0;
      v56[0] = 1;
      v56[1] = 0;
      if ( (v49[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v55, v49);
      else
        LODWORD(v55[0]) = v49[0];
      if ( (v50[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v12, v56, v50);
      }
      else
      {
        BYTE4(v56[0]) &= ~1u;
        LODWORD(v56[0]) = v50[0];
      }
      v57[0] = 0;
      v13 = qword_1C7F2C0;
      v57[1] = 0;
      v58[0] = 1;
      v58[1] = 0;
      if ( (v51[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v57, v51);
      else
        LODWORD(v57[0]) = v51[0];
      if ( (v52[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v13, v58, v52);
      }
      else
      {
        BYTE4(v58[0]) &= ~1u;
        LODWORD(v58[0]) = v52[0];
      }
      v59 = 0;
      v14 = qword_1C7F2C0;
      v60 = 0;
      v61 = 1;
      v62 = 0;
      if ( (v53[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v59, v53);
      else
        LODWORD(v59) = v53[0];
      if ( (v54[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v14, &v61, v54);
      }
      else
      {
        BYTE4(v61) &= ~1u;
        LODWORD(v61) = v54[0];
      }
      v63 = 0;
      v15 = qword_1C7F2C0;
      v64 = 0;
      v65 = 1;
      v66 = 0;
      if ( (v55[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v63, v55);
      else
        LODWORD(v63) = v55[0];
      if ( (v56[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v15, &v65, v56);
      }
      else
      {
        BYTE4(v65) &= ~1u;
        LODWORD(v65) = v56[0];
      }
      v67[0] = 0;
      v16 = qword_1C7F2C0;
      v67[1] = 0;
      v68[0] = 1;
      v68[1] = 0;
      if ( (v57[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v67, v57);
      else
        LODWORD(v67[0]) = v57[0];
      if ( (v58[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v16, v68, v58);
      }
      else
      {
        BYTE4(v68[0]) &= ~1u;
        LODWORD(v68[0]) = v58[0];
      }
      if ( (v61 & 0x100000000LL) != 0 || (_DWORD)v61 != 1 || (v9[7] & 1) != 0 || v9[6] != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, &v59, v9 + 2);
      }
      else
      {
        v34 = qword_1C7F2C0;
        sub_1831650(qword_1C7F2C0, &v59, v9 + 2);
        sub_182CBA0(v34, &v61);
        BYTE4(v61) &= ~1u;
        LODWORD(v61) = 1;
      }
      if ( (v65 & 0x100000000LL) != 0 || (_DWORD)v65 != 1 || (v9[7] & 1) != 0 || v9[6] != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, &v63, v9 + 2);
      }
      else
      {
        v32 = qword_1C7F2C0;
        sub_1831650(qword_1C7F2C0, &v63, v9 + 2);
        sub_182CBA0(v32, &v65);
        BYTE4(v65) &= ~1u;
        LODWORD(v65) = 1;
      }
      if ( (v68[0] & 0x100000000LL) != 0 || LODWORD(v68[0]) != 1 || (v9[7] & 1) != 0 || v9[6] != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, v67, v9 + 2);
      }
      else
      {
        v33 = qword_1C7F2C0;
        sub_1831650(qword_1C7F2C0, v67, v9 + 2);
        sub_182CBA0(v33, v68);
        BYTE4(v68[0]) &= ~1u;
        LODWORD(v68[0]) = 1;
      }
      sub_2FC4A0((__int64)qword_1C7F2C0, a1, (__int64)&v59, a1);
      sub_2FC4A0((__int64)qword_1C7F2C0, a1 + 32, (__int64)&v63, a1 + 32);
      sub_2FC4A0((__int64)qword_1C7F2C0, a1 + 64, (__int64)v67, a1 + 64);
      v17 = qword_1C7F2C0;
      v9 += 10;
      sub_182CBA0(qword_1C7F2C0, v67);
      sub_182CBA0(v17, v68);
      v18 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v63);
      sub_182CBA0(v18, &v65);
      v19 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v59);
      sub_182CBA0(v19, &v61);
      v20 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v57);
      sub_182CBA0(v20, v58);
      v21 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v55);
      sub_182CBA0(v21, v56);
      v22 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v53);
      sub_182CBA0(v22, v54);
      v23 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v47);
      sub_182CBA0(v23, v48);
      v24 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v51);
      sub_182CBA0(v24, v52);
      v25 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v49);
      sub_182CBA0(v25, v50);
      v26 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v41);
      sub_182CBA0(v26, &v44);
      v27 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v35);
      sub_182CBA0(v27, &v38);
    }
  }
  return a1;
}

