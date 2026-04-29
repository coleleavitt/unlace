__int64 __fastcall sub_22C830(__int64 a1, int a2, __int64 a3, int a4, __int64 *a5, char a6)
{
  int v9; // r15d
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  bool v16; // zf
  __int64 v17; // rax
  unsigned int v18; // r15d
  int v20; // r11d
  __int64 v21; // r9
  int v22; // r10d
  unsigned int v23; // eax
  int v24; // r11d
  int v25; // ecx
  __int64 v26; // r9
  int v27; // r10d
  int v28; // esi
  unsigned __int64 v29; // rbx
  int v30; // r11d
  __int64 v31; // r9
  __int64 v32; // rsi
  _QWORD *v33; // r13
  int v34; // eax
  __int64 v35; // r9
  int v36; // r10d
  int v37; // r11d
  bool v38; // al
  __int64 v39; // rbx
  signed int v40; // r11d
  __int64 *v41; // rax
  unsigned __int64 v42; // rdx
  char v43; // al
  __int64 *v44; // rcx
  int v45; // ebp
  __int64 v46; // r13
  int v47; // eax
  unsigned __int64 v48; // r8
  __int64 v49; // rax
  int v50; // eax
  unsigned __int64 v51; // r9
  char v52; // al
  signed int v53; // r11d
  unsigned __int64 v54; // r8
  __int64 v55; // rdi
  signed int v56; // ecx
  _DWORD *v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // r8
  size_t v60; // r9
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // r8
  unsigned __int64 v66; // r13
  __int64 v67; // rax
  char v68; // al
  unsigned __int64 v69; // rbx
  __int64 v70; // rdi
  char v71; // al
  unsigned __int64 *v72; // rax
  unsigned __int64 *v73; // rax
  __int64 v74; // rax
  __int64 *v76; // [rsp+0h] [rbp-B8h]
  unsigned int v77; // [rsp+0h] [rbp-B8h]
  size_t v78; // [rsp+0h] [rbp-B8h]
  __int64 v80; // [rsp+8h] [rbp-B0h]
  int v81; // [rsp+10h] [rbp-A8h]
  int v82; // [rsp+10h] [rbp-A8h]
  __int64 v83; // [rsp+10h] [rbp-A8h]
  __int64 v84; // [rsp+10h] [rbp-A8h]
  signed int v85; // [rsp+10h] [rbp-A8h]
  signed int v86; // [rsp+10h] [rbp-A8h]
  int v87; // [rsp+10h] [rbp-A8h]
  signed int v88; // [rsp+10h] [rbp-A8h]
  __int64 v89; // [rsp+10h] [rbp-A8h]
  signed int v90; // [rsp+10h] [rbp-A8h]
  signed int v91; // [rsp+10h] [rbp-A8h]
  signed int v92; // [rsp+10h] [rbp-A8h]
  __int64 v93; // [rsp+18h] [rbp-A0h]
  __int64 v94; // [rsp+18h] [rbp-A0h]
  int v95; // [rsp+18h] [rbp-A0h]
  int v96; // [rsp+18h] [rbp-A0h]
  __int64 v97; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v98; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v99; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v100; // [rsp+18h] [rbp-A0h]
  int v101; // [rsp+20h] [rbp-98h]
  int v102; // [rsp+20h] [rbp-98h]
  int v103; // [rsp+20h] [rbp-98h]
  __int64 v104; // [rsp+20h] [rbp-98h]
  int v105; // [rsp+20h] [rbp-98h]
  unsigned __int64 v106; // [rsp+20h] [rbp-98h]
  __int64 v107; // [rsp+30h] [rbp-88h] BYREF
  signed __int64 v108; // [rsp+38h] [rbp-80h] BYREF
  __int64 v109; // [rsp+40h] [rbp-78h] BYREF
  __int64 v110; // [rsp+48h] [rbp-70h]
  void *src; // [rsp+50h] [rbp-68h] BYREF
  __int128 v112; // [rsp+58h] [rbp-60h] BYREF
  __int128 v113; // [rsp+68h] [rbp-50h]
  unsigned __int64 v114; // [rsp+78h] [rbp-40h]

  v114 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v10 = *(_QWORD *)(a1 + 432) + 104LL * a2;
  if ( !(unsigned __int8)sub_1BEE60(v10, &v107, &v108, *(_DWORD *)(v10 + 88)) )
  {
    if ( !under_debugger )
      sub_37DDE0(52270);
    goto LABEL_129;
  }
  v11 = *(_QWORD *)(a1 + 936);
  v12 = v107;
  if ( v11 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
    v14 = *(_QWORD *)(a1 + 144);
    v15 = v13;
    if ( v14 <= v13 )
      v15 = *(_QWORD *)(a1 + 144);
    v16 = v13 == -1;
    v17 = v15;
    if ( v16 )
      v17 = *(_QWORD *)(a1 + 144);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 144);
    v17 = v14;
  }
  if ( a3 < v17 != v12 < v17 )
    return 0;
  v20 = 1;
  v21 = *(_QWORD *)(a1 + 1504);
  if ( a4 > 0 )
    v20 = a4;
  v22 = v20 + a3;
  if ( v107 > a3 )
  {
    if ( v14 > a3 || *(_BYTE *)(a1 + 320) )
      return (unsigned int)-1;
    if ( !*(_BYTE *)(*(_QWORD *)(v21 + 96) + 145LL) )
      return 0;
    v23 = *(_DWORD *)(a1 + 72);
    if ( v23 <= 0x10 )
    {
      v105 = v20 + a3;
      v97 = *(_QWORD *)(a1 + 1504);
      v87 = v20;
      v23 = getinf(99);
      v22 = v105;
      v21 = v97;
      v20 = v87;
    }
    v101 = v22;
    v93 = v21;
    v81 = v20;
    if ( v23 == 176
      || v23 == 256
      || (unsigned __int8)getinf_flag(67, 2)
      || !(v107 % v9)
      || v108 % v9
      || *(_DWORD *)v10 != 1 )
    {
      return 0;
    }
    v24 = v81;
    v25 = v9;
    v26 = v93;
    v27 = v101;
    if ( v81 >= v9 )
      v25 = v81;
    v28 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    if ( v25 == a4 )
    {
      if ( a4 % v28 )
        v28 = a4;
      v25 = v28;
      if ( a5 )
      {
        src = nullptr;
        copy_tinfo_t(&src, a5);
        v27 = v101;
        v26 = v93;
        v25 = v28;
        v24 = v81;
LABEL_35:
        v102 = v27;
        v94 = v26;
        v82 = v24;
        v29 = sub_223130(a1, a3, (__int64 *)&src, v25);
        clear_tinfo_t(&src);
        v30 = v82;
        v31 = v94;
        if ( *(_DWORD *)(v10 + 88) >= v9 )
        {
          if ( !under_debugger )
            sub_37DDE0(52271);
        }
        else
        {
          v32 = v94;
          v95 = v102;
          v83 = v31;
          v33 = (_QWORD *)(a1 + 432);
          v103 = v30;
          v34 = sub_2243E0((_QWORD *)(a1 + 432), v32, v29, (int)v107 - (int)v29);
          v35 = v83;
          v36 = v95;
          if ( v34 == -1 )
          {
            v107 = v29;
            if ( v95 < v108 )
              v36 = v108;
            v37 = v36 - v29;
            goto LABEL_66;
          }
          if ( v103 > v9 || *(_DWORD *)(*(_QWORD *)(a1 + 432) + 104LL * v34) == 2 )
            return (unsigned int)-1;
          if ( !under_debugger )
            sub_37DDE0(52272);
        }
LABEL_129:
        BUG();
      }
    }
    else if ( !(v25 % v28) )
    {
      v25 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    }
    src = nullptr;
    goto LABEL_35;
  }
  if ( v22 <= v108 )
    return 1;
  if ( v14 <= a3 && *(_BYTE *)(a1 + 320) )
    return (unsigned int)-1;
  v18 = *(_DWORD *)v10;
  if ( *(_DWORD *)v10 != 1 )
    return (unsigned int)-1;
  v104 = v14;
  v96 = v20 + a3;
  v33 = (_QWORD *)(a1 + 432);
  v84 = *(_QWORD *)(a1 + 1504);
  if ( (unsigned int)sub_2243E0((_QWORD *)(a1 + 432), v84, v108, v22 - (int)v108) != -1 )
    return (unsigned int)-1;
  v35 = v84;
  v37 = v96 - v107;
  if ( v104 > a3 )
  {
    v85 = v96 - v107;
    v38 = sub_2223D0(a1, v107, v96 - v107);
    v39 = v107;
    v40 = v85;
    if ( v38 )
    {
      v18 = -1;
      v40 = v107 - *(_DWORD *)(a1 + 144) + v85;
    }
    goto LABEL_47;
  }
LABEL_66:
  if ( (*(_BYTE *)(v35 + 50) & 8) != 0 )
  {
    v47 = 16;
    if ( v37 > 15 )
      goto LABEL_69;
  }
  else if ( v37 >= 2 * *(_DWORD *)(v35 + 80) )
  {
LABEL_68:
    v47 = 2 * *(_DWORD *)(v35 + 80);
    goto LABEL_69;
  }
  v89 = v35;
  v50 = sub_1185D0(v37);
  v35 = v89;
  v37 = v50;
  v47 = 16;
  if ( (*(_BYTE *)(v89 + 50) & 8) == 0 )
    goto LABEL_68;
LABEL_69:
  if ( v37 > v47 )
    return (unsigned int)-1;
  v88 = v37;
  if ( (unsigned int)sub_2243E0(v33, v35, v108, (int)v107 + v37 - (int)v108) != -1 )
    return (unsigned int)-1;
  v39 = v107;
  v40 = v88;
  v18 = 1;
LABEL_47:
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_48;
  v48 = v40;
  v49 = *(_QWORD *)(a1 + 128);
  if ( v40 + v39 > v49 )
    goto LABEL_73;
  v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) & (v39 + *(_QWORD *)(a1 + 1440));
  v113 = 0;
  src = nullptr;
  v112 = 0u;
  if ( v51 + v40 - 1 >= v51 )
  {
    v106 = v40;
    v99 = v51;
    v91 = v40;
    *((_QWORD *)&v112 + 1) = qvector_reserve((char *)&v112 + 8, 0, 1, 16);
    v48 = v106;
    v40 = v91;
    v72 = (unsigned __int64 *)(16 * v113 + *((_QWORD *)&v112 + 1));
    *v72 = v99;
    v72[1] = v106;
    *(_QWORD *)&v113 = v113 + 1;
  }
  v98 = v48;
  v90 = v40;
  v52 = sub_60400((_QWORD *)(a1 + 832), &src);
  v53 = v90;
  v54 = v98;
  if ( v52 )
  {
    v55 = *((_QWORD *)&v112 + 1);
    if ( !*((_QWORD *)&v112 + 1) )
      goto LABEL_93;
  }
  else
  {
    v68 = sub_313370(a1 + 848, (char *)&v112 + 8);
    v55 = *((_QWORD *)&v112 + 1);
    v53 = v90;
    if ( !v68 )
    {
      if ( *((_QWORD *)&v112 + 1) )
      {
        *(_QWORD *)&v113 = 0;
        qfree(*((_QWORD *)&v112 + 1));
      }
      goto LABEL_117;
    }
    v54 = v98;
    if ( !*((_QWORD *)&v112 + 1) )
      goto LABEL_93;
  }
  v98 = v54;
  v90 = v53;
  *(_QWORD *)&v113 = 0;
  qfree(v55);
LABEL_93:
  qfree(src);
  v40 = v90;
  v48 = v98;
  v49 = *(_QWORD *)(a1 + 128);
LABEL_73:
  if ( v49 <= v39 )
  {
    v39 = v107;
    goto LABEL_48;
  }
  v69 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(a1 + 1440) + v39);
  src = nullptr;
  v112 = 0u;
  v113 = 0;
  if ( v69 + v48 - 1 >= v69 )
  {
    v100 = v48;
    v92 = v40;
    *((_QWORD *)&v112 + 1) = qvector_reserve((char *)&v112 + 8, 0, 1, 16);
    v40 = v92;
    v73 = (unsigned __int64 *)(16 * v113 + *((_QWORD *)&v112 + 1));
    *v73 = v69;
    v73[1] = v100;
    *(_QWORD *)&v113 = v113 + 1;
  }
  v90 = v40;
  if ( !(unsigned __int8)sub_604A0(&src, (_QWORD *)(a1 + 832)) )
  {
    v70 = *((_QWORD *)&v112 + 1);
    if ( !*((_QWORD *)&v112 + 1) )
    {
LABEL_111:
      qfree(src);
      return (unsigned int)-1;
    }
LABEL_110:
    *(_QWORD *)&v113 = 0;
    qfree(v70);
    goto LABEL_111;
  }
  v71 = sub_312E40(a1 + 848, (char *)&v112 + 8);
  v70 = *((_QWORD *)&v112 + 1);
  if ( !v71 )
  {
    if ( !*((_QWORD *)&v112 + 1) )
      goto LABEL_111;
    goto LABEL_110;
  }
  if ( *((_QWORD *)&v112 + 1) )
  {
    *(_QWORD *)&v113 = 0;
    qfree(*((_QWORD *)&v112 + 1));
  }
LABEL_117:
  qfree(src);
  v39 = v107;
  v40 = v90;
LABEL_48:
  v41 = nullptr;
  if ( v40 == a4 )
    v41 = a5;
  v76 = v41;
  if ( *(_DWORD *)v10 != 1 )
  {
    if ( !under_debugger )
      sub_37DDE0(52269);
    goto LABEL_129;
  }
  v42 = *(_QWORD *)(v10 + 8);
  if ( !*(_DWORD *)(v10 + 88) || v39 < v42 || *(int *)(v10 + 88) + v42 - 1 < v39 + v40 - 1 )
  {
    src = nullptr;
    v112 = 0;
    if ( *(_QWORD *)(a1 + 144) <= v39 )
    {
      v109 = v39;
      LOBYTE(v110) = 5;
      v86 = v40;
      v43 = sub_2232D0(a1, (__int64)&v109, v41, v40);
      v40 = v86;
      if ( !v43 )
        goto LABEL_76;
    }
    v44 = v76;
    v77 = v40;
    v45 = sub_22BDF0(a1, v39, v40, v44, 3, (__int64 *)&src);
    if ( v45 == -1 && (!a6 || (*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 604LL) & 0x10) == 0) )
      goto LABEL_76;
    if ( *(_DWORD *)v10 == 1 )
      v46 = *(_QWORD *)(v10 + 8);
    else
      v46 = -1;
    cleanup_argloc(v10);
    *(_QWORD *)(v10 + 8) = v39;
    *(_DWORD *)v10 = 1;
    if ( !(unsigned __int8)sub_1EAA80((_DWORD *)v10, *(_QWORD **)(a1 + 1504), v77, 2) )
    {
      cleanup_argloc(v10);
      *(_DWORD *)v10 = 1;
      *(_QWORD *)(v10 + 8) = v46;
LABEL_76:
      if ( src )
      {
        *(_QWORD *)&v112 = 0;
        qfree(src);
      }
      return (unsigned int)-1;
    }
    if ( v45 == -1 )
    {
      v56 = *(_DWORD *)(v10 + 88);
      v57 = *(_DWORD **)(a1 + 1504);
      v109 = 0;
      v110 = 0;
      sub_1EAE10(v57, (__int64 *)(a1 + 496), v10, v56, &v109, 0);
      cleanup_argloc(&v109);
      if ( (unsigned __int64)v112 > 1 )
      {
        v61 = (*(_QWORD *)(a1 + 504) == 0) + *(_QWORD *)(a1 + 504) - 1LL;
        v59 = v61 + 12;
        if ( *(_QWORD *)(a1 + 512) < (unsigned __int64)(v61 + 13) )
        {
          *(_QWORD *)(a1 + 496) = qvector_reserve(a1 + 496, *(_QWORD *)(a1 + 496), v61 + 13, 1);
          v59 = v61 + 12;
        }
        v62 = *(_QWORD *)(a1 + 496);
        *(_QWORD *)(a1 + 504) = v61 + 13;
        *(_BYTE *)(v62 + v59) = 0;
        qmemcpy((void *)(*(_QWORD *)(a1 + 496) + v61), " and stkvar ", 12);
        if ( (_QWORD)v112 )
        {
          v63 = v112 - 1;
          v60 = v112 - 1;
          if ( (_QWORD)v112 != 1 )
          {
            v64 = (*(_QWORD *)(a1 + 504) == 0) + *(_QWORD *)(a1 + 504) - 1LL;
            v65 = v63 + v64;
            v66 = v63 + (*(_QWORD *)(a1 + 504) == 0) + *(_QWORD *)(a1 + 504);
            if ( *(_QWORD *)(a1 + 512) < v66 )
            {
              v80 = v63 + v64;
              v78 = v112 - 1;
              v74 = qvector_reserve(
                      a1 + 496,
                      *(_QWORD *)(a1 + 496),
                      v63 + (*(_QWORD *)(a1 + 504) == 0) + *(_QWORD *)(a1 + 504),
                      1);
              v65 = v80;
              v60 = v78;
              *(_QWORD *)(a1 + 496) = v74;
            }
            v67 = *(_QWORD *)(a1 + 496);
            *(_QWORD *)(a1 + 504) = v66;
            *(_BYTE *)(v67 + v65) = 0;
            memcpy((void *)(*(_QWORD *)(a1 + 496) + v64), src, v60);
          }
        }
      }
      sub_1EBCB0(a1, *(_QWORD *)(v10 + 16), 20, v58, v59, v60);
      *(_DWORD *)(v10 + 24) |= 0x400u;
    }
    if ( src )
    {
      *(_QWORD *)&v112 = 0;
      qfree(src);
    }
  }
  return v18;
}
