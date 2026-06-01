unsigned __int64 __fastcall sub_1AC8830(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 *v4; // rbp
  __int64 *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // r11
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 *v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  unsigned int *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rax
  unsigned int *v26; // rsi
  signed __int64 v27; // rdx
  char *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v33; // rdx
  char v34; // r8
  unsigned __int64 v35; // r14
  char v36; // al
  unsigned __int64 v37; // rax
  char v38; // r9
  __int64 *v39; // rdx
  __int64 *v40; // rsi
  __int64 v41; // rbx
  __int64 *v42; // rax
  unsigned int v43; // ebx
  const void *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // r14
  char v51; // al
  __int64 v52; // rdi
  __int64 v53; // rcx
  _BYTE *v54; // rax
  _BYTE *v55; // rcx
  __int64 *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  _QWORD *v61; // rbx
  __int64 v62; // r11
  _QWORD *v63; // r14
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  char *v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rax
  char v72; // al
  __int64 v73; // rax
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  size_t v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // [rsp+0h] [rbp-148h]
  __int64 v97; // [rsp+0h] [rbp-148h]
  __int64 v98; // [rsp+0h] [rbp-148h]
  __int64 v99; // [rsp+8h] [rbp-140h]
  signed __int64 v100; // [rsp+8h] [rbp-140h]
  signed __int64 v101; // [rsp+8h] [rbp-140h]
  char *v102; // [rsp+10h] [rbp-138h]
  _BYTE *v103; // [rsp+10h] [rbp-138h]
  __int64 v104; // [rsp+18h] [rbp-130h]
  __int64 v105; // [rsp+28h] [rbp-120h]
  __int64 *v107; // [rsp+38h] [rbp-110h]
  __int64 v108; // [rsp+40h] [rbp-108h]
  __int64 v109; // [rsp+48h] [rbp-100h]
  unsigned __int8 v110; // [rsp+5Fh] [rbp-E9h] BYREF
  __int64 v111; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v112; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v113; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD *v114; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v115[25]; // [rsp+80h] [rbp-C8h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = v115;
  v5 = (__int64 *)&v114;
  v6 = *(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24);
  v115[0] = *(_QWORD *)(a1 + 16);
  v114 = (_QWORD *)v6;
  sub_1AC17A0(&v111, (__int64 *)&v114, v115);
  v114 = (_QWORD *)(*(_QWORD *)(v3 + 16) + 8LL * *(_QWORD *)(v3 + 24));
  v115[0] = v111;
  sub_1AC0D90(&v112, (__int64 *)&v114, v115);
  v7 = v111;
  if ( v112 != v111 )
  {
    sub_168B9F0((__int64)v115, *(__int64 **)a1, *(_DWORD *)(a2 + 4), 0xB43u, 0);
    LOBYTE(v114) = *(_BYTE *)(a2 + 1);
    v57 = sub_1AA5620((__int64)v115, (char *)&v114);
    LOBYTE(v113) = *(_BYTE *)a2;
    v58 = sub_1AC3570(v57, (char *)&v113);
    v110 = *(_QWORD *)(a1 + 16) != v111;
    v31 = 0;
    sub_1588420(v58, &v110);
    sub_15F7200(v115);
    sub_168B9F0((__int64)v115, *(__int64 **)a1, *(_DWORD *)(*(_QWORD *)(v112 - 8) + 12LL), 0x1675u, 0);
    LOBYTE(v114) = *(_BYTE *)(*(_QWORD *)(v112 - 8) + 8LL);
    sub_1AA5620((__int64)v115, (char *)&v114);
    sub_15F7200(v115);
    if ( *(_QWORD *)(a1 + 16) != v111 )
    {
      sub_168B9F0((__int64)v115, *(__int64 **)a1, *(_DWORD *)(*(_QWORD *)(v111 - 8) + 12LL), 0x1665u, 0);
      LODWORD(v114) = 0;
      v59 = sub_1AC3610((__int64)v115, (int *)&v114);
      LOBYTE(v113) = *(_BYTE *)(*(_QWORD *)(v111 - 8) + 8LL);
      sub_1AA5620(v59, (char *)&v113);
      sub_15F7200(v115);
    }
    return v31;
  }
  v8 = *(_QWORD *)(a1 + 16);
  if ( v111 != v8 )
  {
    v96 = *(_QWORD *)(v111 - 8);
    v105 = v96 + 32;
    while ( 1 )
    {
      v114 = (_QWORD *)v8;
      v113 = v7 - 8;
      sub_1AC17A0(v4, &v113, v5);
      v10 = v115[0];
      if ( v115[0] == v8 )
        break;
      v114 = (_QWORD *)v9;
      sub_1AC0D90(&v113, v5, v4);
      if ( v10 != v113 )
      {
        v11 = *(_QWORD *)(v10 - 8);
        v12 = v96 + 32;
        v108 = v105 + 16LL * *(unsigned int *)(v96 + 24);
        if ( v105 != v108 )
        {
          v109 = v10;
          v13 = v11 + 32;
          v107 = v5;
          v14 = v4;
          while ( 1 )
          {
            v15 = v13 + 16LL * *(unsigned int *)(v11 + 24);
            if ( v15 != v13 )
              break;
LABEL_65:
            v12 += 16;
            if ( v108 == v12 )
            {
              v4 = v14;
              v10 = v109;
              v5 = v107;
              goto LABEL_67;
            }
          }
          v16 = *(_QWORD *)(v12 + 8);
          v17 = *(_QWORD *)(v11 + 40);
          if ( v16 != v17 )
          {
            v18 = v11 + 48;
            do
            {
              if ( v16 )
              {
                if ( v17 )
                {
                  v19 = *(unsigned int **)(v16 + 16);
                  v20 = *v19;
                  v21 = *(_QWORD *)(v17 + 16) + 16LL;
                  v115[0] = (__int64)(v19 + 4);
                  v115[1] = v20;
                  if ( v20 == *(_DWORD *)(v21 - 16) && !(unsigned int)sub_22462B0(v14, v21, v20) )
                    break;
                }
              }
              if ( v15 == v18 )
                goto LABEL_65;
              v18 += 16;
              v16 = *(_QWORD *)(v12 + 8);
              v17 = *(_QWORD *)(v18 - 8);
            }
            while ( v16 != v17 );
          }
          v22 = v12;
          v23 = v11;
          v99 = v22;
          sub_168B9F0((__int64)v14, *(__int64 **)a1, *(_DWORD *)(a2 + 4), 0xB3Du, 0);
          v110 = *(_BYTE *)(a2 + 1);
          v24 = sub_1AA5620((__int64)v14, (char *)&v110);
          v25 = *(_QWORD *)(v99 + 8);
          if ( v25 )
          {
            v26 = *(unsigned int **)(v25 + 16);
            v27 = *v26;
            v28 = (char *)(v26 + 4);
          }
          else
          {
            v80 = j__strlen("*");
            v28 = (char *)"*";
            v27 = v80;
          }
          if ( *(_BYTE *)(v24 + 120) )
          {
            sub_AEC220((unsigned __int8 **)(v24 + 32), v28, v27);
          }
          else if ( *(_BYTE *)(v24 + 132) )
          {
            v102 = v28;
            v100 = v27;
            v73 = sub_168B9E0((_QWORD *)v24);
            v75 = v100;
            v76 = (__int64)v102;
            v77 = v73;
            v78 = *(_QWORD **)(v24 + 16);
            if ( v78 )
            {
              v104 = v77;
              v78 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, signed __int64, char *))(*v78 + 32LL))(
                                v78,
                                *v78,
                                v100,
                                v102);
              v77 = v104;
              v76 = (__int64)v102;
              v75 = v100;
            }
            v103 = (_BYTE *)v76;
            v101 = v75;
            v114 = v78;
            v79 = sub_1587BC0(v77, v107, v75, v76, v77, v74);
            sub_AEC220((unsigned __int8 **)(*v79 + 32LL * *(unsigned int *)(v24 + 128) + 8), v103, v101);
          }
          sub_15F7200(v14);
          sub_168B9F0((__int64)v14, *(__int64 **)a1, *(_DWORD *)(v96 + 12), 0x1665u, 0);
          LODWORD(v114) = 0;
          v29 = sub_1AC3610((__int64)v14, (int *)v107);
          v110 = *(_BYTE *)(v96 + 8);
          sub_1AA5620(v29, (char *)&v110);
          sub_15F7200(v14);
          sub_168B9F0((__int64)v14, *(__int64 **)a1, *(_DWORD *)(*(_QWORD *)(v113 - 8) + 12LL), 0x1675u, 0);
          LOBYTE(v114) = *(_BYTE *)(*(_QWORD *)(v113 - 8) + 8LL);
          sub_1AA5620((__int64)v14, (char *)v107);
          sub_15F7200(v14);
          sub_168B9F0((__int64)v14, *(__int64 **)a1, *(_DWORD *)(v23 + 12), 0x1665u, 0);
          LODWORD(v114) = 1;
          v30 = sub_1AC3610((__int64)v14, (int *)v107);
          v31 = 0;
          v110 = *(_BYTE *)(v23 + 8);
          sub_1AA5620(v30, (char *)&v110);
          sub_15F7200(v14);
          return v31;
        }
      }
LABEL_67:
      v7 = v10;
      v8 = *(_QWORD *)(a1 + 16);
    }
    v3 = a1;
    v2 = a2;
  }
  sub_1741CC0(v2);
  if ( !v33 )
  {
    sub_168B9F0((__int64)v4, *(__int64 **)v3, *(_DWORD *)(v2 + 4), 0xB6Cu, 0);
    LODWORD(v114) = 0;
    sub_1587D10((__int64)v4, (int *)v5);
    sub_15F7200(v4);
  }
  v34 = *(_BYTE *)v2;
  if ( !*(_BYTE *)v2 || (v35 = 1, v34 == 9) )
    v35 = 3;
  v36 = *(_BYTE *)(v2 + 144);
  if ( *(_BYTE *)(v2 + 1) == 29 )
  {
    if ( v36 == -1 )
      goto LABEL_100;
    if ( !v36 )
      goto LABEL_77;
    if ( v36 != 9 )
      goto LABEL_100;
    v37 = *(unsigned int *)(v2 + 88);
    if ( v37 <= v35 )
      goto LABEL_31;
LABEL_46:
    sub_168B9F0((__int64)v4, *(__int64 **)v3, *(_DWORD *)(v2 + 4), 0xB6Cu, 0);
    LODWORD(v113) = 1;
    v46 = sub_1587D10((__int64)v4, (int *)&v113);
    LOBYTE(v112) = *(_BYTE *)v2;
    v47 = sub_1AC3570(v46, (char *)&v112);
    v48 = v47;
    if ( *(_BYTE *)(v47 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v47 + 32), v35, 3u);
    }
    else if ( *(_BYTE *)(v47 + 132) )
    {
      v98 = sub_168B9E0((_QWORD *)v47);
      v94 = *(_QWORD *)(v48 + 16);
      if ( v94 )
        v94 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v94 + 32LL))(*(_QWORD *)(v48 + 16));
      v114 = (_QWORD *)v94;
      v95 = sub_1587BC0(v98, v5, v90, v91, v92, v93);
      sub_AE9DF0((unsigned __int8 **)(*v95 + 32LL * *(unsigned int *)(v48 + 128) + 8), v35, 3u);
    }
    sub_1741CC0(v2);
    v50 = v49;
    if ( *(_BYTE *)(v48 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v48 + 32), v49, 3u);
    }
    else if ( *(_BYTE *)(v48 + 132) )
    {
      v97 = sub_168B9E0((_QWORD *)v48);
      v88 = *(_QWORD *)(v48 + 16);
      if ( v88 )
        v88 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v88 + 32LL))(*(_QWORD *)(v48 + 16));
      v114 = (_QWORD *)v88;
      v89 = sub_1587BC0(v97, v5, v84, v85, v86, v87);
      sub_AE9DF0((unsigned __int8 **)(*v89 + 32LL * *(unsigned int *)(v48 + 128) + 8), v50, 3u);
    }
    sub_15F7200(v4);
    v51 = *(_BYTE *)(v2 + 144);
    if ( *(_BYTE *)(v2 + 1) != 29 )
    {
      if ( v51 == 3 )
      {
        v34 = *(_BYTE *)v2;
        v37 = *(unsigned int *)(v2 + 24);
        goto LABEL_31;
      }
LABEL_100:
      abort();
    }
    if ( v51 == -1 )
      goto LABEL_100;
    if ( v51 )
    {
      if ( v51 == 9 )
      {
        v34 = *(_BYTE *)v2;
        v37 = *(unsigned int *)(v2 + 88);
        goto LABEL_31;
      }
      goto LABEL_100;
    }
    v34 = *(_BYTE *)v2;
LABEL_77:
    v38 = v34;
    goto LABEL_33;
  }
  if ( v36 != 3 )
    goto LABEL_100;
  v37 = *(unsigned int *)(v2 + 24);
  if ( v37 > v35 )
    goto LABEL_46;
LABEL_31:
  v38 = v34;
  if ( v37 > 1 && (unsigned __int8)(v34 - 9) <= 2u )
  {
    v61 = sub_1AC1290(v3 + 16);
    v63 = sub_1AC0ED0(v62);
    v64 = *(_QWORD *)(v3 + 16) + 8LL * *(_QWORD *)(v3 + 24);
    if ( v63 != (_QWORD *)v64 && v61 != (_QWORD *)v64 )
    {
      sub_168B9F0((__int64)v4, *(__int64 **)v3, *(_DWORD *)(v2 + 4), 0xB53u, 0);
      LOBYTE(v111) = 41;
      v65 = sub_1AA5620((__int64)v4, (char *)&v111);
      LOBYTE(v112) = 29;
      v66 = sub_1AA5620(v65, (char *)&v112);
      LOBYTE(v113) = *(_BYTE *)v2;
      v67 = sub_1AC3570(v66, (char *)&v113);
      LODWORD(v114) = 1;
      sub_1587D10(v67, (int *)v5);
      sub_15F7200(v4);
      sub_168B9F0((__int64)v4, *(__int64 **)v3, *(_DWORD *)(*v63 + 12LL), 0x1675u, 0);
      v68 = (char *)v5;
      v69 = (__int64)v4;
      LOBYTE(v114) = *(_BYTE *)(*v63 + 8LL);
      goto LABEL_93;
    }
  }
LABEL_33:
  if ( !v34 || v34 == 9 )
  {
    sub_1741CC0(v2);
    if ( v60 > 1 )
    {
      v61 = sub_1AC0ED0(v3 + 16);
      if ( v61 != (_QWORD *)(*(_QWORD *)(v3 + 16) + 8LL * *(_QWORD *)(v3 + 24)) )
      {
        sub_168B9F0((__int64)v4, *(__int64 **)v3, *(_DWORD *)(v2 + 4), 0xB6Fu, 0);
        LODWORD(v114) = 1;
        v81 = sub_1587D10((__int64)v4, (int *)v5);
        LOBYTE(v111) = *(_BYTE *)(v2 + 1);
        v82 = sub_1AA5620(v81, (char *)&v111);
        LOBYTE(v112) = *(_BYTE *)v2;
        v83 = sub_1AC3570(v82, (char *)&v112);
        LOBYTE(v113) = 41;
        v68 = (char *)&v113;
        v69 = v83;
LABEL_93:
        sub_1AA5620(v69, v68);
        sub_15F7200(v4);
        sub_168B9F0((__int64)v4, *(__int64 **)v3, *(_DWORD *)(*v61 + 12LL), 0x1675u, 0);
        v72 = *(_BYTE *)(*v61 + 8LL);
LABEL_81:
        LOBYTE(v114) = v72;
        v31 = 0;
        sub_1AA5620((__int64)v4, (char *)v5);
        sub_15F7200(v4);
        return v31;
      }
    }
    v38 = *(_BYTE *)v2;
  }
  if ( v38 == 11 )
  {
    v39 = *(__int64 **)(v3 + 16);
    v40 = &v39[*(_QWORD *)(v3 + 24)];
    if ( v39 != v40 )
    {
      v41 = *v39;
      if ( *(_BYTE *)(*v39 + 8) == 29 )
        goto LABEL_54;
      v42 = v39 + 1;
      while ( 1 )
      {
        v39 = v42;
        if ( v40 == v42 )
          break;
        v41 = *v42++;
        if ( *(_BYTE *)(v41 + 8) == 29 )
        {
          while ( 1 )
          {
LABEL_54:
            v52 = *(_QWORD *)(v41 + 32);
            if ( (_DWORD)v52 )
            {
              v53 = 8LL * (unsigned int)v52;
              if ( !*(_BYTE *)(v41 + v53 + 40) )
              {
LABEL_80:
                sub_168B9F0((__int64)v4, *(__int64 **)v3, *(_DWORD *)(v2 + 4), 0xB6Bu, 0);
                LOBYTE(v112) = 37;
                v70 = sub_1AA5620((__int64)v4, (char *)&v112);
                LOBYTE(v113) = 29;
                v71 = sub_1AA5620(v70, (char *)&v113);
                LODWORD(v114) = 1;
                sub_1587D10(v71, (int *)v5);
                sub_15F7200(v4);
                sub_168B9F0((__int64)v4, *(__int64 **)v3, *(_DWORD *)(v41 + 12), 0x1675u, 0);
                v72 = *(_BYTE *)(v41 + 8);
                goto LABEL_81;
              }
              v54 = (_BYTE *)(v41 + v53 + 41);
              v55 = &v54[(unsigned int)(v52 - 1)];
              while ( v55 != v54 )
              {
                if ( !*v54++ )
                  goto LABEL_80;
              }
            }
            if ( v40 == v39 + 1 )
              goto LABEL_41;
            v41 = v39[1];
            if ( *(_BYTE *)(v41 + 8) != 29 )
              break;
            ++v39;
          }
          v56 = v39 + 2;
          while ( 1 )
          {
            v39 = v56;
            if ( v40 == v56 )
              goto LABEL_41;
            v41 = *v56++;
            if ( *(_BYTE *)(v41 + 8) == 29 )
              goto LABEL_54;
          }
        }
      }
    }
  }
LABEL_41:
  v43 = *(_DWORD *)(v2 + 8);
  v44 = (const void *)sub_1741CC0(v2);
  return sub_EB3670(*(_QWORD **)(v3 + 8), *(_DWORD *)(v2 + 4), *(_DWORD *)(v2 + 12), v44, v45, v43);
}
