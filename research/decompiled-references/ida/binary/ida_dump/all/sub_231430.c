__int64 __fastcall sub_231430(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5, char a6)
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
  _QWORD *v41; // rax
  unsigned __int64 v42; // rdx
  char v43; // al
  _QWORD *v44; // rcx
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
  signed int v55; // ecx
  _DWORD *v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // r8
  size_t v59; // r9
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // r8
  unsigned __int64 v65; // r13
  __int64 v66; // rax
  char v67; // al
  unsigned __int64 v68; // rbx
  unsigned __int64 *v69; // rax
  unsigned __int64 *v70; // rax
  __int64 v71; // rax
  _QWORD *v73; // [rsp+0h] [rbp-B8h]
  unsigned int v74; // [rsp+0h] [rbp-B8h]
  size_t v75; // [rsp+0h] [rbp-B8h]
  __int64 v77; // [rsp+8h] [rbp-B0h]
  int v78; // [rsp+10h] [rbp-A8h]
  int v79; // [rsp+10h] [rbp-A8h]
  __int64 v80; // [rsp+10h] [rbp-A8h]
  __int64 v81; // [rsp+10h] [rbp-A8h]
  signed int v82; // [rsp+10h] [rbp-A8h]
  signed int v83; // [rsp+10h] [rbp-A8h]
  int v84; // [rsp+10h] [rbp-A8h]
  signed int v85; // [rsp+10h] [rbp-A8h]
  __int64 v86; // [rsp+10h] [rbp-A8h]
  signed int v87; // [rsp+10h] [rbp-A8h]
  signed int v88; // [rsp+10h] [rbp-A8h]
  signed int v89; // [rsp+10h] [rbp-A8h]
  __int64 v90; // [rsp+18h] [rbp-A0h]
  __int64 v91; // [rsp+18h] [rbp-A0h]
  int v92; // [rsp+18h] [rbp-A0h]
  int v93; // [rsp+18h] [rbp-A0h]
  __int64 v94; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v95; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v96; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v97; // [rsp+18h] [rbp-A0h]
  int v98; // [rsp+20h] [rbp-98h]
  int v99; // [rsp+20h] [rbp-98h]
  int v100; // [rsp+20h] [rbp-98h]
  __int64 v101; // [rsp+20h] [rbp-98h]
  int v102; // [rsp+20h] [rbp-98h]
  unsigned __int64 v103; // [rsp+20h] [rbp-98h]
  __int64 v104; // [rsp+30h] [rbp-88h] BYREF
  signed __int64 v105; // [rsp+38h] [rbp-80h] BYREF
  __int64 v106; // [rsp+40h] [rbp-78h] BYREF
  __int64 v107; // [rsp+48h] [rbp-70h]
  void *src; // [rsp+50h] [rbp-68h] BYREF
  __int128 v109; // [rsp+58h] [rbp-60h] BYREF
  __int128 v110; // [rsp+68h] [rbp-50h]
  unsigned __int64 v111; // [rsp+78h] [rbp-40h]

  v111 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v10 = *(_QWORD *)(a1 + 432) + 104LL * a2;
  if ( !(unsigned __int8)sub_1C34E0(v10, &v104, &v105, *(_DWORD *)(v10 + 88)) )
  {
    if ( !under_debugger )
      sub_383060(52270);
    goto LABEL_129;
  }
  v11 = *(_QWORD *)(a1 + 936);
  v12 = v104;
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
  if ( v104 > a3 )
  {
    if ( v14 > a3 || *(_BYTE *)(a1 + 320) )
      return (unsigned int)-1;
    if ( !*(_BYTE *)(*(_QWORD *)(v21 + 96) + 145LL) )
      return 0;
    v23 = *(_DWORD *)(a1 + 72);
    if ( v23 <= 0x10 )
    {
      v102 = v20 + a3;
      v94 = *(_QWORD *)(a1 + 1504);
      v84 = v20;
      v23 = getinf();
      v22 = v102;
      v21 = v94;
      v20 = v84;
    }
    v98 = v22;
    v90 = v21;
    v78 = v20;
    if ( v23 == 176 || v23 == 256 || (unsigned __int8)getinf_flag() || !(v104 % v9) || v105 % v9 || *(_DWORD *)v10 != 1 )
      return 0;
    v24 = v78;
    v25 = v9;
    v26 = v90;
    v27 = v98;
    if ( v78 >= v9 )
      v25 = v78;
    v28 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    if ( v25 == a4 )
    {
      if ( a4 % v28 )
        v28 = a4;
      v25 = v28;
      if ( a5 )
      {
        src = nullptr;
        copy_tinfo_t();
        v27 = v98;
        v26 = v90;
        v25 = v28;
        v24 = v78;
LABEL_35:
        v99 = v27;
        v91 = v26;
        v79 = v24;
        v29 = sub_227D30(a1, a3, &src, v25);
        clear_tinfo_t();
        v30 = v79;
        v31 = v91;
        if ( *(_DWORD *)(v10 + 88) >= v9 )
        {
          if ( !under_debugger )
            sub_383060(52271);
        }
        else
        {
          v32 = v91;
          v92 = v99;
          v80 = v31;
          v33 = (_QWORD *)(a1 + 432);
          v100 = v30;
          v34 = sub_228FE0((_QWORD *)(a1 + 432), v32, v29, (int)v104 - (int)v29);
          v35 = v80;
          v36 = v92;
          if ( v34 == -1 )
          {
            v104 = v29;
            if ( v92 < v105 )
              v36 = v105;
            v37 = v36 - v29;
            goto LABEL_66;
          }
          if ( v100 > v9 || *(_DWORD *)(*(_QWORD *)(a1 + 432) + 104LL * v34) == 2 )
            return (unsigned int)-1;
          if ( !under_debugger )
            sub_383060(52272);
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
  if ( v22 <= v105 )
    return 1;
  if ( v14 <= a3 && *(_BYTE *)(a1 + 320) )
    return (unsigned int)-1;
  v18 = *(_DWORD *)v10;
  if ( *(_DWORD *)v10 != 1 )
    return (unsigned int)-1;
  v101 = v14;
  v93 = v20 + a3;
  v33 = (_QWORD *)(a1 + 432);
  v81 = *(_QWORD *)(a1 + 1504);
  if ( (unsigned int)sub_228FE0((_QWORD *)(a1 + 432), v81, v105, v22 - (int)v105) != -1 )
    return (unsigned int)-1;
  v35 = v81;
  v37 = v93 - v104;
  if ( v101 > a3 )
  {
    v82 = v93 - v104;
    v38 = sub_226FD0(a1, v104, v93 - v104);
    v39 = v104;
    v40 = v82;
    if ( v38 )
    {
      v18 = -1;
      v40 = v104 - *(_DWORD *)(a1 + 144) + v82;
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
  v86 = v35;
  v50 = sub_11CA90(v37);
  v35 = v86;
  v37 = v50;
  v47 = 16;
  if ( (*(_BYTE *)(v86 + 50) & 8) == 0 )
    goto LABEL_68;
LABEL_69:
  if ( v37 > v47 )
    return (unsigned int)-1;
  v85 = v37;
  if ( (unsigned int)sub_228FE0(v33, v35, v105, (int)v104 + v37 - (int)v105) != -1 )
    return (unsigned int)-1;
  v39 = v104;
  v40 = v85;
  v18 = 1;
LABEL_47:
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_48;
  v48 = v40;
  v49 = *(_QWORD *)(a1 + 128);
  if ( v40 + v39 > v49 )
    goto LABEL_73;
  v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) & (v39 + *(_QWORD *)(a1 + 1440));
  v110 = 0;
  src = nullptr;
  v109 = 0u;
  if ( v51 + v40 - 1 >= v51 )
  {
    v103 = v40;
    v96 = v51;
    v88 = v40;
    *((_QWORD *)&v109 + 1) = qvector_reserve();
    v48 = v103;
    v40 = v88;
    v69 = (unsigned __int64 *)(16 * v110 + *((_QWORD *)&v109 + 1));
    *v69 = v96;
    v69[1] = v103;
    *(_QWORD *)&v110 = v110 + 1;
  }
  v95 = v48;
  v87 = v40;
  v52 = sub_64780((_QWORD *)(a1 + 832), &src);
  v53 = v87;
  v54 = v95;
  if ( v52 )
  {
    if ( !*((_QWORD *)&v109 + 1) )
      goto LABEL_93;
  }
  else
  {
    v67 = sub_318470(a1 + 848, (char *)&v109 + 8);
    v53 = v87;
    if ( !v67 )
    {
      if ( *((_QWORD *)&v109 + 1) )
      {
        *(_QWORD *)&v110 = 0;
        qfree();
      }
      goto LABEL_117;
    }
    v54 = v95;
    if ( !*((_QWORD *)&v109 + 1) )
      goto LABEL_93;
  }
  v95 = v54;
  v87 = v53;
  *(_QWORD *)&v110 = 0;
  qfree();
LABEL_93:
  qfree();
  v40 = v87;
  v48 = v95;
  v49 = *(_QWORD *)(a1 + 128);
LABEL_73:
  if ( v49 <= v39 )
  {
    v39 = v104;
    goto LABEL_48;
  }
  v68 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(a1 + 1440) + v39);
  src = nullptr;
  v109 = 0u;
  v110 = 0;
  if ( v68 + v48 - 1 >= v68 )
  {
    v97 = v48;
    v89 = v40;
    *((_QWORD *)&v109 + 1) = qvector_reserve();
    v40 = v89;
    v70 = (unsigned __int64 *)(16 * v110 + *((_QWORD *)&v109 + 1));
    *v70 = v68;
    v70[1] = v97;
    *(_QWORD *)&v110 = v110 + 1;
  }
  v87 = v40;
  if ( !(unsigned __int8)sub_64820(&src, (_QWORD *)(a1 + 832)) )
  {
    if ( !*((_QWORD *)&v109 + 1) )
    {
LABEL_111:
      qfree();
      return (unsigned int)-1;
    }
LABEL_110:
    *(_QWORD *)&v110 = 0;
    qfree();
    goto LABEL_111;
  }
  if ( !(unsigned __int8)sub_317F40(a1 + 848, (char *)&v109 + 8) )
  {
    if ( !*((_QWORD *)&v109 + 1) )
      goto LABEL_111;
    goto LABEL_110;
  }
  if ( *((_QWORD *)&v109 + 1) )
  {
    *(_QWORD *)&v110 = 0;
    qfree();
  }
LABEL_117:
  qfree();
  v39 = v104;
  v40 = v87;
LABEL_48:
  v41 = nullptr;
  if ( v40 == a4 )
    v41 = a5;
  v73 = v41;
  if ( *(_DWORD *)v10 != 1 )
  {
    if ( !under_debugger )
      sub_383060(52269);
    goto LABEL_129;
  }
  v42 = *(_QWORD *)(v10 + 8);
  if ( !*(_DWORD *)(v10 + 88) || v39 < v42 || *(int *)(v10 + 88) + v42 - 1 < v39 + v40 - 1 )
  {
    src = nullptr;
    v109 = 0;
    if ( *(_QWORD *)(a1 + 144) <= v39 )
    {
      v106 = v39;
      LOBYTE(v107) = 5;
      v83 = v40;
      v43 = sub_227ED0(a1, (__int64)&v106, v41, v40);
      v40 = v83;
      if ( !v43 )
        goto LABEL_76;
    }
    v44 = v73;
    v74 = v40;
    v45 = sub_2309F0(a1, v39, v40, v44, 3, (__int64 *)&src);
    if ( v45 == -1 && (!a6 || (*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 604LL) & 0x10) == 0) )
      goto LABEL_76;
    if ( *(_DWORD *)v10 == 1 )
      v46 = *(_QWORD *)(v10 + 8);
    else
      v46 = -1;
    cleanup_argloc();
    *(_QWORD *)(v10 + 8) = v39;
    *(_DWORD *)v10 = 1;
    if ( !(unsigned __int8)sub_1EF680((_DWORD *)v10, *(_QWORD **)(a1 + 1504), v74, 2) )
    {
      cleanup_argloc();
      *(_DWORD *)v10 = 1;
      *(_QWORD *)(v10 + 8) = v46;
LABEL_76:
      if ( src )
      {
        *(_QWORD *)&v109 = 0;
        qfree();
      }
      return (unsigned int)-1;
    }
    if ( v45 == -1 )
    {
      v55 = *(_DWORD *)(v10 + 88);
      v56 = *(_DWORD **)(a1 + 1504);
      v106 = 0;
      v107 = 0;
      sub_1EFA10(v56, (__int64 *)(a1 + 496), v10, v55, &v106, 0);
      cleanup_argloc();
      if ( (unsigned __int64)v109 > 1 )
      {
        v60 = (*(_QWORD *)(a1 + 504) == 0) + *(_QWORD *)(a1 + 504) - 1LL;
        v58 = v60 + 12;
        if ( *(_QWORD *)(a1 + 512) < (unsigned __int64)(v60 + 13) )
        {
          *(_QWORD *)(a1 + 496) = qvector_reserve();
          v58 = v60 + 12;
        }
        v61 = *(_QWORD *)(a1 + 496);
        *(_QWORD *)(a1 + 504) = v60 + 13;
        *(_BYTE *)(v61 + v58) = 0;
        qmemcpy((void *)(*(_QWORD *)(a1 + 496) + v60), " and stkvar ", 12);
        if ( (_QWORD)v109 )
        {
          v62 = v109 - 1;
          v59 = v109 - 1;
          if ( (_QWORD)v109 != 1 )
          {
            v63 = (*(_QWORD *)(a1 + 504) == 0) + *(_QWORD *)(a1 + 504) - 1LL;
            v64 = v62 + v63;
            v65 = v62 + (*(_QWORD *)(a1 + 504) == 0) + *(_QWORD *)(a1 + 504);
            if ( *(_QWORD *)(a1 + 512) < v65 )
            {
              v77 = v62 + v63;
              v75 = v109 - 1;
              v71 = qvector_reserve();
              v64 = v77;
              v59 = v75;
              *(_QWORD *)(a1 + 496) = v71;
            }
            v66 = *(_QWORD *)(a1 + 496);
            *(_QWORD *)(a1 + 504) = v65;
            *(_BYTE *)(v66 + v64) = 0;
            memcpy((void *)(*(_QWORD *)(a1 + 496) + v63), src, v59);
          }
        }
      }
      sub_1F08B0(a1, *(_QWORD *)(v10 + 16), 20, v57, v58, v59);
      *(_DWORD *)(v10 + 24) |= 0x400u;
    }
    if ( src )
    {
      *(_QWORD *)&v109 = 0;
      qfree();
    }
  }
  return v18;
}
