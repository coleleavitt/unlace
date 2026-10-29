__int64 __fastcall sub_932D10(__int64 a1)
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
  __int64 v21; // rax
  int v22; // eax
  char v23; // al
  void *v24; // r15
  char v25; // r13
  void *v26; // r15
  void *v27; // r13
  void *v28; // r13
  void *v29; // r15
  void *v30; // r15
  void *v31; // r15
  void *v32; // r15
  void *v33; // r15
  void *v34; // r15
  void *v35; // r15
  void *v36; // r15
  __int64 v37; // [rsp+98h] [rbp-1F0h]
  int v38; // [rsp+B0h] [rbp-1D8h] BYREF
  char v39; // [rsp+B4h] [rbp-1D4h]
  __int64 v40; // [rsp+B8h] [rbp-1D0h]
  int v41; // [rsp+C0h] [rbp-1C8h] BYREF
  char v42; // [rsp+C4h] [rbp-1C4h]
  __int64 v43; // [rsp+C8h] [rbp-1C0h]
  int v44; // [rsp+D0h] [rbp-1B8h] BYREF
  char v45; // [rsp+D4h] [rbp-1B4h]
  __int64 v46; // [rsp+D8h] [rbp-1B0h]
  int v47; // [rsp+E0h] [rbp-1A8h] BYREF
  char v48; // [rsp+E4h] [rbp-1A4h]
  __int64 v49; // [rsp+E8h] [rbp-1A0h]
  int v50; // [rsp+F0h] [rbp-198h] BYREF
  char v51; // [rsp+F4h] [rbp-194h]
  __int64 v52; // [rsp+F8h] [rbp-190h]
  int v53; // [rsp+100h] [rbp-188h] BYREF
  char v54; // [rsp+104h] [rbp-184h]
  __int64 v55; // [rsp+108h] [rbp-180h]
  int v56; // [rsp+110h] [rbp-178h] BYREF
  char v57; // [rsp+114h] [rbp-174h]
  __int64 v58; // [rsp+118h] [rbp-170h]
  int v59; // [rsp+120h] [rbp-168h] BYREF
  char v60; // [rsp+124h] [rbp-164h]
  __int64 v61; // [rsp+128h] [rbp-160h]
  int v62; // [rsp+130h] [rbp-158h] BYREF
  char v63; // [rsp+134h] [rbp-154h]
  __int64 v64; // [rsp+138h] [rbp-150h]
  int v65; // [rsp+140h] [rbp-148h] BYREF
  char v66; // [rsp+144h] [rbp-144h]
  __int64 v67; // [rsp+148h] [rbp-140h]
  int v68; // [rsp+150h] [rbp-138h] BYREF
  char v69; // [rsp+154h] [rbp-134h]
  __int64 v70; // [rsp+158h] [rbp-130h]
  int v71; // [rsp+160h] [rbp-128h] BYREF
  char v72; // [rsp+164h] [rbp-124h]
  __int64 v73; // [rsp+168h] [rbp-120h]
  __int64 v74; // [rsp+170h] [rbp-118h] BYREF
  __int64 v75; // [rsp+178h] [rbp-110h]
  int v76; // [rsp+180h] [rbp-108h] BYREF
  char v77; // [rsp+184h] [rbp-104h]
  __int64 v78; // [rsp+188h] [rbp-100h]
  _BYTE v79[16]; // [rsp+190h] [rbp-F8h] BYREF
  _BYTE v80[16]; // [rsp+1A0h] [rbp-E8h] BYREF
  int v81; // [rsp+1B0h] [rbp-D8h] BYREF
  char v82; // [rsp+1B4h] [rbp-D4h]
  int v83; // [rsp+1C0h] [rbp-C8h] BYREF
  char v84; // [rsp+1C4h] [rbp-C4h]
  _BYTE v85[16]; // [rsp+1D0h] [rbp-B8h] BYREF
  _BYTE v86[16]; // [rsp+1E0h] [rbp-A8h] BYREF
  _BYTE v87[16]; // [rsp+1F0h] [rbp-98h] BYREF
  _BYTE v88[16]; // [rsp+200h] [rbp-88h] BYREF
  int v89; // [rsp+210h] [rbp-78h] BYREF
  char v90; // [rsp+214h] [rbp-74h]
  int v91; // [rsp+220h] [rbp-68h] BYREF
  char v92; // [rsp+224h] [rbp-64h]
  __int64 v93; // [rsp+230h] [rbp-58h] BYREF
  __int64 v94; // [rsp+238h] [rbp-50h]
  __int64 v95; // [rsp+240h] [rbp-48h] BYREF
  __int64 v96; // [rsp+248h] [rbp-40h]

  v93 = 1;
  v94 = 0;
  v95 = 2;
  v96 = 0;
  sub_6E0DD0((__int64)qword_1C7F2C0, (__int64)&v93);
  v1 = v93;
  v2 = BYTE4(v93);
  LODWORD(v93) = *(_DWORD *)(a1 + 336);
  v3 = *(_QWORD *)(a1 + 344);
  *(_DWORD *)(a1 + 336) = v1;
  v4 = v94;
  v94 = v3;
  LOBYTE(v3) = *(_BYTE *)(a1 + 340);
  *(_QWORD *)(a1 + 344) = v4;
  LOBYTE(v4) = v2;
  v2 &= ~2u;
  v5 = v3 & 0xFD;
  BYTE4(v93) = v3 & 1 | v2 & 0xFE | v3 & 2;
  LODWORD(v3) = *(_DWORD *)(a1 + 352);
  *(_BYTE *)(a1 + 340) = v2 & 1 | v5 & 0xFE | v4 & 2;
  LODWORD(v4) = v95;
  LODWORD(v95) = v3;
  v6 = *(_QWORD *)(a1 + 360);
  v7 = BYTE4(v95);
  *(_DWORD *)(a1 + 352) = v4;
  v8 = v96;
  v96 = v6;
  LOBYTE(v6) = *(_BYTE *)(a1 + 356);
  *(_QWORD *)(a1 + 360) = v8;
  LOBYTE(v8) = v7;
  v7 &= ~2u;
  BYTE4(v95) = v6 & 1 | v7 & 0xFE | v6 & 2;
  *(_BYTE *)(a1 + 356) = v7 & 1 | v6 & 0xFC | v8 & 2;
  sub_25A130((char *)&v93);
  v9 = *(_QWORD *)(a1 + 184);
  if ( !v9 )
  {
    v37 = 0;
    v12 = (_DWORD *)&word_10;
    goto LABEL_6;
  }
  result = 16LL * *(unsigned int *)(v9 - 4);
  v11 = v9 + result;
  v12 = (unsigned int *)(v9 + 16);
  v37 = v11;
  if ( result != 16 )
  {
    do
    {
LABEL_6:
      v20 = *(_DWORD *)(*(_QWORD *)(a1 + 280) + 4LL * v12[1]);
      v39 &= 0xFCu;
      v42 &= 0xFCu;
      v38 = v20;
      v40 = 0;
      v41 = 1;
      v43 = 0;
      sub_182CBA0(qword_1C7F2C0, &v41);
      v41 = 1;
      v42 &= ~1u;
      v45 &= 0xFCu;
      v48 &= 0xFCu;
      v46 = 0;
      v47 = 1;
      v49 = 0;
      v44 = dword_1C7F370;
      sub_182CBA0(qword_1C7F2C0, &v47);
      v48 &= ~1u;
      v21 = *(_QWORD *)(a1 + 280);
      v47 = 1;
      LODWORD(v21) = *(_DWORD *)(v21 + 4LL * *v12);
      v51 &= 0xFCu;
      v54 &= 0xFCu;
      v52 = 0;
      v53 = 1;
      v55 = 0;
      v50 = v21;
      sub_182CBA0(qword_1C7F2C0, &v53);
      v53 = 1;
      v54 &= ~1u;
      v56 = dword_1C7F370;
      v57 &= 0xFCu;
      v60 &= 0xFCu;
      v58 = 0;
      v59 = 1;
      v61 = 0;
      sub_182CBA0(qword_1C7F2C0, &v59);
      v60 &= ~1u;
      v59 = 1;
      v22 = v12[2];
      v63 &= 0xFCu;
      v62 = v22;
      v66 &= 0xFCu;
      v64 = 0;
      v65 = 1;
      v67 = 0;
      sub_182CBA0(qword_1C7F2C0, &v65);
      v65 = 1;
      v66 &= ~1u;
      v68 = dword_1C7F370;
      v69 &= 0xFCu;
      v72 &= 0xFCu;
      v70 = 0;
      v71 = 1;
      v73 = 0;
      sub_182CBA0(qword_1C7F2C0, &v71);
      v72 &= ~1u;
      v71 = 1;
      sub_27B340((__int64)&v89, (__int64)&v50, &v62);
      if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v38, (__int64)&v89) )
      {
        sub_27B340((__int64)&v93, (__int64)&v56, &v68);
        v23 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v93, (__int64)&v44);
        v24 = qword_1C7F2C0;
        v25 = v23;
        sub_182CBA0(qword_1C7F2C0, &v93);
        sub_182CBA0(v24, &v95);
        v26 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v89);
        sub_182CBA0(v26, &v91);
        if ( v25 )
        {
          sub_3EBB80((__int64)v85, (__int64)&v44, (__int64)&v56);
          sub_3EBB80((__int64)v87, (__int64)v85, (__int64)&v68);
          v93 = 2;
          v94 = 0;
          v95 = 1;
          v96 = 0;
          sub_182CBA0(qword_1C7F2C0, &v95);
          LODWORD(v95) = 1;
          BYTE4(v95) &= ~1u;
          sub_3EBE30((__int64)&v89, (__int64)&v93, (__int64)v87);
          v27 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v93);
          sub_182CBA0(v27, &v95);
          sub_27B340((__int64)v79, (__int64)&v50, &v62);
          sub_3EBB80((__int64)&v81, (__int64)v79, (__int64)&v38);
          v93 = 0;
          v28 = qword_1C7F2C0;
          v94 = 0;
          v95 = 1;
          v96 = 0;
          if ( (v82 & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v93, &v81);
          else
            LODWORD(v93) = v81;
          if ( (v84 & 1) == 0 )
          {
            BYTE4(v95) &= ~1u;
            v29 = qword_1C7F2C0;
            LODWORD(v95) = v83;
            if ( !(_DWORD)v93 )
              goto LABEL_24;
LABEL_12:
            if ( (v90 & 1) != 0 || v89 != 1 || (v92 & 1) != 0 || v91 != 1 )
            {
              sub_1831650(v29, &v93, &v91);
              sub_1831650(v29, &v95, &v89);
              if ( (int)v95 < 0 )
              {
                sub_1831620(v29, &v93);
                sub_1831620(v29, &v95);
              }
              v74 = 0;
              v75 = 0;
              sub_1832C70(v29, &v93, &v95, &v74);
              if ( (v74 & 0x100000000LL) != 0 || (_DWORD)v74 != 1 )
              {
                sub_1833EB0(v29, &v93, &v74, &v93);
                sub_1833EB0(v29, &v95, &v74, &v95);
              }
              sub_182CBA0(v29, &v74);
            }
            else
            {
LABEL_24:
              sub_27B950((__int64)v29, (__int64)&v93, (int *)&v93);
            }
            LODWORD(v74) = 0;
            BYTE4(v74) &= 0xFCu;
            v77 &= 0xFCu;
            v75 = 0;
            v76 = 1;
            v78 = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)&v74, (int *)&v93);
            v30 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v93);
            sub_182CBA0(v30, &v95);
            v31 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v81);
            sub_182CBA0(v31, &v83);
            v32 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v79);
            sub_182CBA0(v32, v80);
            v33 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v89);
            sub_182CBA0(v33, &v91);
            v34 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v87);
            sub_182CBA0(v34, v88);
            v35 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v85);
            sub_182CBA0(v35, v86);
            if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v74, a1 + 336) )
              sub_27B950((__int64)qword_1C7F2C0, a1 + 336, (int *)&v74);
            v36 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v74);
            sub_182CBA0(v36, &v76);
            goto LABEL_5;
          }
          sub_182C690(v28, &v95, &v83);
          v29 = qword_1C7F2C0;
          if ( (_DWORD)v93 )
            goto LABEL_12;
          goto LABEL_24;
        }
      }
      else
      {
        v13 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v89);
        sub_182CBA0(v13, &v91);
      }
LABEL_5:
      v14 = qword_1C7F2C0;
      v12 += 4;
      sub_182CBA0(qword_1C7F2C0, &v68);
      sub_182CBA0(v14, &v71);
      v15 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v62);
      sub_182CBA0(v15, &v65);
      v16 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v56);
      sub_182CBA0(v16, &v59);
      v17 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v50);
      sub_182CBA0(v17, &v53);
      v18 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v44);
      sub_182CBA0(v18, &v47);
      v19 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v38);
      sub_182CBA0(v19, &v41);
      result = v37;
    }
    while ( v12 != (unsigned int *)v37 );
  }
  return result;
}

