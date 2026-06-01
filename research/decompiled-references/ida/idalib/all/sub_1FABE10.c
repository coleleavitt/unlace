void __fastcall sub_1FABE10(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v8; // al
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rbx
  __int64 *v23; // r12
  __int64 v24; // r13
  __int64 v25; // rbp
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  __int64 *v33; // rbp
  __int64 v34; // r13
  void **v35; // rbx
  void *v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rax
  unsigned __int8 v40; // al
  __int64 v41; // rsi
  __int64 *v42; // rdi
  unsigned __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rax
  __int64 (__fastcall *v49)(__int64); // rdx
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 *v52; // r12
  __int64 *v53; // r13
  __int64 v54; // rsi
  __int64 *v55; // r14
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 *v59; // r13
  __int64 *v60; // r12
  __int64 v61; // rsi
  __int64 *v62; // r14
  __int64 v63; // rsi
  __int64 v64; // r15
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 *v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rbp
  __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 (__fastcall *v76)(_QWORD *); // rdx
  __int64 v77; // rax
  __int64 v78; // rdx
  unsigned __int8 v79; // al
  unsigned __int64 v80; // rax
  __int64 *v81; // rax
  __int64 v82; // r12
  __int64 v83; // rdi
  unsigned __int64 v84; // rdx
  __int64 *v85; // r14
  __int64 v86; // r13
  __int64 v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // r13
  unsigned __int64 v93; // rsi
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  __int64 (__fastcall *v100)(__int64); // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  unsigned __int64 v103; // r12
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  unsigned __int64 v108; // r13
  __int64 *v109; // rax
  __int64 v110; // rdi
  __int64 v111; // r13
  __int64 v112; // rax
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 *v115; // rbp
  __int64 v116; // r12
  __int64 v117; // r15
  __int64 v118; // rbx
  unsigned int v119; // edx
  void *v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  void *v123; // rdx
  __int64 v124; // rsi
  unsigned int v125; // edx
  void *v126; // rcx
  __int64 v127; // rax
  __int64 v128; // r12
  __int64 v129; // rax
  __int64 v130; // rdi
  __int64 v131; // [rsp-10h] [rbp-98h]
  void *v132; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v133; // [rsp+18h] [rbp-70h]
  void *v134; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v135; // [rsp+28h] [rbp-60h]
  void *v136; // [rsp+30h] [rbp-58h] BYREF
  void *v137; // [rsp+38h] [rbp-50h]
  void *v138; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v139; // [rsp+48h] [rbp-40h]

  switch ( *(_BYTE *)(a2 + 16) )
  {
    case 0:
      goto LABEL_17;
    case 1:
    case 7:
    case 0xB:
    case 0xE:
    case 0x22:
    case 0x28:
    case 0x2A:
    case 0x2C:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 32), (_QWORD *)(*a1)[2], a5, a6);
      return;
    case 2:
    case 3:
      v8 = *(_BYTE *)(a2 + 19);
      v9 = *(_QWORD *)(a2 + 40);
      if ( (v8 & 2) != 0 )
      {
        LODWORD(v137) = *(_DWORD *)(v9 + 8);
        if ( (unsigned int)v137 > 0x40 )
          sub_2205510(&v136);
        else
          v136 = *(void **)v9;
      }
      else
      {
        LODWORD(v137) = 8 * ((v8 >> 2) & 0x1F);
        if ( (int)v137 > 64 )
          sub_2205470(&v136, v9, 0);
        else
          v136 = (void *)v9;
      }
      sub_1F70270((__int64)*a1, (__int64)&v136);
      v10 = 0;
      if ( (*(_BYTE *)(a2 + 19) & 2) != 0 )
        v10 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
      sub_183F100((__int64)(*a1 + 3), v10);
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 32), (_QWORD *)(*a1)[2], v11, v12);
      sub_9B9C90((*a1)[2], (*(_WORD *)(a2 + 18) >> 6) & 7);
      sub_9B9C90((*a1)[2], (*(_BYTE *)(a2 + 18) >> 3) & 7);
      if ( (unsigned int)v137 > 0x40 )
      {
        if ( v136 )
          operator delete[](v136);
      }
      return;
    case 4:
    case 6:
      sub_183F100((__int64)(*a1 + 3), *(_QWORD *)(a2 + 40));
      goto LABEL_5;
    case 5:
LABEL_5:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 32), (_QWORD *)(*a1)[2], a5, a6);
      sub_9B9C90((*a1)[2], (*(_WORD *)(a2 + 18) >> 6) & 7);
      sub_9B9C90((*a1)[2], (*(_BYTE *)(a2 + 18) >> 3) & 7);
      return;
    case 8:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 40), (_QWORD *)(*a1)[2], a5, a6);
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 48), (_QWORD *)(*a1)[2], v27, v28);
      sub_9B9C90((*a1)[2], *(_WORD *)(a2 + 18) >> 3);
      sub_1F9A7E0(*a1, *(_QWORD *)(a2 + 32));
      return;
    case 9:
      sub_1F9A7E0(*a1, *(_QWORD *)(a2 + 40));
      goto LABEL_47;
    case 0xA:
      sub_9B9C90((*a1)[2], *(_BYTE *)(a2 + 32) & 1);
      sub_9B9C90((*a1)[2], (*(_DWORD *)(a2 + 32) >> 1) & 0xFFFFFF);
      return;
    case 0xC:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 32), (_QWORD *)(*a1)[2], a5, a6);
      sub_183F100((__int64)(*a1 + 3), *(_QWORD *)(a2 + 56));
      sub_9B9C90((*a1)[2], (unsigned __int8)*(_WORD *)(a2 + 18) >> 7);
      sub_9B9C90((*a1)[2], *(_BYTE *)(a2 + 19) & 1);
      v32 = *(_QWORD *)(a2 + 48);
      v33 = *a1;
      v34 = *(_QWORD *)(a2 + 40) + 8 * v32;
      v35 = *(void ***)(a2 + 40);
      sub_9B9C90((*a1)[2], (unsigned int)v32);
      while ( (void **)v34 != v35 )
      {
        v36 = *v35++;
        v136 = v36;
        v37 = sub_F5D790(&v136);
        v38 = v33[2];
        v39 = sub_1F92240(v33[1], v37);
        sub_9B9C90(v38, v39);
        v40 = sub_F5D780((__int64 *)&v136);
        sub_9B9C90(v33[2], v40);
      }
      return;
    case 0xD:
      sub_9B9C90((*a1)[2], (*(_WORD *)(a2 + 18) >> 3) & 0x1FF);
      return;
    case 0xF:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 32), (_QWORD *)(*a1)[2], a5, a6);
      sub_183F100((__int64)(*a1 + 3), *(_QWORD *)(a2 + 24));
      return;
    case 0x10:
      v81 = *a1;
      v82 = a2 + 48;
      v83 = (*a1)[1];
      v84 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v84 )
        v84 = *(_QWORD *)(a2 + 24);
      sub_1F85840(v83, *v81, v84, (_QWORD *)v81[2], a5, a6);
      sub_9B9C90((*a1)[2], (*(_BYTE *)(a2 + 18) >> 3) & 3);
      sub_1F952B0((__int64)*a1, *(_QWORD *)(a2 + 32));
      v85 = *a1;
      v86 = *(unsigned int *)(a2 + 20);
      v87 = v86;
      sub_9B9C90((*a1)[2], v86);
      v92 = v82 + 24 * v86;
      while ( v92 != v82 )
      {
        v131 = *(_QWORD *)(v82 + 16);
        v82 += 24;
        sub_1F992F0(v85, v87, v88, v89, v90, v91, *(_QWORD *)(v82 - 24), *(void **)(v82 - 16), v131);
      }
      v51 = 0;
      if ( (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        v51 = 2;
        if ( (*(_BYTE *)(a2 + 17) & 1) == 0 )
          v51 = (*(_BYTE *)(a2 + 17) & 4) != 0;
      }
      goto LABEL_44;
    case 0x11:
      sub_1F99920(a1, a2);
      return;
    case 0x12:
    case 0x15:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 40), (_QWORD *)(*a1)[2], a5, a6);
      sub_183F100((__int64)(*a1 + 3), *(_QWORD *)(a2 + 32));
      sub_1F6F570((_QWORD *)(*a1)[1], *(_DWORD *)(a2 + 48), (*a1)[2]);
      return;
    case 0x13:
      v79 = sub_F57B40(a2);
      sub_9B9C90((*a1)[2], v79);
      v80 = sub_F57B50(a2);
      sub_183F100((__int64)(*a1 + 3), v80);
      return;
    case 0x14:
      sub_9B9C90((*a1)[2], (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3));
      sub_1F98300(*a1, *(_QWORD *)(a2 + 32));
      v71 = *a1;
      v72 = *(_QWORD *)(a2 + 40);
      v73 = (*a1)[2];
      goto LABEL_59;
    case 0x16:
      v103 = *(_QWORD *)(a2 + 40);
      sub_1F98300(*a1, *(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF8LL);
      v108 = -(__int64)v103;
      v109 = *a1;
      if ( v103 > 0xFFFFFFFFFFFFFFD2LL )
      {
        v128 = v109[2];
        v129 = sub_1F80CA0(v109[1], 0, v104, v105, v106, v107);
        v130 = v128;
        v103 = 0;
        sub_9B9C90(v130, v129);
        if ( v108 < 0x2E )
          v103 = v108;
      }
      else
      {
        v110 = v109[1];
        v111 = v109[2];
        if ( v103 )
        {
          v112 = sub_1F80CA0(v110, *(_QWORD *)(a2 + 40), v104, v105, v106, v107);
          sub_9B9C90(v111, v112);
          goto LABEL_84;
        }
        v127 = sub_1F80CA0(v110, 0, v104, v105, v106, v107);
        sub_9B9C90(v111, v127);
      }
      sub_9B9C90((*a1)[2], v103);
LABEL_84:
      sub_9B9C90((*a1)[2], (*(__int64 *)(a2 + 32) >> 2) & 1);
      sub_9B9C90((*a1)[2], (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3));
      sub_1F99560(*a1, a2 + 48, *(unsigned int *)(a2 + 20));
      return;
    case 0x17:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 32), (_QWORD *)(*a1)[2], a5, a6);
      sub_183F100((__int64)(*a1 + 3), *(_QWORD *)(a2 + 40));
      sub_1F6F570((_QWORD *)(*a1)[1], *(_DWORD *)(a2 + 48), (*a1)[2]);
      goto LABEL_43;
    case 0x18:
      sub_9B9C90((*a1)[2], (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3));
      sub_1F98300(*a1, *(_QWORD *)(a2 + 32));
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 40), (_QWORD *)(*a1)[2], v113, v114);
      if ( (*(_BYTE *)(a2 + 19) & 8) != 0 )
      {
        v41 = *(_QWORD *)(a2 + 48);
        v42 = *a1;
        if ( !v41 )
          v41 = 0;
      }
      else
      {
        v42 = *a1;
        v41 = 0;
      }
      goto LABEL_37;
    case 0x19:
      sub_1F85870(a1, a2, a3, a4, a5, a6);
      return;
    case 0x1A:
      sub_1F95440(a1, a2);
      return;
    case 0x1B:
      sub_9B9C90((*a1)[2], *(unsigned __int8 *)(a2 + 48));
      sub_9B9C90((*a1)[2], *(_BYTE *)(a2 + 49) & 1);
      sub_9B9C90((*a1)[2], (*(_BYTE *)(a2 + 49) & 2) != 0);
LABEL_17:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 32), (_QWORD *)(*a1)[2], a5, a6);
      v15 = *(_QWORD *)(a2 + 40);
      goto LABEL_18;
    case 0x1C:
      sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 32));
      sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 36));
      sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 40));
      v115 = *a1;
      v116 = a2 + 64 + 32LL * *(_QWORD *)(a2 + 48);
      sub_9B9C90((*a1)[2], (unsigned int)*(_QWORD *)(a2 + 48));
      if ( a2 + 64 == v116 )
        return;
      v117 = a2 + 80;
      break;
    case 0x1D:
      v75 = sub_F61460(a2, a2, a3, a4, a5, a6);
      v76 = *(__int64 (__fastcall **)(_QWORD *))(*v75 + 32LL);
      if ( (char *)v76 == (char *)sub_A01140 )
        v77 = sub_B70A60((__int64)v75);
      else
        v77 = v76(v75);
      sub_1F952B0((__int64)*a1, v77);
      goto LABEL_47;
    case 0x1E:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 24), (_QWORD *)(*a1)[2], a5, a6);
      v71 = *a1;
      v72 = *(_QWORD *)(a2 + 32);
      v73 = (*a1)[2];
LABEL_59:
      v74 = sub_1F80CA0(v71[1], v72, v67, v68, v69, v70);
      sub_9B9C90(v73, v74);
      return;
    case 0x1F:
      sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 40));
      sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 44));
      goto LABEL_47;
    case 0x20:
      sub_183F100((__int64)(*a1 + 3), *(_QWORD *)(a2 + 40));
      sub_183F100((__int64)(*a1 + 3), *(_QWORD *)(a2 + 48));
      sub_1F6F570((_QWORD *)(*a1)[1], *(_DWORD *)(a2 + 56), (*a1)[2]);
      goto LABEL_47;
    case 0x21:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 32), (_QWORD *)(*a1)[2], a5, a6);
      sub_1F98300(*a1, *(_QWORD *)(a2 + 40));
      v66 = sub_F61C10(a2);
      sub_1F952B0((__int64)*a1, (__int64)v66);
      return;
    case 0x23:
      v52 = (__int64 *)(a2 + 48);
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 24), (_QWORD *)(*a1)[2], a5, a6);
      v53 = *a1;
      v54 = (*(_WORD *)(a2 + 18) >> 3) & 0x7F;
      v55 = &v52[v54];
      sub_9B9C90((*a1)[2], v54);
      while ( v55 != v52 )
      {
        v58 = *v52++;
        sub_1F85840(v53[1], *v53, v58, (_QWORD *)v53[2], v56, v57);
      }
      v59 = *a1;
      v60 = (__int64 *)(a2 + (*(_WORD *)(a2 + 18) & 0x3F8) + 48);
      v61 = *(_BYTE *)(a2 + 19) >> 2;
      v62 = &v60[v61];
      sub_9B9C90((*a1)[2], v61);
      while ( v62 != v60 )
      {
        v63 = *v60++;
        v64 = v59[2];
        v65 = sub_1F92240(v59[1], v63);
        sub_9B9C90(v64, v65);
      }
      sub_9B9C90((*a1)[2], *(_DWORD *)(a2 + 20) & 1);
      return;
    case 0x24:
      v99 = (_QWORD *)sub_F62610(a2, a2, a3, a4, a5, a6);
      v100 = *(__int64 (__fastcall **)(__int64))(*v99 + 32LL);
      if ( v100 == sub_A55E60 )
        v41 = v99[12];
      else
        v41 = v100((__int64)v99);
      goto LABEL_36;
    case 0x25:
      v22 = (__int64 *)(a2 + 48);
      sub_1F952B0((__int64)*a1, *(_QWORD *)(a2 + 40));
      v23 = *a1;
      v24 = *(_BYTE *)(a2 + 32) & 0x3F;
      v25 = a2 + 48 + 8 * v24;
      sub_9B9C90((*a1)[2], v24);
      if ( a2 + 48 != v25 )
      {
        do
        {
          v26 = *v22++;
          sub_1F952B0((__int64)v23, v26);
        }
        while ( (__int64 *)v25 != v22 );
      }
      return;
    case 0x26:
    case 0x3A:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 32), (_QWORD *)(*a1)[2], a5, a6);
      sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 20));
      return;
    case 0x27:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 32), (_QWORD *)(*a1)[2], a5, a6);
      sub_183F100((__int64)(*a1 + 3), *(_QWORD *)(a2 + 40));
      sub_9B9C90((*a1)[2], (unsigned __int64)*(char *)(a2 + 51) >> 63);
      return;
    case 0x29:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 32), (_QWORD *)(*a1)[2], a5, a6);
      sub_9B9C90((*a1)[2], *(unsigned __int8 *)(a2 + 40));
      return;
    case 0x2B:
      sub_9B9C90((*a1)[2], (*(_WORD *)(a2 + 18) & 8) != 0);
LABEL_47:
      v15 = *(_QWORD *)(a2 + 32);
      goto LABEL_18;
    case 0x2D:
      v16 = sub_F5E4D0(a2);
      sub_1F952B0((__int64)*a1, v16);
      sub_9B9C90((*a1)[2], *(unsigned __int16 *)(a2 + 20));
      v17 = sub_F5E4E0(a2);
      sub_9B9C90((*a1)[2], v17);
      sub_F5E520((__int64)&v136, a2);
      sub_1F992F0(*a1, a2, v18, v19, v20, v21, (__int64)v136, v137, (__int64)v138);
      return;
    case 0x2E:
      if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
        v78 = *(_QWORD *)(a2 + 48);
      else
        v78 = *(_QWORD *)(a2 + 8);
      sub_1F85840((*a1)[1], **a1, v78, (_QWORD *)(*a1)[2], a5, a6);
      sub_1F952B0((__int64)*a1, *(_QWORD *)(a2 + 32));
      sub_9B9C90((*a1)[2], *(_WORD *)(a2 + 20) & 0x7FFF);
      sub_9B9C90((*a1)[2], *(_WORD *)(a2 + 22) & 0x7FFF);
      sub_9B9C90((*a1)[2], *(_BYTE *)(a2 + 21) >> 7);
      return;
    case 0x2F:
      v43 = ((unsigned __int64)*(unsigned __int8 *)(a2 + 17) >> 2) & 1;
      sub_9B9C90((*a1)[2], v43);
      v48 = sub_F60F10(a2, v43, v44, v45, v46, v47);
      v49 = *(__int64 (__fastcall **)(__int64))(*v48 + 32LL);
      if ( v49 == sub_B708E0 )
        v50 = sub_B70A60((__int64)v48);
      else
        v50 = v49((__int64)v48);
      goto LABEL_41;
    case 0x30:
      v93 = ((unsigned __int64)*(unsigned __int8 *)(a2 + 17) >> 2) & 1;
      sub_9B9C90((*a1)[2], v93);
      v98 = sub_F60F10(a2, v93, v94, v95, v96, v97);
      v50 = (*(__int64 (__fastcall **)(_QWORD *))(*v98 + 32LL))(v98);
LABEL_41:
      sub_1F952B0((__int64)*a1, v50);
      return;
    case 0x31:
      sub_1F995C0(*a1, *(_QWORD *)(a2 + 32));
      sub_1F99560(*a1, a2 + 48, *(unsigned int *)(a2 + 20));
      v15 = 0;
      if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(a2 + 8) )
      {
        if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
          v15 = sub_F5E8A0(a2);
        else
          v15 = *(_QWORD *)(a2 + 8);
      }
LABEL_18:
      sub_1F85840((*a1)[1], **a1, v15, (_QWORD *)(*a1)[2], v13, v14);
      return;
    case 0x32:
      sub_9B9C90((*a1)[2], *(_WORD *)(a2 + 20) & 0x7FFF);
      sub_9B9C90((*a1)[2], *(unsigned __int16 *)(a2 + 22));
      sub_9B9C90((*a1)[2], (unsigned __int8)((unsigned __int16)WORD2(*(_QWORD *)(a2 + 16)) >> 8) >> 7);
      sub_1F952B0((__int64)*a1, *(_QWORD *)(a2 + 32));
      return;
    case 0x33:
      sub_183F100((__int64)(*a1 + 3), *(_QWORD *)(a2 + 24));
      goto LABEL_21;
    case 0x34:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 24), (_QWORD *)(*a1)[2], a5, a6);
LABEL_21:
      sub_9B9C90((*a1)[2], (*(_BYTE *)(a2 + 18) & 8) != 0);
      return;
    case 0x35:
      sub_1F952B0((__int64)*a1, *(_QWORD *)(a2 + 32));
      v29 = sub_F5DAC0(a2);
      goto LABEL_31;
    case 0x36:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 32), (_QWORD *)(*a1)[2], a5, a6);
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 40), (_QWORD *)(*a1)[2], v101, v102);
      sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 48));
      return;
    case 0x37:
      v41 = *(_QWORD *)(a2 + 24);
LABEL_36:
      v42 = *a1;
LABEL_37:
      sub_1F952B0((__int64)v42, v41);
      return;
    case 0x38:
      sub_1F952B0((__int64)*a1, *(_QWORD *)(a2 + 32));
      v29 = sub_F5DBF0(a2);
LABEL_31:
      sub_1F85840((*a1)[1], **a1, v29, (_QWORD *)(*a1)[2], v30, v31);
      return;
    case 0x39:
      sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 32), (_QWORD *)(*a1)[2], a5, a6);
      sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 20));
LABEL_43:
      v51 = (*(_BYTE *)(a2 + 18) >> 3) & 0xF;
LABEL_44:
      sub_9B9C90((*a1)[2], v51);
      return;
  }
  do
  {
    v123 = *(void **)(v117 - 8);
    v124 = *(unsigned __int8 *)(v117 - 16);
    v139 = 1;
    v138 = nullptr;
    v137 = v123;
    v125 = *(_DWORD *)(v117 + 8);
    LOBYTE(v136) = v124;
    if ( v125 <= 0x40 )
    {
      v126 = *(void **)v117;
      v139 = v125;
      v138 = v126;
    }
    else
    {
      sub_22056A0(&v138, v117);
      v124 = (unsigned __int8)v136;
    }
    v133 = 1;
    v132 = nullptr;
    if ( (v124 & 0xFD) != 1 )
    {
      v118 = 0;
LABEL_112:
      if ( (_BYTE)v124 != 2 )
        goto LABEL_101;
      goto LABEL_98;
    }
    v118 = (__int64)v137;
    if ( (_BYTE)v124 != 1 )
      goto LABEL_112;
LABEL_98:
    v119 = v139;
    v135 = v139;
    if ( v139 > 0x40 )
    {
      sub_2205510(&v134);
      if ( v133 > 0x40 && v132 )
        operator delete[](v132);
      v120 = v134;
      v119 = v135;
      v124 = (unsigned __int8)v136;
    }
    else
    {
      v120 = v138;
    }
    v132 = v120;
    v133 = v119;
LABEL_101:
    sub_9B9C90(v115[2], v124);
    sub_1F85840(v115[1], *v115, v118, (_QWORD *)v115[2], v121, v122);
    sub_1F70270((__int64)v115, (__int64)&v132);
    if ( v133 > 0x40 && v132 )
      operator delete[](v132);
    if ( v139 > 0x40 && v138 )
      operator delete[](v138);
    v117 += 32;
  }
  while ( v116 + 16 != v117 );
}
