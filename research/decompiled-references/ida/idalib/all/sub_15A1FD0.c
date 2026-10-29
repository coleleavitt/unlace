__int64 *__fastcall sub_15A1FD0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // r12
  __int64 v4; // rax
  __int64 *v5; // r12
  __int64 *v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rax
  char v9; // bl
  __int64 v10; // r11
  __int64 v11; // rdx
  int v12; // r10d
  int v13; // r9d
  __int64 v14; // rbx
  int v15; // r8d
  int v16; // edi
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rax
  _QWORD *v23; // rbx
  _QWORD *v24; // r14
  _QWORD *v25; // r15
  char *v26; // rdi
  char v27; // al
  __int64 v28; // rdx
  __int64 *v29; // r13
  __int64 *v30; // r12
  __int64 v31; // rbp
  __int64 v32; // rax
  char v33; // bl
  __int64 v34; // r11
  __int64 v35; // rdx
  int v36; // r10d
  int v37; // r9d
  __int64 v38; // rbx
  int v39; // r8d
  int v40; // edi
  __int64 v41; // rcx
  int v42; // esi
  __int64 v43; // rbx
  __int64 v44; // rbx
  __int64 v45; // r15
  __int64 v46; // rax
  _QWORD *v47; // rbx
  _QWORD *v48; // r14
  _QWORD *v49; // r15
  char *v50; // rdi
  char v51; // al
  char v52; // dl
  __int64 v53; // rdx
  __int64 *v55; // rbx
  __int64 v56; // r14
  int v57; // ebp
  int v58; // r11d
  int v59; // r10d
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rsi
  __int64 v63; // rcx
  int v64; // r9d
  __int64 v65; // rax
  int v66; // r8d
  __int64 v67; // r13
  __int64 v68; // r15
  __int64 v69; // rax
  _QWORD *v70; // r14
  _QWORD *v71; // rbp
  _QWORD *v72; // r15
  char *v73; // rdi
  char v74; // al
  __int64 v75; // [rsp+8h] [rbp-F0h]
  __int64 v76; // [rsp+8h] [rbp-F0h]
  __int64 v77; // [rsp+8h] [rbp-F0h]
  __int64 v78; // [rsp+10h] [rbp-E8h]
  __int64 v79; // [rsp+10h] [rbp-E8h]
  __int64 v80; // [rsp+10h] [rbp-E8h]
  __int64 v81; // [rsp+18h] [rbp-E0h]
  __int64 v82; // [rsp+18h] [rbp-E0h]
  char v83; // [rsp+18h] [rbp-E0h]
  __int64 v84; // [rsp+20h] [rbp-D8h]
  __int64 v85; // [rsp+20h] [rbp-D8h]
  __int64 v86; // [rsp+28h] [rbp-D0h]
  __int64 v87; // [rsp+28h] [rbp-D0h]
  char v88; // [rsp+37h] [rbp-C1h]
  char v89; // [rsp+37h] [rbp-C1h]
  __int64 v90; // [rsp+38h] [rbp-C0h]
  signed __int64 v91; // [rsp+40h] [rbp-B8h]
  signed __int64 v92; // [rsp+48h] [rbp-B0h]
  __int64 *v93; // [rsp+50h] [rbp-A8h]
  __int64 *v94; // [rsp+58h] [rbp-A0h]
  __int64 v95; // [rsp+68h] [rbp-90h]

  v93 = a1;
  if ( a1 == a2 )
    return a3;
  v3 = a2;
  if ( a2 == a3 )
    return a1;
  v94 = (__int64 *)((char *)a1 + (char *)a3 - (char *)a2);
  v92 = 0xAAAAAAAAAAAAAAABLL * (((char *)a3 - (char *)a1) >> 5);
  if ( 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)a1) >> 5) == v92
                                                                - 0xAAAAAAAAAAAAAAABLL
                                                                * (((char *)a2 - (char *)a1) >> 5) )
  {
    v55 = a1;
    v94 = &a1[12
            * ((0x2AAAAAAAAAAAAABLL * ((unsigned __int64)((char *)(a2 - 12) - (char *)a1) >> 5)) & 0x7FFFFFFFFFFFFFFLL)
            + 12];
    while ( 1 )
    {
      v56 = *v55;
      v57 = *((_DWORD *)v55 + 4);
      v58 = *((_DWORD *)v55 + 5);
      v59 = *((_DWORD *)v55 + 6);
      v83 = *((_BYTE *)v55 + 64);
      v60 = v55[10];
      v61 = v55[5];
      v95 = v55[1];
      v62 = v55[6];
      v63 = v55[7];
      v55[5] = 0;
      v64 = *((_DWORD *)v55 + 7);
      v77 = v60;
      v65 = v55[11];
      v66 = *((_DWORD *)v55 + 8);
      v55[6] = 0;
      v55[7] = 0;
      v67 = v55[9];
      v80 = v65;
      *v55 = *v3;
      v55[1] = v3[1];
      *((_DWORD *)v55 + 4) = *((_DWORD *)v3 + 4);
      *((_DWORD *)v55 + 5) = *((_DWORD *)v3 + 5);
      *((_DWORD *)v55 + 6) = *((_DWORD *)v3 + 6);
      *((_DWORD *)v55 + 7) = *((_DWORD *)v3 + 7);
      *((_DWORD *)v55 + 8) = *((_DWORD *)v3 + 8);
      v55[5] = v3[5];
      v68 = v3[6];
      v3[5] = 0;
      v69 = v55[6];
      v55[6] = v68;
      v3[6] = v69;
      v55[7] = v3[7];
      LOBYTE(v69) = v3[8] & 1 | v55[8] & 0xFE;
      *((_BYTE *)v55 + 64) = v69;
      LOBYTE(v69) = v3[8] & 2 | v69 & 0xFD;
      *((_BYTE *)v55 + 64) = v69;
      LOBYTE(v69) = v3[8] & 4 | v69 & 0xFB;
      *((_BYTE *)v55 + 64) = v69;
      LOBYTE(v69) = v3[8] & 8 | v69 & 0xF7;
      *((_BYTE *)v55 + 64) = v69;
      LOBYTE(v69) = v3[8] & 0x10 | v69 & 0xEF;
      *((_BYTE *)v55 + 64) = v69;
      LOBYTE(v69) = v3[8] & 0x20 | v69 & 0xDF;
      *((_BYTE *)v55 + 64) = v69;
      *((_BYTE *)v55 + 64) = v3[8] & 0x40 | v69 & 0xBF;
      v55[9] = v3[9];
      v55[10] = v3[10];
      v55[11] = v3[11];
      *v3 = v56;
      v70 = (_QWORD *)v3[5];
      *((_DWORD *)v3 + 4) = v57;
      v71 = (_QWORD *)v3[6];
      v3[1] = v95;
      v72 = v70;
      *((_DWORD *)v3 + 5) = v58;
      *((_DWORD *)v3 + 6) = v59;
      *((_DWORD *)v3 + 7) = v64;
      *((_DWORD *)v3 + 8) = v66;
      v3[5] = v61;
      v3[6] = v62;
      for ( v3[7] = v63; v71 != v72; v72 += 8 )
      {
        while ( 1 )
        {
          v73 = (char *)v72[3];
          if ( v73 == (char *)(v72 + 5) )
            break;
          operator delete(v73);
          v72 += 8;
          if ( v71 == v72 )
            goto LABEL_40;
        }
      }
LABEL_40:
      if ( v70 )
        operator delete(v70);
      v74 = *((_BYTE *)v3 + 64);
      v55 += 12;
      v3 += 12;
      *(v3 - 3) = v67;
      *((_BYTE *)v3 - 32) = v83 & 0x7F | v74 & 0x80;
      *(v3 - 2) = v77;
      *(v3 - 1) = v80;
      if ( v55 == v94 )
        return v94;
    }
  }
  v90 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)a1) >> 5);
  v4 = v90;
  while ( 2 )
  {
    while ( 1 )
    {
      v91 = v92 - v4;
      if ( v4 >= v92 - v4 )
        break;
      v5 = v93;
      v6 = &v93[12 * v4];
      if ( v92 - v4 > 0 )
      {
        v7 = 0;
        do
        {
          v8 = v5[5];
          v9 = *((_BYTE *)v5 + 64);
          v5[5] = 0;
          v10 = *v5;
          v11 = v5[1];
          v12 = *((_DWORD *)v5 + 4);
          v75 = v8;
          v13 = *((_DWORD *)v5 + 5);
          v88 = v9;
          v14 = v5[9];
          v15 = *((_DWORD *)v5 + 6);
          v78 = v5[6];
          v16 = *((_DWORD *)v5 + 7);
          v17 = v5[7];
          *v5 = *v6;
          v18 = *((_DWORD *)v5 + 8);
          v81 = v14;
          v19 = v5[10];
          v5[1] = v6[1];
          v84 = v19;
          v20 = v5[11];
          *((_DWORD *)v5 + 4) = *((_DWORD *)v6 + 4);
          LODWORD(v8) = *((_DWORD *)v6 + 5);
          v86 = v20;
          v5[6] = 0;
          v5[7] = 0;
          *((_DWORD *)v5 + 5) = v8;
          *((_DWORD *)v5 + 6) = *((_DWORD *)v6 + 6);
          *((_DWORD *)v5 + 7) = *((_DWORD *)v6 + 7);
          *((_DWORD *)v5 + 8) = *((_DWORD *)v6 + 8);
          v5[5] = v6[5];
          v21 = v6[6];
          v6[5] = 0;
          v22 = v5[6];
          v5[6] = v21;
          v6[6] = v22;
          v5[7] = v6[7];
          LOBYTE(v22) = v6[8] & 1 | v5[8] & 0xFE;
          *((_BYTE *)v5 + 64) = v22;
          LOBYTE(v22) = v6[8] & 2 | v22 & 0xFD;
          *((_BYTE *)v5 + 64) = v22;
          LOBYTE(v22) = v6[8] & 4 | v22 & 0xFB;
          *((_BYTE *)v5 + 64) = v22;
          LOBYTE(v22) = v6[8] & 8 | v22 & 0xF7;
          *((_BYTE *)v5 + 64) = v22;
          LOBYTE(v22) = v6[8] & 0x10 | v22 & 0xEF;
          *((_BYTE *)v5 + 64) = v22;
          LOBYTE(v22) = v6[8] & 0x20 | v22 & 0xDF;
          *((_BYTE *)v5 + 64) = v22;
          *((_BYTE *)v5 + 64) = v6[8] & 0x40 | v22 & 0xBF;
          v5[9] = v6[9];
          v23 = (_QWORD *)v6[5];
          v24 = (_QWORD *)v6[6];
          v5[10] = v6[10];
          v25 = v23;
          v5[11] = v6[11];
          *v6 = v10;
          v6[5] = v75;
          v6[1] = v11;
          *((_DWORD *)v6 + 4) = v12;
          *((_DWORD *)v6 + 5) = v13;
          *((_DWORD *)v6 + 6) = v15;
          *((_DWORD *)v6 + 7) = v16;
          *((_DWORD *)v6 + 8) = v18;
          v6[6] = v78;
          for ( v6[7] = v17; v24 != v25; v25 += 8 )
          {
            while ( 1 )
            {
              v26 = (char *)v25[3];
              if ( v26 == (char *)(v25 + 5) )
                break;
              operator delete(v26);
              v25 += 8;
              if ( v25 == v24 )
                goto LABEL_11;
            }
          }
LABEL_11:
          if ( v23 )
            operator delete(v23);
          v27 = *((_BYTE *)v6 + 64);
          v5 += 12;
          v6 += 12;
          ++v7;
          *((_BYTE *)v6 - 32) = v88 & 0x7F | v27 & 0x80;
          *(v6 - 3) = v81;
          *(v6 - 2) = v84;
          *(v6 - 1) = v86;
        }
        while ( v91 != v7 );
        v93 += 12 * v91;
      }
      v28 = v92 % v90;
      if ( !(v92 % v90) )
        return v94;
      v92 = v90;
      v4 = v90 - v28;
      v90 -= v28;
    }
    v29 = &v93[12 * v92];
    v93 = &v29[-12 * v91];
    if ( v90 <= 0 )
      goto LABEL_28;
    v30 = &v29[-12 * v91];
    v31 = 0;
    do
    {
      v30 -= 12;
      v32 = v30[5];
      v29 -= 12;
      v33 = *((_BYTE *)v30 + 64);
      v34 = *v30;
      v35 = v30[1];
      v30[5] = 0;
      v36 = *((_DWORD *)v30 + 4);
      v76 = v32;
      v37 = *((_DWORD *)v30 + 5);
      v89 = v33;
      v38 = v30[9];
      v39 = *((_DWORD *)v30 + 6);
      v79 = v30[6];
      v40 = *((_DWORD *)v30 + 7);
      v41 = v30[7];
      *v30 = *v29;
      v42 = *((_DWORD *)v30 + 8);
      v82 = v38;
      v43 = v30[10];
      v30[1] = v29[1];
      v85 = v43;
      v44 = v30[11];
      *((_DWORD *)v30 + 4) = *((_DWORD *)v29 + 4);
      LODWORD(v32) = *((_DWORD *)v29 + 5);
      v87 = v44;
      v30[6] = 0;
      v30[7] = 0;
      *((_DWORD *)v30 + 5) = v32;
      *((_DWORD *)v30 + 6) = *((_DWORD *)v29 + 6);
      *((_DWORD *)v30 + 7) = *((_DWORD *)v29 + 7);
      *((_DWORD *)v30 + 8) = *((_DWORD *)v29 + 8);
      v30[5] = v29[5];
      v45 = v29[6];
      v29[5] = 0;
      v46 = v30[6];
      v30[6] = v45;
      v29[6] = v46;
      v30[7] = v29[7];
      LOBYTE(v46) = v29[8] & 1 | v30[8] & 0xFE;
      *((_BYTE *)v30 + 64) = v46;
      LOBYTE(v46) = v29[8] & 2 | v46 & 0xFD;
      *((_BYTE *)v30 + 64) = v46;
      LOBYTE(v46) = v29[8] & 4 | v46 & 0xFB;
      *((_BYTE *)v30 + 64) = v46;
      LOBYTE(v46) = v29[8] & 8 | v46 & 0xF7;
      *((_BYTE *)v30 + 64) = v46;
      LOBYTE(v46) = v29[8] & 0x10 | v46 & 0xEF;
      *((_BYTE *)v30 + 64) = v46;
      LOBYTE(v46) = v29[8] & 0x20 | v46 & 0xDF;
      *((_BYTE *)v30 + 64) = v46;
      *((_BYTE *)v30 + 64) = v29[8] & 0x40 | v46 & 0xBF;
      v30[9] = v29[9];
      v47 = (_QWORD *)v29[5];
      v48 = (_QWORD *)v29[6];
      v30[10] = v29[10];
      v49 = v47;
      v30[11] = v29[11];
      *v29 = v34;
      v29[5] = v76;
      v29[1] = v35;
      *((_DWORD *)v29 + 4) = v36;
      *((_DWORD *)v29 + 5) = v37;
      *((_DWORD *)v29 + 6) = v39;
      *((_DWORD *)v29 + 7) = v40;
      *((_DWORD *)v29 + 8) = v42;
      v29[6] = v79;
      v29[7] = v41;
      if ( v47 == v48 )
      {
LABEL_24:
        if ( v47 )
          goto LABEL_25;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v50 = (char *)v49[3];
            if ( v50 == (char *)(v49 + 5) )
              break;
            operator delete(v50);
            v49 += 8;
            if ( v49 == v48 )
              goto LABEL_24;
          }
          v49 += 8;
        }
        while ( v48 != v49 );
        if ( v47 )
        {
LABEL_25:
          operator delete(v47);
          v51 = v29[8] & 0x80;
          v52 = v89 & 0x7F;
          goto LABEL_26;
        }
      }
      v52 = v29[8] & 0x80;
      v51 = v89 & 0x7F;
LABEL_26:
      ++v31;
      *((_BYTE *)v29 + 64) = v52 | v51;
      v29[9] = v82;
      v29[10] = v85;
      v29[11] = v87;
    }
    while ( v90 != v31 );
    v93 -= 12 * v90;
LABEL_28:
    v53 = v92 % v91;
    v90 = v92 % v91;
    if ( v92 % v91 )
    {
      v92 = v91;
      v4 = v53;
      continue;
    }
    return v94;
  }
}
