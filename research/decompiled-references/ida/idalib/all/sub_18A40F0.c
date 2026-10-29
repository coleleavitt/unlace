// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_18A40F0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r12
  __int64 *v26; // r15
  __int64 v27; // rax
  __int64 v28; // r14
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r12
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 v48; // r13
  unsigned __int64 v49; // rdx
  char v50; // al
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r15
  bool v53; // cf
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 v56; // rdi
  char v57; // al
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r12
  int v64; // eax
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rsi
  unsigned __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  unsigned __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rdx
  unsigned int v76; // eax
  __int64 v77; // rax
  __int64 v78; // r15
  __int64 v79; // r12
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rax
  unsigned __int64 *v91; // rax
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // r14
  __int64 v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // [rsp+0h] [rbp-F8h]
  __int64 *v105; // [rsp+18h] [rbp-E0h]
  int v106; // [rsp+24h] [rbp-D4h] BYREF
  __int64 v107; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v108[200]; // [rsp+30h] [rbp-C8h] BYREF

  v104 = (_QWORD *)sub_168B6C0((__int64)a1);
  *(_DWORD *)(*a1 + 9816) = 0;
  v6 = *a1;
  v7 = *(unsigned int *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
  if ( a3 && (*(_BYTE *)(a3 + 28) & 0x7F) == 0x12 )
  {
    sub_18C74E0(v6, v7, 0, 4);
    v8 = *(_QWORD *)(*(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v8 + 17) & 4) == 0 )
    {
      v9 = *a1;
      v73 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v73 + 16) == 13 && ((*(_WORD *)(v73 + 18) >> 3) & 0x1FF) == 0x1B3 || *(char *)(a3 + 28) < 0 )
      {
LABEL_5:
        sub_17A2E00(v9, a2, a3 + 48);
        sub_15F1950(*a1, a2, v10, v11, v12, v13);
        v14 = sub_BA85D0(a3);
        sub_BAA380(a3, v104, v14, v15, v16, v17);
        sub_17B7670(*a1, *(_QWORD *)(a3 + 120), a2, 1, v18, v19);
        sub_17B7670(*a1, *(_QWORD *)(a3 + 128), a2, 1, v20, v21);
        v22 = *(__int64 **)(a3 + 96);
        sub_16D8D40(*a1, v22, *(unsigned int *)(a3 + 104), 0);
        v24 = *(_QWORD *)(a3 + 96);
        v25 = v24 + 8LL * *(unsigned int *)(a3 + 104);
        v26 = (__int64 *)v24;
        if ( v25 == v24 )
        {
LABEL_18:
          if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
          {
            v76 = sub_BA8080(a3, (__int64)v22, v33, v34, v35, v36);
            if ( v76 <= 0xB && ((1LL << v76) & 0xE40) != 0 )
            {
              sub_168B9F0((__int64)v108, a1, *(_DWORD *)(a3 + 24), 0xBD0u, 0);
              v106 = 0;
              v77 = sub_1587D10((__int64)v108, &v106);
              v78 = *(_QWORD *)(a3 + 40);
              v79 = v77;
              if ( *(_BYTE *)(v77 + 120) )
              {
                sub_AE9DF0((unsigned __int8 **)(v77 + 32), *(_QWORD *)(a3 + 40), 9u);
              }
              else if ( *(_BYTE *)(v77 + 132) )
              {
                v101 = sub_168B9E0((_QWORD *)v77);
                v102 = *(_QWORD *)(v79 + 16);
                if ( v102 )
                  v102 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v102 + 32LL))(*(_QWORD *)(v79 + 16));
                v107 = v102;
                v103 = sub_1587BC0(v101, &v107, v97, v98, v99, v100);
                sub_AE9DF0((unsigned __int8 **)(*v103 + 32LL * *(unsigned int *)(v79 + 128) + 8), v78, 9u);
              }
              sub_15F7200(v108);
            }
          }
          v37 = sub_BA85D0(a3);
          v42 = v37;
          if ( !v37 )
            goto LABEL_44;
          v43 = *(_QWORD *)(a3 + 40);
          v48 = sub_BAD910(v37, v43, (*(_BYTE *)(a3 + 58) & 2) != 0, 0, 1, 0);
          if ( !v48 )
          {
LABEL_32:
            if ( (unsigned int)sub_BA8080(a3, v43, v44, v45, v46, v47) == 3 )
            {
              v43 = 0;
              if ( sub_BAEBF0(a3, nullptr, v59, v60, v61, v62) )
              {
                v86 = *(unsigned int *)(*a1 + 40);
                if ( !(_DWORD)v86 )
                {
                  *(_DWORD *)byte_8 = 0;
                  BUG();
                }
                v87 = *(_QWORD *)(*a1 + 32);
                *(_BYTE *)(*(_QWORD *)(v87 + 8 * v86 - 8) + 9LL) |= 0x20u;
                v89 = sub_BAB630(v42, 0, v87, v83, v84, v85);
                v88 = *(unsigned int *)(*a1 + 40);
                LOBYTE(v89) = v89 != 0;
                if ( !(_DWORD)v88 )
                {
                  *(_DWORD *)byte_8 = 0;
                  BUG();
                }
                v60 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 8 * v88 - 8);
                v59 = (unsigned int)((_DWORD)v89 << 6);
                *(_BYTE *)(v60 + 9) = ((_BYTE)v89 << 6) | *(_BYTE *)(v60 + 9) & 0xBF;
              }
              else if ( sub_BAC370(v42, 0, v82, v83, v84, v85) )
              {
                v94 = *(unsigned int *)(*a1 + 40);
                if ( !(_DWORD)v94 )
                {
                  *(_DWORD *)byte_8 = 0;
                  BUG();
                }
                v95 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 8 * v94 - 8);
                *(_BYTE *)(v95 + 9) |= 0x80u;
                v96 = *(unsigned int *)(*a1 + 40);
                if ( !(_DWORD)v96 )
                {
                  *(_DWORD *)byte_8 = 0;
                  BUG();
                }
                v59 = *(_QWORD *)(*a1 + 32);
                *(_BYTE *)(*(_QWORD *)(v59 + 8 * v96 - 8) + 10LL) |= 1u;
              }
            }
            v63 = sub_BAB630(v42, v43, v59, v60, v61, v62);
            if ( !v63 )
              goto LABEL_44;
            v64 = sub_BA8080(a3, v43, v38, v39, v40, v41);
            if ( v64 == 7 )
            {
              if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) == 0
                && *(_BYTE *)(sub_168B6E0((__int64)a1) + 208) >> 6 != 1 )
              {
                v90 = *(unsigned int *)(*a1 + 40);
                if ( !(_DWORD)v90 )
                {
                  *(_DWORD *)byte_8 = 0;
                  BUG();
                }
                v38 = *(_QWORD *)(*a1 + 32);
                *(_BYTE *)(*(_QWORD *)(v38 + 8 * v90 - 8) + 9LL) |= 0x10u;
                v65 = *a1;
                goto LABEL_45;
              }
              goto LABEL_44;
            }
            if ( v64 == 8 )
            {
              v65 = *a1;
              if ( *(_BYTE *)(v104[290] + 208LL) >> 6 )
              {
                v66 = *(unsigned int *)(v65 + 40);
                if ( !(_DWORD)v66 )
                {
                  *(_DWORD *)byte_8 = 0;
                  BUG();
                }
                v38 = *(_QWORD *)(v65 + 32);
                *(_BYTE *)(*(_QWORD *)(v38 + 8 * v66 - 8) + 9LL) |= 0x10u;
                v65 = *a1;
              }
              goto LABEL_45;
            }
            v67 = *(_QWORD *)(a3 + 40);
            v68 = sub_BAD910(v63, v67, (*(_BYTE *)(a3 + 58) & 2) != 0, 0, 1, 0);
            if ( !v68 || (*(_BYTE *)(v68 + 29) & 1) == 0 )
              goto LABEL_41;
            v91 = sub_B8C3D0(v68, v67, v69, v70, v40, v41);
            v92 = *v91;
            v93 = *v91 + 8LL * *((unsigned int *)v91 + 2);
            if ( *v91 < v93 )
            {
              v71 = *v91;
              while ( 1 )
              {
                v92 = v71;
                if ( *(_WORD *)(*(_QWORD *)v71 + 36LL) == 314 )
                  goto LABEL_91;
                v71 += 8LL;
                if ( v93 == v71 )
                  goto LABEL_41;
              }
            }
            if ( v92 != v93 )
            {
              v71 = *(_QWORD *)v93;
              if ( *(_WORD *)(*(_QWORD *)v93 + 36LL) == 314 )
              {
LABEL_91:
                LOBYTE(v71) = v92 != v93;
                goto LABEL_42;
              }
              v71 = v93 + 8;
              while ( 1 )
              {
                v93 = v71;
                if ( v92 == v71 )
                  break;
                v71 += 8LL;
                if ( *(_WORD *)(*(_QWORD *)v93 + 36LL) == 314 )
                  goto LABEL_91;
              }
            }
LABEL_41:
            LODWORD(v71) = 0;
LABEL_42:
            v72 = *(unsigned int *)(*a1 + 40);
            if ( !(_DWORD)v72 )
            {
              *(_DWORD *)byte_8 = 0;
              BUG();
            }
            v39 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 8 * v72 - 8);
            v38 = (unsigned int)(16 * v71);
            *(_BYTE *)(v39 + 9) = (16 * v71) | *(_BYTE *)(v39 + 9) & 0xEF;
LABEL_44:
            v65 = *a1;
LABEL_45:
            sub_17A5A20(v65, a3, v38, v39, v40, v41);
            return;
          }
          v49 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
            v49 = *(_QWORD *)v49;
          v50 = *(_BYTE *)(v49 + 8);
          v51 = v49 - 48;
          v52 = 0;
          v53 = (v50 & 0x7Fu) - 21 < 2;
          v54 = *(_QWORD *)(v48 + 16);
          if ( v53 )
            v52 = v51;
          v55 = v54 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v54 & 4) != 0 )
            v55 = *(_QWORD *)v55;
          if ( (*(_BYTE *)(v55 + 8) & 0x7Fu) - 19 > 4 )
            BUG();
          v56 = v55 - 48;
          v57 = *(_BYTE *)(v55 - 20) & 0x7F;
          if ( v57 != 20 )
          {
            if ( v57 != 23 )
              goto LABEL_71;
            v81 = *(_QWORD *)(v55 - 8);
            if ( (v81 & 7) == 0 && (v81 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v58 = sub_BA8FC0(v56);
              goto LABEL_30;
            }
            v56 = *(_QWORD *)(v55 + 40);
            if ( !v56 )
              goto LABEL_71;
          }
          v58 = sub_BAC6C0(v56, v43, v55, v45, v46, v47);
LABEL_30:
          if ( v58 && v58 == v52 )
            goto LABEL_32;
LABEL_71:
          v43 = v48;
          sub_18A3E00(*a1, v48, *(_DWORD *)(a3 + 24), v45, v46, v47);
          goto LABEL_32;
        }
        while ( 1 )
        {
          v28 = *v26;
          if ( *(char *)(*v26 + 28) >= 0 && (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
          {
            v29 = *(_QWORD *)(v28 + 48) & 0xFFFFFFFFFFFFFFF0LL;
            v30 = *(_QWORD *)v29;
            v105 = (__int64 *)v29;
            v31 = *(unsigned __int8 *)(*(_QWORD *)v29 + 16LL);
            if ( (_BYTE)v31 == 42 )
              goto LABEL_13;
            v22 = *(__int64 **)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *((_BYTE *)v22 + 16) == 42 )
            {
              v30 = sub_F63050(v30, v22, v29, v31);
              if ( v30 )
              {
LABEL_13:
                v32 = *(_QWORD *)(v30 + 32);
LABEL_14:
                if ( (v32 & 8) != 0 && (*(__int64 *)((char *)&qword_18 + (v32 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) != 0 )
                {
                  sub_168B9F0((__int64)v108, a1, *(_DWORD *)(v28 + 24), 0x196Cu, 0);
                  v22 = &v107;
                  v107 = *(_QWORD *)(v28 + 48);
                  sub_162B6D0((__int64)v108, &v107);
                  sub_15F7200(v108);
                }
                goto LABEL_7;
              }
              v30 = *v105;
              LODWORD(v31) = *(unsigned __int8 *)(*v105 + 16);
            }
            v74 = (unsigned int)(v31 - 43);
            if ( (unsigned int)v74 <= 1
              || (v80 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                         + 16LL)
                      - 43,
                  (unsigned int)v80 <= 1)
              && (v30 = sub_F63050(v30, v22, v80, v74)) != 0 )
            {
              while ( 1 )
              {
                v32 = *(_QWORD *)(v30 + 32);
                if ( (*(_BYTE *)(v30 + 18) & 0x10) == 0 )
                  break;
                v30 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL);
                v75 = (unsigned int)*(unsigned __int8 *)(v30 + 16) - 43;
                if ( (unsigned int)v75 > 1 )
                  v30 = sub_F63050(v30, v22, v75, v74);
              }
              goto LABEL_14;
            }
          }
LABEL_7:
          v27 = *(_QWORD *)(v28 + 40);
          if ( (v27 & 7) == 0 && (v27 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v22 = (__int64 *)v28;
            ++v26;
            sub_17B7670(*a1, v28, a2, 1, v23, v24);
            if ( (__int64 *)v25 == v26 )
              goto LABEL_18;
          }
          else if ( (__int64 *)v25 == ++v26 )
          {
            goto LABEL_18;
          }
        }
      }
      if ( (unsigned __int8)sub_1E63CF0(v9, *(unsigned int *)(a3 + 24), *(_QWORD *)(a3 + 80), 1, 3858) )
        sub_B88650(a3, 1);
    }
    v9 = *a1;
    goto LABEL_5;
  }
  sub_18C74E0(v6, v7, 0, 4);
}
