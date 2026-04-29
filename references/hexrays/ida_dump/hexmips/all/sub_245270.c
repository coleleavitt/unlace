__int64 __fastcall sub_245270(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, _BYTE *a5, char a6)
{
  __int64 *v6; // r15
  __int64 v8; // r12
  __int64 v10; // rax
  __int64 v11; // r8
  char v12; // al
  __int64 v13; // r9
  unsigned int v14; // ecx
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rax
  int v27; // r15d
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rax
  unsigned int v31; // r8d
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r10
  __int64 *v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // r10
  __int64 v45; // rdx
  __int64 v46; // r13
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // r13
  __int64 v50; // rsi
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // rax
  int v55; // ecx
  int v56; // ecx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rdx
  _QWORD *v66; // rax
  int v67; // ecx
  int v68; // ecx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 *v77; // rax
  __int64 v78; // rdx
  unsigned __int64 v79; // rax
  int v80; // eax
  int tinfo_size; // eax
  int v82; // edx
  unsigned int v83; // eax
  unsigned __int64 v84; // rsi
  __int64 v85; // rax
  char v86; // al
  __int64 v87; // [rsp-10h] [rbp-B0h]
  __int64 v88; // [rsp-10h] [rbp-B0h]
  __int64 v89; // [rsp-8h] [rbp-A8h]
  __int64 v90; // [rsp+8h] [rbp-98h]
  __int64 *v91; // [rsp+8h] [rbp-98h]
  unsigned int tinfo_property; // [rsp+10h] [rbp-90h]
  __int64 v93; // [rsp+10h] [rbp-90h]
  __int64 v94; // [rsp+10h] [rbp-90h]
  char v95; // [rsp+1Ch] [rbp-84h]
  unsigned __int8 *v96; // [rsp+20h] [rbp-80h]
  __int64 *v97; // [rsp+28h] [rbp-78h]
  const char *v100; // [rsp+38h] [rbp-68h]
  __int64 v101; // [rsp+38h] [rbp-68h]
  __int64 v102; // [rsp+40h] [rbp-60h] BYREF
  __int64 *v103; // [rsp+48h] [rbp-58h] BYREF
  const char *v104; // [rsp+50h] [rbp-50h] BYREF
  __int128 v105; // [rsp+58h] [rbp-48h]
  unsigned __int64 v106; // [rsp+68h] [rbp-38h]

  v6 = a2;
  v8 = a1;
  v106 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 176);
  v102 = 0;
  v96 = *(unsigned __int8 **)(v10 + 8);
  v97 = *((__int64 **)v96 + 188);
  copy_tinfo_t(&v102, a5);
  if ( !(_BYTE)v102 )
    sub_23A880(&v102, (__int64)v96, (unsigned __int64)a2, a3, *(_DWORD *)(a3 + 4), 0);
  v12 = a6 & 1 | 8;
  if ( (a6 & 4) == 0 )
    v12 = a6 & 1;
  v13 = a6 & 4;
  v95 = v12;
  switch ( *(_BYTE *)a3 )
  {
    case 0:
    case 7:
    case 8:
      if ( !under_debugger )
        sub_37E160(50392);
      goto LABEL_97;
    case 1:
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, __int64, _QWORD))(*v97 + 264))(
             v97,
             *(unsigned int *)(a3 + 8),
             a6 & 1,
             a6 & 4,
             v11,
             a6 & 4) )
      {
        v14 = *(_DWORD *)(a3 + 4);
        v15 = *(_DWORD *)(a3 + 8);
        v104 = nullptr;
        v105 = 0;
        sub_12F6F0(v97, (__int64 *)&v104, v15, v14);
        qstrupr(v104, &v104, v16, v17, v18);
        v100 = v104;
        sub_327340(&v103, v97, *(unsigned int *)(a3 + 4));
        a2 = (__int64 *)&v103;
        v19 = sub_23DE40(1, (__int64)&v103, (__int64)"__%s__", v100);
        clear_tinfo_t(&v103);
        a1 = (__int64)v104;
        if ( v104 )
        {
          *(_QWORD *)&v105 = 0;
          qfree(v104);
        }
LABEL_60:
        v33 = *(_DWORD *)(a3 + 4);
        goto LABEL_23;
      }
      if ( !under_debugger )
        sub_37E160(50391);
      goto LABEL_97;
    case 2:
      v22 = j__qalloc_or_throw(64);
      *(_QWORD *)v22 = -1;
      v19 = v22;
      *(_QWORD *)(v22 + 8) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v22 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v22 + 40) = 0;
      *(_QWORD *)(v22 + 48) = 0;
      *(_DWORD *)(v22 + 56) = 0;
      *(_OWORD *)(v22 + 24) = 0;
      v23 = **(_QWORD **)(a3 + 8);
      *(_DWORD *)(v19 + 8) = 61;
      *(_QWORD *)v19 = v23;
      v24 = j__qalloc_or_throw(48);
      v25 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
      *(_QWORD *)v24 = 0;
      *(_DWORD *)(v24 + 8) = 0;
      *(_WORD *)(v24 + 12) = (unsigned __int8)v25;
      *(_WORD *)(v24 + 14) = 0;
      *(_QWORD *)(v24 + 16) = 0;
      *(_QWORD *)(v24 + 40) = 0;
      *(_OWORD *)(v24 + 24) = 0;
      *(_QWORD *)(v19 + 24) = v24;
      tinfo_property = get_tinfo_property(*a4, 3);
      v26 = sub_325C90(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL), *(unsigned int *)(a3 + 4), tinfo_property != 2);
      v27 = *(_DWORD *)(a3 + 4);
      v28 = v26;
      if ( (a6 & 2) != 0 )
      {
        v29 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 328) + 130LL);
        if ( v27 < (int)v29 && tinfo_property == 1 )
        {
          v90 = v26;
          v30 = sub_325C90(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 24LL), v29, 1);
          v28 = v90;
          if ( v30 != v90 )
          {
            v27 = v29;
            v28 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
          }
        }
      }
      if ( v27 < *((_DWORD *)v97 + 22) )
      {
        v101 = v28;
        v83 = sub_118890(v27);
        v28 = v101;
        v31 = v83;
      }
      else
      {
        v31 = v27;
      }
      sub_23C1A0(v19, *(_QWORD *)(a1 + 328), *(_QWORD *)(a1 + 176), v28, v31, tinfo_property);
      a2 = *(__int64 **)(v19 + 48);
      a1 = 0;
      if ( v27 == (unsigned int)get_tinfo_size(0, a2, 0) )
        goto LABEL_60;
      v103 = nullptr;
      copy_tinfo_t(&v103, a4);
      if ( !*(_BYTE *)a4 )
      {
        sub_327500(&v104, v97, (unsigned int)v27, 2);
        copy_tinfo_t(&v103, &v104);
        clear_tinfo_t(&v104);
      }
      v32 = sub_2405F0(v19, &v103);
      a2 = *(__int64 **)(v32 + 48);
      v19 = v32;
      if ( v27 != (unsigned int)get_tinfo_size(0, a2, 0) )
      {
        a2 = (__int64 *)v19;
        sub_243A00(*(_QWORD *)(v8 + 328), v19, &v103);
      }
      goto LABEL_21;
    case 3:
      v34 = j__qalloc_or_throw(64);
      *(_QWORD *)v34 = -1;
      v19 = v34;
      *(_QWORD *)(v34 + 8) = 0xFFFFFFFF0000003FLL;
      *(_QWORD *)(v34 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v34 + 40) = 0;
      *(_QWORD *)(v34 + 48) = 0;
      *(_DWORD *)(v34 + 56) = 0;
      *(_OWORD *)(v34 + 24) = 0;
      *(_QWORD *)(v34 + 24) = qstrdup(*(_QWORD *)(a3 + 8));
      v35 = strlen(*(const char **)(a3 + 8));
      LODWORD(v105) = 0;
      v103 = (_QWORD *)(&dword_30 + 2);
      DWORD1(v105) = v35 + 1;
      v104 = nullptr;
      copy_tinfo_t(&v104, &v103);
      a2 = (_QWORD *)(byte_9 + 2);
      create_tinfo(v19 + 48, 11, 11, &v104);
      clear_tinfo_t(&v104);
      a1 = (__int64)&v103;
      clear_tinfo_t(&v103);
      v33 = *(_DWORD *)(a3 + 4);
      goto LABEL_23;
    case 4:
      a2 = *(__int64 **)(a3 + 8);
      v19 = sub_24A5F0(a1, a2, &v102, 0, v11, a6 & 4);
      if ( v19 )
        goto LABEL_60;
      if ( !under_debugger )
        sub_37E160(50393);
      goto LABEL_97;
    case 5:
      v104 = nullptr;
      copy_tinfo_t(&v104, &v102);
      a2 = *(__int64 **)(*(_QWORD *)(a3 + 8) + 8LL);
      a1 = (__int64)&v104;
      v19 = sub_2450F0(v96, (__int64)a2, *(_DWORD *)(a3 + 4), &v104);
      clear_tinfo_t(&v104);
      v33 = *(_DWORD *)(a3 + 4);
      goto LABEL_23;
    case 6:
      v37 = j__qalloc_or_throw(64);
      *(_QWORD *)v37 = -1;
      *(_QWORD *)(v37 + 40) = 0;
      *(_QWORD *)(v37 + 8) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v37 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v37 + 48) = 0;
      *(_DWORD *)(v37 + 56) = 0;
      *(_OWORD *)(v37 + 24) = 0;
      v38 = sub_243510(*(_QWORD *)(a1 + 328), (__int64)a2, v37, *(_QWORD *)(a3 + 8), &v102, *(_DWORD *)(a3 + 4), v95);
      goto LABEL_30;
    case 9:
      v39 = j__qalloc_or_throw(64);
      *(_QWORD *)v39 = -1;
      v40 = v39;
      *(_QWORD *)(v39 + 12) = -1;
      *(_QWORD *)(v39 + 48) = 0;
      *(_DWORD *)(v39 + 56) = 0;
      *(_OWORD *)(v39 + 32) = 0;
      if ( (a6 & 1) == 0 )
        *(_QWORD *)v39 = a2;
      *(_DWORD *)(v39 + 8) = 65;
      *(_QWORD *)(v39 + 24) = v96;
      *(_DWORD *)(v39 + 32) = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
      v41 = *(__int64 **)(a3 + 8);
      v42 = *v41;
      v43 = *((int *)v41 + 4);
      if ( *(_QWORD *)(v42 + 440) < v43 )
        ((void (__noreturn *)(void))sub_239B00)();
      v93 = v40;
      copy_tinfo_t(v40 + 48, *(_QWORD *)(v42 + 432) + 104 * v43 + 80);
      v44 = v93;
      if ( (*(_BYTE *)(a3 + 1) & 0x10) != 0 )
        *(_DWORD *)(v93 + 56) |= 0x40u;
      if ( *a5 && (a6 & 8) == 0 )
      {
        sub_23A880(&v102, (__int64)v96, (unsigned __int64)a2, a3, *(_DWORD *)(a3 + 4), 0);
        v44 = v93;
      }
      v38 = sub_242E20(
              *(_QWORD *)(a1 + 328),
              (__int64)a2,
              v44,
              *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL),
              &v102,
              *(_DWORD *)(a3 + 4),
              v95);
LABEL_30:
      v19 = v38;
      a1 = v87;
      v33 = *(_DWORD *)(a3 + 4);
      v21 = v89;
      goto LABEL_23;
    case 0xA:
      v45 = *(_QWORD *)(a3 + 8);
      if ( *(_BYTE *)v45 != 6 )
        goto LABEL_41;
      a1 = *(_QWORD *)(a1 + 328);
      v84 = *(_QWORD *)(v45 + 8);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) < v84 )
        goto LABEL_82;
      v94 = *(_QWORD *)(a3 + 8);
      v86 = is_mapped(*(_QWORD *)(v45 + 8));
      v13 = a6 & 4;
      v45 = v94;
      if ( v86 )
      {
LABEL_41:
        v104 = nullptr;
        v103 = nullptr;
        v46 = sub_245270(v8, v6, v45, &v103, &v104, v13);
        clear_tinfo_t(&v103);
        clear_tinfo_t(&v104);
        a1 = (__int64)v97;
        v19 = sub_242C90((__int64)v97, v46);
      }
      else
      {
        v84 = *(_QWORD *)(v94 + 8);
        a1 = *(_QWORD *)(v8 + 328);
LABEL_82:
        v85 = sub_23C6D0(a1, v84, 0, -1, 0, 2u, *(_DWORD *)(*((_QWORD *)v96 + 188) + 80LL));
        v20 = v88;
        v19 = v85;
      }
      a2 = v97;
      v47 = *(unsigned int *)(a3 + 4);
      v33 = *((_DWORD *)v97 + 21);
      if ( (_DWORD)v47 != v33 )
      {
        sub_327340(&v104, v97, v47);
        a2 = (__int64 *)&v104;
        a1 = (__int64)&v104;
        v19 = sub_2405F0(v19, &v104);
        clear_tinfo_t(&v104);
        v33 = *(_DWORD *)(a3 + 4);
      }
      goto LABEL_23;
    case 0xB:
      a1 = 1;
      if ( (a6 & 0x10) != 0 )
        a1 = (unsigned int)lexcompare_tinfo(v102, *(_QWORD *)(*(_QWORD *)(v8 + 328) + 232LL), 0) == 0;
      a2 = &v102;
      v19 = sub_23DE40(a1, (__int64)&v102, (__int64)&unk_3FD0D2, *(_QWORD *)(a3 + 8), v11, v13);
      v33 = *(_DWORD *)(a3 + 4);
      goto LABEL_23;
    case 0xD:
      sub_327220(&v104, v97, *(unsigned int *)(a3 + 4));
      a2 = (__int64 *)&v104;
      a1 = (__int64)&v104;
      v19 = sub_239F60(*(const __m128i **)(a3 + 8), (__int64)&v104);
      clear_tinfo_t(&v104);
      v33 = *(_DWORD *)(a3 + 4);
      goto LABEL_23;
    case 0xE:
      if ( (v12 & 1) != 0 )
      {
        if ( !under_debugger )
          sub_37E160(50394);
LABEL_97:
        BUG();
      }
      sub_327500(&v103, v97, *(unsigned int *)(*(_QWORD *)(a3 + 8) + 4LL), 2);
      v48 = *(_QWORD *)(a3 + 8);
      v104 = nullptr;
      v49 = sub_245270(a1, a2, v48, &v104, &v103, 0);
      clear_tinfo_t(&v104);
      v50 = *(_QWORD *)(a3 + 8);
      v104 = nullptr;
      v51 = sub_245270(a1, v6, v50 + 16, &v104, &v103, 0);
      clear_tinfo_t(&v104);
      v52 = qalloc_or_throw(40);
      *(_QWORD *)v52 = 0;
      *(_QWORD *)(v52 + 24) = 0;
      *(_DWORD *)(v52 + 32) = 0;
      *(_OWORD *)(v52 + 8) = 0;
      v91 = (__int64 *)v52;
      sub_241980((_QWORD *)v52, 2u);
      v53 = *(_QWORD *)v51;
      v54 = (_QWORD *)*v91;
      *(_QWORD *)v51 = *(_QWORD *)*v91;
      v55 = *((_DWORD *)v54 + 2);
      *v54 = v53;
      LODWORD(v53) = *(_DWORD *)(v51 + 8);
      *(_DWORD *)(v51 + 8) = v55;
      v56 = *((_DWORD *)v54 + 3);
      *((_DWORD *)v54 + 2) = v53;
      LODWORD(v53) = *(_DWORD *)(v51 + 12);
      *(_DWORD *)(v51 + 12) = v56;
      v57 = v54[3];
      *((_DWORD *)v54 + 3) = v53;
      v58 = *(_QWORD *)(v51 + 24);
      *(_QWORD *)(v51 + 24) = v57;
      v59 = v54[4];
      v54[3] = v58;
      v60 = *(_QWORD *)(v51 + 32);
      *(_QWORD *)(v51 + 32) = v59;
      v61 = v54[5];
      v54[4] = v60;
      v62 = *(_QWORD *)(v51 + 40);
      *(_QWORD *)(v51 + 40) = v61;
      v63 = v54[6];
      v54[5] = v62;
      v64 = *(_QWORD *)(v51 + 48);
      *(_QWORD *)(v51 + 48) = v63;
      LODWORD(v63) = *((_DWORD *)v54 + 14);
      v54[6] = v64;
      LODWORD(v64) = *(_DWORD *)(v51 + 56);
      *(_DWORD *)(v51 + 56) = v63;
      *((_DWORD *)v54 + 14) = v64;
      if ( v51 )
      {
        sub_250DB0(v51);
        clear_tinfo_t(v51 + 48);
        j__qfree(v51);
      }
      v65 = *(_QWORD *)v49;
      v66 = (_QWORD *)*v91;
      *(_QWORD *)v49 = *(_QWORD *)(*v91 + 72);
      v67 = *((_DWORD *)v66 + 20);
      v66[9] = v65;
      LODWORD(v65) = *(_DWORD *)(v49 + 8);
      *(_DWORD *)(v49 + 8) = v67;
      v68 = *((_DWORD *)v66 + 21);
      *((_DWORD *)v66 + 20) = v65;
      LODWORD(v65) = *(_DWORD *)(v49 + 12);
      *(_DWORD *)(v49 + 12) = v68;
      v69 = v66[12];
      *((_DWORD *)v66 + 21) = v65;
      v70 = *(_QWORD *)(v49 + 24);
      *(_QWORD *)(v49 + 24) = v69;
      v71 = v66[13];
      v66[12] = v70;
      v72 = *(_QWORD *)(v49 + 32);
      *(_QWORD *)(v49 + 32) = v71;
      v73 = v66[14];
      v66[13] = v72;
      v74 = *(_QWORD *)(v49 + 40);
      *(_QWORD *)(v49 + 40) = v73;
      v75 = v66[15];
      v66[14] = v74;
      v76 = *(_QWORD *)(v49 + 48);
      *(_QWORD *)(v49 + 48) = v75;
      LODWORD(v75) = *((_DWORD *)v66 + 32);
      v66[15] = v76;
      LODWORD(v76) = *(_DWORD *)(v49 + 56);
      *(_DWORD *)(v49 + 56) = v75;
      *((_DWORD *)v66 + 32) = v76;
      if ( v49 )
      {
        sub_250DB0(v49);
        clear_tinfo_t(v49 + 48);
        j__qfree(v49);
      }
      sub_327500(&v104, v97, *(unsigned int *)(a3 + 4), 2);
      copy_tinfo_t(&v103, &v104);
      clear_tinfo_t(&v104);
      sub_242240((__int64)&v104, &v103);
      a2 = v91;
      v19 = sub_ED440((__int64)&v103, (__int64)v91, (__int64)&unk_3FD0D2, v104);
      if ( v104 )
      {
        *(_QWORD *)&v105 = 0;
        qfree(v104);
      }
LABEL_21:
      a1 = (__int64)&v103;
      clear_tinfo_t(&v103);
      v33 = *(_DWORD *)(a3 + 4);
LABEL_23:
      if ( v33 == -1 )
        goto LABEL_27;
      if ( *(_BYTE *)a3 != 9 )
        goto LABEL_67;
      v77 = *(__int64 **)(a3 + 8);
      v78 = *v77;
      v79 = *((int *)v77 + 4);
      if ( *(_QWORD *)(v78 + 440) < v79 )
        sub_239B00(a1, a2, v78, v20, v21);
      if ( !(unsigned __int8)sub_1EC4F0((int *)(*(_QWORD *)(v78 + 432) + 104 * v79), v97) )
      {
LABEL_67:
        if ( (get_tinfo_property(*(_QWORD *)(v19 + 48), 2) & 0xF) != 0xB
          && (get_tinfo_property(*(_QWORD *)(v19 + 48), 2) & 0xF) != 9 )
        {
          v80 = *(_DWORD *)(v19 + 8);
          if ( v80 != 61 )
          {
LABEL_69:
            if ( v80 == 49 )
              goto LABEL_27;
            if ( !(unsigned __int8)sub_1EA1E0(v96) && !(unsigned __int8)sub_23DA70(v19, *(_DWORD *)(a3 + 4)) )
            {
              tinfo_size = get_tinfo_size(0, *(_QWORD *)(v19 + 48), 0);
              v82 = *(_DWORD *)(a3 + 4);
              if ( (v95 & 1) != 0 )
              {
                if ( v82 != tinfo_size )
                  goto LABEL_74;
              }
              else if ( v82 > tinfo_size )
              {
LABEL_74:
                if ( !under_debugger )
                  sub_37E160(50978);
                goto LABEL_97;
              }
            }
            goto LABEL_26;
          }
          if ( (get_tinfo_property(*(_QWORD *)(v19 + 48), 2) & 0x3F) != 0x2D )
          {
            v80 = *(_DWORD *)(v19 + 8);
            goto LABEL_69;
          }
        }
      }
LABEL_26:
      if ( (unsigned int)(*(_DWORD *)(v19 + 8) - 64) <= 1 && *(_DWORD *)(v19 + 40) != *(_DWORD *)(a3 + 4) )
      {
        if ( !under_debugger )
          sub_37E160(50982);
        goto LABEL_97;
      }
LABEL_27:
      sub_2422C0(v19, *(_QWORD *)(v8 + 328), a4);
      clear_tinfo_t(&v102);
      return v19;
    case 0xF:
      if ( !(unsigned __int8)sub_1BED50(*(_QWORD *)(a3 + 8), 0, 0) || !(unsigned __int8)sub_32A2E0(a3, &v103) )
        goto LABEL_79;
      v104 = nullptr;
      copy_tinfo_t(&v104, &v102);
      a2 = v103;
      a1 = (__int64)&v104;
      v19 = sub_2450F0(v96, (__int64)v103, *(_DWORD *)(a3 + 4), &v104);
      clear_tinfo_t(&v104);
      v33 = *(_DWORD *)(a3 + 4);
      goto LABEL_23;
    default:
LABEL_79:
      if ( !under_debugger )
        sub_37E160(50395);
      goto LABEL_97;
  }
}
