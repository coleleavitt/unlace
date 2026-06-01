/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54C80
// Address: 0x0000000000054C80

//----- (0000000000054C80) ----------------------------------------------------
__int64 __fastcall sub_54C80(unsigned int *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int *v4; // r15
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v9; // rax
  int v10; // ebx
  void (__fastcall *v11)(unsigned int *, __int64, __int64, _QWORD, __int64); // r14
  __int64 v12; // rax
  int v13; // ebx
  void (__fastcall *v14)(unsigned int *, __int64, __int64, _QWORD, __int64); // r14
  __int64 v15; // rax
  __int64 v16; // r12
  int v17; // ebx
  void (__fastcall *v18)(unsigned int *, __int64, __int64, _QWORD, __int64); // r14
  __int64 v19; // rax
  int v20; // ebx
  void (__fastcall *v21)(unsigned int *, __int64, __int64, _QWORD, __int64); // r14
  __int64 v22; // rax
  int v23; // r12d
  int v24; // ebx
  void (__fastcall *v25)(unsigned int *, __int64, __int64, _QWORD, __int64); // r14
  __int64 v26; // rax
  int v27; // eax
  unsigned __int64 v28; // rbp
  void *v29; // rcx
  char *v30; // rax
  int v31; // eax
  unsigned __int64 v32; // rbp
  void *v33; // rcx
  char *v34; // rax
  int v35; // ebx
  void (__fastcall *v36)(unsigned int *, __int64, unsigned __int64, _QWORD, __int64); // r14
  __int64 v37; // rax
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // rax
  char *v40; // rbp
  unsigned __int64 v41; // rax
  int *v42; // rcx
  size_t v43; // rdx
  __int64 v44; // rbx
  char *v45; // rax
  int v46; // ecx
  char *v47; // r13
  int v48; // ebx
  void (__fastcall *v49)(unsigned int *, __int64, unsigned __int64, _QWORD, __int64); // r14
  __int64 v50; // rax
  char *v51; // rax
  char *v52; // r12
  char v53; // r14
  char *v54; // rbp
  void *v55; // rax
  char *v56; // rax
  unsigned __int64 v57; // r14
  __int64 v58; // rbp
  unsigned __int64 v59; // rbx
  char *v60; // r15
  void *v61; // rdi
  char v62; // r14
  char *v63; // rbx
  unsigned __int64 v64; // rbp
  char v65; // r13
  __int64 v66; // r15
  unsigned __int64 j; // r14
  void *v68; // rdi
  char *v69; // rbx
  unsigned __int64 v70; // r14
  __int64 v71; // rbp
  unsigned __int64 k; // r15
  void *v73; // rdi
  void *v74; // r15
  __int64 v75; // rbp
  unsigned __int64 v76; // rbx
  char *v77; // r12
  void *v78; // rdi
  void *v79; // rbp
  char v80; // r12
  char *v81; // rbp
  unsigned __int64 v82; // rbx
  __int64 v83; // r15
  unsigned __int64 i; // r13
  void *v85; // rdi
  unsigned int v86; // ebx
  char *v88; // rbx
  void *v89; // r14
  unsigned __int64 v90; // r15
  __int64 m; // rbp
  void *v92; // rdi
  char v93; // [rsp+3h] [rbp-225h]
  unsigned int v94; // [rsp+4h] [rbp-224h]
  __int64 v96; // [rsp+10h] [rbp-218h]
  __int64 v97; // [rsp+10h] [rbp-218h]
  __int64 v98; // [rsp+18h] [rbp-210h]
  _QWORD *v99; // [rsp+20h] [rbp-208h]
  void *v100; // [rsp+28h] [rbp-200h]
  __int64 v101; // [rsp+30h] [rbp-1F8h] BYREF
  int v102[2]; // [rsp+38h] [rbp-1F0h] BYREF
  void *v103[2]; // [rsp+40h] [rbp-1E8h] BYREF
  unsigned __int64 v104; // [rsp+50h] [rbp-1D8h]
  void *v105[2]; // [rsp+60h] [rbp-1C8h] BYREF
  __int128 v106; // [rsp+70h] [rbp-1B8h] BYREF
  __int128 v107; // [rsp+80h] [rbp-1A8h] BYREF
  void *v108[2]; // [rsp+90h] [rbp-198h] BYREF
  __int64 v109; // [rsp+A0h] [rbp-188h]
  void *v110[3]; // [rsp+B0h] [rbp-178h] BYREF
  void *v111; // [rsp+C8h] [rbp-160h]
  unsigned __int64 v112; // [rsp+D0h] [rbp-158h]
  __int64 v113; // [rsp+D8h] [rbp-150h]
  void *v114; // [rsp+E0h] [rbp-148h]
  __int64 v115; // [rsp+E8h] [rbp-140h]
  __int64 v116; // [rsp+F0h] [rbp-138h]
  void *v117[3]; // [rsp+118h] [rbp-110h] BYREF
  void *v118; // [rsp+130h] [rbp-F8h]
  unsigned __int64 v119; // [rsp+138h] [rbp-F0h]
  __int64 v120; // [rsp+140h] [rbp-E8h]
  void *ptr; // [rsp+148h] [rbp-E0h]
  __int64 v122; // [rsp+150h] [rbp-D8h]
  __int64 v123; // [rsp+158h] [rbp-D0h]
  void *v124[2]; // [rsp+180h] [rbp-A8h] BYREF
  void *v125[2]; // [rsp+190h] [rbp-98h] BYREF
  __int128 v126; // [rsp+1A0h] [rbp-88h]
  void *v127[2]; // [rsp+1B0h] [rbp-78h] BYREF
  unsigned __int64 v128; // [rsp+1C0h] [rbp-68h]
  __int64 v129; // [rsp+1C8h] [rbp-60h]
  __int128 v130; // [rsp+1D0h] [rbp-58h] BYREF
  char v131[16]; // [rsp+1E0h] [rbp-48h] BYREF
  unsigned __int64 v132; // [rsp+1F0h] [rbp-38h]

  v132 = __readfsqword(0x28u);
  v3 = a1[59];
  if ( !a1[59] )
    return 0;
  v4 = a1;
  if ( !*((_BYTE *)a1 + 248) )
  {
    if ( !(_BYTE)under_debugger )
      interr(20099);
    BUG();
  }
  if ( *((_QWORD *)a1 + 15) <= v3 )
    return 0;
  v5 = *((_QWORD *)a1 + 14);
  v6 = v3 << 6;
  if ( !(v6 + v5) )
    return 0;
  v9 = qlseek(*((_QWORD *)a1 + 59), *(_QWORD *)(v5 + v6 + 24) + *((_QWORD *)a1 + 60), 0);
  *(_OWORD *)v108 = 0;
  v107 = 0;
  v106 = 0;
  *(_OWORD *)v105 = 0;
  v109 = 0;
  LOBYTE(v9) = 1;
  v94 = v9;
  if ( !*(_QWORD *)(v5 + v6 + 32) )
    goto LABEL_147;
  v98 = a3;
  v93 = *((_BYTE *)a1 + 509);
  v99 = (_QWORD *)(v6 + v5 + 32);
  while ( 1 )
  {
    v10 = lreadbytes(*((_QWORD *)v4 + 59), (char *)&v106 + 12, 4, *((_BYTE *)v4 + 616));
    if ( v10 < 0 )
    {
      v11 = *((void (__fastcall **)(unsigned int *, __int64, __int64, _QWORD, __int64))v4 + 62);
      v12 = qlseek(*((_QWORD *)v4 + 59), 0, 1);
      v11(v4, 19, 4, v10, v12);
    }
    if ( !HIDWORD(v106) )
      break;
    if ( HIDWORD(v106) > 0xFFFFFFEF )
      goto LABEL_145;
    *(_OWORD *)v103 = 0;
    v104 = 0;
    v13 = lreadbytes(*((_QWORD *)v4 + 59), &v107, 4, *((_BYTE *)v4 + 616));
    if ( v13 < 0 )
    {
      v14 = *((void (__fastcall **)(unsigned int *, __int64, __int64, _QWORD, __int64))v4 + 62);
      v15 = qlseek(*((_QWORD *)v4 + 59), 0, 1);
      v14(v4, 19, 4, v13, v15);
    }
    if ( (_DWORD)v107 )
    {
      v16 = qlseek(*((_QWORD *)v4 + 59), 0, 1) - *((_QWORD *)v4 + 60);
      *(_QWORD *)((char *)&v107 + 4) = (unsigned int)(DWORD2(v106) + 4 - v107);
      v17 = lreadbytes(*((_QWORD *)v4 + 59), v102, 4, *((_BYTE *)v4 + 616));
      if ( v17 < 0 )
      {
        v18 = *((void (__fastcall **)(unsigned int *, __int64, __int64, _QWORD, __int64))v4 + 62);
        v19 = qlseek(*((_QWORD *)v4 + 59), 0, 1);
        v18(v4, 19, 4, v17, v19);
      }
      v20 = lreadbytes(*((_QWORD *)v4 + 59), (char *)&v101 + 4, 4, *((_BYTE *)v4 + 616));
      if ( v20 < 0 )
      {
        v21 = *((void (__fastcall **)(unsigned int *, __int64, __int64, _QWORD, __int64))v4 + 62);
        v22 = qlseek(*((_QWORD *)v4 + 59), 0, 1);
        v21(v4, 19, 4, v20, v22);
      }
      if ( SHIDWORD(v106) < 12 )
      {
LABEL_19:
        v23 = 1;
        goto LABEL_137;
      }
      v31 = HIDWORD(v106) - 12;
      if ( HIDWORD(v106) != 12 )
      {
        v32 = v31;
        v33 = v103[1];
        if ( v103[1] >= (void *)v31 )
        {
          if ( v103[1] != (void *)v31 )
          {
            LOBYTE(v124[0]) = 0;
            sub_5E330((__int64)v103, v31, (char *)v124);
          }
        }
        else
        {
          v34 = (char *)v103[0];
          if ( v104 < v32 )
          {
            v34 = (char *)qvector_reserve((__int64)v103, (char *)v103[0], v32, 1u);
            v103[0] = v34;
            v33 = v103[1];
          }
          memset(&v34[(_QWORD)v33], 0, v32 - (_QWORD)v33);
          v103[1] = (void *)v32;
        }
        v35 = lreadbytes(*((_QWORD *)v4 + 59), v103[0], v32, *((_BYTE *)v4 + 616));
        if ( v35 < 0 )
        {
          v36 = *((void (__fastcall **)(unsigned int *, __int64, unsigned __int64, _QWORD, __int64))v4 + 62);
          v37 = qlseek(*((_QWORD *)v4 + 59), 0, 1);
          v36(v4, 19, v32, v35, v37);
        }
        if ( v93 == 2 )
          memrev((char *)v103[0], v32);
        v38 = *a2;
        v39 = *a2 + 104 * a2[1];
        if ( *a2 < v39 )
        {
          do
          {
            if ( *(_DWORD *)(v38 + 72) == DWORD1(v107) )
              break;
            v38 += 104LL;
          }
          while ( v38 < v39 );
        }
        if ( v38 == v39 )
          goto LABEL_19;
        v124[0] = v103[0];
        v40 = (char *)v103[1] + (unsigned __int64)v103[0];
        v41 = *(_QWORD *)(v38 + 56);
        v42 = &dword_101BA4;
        if ( v41 )
          v42 = *(int **)(v38 + 48);
        if ( *(_BYTE *)v42 == 122 )
        {
          if ( !unpack_xleb128(&v101, 32, 0, (char **)v124, (unsigned __int64)v103[1] + (unsigned __int64)v103[0]) )
            goto LABEL_19;
          v43 = (unsigned int)v101;
          if ( v40 - (char *)v124[0] < (unsigned int)v101 )
          {
            LODWORD(v101) = (_DWORD)v40 - LODWORD(v124[0]);
            v43 = (unsigned int)((_DWORD)v40 - LODWORD(v124[0]));
          }
          v105[1] = nullptr;
          sub_56350((__int64)v105, v124[0], v43);
          v124[0] = (char *)v124[0] + (unsigned int)v101;
          v41 = *(_QWORD *)(v38 + 56);
        }
        v96 = (__int64)a2;
        if ( v41 >= 2 && (v44 = *(_QWORD *)(v38 + 48), (v45 = strchr((const char *)(v44 + 1), 82)) != nullptr) )
        {
          v46 = v102[0];
          v47 = v40;
          if ( &v45[-v44] != (char *)-1LL )
            v46 = v16 + v102[0];
        }
        else
        {
          v47 = v40;
          v46 = v102[0];
        }
        DWORD2(v107) = v46;
        HIDWORD(v107) = v46 + HIDWORD(v101);
        v74 = v108[1];
        if ( v108[1] )
        {
          v75 = 0;
          v76 = 0;
          do
          {
            v77 = (char *)v108[0];
            v78 = *(void **)((char *)v108[0] + v75);
            if ( v78 )
            {
              *(_QWORD *)((char *)v108[0] + v75 + 8) = 0;
              qfree(v78);
              *(_QWORD *)&v77[v75] = 0;
              *(_QWORD *)&v77[v75 + 16] = 0;
            }
            ++v76;
            v75 += 40;
          }
          while ( v76 < (unsigned __int64)v74 );
          v46 = DWORD2(v107);
        }
        v108[1] = nullptr;
        LODWORD(v101) = v46;
        v4 = a1;
        v79 = v47;
        a2 = (unsigned __int64 *)v96;
        v100 = v79;
        while ( v124[0] < v79 )
        {
          sub_56780((__int64)v110, v38);
          v80 = sub_56430(
                  (__int64)v108,
                  (unsigned __int8 **)v124,
                  (unsigned __int64)v79,
                  (__int64)v110,
                  v93 == 2,
                  &v101);
          if ( v114 )
          {
            v115 = 0;
            qfree(v114);
            v114 = nullptr;
            v116 = 0;
          }
          v81 = (char *)v111;
          if ( v111 )
          {
            v82 = v112;
            if ( v112 )
            {
              v83 = 0;
              for ( i = 1; ; ++i )
              {
                v85 = *(void **)&v81[v83];
                if ( v85 )
                {
                  *(_QWORD *)&v81[v83 + 8] = 0;
                  qfree(v85);
                  *(_QWORD *)&v81[v83] = 0;
                  *(_QWORD *)&v81[v83 + 16] = 0;
                }
                if ( i >= v82 )
                  break;
                v81 = (char *)v111;
                v83 += 40;
              }
              v81 = (char *)v111;
              a2 = (unsigned __int64 *)v96;
              v4 = a1;
            }
            v112 = 0;
            qfree(v81);
            v111 = nullptr;
            v113 = 0;
          }
          v79 = v100;
          if ( v110[0] )
          {
            v110[1] = nullptr;
            qfree(v110[0]);
            v110[0] = nullptr;
            v110[2] = nullptr;
          }
          if ( !v80 )
            goto LABEL_19;
        }
      }
      sub_56100(v98, (__int64)v105);
      DWORD2(v106) += HIDWORD(v106) + 4;
LABEL_136:
      v23 = 0;
      goto LABEL_137;
    }
    v128 = 0;
    v130 = 0;
    *(_OWORD *)v127 = 0;
    v126 = 0;
    *(_OWORD *)v125 = 0;
    *(_OWORD *)v124 = 0;
    v131[0] = 0;
    v129 = *((_QWORD *)&v106 + 1);
    LODWORD(v130) = 0;
    v24 = lreadbytes(*((_QWORD *)v4 + 59), v131, 1, *((_BYTE *)v4 + 616));
    if ( v24 < 0 )
    {
      v25 = *((void (__fastcall **)(unsigned int *, __int64, __int64, _QWORD, __int64))v4 + 62);
      v26 = qlseek(*((_QWORD *)v4 + 59), 0, 1);
      v25(v4, 19, 1, v24, v26);
    }
    v23 = 1;
    if ( SHIDWORD(v129) >= 5 )
    {
      v27 = HIDWORD(v129) - 5;
      v28 = HIDWORD(v129) - 5;
      v29 = v103[1];
      if ( v103[1] >= (void *)v28 )
      {
        if ( v103[1] != (void *)v27 )
        {
          LOBYTE(v102[0]) = 0;
          sub_5E330((__int64)v103, v27, (char *)v102);
        }
      }
      else
      {
        v30 = (char *)v103[0];
        if ( v104 < v28 )
        {
          v30 = (char *)qvector_reserve((__int64)v103, (char *)v103[0], v28, 1u);
          v103[0] = v30;
          v29 = v103[1];
        }
        memset(&v30[(_QWORD)v29], 0, v28 - (_QWORD)v29);
        v103[1] = (void *)v28;
      }
      v48 = lreadbytes(*((_QWORD *)v4 + 59), v103[0], v28, *((_BYTE *)v4 + 616));
      if ( v48 < 0 )
      {
        v49 = *((void (__fastcall **)(unsigned int *, __int64, unsigned __int64, _QWORD, __int64))v4 + 62);
        v50 = qlseek(*((_QWORD *)v4 + 59), 0, 1);
        v49(v4, 19, v28, v48, v50);
      }
      if ( v93 == 2 )
        memrev((char *)v103[0], v28);
      v127[1] = nullptr;
      v51 = (char *)v103[0];
      *(void **)v102 = v103[0];
      v52 = (char *)v103[0] + (unsigned __int64)v103[1];
      if ( v103[0] < (char *)v103[0] + (unsigned __int64)v103[1] )
      {
        do
        {
          *(_QWORD *)v102 = v51 + 1;
          v53 = *v51;
          v54 = (char *)v127[1];
          if ( v127[1] )
            v54 = (char *)v127[1] - 1;
          v55 = v127[0];
          if ( v128 < (unsigned __int64)(v54 + 2) )
          {
            v55 = qvector_reserve((__int64)v127, (char *)v127[0], (unsigned __int64)(v54 + 2), 1u);
            v127[0] = v55;
          }
          v127[1] = v54 + 2;
          v54[(_QWORD)v55] = v53;
          *((_BYTE *)v127[0] + (unsigned __int64)v54 + 1) = 0;
          if ( !v53 )
            break;
          v51 = *(char **)v102;
        }
        while ( *(_QWORD *)v102 < (unsigned __int64)v52 );
      }
      if ( !unpack_xleb128((__int64 *)((char *)&v130 + 4), 32, 0, (char **)v102, (unsigned __int64)v52)
        || !unpack_xleb128((__int64 *)&v130 + 1, 32, 1, (char **)v102, (unsigned __int64)v52)
        || !unpack_xleb128((__int64 *)((char *)&v130 + 12), 32, 0, (char **)v102, (unsigned __int64)v52) )
      {
LABEL_95:
        v23 = 1;
        goto LABEL_96;
      }
      v56 = byte_155771;
      if ( v127[1] )
        v56 = (char *)v127[0];
      if ( *v56 == 122 )
      {
        if ( !unpack_xleb128((__int64 *)((char *)&v101 + 4), 32, 0, (char **)v102, (unsigned __int64)v52) )
          goto LABEL_95;
        sub_56350((__int64)v124, *(const void **)v102, HIDWORD(v101));
        *(_QWORD *)v102 += HIDWORD(v101);
      }
      v57 = v126;
      if ( (_QWORD)v126 )
      {
        v58 = 0;
        v59 = 0;
        do
        {
          v60 = (char *)v125[1];
          v61 = *(void **)((char *)v125[1] + v58);
          if ( v61 )
          {
            *(_QWORD *)((char *)v125[1] + v58 + 8) = 0;
            qfree(v61);
            *(_QWORD *)&v60[v58] = 0;
            *(_QWORD *)&v60[v58 + 16] = 0;
          }
          ++v59;
          v58 += 40;
        }
        while ( v59 < v57 );
      }
      *(_QWORD *)&v126 = 0;
      v4 = a1;
      v97 = (__int64)a2;
      while ( *(_QWORD *)v102 < (unsigned __int64)v52 )
      {
        sub_56780((__int64)v117, (__int64)v124);
        v62 = sub_56430(
                (__int64)&v125[1],
                (unsigned __int8 **)v102,
                (unsigned __int64)v52,
                (__int64)v117,
                v93 == 2,
                nullptr);
        if ( ptr )
        {
          v122 = 0;
          qfree(ptr);
          ptr = nullptr;
          v123 = 0;
        }
        v63 = (char *)v118;
        if ( v118 )
        {
          v64 = v119;
          if ( v119 )
          {
            v65 = v62;
            v66 = 0;
            for ( j = 1; ; ++j )
            {
              v68 = *(void **)&v63[v66];
              if ( v68 )
              {
                *(_QWORD *)&v63[v66 + 8] = 0;
                qfree(v68);
                *(_QWORD *)&v63[v66] = 0;
                *(_QWORD *)&v63[v66 + 16] = 0;
              }
              if ( j >= v64 )
                break;
              v63 = (char *)v118;
              v66 += 40;
            }
            v63 = (char *)v118;
            v4 = a1;
            v62 = v65;
            a2 = (unsigned __int64 *)v97;
          }
          v119 = 0;
          qfree(v63);
          v118 = nullptr;
          v120 = 0;
        }
        if ( v117[0] )
        {
          v117[1] = nullptr;
          qfree(v117[0]);
          v117[0] = nullptr;
          v117[2] = nullptr;
        }
        if ( !v62 )
          goto LABEL_95;
      }
      sub_56880((__int64)a2, (__int64)v124);
      DWORD2(v106) += HIDWORD(v129) + 4;
      v23 = 0;
    }
LABEL_96:
    if ( v127[0] )
    {
      v127[1] = nullptr;
      qfree(v127[0]);
      v127[0] = nullptr;
      v128 = 0;
    }
    v69 = (char *)v125[1];
    if ( v125[1] )
    {
      v70 = v126;
      if ( (_QWORD)v126 )
      {
        v71 = 0;
        for ( k = 1; ; ++k )
        {
          v73 = *(void **)&v69[v71];
          if ( v73 )
          {
            *(_QWORD *)&v69[v71 + 8] = 0;
            qfree(v73);
            *(_QWORD *)&v69[v71] = 0;
            *(_QWORD *)&v69[v71 + 16] = 0;
          }
          if ( k >= v70 )
            break;
          v69 = (char *)v125[1];
          v71 += 40;
        }
        v69 = (char *)v125[1];
        v4 = a1;
      }
      *(_QWORD *)&v126 = 0;
      qfree(v69);
      v125[1] = nullptr;
      *((_QWORD *)&v126 + 1) = 0;
    }
    if ( v124[0] )
    {
      v124[1] = nullptr;
      qfree(v124[0]);
      v124[0] = nullptr;
      v125[0] = nullptr;
    }
    if ( !v23 )
      goto LABEL_136;
LABEL_137:
    if ( v103[0] )
    {
      v103[1] = nullptr;
      qfree(v103[0]);
      v103[0] = nullptr;
      v104 = 0;
    }
    if ( v23 )
    {
LABEL_145:
      v94 = 0;
      goto LABEL_147;
    }
    if ( *v99 <= (unsigned __int64)SDWORD2(v106) )
      goto LABEL_147;
  }
  sub_56100(v98, (__int64)v105);
LABEL_147:
  v88 = (char *)v108[0];
  if ( v108[0] )
  {
    v89 = v108[1];
    if ( v108[1] )
    {
      v90 = 1;
      for ( m = 0; ; m += 40 )
      {
        v92 = *(void **)&v88[m];
        if ( v92 )
        {
          *(_QWORD *)&v88[m + 8] = 0;
          qfree(v92);
          *(_QWORD *)&v88[m] = 0;
          *(_QWORD *)&v88[m + 16] = 0;
        }
        if ( v90 >= (unsigned __int64)v89 )
          break;
        v88 = (char *)v108[0];
        ++v90;
      }
      v88 = (char *)v108[0];
    }
    v108[1] = nullptr;
    qfree(v88);
    v108[0] = nullptr;
    v109 = 0;
  }
  v86 = v94;
  if ( v105[0] )
  {
    v105[1] = nullptr;
    qfree(v105[0]);
    v105[0] = nullptr;
    *(_QWORD *)&v106 = 0;
  }
  return v86;
}
// 101BA4: using guessed type int dword_101BA4;
// 158B40: using guessed type __int64 under_debugger;
