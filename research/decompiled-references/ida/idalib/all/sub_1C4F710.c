void __fastcall sub_1C4F710(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v12; // r12
  __int64 v13; // r14
  char v14; // al
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rdx
  _QWORD *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // r13
  unsigned int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _QWORD *v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // r14
  unsigned __int64 v49; // rax
  void *v50; // rdi
  char *v51; // rsi
  char *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  void **v56; // r12
  char *v57; // r14
  char *v58; // r15
  unsigned int v59; // eax
  char v60; // al
  unsigned int v61; // eax
  void **v62; // rbx
  char v63; // r15
  void *v64; // rcx
  __int64 v65; // rsi
  unsigned __int64 v66; // rdx
  char *v67; // rax
  unsigned int v68; // edx
  char v69; // dl
  unsigned __int64 v70; // rax
  __int64 v71; // rax
  unsigned int v72; // ecx
  __int64 v73; // rdx
  char v74; // cl
  int v75; // edx
  void *v76; // rax
  __int64 *v77; // rax
  __int64 *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  unsigned int v82; // eax
  __int64 *v83; // rax
  __int64 v84; // rcx
  char v85; // [rsp+0h] [rbp-738h]
  unsigned int v86; // [rsp+4h] [rbp-734h]
  char *v87; // [rsp+10h] [rbp-728h]
  void *v88; // [rsp+10h] [rbp-728h]
  __int64 v89; // [rsp+10h] [rbp-728h]
  int v90; // [rsp+20h] [rbp-718h]
  __int64 v91; // [rsp+20h] [rbp-718h]
  __int64 v92; // [rsp+28h] [rbp-710h] BYREF
  void *v93; // [rsp+30h] [rbp-708h] BYREF
  unsigned int v94; // [rsp+38h] [rbp-700h]
  char v95; // [rsp+3Ch] [rbp-6FCh]
  _QWORD v96[2]; // [rsp+40h] [rbp-6F8h] BYREF
  char v97; // [rsp+50h] [rbp-6E8h]
  unsigned __int64 v98; // [rsp+60h] [rbp-6D8h] BYREF
  int v99; // [rsp+68h] [rbp-6D0h]
  void *ptr; // [rsp+F0h] [rbp-648h] BYREF
  __int64 v101; // [rsp+F8h] [rbp-640h]
  _BYTE v102[1592]; // [rsp+100h] [rbp-638h] BYREF

  v92 = a2;
  v6 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(*v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)v7;
  if ( *(_BYTE *)(*(_QWORD *)v7 + 16LL) != 47 )
    return;
  v9 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v12 = v9;
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(_BYTE *)(v13 + 16);
  switch ( v14 )
  {
    case 13:
      if ( (((*(_WORD *)(v13 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
        return;
      break;
    case 47:
      v15 = sub_F60F10(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
              (__int64)v6,
              v9,
              (__int64)a4,
              a5,
              a6);
      if ( (*((_BYTE *)v15 + 74) & 1) == 0 && (v15[16] & 0xFFFFFFFFFFFFFFF8LL) == 0
        || *((char *)sub_F60F10(v13, (__int64)v6, v16, v17, v18, v19) + 76) < 0 )
      {
        return;
      }
      v6 = (_QWORD *)(v92 & 0xFFFFFFFFFFFFFFF0LL);
      break;
    case 10:
      break;
    default:
      return;
  }
  v20 = (_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *v20 != *(_QWORD *)(v6[1] & 0xFFFFFFFFFFFFFFF0LL) && ((*a4 >> 14) & 0xC) == 0 )
  {
    v21 = sub_F60F10(v8, (__int64)v6, (__int64)v20, (__int64)a4, a5, a6);
    if ( sub_B78490((__int64)v21) )
    {
      v25 = a1[33];
      v26 = sub_C00A40((unsigned __int64)a4, (__int64)v6, v22, v23, v24);
      if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v25 + 32), 0x1BF2u, v26, v25, v27, v28) != 1 )
      {
        sub_C3EB00((__int64)v96, (unsigned __int64)a4, a1[31], nullptr, v29, v30);
        if ( !v97 )
          goto LABEL_46;
        v86 = sub_AAC1F0(a1[31], v92, v31, v32, v33);
        v85 = sub_F65240(*(_QWORD *)(v92 & 0xFFFFFFFFFFFFFFF0LL), v92, v34, v35, v36, v37);
        sub_1C33520((__int64)v96, v86, v85);
        if ( (*((_BYTE *)v21 + 29) & 1) == 0 )
        {
LABEL_16:
          ptr = v102;
          v101 = 0x4000000000LL;
          sub_B7E870((__int64)v21, v86, v38, v39, v40, v41);
          v46 = sub_B7E870((__int64)v21, v86, v42, v43, v44, v45);
          if ( !v46 )
            v46 = v21;
          v47 = sub_B8E970((__int64)(v46 + 8));
          v48 = v47;
          if ( v47 )
          {
            if ( (*(_BYTE *)(v47 + 28) & 0x7F) == 0x21 )
            {
LABEL_47:
              v63 = *(_BYTE *)(v48 + 80);
              v64 = *(void **)(v48 + 56);
              v65 = *(unsigned int *)(v48 + 64);
              v66 = (unsigned __int64)(v65 + 63) >> 6;
              if ( v66 > 1 )
              {
                sub_2205610(&v98, v65, v66, v64);
                LODWORD(v65) = v99;
                v64 = (void *)v98;
              }
              else
              {
                v99 = *(_DWORD *)(v48 + 64);
                if ( (unsigned int)v65 > 0x40 )
                {
                  sub_2205470(&v98, v64, 0);
                  LODWORD(v65) = v99;
                  v64 = (void *)v98;
                }
              }
              v94 = v65;
              v93 = v64;
              v95 = v63;
              sub_1C33520((__int64)&v93, v86, v85);
              if ( HIDWORD(v101) <= (unsigned int)v101 )
              {
                v71 = sub_2237400(&ptr, v102, 0, 24, &v98);
                v72 = v94;
                v73 = v71 + 24LL * (unsigned int)v101;
                *(_DWORD *)(v73 + 8) = v94;
                if ( v72 > 0x40 )
                {
                  v91 = v71;
                  v89 = v73;
                  sub_2205510(v73);
                  v71 = v91;
                  v73 = v89;
                }
                else
                {
                  *(_QWORD *)v73 = v93;
                }
                v74 = v95;
                *(_QWORD *)(v73 + 16) = v48;
                v88 = (void *)v71;
                *(_BYTE *)(v73 + 12) = v74;
                sub_1C38A00((__int64 *)&ptr, v71);
                v75 = v98;
                v76 = v88;
                if ( ptr != v102 )
                {
                  v90 = v98;
                  free(ptr);
                  v75 = v90;
                  v76 = v88;
                }
                ptr = v76;
                HIDWORD(v101) = v75;
                LODWORD(v101) = v101 + 1;
              }
              else
              {
                v67 = (char *)ptr + 24 * (unsigned int)v101;
                v68 = v94;
                *((_DWORD *)v67 + 2) = v94;
                if ( v68 > 0x40 )
                {
                  v87 = v67;
                  sub_2205510(v67);
                  v67 = v87;
                }
                else
                {
                  *(_QWORD *)v67 = v93;
                }
                v69 = v95;
                *((_QWORD *)v67 + 2) = v48;
                v67[12] = v69;
                LODWORD(v101) = v101 + 1;
              }
              if ( v94 > 0x40 && v93 )
                operator delete[](v93);
              while ( 1 )
              {
                v70 = *(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v48 = v70;
                if ( !v70 )
                  break;
                if ( (*(_BYTE *)(v70 + 28) & 0x7F) == 0x21 )
                  goto LABEL_47;
              }
            }
            else
            {
              while ( 1 )
              {
                v49 = *(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v48 = v49;
                if ( !v49 )
                  break;
                if ( (*(_BYTE *)(v49 + 28) & 0x7F) == 0x21 )
                  goto LABEL_47;
              }
            }
          }
          v50 = ptr;
          if ( (_DWORD)v101 )
          {
            sub_1C4E3E0(
              (__int64 *)ptr,
              (char *)ptr + 24 * (unsigned int)v101,
              (unsigned __int8 (__fastcall *)(void **, __int64 *))sub_1C32A30);
            v51 = (char *)ptr + 24 * (unsigned int)v101;
            v52 = (char *)sub_1C38400(
                            (__int64)ptr,
                            (__int64)v51,
                            (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1C2FCE0);
            v56 = (void **)ptr;
            v57 = v52;
            if ( ptr == v52 )
              goto LABEL_36;
            v58 = (char *)ptr;
            while ( 1 )
            {
              v51 = (char *)v96;
              v59 = v58[12] ? (unsigned int)sub_2205DB0(v58, v96) >> 31 : (unsigned int)sub_2205E20(v58, v96) >> 31;
              if ( !(_BYTE)v59 )
                break;
              v58 += 24;
              if ( v58 == v57 )
                goto LABEL_36;
            }
            if ( *((_DWORD *)v58 + 2) <= 0x40u )
            {
              v60 = *(_QWORD *)v58 == v96[0];
            }
            else
            {
              v51 = (char *)v96;
              v60 = sub_2205D70(v58, v96);
            }
            if ( !v60 )
            {
LABEL_36:
              v61 = sub_C00A40((unsigned __int64)a4, (__int64)v51, v53, v54, v55);
              sub_168B9F0((__int64)&v98, a1 + 1, v61, 0x1BF2u, 0);
              v93 = (void *)sub_6D5440(&v92);
              sub_162B6D0((__int64)&v98, (__int64 *)&v93);
              sub_15F7200(&v98);
              v56 = (void **)ptr;
            }
            v62 = &v56[3 * (unsigned int)v101];
            if ( v56 != v62 )
            {
              do
              {
                v62 -= 3;
                if ( *((_DWORD *)v62 + 2) > 0x40u )
                {
                  if ( *v62 )
                    operator delete[](*v62);
                }
              }
              while ( v56 != v62 );
              v62 = (void **)ptr;
            }
            if ( v62 == (void **)v102 )
              goto LABEL_46;
            v50 = v62;
          }
          else if ( ptr == v102 )
          {
            goto LABEL_46;
          }
          free(v50);
LABEL_46:
          sub_98E4B0((__int64)v96);
          return;
        }
        v77 = sub_B8C3D0((__int64)v21, v86, v38, v39, v40, v41);
        v38 = *v77;
        v39 = *v77 + 8LL * *((unsigned int *)v77 + 2);
        if ( *v77 >= v39 )
        {
          if ( v38 == v39 )
            goto LABEL_16;
          if ( *(_WORD *)(*(_QWORD *)v39 + 36LL) != 215 )
          {
            v83 = (__int64 *)(v39 + 8);
            do
            {
              v39 = (unsigned __int64)v83;
              if ( (__int64 *)v38 == v83 )
                goto LABEL_16;
              v84 = *v83++;
            }
            while ( *(_WORD *)(v84 + 36) != 215 );
          }
        }
        else
        {
          v78 = (__int64 *)*v77;
          while ( 1 )
          {
            v38 = *v78;
            if ( *(_WORD *)(*v78 + 36) == 215 )
              break;
            if ( (__int64 *)v39 == ++v78 )
              goto LABEL_16;
          }
          if ( (__int64 *)v39 == v78 )
            goto LABEL_16;
        }
        if ( !(unsigned __int8)sub_17AD650((__int64)a1, (__int64)v21, (__int64)v96, 1, v40, v41) )
        {
          v82 = sub_C00A40((unsigned __int64)a4, (__int64)v21, v79, v80, v81);
          sub_168B9F0((__int64)&ptr, a1 + 1, v82, 0x1BF2u, 0);
          v98 = sub_6D5440(&v92);
          sub_162B6D0((__int64)&ptr, (__int64 *)&v98);
          sub_15F7200(&ptr);
        }
        goto LABEL_46;
      }
    }
  }
}
