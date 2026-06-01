unsigned __int64 __fastcall sub_1C15630(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r13
  __int16 v4; // ax
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // r12d
  __int64 (__fastcall *v10)(__int64, unsigned __int64, _QWORD); // r8
  __int64 v11; // rdi
  unsigned __int8 v12; // bl
  char v13; // r15
  char v14; // bl
  __int64 v15; // rbp
  char v16; // al
  unsigned __int8 v17; // al
  char v18; // r11
  int v19; // esi
  int v20; // ebp
  _QWORD *v21; // rdi
  __int64 v22; // r9
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // r12
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // r15
  char v32; // bp
  int v33; // r12d
  char v34; // bl
  char v35; // al
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // r15d
  __int64 v40; // rbp
  char v41; // bl
  char v42; // al
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rbp
  _WORD *v46; // rax
  char v47; // r12
  __int64 v48; // r13
  char v49; // al
  __int64 v50; // rax
  unsigned int v51; // edx
  __int64 v52; // r11
  unsigned int v53; // eax
  int v54; // r9d
  unsigned __int16 v55; // ax
  unsigned __int64 v56; // rbp
  __int64 *v57; // r12
  __int64 v58; // r15
  __int64 *v59; // rax
  __int64 *v60; // r15
  __int64 v61; // rbp
  int v62; // r14d
  __int64 v63; // r13
  unsigned __int64 v64; // r11
  __int64 v65; // rax
  unsigned __int64 v66; // rbx
  __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rax
  void *v72; // rax
  void *v73; // rsi
  void **p_ptr; // rbx
  __int64 v75; // rax
  int v76; // edi
  char v77; // r15
  __int64 v78; // rbp
  int v79; // r12d
  char v80; // bl
  bool v81; // r15
  _WORD *v82; // rax
  void *v83; // rcx
  void *v84; // rsi
  char v85; // al
  char v86; // dl
  unsigned __int64 v87; // [rsp+8h] [rbp-110h]
  __int64 v88; // [rsp+8h] [rbp-110h]
  __int64 v89; // [rsp+8h] [rbp-110h]
  __int64 v90; // [rsp+8h] [rbp-110h]
  unsigned __int64 v91; // [rsp+10h] [rbp-108h]
  int v92; // [rsp+10h] [rbp-108h]
  __int64 v93; // [rsp+10h] [rbp-108h]
  __int64 v94; // [rsp+10h] [rbp-108h]
  __int64 v95; // [rsp+10h] [rbp-108h]
  __int64 v96; // [rsp+18h] [rbp-100h]
  char v97; // [rsp+18h] [rbp-100h]
  __int64 v98; // [rsp+18h] [rbp-100h]
  int v99; // [rsp+18h] [rbp-100h]
  void *v100; // [rsp+18h] [rbp-100h]
  __int64 v101; // [rsp+20h] [rbp-F8h]
  __int64 v102; // [rsp+38h] [rbp-E0h]
  void *v103; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v104; // [rsp+48h] [rbp-D0h]
  _BYTE v105[64]; // [rsp+50h] [rbp-C8h] BYREF
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v107; // [rsp+98h] [rbp-80h]
  _BYTE v108[120]; // [rsp+A0h] [rbp-78h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = *(_WORD *)a2 & 0x1FF;
  switch ( v4 )
  {
    case 32:
      v5 = *(_QWORD *)(a2 + 40);
      v6 = (v5 >> 1) & 3;
      if ( v6 != 1 && v6 != 2 )
      {
        v7 = v5 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = *(_QWORD *)(a1 + 16);
        v9 = *(_DWORD *)(v2 + 32);
        v10 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))v8;
        v11 = *(_QWORD *)(v8 + 8);
        v87 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        v12 = *(_BYTE *)(v2 + 1);
        v13 = (v12 >> 3) & 7;
        v14 = (v12 >> 1) & 3;
        if ( (*(_QWORD *)(v2 + 16) & 4) != 0 )
        {
          v91 = *(_QWORD *)(v2 + 24) & 0xFFFFFFFFFFFFFFF8LL;
          v96 = *(_QWORD *)(v2 + 8);
          v15 = v10(v11, v7, 0);
          v2 = sub_EEE9A0(48, *(_QWORD **)(*(_QWORD *)v3 + 248LL), 8u);
          *(_WORD *)v2 = *(_WORD *)v2 & 0xFE00 | 0x20;
          if ( unk_2CD7484 )
            sub_EE9B50(32);
          v16 = *(_BYTE *)(v2 + 1);
          *(_BYTE *)(v2 + 2) &= 0xF8u;
          *(_QWORD *)(v2 + 16) = v87 | 4;
          *(_QWORD *)(v2 + 8) = v96;
          *(_BYTE *)(v2 + 1) = v16 & 1 | (2 * (v14 & 3)) | (8 * (v13 & 7));
          *(_QWORD *)(v2 + 24) = v91;
        }
        else
        {
          v93 = *(_QWORD *)(v2 + 8);
          v15 = v10(v11, v7, 0);
          v2 = sub_EEE9A0(48, *(_QWORD **)(*(_QWORD *)v3 + 248LL), 8u);
          *(_WORD *)v2 = *(_WORD *)v2 & 0xFE00 | 0x20;
          if ( unk_2CD7484 )
            sub_EE9B50(32);
          *(_BYTE *)(v2 + 2) &= 0xF8u;
          *(_QWORD *)(v2 + 24) = 0;
          *(_BYTE *)(v2 + 1) = (8 * (v13 & 7)) | (2 * (v14 & 3)) | *(_BYTE *)(v2 + 1) & 1;
          *(_QWORD *)(v2 + 8) = v93;
          *(_QWORD *)(v2 + 16) = v87;
        }
        *(_DWORD *)(v2 + 32) = v9;
        *(_DWORD *)(v2 + 36) = 0;
        *(_QWORD *)(v2 + 40) = v15 & 0xFFFFFFFFFFFFFFF9LL;
        v17 = sub_B63A40(v2);
LABEL_21:
        *(_BYTE *)(v2 + 1) = (v17 << 6) | *(_BYTE *)(v2 + 1) & 0x3F;
        *(_BYTE *)(v2 + 2) = *(_BYTE *)(v2 + 2) & 0xF8 | (v17 >> 2) & 7;
      }
      break;
    case 28:
      v24 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))(a1 + 16))(
              *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
              *(_QWORD *)(a2 + 24),
              0);
      v25 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(a1 + 16))(
              *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
              *(_QWORD *)(a2 + 32),
              1);
      v26 = *(_QWORD *)(a2 + 8);
      v27 = v25;
      v28 = *(_QWORD *)(a2 + 48);
      v97 = *(_BYTE *)(a2 + 1);
      v88 = *(_QWORD *)(a2 + 40);
      v92 = *(_DWORD *)(a2 + 16);
      v2 = sub_EEE9A0(56, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 8u);
      *(_WORD *)v2 = *(_WORD *)v2 & 0xFE00 | 0x1C;
      if ( unk_2CD7484 )
        sub_EE9B50(28);
      *(_BYTE *)(v2 + 2) &= 0xF8u;
      v29 = *(_BYTE *)(v2 + 1);
      *(_QWORD *)(v2 + 8) = v26;
      *(_QWORD *)(v2 + 48) = v28;
      *(_QWORD *)(v2 + 24) = v24;
      *(_QWORD *)(v2 + 32) = v27;
      *(_BYTE *)(v2 + 1) = v97 & 0x3E | v29 & 1;
      *(_DWORD *)(v2 + 16) = v92;
      *(_QWORD *)(v2 + 40) = v88;
      v17 = sub_B63AF0(v2);
      goto LABEL_21;
    case 50:
      v30 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))(a1 + 16))(
              *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
              *(_QWORD *)(a2 + 16),
              0);
      v31 = *(_QWORD *)(a2 + 8);
      v32 = *(_BYTE *)(a2 + 36);
      v89 = v30;
      v33 = *(_DWORD *)(a2 + 32);
      v94 = *(_QWORD *)(a2 + 24);
      v34 = (*(_BYTE *)(a2 + 1) >> 1) & 3;
      v98 = *(_QWORD *)(a2 + 40);
      v101 = *(_QWORD *)(a2 + 48);
      v2 = sub_EEE9A0(56, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 8u);
      *(_WORD *)v2 = *(_WORD *)v2 & 0xFE00 | 0x32;
      if ( unk_2CD7484 )
        sub_EE9B50(50);
      v35 = *(_BYTE *)(v2 + 1);
      *(_QWORD *)(v2 + 8) = v31;
      *(_DWORD *)(v2 + 32) = v33;
      *(_BYTE *)(v2 + 36) = v32;
      *(_BYTE *)(v2 + 1) = v35 & 0xF9 | (2 * (v34 & 3));
      *(_QWORD *)(v2 + 16) = v89;
      *(_WORD *)(v2 + 1) &= 0xF807u;
      *(_QWORD *)(v2 + 24) = v94;
      *(_QWORD *)(v2 + 40) = v98;
      *(_QWORD *)(v2 + 48) = v101;
      v17 = sub_B63470(v2);
      goto LABEL_21;
    case 49:
      v36 = sub_1C15630(a1, *(_QWORD *)(a2 + 16));
      v37 = *(_QWORD *)(a1 + 16);
      ++*(_DWORD *)(a1 + 8);
      v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))v37)(*(_QWORD *)(v37 + 8), *(_QWORD *)(a2 + 24));
      v39 = *(_DWORD *)(a2 + 32);
      v40 = v38;
      v41 = *(_BYTE *)(a2 + 1);
      v90 = *(_QWORD *)(a2 + 8);
      v2 = sub_EEE9A0(40, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 8u);
      *(_WORD *)v2 = *(_WORD *)v2 & 0xFE00 | 0x31;
      if ( unk_2CD7484 )
        sub_EE9B50(49);
      v42 = *(_BYTE *)(v2 + 1);
      *(_BYTE *)(v2 + 2) &= 0xF8u;
      *(_DWORD *)(v2 + 32) = v39;
      *(_QWORD *)(v2 + 16) = v36;
      *(_QWORD *)(v2 + 24) = v40;
      *(_BYTE *)(v2 + 1) = v42 & 1 | v41 & 0x3E;
      *(_QWORD *)(v2 + 8) = v90;
      v17 = sub_B63480(v2);
      goto LABEL_21;
    case 20:
      v43 = sub_1C15630(a1, *(_QWORD *)(a2 + 24));
      v44 = *(_QWORD *)(a2 + 16);
      v45 = v43;
      v46 = (_WORD *)sub_EEE9A0(32, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 8u);
      v47 = *(_BYTE *)(v45 + 1);
      v48 = *(_QWORD *)(v45 + 8);
      v2 = (__int64)v46;
      *v46 = *v46 & 0xFE00 | 0x14;
      if ( unk_2CD7484 )
        sub_EE9B50(20);
      v49 = *(_BYTE *)(v2 + 1);
      *(_QWORD *)(v2 + 8) = v48;
      *(_BYTE *)(v2 + 2) &= 0xF0u;
      *(_QWORD *)(v2 + 16) = v44;
      *(_QWORD *)(v2 + 24) = v45;
      *(_BYTE *)(v2 + 1) = v47 & 0x3E | v49 & 1;
      v17 = sub_B62400(v2);
      goto LABEL_21;
    case 4:
      v50 = sub_1C15630(a1, *(_QWORD *)(a2 + 16));
      v51 = *(_DWORD *)(*(_QWORD *)a1 + 1952LL);
      v52 = *(unsigned int *)(*(_QWORD *)a1 + 1956LL);
      if ( __PAIR64__(v52, v51) == *(_QWORD *)(*(_QWORD *)a1 + 1944LL) )
      {
        v52 = 0;
        v51 = 0;
      }
      return sub_C09D40(
               *(_QWORD **)(*(_QWORD *)a1 + 248LL),
               v50,
               *(_BYTE *)(a2 + 2) >> 3,
               *(_QWORD *)(a2 + 8),
               (*(_BYTE *)(a2 + 1) >> 1) & 3,
               (*(_BYTE *)(a2 + 1) >> 3) & 7,
               *(_DWORD *)(a2 + 4),
               BYTE3(*(_QWORD *)a2) & 1,
               (v52 << 32) | v51);
    case 57:
      v53 = *(_DWORD *)(a2 + 16);
      v104 = 0x800000000LL;
      ptr = v108;
      v54 = (v53 >> 15) & 0x7FFF;
      v99 = v54;
      LOWORD(v53) = *(_WORD *)(a2 + 16);
      v103 = v105;
      v55 = v53 & 0x7FFF;
      v107 = 0x800000000LL;
      v56 = v55;
      if ( v55 > 8uLL )
      {
        sub_2237220(&v103, v105, v55, 8);
        if ( v56 > HIDWORD(v107) )
          sub_2237220(&ptr, v108, v56, 8);
        v54 = (*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF;
        v55 = *(_WORD *)(a2 + 16) & 0x7FFF;
        v56 = v55;
      }
      v18 = *(_BYTE *)(a2 + 19);
      v57 = (__int64 *)(a2 + 8LL * ((v18 & 0x40) != 0) + 32);
      v58 = 8LL * (unsigned __int16)(((v18 & 0x40) != 0) + v55) + 8LL * ((v18 & 0x40) == 0) + 32;
      v59 = &v57[v56];
      v60 = (__int64 *)(a2 + v58);
      if ( v57 == v59 )
      {
        v70 = (unsigned int)v107;
      }
      else
      {
        v61 = 0;
        v62 = v54;
        v63 = *v60;
        v64 = (unsigned __int64)((char *)v59 - (char *)v57 - 8) >> 3;
        v65 = *v57;
        v66 = v64;
        if ( !v54 )
          goto LABEL_51;
        while ( 1 )
        {
          v67 = (unsigned int)v104;
          v68 = (unsigned int)v104 + 1LL;
          if ( v68 > HIDWORD(v104) )
          {
            v102 = v65;
            sub_2237220(&v103, v105, v68, 8);
            v67 = (unsigned int)v104;
            v65 = v102;
          }
          *((_QWORD *)v103 + v67) = v65;
          LODWORD(v104) = v104 + 1;
          v69 = (unsigned int)v107 + 1LL;
          if ( v69 > HIDWORD(v107) )
            sub_2237220(&ptr, v108, v69, 8);
          *((_QWORD *)ptr + (unsigned int)v107) = v63;
          v70 = (unsigned int)(v107 + 1);
          v71 = v61 + 1;
          LODWORD(v107) = v107 + 1;
          if ( v66 == v61 )
            break;
          ++v61;
          v63 = v60[v71];
          v65 = v57[v71];
          if ( v62 == (_DWORD)v61 )
LABEL_51:
            v65 = sub_1C15630(a1, v65);
        }
        v2 = a2;
        v3 = a1;
        v18 = *(_BYTE *)(a2 + 19);
      }
      v19 = *(_DWORD *)(v2 + 4);
      v20 = *(_DWORD *)(v2 + 24);
      v21 = *(_QWORD **)(*(_QWORD *)v3 + 248LL);
      v22 = *(unsigned int *)(v2 + 20);
      if ( (v18 & 0x40) != 0 )
        v2 = sub_C0ADB0(
               v21,
               v19,
               *(_QWORD *)(v2 + 32),
               ptr,
               v70,
               v22,
               v103,
               (unsigned int)v104,
               v20,
               (*(_DWORD *)v2 & 0x4000) != 0,
               v99);
      else
        v2 = sub_C0AB00(
               v21,
               v19,
               *(_QWORD *)(v2 + 8LL * (*(_WORD *)(v2 + 16) & 0x7FFF) + 32),
               ptr,
               v70,
               v22,
               v103,
               (unsigned int)v104,
               v20,
               (*(_DWORD *)v2 & 0x4000) != 0,
               v99);
      if ( ptr != v108 )
        free(ptr);
      if ( v103 != v105 )
        free(v103);
      break;
    default:
      v72 = *(void **)(a2 + 24);
      v73 = *(void **)(a2 + 32);
      p_ptr = &ptr;
      v103 = v72;
      ptr = v73;
      if ( (*(_BYTE *)(v2 + 2) & 8) != 0 )
      {
        v73 = v72;
        p_ptr = &v103;
      }
      v75 = sub_1C15630(a1, v73);
      v76 = *(_DWORD *)(v2 + 40);
      v77 = *(_BYTE *)(v2 + 2);
      v78 = *(_QWORD *)(v2 + 16);
      v79 = *(_DWORD *)(v2 + 44);
      *p_ptr = (void *)v75;
      v80 = *(_BYTE *)(v75 + 1);
      v81 = (v77 & 8) != 0;
      v95 = *(_QWORD *)(v75 + 8);
      v82 = (_WORD *)sub_EEE9A0(48, *(_QWORD **)(*(_QWORD *)v3 + 248LL), 8u);
      v83 = ptr;
      v84 = v103;
      v2 = (__int64)v82;
      *v82 = *v82 & 0xFE00 | 0x4D;
      if ( unk_2CD7484 )
      {
        v100 = v83;
        sub_EE9B50(77);
        v83 = v100;
      }
      v85 = *(_BYTE *)(v2 + 1);
      v86 = *(_BYTE *)(v2 + 2);
      *(_DWORD *)(v2 + 44) = v79;
      *(_QWORD *)(v2 + 16) = v78;
      *(_QWORD *)(v2 + 24) = v84;
      *(_BYTE *)(v2 + 1) = v80 & 0x3E | v85 & 1;
      *(_QWORD *)(v2 + 32) = v83;
      *(_QWORD *)(v2 + 8) = v95;
      *(_DWORD *)(v2 + 40) = v76;
      *(_BYTE *)(v2 + 2) = v86 & 0xF0 | (8 * v81);
      v17 = sub_B62F20(v2);
      goto LABEL_21;
  }
  return v2;
}
