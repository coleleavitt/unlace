__int64 __fastcall sub_9F0940(__int64 a1)
{
  __int64 v2; // rax
  char *v3; // r12
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rbx
  _DWORD *v7; // rax
  __int64 v8; // r15
  void *v9; // rdi
  void *v10; // r14
  int v11; // eax
  void *v12; // rdi
  int v13; // eax
  void *v14; // r14
  void *v15; // r14
  int v16; // r14d
  int v17; // ecx
  __int64 v18; // rdx
  char *v19; // r8
  __int64 v20; // rax
  char *v21; // r9
  char *i; // r14
  int v23; // eax
  void *v24; // rdi
  bool v25; // al
  bool v26; // al
  __int64 v27; // r14
  __int64 v28; // rax
  void *v29; // r13
  __int64 result; // rax
  void *v31; // r14
  int v32; // eax
  int v33; // eax
  bool v34; // al
  int v35; // eax
  char *v36; // rbx
  void *v37; // rbp
  char *v38; // rsi
  int v39; // edx
  char v40; // cl
  __int64 v41; // rax
  __int64 v42; // rdx
  char v43; // si
  __int64 v44; // rax
  char v45; // cl
  __int64 v46; // rdx
  void *v47; // [rsp+8h] [rbp-170h]
  __int64 v48; // [rsp+10h] [rbp-168h]
  int v49; // [rsp+28h] [rbp-150h]
  unsigned int v50; // [rsp+2Ch] [rbp-14Ch]
  void *v51; // [rsp+30h] [rbp-148h]
  void *v52; // [rsp+30h] [rbp-148h]
  void *v53; // [rsp+30h] [rbp-148h]
  void *v54; // [rsp+30h] [rbp-148h]
  char *v55; // [rsp+30h] [rbp-148h]
  char *v56; // [rsp+30h] [rbp-148h]
  char *v57; // [rsp+38h] [rbp-140h]
  int v58; // [rsp+38h] [rbp-140h]
  char *v59; // [rsp+38h] [rbp-140h]
  char *v60; // [rsp+40h] [rbp-138h]
  int v61; // [rsp+40h] [rbp-138h]
  int v62; // [rsp+4Ch] [rbp-12Ch]
  __int64 v63; // [rsp+58h] [rbp-120h]
  int v64; // [rsp+6Ch] [rbp-10Ch] BYREF
  char *v65; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v66; // [rsp+78h] [rbp-100h]
  __int64 v67; // [rsp+7Ch] [rbp-FCh]
  int v68; // [rsp+90h] [rbp-E8h] BYREF
  char v69; // [rsp+94h] [rbp-E4h]
  int v70; // [rsp+A0h] [rbp-D8h] BYREF
  char v71; // [rsp+A4h] [rbp-D4h]
  int v72; // [rsp+B0h] [rbp-C8h] BYREF
  char v73; // [rsp+B4h] [rbp-C4h]
  __int64 v74; // [rsp+B8h] [rbp-C0h]
  int v75; // [rsp+C0h] [rbp-B8h] BYREF
  char v76; // [rsp+C4h] [rbp-B4h]
  __int64 v77; // [rsp+C8h] [rbp-B0h]
  int v78; // [rsp+D0h] [rbp-A8h] BYREF
  char v79; // [rsp+D4h] [rbp-A4h]
  __int64 v80; // [rsp+D8h] [rbp-A0h]
  int v81; // [rsp+E0h] [rbp-98h] BYREF
  char v82; // [rsp+E4h] [rbp-94h]
  __int64 v83; // [rsp+E8h] [rbp-90h]
  __int64 v84; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v85; // [rsp+F8h] [rbp-80h]
  __int64 v86; // [rsp+100h] [rbp-78h] BYREF
  __int64 v87; // [rsp+108h] [rbp-70h]
  __int64 v88; // [rsp+110h] [rbp-68h] BYREF
  __int64 v89; // [rsp+118h] [rbp-60h]
  __int64 v90; // [rsp+120h] [rbp-58h] BYREF
  __int64 v91; // [rsp+128h] [rbp-50h]
  __int64 v92; // [rsp+130h] [rbp-48h]

  v63 = a1 + 1408;
LABEL_2:
  v2 = sub_186B270(0x180u);
  *(_QWORD *)(v2 + 264) = 1;
  v3 = (char *)v2;
  *(_QWORD *)v2 = 0;
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 24) = 1;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 72) = 1;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 120) = 1;
  *(_QWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 144) = 0;
  *(_QWORD *)(v2 + 152) = 0;
  *(_QWORD *)(v2 + 160) = 0;
  *(_QWORD *)(v2 + 168) = 1;
  *(_QWORD *)(v2 + 176) = 0;
  *(_QWORD *)(v2 + 192) = 0;
  *(_QWORD *)(v2 + 200) = 0;
  *(_QWORD *)(v2 + 208) = 0;
  *(_QWORD *)(v2 + 216) = 1;
  *(_QWORD *)(v2 + 224) = 0;
  *(_QWORD *)(v2 + 240) = 0;
  *(_QWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 256) = 0;
  *(_BYTE *)(v2 + 268) = 0;
  *(_QWORD *)(v2 + 272) = 0;
  *(_QWORD *)(v2 + 288) = 0;
  *(_QWORD *)(v2 + 296) = 0;
  *(_QWORD *)(v2 + 304) = 0;
  *(_QWORD *)(v2 + 312) = 1;
  *(_QWORD *)(v2 + 320) = 0;
  *(_QWORD *)(v2 + 336) = 0;
  *(_QWORD *)(v2 + 344) = 0;
  *(_QWORD *)(v2 + 352) = 0;
  *(_QWORD *)(v2 + 360) = 1;
  *(_QWORD *)(v2 + 368) = 0;
  v4 = *(_QWORD *)(a1 + 32);
  v67 = 0;
  if ( !v4 || (v5 = *(_DWORD *)(v4 - 4), v64 = 0, v5 <= 0) )
  {
    v50 = 8;
    goto LABEL_64;
  }
  v50 = 8;
  v6 = 0;
  v48 = (unsigned int)v5;
  while ( 1 )
  {
    v49 = v6;
    v7 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(v4 + 8 * v6)) + 24);
    if ( v7 && *v7 == 5 && v7[1] == 1
      || !(unsigned __int8)sub_8EB4E0(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6)) )
    {
      goto LABEL_39;
    }
    v8 = sub_999800(a1, v6);
    LODWORD(v84) = 0;
    BYTE4(v84) &= 0xFCu;
    BYTE4(v86) &= 0xFCu;
    v9 = qword_1C7F2C0;
    v85 = 0;
    LODWORD(v86) = 1;
    v87 = 0;
    if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
    {
      v47 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, &v84, &qword_1C7F2A0);
      v9 = v47;
      if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
      {
LABEL_54:
        sub_182C690(v9, &v86, &qword_1C7F2B0);
        goto LABEL_11;
      }
    }
    else
    {
      LODWORD(v84) = qword_1C7F2A0;
      if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
        goto LABEL_54;
    }
    BYTE4(v86) &= ~1u;
    LODWORD(v86) = qword_1C7F2B0;
LABEL_11:
    v79 &= 0xFCu;
    v10 = qword_1C7F2C0;
    v82 &= 0xFCu;
    v78 = 0;
    v80 = 0;
    v81 = 1;
    v83 = 0;
    if ( (*(_BYTE *)(a1 + 1412) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v78, v63);
    else
      v78 = *(_DWORD *)(a1 + 1408);
    if ( (*(_BYTE *)(a1 + 1428) & 1) != 0 )
    {
      sub_182C690(v10, &v81, a1 + 1424);
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 1424);
      v82 &= ~1u;
      v81 = v11;
    }
    sub_3EBE30((__int64)&v88, (__int64)&v78, (__int64)&v84);
    v73 &= 0xFCu;
    v12 = qword_1C7F2C0;
    v76 &= 0xFCu;
    v72 = 0;
    v74 = 0;
    v75 = 1;
    v77 = 0;
    if ( (*(_BYTE *)(v8 + 4) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v72, v8);
    else
      v72 = *(_DWORD *)v8;
    if ( (*(_BYTE *)(v8 + 20) & 1) != 0 )
    {
      sub_182C690(v12, &v75, v8 + 16);
    }
    else
    {
      v13 = *(_DWORD *)(v8 + 16);
      v76 &= ~1u;
      v75 = v13;
    }
    sub_27B340((__int64)&v68, (__int64)&v72, (int *)&v88);
    v51 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v72);
    sub_182CBA0(v51, &v75);
    v52 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v88);
    sub_182CBA0(v52, &v90);
    v53 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v78);
    sub_182CBA0(v53, &v81);
    v14 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v84);
    sub_182CBA0(v14, &v86);
    v15 = qword_1C7F2C0;
    v88 = 0;
    v89 = 0;
    v90 = 1;
    v91 = 0;
    v92 = 0;
    if ( (v69 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v88, &v68);
    else
      LODWORD(v88) = v68;
    if ( (v71 & 1) != 0 )
    {
      sub_182C690(v15, &v90, &v70);
    }
    else
    {
      BYTE4(v90) &= ~1u;
      LODWORD(v90) = v70;
    }
    v16 = sub_182DB30(&v88);
    v17 = v16 + 3 * sub_182DB30(&v90);
    v18 = 48LL * (v17 & (v50 - 1));
    v19 = &v3[v18];
    v20 = 48LL * v50;
    v21 = &v3[v20];
    i = &v3[v18];
    if ( v18 != v20 )
    {
      do
      {
        v23 = *((_DWORD *)i + 1);
        if ( v23 == 2 )
        {
          if ( *(_DWORD *)i == v17 )
          {
            v24 = qword_1C7F2C0;
            if ( (i[12] & 1) != 0 || (v88 & 0x100000000LL) != 0 )
            {
              v62 = v17;
              v60 = v21;
              v57 = v19;
              v32 = sub_182C7B0(qword_1C7F2C0, i + 8, &v88);
              v19 = v57;
              v21 = v60;
              v17 = v62;
              v25 = v32 == 0;
            }
            else
            {
              v25 = *((_DWORD *)i + 2) == (_DWORD)v88;
            }
            if ( v25 )
            {
              if ( (i[28] & 1) != 0 || (v90 & 0x100000000LL) != 0 )
              {
                v61 = v17;
                v59 = v21;
                v56 = v19;
                v35 = sub_182C7B0(v24, i + 24, &v90);
                v19 = v56;
                v21 = v59;
                v17 = v61;
                v26 = v35 == 0;
              }
              else
              {
                v26 = *((_DWORD *)i + 6) == (_DWORD)v90;
              }
              if ( v26 )
              {
LABEL_37:
                v54 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v88);
                sub_182CBA0(v54, &v90);
                v27 = sub_999800(a1, *((_DWORD *)i + 10));
                v28 = sub_999800(a1, v6);
                if ( sub_3ED680((__int64)qword_1C7F2C0, v28, v27) )
                  goto LABEL_38;
                sub_25A130((char *)&v68);
                v84 = 2;
                v85 = 0;
                v86 = 1;
                v87 = 0;
                sub_182CBA0(qword_1C7F2C0, &v86);
                LODWORD(v86) = 1;
                BYTE4(v86) &= ~1u;
                sub_27B620((__int64)&v88, v63, (__int64)&v84);
                v39 = v88;
                v40 = BYTE4(v88);
                LODWORD(v88) = *(_DWORD *)(a1 + 1408);
                v41 = *(_QWORD *)(a1 + 1416);
                *(_DWORD *)(a1 + 1408) = v39;
                v42 = v89;
                v89 = v41;
                LOBYTE(v41) = *(_BYTE *)(a1 + 1412);
                *(_QWORD *)(a1 + 1416) = v42;
                LOBYTE(v42) = v40;
                v40 &= ~2u;
                v43 = v41 & 0xFD;
                BYTE4(v88) = v41 & 1 | v40 & 0xFE | v41 & 2;
                LODWORD(v41) = *(_DWORD *)(a1 + 1424);
                *(_BYTE *)(a1 + 1412) = v40 & 1 | v43 & 0xFE | v42 & 2;
                LODWORD(v42) = v90;
                LODWORD(v90) = v41;
                v44 = *(_QWORD *)(a1 + 1432);
                v45 = BYTE4(v90);
                *(_DWORD *)(a1 + 1424) = v42;
                v46 = v91;
                v91 = v44;
                LOBYTE(v44) = *(_BYTE *)(a1 + 1428);
                *(_QWORD *)(a1 + 1432) = v46;
                LOBYTE(v46) = v45;
                v45 &= ~2u;
                BYTE4(v90) = v44 & 1 | v45 & 0xFE | v44 & 2;
                *(_BYTE *)(a1 + 1428) = v45 & 1 | v44 & 0xFC | v46 & 2;
                sub_25A130((char *)&v88);
                sub_25A130((char *)&v84);
                if ( v3 )
                  sub_98B4B0(v3, v50);
                goto LABEL_2;
              }
            }
          }
        }
        else if ( !v23 )
        {
          goto LABEL_43;
        }
        i += 48;
      }
      while ( v21 != i );
    }
    for ( i = v3; v19 != i; i += 48 )
    {
      v33 = *((_DWORD *)i + 1);
      if ( v33 == 2 )
      {
        if ( *(_DWORD *)i == v17 )
        {
          v58 = v17;
          v55 = v19;
          v34 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(i + 8), (__int64)&v88);
          v19 = v55;
          v17 = v58;
          if ( v34 )
            goto LABEL_37;
        }
      }
      else if ( !v33 )
      {
        break;
      }
    }
LABEL_43:
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v88);
    sub_182CBA0(v31, &v90);
    v65 = v3;
    v66 = v50;
    sub_9EEAC0((__int64)&v65, (__int64)&v68, &v64);
    v3 = v65;
    v50 = v66;
LABEL_38:
    v29 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v68);
    sub_182CBA0(v29, &v70);
LABEL_39:
    ++v6;
    v64 = v49 + 1;
    result = v48;
    if ( v6 == v48 )
      break;
    v4 = *(_QWORD *)(a1 + 32);
  }
  if ( !v3 )
    return result;
  if ( v50 )
  {
LABEL_64:
    v36 = v3;
    do
    {
      v37 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v36 + 8);
      v38 = v36 + 24;
      v36 += 48;
      sub_182CBA0(v37, v38);
    }
    while ( v36 != &v3[48 * v50] );
  }
  return sub_186B220(v3);
}

