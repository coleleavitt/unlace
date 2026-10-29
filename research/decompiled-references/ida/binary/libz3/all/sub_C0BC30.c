__int64 __fastcall sub_C0BC30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **v4; // r12
  char **exception; // rbx
  __int64 v6; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned int v11; // r12d
  void *v12; // rbx
  unsigned int v14; // ebp
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 *v18; // r12
  _DWORD *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // r13d
  _DWORD *v22; // rax
  int v23; // ebp
  __int64 v24; // rcx
  char *v25; // rax
  char *v26; // rax
  __int64 v27; // r14
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // rbp
  int v32; // eax
  unsigned int v33; // edx
  _DWORD *v34; // rsi
  int v35; // edi
  char *v36; // rsi
  char *v37; // rdi
  __int64 v38; // rax
  char *v39; // rsi
  int v40; // eax
  int v41; // edi
  char *v42; // rsi
  char *v43; // rdi
  __int64 v44; // rax
  char *v45; // rsi
  int v46; // eax
  int v47; // ecx
  __int64 v48; // r12
  __int64 v49; // r12
  int v50; // eax
  unsigned int v51; // r12d
  __int64 v52; // r13
  __int64 v53; // r13
  __int64 v54; // rbx
  __int64 v55; // rbx
  __int64 v56; // rbx
  __int64 v57; // rbp
  char *v58; // rsi
  __int64 v59; // rbx
  __int64 v60; // rbp
  char *v61; // rsi
  __int64 v62; // rdi
  int v63; // eax
  int v64; // eax
  void *v65; // rbx
  int v66; // eax
  int v67; // eax
  __int64 v68; // r12
  __int64 v69; // rax
  _QWORD *v70; // r8
  __int64 v71; // rdx
  char *v72; // rax
  char *v73; // r9
  int v74; // ecx
  char v75; // r10
  __int64 v76; // rcx
  __int64 v77; // r12
  __int64 v78; // rax
  __int64 *v79; // r8
  __int64 v80; // rdx
  char *v81; // rax
  char *v82; // r9
  int v83; // ecx
  char v84; // r10
  __int64 v85; // rcx
  __int64 v86; // r12
  __int64 v87; // rax
  _DWORD *v88; // rdi
  unsigned __int64 v89; // rax
  __int64 v90; // r8
  unsigned int v91; // eax
  __int64 v92; // r8
  __int64 v93; // rax
  __int64 v94; // r14
  char *v95; // rdi
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // rax
  __int64 v99; // rsi
  char v100; // al
  void *v101; // rdi
  void *v102; // rbx
  char v103; // al
  int v104; // eax
  unsigned __int64 v105; // rax
  __int64 v106; // r9
  unsigned int v107; // eax
  __int64 v108; // rdi
  unsigned __int64 v109; // rax
  _DWORD *v110; // rax
  _BOOL8 v111; // rsi
  _QWORD *v112; // rdx
  __int64 v113; // r14
  unsigned int v114; // r8d
  __int64 v115; // rcx
  int v116; // eax
  _QWORD *v117; // rcx
  unsigned int v118; // eax
  unsigned int v119; // ecx
  size_t v120; // rsi
  unsigned int v121; // r15d
  unsigned int *v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rdi
  __int64 v125; // r13
  __int64 *v126; // rdx
  __int64 v127; // rsi
  bool v128; // zf
  _QWORD *v129; // rax
  unsigned __int64 v130; // r14
  __int64 *v131; // r13
  __int64 v132; // rsi
  unsigned int v133; // [rsp+0h] [rbp-3E8h]
  unsigned int v134; // [rsp+0h] [rbp-3E8h]
  unsigned int v135; // [rsp+0h] [rbp-3E8h]
  int v138[2]; // [rsp+20h] [rbp-3C8h]
  char *v139; // [rsp+28h] [rbp-3C0h]
  int v140; // [rsp+28h] [rbp-3C0h]
  __int64 v141; // [rsp+38h] [rbp-3B0h]
  __int64 v142; // [rsp+38h] [rbp-3B0h]
  int v143; // [rsp+38h] [rbp-3B0h]
  __int64 v144; // [rsp+60h] [rbp-388h]
  _QWORD v145[3]; // [rsp+68h] [rbp-380h] BYREF
  __int64 v146; // [rsp+80h] [rbp-368h] BYREF
  int v147[2]; // [rsp+88h] [rbp-360h] BYREF
  __int64 v148; // [rsp+90h] [rbp-358h]
  __int64 v149; // [rsp+A0h] [rbp-348h] BYREF
  _QWORD v150[3]; // [rsp+A8h] [rbp-340h] BYREF
  __int64 v151; // [rsp+C0h] [rbp-328h]
  __int64 v152; // [rsp+C8h] [rbp-320h] BYREF
  __int64 v153; // [rsp+D0h] [rbp-318h]
  _QWORD v154[3]; // [rsp+D8h] [rbp-310h] BYREF
  __int64 v155; // [rsp+F0h] [rbp-2F8h]
  __int64 v156; // [rsp+F8h] [rbp-2F0h] BYREF
  __int64 v157; // [rsp+100h] [rbp-2E8h]
  _QWORD v158[3]; // [rsp+108h] [rbp-2E0h] BYREF
  void *v159; // [rsp+120h] [rbp-2C8h] BYREF
  __int64 v160; // [rsp+128h] [rbp-2C0h]
  _QWORD v161[8]; // [rsp+130h] [rbp-2B8h] BYREF
  void *v162; // [rsp+170h] [rbp-278h] BYREF
  __int64 v163; // [rsp+178h] [rbp-270h]
  __int64 v164; // [rsp+180h] [rbp-268h] BYREF
  __int64 v165; // [rsp+188h] [rbp-260h]
  __int64 v166; // [rsp+280h] [rbp-168h]
  void *v167; // [rsp+290h] [rbp-158h] BYREF
  __int64 v168; // [rsp+298h] [rbp-150h]
  _QWORD v169[32]; // [rsp+2A0h] [rbp-148h] BYREF
  __int64 v170; // [rsp+3A0h] [rbp-48h]

  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v6 )
  {
LABEL_228:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0((__int64 *)&v167, "unhandled arithmetic operator in subpaving");
LABEL_227:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v167);
    sub_233E40((__int64)&v167);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  switch ( *(_DWORD *)(v6 + 4) )
  {
    case 0:
      v167 = nullptr;
      v168 = 0;
      v169[0] = 1;
      v169[1] = 0;
      if ( !(unsigned __int8)sub_1666AE0(a1 + 24, a2, &v167, &v162) )
      {
        sub_1872CE0("");
        sub_1873130(114, 143);
      }
      v62 = *(_QWORD *)(a1 + 16);
      if ( (BYTE4(v167) & 1) != 0 )
      {
        sub_182EA00(v62, a3, &v167);
        v62 = *(_QWORD *)(a1 + 16);
      }
      else
      {
        v63 = (int)v167;
        *(_BYTE *)(a3 + 4) &= ~1u;
        *(_DWORD *)a3 = v63;
      }
      if ( (v169[0] & 0x100000000LL) != 0 )
      {
        sub_182EA00(v62, a4, v169);
      }
      else
      {
        v64 = v169[0];
        *(_BYTE *)(a4 + 4) &= ~1u;
        *(_DWORD *)a4 = v64;
      }
      v11 = -1;
      v65 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v167);
      sub_182CBA0(v65, v169);
      return v11;
    case 1:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x13:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(
        (__int64 *)&v167,
        "you must apply arithmetic purifier before internalizing expressions into the subpaving module.");
      goto LABEL_227;
    case 6:
      v28 = *(_QWORD *)(a1 + 16);
      v162 = &v164;
      v29 = *(unsigned int *)(a2 + 24);
      v166 = v28;
      v163 = 0x1000000000LL;
      v167 = v169;
      v168 = 0x1000000000LL;
      v170 = v28;
      v159 = v161;
      v160 = 0x1000000000LL;
      v151 = v28;
      v152 = 0;
      v153 = 0;
      v154[0] = 1;
      v154[1] = 0;
      v155 = v28;
      v156 = 0;
      v157 = 0;
      v158[0] = 1;
      v158[1] = 0;
      v144 = v28;
      v145[0] = 0;
      v145[1] = 0;
      v146 = v28;
      *(_QWORD *)v147 = 0;
      v148 = 0;
      if ( !(_DWORD)v29 )
        goto LABEL_55;
      v30 = a2 + 8 * v29;
      v31 = a2;
      v32 = sub_C0D420(a1, *(_QWORD *)(a2 + 32), (int)v145, (int)v147);
      while ( 2 )
      {
        v47 = v32;
        if ( v32 == -1 )
        {
          v48 = *(_QWORD *)(a1 + 16);
          if ( v147[0] < 0 )
          {
            if ( (v145[0] & 0x100000000LL) != 0 )
            {
              sub_182EA00(*(_QWORD *)(a1 + 16), &v156, v145);
            }
            else
            {
              BYTE4(v156) &= ~1u;
              LODWORD(v156) = v145[0];
            }
            if ( (v147[1] & 1) != 0 )
            {
              sub_182EA00(v48, v158, v147);
            }
            else
            {
              BYTE4(v158[0]) &= ~1u;
              LODWORD(v158[0]) = v147[0];
            }
            sub_1839100(v48, &v156);
            sub_1839100(v48, v158);
          }
          else
          {
            if ( (v145[0] & 0x100000000LL) != 0 )
            {
              sub_182EA00(*(_QWORD *)(a1 + 16), &v156, v145);
            }
            else
            {
              BYTE4(v156) &= ~1u;
              LODWORD(v156) = v145[0];
            }
            if ( (v147[1] & 1) != 0 )
            {
              sub_182EA00(v48, v158, v147);
            }
            else
            {
              BYTE4(v158[0]) &= ~1u;
              LODWORD(v158[0]) = v147[0];
            }
          }
          v142 = v48 + 600;
          sub_183B0A0(v48, &v156, v158, v48 + 600);
          if ( (*(_BYTE *)(v48 + 604) & 1) != 0 || *(_DWORD *)(v48 + 600) != 1 )
          {
            sub_183C300(v48, &v156, v142, &v156);
            sub_183C300(v48, v158, v142, v158);
          }
          v49 = *(_QWORD *)(a1 + 16);
          if ( (_DWORD)v156 )
          {
            if ( (_DWORD)v152 )
            {
              if ( (v154[0] & 0x100000000LL) != 0
                || LODWORD(v154[0]) != 1
                || (v158[0] & 0x100000000LL) != 0
                || LODWORD(v158[0]) != 1 )
              {
                sub_18540F0(*(_QWORD *)(a1 + 16), &v152, &v156, &v152);
                v31 += 8;
                if ( v31 != v30 )
                  goto LABEL_39;
                break;
              }
              sub_1839610(v49, &v152, &v156);
              sub_182EF00(v49, v154);
              BYTE4(v154[0]) &= ~1u;
              LODWORD(v154[0]) = 1;
            }
            else
            {
              if ( (v156 & 0x100000000LL) != 0 )
              {
                sub_182EA00(*(_QWORD *)(a1 + 16), &v152, &v156);
              }
              else
              {
                BYTE4(v152) &= ~1u;
                LODWORD(v152) = v156;
              }
              if ( (v158[0] & 0x100000000LL) != 0 )
              {
                sub_182EA00(v49, v154, v158);
              }
              else
              {
                BYTE4(v154[0]) &= ~1u;
                LODWORD(v154[0]) = v158[0];
              }
            }
          }
          else
          {
            if ( (v152 & 0x100000000LL) != 0 )
              sub_182EA00(*(_QWORD *)(a1 + 16), &v152, &v152);
            else
              BYTE4(v152) &= ~1u;
            if ( (v154[0] & 0x100000000LL) != 0 )
              sub_182EA00(v49, v154, v154);
            else
              BYTE4(v154[0]) &= ~1u;
          }
        }
        else
        {
          v33 = v160;
          if ( (unsigned int)v160 >= HIDWORD(v160) )
          {
            v143 = v32;
            v86 = (unsigned int)(2 * HIDWORD(v160));
            v87 = sub_186B270(4 * v86);
            v33 = v160;
            v88 = v159;
            v34 = (_DWORD *)v87;
            v47 = v143;
            if ( (_DWORD)v160 )
            {
              if ( (unsigned int)(v160 - 1) <= 2 || (unsigned __int64)(v87 - ((_QWORD)v159 + 4)) <= 8 )
              {
                v105 = 0;
                v106 = 4LL * (unsigned int)v160;
                do
                {
                  v34[v105 / 4] = v88[v105 / 4];
                  v105 += 4LL;
                }
                while ( v105 != v106 );
              }
              else
              {
                v89 = 0;
                v90 = 16LL * ((unsigned int)v160 >> 2);
                do
                {
                  *(__m128i *)&v34[v89 / 4] = _mm_loadu_si128((const __m128i *)&v88[v89 / 4]);
                  v89 += 16LL;
                }
                while ( v89 != v90 );
                v91 = v33 & 0xFFFFFFFC;
                if ( (v33 & 3) != 0 )
                {
                  v34[v91] = v88[v91];
                  v92 = v91 + 1;
                  if ( (unsigned int)v92 < v33 )
                  {
                    v93 = v91 + 2;
                    v34[v92] = v88[v92];
                    if ( (unsigned int)v93 < v33 )
                      v34[v93] = v88[v93];
                  }
                }
              }
            }
            if ( v88 != (_DWORD *)v161 && v88 )
            {
              sub_186B220(v88);
              v33 = v160;
              v47 = v143;
            }
            v159 = v34;
            HIDWORD(v160) = v86;
          }
          else
          {
            v34 = v159;
          }
          v34[v33] = v47;
          v35 = v163;
          LODWORD(v160) = v160 + 1;
          if ( (unsigned int)v163 >= HIDWORD(v163) )
          {
            v77 = (unsigned int)(2 * HIDWORD(v163));
            v78 = sub_186B270(16 * v77);
            v35 = v163;
            v79 = (__int64 *)v162;
            v36 = (char *)v78;
            if ( (_DWORD)v163 )
            {
              v80 = v78;
              v81 = (char *)v162;
              v82 = (char *)v162 + 16 * (unsigned int)v163;
              do
              {
                v83 = *(_DWORD *)v81;
                v84 = v81[4];
                v81 += 16;
                v80 += 16;
                *(_DWORD *)(v80 - 16) = v83;
                *(_BYTE *)(v80 - 12) = v84 & 3 | *(_BYTE *)(v80 - 12) & 0xFC;
                v85 = *((_QWORD *)v81 - 1);
                *((_QWORD *)v81 - 1) = 0;
                *(_QWORD *)(v80 - 8) = v85;
              }
              while ( v81 != v82 );
            }
            if ( v79 != &v164 && v79 )
            {
              sub_186B220(v79);
              v35 = v163;
            }
            v162 = v36;
            HIDWORD(v163) = v77;
          }
          else
          {
            v36 = (char *)v162;
          }
          v37 = &v36[16 * v35];
          *(_QWORD *)v37 = 0;
          v38 = (unsigned int)v163;
          *((_QWORD *)v37 + 1) = 0;
          LODWORD(v163) = v38 + 1;
          v39 = &v36[16 * v38];
          if ( (v145[0] & 0x100000000LL) != 0 )
          {
            sub_182EA00(v166, v39, v145);
          }
          else
          {
            v40 = v145[0];
            v39[4] &= ~1u;
            *(_DWORD *)v39 = v40;
          }
          v41 = v168;
          if ( (unsigned int)v168 >= HIDWORD(v168) )
          {
            v68 = (unsigned int)(2 * HIDWORD(v168));
            v69 = sub_186B270(16 * v68);
            v41 = v168;
            v70 = v167;
            v42 = (char *)v69;
            if ( (_DWORD)v168 )
            {
              v71 = v69;
              v72 = (char *)v167;
              v73 = (char *)v167 + 16 * (unsigned int)v168;
              do
              {
                v74 = *(_DWORD *)v72;
                v75 = v72[4];
                v72 += 16;
                v71 += 16;
                *(_DWORD *)(v71 - 16) = v74;
                *(_BYTE *)(v71 - 12) = v75 & 3 | *(_BYTE *)(v71 - 12) & 0xFC;
                v76 = *((_QWORD *)v72 - 1);
                *((_QWORD *)v72 - 1) = 0;
                *(_QWORD *)(v71 - 8) = v76;
              }
              while ( v72 != v73 );
            }
            if ( v70 != v169 && v70 )
            {
              sub_186B220(v70);
              v41 = v168;
            }
            v167 = v42;
            HIDWORD(v168) = v68;
          }
          else
          {
            v42 = (char *)v167;
          }
          v43 = &v42[16 * v41];
          *(_QWORD *)v43 = 0;
          v44 = (unsigned int)v168;
          *((_QWORD *)v43 + 1) = 0;
          LODWORD(v168) = v44 + 1;
          v45 = &v42[16 * v44];
          if ( (v147[1] & 1) != 0 )
          {
            sub_182EA00(v170, v45, v147);
          }
          else
          {
            v46 = v147[0];
            v45[4] &= ~1u;
            *(_DWORD *)v45 = v46;
          }
        }
        v31 += 8;
        if ( v31 != v30 )
        {
LABEL_39:
          v32 = sub_C0D420(a1, *(_QWORD *)(v31 + 32), (int)v145, (int)v147);
          continue;
        }
        break;
      }
      v28 = *(_QWORD *)(a1 + 16);
LABEL_55:
      if ( (v154[0] & 0x100000000LL) != 0 )
      {
        sub_182EA00(v28, a4, v154);
        v28 = *(_QWORD *)(a1 + 16);
      }
      else
      {
        v50 = v154[0];
        *(_BYTE *)(a4 + 4) &= ~1u;
        *(_DWORD *)a4 = v50;
      }
      v51 = v160;
      if ( (_DWORD)v160 )
      {
        v52 = 0;
        do
        {
          sub_183BAF0(v28, a4, (char *)v167 + v52, a4);
          v52 += 16;
          v28 = *(_QWORD *)(a1 + 16);
        }
        while ( v52 != 16LL * v51 );
      }
      sub_183C300(v28, a4, v154, v147);
      v149 = *(_QWORD *)(a1 + 16);
      v150[0] = 0;
      v150[1] = 0;
      sub_1839230(v149, &v152, v147, v150);
      if ( v51 )
      {
        v53 = 0;
        do
        {
          sub_183C300(*(_QWORD *)(a1 + 16), a4, (char *)v167 + v53, v147);
          sub_1839230(*(_QWORD *)(a1 + 16), (char *)v162 + v53, v147, (char *)v162 + v53);
          v53 += 16;
        }
        while ( 16LL * v51 != v53 );
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, void *, void *))(**(_QWORD **)(a1 + 8) + 56LL))(
                *(_QWORD *)(a1 + 8),
                v150,
                v51,
                v162,
                v159);
        *(_BYTE *)(a3 + 4) &= ~1u;
        *(_DWORD *)a3 = 1;
      }
      else
      {
        if ( (v150[0] & 0x100000000LL) != 0 )
        {
          sub_182EA00(*(_QWORD *)(a1 + 16), a3, v150);
        }
        else
        {
          v104 = v150[0];
          *(_BYTE *)(a3 + 4) &= ~1u;
          *(_DWORD *)a3 = v104;
        }
        v11 = -1;
      }
      sub_C0DD00(a1, a2, v11, a3, a4);
      sub_182EF00(v149, v150);
      sub_182EF00(v146, v147);
      sub_182EF00(v144, v145);
      v54 = v155;
      sub_182EF00(v155, &v156);
      sub_182EF00(v54, v158);
      v55 = v151;
      sub_182EF00(v151, &v152);
      sub_182EF00(v55, v154);
      if ( v159 && v159 != v161 )
        sub_186B220(v159);
      v56 = 0;
      v57 = 16LL * (unsigned int)v168;
      if ( (_DWORD)v168 )
      {
        do
        {
          v58 = (char *)v167 + v56;
          v56 += 16;
          sub_182EF00(v170, v58);
        }
        while ( v57 != v56 );
      }
      LODWORD(v168) = 0;
      if ( v167 != v169 && v167 )
        sub_186B220(v167);
      v59 = 0;
      v60 = 16LL * (unsigned int)v163;
      if ( (_DWORD)v163 )
      {
        do
        {
          v61 = (char *)v162 + v59;
          v59 += 16;
          sub_182EF00(v166, v61);
        }
        while ( v60 != v59 );
      }
      LODWORD(v163) = 0;
      if ( v162 != &v164 && v162 )
        sub_186B220(v162);
      return v11;
    case 7:
    case 8:
      goto LABEL_225;
    case 9:
      v14 = *(_DWORD *)(a2 + 24);
      if ( v14 <= 1 )
LABEL_225:
        sub_15E67C();
      v15 = *(_QWORD *)(a2 + 32);
      v159 = nullptr;
      v160 = 0;
      v161[0] = 1;
      v161[1] = 0;
      v141 = a1 + 24;
      if ( (unsigned __int8)sub_1666AE0(a1 + 24, v15, &v159, &v167) && (v66 = (int)v159) != 0 )
      {
        if ( v14 != 2 )
          sub_15E67C();
        v17 = *(_QWORD *)(a1 + 16);
        if ( (BYTE4(v159) & 1) != 0 )
        {
          sub_182EA00(v17, a3, &v159);
          v17 = *(_QWORD *)(a1 + 16);
        }
        else
        {
          *(_BYTE *)(a3 + 4) &= ~1u;
          *(_DWORD *)a3 = v66;
        }
        if ( (v161[0] & 0x100000000LL) != 0 )
        {
          sub_182EA00(v17, a4, v161);
          v17 = *(_QWORD *)(a1 + 16);
        }
        else
        {
          v67 = v161[0];
          *(_BYTE *)(a4 + 4) &= ~1u;
          *(_DWORD *)a4 = v67;
        }
        v16 = *(_QWORD *)(a2 + 40);
        v149 = v16;
      }
      else
      {
        v16 = a2;
        v17 = *(_QWORD *)(a1 + 16);
        *(_BYTE *)(a3 + 4) &= ~1u;
        *(_DWORD *)a3 = 1;
        *(_BYTE *)(a4 + 4) &= ~1u;
        *(_DWORD *)a4 = 1;
        v149 = a2;
      }
      if ( *(_WORD *)(v16 + 4) )
      {
        v20 = 1;
        v18 = &v149;
      }
      else
      {
        v18 = &v149;
        v19 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
        v20 = 1;
        if ( v19 && *v19 == 5 && v19[1] == 9 )
        {
          v20 = *(unsigned int *)(v16 + 24);
          v18 = (__int64 *)(v16 + 32);
        }
      }
      v151 = v17;
      v167 = v169;
      v152 = 0;
      v153 = 0;
      v155 = v17;
      v156 = 0;
      v157 = 0;
      v168 = 0x1000000000LL;
      if ( !(_DWORD)v20 )
        goto LABEL_186;
      *(_QWORD *)v138 = &v18[v20];
      do
      {
        v27 = *v18;
        if ( *(_WORD *)(*v18 + 4) )
        {
          v21 = 1;
        }
        else
        {
          v21 = 1;
          v22 = *(_DWORD **)(*(_QWORD *)(v27 + 16) + 24LL);
          if ( v22 && *v22 == 5 && v22[1] == 22 && *(_DWORD *)(v27 + 24) == 2 )
          {
            v98 = *(_QWORD *)(v27 + 32);
            v99 = *(_QWORD *)(v27 + 40);
            v162 = nullptr;
            v140 = v98;
            v163 = 0;
            v164 = 1;
            v165 = 0;
            v100 = sub_1666AE0(v141, v99, &v162, &v146);
            v101 = qword_1C7F2C0;
            if ( v100 && (v164 & 0x100000000LL) == 0 && (_DWORD)v164 == 1 )
            {
              v103 = sub_182CFA0(qword_1C7F2C0, &v162);
              v101 = qword_1C7F2C0;
              if ( !v103 || (v109 = sub_182D020(qword_1C7F2C0, &v162), v101 = qword_1C7F2C0, HIDWORD(v109)) )
              {
                v21 = 1;
              }
              else if ( (_DWORD)v162 )
              {
                LODWORD(v27) = v140;
                v21 = sub_182D020(qword_1C7F2C0, &v162);
                v101 = qword_1C7F2C0;
              }
            }
            sub_182CBA0(v101, &v162);
            sub_182CBA0(v101, &v164);
          }
        }
        v23 = sub_C0D420(a1, v27, (int)&v152, (int)&v156);
        sub_18393F0(*(_QWORD *)(a1 + 16), &v152, v21, &v152);
        sub_18393F0(*(_QWORD *)(a1 + 16), &v156, v21, &v156);
        sub_1839230(*(_QWORD *)(a1 + 16), a3, &v152, a3);
        sub_1839230(*(_QWORD *)(a1 + 16), a4, &v156, a4);
        if ( v23 != -1 )
        {
          v24 = (unsigned int)v168;
          if ( (unsigned int)v168 >= HIDWORD(v168) )
          {
            v94 = (unsigned int)(2 * HIDWORD(v168));
            v25 = (char *)sub_186B270(8 * v94);
            v95 = (char *)v167;
            v96 = 0;
            v24 = (unsigned int)v168;
            v97 = 8LL * (unsigned int)v168;
            if ( (_DWORD)v168 )
            {
              do
              {
                *(_QWORD *)&v25[v96] = *(_QWORD *)&v95[v96];
                v96 += 8;
              }
              while ( v96 != v97 );
            }
            if ( v95 && v95 != (char *)v169 )
            {
              v139 = v25;
              sub_186B220(v95);
              v24 = (unsigned int)v168;
              v25 = v139;
            }
            v167 = v25;
            HIDWORD(v168) = v94;
          }
          else
          {
            v25 = (char *)v167;
          }
          v26 = &v25[8 * v24];
          *(_DWORD *)v26 = v23;
          *((_DWORD *)v26 + 1) = v21;
          LODWORD(v168) = v168 + 1;
        }
        ++v18;
      }
      while ( v18 != *(__int64 **)v138 );
      if ( (_DWORD)v168 )
      {
        if ( (_DWORD)v168 == 1 && *((_DWORD *)v167 + 1) == 1 )
          v11 = *(_DWORD *)v167;
        else
          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(**(_QWORD **)(a1 + 8) + 48LL))(
                  *(_QWORD *)(a1 + 8),
                  (unsigned int)v168,
                  v167);
      }
      else
      {
LABEL_186:
        v11 = -1;
      }
      sub_C0DD00(a1, a2, v11, a3, a4);
      if ( v167 && v167 != v169 )
        sub_186B220(v167);
      sub_182EF00(v155, &v156);
      sub_182EF00(v151, &v152);
      v102 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v159);
      sub_182CBA0(v102, v161);
      return v11;
    case 0x12:
      return sub_C0D420(a1, *(_QWORD *)(a2 + 32), a3, a4);
    case 0x16:
      v162 = nullptr;
      v163 = 0;
      v164 = 1;
      v9 = *(_QWORD *)(a2 + 40);
      v165 = 0;
      if ( (unsigned __int8)sub_1666AE0(a1 + 24, v9, &v162, &v167)
        && (v164 & 0x100000000LL) == 0
        && (_DWORD)v164 == 1
        && (unsigned __int8)sub_182CFA0(qword_1C7F2C0, &v162)
        && !((unsigned __int64)sub_182D020(qword_1C7F2C0, &v162) >> 32)
        && (_DWORD)v162 )
      {
        v133 = sub_182D020(qword_1C7F2C0, &v162);
        v107 = sub_C0D420(a1, *(_QWORD *)(a2 + 32), a3, a4);
        v11 = v107;
        if ( v107 != -1 )
        {
          v108 = *(_QWORD *)(a1 + 8);
          v167 = (void *)__PAIR64__(v133, v107);
          v11 = (*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v108 + 48LL))(v108, 1, &v167);
        }
        sub_18393F0(*(_QWORD *)(a1 + 16), a3, v133, a3);
        sub_18393F0(*(_QWORD *)(a1 + 16), a4, v133, a4);
        sub_C0DD00(a1, a2, v11, a3, a4);
        goto LABEL_7;
      }
      v10 = *(_QWORD *)(a1 + 40);
      *(_BYTE *)(a3 + 4) &= ~1u;
      *(_DWORD *)a3 = 1;
      *(_BYTE *)(a4 + 4) &= ~1u;
      *(_DWORD *)a4 = 1;
      v11 = sub_16235A0(v10, a2);
      if ( v11 != -1 )
        goto LABEL_7;
      v110 = *(_DWORD **)(sub_15D1F10(a2) + 24);
      v111 = 0;
      if ( v110 && *v110 == 5 )
        v111 = v110[1] == 1;
      v11 = (*(__int64 (__fastcall **)(_QWORD, _BOOL8))(**(_QWORD **)(a1 + 8) + 32LL))(*(_QWORD *)(a1 + 8), v111);
      sub_16238E0(*(_QWORD *)(a1 + 40), a2, v11);
      v112 = *(_QWORD **)(a1 + 64);
      if ( !v112 )
      {
        if ( v11 != -1 )
        {
          v129 = (_QWORD *)sub_186B270(0x18u);
          *v129 = 2;
          v114 = v11 + 1;
          LODWORD(v113) = 0;
          v112 = v129 + 1;
          v116 = 1;
          *(_QWORD *)(a1 + 64) = v112;
          v117 = v112;
          goto LABEL_201;
        }
LABEL_206:
        v124 = *(_QWORD *)(a1 + 56);
        goto LABEL_207;
      }
      v113 = *((unsigned int *)v112 - 1);
      if ( v11 < (unsigned int)v113 )
        goto LABEL_206;
      v114 = v11 + 1;
      if ( v11 + 1 >= (unsigned int)v113 )
      {
        if ( (unsigned int)v113 < v114 )
        {
          do
          {
            v118 = *((_DWORD *)v112 - 1);
            if ( v118 == *((_DWORD *)v112 - 2) )
            {
              v119 = (3 * v118 + 1) >> 1;
              v120 = 8 * v119 + 8;
              v121 = v119;
              if ( 8 * v118 + 8 >= (unsigned int)v120 || v118 >= v119 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v167, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, &v167);
                sub_233E40((__int64)&v167);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v134 = v114;
              v122 = (unsigned int *)sub_186B300(v112 - 1, v120);
              v123 = v122[1];
              v112 = v122 + 2;
              v114 = v134;
              *v122 = v121;
              *(_QWORD *)(a1 + 64) = v122 + 2;
              LODWORD(v122) = v123;
              v117 = &v112[v123];
              v116 = (_DWORD)v122 + 1;
            }
            else
            {
              v115 = v118;
              v116 = v118 + 1;
              v117 = &v112[v115];
            }
LABEL_201:
            LODWORD(v113) = v113 + 1;
            *v117 = 0;
            *((_DWORD *)v112 - 1) = v116;
          }
          while ( (_DWORD)v113 != v114 );
        }
        goto LABEL_206;
      }
      v130 = (unsigned __int64)&v112[v113];
      v124 = *(_QWORD *)(a1 + 56);
      v131 = &v112[v114];
      if ( (unsigned __int64)v131 >= v130 )
        goto LABEL_222;
      do
      {
        v132 = *v131;
        if ( *v131 )
        {
          v128 = (*(_DWORD *)(v132 + 8))-- == 1;
          if ( v128 )
          {
            v135 = v114;
            sub_15D7BC0(v124, v132);
            v124 = *(_QWORD *)(a1 + 56);
            v114 = v135;
          }
        }
        ++v131;
      }
      while ( (unsigned __int64)v131 < v130 );
      v112 = *(_QWORD **)(a1 + 64);
      if ( v112 )
LABEL_222:
        *((_DWORD *)v112 - 1) = v114;
LABEL_207:
      v125 = v11;
      v126 = &v112[v125];
      ++*(_DWORD *)(a2 + 8);
      v127 = *v126;
      if ( *v126 )
      {
        v128 = (*(_DWORD *)(v127 + 8))-- == 1;
        if ( v128 )
        {
          sub_15D7BC0(v124, v127);
          v126 = (__int64 *)(v125 * 8 + *(_QWORD *)(a1 + 64));
        }
      }
      *v126 = a2;
LABEL_7:
      v12 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v162);
      sub_182CBA0(v12, &v164);
      return v11;
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v167, "transcendental and hyperbolic functions are not supported yet.");
      goto LABEL_227;
    default:
      goto LABEL_228;
  }
}

