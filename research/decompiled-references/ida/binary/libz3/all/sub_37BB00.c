__int64 __fastcall sub_37BB00(_QWORD *a1, __int64 **a2, __int64 a3)
{
  __int64 *v6; // rax
  _DWORD **v7; // rbp
  unsigned __int64 v8; // r15
  _DWORD *v9; // r14
  bool v10; // zf
  __int64 v11; // r8
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi
  char v15; // r15
  char v16; // al
  char v17; // cl
  __int64 v18; // r14
  unsigned int v19; // ebp
  __int64 v20; // rax
  int v21; // edx
  _QWORD *v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  _QWORD *v25; // rax
  __int64 *v26; // r9
  int v27; // eax
  __int64 v28; // rcx
  __int64 *v29; // r14
  unsigned int v30; // edx
  unsigned int v31; // ebp
  _DWORD **v32; // r13
  _QWORD *v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // r13
  __int64 v37; // rbx
  _QWORD *v38; // r14
  int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v45; // r14
  __int64 v46; // rax
  _QWORD *v47; // r15
  int v48; // eax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 *v51; // rdx
  __int64 v52; // rbp
  __int64 (__fastcall **(__fastcall ***v53)(_QWORD *))(); // r14
  __int64 (__fastcall **(__fastcall *v54)(_QWORD *))(); // rax
  void (***v55)(void); // rdi
  __int64 v56; // rbp
  __int64 v57; // rax
  _QWORD *v58; // rdi
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rdx
  char v63; // al
  unsigned int v64; // eax
  int v65; // eax
  __int64 *v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // eax
  int *v73; // rax
  unsigned int v74; // edx
  int v75; // eax
  int *v76; // rax
  unsigned int v77; // edx
  int v78; // eax
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rdi
  unsigned int v85; // ecx
  unsigned int v86; // ebx
  _DWORD **v87; // rbp
  __int64 v88; // rbx
  __int64 v89; // rax
  _QWORD *v90; // rdi
  __int64 v91; // rax
  __int64 i; // rax
  __int64 j; // rax
  _Unwind_Exception *v94; // [rsp+0h] [rbp-118h]
  _Unwind_Exception *v95; // [rsp+0h] [rbp-118h]
  _Unwind_Exception *v96; // [rsp+0h] [rbp-118h]
  __int64 *ptr; // [rsp+8h] [rbp-110h]
  int ptra; // [rsp+8h] [rbp-110h]
  int ptrb; // [rsp+8h] [rbp-110h]
  __int64 *ptrc; // [rsp+8h] [rbp-110h]
  _QWORD *v101; // [rsp+10h] [rbp-108h]
  int v102; // [rsp+10h] [rbp-108h]
  int v103; // [rsp+10h] [rbp-108h]
  __int64 *v104; // [rsp+18h] [rbp-100h]
  __int64 v105; // [rsp+18h] [rbp-100h]
  __int64 v106; // [rsp+18h] [rbp-100h]
  char *v107; // [rsp+20h] [rbp-F8h]
  __int64 v108; // [rsp+20h] [rbp-F8h]
  __int64 v109; // [rsp+20h] [rbp-F8h]
  __int64 *v110; // [rsp+28h] [rbp-F0h]
  __int64 *v111; // [rsp+28h] [rbp-F0h]
  void *v112; // [rsp+28h] [rbp-F0h]
  void *v113; // [rsp+28h] [rbp-F0h]
  __int64 *v114; // [rsp+28h] [rbp-F0h]
  _QWORD *v115; // [rsp+38h] [rbp-E0h]
  int v116; // [rsp+40h] [rbp-D8h]
  int v117[2]; // [rsp+40h] [rbp-D8h]
  int v118[2]; // [rsp+40h] [rbp-D8h]
  int v119[2]; // [rsp+48h] [rbp-D0h]
  int v120[2]; // [rsp+48h] [rbp-D0h]
  int v121[2]; // [rsp+48h] [rbp-D0h]
  void *v122; // [rsp+50h] [rbp-C8h]
  unsigned int v123; // [rsp+50h] [rbp-C8h]
  void *v124; // [rsp+50h] [rbp-C8h]
  unsigned int v125; // [rsp+50h] [rbp-C8h]
  char v126[8]; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v127; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v128; // [rsp+78h] [rbp-A0h]
  __int64 v129; // [rsp+80h] [rbp-98h] BYREF
  __int64 v130; // [rsp+88h] [rbp-90h]
  __int64 v131; // [rsp+90h] [rbp-88h] BYREF
  __int64 v132; // [rsp+98h] [rbp-80h]
  __int64 v133; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v134; // [rsp+A8h] [rbp-70h]
  __int64 v135; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v136; // [rsp+B8h] [rbp-60h]
  __int64 v137; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v138; // [rsp+C8h] [rbp-50h]
  __int64 v139; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v140; // [rsp+D8h] [rbp-40h]

  v6 = *a2;
  v7 = *(_DWORD ***)a3;
  v8 = *(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8);
  LOBYTE(ptr) = *((_BYTE *)*a2 + 123);
  if ( *(_QWORD *)a3 < v8 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = v9[8]-- == 1;
          if ( v10 )
            break;
        }
        if ( (unsigned __int64)++v7 >= v8 )
          goto LABEL_7;
      }
      ++v7;
      sub_ED44E0(v9);
      sub_186B220(v9);
    }
    while ( (unsigned __int64)v7 < v8 );
LABEL_7:
    v6 = *a2;
  }
  *(_DWORD *)(a3 + 8) = 0;
  v107 = v126;
  sub_EE4940(v126, "fpa2bv", v6);
  v101 = a1 + 81;
  sub_D85AF0(a1 + 81);
  v12 = *a2;
  if ( (*((_BYTE *)*a2 + 123) & 0x20) == 0 )
  {
    v13 = *a1;
    *((_DWORD *)a1 + 312) = 0;
    v127 = 0;
    v14 = v12[9];
    v128 = v13;
    v15 = (unsigned __int8)ptr & 8;
    v130 = v13;
    v16 = *((_BYTE *)v12 + 123);
    v129 = 0;
    if ( !v14 )
    {
LABEL_32:
      if ( (v16 & 4) != 0 )
      {
        ptr = v12;
        v49 = sub_37D7A0(*a1, a1 + 1);
        v50 = sub_1336AB0(ptr[1], v49);
        v51 = ptr;
        v52 = v50;
        if ( v50 )
          ++*(_DWORD *)(v50 + 8);
        v53 = (__int64 (__fastcall **(__fastcall ***)(_QWORD *))())ptr[1];
        if ( v53 )
        {
          v10 = (*((_DWORD *)v53 + 2))-- == 1;
          if ( v10 )
          {
            v54 = **v53;
            if ( v54 == sub_37B4A0 )
            {
              v55 = (void (***)(void))v53[5];
              *v53 = (__int64 (__fastcall **(__fastcall **)(_QWORD *))())&off_1C64D38;
              if ( v55 )
              {
                LODWORD(v101) = (_DWORD)ptr;
                (**v55)();
                sub_186B220(v55);
                v51 = ptr;
              }
            }
            else
            {
              v54(v53);
              v51 = ptr;
            }
            ptr = v51;
            sub_186B220(v53);
            v51 = ptr;
          }
        }
        v51[1] = v52;
        v12 = *a2;
      }
      v27 = *((_DWORD *)v12 + 30);
      v28 = (v27 + 1) & 0x3FFFFFF;
      *((_DWORD *)v12 + 30) = v28 | v27 & 0xFC000000;
      v29 = *a2;
      if ( *a2 )
        ++*((_DWORD *)v29 + 8);
      v30 = *(_DWORD *)(a3 + 8);
      v31 = *(_DWORD *)(a3 + 12);
      if ( v30 >= v31 )
      {
        v56 = 2 * v31;
        v57 = sub_186B270(8 * v56);
        v30 = *(_DWORD *)(a3 + 8);
        v58 = *(_QWORD **)a3;
        v32 = (_DWORD **)v57;
        if ( v30 )
        {
          if ( v30 - 1 <= 2 || (_QWORD *)v57 == v58 + 1 )
          {
            for ( i = 0; i != v30; ++i )
            {
              v28 = v58[i];
              v32[i] = (_DWORD *)v28;
            }
          }
          else
          {
            v59 = 0;
            v28 = 16LL * (v30 >> 1);
            do
            {
              *(__m128i *)&v32[v59 / 8] = _mm_loadu_si128((const __m128i *)&v58[v59 / 8]);
              v59 += 16LL;
            }
            while ( v59 != v28 );
            if ( (v30 & 1) != 0 )
            {
              v60 = v30 & 0xFFFFFFFE;
              v28 = v58[v60];
              v32[v60] = (_DWORD *)v28;
            }
          }
        }
        if ( v58 != (_QWORD *)(a3 + 16) && v58 )
        {
          sub_186B220(v58);
          v30 = *(_DWORD *)(a3 + 8);
        }
        *(_QWORD *)a3 = v32;
        *(_DWORD *)(a3 + 12) = v56;
      }
      else
      {
        v32 = *(_DWORD ***)a3;
      }
      v33 = (_QWORD *)a1[80];
      v34 = v30;
      v35 = v30 + 1;
      v32[v34] = v29;
      *(_DWORD *)(a3 + 8) = v35;
      if ( v33 )
      {
        v36 = &v33[*((unsigned int *)v33 - 1)];
        if ( v36 != v33 )
        {
          if ( v15 )
          {
            do
            {
              v45 = *v33;
              v46 = sub_15DE060(*a1, *v33, v35, v28, v11);
              v47 = *(_QWORD **)(*(_QWORD *)a3 + 8LL * (unsigned int)(*(_DWORD *)(a3 + 8) - 1));
              v48 = sub_15D3210(*v47, v46);
              sub_EDBA20((int)v47, v45, v48, v94, (int)ptr, (int)v101, (__int64)v104, (__int64)v107);
              ++v33;
            }
            while ( v36 != v33 );
          }
          else
          {
            do
            {
              v37 = *v33;
              v38 = *(_QWORD **)(*(_QWORD *)a3 + 8LL * (unsigned int)(*(_DWORD *)(a3 + 8) - 1));
              v39 = sub_15D3210(*v38, 0);
              sub_EDBA20((int)v38, v37, v39, v94, (int)ptr, (int)v101, (__int64)v104, (__int64)v107);
              ++v33;
            }
            while ( v36 != v33 );
          }
        }
      }
      v40 = v129;
      if ( v129 )
      {
        v41 = v130;
        v10 = (*(_DWORD *)(v129 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v41, v40);
      }
      v42 = v127;
      if ( v127 )
      {
        v43 = v128;
        v10 = (*(_DWORD *)(v127 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v43, v42);
      }
      return sub_EE4A00(v107);
    }
    v17 = *(_BYTE *)(v14 + 3) >> 6;
    if ( v17 )
    {
      if ( v17 != 1 )
      {
LABEL_12:
        if ( v17 == 2 )
          LODWORD(ptr) = *(_DWORD *)(v14 + 4) - 1;
        else
          LODWORD(ptr) = *(_DWORD *)(v14 + 4);
LABEL_14:
        if ( (_DWORD)ptr )
        {
          v18 = 0;
          v19 = 0;
          v104 = &v129;
          while ( 1 )
          {
            v16 = *((_BYTE *)v12 + 123);
            if ( (v16 & 0x20) != 0 )
              goto LABEL_32;
            v23 = v12[9];
            v24 = 17;
            while ( 1 )
            {
              if ( *(char *)(v23 + 3) < 0 )
              {
                if ( *(_BYTE *)(v23 + 3) >> 6 != 2 )
                {
                  v25 = (_QWORD *)(v18 + *(_QWORD *)(v23 + 16));
                  goto LABEL_28;
                }
                goto LABEL_74;
              }
              if ( *(_DWORD *)(v23 + 4) == v19 )
                break;
LABEL_74:
              v23 = *(_QWORD *)(v23 + 16);
              if ( !--v24 )
              {
                v111 = v12;
                sub_233F80((__int64 *)(*v12 + 616), (_DWORD *)v12 + 18);
                v25 = (_QWORD *)(v18 + *(_QWORD *)(v111[9] + 16));
                goto LABEL_28;
              }
            }
            v25 = (_QWORD *)(v23 + 8);
LABEL_28:
            sub_D8DBA0(v101, *v25, &v127, v104);
            *((_DWORD *)a1 + 312) += *((_DWORD *)a1 + 200);
            if ( !v15 )
              goto LABEL_29;
            v61 = (*a2)[11];
            if ( !v61 )
              goto LABEL_88;
            v62 = (*a2)[11];
            v63 = *(_BYTE *)(v61 + 3) >> 6;
            if ( v63 )
            {
              if ( v63 != 1 )
                goto LABEL_79;
LABEL_96:
              if ( v19 >= *(_DWORD *)(v62 + 4) + 1 )
                goto LABEL_97;
            }
            else
            {
              do
              {
                v62 = *(_QWORD *)(v62 + 16);
                v63 = *(_BYTE *)(v62 + 3) >> 6;
              }
              while ( !v63 );
              if ( v63 == 1 )
                goto LABEL_96;
LABEL_79:
              if ( v63 == 2 )
                v64 = *(_DWORD *)(v62 + 4) - 1;
              else
                v64 = *(_DWORD *)(v62 + 4);
              if ( v19 >= v64 )
              {
LABEL_97:
                v61 = 0;
                goto LABEL_88;
              }
            }
            v65 = 18;
            while ( 2 )
            {
              if ( !--v65 )
              {
                v114 = *a2;
                sub_233F80((__int64 *)(**a2 + 616), (_DWORD *)*a2 + 22);
                v66 = (__int64 *)(v18 + *(_QWORD *)(v114[11] + 16));
                goto LABEL_87;
              }
              if ( *(char *)(v61 + 3) < 0 )
              {
                if ( *(_BYTE *)(v61 + 3) >> 6 != 2 )
                {
                  v66 = (__int64 *)(v18 + *(_QWORD *)(v61 + 16));
                  goto LABEL_87;
                }
                goto LABEL_99;
              }
              if ( v19 != *(_DWORD *)(v61 + 4) )
              {
LABEL_99:
                v61 = *(_QWORD *)(v61 + 16);
                continue;
              }
              break;
            }
            v66 = (__int64 *)(v61 + 8);
LABEL_87:
            v61 = *v66;
LABEL_88:
            v67 = sub_15DE0E0(*a1, v61, v129);
            if ( v67 )
              ++*(_DWORD *)(v67 + 8);
            v68 = v129;
            if ( v129 )
            {
              v69 = v130;
              v10 = (*(_DWORD *)(v129 + 8))-- == 1;
              if ( v10 )
              {
                v113 = (void *)v67;
                sub_15D7BC0(v69, v68);
                v67 = (__int64)v113;
              }
            }
            v129 = v67;
LABEL_29:
            v26 = *a2;
            if ( (*((_BYTE *)*a2 + 123) & 0x10) != 0 )
            {
              v20 = v26[13];
              v21 = 17;
              do
              {
                if ( *(char *)(v20 + 3) >= 0 )
                {
                  if ( v19 == *(_DWORD *)(v20 + 4) )
                    goto LABEL_19;
                }
                else if ( *(_BYTE *)(v20 + 3) >> 6 != 2 )
                {
                  goto LABEL_19;
                }
                v20 = *(_QWORD *)(v20 + 16);
                --v21;
              }
              while ( v21 );
              v110 = *a2;
              sub_236900((_QWORD *)(*v26 + 672), v26 + 13);
              LODWORD(v26) = (_DWORD)v110;
            }
LABEL_19:
            sub_EDBFA0((int)v26);
            if ( !*(_WORD *)(v127 + 4) )
            {
              v22 = *(_QWORD **)(*(_QWORD *)(v127 + 16) + 24LL);
              if ( v22 )
              {
                if ( *v22 == (*((unsigned int *)a1 + 114) | 0x1E00000000LL) )
                {
                  v70 = *a1;
                  v131 = 0;
                  v133 = 0;
                  v132 = v70;
                  v134 = v70;
                  v135 = 0;
                  v136 = v70;
                  sub_D51BC0(a1 + 1, v127, &v131, &v135, &v133);
                  *(_QWORD *)v119 = *a1;
                  v71 = *(_QWORD *)(*(_QWORD *)a3 + 8LL * (unsigned int)(*(_DWORD *)(a3 + 8) - 1));
                  v137 = 0;
                  v138 = 0;
                  v116 = v71;
                  v115 = a1 + 30;
                  v139 = 1;
                  v140 = 0;
                  sub_182CBA0(qword_1C7F2C0, &v139);
                  BYTE4(v139) &= ~1u;
                  LODWORD(v139) = 1;
                  sub_1674520(a1 + 30, &v137, 1);
                  v122 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v137);
                  sub_182CBA0(v122, &v139);
                  v72 = sub_15E1B70(v119[0]);
                  sub_EDBA20(v116, v72, 0, v94, (int)ptr, (int)v101, (__int64)v104, (__int64)v107);
                  *(_QWORD *)v117 = *(_QWORD *)(*(_QWORD *)a3 + 8LL * (unsigned int)(*(_DWORD *)(a3 + 8) - 1));
                  *(_QWORD *)v120 = *a1;
                  v73 = *(int **)(*(_QWORD *)(sub_15D1F10(v135) + 24) + 8LL);
                  if ( *((_BYTE *)v73 + 8) )
                    sub_A8ADA((__int64)"std::get: wrong index for variant");
                  v74 = *v73;
                  v137 = 1;
                  v138 = 0;
                  v123 = v74;
                  v139 = 1;
                  v140 = 0;
                  sub_182CBA0(qword_1C7F2C0, &v139);
                  LODWORD(v139) = 1;
                  BYTE4(v139) &= ~1u;
                  sub_1674520(v115, &v137, v123);
                  v124 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v137);
                  sub_182CBA0(v124, &v139);
                  sub_15E1A70(a1[31]);
                  v75 = sub_15E1B70(v120[0]);
                  sub_EDBA20(v117[0], v75, 0, v95, ptra, v102, v105, v108);
                  *(_QWORD *)v118 = *(_QWORD *)(*(_QWORD *)a3 + 8LL * (unsigned int)(*(_DWORD *)(a3 + 8) - 1));
                  *(_QWORD *)v121 = *a1;
                  v76 = *(int **)(*(_QWORD *)(sub_15D1F10(v133) + 24) + 8LL);
                  if ( *((_BYTE *)v76 + 8) )
                    sub_A8ADA((__int64)"std::get: wrong index for variant");
                  v77 = *v76;
                  v137 = 1;
                  v138 = 0;
                  v125 = v77;
                  v139 = 1;
                  v140 = 0;
                  sub_182CBA0(qword_1C7F2C0, &v139);
                  LODWORD(v139) = 1;
                  BYTE4(v139) &= ~1u;
                  sub_1674520(v115, &v137, v125);
                  v112 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v137);
                  sub_182CBA0(v112, &v139);
                  v78 = sub_15E1B70(v121[0]);
                  sub_EDBA20(v118[0], v78, 0, v96, ptrb, v103, v106, v109);
                  v79 = v135;
                  if ( v135 )
                  {
                    v80 = v136;
                    v10 = (*(_DWORD *)(v135 + 8))-- == 1;
                    if ( v10 )
                      sub_15D7BC0(v80, v79);
                  }
                  v81 = v133;
                  if ( v133 )
                  {
                    v82 = v134;
                    v10 = (*(_DWORD *)(v133 + 8))-- == 1;
                    if ( v10 )
                      sub_15D7BC0(v82, v81);
                  }
                  v83 = v131;
                  if ( v131 )
                  {
                    v84 = v132;
                    v10 = (*(_DWORD *)(v131 + 8))-- == 1;
                    if ( v10 )
                      sub_15D7BC0(v84, v83);
                  }
                }
              }
            }
            ++v19;
            v12 = *a2;
            v18 += 8;
            if ( v19 == (_DWORD)ptr )
            {
              v16 = *((_BYTE *)v12 + 123);
              goto LABEL_32;
            }
          }
        }
        goto LABEL_32;
      }
    }
    else
    {
      do
      {
        v14 = *(_QWORD *)(v14 + 16);
        v17 = *(_BYTE *)(v14 + 3) >> 6;
      }
      while ( !v17 );
      if ( v17 != 1 )
        goto LABEL_12;
    }
    LODWORD(ptr) = *(_DWORD *)(v14 + 4) + 1;
    goto LABEL_14;
  }
  ++*((_DWORD *)v12 + 8);
  v85 = *(_DWORD *)(a3 + 8);
  v86 = *(_DWORD *)(a3 + 12);
  if ( v85 >= v86 )
  {
    ptrc = v12;
    v88 = 2 * v86;
    v89 = sub_186B270(8 * v88);
    v85 = *(_DWORD *)(a3 + 8);
    v90 = *(_QWORD **)a3;
    v87 = (_DWORD **)v89;
    v12 = ptrc;
    if ( v85 )
    {
      if ( v85 - 1 <= 2 || (_QWORD *)v89 == v90 + 1 )
      {
        for ( j = 0; j != v85; ++j )
          v87[j] = (_DWORD *)v90[j];
      }
      else
      {
        v91 = 0;
        do
        {
          *(__m128i *)&v87[v91] = _mm_loadu_si128((const __m128i *)&v90[v91]);
          v91 += 2;
        }
        while ( 2LL * (v85 >> 1) != v91 );
        if ( (v85 & 1) != 0 )
          v87[v85 & 0xFFFFFFFE] = (_DWORD *)v90[v85 & 0xFFFFFFFE];
      }
    }
    if ( v90 != (_QWORD *)(a3 + 16) && v90 )
    {
      sub_186B220(v90);
      v85 = *(_DWORD *)(a3 + 8);
      v12 = ptrc;
    }
    *(_QWORD *)a3 = v87;
    *(_DWORD *)(a3 + 12) = v88;
  }
  else
  {
    v87 = *(_DWORD ***)a3;
  }
  v87[v85] = v12;
  *(_DWORD *)(a3 + 8) = v85 + 1;
  return sub_EE4A00(v126);
}

