__int64 __fastcall sub_931FC0(__int64 a1)
{
  int v1; // edx
  char v2; // cl
  __int64 v3; // rax
  __int64 v4; // rdx
  char v5; // si
  __int64 v6; // rax
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned int *v12; // rbp
  void *v13; // r13
  void *v14; // r13
  void *v15; // r13
  void *v16; // r13
  void *v17; // r13
  void *v18; // r13
  void *v19; // r13
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  char v26; // al
  void *v27; // r15
  char v28; // r14
  void *v29; // r15
  void *v30; // r14
  void *v31; // r14
  void *v32; // r15
  void *v33; // r15
  void *v34; // r13
  void *v35; // r13
  void *v36; // r13
  void *v37; // r13
  void *v38; // r13
  void *v39; // r13
  __int64 v40; // [rsp+88h] [rbp-1F0h]
  int v41; // [rsp+A0h] [rbp-1D8h] BYREF
  char v42; // [rsp+A4h] [rbp-1D4h]
  __int64 v43; // [rsp+A8h] [rbp-1D0h]
  int v44; // [rsp+B0h] [rbp-1C8h] BYREF
  char v45; // [rsp+B4h] [rbp-1C4h]
  __int64 v46; // [rsp+B8h] [rbp-1C0h]
  int v47; // [rsp+C0h] [rbp-1B8h] BYREF
  char v48; // [rsp+C4h] [rbp-1B4h]
  __int64 v49; // [rsp+C8h] [rbp-1B0h]
  int v50; // [rsp+D0h] [rbp-1A8h] BYREF
  char v51; // [rsp+D4h] [rbp-1A4h]
  __int64 v52; // [rsp+D8h] [rbp-1A0h]
  int v53; // [rsp+E0h] [rbp-198h] BYREF
  char v54; // [rsp+E4h] [rbp-194h]
  __int64 v55; // [rsp+E8h] [rbp-190h]
  int v56; // [rsp+F0h] [rbp-188h] BYREF
  char v57; // [rsp+F4h] [rbp-184h]
  __int64 v58; // [rsp+F8h] [rbp-180h]
  int v59; // [rsp+100h] [rbp-178h] BYREF
  char v60; // [rsp+104h] [rbp-174h]
  __int64 v61; // [rsp+108h] [rbp-170h]
  int v62; // [rsp+110h] [rbp-168h] BYREF
  char v63; // [rsp+114h] [rbp-164h]
  __int64 v64; // [rsp+118h] [rbp-160h]
  int v65; // [rsp+120h] [rbp-158h] BYREF
  char v66; // [rsp+124h] [rbp-154h]
  __int64 v67; // [rsp+128h] [rbp-150h]
  int v68; // [rsp+130h] [rbp-148h] BYREF
  char v69; // [rsp+134h] [rbp-144h]
  __int64 v70; // [rsp+138h] [rbp-140h]
  int v71; // [rsp+140h] [rbp-138h] BYREF
  char v72; // [rsp+144h] [rbp-134h]
  __int64 v73; // [rsp+148h] [rbp-130h]
  int v74; // [rsp+150h] [rbp-128h] BYREF
  char v75; // [rsp+154h] [rbp-124h]
  __int64 v76; // [rsp+158h] [rbp-120h]
  __int64 v77; // [rsp+160h] [rbp-118h] BYREF
  __int64 v78; // [rsp+168h] [rbp-110h]
  int v79; // [rsp+170h] [rbp-108h] BYREF
  char v80; // [rsp+174h] [rbp-104h]
  __int64 v81; // [rsp+178h] [rbp-100h]
  _BYTE v82[16]; // [rsp+180h] [rbp-F8h] BYREF
  _BYTE v83[16]; // [rsp+190h] [rbp-E8h] BYREF
  int v84; // [rsp+1A0h] [rbp-D8h] BYREF
  char v85; // [rsp+1A4h] [rbp-D4h]
  int v86; // [rsp+1B0h] [rbp-C8h] BYREF
  char v87; // [rsp+1B4h] [rbp-C4h]
  _BYTE v88[16]; // [rsp+1C0h] [rbp-B8h] BYREF
  _BYTE v89[16]; // [rsp+1D0h] [rbp-A8h] BYREF
  _BYTE v90[16]; // [rsp+1E0h] [rbp-98h] BYREF
  _BYTE v91[16]; // [rsp+1F0h] [rbp-88h] BYREF
  int v92; // [rsp+200h] [rbp-78h] BYREF
  char v93; // [rsp+204h] [rbp-74h]
  int v94; // [rsp+210h] [rbp-68h] BYREF
  char v95; // [rsp+214h] [rbp-64h]
  __int64 v96; // [rsp+220h] [rbp-58h] BYREF
  __int64 v97; // [rsp+228h] [rbp-50h]
  __int64 v98; // [rsp+230h] [rbp-48h] BYREF
  __int64 v99; // [rsp+238h] [rbp-40h]

  v96 = 1;
  v97 = 0;
  v98 = 2;
  v99 = 0;
  sub_6E0DD0((__int64)qword_1C7F2C0, (__int64)&v96);
  v1 = v96;
  v2 = BYTE4(v96);
  LODWORD(v96) = *(_DWORD *)(a1 + 344);
  v3 = *(_QWORD *)(a1 + 352);
  *(_DWORD *)(a1 + 344) = v1;
  v4 = v97;
  v97 = v3;
  LOBYTE(v3) = *(_BYTE *)(a1 + 348);
  *(_QWORD *)(a1 + 352) = v4;
  LOBYTE(v4) = v2;
  v2 &= ~2u;
  v5 = v3 & 0xFD;
  BYTE4(v96) = v3 & 1 | v2 & 0xFE | v3 & 2;
  LODWORD(v3) = *(_DWORD *)(a1 + 360);
  *(_BYTE *)(a1 + 348) = v2 & 1 | v5 & 0xFE | v4 & 2;
  LODWORD(v4) = v98;
  LODWORD(v98) = v3;
  v6 = *(_QWORD *)(a1 + 368);
  v7 = BYTE4(v98);
  *(_DWORD *)(a1 + 360) = v4;
  v8 = v99;
  v99 = v6;
  LOBYTE(v6) = *(_BYTE *)(a1 + 364);
  *(_QWORD *)(a1 + 368) = v8;
  LOBYTE(v8) = v7;
  v7 &= ~2u;
  BYTE4(v98) = v6 & 1 | v7 & 0xFE | v6 & 2;
  *(_BYTE *)(a1 + 364) = v7 & 1 | v6 & 0xFC | v8 & 2;
  sub_25A130((char *)&v96);
  v9 = *(_QWORD *)(a1 + 192);
  if ( !v9 )
  {
    v40 = 0;
    v12 = (unsigned int *)&dword_14;
    goto LABEL_6;
  }
  result = 20LL * *(unsigned int *)(v9 - 4);
  v11 = v9 + result;
  v12 = (unsigned int *)(v9 + 20);
  v40 = v11;
  if ( result != 20 )
  {
    do
    {
LABEL_6:
      v20 = *(_DWORD *)(*(_QWORD *)(a1 + 288) + 8LL * v12[1]);
      v42 &= 0xFCu;
      v45 &= 0xFCu;
      v41 = v20;
      v43 = 0;
      v44 = 1;
      v46 = 0;
      sub_182CBA0(qword_1C7F2C0, &v44);
      v45 &= ~1u;
      v44 = 1;
      v21 = *(_DWORD *)(*(_QWORD *)(a1 + 288) + 8LL * v12[1] + 4);
      v48 &= 0xFCu;
      v51 &= 0xFCu;
      v49 = 0;
      v50 = 1;
      v52 = 0;
      v47 = v21;
      sub_182CBA0(qword_1C7F2C0, &v50);
      v51 &= ~1u;
      v22 = *(_QWORD *)(a1 + 288);
      v50 = 1;
      LODWORD(v22) = *(_DWORD *)(v22 + 8LL * *v12);
      v54 &= 0xFCu;
      v57 &= 0xFCu;
      v55 = 0;
      v56 = 1;
      v58 = 0;
      v53 = v22;
      sub_182CBA0(qword_1C7F2C0, &v56);
      v57 &= ~1u;
      v23 = *(_QWORD *)(a1 + 288);
      v56 = 1;
      LODWORD(v23) = *(_DWORD *)(v23 + 8LL * *v12 + 4);
      v60 &= 0xFCu;
      v63 &= 0xFCu;
      v59 = v23;
      v61 = 0;
      v62 = 1;
      v64 = 0;
      sub_182CBA0(qword_1C7F2C0, &v62);
      v63 &= ~1u;
      v62 = 1;
      v24 = v12[2];
      v66 &= 0xFCu;
      v65 = v24;
      v69 &= 0xFCu;
      v67 = 0;
      v68 = 1;
      v70 = 0;
      sub_182CBA0(qword_1C7F2C0, &v68);
      v69 &= ~1u;
      v68 = 1;
      v25 = v12[3];
      v72 &= 0xFCu;
      v71 = v25;
      v75 &= 0xFCu;
      v73 = 0;
      v74 = 1;
      v76 = 0;
      sub_182CBA0(qword_1C7F2C0, &v74);
      v75 &= ~1u;
      v74 = 1;
      sub_27B340((__int64)&v92, (__int64)&v53, &v65);
      if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v41, (__int64)&v92) )
      {
        sub_27B340((__int64)&v96, (__int64)&v59, &v71);
        v26 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v96, (__int64)&v47);
        v27 = qword_1C7F2C0;
        v28 = v26;
        sub_182CBA0(qword_1C7F2C0, &v96);
        sub_182CBA0(v27, &v98);
        v29 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v92);
        sub_182CBA0(v29, &v94);
        if ( v28 )
        {
          sub_3EBB80((__int64)v88, (__int64)&v47, (__int64)&v59);
          sub_3EBB80((__int64)v90, (__int64)v88, (__int64)&v71);
          v96 = 2;
          v97 = 0;
          v98 = 1;
          v99 = 0;
          sub_182CBA0(qword_1C7F2C0, &v98);
          LODWORD(v98) = 1;
          BYTE4(v98) &= ~1u;
          sub_3EBE30((__int64)&v92, (__int64)&v96, (__int64)v90);
          v30 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v96);
          sub_182CBA0(v30, &v98);
          sub_27B340((__int64)v82, (__int64)&v53, &v65);
          sub_3EBB80((__int64)&v84, (__int64)v82, (__int64)&v41);
          v96 = 0;
          v31 = qword_1C7F2C0;
          v97 = 0;
          v98 = 1;
          v99 = 0;
          if ( (v85 & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v96, &v84);
          else
            LODWORD(v96) = v84;
          if ( (v87 & 1) == 0 )
          {
            BYTE4(v98) &= ~1u;
            v32 = qword_1C7F2C0;
            LODWORD(v98) = v86;
            if ( !(_DWORD)v96 )
              goto LABEL_24;
LABEL_12:
            if ( (v93 & 1) != 0 || v92 != 1 || (v95 & 1) != 0 || v94 != 1 )
            {
              sub_1831650(v32, &v96, &v94);
              sub_1831650(v32, &v98, &v92);
              if ( (int)v98 < 0 )
              {
                sub_1831620(v32, &v96);
                sub_1831620(v32, &v98);
              }
              v77 = 0;
              v78 = 0;
              sub_1832C70(v32, &v96, &v98, &v77);
              if ( (v77 & 0x100000000LL) != 0 || (_DWORD)v77 != 1 )
              {
                sub_1833EB0(v32, &v96, &v77, &v96);
                sub_1833EB0(v32, &v98, &v77, &v98);
              }
              sub_182CBA0(v32, &v77);
            }
            else
            {
LABEL_24:
              sub_27B950((__int64)v32, (__int64)&v96, (int *)&v96);
            }
            LODWORD(v77) = 0;
            BYTE4(v77) &= 0xFCu;
            v80 &= 0xFCu;
            v78 = 0;
            v79 = 1;
            v81 = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)&v77, (int *)&v96);
            v33 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v96);
            sub_182CBA0(v33, &v98);
            v34 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v84);
            sub_182CBA0(v34, &v86);
            v35 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v82);
            sub_182CBA0(v35, v83);
            v36 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v92);
            sub_182CBA0(v36, &v94);
            v37 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v90);
            sub_182CBA0(v37, v91);
            v38 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v88);
            sub_182CBA0(v38, v89);
            if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v77, a1 + 344) )
              sub_27B950((__int64)qword_1C7F2C0, a1 + 344, (int *)&v77);
            v39 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v77);
            sub_182CBA0(v39, &v79);
            goto LABEL_5;
          }
          sub_182C690(v31, &v98, &v86);
          v32 = qword_1C7F2C0;
          if ( (_DWORD)v96 )
            goto LABEL_12;
          goto LABEL_24;
        }
      }
      else
      {
        v13 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v92);
        sub_182CBA0(v13, &v94);
      }
LABEL_5:
      v14 = qword_1C7F2C0;
      v12 += 5;
      sub_182CBA0(qword_1C7F2C0, &v71);
      sub_182CBA0(v14, &v74);
      v15 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v65);
      sub_182CBA0(v15, &v68);
      v16 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v59);
      sub_182CBA0(v16, &v62);
      v17 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v53);
      sub_182CBA0(v17, &v56);
      v18 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v47);
      sub_182CBA0(v18, &v50);
      v19 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v41);
      sub_182CBA0(v19, &v44);
      result = v40;
    }
    while ( v12 != (unsigned int *)v40 );
  }
  return result;
}

