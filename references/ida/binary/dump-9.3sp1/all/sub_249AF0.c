__int64 __fastcall sub_249AF0(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, _BYTE *a5, char a6)
{
  __int64 *v6; // r15
  __int64 v8; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  unsigned int v16; // ecx
  int v17; // edx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  int v26; // r15d
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  unsigned int v30; // r8d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  int v36; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r10
  __int64 v42; // rdx
  __int64 v43; // r13
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r13
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // r15
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // rax
  int v62; // ecx
  int v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rdx
  _QWORD *v73; // rax
  int v74; // ecx
  int v75; // ecx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 *v84; // rax
  __int64 v85; // rdx
  unsigned __int64 v86; // rax
  int v87; // eax
  int tinfo_size; // eax
  int v89; // edx
  unsigned int v90; // eax
  unsigned __int64 v91; // rsi
  char v92; // al
  __int64 v93; // [rsp-10h] [rbp-B0h]
  __int64 v94; // [rsp+8h] [rbp-98h]
  __int64 *v95; // [rsp+8h] [rbp-98h]
  unsigned int tinfo_property; // [rsp+10h] [rbp-90h]
  __int64 v97; // [rsp+10h] [rbp-90h]
  __int64 v98; // [rsp+10h] [rbp-90h]
  char v99; // [rsp+1Ch] [rbp-84h]
  unsigned __int8 *v100; // [rsp+20h] [rbp-80h]
  __int64 *v101; // [rsp+28h] [rbp-78h]
  __int64 v104; // [rsp+38h] [rbp-68h]
  __int64 v105; // [rsp+40h] [rbp-60h] BYREF
  __int64 *v106; // [rsp+48h] [rbp-58h] BYREF
  __int64 v107; // [rsp+50h] [rbp-50h] BYREF
  __int128 v108; // [rsp+58h] [rbp-48h]
  unsigned __int64 v109; // [rsp+68h] [rbp-38h]

  v6 = a2;
  v8 = a1;
  v109 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 176);
  v105 = 0;
  v100 = *(unsigned __int8 **)(v10 + 8);
  v101 = *((__int64 **)v100 + 188);
  copy_tinfo_t();
  sub_23F100(&v105, (__int64)v100, (unsigned __int64)a2, a3, *(_DWORD *)(a3 + 4), 0);
  v11 = a6 & 1;
  v12 = a6 & 1 | 8;
  v13 = a6 & 4;
  if ( (a6 & 4) == 0 )
    v12 = a6 & 1;
  v14 = a6 & 4;
  v99 = v12;
  switch ( *(_BYTE *)a3 )
  {
    case 0:
    case 7:
    case 8:
      if ( !under_debugger )
        sub_383060(50392);
      goto LABEL_95;
    case 1:
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD, __int64, _QWORD))(*v101 + 264))(
             v101,
             *(unsigned int *)(a3 + 8),
             v11,
             a6 & 4,
             v15,
             a6 & 4) )
      {
        v16 = *(_DWORD *)(a3 + 4);
        v17 = *(_DWORD *)(a3 + 8);
        v107 = 0;
        v108 = 0;
        sub_1338F0(v101, &v107, v17, v16);
        qstrupr();
        sub_32C270(&v106, v101, *(unsigned int *)(a3 + 4));
        a2 = (__int64 *)&v106;
        v18 = sub_2426C0(1);
        clear_tinfo_t();
        a1 = v107;
        if ( v107 )
        {
          *(_QWORD *)&v108 = 0;
          qfree(v107);
        }
LABEL_58:
        v34 = *(_DWORD *)(a3 + 4);
        goto LABEL_21;
      }
      if ( !under_debugger )
        sub_383060(50391);
      goto LABEL_95;
    case 2:
      v19 = j__qalloc_or_throw(64, (__int64)v100, v11, v13);
      *(_QWORD *)v19 = -1;
      v18 = v19;
      *(_QWORD *)(v19 + 8) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v19 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v19 + 40) = 0;
      *(_QWORD *)(v19 + 48) = 0;
      *(_DWORD *)(v19 + 56) = 0;
      *(_OWORD *)(v19 + 24) = 0;
      v20 = **(_QWORD **)(a3 + 8);
      *(_DWORD *)(v18 + 8) = 61;
      *(_QWORD *)v18 = v20;
      v23 = j__qalloc_or_throw(48, (__int64)v100, v21, v22);
      v24 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
      *(_QWORD *)v23 = 0;
      *(_DWORD *)(v23 + 8) = 0;
      *(_WORD *)(v23 + 12) = (unsigned __int8)v24;
      *(_WORD *)(v23 + 14) = 0;
      *(_QWORD *)(v23 + 16) = 0;
      *(_QWORD *)(v23 + 40) = 0;
      *(_OWORD *)(v23 + 24) = 0;
      *(_QWORD *)(v18 + 24) = v23;
      tinfo_property = get_tinfo_property();
      v25 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL), *(unsigned int *)(a3 + 4), tinfo_property != 2);
      v26 = *(_DWORD *)(a3 + 4);
      v27 = v25;
      if ( (a6 & 2) != 0 )
      {
        v28 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 328) + 130LL);
        if ( v26 < (int)v28 && tinfo_property == 1 )
        {
          v94 = v25;
          v29 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 24LL), v28, 1);
          v27 = v94;
          if ( v29 != v94 )
          {
            v26 = v28;
            v27 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
          }
        }
      }
      if ( v26 < *((_DWORD *)v101 + 22) )
      {
        v104 = v27;
        v90 = sub_11CA90(v26);
        v27 = v104;
        v30 = v90;
      }
      else
      {
        v30 = v26;
      }
      sub_240A20(v18, *(_QWORD *)(a1 + 328), *(_QWORD *)(a1 + 176), v27, v30, tinfo_property);
      a2 = *(__int64 **)(v18 + 48);
      a1 = 0;
      if ( v26 == (unsigned int)get_tinfo_size() )
        goto LABEL_58;
      v106 = nullptr;
      copy_tinfo_t();
      if ( !*(_BYTE *)a4 )
      {
        sub_32C430(&v107, v101, (unsigned int)v26, 2);
        copy_tinfo_t();
        clear_tinfo_t();
      }
      v33 = sub_244E70(v18, (__int64)&v106, v31, v32);
      a2 = *(__int64 **)(v33 + 48);
      v18 = v33;
      if ( v26 != (unsigned int)get_tinfo_size() )
      {
        a2 = (__int64 *)v18;
        sub_248280(*(_QWORD *)(v8 + 328), v18, &v106);
      }
      goto LABEL_19;
    case 3:
      v35 = j__qalloc_or_throw(64, (__int64)v100, v11, v13);
      *(_QWORD *)v35 = -1;
      v18 = v35;
      *(_QWORD *)(v35 + 8) = 0xFFFFFFFF0000003FLL;
      *(_QWORD *)(v35 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v35 + 40) = 0;
      *(_QWORD *)(v35 + 48) = 0;
      *(_DWORD *)(v35 + 56) = 0;
      *(_OWORD *)(v35 + 24) = 0;
      *(_QWORD *)(v35 + 24) = qstrdup();
      v36 = strlen(*(const char **)(a3 + 8));
      LODWORD(v108) = 0;
      v106 = (_QWORD *)(&dword_30 + 2);
      DWORD1(v108) = v36 + 1;
      v107 = 0;
      copy_tinfo_t();
      a2 = (_QWORD *)(byte_9 + 2);
      create_tinfo();
      clear_tinfo_t();
      a1 = (__int64)&v106;
      clear_tinfo_t();
      v34 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    case 4:
      a2 = *(__int64 **)(a3 + 8);
      v18 = sub_24EE70(a1, a2, &v105, 0, v15, a6 & 4);
      if ( v18 )
        goto LABEL_58;
      if ( !under_debugger )
        sub_383060(50393);
      goto LABEL_95;
    case 5:
      v107 = 0;
      copy_tinfo_t();
      a2 = *(__int64 **)(*(_QWORD *)(a3 + 8) + 8LL);
      a1 = (__int64)&v107;
      v18 = sub_249970(v100, (__int64)a2, *(_DWORD *)(a3 + 4), &v107);
      clear_tinfo_t();
      v34 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    case 6:
      v38 = j__qalloc_or_throw(64, (__int64)v100, v11, v13);
      *(_QWORD *)v38 = -1;
      *(_QWORD *)(v38 + 40) = 0;
      *(_QWORD *)(v38 + 8) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v38 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v38 + 48) = 0;
      *(_DWORD *)(v38 + 56) = 0;
      *(_OWORD *)(v38 + 24) = 0;
      v39 = sub_247D90(*(_QWORD *)(a1 + 328), (__int64)a2, v38, *(_QWORD *)(a3 + 8), &v105, *(_DWORD *)(a3 + 4), v99);
      goto LABEL_28;
    case 9:
      v40 = j__qalloc_or_throw(64, (__int64)v100, v11, v13);
      *(_QWORD *)v40 = -1;
      *(_QWORD *)(v40 + 12) = -1;
      *(_QWORD *)(v40 + 48) = 0;
      *(_DWORD *)(v40 + 56) = 0;
      *(_OWORD *)(v40 + 32) = 0;
      if ( (a6 & 1) == 0 )
        *(_QWORD *)v40 = a2;
      *(_DWORD *)(v40 + 8) = 65;
      *(_QWORD *)(v40 + 24) = v100;
      *(_DWORD *)(v40 + 32) = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
      if ( *(_QWORD *)(**(_QWORD **)(a3 + 8) + 440LL) < (unsigned __int64)*(int *)(*(_QWORD *)(a3 + 8) + 16LL) )
        sub_23E380(64, v100);
      v97 = v40;
      copy_tinfo_t();
      v41 = v97;
      if ( (*(_BYTE *)(a3 + 1) & 0x10) != 0 )
        *(_DWORD *)(v97 + 56) |= 0x40u;
      if ( *a5 && (a6 & 8) == 0 )
      {
        sub_23F100(&v105, (__int64)v100, (unsigned __int64)a2, a3, *(_DWORD *)(a3 + 4), 0);
        v41 = v97;
      }
      v39 = sub_2476A0(
              *(_QWORD *)(a1 + 328),
              (__int64)a2,
              v41,
              *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL),
              &v105,
              *(_DWORD *)(a3 + 4),
              v99);
LABEL_28:
      v18 = v39;
      a1 = v93;
      v34 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    case 0xA:
      v42 = *(_QWORD *)(a3 + 8);
      if ( *(_BYTE *)v42 != 6 )
        goto LABEL_39;
      a1 = *(_QWORD *)(a1 + 328);
      v91 = *(_QWORD *)(v42 + 8);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) < v91 )
        goto LABEL_80;
      v98 = *(_QWORD *)(a3 + 8);
      v92 = is_mapped();
      v14 = a6 & 4;
      v42 = v98;
      if ( v92 )
      {
LABEL_39:
        v107 = 0;
        v106 = nullptr;
        v43 = sub_249AF0(v8, v6, v42, &v106, &v107, v14);
        clear_tinfo_t();
        clear_tinfo_t();
        a1 = (__int64)v101;
        v18 = sub_247510((__int64)v101, v43, v44, v45);
      }
      else
      {
        v91 = *(_QWORD *)(v98 + 8);
        a1 = *(_QWORD *)(v8 + 328);
LABEL_80:
        v18 = sub_240F50(a1, v91, 0, -1, 0, 2u, *(_DWORD *)(*((_QWORD *)v100 + 188) + 80LL));
      }
      a2 = v101;
      v46 = *(unsigned int *)(a3 + 4);
      v34 = *((_DWORD *)v101 + 21);
      if ( (_DWORD)v46 != v34 )
      {
        sub_32C270(&v107, v101, v46);
        a2 = &v107;
        a1 = (__int64)&v107;
        v18 = sub_244E70(v18, (__int64)&v107, v47, v48);
        clear_tinfo_t();
        v34 = *(_DWORD *)(a3 + 4);
      }
      goto LABEL_21;
    case 0xB:
      a1 = 1;
      if ( (a6 & 0x10) != 0 )
        a1 = (unsigned int)lexcompare_tinfo() == 0;
      a2 = &v105;
      v18 = sub_2426C0(a1);
      v34 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    case 0xD:
      sub_32C150(&v107, v101, *(unsigned int *)(a3 + 4));
      a2 = &v107;
      a1 = (__int64)&v107;
      v18 = sub_23E7E0(*(const __m128i **)(a3 + 8), (__int64)&v107, v49, v50);
      clear_tinfo_t();
      v34 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    case 0xE:
      if ( (v12 & 1) != 0 )
      {
        if ( !under_debugger )
          sub_383060(50394);
LABEL_95:
        BUG();
      }
      sub_32C430(&v106, v101, *(unsigned int *)(*(_QWORD *)(a3 + 8) + 4LL), 2);
      v51 = *(_QWORD *)(a3 + 8);
      v107 = 0;
      v52 = sub_249AF0(a1, a2, v51, &v107, &v106, 0);
      clear_tinfo_t();
      v53 = *(_QWORD *)(a3 + 8);
      v107 = 0;
      v54 = v53 + 16;
      v55 = (__int64)v6;
      v56 = sub_249AF0(a1, v6, v54, &v107, &v106, 0);
      clear_tinfo_t();
      v59 = qalloc_or_throw(40, v55, v57, v58);
      *(_QWORD *)v59 = 0;
      *(_QWORD *)(v59 + 24) = 0;
      *(_DWORD *)(v59 + 32) = 0;
      *(_OWORD *)(v59 + 8) = 0;
      v95 = (__int64 *)v59;
      sub_246200((__int64 *)v59, 2u);
      v60 = *(_QWORD *)v56;
      v61 = (_QWORD *)*v95;
      *(_QWORD *)v56 = *(_QWORD *)*v95;
      v62 = *((_DWORD *)v61 + 2);
      *v61 = v60;
      LODWORD(v60) = *(_DWORD *)(v56 + 8);
      *(_DWORD *)(v56 + 8) = v62;
      v63 = *((_DWORD *)v61 + 3);
      *((_DWORD *)v61 + 2) = v60;
      LODWORD(v60) = *(_DWORD *)(v56 + 12);
      *(_DWORD *)(v56 + 12) = v63;
      v64 = v61[3];
      *((_DWORD *)v61 + 3) = v60;
      v65 = *(_QWORD *)(v56 + 24);
      *(_QWORD *)(v56 + 24) = v64;
      v66 = v61[4];
      v61[3] = v65;
      v67 = *(_QWORD *)(v56 + 32);
      *(_QWORD *)(v56 + 32) = v66;
      v68 = v61[5];
      v61[4] = v67;
      v69 = *(_QWORD *)(v56 + 40);
      *(_QWORD *)(v56 + 40) = v68;
      v70 = v61[6];
      v61[5] = v69;
      v71 = *(_QWORD *)(v56 + 48);
      *(_QWORD *)(v56 + 48) = v70;
      LODWORD(v70) = *((_DWORD *)v61 + 14);
      v61[6] = v71;
      LODWORD(v71) = *(_DWORD *)(v56 + 56);
      *(_DWORD *)(v56 + 56) = v70;
      *((_DWORD *)v61 + 14) = v71;
      if ( v56 )
      {
        sub_255630(v56);
        clear_tinfo_t();
        j__qfree(v56);
      }
      v72 = *(_QWORD *)v52;
      v73 = (_QWORD *)*v95;
      *(_QWORD *)v52 = *(_QWORD *)(*v95 + 72);
      v74 = *((_DWORD *)v73 + 20);
      v73[9] = v72;
      LODWORD(v72) = *(_DWORD *)(v52 + 8);
      *(_DWORD *)(v52 + 8) = v74;
      v75 = *((_DWORD *)v73 + 21);
      *((_DWORD *)v73 + 20) = v72;
      LODWORD(v72) = *(_DWORD *)(v52 + 12);
      *(_DWORD *)(v52 + 12) = v75;
      v76 = v73[12];
      *((_DWORD *)v73 + 21) = v72;
      v77 = *(_QWORD *)(v52 + 24);
      *(_QWORD *)(v52 + 24) = v76;
      v78 = v73[13];
      v73[12] = v77;
      v79 = *(_QWORD *)(v52 + 32);
      *(_QWORD *)(v52 + 32) = v78;
      v80 = v73[14];
      v73[13] = v79;
      v81 = *(_QWORD *)(v52 + 40);
      *(_QWORD *)(v52 + 40) = v80;
      v82 = v73[15];
      v73[14] = v81;
      v83 = *(_QWORD *)(v52 + 48);
      *(_QWORD *)(v52 + 48) = v82;
      LODWORD(v82) = *((_DWORD *)v73 + 32);
      v73[15] = v83;
      LODWORD(v83) = *(_DWORD *)(v52 + 56);
      *(_DWORD *)(v52 + 56) = v82;
      *((_DWORD *)v73 + 32) = v83;
      if ( v52 )
      {
        sub_255630(v52);
        clear_tinfo_t();
        j__qfree(v52);
      }
      sub_32C430(&v107, v101, *(unsigned int *)(a3 + 4), 2);
      copy_tinfo_t();
      clear_tinfo_t();
      sub_246AC0((__int64)&v107);
      a2 = v95;
      v18 = sub_F1640((__int64)&v106, (__int64)v95, (__int64)&unk_4190BD, v107);
      if ( v107 )
      {
        *(_QWORD *)&v108 = 0;
        qfree(v107);
      }
LABEL_19:
      a1 = (__int64)&v106;
      clear_tinfo_t();
      v34 = *(_DWORD *)(a3 + 4);
LABEL_21:
      if ( v34 == -1 )
        goto LABEL_25;
      if ( *(_BYTE *)a3 != 9 )
        goto LABEL_65;
      v84 = *(__int64 **)(a3 + 8);
      v85 = *v84;
      v86 = *((int *)v84 + 4);
      if ( *(_QWORD *)(v85 + 440) < v86 )
        sub_23E380(a1, a2);
      if ( !(unsigned __int8)sub_1F0D70((int *)(*(_QWORD *)(v85 + 432) + 104 * v86), v101) )
      {
LABEL_65:
        if ( (get_tinfo_property() & 0xF) != 0xB && (get_tinfo_property() & 0xF) != 9 )
        {
          v87 = *(_DWORD *)(v18 + 8);
          if ( v87 != 61 )
          {
LABEL_67:
            if ( v87 == 49 )
              goto LABEL_25;
            if ( !(unsigned __int8)sub_1EEA60(v100) && !(unsigned __int8)sub_2422F0(v18, *(_DWORD *)(a3 + 4)) )
            {
              tinfo_size = get_tinfo_size();
              v89 = *(_DWORD *)(a3 + 4);
              if ( (v99 & 1) != 0 )
              {
                if ( v89 != tinfo_size )
                  goto LABEL_72;
              }
              else if ( v89 > tinfo_size )
              {
LABEL_72:
                if ( !under_debugger )
                  sub_383060(50978);
                goto LABEL_95;
              }
            }
            goto LABEL_24;
          }
          if ( (get_tinfo_property() & 0x3F) != 0x2D )
          {
            v87 = *(_DWORD *)(v18 + 8);
            goto LABEL_67;
          }
        }
      }
LABEL_24:
      if ( (unsigned int)(*(_DWORD *)(v18 + 8) - 64) <= 1 && *(_DWORD *)(v18 + 40) != *(_DWORD *)(a3 + 4) )
      {
        if ( !under_debugger )
          sub_383060(50982);
        goto LABEL_95;
      }
LABEL_25:
      sub_246B40(v18, *(_QWORD *)(v8 + 328), a4);
      clear_tinfo_t();
      return v18;
    case 0xF:
      if ( !(unsigned __int8)sub_1C3110(*(_QWORD *)(a3 + 8), 0, 0) || !(unsigned __int8)sub_32F330(a3, &v106) )
        goto LABEL_77;
      v107 = 0;
      copy_tinfo_t();
      a2 = v106;
      a1 = (__int64)&v107;
      v18 = sub_249970(v100, (__int64)v106, *(_DWORD *)(a3 + 4), &v107);
      clear_tinfo_t();
      v34 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    default:
LABEL_77:
      if ( !under_debugger )
        sub_383060(50395);
      goto LABEL_95;
  }
}
