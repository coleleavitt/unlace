__int64 __fastcall sub_E7410(__int64 a1)
{
  int *v1; // r15
  int v2; // ebx
  unsigned __int8 v4; // al
  int *v5; // rbp
  _DWORD *v6; // rax
  __int64 v7; // r14
  unsigned __int8 v9; // al
  __int64 v10; // r12
  __int64 (*v11)(); // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r15
  _QWORD *v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r14
  char v26; // al
  _DWORD *v27; // rsi
  int v28; // ebx
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // ebx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  char v43; // al
  __int64 v44; // rbx
  __int64 v45; // rsi
  __int64 v46; // rbx
  int v47; // eax
  __int64 v48; // rdi
  __int64 v49; // rbx
  int v50; // esi
  __int64 v51; // rax
  int v52; // ebx
  __int64 v53; // rbp
  __int64 v54; // rax
  int v55; // r14d
  __int64 v56; // rax
  int ind_purged; // r12d
  __int64 v58; // rdi
  char v59; // r15
  char v60; // al
  char v61; // r15
  int v62; // eax
  int v63; // ebx
  __int64 v64; // rax
  __int64 v65; // rsi
  _QWORD *func; // rax
  bool v67; // zf
  _DWORD *v68; // rsi
  int v69; // ebx
  __int64 v70; // rax
  __int64 v71; // rax
  char v72; // al
  __int64 v73; // rax
  __int64 v74; // rdi
  int v75; // eax
  __int64 v76; // r14
  __int64 *v77; // rsi
  __int64 v78; // rcx
  __int64 *v79; // rdx
  __int64 *v80; // rax
  __int64 item_end; // rbx
  __int64 v82; // rax
  int v83; // ecx
  int v84; // r8d
  int v85; // r9d
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // r14
  __int64 v91; // rax
  int v92; // r9d
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  int v96; // r9d
  __int64 v97; // r12
  __int64 (__fastcall **v98)(); // rdi
  __int64 v99; // r12
  __int64 v100; // r14
  __int64 (__fastcall **v101)(); // rbx
  unsigned int v102; // r15d
  unsigned int tinfo_property; // r12d
  __int64 v104; // r15
  __int64 v105; // rax
  __int64 v106; // rcx
  int v107; // r9d
  _QWORD *v108; // r14
  __int64 v109; // r8
  _DWORD *exception; // rdi
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // r12
  __int64 v115; // rax
  __int64 v116; // r15
  __int64 v117; // r14
  __int64 v118; // r14
  _QWORD *v119; // r12
  __int64 v120; // rax
  char *v121; // rsi
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // [rsp+8h] [rbp-140h]
  __int64 v125; // [rsp+10h] [rbp-138h]
  __int64 v126; // [rsp+18h] [rbp-130h]
  int v127; // [rsp+28h] [rbp-120h]
  int v128; // [rsp+28h] [rbp-120h]
  char tinfo_details; // [rsp+43h] [rbp-105h]
  unsigned int tinfo_size; // [rsp+44h] [rbp-104h]
  __int64 (__fastcall **v131)(); // [rsp+48h] [rbp-100h]
  __int64 v132; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v133; // [rsp+58h] [rbp-F0h] BYREF
  _QWORD v134[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 (__fastcall **v135)(); // [rsp+70h] [rbp-D8h] BYREF
  __int64 v136; // [rsp+78h] [rbp-D0h]
  __int64 v137; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v138; // [rsp+88h] [rbp-C0h]
  __int64 v139; // [rsp+98h] [rbp-B0h]
  __int64 (__fastcall **v140)(); // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v141; // [rsp+A8h] [rbp-A0h]
  __int64 v142; // [rsp+B8h] [rbp-90h]
  __int64 v143; // [rsp+C0h] [rbp-88h]
  __int64 v144; // [rsp+C8h] [rbp-80h]
  __int128 v145; // [rsp+D0h] [rbp-78h]
  __int64 v146; // [rsp+E0h] [rbp-68h]
  __int128 v147; // [rsp+E8h] [rbp-60h]
  char v148; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v149; // [rsp+108h] [rbp-40h]

  v149 = __readfsqword(0x28u);
  v1 = *(int **)(a1 + 56);
  if ( !v1 )
  {
    if ( !under_debugger )
      sub_37EA20(50109);
    goto LABEL_202;
  }
  v2 = *v1;
  if ( (unsigned int)(*v1 - 54) > 1 )
  {
    if ( !under_debugger )
      sub_37EA20(50110);
    goto LABEL_202;
  }
  if ( v2 != 55 )
  {
    v4 = *((_BYTE *)v1 + 64);
    v5 = v1 + 16;
    if ( v4 != 5 )
    {
      if ( v4 > 5u )
      {
        if ( v4 != 6 )
          return 0;
        v124 = *((_QWORD *)v1 + 9);
        if ( (unsigned __int8)segtype() == 1 )
        {
          v1 = *(int **)(a1 + 56);
          v125 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        }
        else
        {
          if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
            return 0;
          v1 = *(int **)(a1 + 56);
          v125 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        }
        goto LABEL_22;
      }
      if ( v4 != 1 )
      {
        if ( v4 != 4 )
          return 0;
        v6 = (_DWORD *)*((_QWORD *)v1 + 9);
        if ( *v6 == 2 )
          goto LABEL_9;
      }
    }
    v124 = -1;
    v125 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
LABEL_22:
    v11 = *(__int64 (**)())(*(_QWORD *)v125 + 352LL);
    if ( v11 == sub_CE2B0 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      v10 = 0;
    }
    else
    {
      v70 = ((__int64 (__fastcall *)(__int64, int *))v11)(v125, v1);
      v1 = *(int **)(a1 + 56);
      v7 = *(_QWORD *)(a1 + 64);
      v10 = v70;
    }
    goto LABEL_24;
  }
  v9 = *((_BYTE *)v1 + 32);
  v5 = v1 + 8;
  if ( v9 == 5 )
    goto LABEL_20;
  if ( v9 > 5u )
  {
    if ( v9 != 6 )
      return 0;
    v124 = *((_QWORD *)v1 + 5);
    if ( (unsigned __int8)segtype() == 1 )
    {
      v1 = *(int **)(a1 + 56);
      v10 = 0;
      v7 = *(_QWORD *)(a1 + 64);
      v125 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    }
    else
    {
      func = (_QWORD *)get_func();
      if ( !func || *func != v124 )
        return 0;
      v1 = *(int **)(a1 + 56);
      v10 = 0;
      v7 = *(_QWORD *)(a1 + 64);
      v125 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    }
    goto LABEL_24;
  }
  if ( v9 == 1 )
    goto LABEL_20;
  if ( v9 != 4 )
    return 0;
  v6 = (_DWORD *)*((_QWORD *)v1 + 5);
  if ( *v6 != 2 )
  {
LABEL_20:
    v7 = *(_QWORD *)(a1 + 64);
    v10 = 0;
    v124 = -1;
    v125 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    goto LABEL_24;
  }
LABEL_9:
  v7 = *(_QWORD *)(a1 + 64);
  if ( v6[17] != *(_DWORD *)(*(_QWORD *)(v7 + 1504) + 80LL) )
    return 0;
  v10 = 0;
  v124 = -1;
  v125 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( v2 != 55 )
    goto LABEL_22;
LABEL_24:
  v12 = sub_1CD070(v7, *((_QWORD *)v1 + 3));
  if ( (v1[1] & 0x20) != 0 )
    v12 += *(int *)(*(_QWORD *)(v7 + 1504) + 80LL);
  v13 = *(_QWORD *)(a1 + 64);
  if ( v10 + v12 != *(_QWORD *)(v13 + 136) )
  {
    if ( v124 == -1 )
    {
      item_end = get_item_end();
      v82 = sub_1CBEA0(*(_QWORD *)(a1 + 64));
      if ( v82 && *(_QWORD *)(v82 + 8) == item_end )
        sub_32DD50(*(_QWORD *)(a1 + 64), *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL), 51, v83, v84, v85);
      return 0;
    }
    goto LABEL_28;
  }
  if ( v124 != -1 )
  {
    v55 = *(_DWORD *)(v13 + 68);
    v56 = get_func();
    if ( v56 )
    {
      ind_purged = *(_QWORD *)(v56 + 48);
      if ( !*(_QWORD *)(v56 + 48) )
      {
        if ( (*(_BYTE *)(v56 + 17) & 0x40) == 0 )
        {
          ind_purged = -1;
          if ( v55 == -1 )
            goto LABEL_91;
          goto LABEL_89;
        }
        ind_purged = 0;
      }
    }
    else
    {
      ind_purged = get_ind_purged();
    }
    if ( v55 == ind_purged )
      goto LABEL_91;
    if ( (ind_purged | v55) >= 0 )
      return 0;
LABEL_89:
    if ( v55 < 0 )
    {
      v55 = ind_purged;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 68LL) = ind_purged;
      set_purged();
    }
LABEL_91:
    v58 = *(_QWORD *)(a1 + 480);
    v132 = 0;
    v133 = 0;
    v59 = sub_37CA60(v58, v124, &v132, 0);
    v60 = sub_E4C80(*(_QWORD *)(a1 + 64), (__int64)&v133);
    if ( v60 == 1 )
    {
      if ( v59 )
        goto LABEL_96;
    }
    else if ( v59 )
    {
      v61 = *(_BYTE *)(*(_QWORD *)(a1 + 64) + 320LL);
      if ( !v61 && (v55 == ind_purged || v55 < 0) && (get_tinfo_property() & 0xF) == 0xC )
      {
        v90 = *(_QWORD *)(a1 + 64);
        v140 = 0;
        v142 = 0;
        v143 = 0;
        v144 = 0;
        v146 = 0;
        v148 = 16;
        v141 = 0;
        v145 = 0;
        v147 = 0;
        tinfo_details = get_tinfo_details();
        if ( tinfo_details )
        {
          if ( (_QWORD)v141 )
          {
            v91 = 0;
            v135 = 0;
            v136 = 0;
            v137 = 0;
            v127 = 0;
            v138 = 0;
            do
            {
              v131 = &v140[10 * v91];
              tinfo_size = get_tinfo_size();
              sub_1C3590(v134, v90, v131, tinfo_size);
              sub_1C07A0((unsigned int)v134, (unsigned int)&v135, tinfo_size, *(_QWORD *)(v90 + 1440), 0, v92);
              cleanup_argloc();
              v91 = ++v127;
            }
            while ( v127 < (unsigned __int64)v141 );
            v97 = *(_QWORD *)(v90 + 520);
            if ( v97 )
            {
              while ( 1 )
              {
                if ( *(_QWORD *)(v97 + 48) )
                {
                  if ( (*(_DWORD *)(v97 + 24) & 0x600) != 0x200 )
                    sub_A6800(v97, 0, v93, v94, v95, v96);
                  if ( (unsigned __int8)sub_314F20(v97 + 216, &v137)
                    || (unsigned __int8)sub_63E80((_QWORD *)(v97 + 240), &v135) )
                  {
                    break;
                  }
                }
                v97 = *(_QWORD *)(v97 + 8);
                if ( !v97 )
                  goto LABEL_158;
              }
              v61 = tinfo_details;
            }
LABEL_158:
            if ( v137 )
            {
              *(_QWORD *)&v138 = 0;
              qfree();
            }
            qfree();
          }
          if ( v146 )
          {
            *(_QWORD *)&v147 = 0;
            qfree();
          }
          cleanup_argloc();
          clear_tinfo_t();
          v98 = v140;
          if ( v140 )
          {
            v99 = v141;
            v100 = 0;
            if ( (_QWORD)v141 )
            {
              v128 = v2;
              do
              {
                v101 = &v98[10 * v100];
                clear_tinfo_t();
                if ( v101[5] )
                {
                  v101[6] = 0;
                  qfree();
                }
                if ( v101[2] )
                {
                  v101[3] = 0;
                  qfree();
                }
                ++v100;
                cleanup_argloc();
                v98 = v140;
              }
              while ( v99 != v100 );
              v2 = v128;
            }
            *(_QWORD *)&v141 = 0;
            qfree();
          }
          if ( !v61 )
          {
            v102 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 72LL);
            tinfo_property = get_tinfo_property();
            v104 = sub_1CD0D0(v102, 20);
            v105 = sub_1CD0D0(tinfo_property, 20);
            v108 = *(_QWORD **)(a1 + 64);
            v109 = v105;
            if ( v104 <= v105 )
            {
              if ( v104 < v105 )
              {
                v114 = v105 - v104;
                if ( (unsigned int)sub_226800(v108 + 54, v125, v108[18], (unsigned int)(v105 - v104)) == -1 )
                {
                  v115 = *(_QWORD *)(a1 + 64);
                  v116 = *(_QWORD *)(v115 + 456);
                  v117 = *(_QWORD *)(v115 + 464);
                  *(_QWORD *)(v115 + 456) = 0;
                  *(_OWORD *)(v115 + 464) = 0;
                  sub_36A2A0(
                    *(_QWORD *)(a1 + 64),
                    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL),
                    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) + v114,
                    0xFFFFFFFFLL,
                    0);
                  v118 = 4 * v117;
                  if ( v118 >> 2 )
                  {
                    v119 = *(_QWORD **)(a1 + 64);
                    v120 = v119[58];
                    v121 = (char *)v119[57];
                    if ( v119[59] < (unsigned __int64)((v118 >> 2) + v120) )
                    {
                      v123 = qvector_reserve();
                      v119[57] = v123;
                      v121 = (char *)v123;
                      v120 = v119[58];
                    }
                    memmove(&v121[v118], v121, 4 * v120);
                    v122 = 0;
                    do
                    {
                      *(_DWORD *)&v121[v122] = *(_DWORD *)(v116 + v122);
                      v122 += 4;
                    }
                    while ( v118 != v122 );
                    v119[58] += v118 >> 2;
                  }
                  if ( v116 )
                    qfree();
                }
                v108 = *(_QWORD **)(a1 + 64);
              }
            }
            else if ( tinfo_property - 208 > 0x2F || (*(_BYTE *)(*(_QWORD *)(a1 + 480) + 606LL) & 0x10) == 0 )
            {
              sub_37D850(v108[187], v108[5], (unsigned int)&v132, 0, 1, v107);
              *(_DWORD *)(*(_QWORD *)(a1 + 64) + 72LL) = tinfo_property;
              exception = __cxa_allocate_exception(0x30u);
              v111 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
              *(_QWORD *)exception = off_4DB660;
              exception[2] = -17;
              *((_QWORD *)exception + 2) = v111;
              *((_QWORD *)exception + 3) = 0;
              *((_OWORD *)exception + 2) = 0;
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_9FE30);
            }
            if ( !(unsigned __int8)sub_373CC0(v108, &v132, 2, v106, v109) )
            {
              if ( !under_debugger )
                sub_37EA20(50111);
              goto LABEL_202;
            }
          }
          goto LABEL_96;
        }
        if ( !under_debugger )
          sub_37EA20(50077);
LABEL_202:
        BUG();
      }
LABEL_96:
      clear_tinfo_t();
      clear_tinfo_t();
      v13 = *(_QWORD *)(a1 + 64);
      goto LABEL_28;
    }
    if ( v55 == ind_purged || ind_purged < 0 )
    {
      v76 = *(_QWORD *)(a1 + 64);
      if ( (*(_BYTE *)(v76 + 757) & 1) == 0 )
      {
        if ( v60 && *(_BYTE *)(v76 + 320) )
        {
          sub_E7180(*(_QWORD *)(a1 + 64), v124, &v133, 2);
        }
        else
        {
          v77 = *(__int64 **)(v76 + 1216);
          v78 = *(_QWORD *)(v76 + 1224);
          v79 = &v77[v78];
          if ( v77 == v79 )
            goto LABEL_136;
          v80 = *(__int64 **)(v76 + 1216);
          while ( *v80 != v124 )
          {
            if ( v79 == ++v80 )
              goto LABEL_136;
          }
          if ( v80 == v79 )
          {
LABEL_136:
            if ( *(_QWORD *)(v76 + 1232) < (unsigned __int64)(v78 + 1) )
            {
              v112 = qvector_reserve();
              v113 = *(_QWORD *)(v76 + 1224);
              *(_QWORD *)(v76 + 1216) = v112;
              v79 = (__int64 *)(v112 + 8 * v113);
            }
            *v79 = v124;
            ++*(_QWORD *)(v76 + 1224);
          }
        }
      }
    }
    goto LABEL_96;
  }
LABEL_28:
  v14 = *(_QWORD *)(v13 + 520);
  if ( !v14 )
  {
    v19 = *(_QWORD *)(a1 + 56);
LABEL_64:
    if ( v2 == 55 )
    {
      *(_DWORD *)v19 = 56;
    }
    else
    {
      *(_DWORD *)v19 = 57;
      sub_11A5D0(*(_QWORD *)(a1 + 56) + 32LL, *(_QWORD *)(a1 + 56) + 48LL);
      sub_11A5D0(*(_QWORD *)(a1 + 56) + 48LL, *(_QWORD *)(a1 + 56) + 64LL);
    }
    v38 = *(_QWORD *)(a1 + 64);
    v39 = *(_QWORD *)(a1 + 56);
    v40 = *(_QWORD *)(v38 + 520);
    if ( v40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( a1 != v40 )
          {
            v41 = *(_QWORD *)(v40 + 56);
            if ( v41 )
            {
              if ( (unsigned int)(*(_DWORD *)v41 - 56) <= 1 && *(_QWORD *)(v41 + 24) == *(_QWORD *)(v39 + 24) )
                break;
            }
          }
          v40 = *(_QWORD *)(v40 + 8);
          if ( !v40 )
            goto LABEL_75;
        }
        v42 = sub_32DAE0(v38);
        v43 = sub_32F4A0(v38 + 8, v42);
        v44 = *(_QWORD *)(a1 + 56);
        v45 = *(_QWORD *)(v44 + 24);
        if ( !v43 )
          break;
        *(_QWORD *)(v44 + 24) = v45 + 1;
        v38 = *(_QWORD *)(a1 + 64);
        v39 = *(_QWORD *)(a1 + 56);
        v40 = *(_QWORD *)(*(_QWORD *)(v38 + 520) + 8LL);
        if ( !v40 )
          goto LABEL_75;
      }
      *(_QWORD *)(v44 + 24) = sub_32F630(*(_QWORD *)(a1 + 64), v45);
      v39 = *(_QWORD *)(a1 + 56);
    }
LABEL_75:
    if ( *(_DWORD *)(a1 + 72) != 1 )
    {
      v46 = *(_QWORD *)(a1 + 64);
      if ( *(_QWORD *)(v39 + 24) == *(_QWORD *)(v46 + 40) )
      {
        v71 = sub_32DAE0(*(_QWORD *)(a1 + 64));
        v72 = sub_32F4A0(v46 + 8, v71);
        v39 = *(_QWORD *)(a1 + 56);
        if ( v72 )
        {
          v73 = *(_QWORD *)(v39 + 24);
          v74 = *(_QWORD *)(a1 + 64);
          v141 = 0u;
          v142 = 0;
          v143 = 0;
          v140 = off_4DC588;
          v144 = v73 + 1;
          v75 = sub_11D7E0(v74, &v140);
          v39 = *(_QWORD *)(a1 + 56);
          if ( !v75 )
          {
            ++*(_QWORD *)(v39 + 24);
            v39 = *(_QWORD *)(a1 + 56);
          }
        }
      }
    }
    *(_DWORD *)(v39 + 4) |= 0x40u;
    v47 = *(_DWORD *)(a1 + 24);
    v48 = *(_QWORD *)(a1 + 56);
    BYTE1(v47) &= ~2u;
    LOBYTE(v47) = v47 | 0x88;
    *(_DWORD *)(a1 + 24) = v47;
    if ( !(unsigned __int8)sub_11A310(v48, v125, 0) )
    {
      if ( (get_aflags() & 0x4000000) != 0 )
        sub_36FC50(*(_QWORD *)(a1 + 64));
      v49 = sub_1D25F0(*(_QWORD *)(a1 + 64));
      v50 = *(_DWORD *)(a1 + 72) + 1;
      if ( *(_DWORD *)(v49 + 72) != v50 )
      {
        v51 = sub_68640(*(_QWORD *)(a1 + 64), v50);
        v52 = *(_DWORD *)(v49 + 72);
        v53 = v51;
        v54 = sub_32DAE0(*(_QWORD *)(a1 + 64));
        sub_B4490((_QWORD *)v53, v54, v52);
        *(_DWORD *)(v53 + 24) |= 0x202u;
      }
    }
    return 1;
  }
  v15 = 0;
  do
  {
    if ( a1 != v14 && (*(_BYTE *)(v14 + 24) & 8) != 0 )
    {
      v16 = *(_QWORD *)(v14 + 56);
      v17 = v16 + 32;
      v18 = v16 + 64;
      if ( v2 == 55 )
        v18 = v17;
      if ( (unsigned __int8)sub_1230D0(v5, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v18, 0) )
      {
        v19 = *(_QWORD *)(a1 + 56);
        if ( *(_QWORD *)(*(_QWORD *)(v14 + 56) + 24LL) == *(_QWORD *)(v19 + 24) )
        {
          v15 = v14;
          v20 = *(_QWORD **)(v14 + 56);
          if ( v20 != *(_QWORD **)(v14 + 48) )
            goto LABEL_41;
          goto LABEL_107;
        }
        if ( !v15 )
          v15 = v14;
      }
    }
    v14 = *(_QWORD *)(v14 + 8);
  }
  while ( v14 );
  v19 = *(_QWORD *)(a1 + 56);
  if ( !v15 )
    goto LABEL_64;
  v20 = *(_QWORD **)(v15 + 56);
  if ( v20 == *(_QWORD **)(v15 + 48) )
  {
LABEL_107:
    v33 = *(_DWORD *)(v15 + 72);
    v25 = 0;
    goto LABEL_56;
  }
LABEL_41:
  v21 = *(_QWORD *)(a1 + 480);
  v22 = *(_QWORD *)(v21 + 112);
  v134[0] = 0;
  v126 = v22;
  v23 = v20 + 8;
  if ( v2 == 55 )
    v23 = v20 + 4;
  if ( *(_BYTE *)v23 == 6 && (unsigned __int8)sub_37CA60(v21, v23[1], v134, 0) && !(unsigned int)get_tinfo_property() )
  {
    if ( v20[3] == *(_QWORD *)(v19 + 24) )
    {
LABEL_63:
      clear_tinfo_t();
      v19 = *(_QWORD *)(a1 + 56);
      goto LABEL_64;
    }
  }
  else if ( (*(_BYTE *)(v126 + 49) & 0x40) == 0 )
  {
    v36 = v20[3];
    v37 = *(_QWORD *)(v15 + 64);
    v136 = 0;
    v137 = 0;
    v138 = 0u;
    v135 = off_4DC5B0;
    v139 = v36;
    if ( !(unsigned int)sub_11D7E0(v37, &v135) )
      goto LABEL_63;
  }
  if ( *(_QWORD *)(a1 + 48) == v19 && (unsigned __int8)sub_11A310(v20, v126, 0) )
  {
    v67 = *(_QWORD *)(v15 + 384) == 0;
    v68 = *(_DWORD **)(v15 + 368);
    *(_QWORD *)(v15 + 376) = 0;
    v69 = *(_DWORD *)(a1 + 72);
    if ( v67 )
    {
      v88 = qvector_reserve();
      v89 = *(_QWORD *)(v15 + 376);
      *(_QWORD *)(v15 + 368) = v88;
      v68 = (_DWORD *)(v88 + 4 * v89);
    }
    *v68 = v69;
    v25 = a1;
    ++*(_QWORD *)(v15 + 376);
  }
  else
  {
    v24 = sub_68640(*(_QWORD *)(v15 + 64), *(_DWORD *)(v15 + 72) + 1);
    *(_DWORD *)(v24 + 24) |= 2u;
    v25 = v24;
    *(_QWORD *)(v24 + 32) = v20[3];
    *(_QWORD *)(v24 + 40) = *(_QWORD *)(v15 + 40);
    v26 = sub_11A310(v20, v126, 0);
    v27 = *(_DWORD **)(v15 + 368);
    if ( v26 )
    {
      v28 = *(_DWORD *)(v15 + 72) + 1;
      v29 = *(_QWORD *)(v15 + 376);
      if ( *(_QWORD *)(v15 + 384) < (unsigned __int64)(v29 + 1) )
      {
        v87 = qvector_reserve();
        *(_QWORD *)(v15 + 368) = v87;
        v27 = (_DWORD *)v87;
        v29 = *(_QWORD *)(v15 + 376);
      }
      v27[v29] = v28;
      v30 = 2;
      ++*(_QWORD *)(v15 + 376);
    }
    else
    {
      v62 = *(_DWORD *)(v25 + 72);
      *v27 = v62;
      v63 = v62 + 1;
      v64 = *(_QWORD *)(v25 + 376);
      v65 = *(_QWORD *)(v25 + 368);
      if ( *(_QWORD *)(v25 + 384) < (unsigned __int64)(v64 + 1) )
      {
        v86 = qvector_reserve();
        *(_QWORD *)(v25 + 368) = v86;
        v65 = v86;
        v64 = *(_QWORD *)(v25 + 376);
      }
      *(_DWORD *)(v65 + 4 * v64) = v63;
      v30 = 3;
      ++*(_QWORD *)(v25 + 376);
    }
    *(_DWORD *)(v25 + 76) = v30;
  }
  *(_DWORD *)(v15 + 76) = 3;
  sub_A2630(v15, (__int64)v20);
  sub_A23D0(v25, v20, 0);
  v31 = *(_DWORD *)(v15 + 24);
  BYTE1(v31) &= ~2u;
  LOBYTE(v31) = v31 | 0x80;
  *(_DWORD *)(v15 + 24) = v31;
  v32 = *(_DWORD *)(v25 + 24);
  BYTE1(v32) &= ~2u;
  LOBYTE(v32) = v32 | 0x80;
  *(_DWORD *)(v25 + 24) = v32;
  *(_DWORD *)(v15 + 24) &= ~8u;
  v33 = *(_DWORD *)(v25 + 72);
  *(_DWORD *)(v25 + 24) |= 8u;
  if ( *(_DWORD *)(v25 + 76) != 2 )
  {
    if ( a1 == v25 )
    {
      clear_tinfo_t();
      goto LABEL_109;
    }
    v34 = *(_QWORD *)(v25 + 64);
    v35 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
    v140 = off_4DC588;
    v141 = 0u;
    v142 = 0;
    v143 = 0;
    v144 = v35;
    if ( !(unsigned int)sub_11D7E0(v34, &v140) )
      v20[3] = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
  }
  clear_tinfo_t();
LABEL_56:
  if ( a1 != v25 )
    goto LABEL_57;
LABEL_109:
  sub_A2630(a1, v19);
  sub_A23D0(v15, (_QWORD *)v19, *(_QWORD *)(v15 + 56));
  *(_DWORD *)(a1 + 76) = 2;
  v33 = *(_DWORD *)(a1 + 72);
LABEL_57:
  if ( v19 )
  {
    if ( *(_DWORD *)v19 != 55 )
    {
      sub_11B160(v19);
      *(_DWORD *)v19 = 55;
    }
    *(_BYTE *)(v19 + 32) = 7;
    *(_DWORD *)(v19 + 40) = v33;
  }
  return 1;
}
