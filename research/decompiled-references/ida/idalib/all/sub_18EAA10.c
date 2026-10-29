void __fastcall sub_18EAA10(__int64 *a1, _QWORD *a2, double a3)
{
  _QWORD *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  __int64 v12; // r13
  int v13; // r12d
  __int64 v14; // r15
  unsigned int v15; // esi
  unsigned int v16; // edx
  __int64 *v17; // rax
  int v18; // r11d
  int v19; // eax
  int v20; // eax
  bool v21; // zf
  unsigned __int64 *v22; // r15
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  int v25; // edx
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int8 v28; // r13
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // edx
  unsigned __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned __int64 v42; // rdi
  __int16 v43; // ax
  unsigned int v44; // eax
  __int64 v45; // rsi
  const char *v46; // rbx
  size_t v47; // r12
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // eax
  char *v52; // rcx
  signed __int64 v53; // r8
  __int64 v54; // rsi
  __int64 v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // rsi
  const char *v58; // rbx
  size_t v59; // r12
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  int v63; // eax
  __int64 v64; // rax
  unsigned __int64 *v65; // rdx
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  unsigned __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rbx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rbx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // [rsp+0h] [rbp-138h]
  __int64 v85; // [rsp+0h] [rbp-138h]
  __int64 v86; // [rsp+0h] [rbp-138h]
  __int64 v87; // [rsp+0h] [rbp-138h]
  unsigned __int64 v88; // [rsp+0h] [rbp-138h]
  unsigned __int64 v89; // [rsp+8h] [rbp-130h]
  __int64 v90; // [rsp+18h] [rbp-120h]
  __int64 v91; // [rsp+24h] [rbp-114h]
  __int64 v92[3]; // [rsp+30h] [rbp-108h] BYREF
  void *v93; // [rsp+48h] [rbp-F0h]
  __int64 v94; // [rsp+58h] [rbp-E0h] BYREF
  _QWORD v95[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v96; // [rsp+80h] [rbp-B8h]
  unsigned __int8 *v97[11]; // [rsp+90h] [rbp-A8h] BYREF
  char v98; // [rsp+E8h] [rbp-50h]
  unsigned int v99; // [rsp+F0h] [rbp-48h]
  char v100; // [rsp+F4h] [rbp-44h]

  v5 = (_QWORD *)a1[30];
  v6 = sub_6F3470((__int64)(v5 + 69), "NULL", 4u);
  if ( (*(_BYTE *)(v6 + 3) & 2) == 0 )
    goto LABEL_41;
  v11 = v6;
  if ( (*(_BYTE *)(v5[7] + 21LL) & 2) != 0 )
  {
    v92[0] = v6;
    v14 = v5[213];
    v15 = *(_DWORD *)(v14 + 16);
    if ( v15 )
    {
      v16 = (v15 - 1) & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
      v17 = (__int64 *)(*(_QWORD *)v14 + 16LL * v16);
      v10 = *v17;
      if ( v11 != *v17 )
      {
        v18 = 1;
        v9 = nullptr;
        if ( v10 == -4096 )
        {
LABEL_7:
          v9 = v17;
LABEL_8:
          v19 = *(_DWORD *)(v14 + 8);
          v7 = 3 * v15;
          v95[0] = v9;
          v20 = v19 + 1;
          v8 = (unsigned int)(4 * v20);
          if ( (unsigned int)v8 < (unsigned int)v7 )
          {
            v7 = v15 - *(_DWORD *)(v14 + 12) - v20;
            v8 = v15 >> 3;
            if ( (unsigned int)v7 > (unsigned int)v8 )
            {
LABEL_10:
              v21 = *v9 == -4096;
              *(_DWORD *)(v14 + 8) = v20;
              if ( !v21 )
                --*(_DWORD *)(v14 + 12);
              *v9 = v11;
              v22 = (unsigned __int64 *)(v9 + 1);
              v23 = 0;
              v9[1] = 0;
              v11 = v92[0];
              goto LABEL_13;
            }
LABEL_89:
            sub_12F12D0(v14, v15, v7, v8, (__int64)v9, v10);
            sub_12EC520((__int64 *)v14, v92, v95);
            v11 = v92[0];
            v9 = (__int64 *)v95[0];
            v20 = *(_DWORD *)(v14 + 8) + 1;
            goto LABEL_10;
          }
LABEL_88:
          v15 *= 2;
          goto LABEL_89;
        }
        while ( 1 )
        {
          if ( v10 == -8192 && !v9 )
            v9 = v17;
          v16 = (v15 - 1) & (v18 + v16);
          v17 = (__int64 *)(*(_QWORD *)v14 + 16LL * v16);
          v10 = *v17;
          if ( v11 == *v17 )
            break;
          if ( v10 == -4096 )
          {
            if ( v9 )
              goto LABEL_8;
            goto LABEL_7;
          }
          ++v18;
        }
      }
      v22 = (unsigned __int64 *)(v17 + 1);
      v64 = v17[1];
      v65 = (unsigned __int64 *)(v64 & 0xFFFFFFFFFFFFFFF8LL);
      v23 = v64 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v64 && (v64 & 4) != 0 )
      {
        v23 = 0;
        if ( !v65 )
          goto LABEL_13;
        v23 = *v65;
      }
      while ( v23 && (*(_BYTE *)(v23 + 12) & 3) == 2 )
        v23 = *(_QWORD *)v23;
LABEL_13:
      if ( (*(_BYTE *)(v11 + 4) & 0x10) != 0 )
      {
        sub_145CD30((__int64)v5);
        if ( (*(_BYTE *)(v11 + 3) & 2) == 0 )
          goto LABEL_80;
      }
      else if ( (*(_BYTE *)(v11 + 3) & 2) == 0 )
      {
        v28 = 0;
        goto LABEL_82;
      }
      v24 = v5[7];
      if ( (*(_BYTE *)(v24 + 21) & 2) != 0 || *(char *)(v24 + 22) < 0 )
      {
        v25 = *(_DWORD *)(v5[213] + 48LL);
        if ( v25 )
        {
          v26 = *v22 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !*v22 || (*v22 & 4) == 0 || (v27 = *v22 & 0xFFFFFFFFFFFFFFF8LL, !v26) )
          {
            v68 = v5[16];
            v5[26] += 32LL;
            v69 = (v68 + 15) & 0xFFFFFFFFFFFFFFF0LL;
            if ( v5[17] >= v69 + 32 && v68 )
            {
              v5[16] = v69 + 32;
              v27 = (v68 + 15) & 0xFFFFFFFFFFFFFFF0LL;
            }
            else
            {
              v88 = v26;
              v27 = sub_986170((__int64)(v5 + 16), 32, 32, 4, v26, v10);
              v26 = v88;
              v69 = v27 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)(v27 + 8) = 0;
            *(_DWORD *)(v27 + 16) = 0;
            *(_QWORD *)(v27 + 24) = 0;
            *(_QWORD *)v27 = v26;
            *(_BYTE *)(v27 + 20) = 0;
            *v22 = v69 | 4;
            v25 = *(_DWORD *)(v5[213] + 48LL);
          }
          if ( *(_DWORD *)(v27 + 16) != v25 )
          {
            v84 = v27;
            sub_14476F0((__int64)v5, v11, v27);
            v27 = v84;
          }
          v28 = *(_BYTE *)(v27 + 20);
          goto LABEL_24;
        }
      }
LABEL_80:
      v28 = 0;
LABEL_24:
      v29 = v92[0];
      if ( (*(_BYTE *)(v92[0] + 4) & 0x10) != 0 )
      {
        v85 = v92[0];
        sub_145CD30((__int64)v5);
        v29 = v85;
      }
      if ( (*(_BYTE *)(v29 + 3) & 2) != 0 )
      {
        v30 = v5[7];
        if ( (*(_BYTE *)(v30 + 21) & 2) == 0 )
        {
          v31 = 0;
          if ( *(char *)(v30 + 22) >= 0 )
            goto LABEL_37;
        }
        v32 = *(_DWORD *)(v5[213] + 48LL);
        if ( v32 )
        {
          v33 = *v22 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !*v22 || (*v22 & 4) == 0 || (v34 = *v22 & 0xFFFFFFFFFFFFFFF8LL, !v33) )
          {
            v66 = v5[16];
            v5[26] += 32LL;
            v67 = (v66 + 15) & 0xFFFFFFFFFFFFFFF0LL;
            if ( v5[17] >= v67 + 32 && v66 )
            {
              v5[16] = v67 + 32;
              v34 = (v66 + 15) & 0xFFFFFFFFFFFFFFF0LL;
            }
            else
            {
              v89 = v33;
              v87 = v29;
              v34 = sub_986170((__int64)(v5 + 16), 32, 32, 4, v29, v33);
              v33 = v89;
              v29 = v87;
              v67 = v34 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)(v34 + 8) = 0;
            *(_DWORD *)(v34 + 16) = 0;
            *(_QWORD *)(v34 + 24) = 0;
            *(_QWORD *)v34 = v33;
            *(_BYTE *)(v34 + 20) = 0;
            *v22 = v67 | 4;
            v32 = *(_DWORD *)(v5[213] + 48LL);
          }
          if ( *(_DWORD *)(v34 + 16) != v32 )
          {
            v86 = v34;
            sub_14476F0((__int64)v5, v29, v34);
            v34 = v86;
          }
          v35 = *(_QWORD *)(v34 + 8);
          v36 = v35 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v35 & 4) != 0 )
            v31 = *(unsigned int *)(v36 + 8);
          else
            v31 = v36 != 0;
LABEL_37:
          if ( v23
            && (*(_BYTE *)(v23 + 12) & 3) == 0
            && (unsigned __int16)(4 * v28) & 0xFFF8 | v23 & 0xFFFFFFFFFFFFFFF8LL
            || v31 )
          {
            goto LABEL_3;
          }
LABEL_41:
          v12 = 1;
          v13 = 1;
          goto LABEL_42;
        }
      }
LABEL_82:
      v31 = 0;
      goto LABEL_37;
    }
    v95[0] = 0;
    goto LABEL_88;
  }
LABEL_3:
  v12 = 0;
  v13 = 0;
LABEL_42:
  v37 = *a2 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL)
                 + 16LL)
      & 0xF7) != 0x22 )
  {
    v38 = a1[31];
    if ( (unsigned int)sub_BFE6E0(v37, v38, 2, a3) == 1 )
    {
      v42 = *a2 & 0xFFFFFFFFFFFFFFFELL;
      v43 = *(_WORD *)v42 & 0x1FF;
      if ( v43 == 78 )
      {
        if ( *(_DWORD *)(v42 + 16) )
          return;
        v44 = sub_C00A40(v42, v38, v39, v40, v41);
        v45 = (__int64)(a1 + 1);
        sub_168B9F0((__int64)v95, a1 + 1, v44, 0x1C52u, 0);
        if ( v98 )
        {
          v45 = v12;
          sub_AE9DF0(v97, v12, 2u);
        }
        else if ( v100 )
        {
          v72 = sub_168B9E0(v95);
          v75 = v96;
          if ( v96 )
            v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v96 + 32LL))(v96);
          v92[0] = v75;
          v76 = sub_1587BC0(v72, v92, v70, v71, v73, v74);
          v45 = v12;
          sub_AE9DF0((unsigned __int8 **)(*v76 + 32LL * v99 + 8), v12, 2u);
        }
        v46 = "NULL";
        if ( !v13 )
          v46 = "(void *)0";
        v47 = j__strlen(v46);
        v51 = sub_C00A40(*a2 & 0xFFFFFFFFFFFFFFFELL, v45, v48, v49, v50);
        v52 = (char *)v46;
        v53 = v47;
        LODWORD(v91) = v51;
        HIDWORD(v91) = v51;
        v54 = v91;
      }
      else
      {
        if ( v43 != 87 )
          return;
        v55 = a1[31];
        if ( (*(_QWORD *)(*(_QWORD *)&byte_8[**(_QWORD **)(v42 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
            & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(v55 + 18648) )
          return;
        v56 = sub_C00A40(v42, v38, v55, v40, v41);
        v57 = (__int64)(a1 + 1);
        sub_168B9F0((__int64)v95, a1 + 1, v56, 0x1C52u, 0);
        if ( v98 )
        {
          v57 = v12;
          sub_AE9DF0(v97, v12, 2u);
        }
        else if ( v100 )
        {
          v79 = sub_168B9E0(v95);
          v82 = v96;
          if ( v96 )
            v82 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v96 + 32LL))(v96);
          v92[0] = v82;
          v83 = sub_1587BC0(v79, v92, v77, v78, v80, v81);
          v57 = v12;
          sub_AE9DF0((unsigned __int8 **)(*v83 + 32LL * v99 + 8), v12, 2u);
        }
        v58 = "NULL";
        if ( !v13 )
          v58 = "(void *)0";
        v59 = j__strlen(v58);
        v63 = sub_C00A40(*a2 & 0xFFFFFFFFFFFFFFFELL, v57, v60, v61, v62);
        v52 = (char *)v58;
        v53 = v59;
        LODWORD(v90) = v63;
        HIDWORD(v90) = v63;
        v54 = v90;
      }
      sub_18BE5B0((__int64)v92, v54, 1, v52, v53);
      sub_1589170((__int64)v95, v92);
      if ( v93 != &v94 )
        operator delete(v93);
      sub_15F7200(v95);
    }
  }
}
