__int64 __fastcall sub_9F5AB0(__int64 a1)
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
  bool v26; // al
  int *v27; // r14
  int *v28; // rax
  void *v29; // r13
  __int64 result; // rax
  void *v31; // r14
  int v32; // eax
  bool v33; // al
  char *v34; // rbx
  void *v35; // rbp
  char *v36; // rsi
  int v37; // edx
  char v38; // cl
  __int64 v39; // rax
  __int64 v40; // rdx
  char v41; // si
  __int64 v42; // rax
  char v43; // cl
  __int64 v44; // rdx
  __int64 v45; // [rsp+0h] [rbp-168h]
  int v46; // [rsp+10h] [rbp-158h]
  unsigned int v47; // [rsp+14h] [rbp-154h]
  void *v48; // [rsp+20h] [rbp-148h]
  void *v49; // [rsp+20h] [rbp-148h]
  void *v50; // [rsp+20h] [rbp-148h]
  char *v51; // [rsp+20h] [rbp-148h]
  void *v52; // [rsp+20h] [rbp-148h]
  char *v53; // [rsp+20h] [rbp-148h]
  char *v54; // [rsp+28h] [rbp-140h]
  int v55; // [rsp+28h] [rbp-140h]
  int v56; // [rsp+34h] [rbp-134h]
  __int64 v57; // [rsp+48h] [rbp-120h]
  int v58; // [rsp+5Ch] [rbp-10Ch] BYREF
  char *v59; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v60; // [rsp+68h] [rbp-100h]
  __int64 v61; // [rsp+6Ch] [rbp-FCh]
  int v62; // [rsp+80h] [rbp-E8h] BYREF
  char v63; // [rsp+84h] [rbp-E4h]
  int v64; // [rsp+90h] [rbp-D8h] BYREF
  char v65; // [rsp+94h] [rbp-D4h]
  int v66; // [rsp+A0h] [rbp-C8h] BYREF
  char v67; // [rsp+A4h] [rbp-C4h]
  __int64 v68; // [rsp+A8h] [rbp-C0h]
  int v69; // [rsp+B0h] [rbp-B8h] BYREF
  char v70; // [rsp+B4h] [rbp-B4h]
  __int64 v71; // [rsp+B8h] [rbp-B0h]
  int v72; // [rsp+C0h] [rbp-A8h] BYREF
  char v73; // [rsp+C4h] [rbp-A4h]
  __int64 v74; // [rsp+C8h] [rbp-A0h]
  int v75; // [rsp+D0h] [rbp-98h] BYREF
  char v76; // [rsp+D4h] [rbp-94h]
  __int64 v77; // [rsp+D8h] [rbp-90h]
  __int64 v78; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-80h]
  __int64 v80; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v81; // [rsp+F8h] [rbp-70h]
  __int64 v82; // [rsp+100h] [rbp-68h] BYREF
  __int64 v83; // [rsp+108h] [rbp-60h]
  __int64 v84; // [rsp+110h] [rbp-58h] BYREF
  __int64 v85; // [rsp+118h] [rbp-50h]
  __int64 v86; // [rsp+120h] [rbp-48h]

  v57 = a1 + 1600;
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
  v61 = 0;
  if ( !v4 || (v5 = *(_DWORD *)(v4 - 4), v58 = 0, v5 <= 0) )
  {
    v47 = 8;
    goto LABEL_48;
  }
  v47 = 8;
  v6 = 0;
  v45 = (unsigned int)v5;
  while ( 1 )
  {
    v46 = v6;
    v7 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(v4 + 8 * v6)) + 24);
    if ( v7 && *v7 == 5 && v7[1] == 1 )
      goto LABEL_33;
    if ( !(unsigned __int8)sub_8EB4E0(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6)) )
      goto LABEL_33;
    v8 = sub_9AD4F0(a1, v6);
    v9 = v8;
    if ( *v8 )
      goto LABEL_33;
    BYTE4(v78) &= 0xFCu;
    BYTE4(v80) &= 0xFCu;
    LODWORD(v78) = 0;
    v10 = qword_1C7F2C0;
    v79 = 0;
    LODWORD(v80) = 1;
    v81 = 0;
    if ( (v8[17] & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &v78, v8 + 16);
      if ( (v9[21] & 1) != 0 )
      {
LABEL_54:
        sub_182C690(v10, &v80, v9 + 20);
        goto LABEL_12;
      }
    }
    else
    {
      LODWORD(v78) = v8[16];
      if ( (v8[21] & 1) != 0 )
        goto LABEL_54;
    }
    v11 = v9[20];
    BYTE4(v80) &= ~1u;
    LODWORD(v80) = v11;
LABEL_12:
    v73 &= 0xFCu;
    v12 = qword_1C7F2C0;
    v76 &= 0xFCu;
    v72 = 0;
    v74 = 0;
    v75 = 1;
    v77 = 0;
    if ( (*(_BYTE *)(a1 + 1604) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v72, v57);
    else
      v72 = *(_DWORD *)(a1 + 1600);
    if ( (*(_BYTE *)(a1 + 1620) & 1) != 0 )
    {
      sub_182C690(v12, &v75, a1 + 1616);
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 1616);
      v76 &= ~1u;
      v75 = v13;
    }
    sub_3EBE30((__int64)&v82, (__int64)&v72, (__int64)&v78);
    v67 &= 0xFCu;
    v14 = qword_1C7F2C0;
    v70 &= 0xFCu;
    v66 = 0;
    v68 = 0;
    v69 = 1;
    v71 = 0;
    if ( (v9[9] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v66, v9 + 8);
    else
      v66 = v9[8];
    if ( (v9[13] & 1) != 0 )
    {
      sub_182C690(v14, &v69, v9 + 12);
    }
    else
    {
      v15 = v9[12];
      v70 &= ~1u;
      v69 = v15;
    }
    sub_27B340((__int64)&v62, (__int64)&v66, (int *)&v82);
    v48 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v66);
    sub_182CBA0(v48, &v69);
    v49 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v82);
    sub_182CBA0(v49, &v84);
    v50 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v72);
    sub_182CBA0(v50, &v75);
    v16 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v78);
    sub_182CBA0(v16, &v80);
    v17 = qword_1C7F2C0;
    v82 = 0;
    v83 = 0;
    v84 = 1;
    v85 = 0;
    v86 = 0;
    if ( (v63 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v82, &v62);
    else
      LODWORD(v82) = v62;
    if ( (v65 & 1) != 0 )
    {
      sub_182C690(v17, &v84, &v64);
    }
    else
    {
      BYTE4(v84) &= ~1u;
      LODWORD(v84) = v64;
    }
    v18 = sub_182DB30(&v82);
    v19 = v18 + 3 * sub_182DB30(&v84);
    v20 = 48LL * (v19 & (v47 - 1));
    v21 = &v3[v20];
    v22 = 48LL * v47;
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
            v56 = v19;
            v54 = v23;
            v51 = v21;
            v26 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(i + 8), (__int64)&v82);
            v21 = v51;
            v23 = v54;
            v19 = v56;
            if ( v26 )
            {
LABEL_31:
              v52 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v82);
              sub_182CBA0(v52, &v84);
              v27 = sub_9AD4F0(a1, *((_DWORD *)i + 10));
              v28 = sub_9AD4F0(a1, v6);
              if ( sub_9F4890((__int64)v28, (__int64)v27) )
                goto LABEL_32;
              sub_25A130((char *)&v62);
              v78 = 2;
              v79 = 0;
              v80 = 1;
              v81 = 0;
              sub_182CBA0(qword_1C7F2C0, &v80);
              LODWORD(v80) = 1;
              BYTE4(v80) &= ~1u;
              sub_27B620((__int64)&v82, v57, (__int64)&v78);
              v37 = v82;
              v38 = BYTE4(v82);
              LODWORD(v82) = *(_DWORD *)(a1 + 1600);
              v39 = *(_QWORD *)(a1 + 1608);
              *(_DWORD *)(a1 + 1600) = v37;
              v40 = v83;
              v83 = v39;
              LOBYTE(v39) = *(_BYTE *)(a1 + 1604);
              *(_QWORD *)(a1 + 1608) = v40;
              LOBYTE(v40) = v38;
              v38 &= ~2u;
              v41 = v39 & 0xFD;
              BYTE4(v82) = v39 & 1 | v38 & 0xFE | v39 & 2;
              LODWORD(v39) = *(_DWORD *)(a1 + 1616);
              *(_BYTE *)(a1 + 1604) = v38 & 1 | v41 & 0xFE | v40 & 2;
              LODWORD(v40) = v84;
              LODWORD(v84) = v39;
              v42 = *(_QWORD *)(a1 + 1624);
              v43 = BYTE4(v84);
              *(_DWORD *)(a1 + 1616) = v40;
              v44 = v85;
              v85 = v42;
              LOBYTE(v42) = *(_BYTE *)(a1 + 1620);
              *(_QWORD *)(a1 + 1624) = v44;
              LOBYTE(v44) = v43;
              v43 &= ~2u;
              BYTE4(v84) = v42 & 1 | v43 & 0xFE | v42 & 2;
              *(_BYTE *)(a1 + 1620) = v43 & 1 | v42 & 0xFC | v44 & 2;
              sub_25A130((char *)&v82);
              sub_25A130((char *)&v78);
              if ( v3 )
                sub_98B4B0(v3, v47);
              goto LABEL_2;
            }
          }
        }
        else if ( !v25 )
        {
          goto LABEL_37;
        }
        i += 48;
      }
      while ( v23 != i );
    }
    for ( i = v3; v21 != i; i += 48 )
    {
      v32 = *((_DWORD *)i + 1);
      if ( v32 == 2 )
      {
        if ( *(_DWORD *)i == v19 )
        {
          v55 = v19;
          v53 = v21;
          v33 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(i + 8), (__int64)&v82);
          v21 = v53;
          v19 = v55;
          if ( v33 )
            goto LABEL_31;
        }
      }
      else if ( !v32 )
      {
        break;
      }
    }
LABEL_37:
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v82);
    sub_182CBA0(v31, &v84);
    v59 = v3;
    v60 = v47;
    sub_9EEAC0((__int64)&v59, (__int64)&v62, &v58);
    v3 = v59;
    v47 = v60;
LABEL_32:
    v29 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v62);
    sub_182CBA0(v29, &v64);
LABEL_33:
    ++v6;
    result = (unsigned int)(v46 + 1);
    v58 = v46 + 1;
    if ( v45 == v6 )
      break;
    v4 = *(_QWORD *)(a1 + 32);
  }
  if ( !v3 )
    return result;
  if ( v47 )
  {
LABEL_48:
    v34 = v3;
    do
    {
      v35 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v34 + 8);
      v36 = v34 + 24;
      v34 += 48;
      sub_182CBA0(v35, v36);
    }
    while ( v34 != &v3[48 * v47] );
  }
  return sub_186B220(v3);
}

