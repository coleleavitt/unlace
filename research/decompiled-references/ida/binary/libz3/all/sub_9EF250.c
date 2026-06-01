__int64 __fastcall sub_9EF250(__int64 a1)
{
  __int64 v2; // rax
  char *v3; // r12
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rbx
  _DWORD *v7; // rax
  int *v8; // rax
  int *v9; // r15
  void *v10; // r14
  int v11; // eax
  void *v12; // r14
  int v13; // eax
  void *v14; // rdi
  int v15; // eax
  void *v16; // r14
  void *v17; // r14
  int v18; // r14d
  int v19; // ecx
  __int64 v20; // rdx
  char *v21; // r8
  __int64 v22; // rax
  char *v23; // r9
  char *i; // r14
  int v25; // eax
  void *v26; // rdi
  bool v27; // al
  bool v28; // al
  int *v29; // r14
  int *v30; // rax
  void *v31; // r13
  __int64 result; // rax
  void *v33; // r14
  int v34; // eax
  int v35; // eax
  bool v36; // al
  int v37; // eax
  char *v38; // rbx
  void *v39; // rbp
  char *v40; // rsi
  int v41; // edx
  char v42; // cl
  __int64 v43; // rax
  __int64 v44; // rdx
  char v45; // si
  __int64 v46; // rax
  char v47; // cl
  __int64 v48; // rdx
  __int64 v49; // [rsp+10h] [rbp-168h]
  int v50; // [rsp+28h] [rbp-150h]
  unsigned int v51; // [rsp+2Ch] [rbp-14Ch]
  void *v52; // [rsp+30h] [rbp-148h]
  void *v53; // [rsp+30h] [rbp-148h]
  void *v54; // [rsp+30h] [rbp-148h]
  void *v55; // [rsp+30h] [rbp-148h]
  char *v56; // [rsp+30h] [rbp-148h]
  char *v57; // [rsp+30h] [rbp-148h]
  char *v58; // [rsp+38h] [rbp-140h]
  int v59; // [rsp+38h] [rbp-140h]
  char *v60; // [rsp+38h] [rbp-140h]
  char *v61; // [rsp+40h] [rbp-138h]
  int v62; // [rsp+40h] [rbp-138h]
  int v63; // [rsp+4Ch] [rbp-12Ch]
  __int64 v64; // [rsp+58h] [rbp-120h]
  int v65; // [rsp+6Ch] [rbp-10Ch] BYREF
  char *v66; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v67; // [rsp+78h] [rbp-100h]
  __int64 v68; // [rsp+7Ch] [rbp-FCh]
  int v69; // [rsp+90h] [rbp-E8h] BYREF
  char v70; // [rsp+94h] [rbp-E4h]
  int v71; // [rsp+A0h] [rbp-D8h] BYREF
  char v72; // [rsp+A4h] [rbp-D4h]
  int v73; // [rsp+B0h] [rbp-C8h] BYREF
  char v74; // [rsp+B4h] [rbp-C4h]
  __int64 v75; // [rsp+B8h] [rbp-C0h]
  int v76; // [rsp+C0h] [rbp-B8h] BYREF
  char v77; // [rsp+C4h] [rbp-B4h]
  __int64 v78; // [rsp+C8h] [rbp-B0h]
  int v79; // [rsp+D0h] [rbp-A8h] BYREF
  char v80; // [rsp+D4h] [rbp-A4h]
  __int64 v81; // [rsp+D8h] [rbp-A0h]
  int v82; // [rsp+E0h] [rbp-98h] BYREF
  char v83; // [rsp+E4h] [rbp-94h]
  __int64 v84; // [rsp+E8h] [rbp-90h]
  __int64 v85; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v86; // [rsp+F8h] [rbp-80h]
  __int64 v87; // [rsp+100h] [rbp-78h] BYREF
  __int64 v88; // [rsp+108h] [rbp-70h]
  __int64 v89; // [rsp+110h] [rbp-68h] BYREF
  __int64 v90; // [rsp+118h] [rbp-60h]
  __int64 v91; // [rsp+120h] [rbp-58h] BYREF
  __int64 v92; // [rsp+128h] [rbp-50h]
  __int64 v93; // [rsp+130h] [rbp-48h]

  v64 = a1 + 1504;
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
  v68 = 0;
  if ( !v4 || (v5 = *(_DWORD *)(v4 - 4), v65 = 0, v5 <= 0) )
  {
    v51 = 8;
    goto LABEL_64;
  }
  v51 = 8;
  v6 = 0;
  v49 = (unsigned int)v5;
  while ( 1 )
  {
    v50 = v6;
    v7 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(v4 + 8 * v6)) + 24);
    if ( v7 && *v7 == 5 && v7[1] == 1
      || !(unsigned __int8)sub_8EB4E0(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6)) )
    {
      goto LABEL_39;
    }
    v8 = sub_9AA900(a1, v6);
    v9 = v8;
    BYTE4(v85) &= 0xFCu;
    BYTE4(v87) &= 0xFCu;
    LODWORD(v85) = 0;
    v10 = qword_1C7F2C0;
    v86 = 0;
    LODWORD(v87) = 1;
    v88 = 0;
    if ( (v8[9] & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &v85, v8 + 8);
      if ( (v9[13] & 1) != 0 )
      {
LABEL_54:
        sub_182C690(v10, &v87, v9 + 12);
        goto LABEL_11;
      }
    }
    else
    {
      LODWORD(v85) = v8[8];
      if ( (v8[13] & 1) != 0 )
        goto LABEL_54;
    }
    v11 = v9[12];
    BYTE4(v87) &= ~1u;
    LODWORD(v87) = v11;
LABEL_11:
    v80 &= 0xFCu;
    v12 = qword_1C7F2C0;
    v83 &= 0xFCu;
    v79 = 0;
    v81 = 0;
    v82 = 1;
    v84 = 0;
    if ( (*(_BYTE *)(a1 + 1508) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v79, v64);
    else
      v79 = *(_DWORD *)(a1 + 1504);
    if ( (*(_BYTE *)(a1 + 1524) & 1) != 0 )
    {
      sub_182C690(v12, &v82, a1 + 1520);
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 1520);
      v83 &= ~1u;
      v82 = v13;
    }
    sub_3EBE30((__int64)&v89, (__int64)&v79, (__int64)&v85);
    v74 &= 0xFCu;
    v14 = qword_1C7F2C0;
    v77 &= 0xFCu;
    v73 = 0;
    v75 = 0;
    v76 = 1;
    v78 = 0;
    if ( (v9[1] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v73, v9);
    else
      v73 = *v9;
    if ( (v9[5] & 1) != 0 )
    {
      sub_182C690(v14, &v76, v9 + 4);
    }
    else
    {
      v15 = v9[4];
      v77 &= ~1u;
      v76 = v15;
    }
    sub_27B340((__int64)&v69, (__int64)&v73, (int *)&v89);
    v52 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v73);
    sub_182CBA0(v52, &v76);
    v53 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v89);
    sub_182CBA0(v53, &v91);
    v54 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v79);
    sub_182CBA0(v54, &v82);
    v16 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v85);
    sub_182CBA0(v16, &v87);
    v17 = qword_1C7F2C0;
    v89 = 0;
    v90 = 0;
    v91 = 1;
    v92 = 0;
    v93 = 0;
    if ( (v70 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v89, &v69);
    else
      LODWORD(v89) = v69;
    if ( (v72 & 1) != 0 )
    {
      sub_182C690(v17, &v91, &v71);
    }
    else
    {
      BYTE4(v91) &= ~1u;
      LODWORD(v91) = v71;
    }
    v18 = sub_182DB30(&v89);
    v19 = v18 + 3 * sub_182DB30(&v91);
    v20 = 48LL * (v19 & (v51 - 1));
    v21 = &v3[v20];
    v22 = 48LL * v51;
    v23 = &v3[v22];
    i = &v3[v20];
    if ( v20 != v22 )
    {
      do
      {
        v25 = *((_DWORD *)i + 1);
        if ( v25 == 2 )
        {
          if ( *(_DWORD *)i == v19 )
          {
            v26 = qword_1C7F2C0;
            if ( (i[12] & 1) != 0 || (v89 & 0x100000000LL) != 0 )
            {
              v63 = v19;
              v61 = v23;
              v58 = v21;
              v34 = sub_182C7B0(qword_1C7F2C0, i + 8, &v89);
              v21 = v58;
              v23 = v61;
              v19 = v63;
              v27 = v34 == 0;
            }
            else
            {
              v27 = *((_DWORD *)i + 2) == (_DWORD)v89;
            }
            if ( v27 )
            {
              if ( (i[28] & 1) != 0 || (v91 & 0x100000000LL) != 0 )
              {
                v62 = v19;
                v60 = v23;
                v57 = v21;
                v37 = sub_182C7B0(v26, i + 24, &v91);
                v21 = v57;
                v23 = v60;
                v19 = v62;
                v28 = v37 == 0;
              }
              else
              {
                v28 = *((_DWORD *)i + 6) == (_DWORD)v91;
              }
              if ( v28 )
              {
LABEL_37:
                v55 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v89);
                sub_182CBA0(v55, &v91);
                v29 = sub_9AA900(a1, *((_DWORD *)i + 10));
                v30 = sub_9AA900(a1, v6);
                if ( sub_9B0850((__int64)v30, (__int64)v29) )
                  goto LABEL_38;
                sub_25A130((char *)&v69);
                v85 = 2;
                v86 = 0;
                v87 = 1;
                v88 = 0;
                sub_182CBA0(qword_1C7F2C0, &v87);
                LODWORD(v87) = 1;
                BYTE4(v87) &= ~1u;
                sub_27B620((__int64)&v89, v64, (__int64)&v85);
                v41 = v89;
                v42 = BYTE4(v89);
                LODWORD(v89) = *(_DWORD *)(a1 + 1504);
                v43 = *(_QWORD *)(a1 + 1512);
                *(_DWORD *)(a1 + 1504) = v41;
                v44 = v90;
                v90 = v43;
                LOBYTE(v43) = *(_BYTE *)(a1 + 1508);
                *(_QWORD *)(a1 + 1512) = v44;
                LOBYTE(v44) = v42;
                v42 &= ~2u;
                v45 = v43 & 0xFD;
                BYTE4(v89) = v43 & 1 | v42 & 0xFE | v43 & 2;
                LODWORD(v43) = *(_DWORD *)(a1 + 1520);
                *(_BYTE *)(a1 + 1508) = v42 & 1 | v45 & 0xFE | v44 & 2;
                LODWORD(v44) = v91;
                LODWORD(v91) = v43;
                v46 = *(_QWORD *)(a1 + 1528);
                v47 = BYTE4(v91);
                *(_DWORD *)(a1 + 1520) = v44;
                v48 = v92;
                v92 = v46;
                LOBYTE(v46) = *(_BYTE *)(a1 + 1524);
                *(_QWORD *)(a1 + 1528) = v48;
                LOBYTE(v48) = v47;
                v47 &= ~2u;
                BYTE4(v91) = v46 & 1 | v47 & 0xFE | v46 & 2;
                *(_BYTE *)(a1 + 1524) = v47 & 1 | v46 & 0xFC | v48 & 2;
                sub_25A130((char *)&v89);
                sub_25A130((char *)&v85);
                if ( v3 )
                  sub_98B4B0(v3, v51);
                goto LABEL_2;
              }
            }
          }
        }
        else if ( !v25 )
        {
          goto LABEL_43;
        }
        i += 48;
      }
      while ( v23 != i );
    }
    for ( i = v3; v21 != i; i += 48 )
    {
      v35 = *((_DWORD *)i + 1);
      if ( v35 == 2 )
      {
        if ( *(_DWORD *)i == v19 )
        {
          v59 = v19;
          v56 = v21;
          v36 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(i + 8), (__int64)&v89);
          v21 = v56;
          v19 = v59;
          if ( v36 )
            goto LABEL_37;
        }
      }
      else if ( !v35 )
      {
        break;
      }
    }
LABEL_43:
    v33 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v89);
    sub_182CBA0(v33, &v91);
    v66 = v3;
    v67 = v51;
    sub_9EEAC0((__int64)&v66, (__int64)&v69, &v65);
    v3 = v66;
    v51 = v67;
LABEL_38:
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v69);
    sub_182CBA0(v31, &v71);
LABEL_39:
    ++v6;
    result = (unsigned int)(v50 + 1);
    v65 = v50 + 1;
    if ( v49 == v6 )
      break;
    v4 = *(_QWORD *)(a1 + 32);
  }
  if ( !v3 )
    return result;
  if ( v51 )
  {
LABEL_64:
    v38 = v3;
    do
    {
      v39 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v38 + 8);
      v40 = v38 + 24;
      v38 += 48;
      sub_182CBA0(v39, v40);
    }
    while ( v38 != &v3[48 * v51] );
  }
  return sub_186B220(v3);
}

