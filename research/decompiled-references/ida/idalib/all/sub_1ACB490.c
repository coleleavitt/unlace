unsigned __int64 __fastcall sub_1ACB490(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 *v4; // rbp
  int *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // rbx
  __int64 v10; // r11
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 *v15; // r13
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned int *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r10
  __int64 v25; // r14
  __int64 v26; // rdi
  char *v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rax
  signed __int64 v30; // rdx
  char *v31; // r12
  char v32; // al
  __int64 v33; // rbx
  __int64 *v35; // rdx
  __int64 *v36; // rcx
  __int64 v37; // rbx
  __int64 *v38; // rax
  char v39; // al
  __int64 *v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rax
  char v43; // r12
  __int64 v44; // rbx
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r14
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rbx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // [rsp+8h] [rbp-140h]
  __int64 v78; // [rsp+10h] [rbp-138h]
  signed __int64 v79; // [rsp+10h] [rbp-138h]
  signed __int64 v80; // [rsp+10h] [rbp-138h]
  __int64 v82; // [rsp+18h] [rbp-130h]
  __int64 v83; // [rsp+28h] [rbp-120h]
  __int64 *v85; // [rsp+38h] [rbp-110h]
  __int64 v86; // [rsp+40h] [rbp-108h]
  __int64 v87; // [rsp+48h] [rbp-100h]
  char v88; // [rsp+5Fh] [rbp-E9h] BYREF
  __int64 v89; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v90; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v91; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v92; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v93[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v94; // [rsp+90h] [rbp-B8h]
  char v95; // [rsp+F8h] [rbp-50h]
  unsigned int v96; // [rsp+100h] [rbp-48h]
  char v97; // [rsp+104h] [rbp-44h]

  v2 = a1;
  v3 = a2;
  v4 = v93;
  v5 = (int *)&v92;
  v6 = *(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24);
  v93[0] = *(_QWORD *)(a1 + 16);
  v92 = v6;
  sub_1AC17A0(&v89, &v92, v93);
  v92 = *(_QWORD *)(v2 + 16) + 8LL * *(_QWORD *)(v2 + 24);
  v93[0] = v89;
  sub_1AC1010(&v90, &v92, v93);
  v8 = v89;
  if ( v90 == v89 )
  {
    v9 = *(_QWORD *)(a1 + 16);
    if ( v89 == v9 )
    {
LABEL_29:
      if ( *(_BYTE *)v3 != 11 )
        goto LABEL_35;
      v35 = *(__int64 **)(v2 + 16);
      v36 = &v35[*(_QWORD *)(v2 + 24)];
      if ( v36 == v35 )
        goto LABEL_35;
      v37 = *v35;
      if ( *(_BYTE *)(*v35 + 8) == 49 )
        goto LABEL_40;
      v38 = v35 + 1;
      do
      {
        v35 = v38;
        if ( v36 == v38 )
          goto LABEL_35;
        v37 = *v38++;
      }
      while ( *(_BYTE *)(v37 + 8) != 49 );
      while ( 1 )
      {
LABEL_40:
        if ( *(_QWORD *)(v37 + 32) )
        {
          sub_168B9F0((__int64)v4, *(__int64 **)v2, *(_DWORD *)(v3 + 4), 0xB6Bu, 0);
          LOBYTE(v90) = 38;
          v47 = sub_1AA5620((__int64)v4, (char *)&v90);
          LOBYTE(v91) = 49;
          v48 = sub_1AA5620(v47, (char *)&v91);
          LODWORD(v92) = 0;
          sub_1587D10(v48, v5);
          sub_15F7200(v4);
          sub_168B9F0((__int64)v4, *(__int64 **)v2, *(_DWORD *)(v37 + 12), 0x1675u, 0);
          v32 = *(_BYTE *)(v37 + 8);
          goto LABEL_26;
        }
        if ( v36 == v35 + 1 )
          goto LABEL_35;
        v37 = v35[1];
        if ( *(_BYTE *)(v37 + 8) != 49 )
          break;
        ++v35;
      }
      v41 = v35 + 2;
      while ( 1 )
      {
        v35 = v41;
        if ( v36 == v41 )
          break;
        v37 = *v41++;
        if ( *(_BYTE *)(v37 + 8) == 49 )
          goto LABEL_40;
      }
LABEL_35:
      v39 = *(_BYTE *)(v3 + 144);
      if ( *(_BYTE *)(v3 + 1) != 29 )
      {
        if ( v39 == 3 )
        {
          v40 = *(__int64 **)(v3 + 16);
          return sub_EB2F10(
                   *(_QWORD **)(v2 + 8),
                   *(_DWORD *)(v3 + 4),
                   *(_DWORD *)(v3 + 12),
                   *v40,
                   *(unsigned int *)(v3 + 8),
                   v7);
        }
LABEL_77:
        abort();
      }
      if ( v39 == -1 )
        goto LABEL_77;
      if ( v39 )
      {
        if ( v39 != 9 )
          goto LABEL_77;
        v40 = *(__int64 **)(v3 + 80);
      }
      else
      {
        v40 = nullptr;
      }
      return sub_EB2F10(
               *(_QWORD **)(v2 + 8),
               *(_DWORD *)(v3 + 4),
               *(_DWORD *)(v3 + 12),
               *v40,
               *(unsigned int *)(v3 + 8),
               v7);
    }
    else
    {
      v77 = *(_QWORD *)(v89 - 8);
      v83 = v77 + 32;
      while ( 1 )
      {
        v92 = v9;
        v91 = v8 - 8;
        sub_1AC17A0(v4, &v91, (__int64 *)v5);
        v11 = v93[0];
        if ( v93[0] == v9 )
        {
          v2 = a1;
          v3 = a2;
          goto LABEL_29;
        }
        v92 = v10;
        sub_1AC1010(&v91, (__int64 *)v5, v4);
        if ( v11 != v91 )
        {
          v12 = *(_QWORD *)(v11 - 8);
          v13 = v77 + 32;
          v86 = v83 + 16LL * *(unsigned int *)(v77 + 24);
          if ( v83 != v86 )
            break;
        }
LABEL_49:
        v8 = v11;
        v9 = *(_QWORD *)(a1 + 16);
      }
      v87 = v11;
      v14 = v12 + 32;
      v85 = (__int64 *)v5;
      v15 = v4;
      while ( 1 )
      {
        v16 = v14 + 16LL * *(unsigned int *)(v12 + 24);
        if ( v16 != v14 )
          break;
LABEL_47:
        v13 += 16;
        if ( v86 == v13 )
        {
          v4 = v15;
          v11 = v87;
          v5 = (int *)v85;
          goto LABEL_49;
        }
      }
      v17 = *(_QWORD *)(v13 + 8);
      v18 = *(_QWORD *)(v12 + 40);
      if ( v17 != v18 )
      {
        v19 = v12 + 48;
        do
        {
          if ( v17 )
          {
            if ( v18 )
            {
              v20 = *(unsigned int **)(v17 + 16);
              v21 = *v20;
              v22 = *(_QWORD *)(v18 + 16) + 16LL;
              v93[0] = (__int64)(v20 + 4);
              v93[1] = v21;
              if ( v21 == *(_DWORD *)(v22 - 16) && !(unsigned int)sub_22462B0(v15, v22, v21) )
                break;
            }
          }
          if ( v16 == v19 )
            goto LABEL_47;
          v19 += 16;
          v17 = *(_QWORD *)(v13 + 8);
          v18 = *(_QWORD *)(v19 - 8);
        }
        while ( v17 != v18 );
      }
      v23 = v13;
      v25 = v12;
      v4 = v15;
      v78 = v23;
      v26 = (__int64)v15;
      v5 = (int *)v85;
      sub_168B9F0(v26, *(__int64 **)a1, *(_DWORD *)(a2 + 4), 0xB3Du, 0);
      v27 = &v88;
      v88 = *(_BYTE *)(a2 + 1);
      v28 = sub_1AA5620((__int64)v4, &v88);
      v29 = *(_QWORD *)(v78 + 8);
      if ( v29 )
      {
        v27 = *(char **)(v29 + 16);
        v30 = *(unsigned int *)v27;
        v31 = v27 + 16;
      }
      else
      {
        v30 = 1;
        v31 = (char *)"*";
      }
      if ( *(_BYTE *)(v28 + 120) )
      {
        sub_AEC220((unsigned __int8 **)(v28 + 32), v31, v30);
      }
      else if ( *(_BYTE *)(v28 + 132) )
      {
        v79 = v30;
        v56 = sub_168B9E0((_QWORD *)v28);
        v59 = v79;
        v60 = v56;
        v61 = *(_QWORD *)(v28 + 16);
        if ( v61 )
        {
          v82 = v60;
          v61 = (*(__int64 (__fastcall **)(__int64, char *, signed __int64))(*(_QWORD *)v61 + 32LL))(v61, v27, v79);
          v60 = v82;
          v59 = v79;
        }
        v80 = v59;
        v92 = v61;
        v62 = sub_1587BC0(v60, v85, v59, v57, v60, v58);
        sub_AEC220((unsigned __int8 **)(*v62 + 32LL * *(unsigned int *)(v28 + 128) + 8), v31, v80);
      }
      sub_15F7200(v4);
      sub_168B9F0((__int64)v4, *(__int64 **)a1, *(_DWORD *)(v77 + 12), 0x1665u, 0);
      if ( v95 )
      {
        sub_AE9DF0((unsigned __int8 **)v4 + 4, 0, 2u);
      }
      else if ( v97 )
      {
        v72 = sub_168B9E0(v4);
        v75 = v94;
        if ( v94 )
          v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v94 + 32LL))(v94);
        v92 = v75;
        v76 = sub_1587BC0(v72, v85, v70, v71, v73, v74);
        sub_AE9DF0((unsigned __int8 **)(*v76 + 32LL * v96 + 8), 0, 2u);
      }
      LOBYTE(v92) = *(_BYTE *)(v77 + 8);
      sub_1AA5620((__int64)v4, (char *)v85);
      sub_15F7200(v4);
      sub_168B9F0((__int64)v4, *(__int64 **)a1, *(_DWORD *)(*(_QWORD *)(v91 - 8) + 12LL), 0x1675u, 0);
      LOBYTE(v92) = *(_BYTE *)(*(_QWORD *)(v91 - 8) + 8LL);
      sub_1AA5620((__int64)v4, (char *)v85);
      sub_15F7200(v4);
      sub_168B9F0((__int64)v4, *(__int64 **)a1, *(_DWORD *)(v25 + 12), 0x1665u, 0);
      if ( v95 )
      {
        sub_AE9DF0((unsigned __int8 **)v4 + 4, 1, 2u);
      }
      else if ( v97 )
      {
        v65 = sub_168B9E0(v4);
        v68 = v94;
        if ( v94 )
          v68 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v94 + 32LL))(v94);
        v92 = v68;
        v69 = sub_1587BC0(v65, v85, v63, v64, v66, v67);
        sub_AE9DF0((unsigned __int8 **)(*v69 + 32LL * v96 + 8), 1, 2u);
      }
      v32 = *(_BYTE *)(v25 + 8);
LABEL_26:
      LOBYTE(v92) = v32;
      v33 = 0;
      sub_1AA5620((__int64)v4, (char *)v5);
      sub_15F7200(v4);
    }
  }
  else
  {
    sub_168B9F0((__int64)v93, *(__int64 **)a1, *(_DWORD *)(a2 + 4), 0xB43u, 0);
    LOBYTE(v91) = *(_BYTE *)(a2 + 1);
    v42 = sub_1AA5620((__int64)v93, (char *)&v91);
    v43 = *(_BYTE *)a2;
    v44 = v42;
    if ( *(_BYTE *)(v42 + 120) )
    {
      sub_1AA2FB0((unsigned __int8 **)(v42 + 32), v43);
    }
    else if ( *(_BYTE *)(v42 + 132) )
    {
      v53 = sub_168B9E0((_QWORD *)v42);
      v54 = *(_QWORD *)(v44 + 16);
      if ( v54 )
        v54 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v54 + 32LL))(*(_QWORD *)(v44 + 16));
      v92 = v54;
      v55 = sub_1587BC0(v53, &v92, v49, v50, v51, v52);
      sub_1AA2FB0((unsigned __int8 **)(*v55 + 32LL * *(unsigned int *)(v44 + 128) + 8), v43);
    }
    v45 = v44;
    LOBYTE(v92) = *(_QWORD *)(v2 + 16) != v89;
    v33 = 0;
    sub_1588420(v45, (unsigned __int8 *)&v92);
    sub_15F7200(v93);
    sub_168B9F0((__int64)v93, *(__int64 **)v2, *(_DWORD *)(*(_QWORD *)(v90 - 8) + 12LL), 0x1675u, 0);
    LOBYTE(v92) = *(_BYTE *)(*(_QWORD *)(v90 - 8) + 8LL);
    sub_1AA5620((__int64)v93, (char *)&v92);
    sub_15F7200(v93);
    if ( *(_QWORD *)(v2 + 16) != v89 )
    {
      sub_168B9F0((__int64)v93, *(__int64 **)v2, *(_DWORD *)(*(_QWORD *)(v89 - 8) + 12LL), 0x1665u, 0);
      LODWORD(v92) = 0;
      v46 = sub_1AC3610((__int64)v93, (int *)&v92);
      LOBYTE(v91) = *(_BYTE *)(*(_QWORD *)(v89 - 8) + 8LL);
      sub_1AA5620(v46, (char *)&v91);
      sub_15F7200(v93);
    }
  }
  return v33;
}
