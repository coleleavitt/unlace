__int64 __fastcall sub_100140(__int64 a1)
{
  int *v1; // r15
  int v2; // ebx
  unsigned __int8 v4; // al
  _DWORD *v5; // rax
  __int64 v6; // r14
  __int64 v8; // r12
  unsigned __int8 v9; // al
  __int64 v10; // rbp
  __int64 (*v11)(); // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r15
  _QWORD *v21; // r14
  __int64 v22; // rdi
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r12
  char v27; // al
  _DWORD *v28; // rsi
  int v29; // ebx
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  char v44; // al
  __int64 v45; // rbx
  __int64 v46; // rsi
  __int64 v47; // rbx
  int v48; // eax
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbx
  int v53; // esi
  __int64 v54; // rax
  unsigned int v55; // ebx
  __int64 v56; // rbp
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // r14d
  __int64 v60; // rax
  int ind_purged; // ebp
  __int64 v62; // rdi
  char v63; // al
  __int64 v64; // r8
  int v65; // r9d
  int v66; // eax
  int v67; // ebx
  __int64 v68; // rax
  __int64 v69; // rsi
  _QWORD *func; // rax
  bool v71; // zf
  _DWORD *v72; // rsi
  int v73; // ebx
  __int64 v74; // rax
  __int64 v75; // rax
  char v76; // al
  __int64 v77; // rax
  __int64 v78; // rdi
  int v79; // eax
  __int64 v80; // r14
  __int64 v81; // rsi
  __int64 v82; // rcx
  __int64 *v83; // rdx
  __int64 *v84; // rax
  __int64 item_end; // rbx
  __int64 v86; // rax
  int v87; // ecx
  int v88; // r8d
  int v89; // r9d
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rdx
  unsigned int tinfo_property; // ebp
  __int64 v95; // rax
  __int64 v96; // rcx
  int v97; // r9d
  _QWORD *v98; // r14
  __int64 v99; // r8
  _DWORD *exception; // rdi
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rax
  __int64 v105; // r14
  __int64 v106; // rbp
  _QWORD *v107; // rbp
  __int64 v108; // rax
  char *v109; // rsi
  __int64 v110; // rax
  __int64 v111; // rax
  int *v112; // [rsp+0h] [rbp-E8h]
  __int64 v113; // [rsp+0h] [rbp-E8h]
  __int64 v114; // [rsp+8h] [rbp-E0h]
  char v115; // [rsp+18h] [rbp-D0h]
  unsigned int v116; // [rsp+18h] [rbp-D0h]
  __int64 v117; // [rsp+18h] [rbp-D0h]
  __int64 v118; // [rsp+18h] [rbp-D0h]
  __int64 v119; // [rsp+18h] [rbp-D0h]
  __int64 v120; // [rsp+20h] [rbp-C8h]
  __int64 v121; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD v122[6]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 (__fastcall **v123)(); // [rsp+70h] [rbp-78h] BYREF
  __int64 v124; // [rsp+78h] [rbp-70h]
  __int64 v125; // [rsp+80h] [rbp-68h]
  __int64 v126; // [rsp+88h] [rbp-60h]
  __int64 v127; // [rsp+90h] [rbp-58h]
  __int64 v128; // [rsp+98h] [rbp-50h]
  unsigned __int64 v129; // [rsp+A8h] [rbp-40h]

  v129 = __readfsqword(0x28u);
  v1 = *(int **)(a1 + 56);
  if ( !v1 )
  {
    if ( !under_debugger )
      sub_383060(50109);
LABEL_173:
    BUG();
  }
  v2 = *v1;
  if ( (unsigned int)(*v1 - 54) > 1 )
  {
    if ( !under_debugger )
      sub_383060(50110);
    goto LABEL_173;
  }
  if ( v2 != 55 )
  {
    v112 = v1 + 16;
    v4 = *((_BYTE *)v1 + 64);
    if ( v4 != 5 )
    {
      if ( v4 > 5u )
      {
        if ( v4 != 6 )
          return 0;
        v8 = *((_QWORD *)v1 + 9);
        if ( (unsigned __int8)segtype() == 1 )
        {
          v1 = *(int **)(a1 + 56);
          v114 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        }
        else
        {
          if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
            return 0;
          v1 = *(int **)(a1 + 56);
          v114 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        }
        goto LABEL_22;
      }
      if ( v4 != 1 )
      {
        if ( v4 != 4 )
          return 0;
        v5 = *((_DWORD **)v1 + 9);
        if ( *v5 == 2 )
          goto LABEL_9;
      }
    }
    v8 = -1;
    v114 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
LABEL_22:
    v11 = *(__int64 (**)())(*(_QWORD *)v114 + 352LL);
    if ( v11 == sub_FDA90 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      v10 = 0;
    }
    else
    {
      v74 = ((__int64 (__fastcall *)(__int64, int *))v11)(v114, v1);
      v1 = *(int **)(a1 + 56);
      v6 = *(_QWORD *)(a1 + 64);
      v10 = v74;
    }
    goto LABEL_24;
  }
  v112 = v1 + 8;
  v9 = *((_BYTE *)v1 + 32);
  if ( v9 == 5 )
    goto LABEL_20;
  if ( v9 > 5u )
  {
    if ( v9 != 6 )
      return 0;
    v8 = *((_QWORD *)v1 + 5);
    if ( (unsigned __int8)segtype() == 1 )
    {
      v1 = *(int **)(a1 + 56);
      v10 = 0;
      v6 = *(_QWORD *)(a1 + 64);
      v114 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    }
    else
    {
      func = (_QWORD *)get_func();
      if ( !func || *func != v8 )
        return 0;
      v1 = *(int **)(a1 + 56);
      v10 = 0;
      v6 = *(_QWORD *)(a1 + 64);
      v114 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    }
    goto LABEL_24;
  }
  if ( v9 == 1 )
    goto LABEL_20;
  if ( v9 != 4 )
    return 0;
  v5 = *((_DWORD **)v1 + 5);
  if ( *v5 != 2 )
  {
LABEL_20:
    v6 = *(_QWORD *)(a1 + 64);
    v8 = -1;
    v10 = 0;
    v114 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    goto LABEL_24;
  }
LABEL_9:
  v6 = *(_QWORD *)(a1 + 64);
  if ( v5[17] != *(_DWORD *)(*(_QWORD *)(v6 + 1504) + 80LL) )
    return 0;
  v8 = -1;
  v10 = 0;
  v114 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( v2 != 55 )
    goto LABEL_22;
LABEL_24:
  v12 = sub_1CFBB0(v6, *((_QWORD *)v1 + 3));
  if ( (v1[1] & 0x20) != 0 )
    v12 += *(int *)(*(_QWORD *)(v6 + 1504) + 80LL);
  v14 = *(_QWORD *)(a1 + 64);
  if ( v10 + v12 != *(_QWORD *)(v14 + 136) )
  {
    if ( v8 == -1 )
    {
      item_end = get_item_end();
      v86 = sub_1CE9E0(*(_QWORD *)(a1 + 64));
      if ( v86 && *(_QWORD *)(v86 + 8) == item_end )
        sub_3311F0(*(_QWORD *)(a1 + 64), *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL), 51, v87, v88, v89);
      return 0;
    }
    goto LABEL_28;
  }
  if ( v8 != -1 )
  {
    v59 = *(_DWORD *)(v14 + 68);
    v60 = get_func();
    if ( v60 )
    {
      ind_purged = *(_QWORD *)(v60 + 48);
      if ( !*(_QWORD *)(v60 + 48) )
      {
        if ( (*(_BYTE *)(v60 + 17) & 0x40) == 0 )
        {
          ind_purged = -1;
          if ( v59 == -1 )
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
    if ( v59 == ind_purged )
      goto LABEL_91;
    if ( (ind_purged | v59) >= 0 )
      return 0;
LABEL_89:
    if ( v59 < 0 )
    {
      v59 = ind_purged;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 68LL) = ind_purged;
      set_purged();
    }
LABEL_91:
    v62 = *(_QWORD *)(a1 + 480);
    v122[0] = 0;
    v123 = nullptr;
    v115 = sub_3810A0(v62, v8, v122, 0);
    v63 = sub_F35D0(*(_QWORD *)(a1 + 64), (__int64)&v123);
    if ( v63 == 1 )
    {
      if ( v115 )
      {
LABEL_96:
        clear_tinfo_t();
        clear_tinfo_t();
        v14 = *(_QWORD *)(a1 + 64);
        goto LABEL_28;
      }
    }
    else if ( v115 )
    {
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 64) + 320LL)
        && (v59 == ind_purged || v59 < 0)
        && (get_tinfo_property() & 0xF) == 0xC
        && !(unsigned __int8)sub_D7060(*(_QWORD *)(a1 + 64)) )
      {
        v116 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 72LL);
        tinfo_property = get_tinfo_property();
        v117 = sub_1CFC10(v116);
        v95 = sub_1CFC10(tinfo_property);
        v98 = *(_QWORD **)(a1 + 64);
        v99 = v95;
        if ( v117 <= v95 )
        {
          if ( v117 < v95 )
          {
            v118 = v95 - v117;
            v71 = (unsigned int)sub_228FE0(v98 + 54, v114, v98[18], (unsigned int)v118) == -1;
            v99 = v118;
            if ( v71 )
            {
              v104 = *(_QWORD *)(a1 + 64);
              v105 = *(_QWORD *)(v104 + 456);
              v106 = *(_QWORD *)(v104 + 464);
              *(_QWORD *)(v104 + 456) = 0;
              *(_OWORD *)(v104 + 464) = 0;
              sub_36DBC0(
                *(_QWORD *)(a1 + 64),
                *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL),
                *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) + v118,
                0xFFFFFFFFLL,
                0);
              v119 = 4 * v106;
              v120 = (4 * v106) >> 2;
              if ( v120 )
              {
                v107 = *(_QWORD **)(a1 + 64);
                v108 = v107[58];
                v109 = (char *)v107[57];
                if ( v107[59] < (unsigned __int64)(v120 + v108) )
                {
                  v111 = qvector_reserve((__int64)(v107 + 57), (__int64)v109, v120 + v108, 4);
                  v107[57] = v111;
                  v109 = (char *)v111;
                  v108 = v107[58];
                }
                memmove(&v109[v119], v109, 4 * v108);
                v110 = 0;
                do
                {
                  *(_DWORD *)&v109[v110] = *(_DWORD *)(v105 + v110);
                  v110 += 4;
                }
                while ( v119 != v110 );
                v107[58] += v120;
              }
              if ( v105 )
                qfree(v105);
            }
            v98 = *(_QWORD **)(a1 + 64);
          }
        }
        else if ( tinfo_property - 208 > 0x2F || (*(_BYTE *)(*(_QWORD *)(a1 + 480) + 606LL) & 0x10) == 0 )
        {
          sub_381E90(v98[187], v98[5], (unsigned int)v122, 0, 1, v97);
          *(_DWORD *)(*(_QWORD *)(a1 + 64) + 72LL) = tinfo_property;
          exception = __cxa_allocate_exception(0x30u);
          v101 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
          *(_QWORD *)exception = off_4DBCD0;
          exception[2] = -17;
          *((_QWORD *)exception + 2) = v101;
          *((_QWORD *)exception + 3) = 0;
          *((_OWORD *)exception + 2) = 0;
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
        }
        if ( !(unsigned __int8)sub_3780C0(v98, v122, 2, v96, v99) )
        {
          if ( !under_debugger )
            sub_383060(50111);
          goto LABEL_173;
        }
      }
      goto LABEL_96;
    }
    if ( v59 == ind_purged || ind_purged < 0 )
    {
      v80 = *(_QWORD *)(a1 + 64);
      if ( (*(_BYTE *)(v80 + 757) & 1) == 0 )
      {
        if ( v63 && *(_BYTE *)(v80 + 320) )
        {
          sub_F34C0(*(_QWORD *)(a1 + 64), v8, (int)&v123, 2, v64, v65);
        }
        else
        {
          v81 = *(_QWORD *)(v80 + 1216);
          v82 = *(_QWORD *)(v80 + 1224);
          v83 = (__int64 *)(v81 + 8 * v82);
          if ( (__int64 *)v81 == v83 )
            goto LABEL_136;
          v84 = *(__int64 **)(v80 + 1216);
          while ( *v84 != v8 )
          {
            if ( v83 == ++v84 )
              goto LABEL_136;
          }
          if ( v83 == v84 )
          {
LABEL_136:
            if ( *(_QWORD *)(v80 + 1232) < (unsigned __int64)(v82 + 1) )
            {
              v102 = qvector_reserve(v80 + 1216, v81, v82 + 1, 8);
              v103 = *(_QWORD *)(v80 + 1224);
              *(_QWORD *)(v80 + 1216) = v102;
              v83 = (__int64 *)(v102 + 8 * v103);
            }
            *v83 = v8;
            ++*(_QWORD *)(v80 + 1224);
          }
        }
      }
    }
    goto LABEL_96;
  }
LABEL_28:
  v15 = *(_QWORD *)(v14 + 520);
  if ( !v15 )
  {
    v20 = *(_QWORD *)(a1 + 56);
LABEL_64:
    if ( v2 == 55 )
    {
      *(_DWORD *)v20 = 56;
    }
    else
    {
      *(_DWORD *)v20 = 57;
      sub_11CA10(*(_QWORD *)(a1 + 56) + 32LL, *(_QWORD *)(a1 + 56) + 48LL);
      sub_11CA10(*(_QWORD *)(a1 + 56) + 48LL, *(_QWORD *)(a1 + 56) + 64LL);
    }
    v39 = *(_QWORD *)(a1 + 64);
    v40 = *(_QWORD *)(a1 + 56);
    v41 = *(_QWORD *)(v39 + 520);
    if ( v41 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( a1 != v41 )
          {
            v42 = *(_QWORD *)(v41 + 56);
            if ( v42 )
            {
              if ( (unsigned int)(*(_DWORD *)v42 - 56) <= 1 && *(_QWORD *)(v42 + 24) == *(_QWORD *)(v40 + 24) )
                break;
            }
          }
          v41 = *(_QWORD *)(v41 + 8);
          if ( !v41 )
            goto LABEL_75;
        }
        v43 = sub_330F80(v39);
        v44 = sub_332920(v39 + 8, v43);
        v45 = *(_QWORD *)(a1 + 56);
        v46 = *(_QWORD *)(v45 + 24);
        if ( !v44 )
          break;
        *(_QWORD *)(v45 + 24) = v46 + 1;
        v39 = *(_QWORD *)(a1 + 64);
        v40 = *(_QWORD *)(a1 + 56);
        v41 = *(_QWORD *)(*(_QWORD *)(v39 + 520) + 8LL);
        if ( !v41 )
          goto LABEL_75;
      }
      *(_QWORD *)(v45 + 24) = sub_332AB0(*(_QWORD *)(a1 + 64), v46);
      v40 = *(_QWORD *)(a1 + 56);
    }
LABEL_75:
    if ( *(_DWORD *)(a1 + 72) != 1 )
    {
      v47 = *(_QWORD *)(a1 + 64);
      if ( *(_QWORD *)(v40 + 24) == *(_QWORD *)(v47 + 40) )
      {
        v75 = sub_330F80(*(_QWORD *)(a1 + 64));
        v76 = sub_332920(v47 + 8, v75);
        v40 = *(_QWORD *)(a1 + 56);
        if ( v76 )
        {
          v77 = *(_QWORD *)(v40 + 24);
          v78 = *(_QWORD *)(a1 + 64);
          v124 = 0;
          v125 = 0;
          v126 = 0;
          v127 = 0;
          v123 = &off_4DD1E0;
          v128 = v77 + 1;
          v79 = sub_11FC20(v78, &v123);
          v40 = *(_QWORD *)(a1 + 56);
          if ( !v79 )
          {
            ++*(_QWORD *)(v40 + 24);
            v40 = *(_QWORD *)(a1 + 56);
          }
        }
      }
    }
    *(_DWORD *)(v40 + 4) |= 0x40u;
    v48 = *(_DWORD *)(a1 + 24);
    v49 = *(_QWORD *)(a1 + 56);
    BYTE1(v48) &= ~2u;
    LOBYTE(v48) = v48 | 0x88;
    *(_DWORD *)(a1 + 24) = v48;
    if ( !(unsigned __int8)sub_11C750(v49, v114, 0) )
    {
      if ( (get_aflags() & 0x4000000) != 0 )
        sub_373590(*(_QWORD *)(a1 + 64));
      v52 = sub_1D5170(*(_QWORD *)(a1 + 64));
      v53 = *(_DWORD *)(a1 + 72) + 1;
      if ( *(_DWORD *)(v52 + 72) != v53 )
      {
        v54 = sub_68FC0(*(_QWORD *)(a1 + 64), v53, v50, v51);
        v55 = *(_DWORD *)(v52 + 72);
        v56 = v54;
        v57 = sub_330F80(*(_QWORD *)(a1 + 64));
        sub_B52C0((_QWORD *)v56, v57, v55, v58);
        *(_DWORD *)(v56 + 24) |= 0x202u;
      }
    }
    return 1;
  }
  v16 = 0;
  do
  {
    if ( a1 != v15 && (*(_BYTE *)(v15 + 24) & 8) != 0 )
    {
      v17 = *(_QWORD *)(v15 + 56);
      v18 = v17 + 32;
      v19 = v17 + 64;
      if ( v2 == 55 )
        v19 = v18;
      if ( (unsigned __int8)sub_1255D0(v112, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v19, 0) )
      {
        v20 = *(_QWORD *)(a1 + 56);
        v13 = *(_QWORD *)(v20 + 24);
        if ( *(_QWORD *)(*(_QWORD *)(v15 + 56) + 24LL) == v13 )
        {
          v16 = v15;
          v21 = *(_QWORD **)(v15 + 56);
          if ( v21 != *(_QWORD **)(v16 + 48) )
            goto LABEL_41;
          goto LABEL_107;
        }
        if ( !v16 )
          v16 = v15;
      }
    }
    v15 = *(_QWORD *)(v15 + 8);
  }
  while ( v15 );
  v20 = *(_QWORD *)(a1 + 56);
  if ( !v16 )
    goto LABEL_64;
  v21 = *(_QWORD **)(v16 + 56);
  if ( v21 == *(_QWORD **)(v16 + 48) )
  {
LABEL_107:
    v34 = *(_DWORD *)(v16 + 72);
    v26 = 0;
    goto LABEL_56;
  }
LABEL_41:
  v22 = *(_QWORD *)(a1 + 480);
  v23 = (__int64)(v21 + 4);
  v121 = 0;
  v113 = *(_QWORD *)(v22 + 112);
  v24 = v21 + 8;
  if ( v2 == 55 )
    v24 = v21 + 4;
  if ( *(_BYTE *)v24 == 6 && (unsigned __int8)sub_3810A0(v22, v24[1], &v121, 0) && !(unsigned int)get_tinfo_property() )
  {
    if ( v21[3] == *(_QWORD *)(v20 + 24) )
    {
LABEL_63:
      clear_tinfo_t();
      v20 = *(_QWORD *)(a1 + 56);
      goto LABEL_64;
    }
  }
  else if ( (*(_BYTE *)(v113 + 49) & 0x40) == 0 )
  {
    v37 = v21[3];
    v38 = *(_QWORD *)(v16 + 64);
    memset(&v122[1], 0, 32);
    v122[0] = &off_4DD208;
    v122[5] = v37;
    if ( !(unsigned int)sub_11FC20(v38, v122) )
      goto LABEL_63;
  }
  if ( v20 == *(_QWORD *)(a1 + 48) && (unsigned __int8)sub_11C750(v21, v113, 0) )
  {
    v71 = *(_QWORD *)(v16 + 384) == 0;
    v72 = *(_DWORD **)(v16 + 368);
    *(_QWORD *)(v16 + 376) = 0;
    v73 = *(_DWORD *)(a1 + 72);
    if ( v71 )
    {
      v92 = qvector_reserve(v16 + 368, (__int64)v72, 1, 4);
      v93 = *(_QWORD *)(v16 + 376);
      *(_QWORD *)(v16 + 368) = v92;
      v72 = (_DWORD *)(v92 + 4 * v93);
    }
    *v72 = v73;
    v26 = a1;
    ++*(_QWORD *)(v16 + 376);
  }
  else
  {
    v25 = sub_68FC0(*(_QWORD *)(v16 + 64), *(_DWORD *)(v16 + 72) + 1, v23, v13);
    *(_DWORD *)(v25 + 24) |= 2u;
    v26 = v25;
    *(_QWORD *)(v25 + 32) = v21[3];
    *(_QWORD *)(v25 + 40) = *(_QWORD *)(v16 + 40);
    v27 = sub_11C750(v21, v113, 0);
    v28 = *(_DWORD **)(v16 + 368);
    if ( v27 )
    {
      v29 = *(_DWORD *)(v16 + 72) + 1;
      v30 = *(_QWORD *)(v16 + 376);
      if ( *(_QWORD *)(v16 + 384) < (unsigned __int64)(v30 + 1) )
      {
        v91 = qvector_reserve(v16 + 368, (__int64)v28, v30 + 1, 4);
        *(_QWORD *)(v16 + 368) = v91;
        v28 = (_DWORD *)v91;
        v30 = *(_QWORD *)(v16 + 376);
      }
      v28[v30] = v29;
      v31 = 2;
      ++*(_QWORD *)(v16 + 376);
    }
    else
    {
      v66 = *(_DWORD *)(v26 + 72);
      *v28 = v66;
      v67 = v66 + 1;
      v68 = *(_QWORD *)(v26 + 376);
      v69 = *(_QWORD *)(v26 + 368);
      if ( *(_QWORD *)(v26 + 384) < (unsigned __int64)(v68 + 1) )
      {
        v90 = qvector_reserve(v26 + 368, v69, v68 + 1, 4);
        *(_QWORD *)(v26 + 368) = v90;
        v69 = v90;
        v68 = *(_QWORD *)(v26 + 376);
      }
      *(_DWORD *)(v69 + 4 * v68) = v67;
      v31 = 3;
      ++*(_QWORD *)(v26 + 376);
    }
    *(_DWORD *)(v26 + 76) = v31;
  }
  *(_DWORD *)(v16 + 76) = 3;
  sub_A33C0(v16, (__int64)v21);
  sub_A3160(v26, v21, 0);
  v32 = *(_DWORD *)(v16 + 24);
  BYTE1(v32) &= ~2u;
  LOBYTE(v32) = v32 | 0x80;
  *(_DWORD *)(v16 + 24) = v32;
  v33 = *(_DWORD *)(v26 + 24);
  BYTE1(v33) &= ~2u;
  LOBYTE(v33) = v33 | 0x80;
  *(_DWORD *)(v26 + 24) = v33;
  *(_DWORD *)(v16 + 24) &= ~8u;
  v34 = *(_DWORD *)(v26 + 72);
  *(_DWORD *)(v26 + 24) |= 8u;
  if ( *(_DWORD *)(v26 + 76) != 2 )
  {
    if ( a1 == v26 )
    {
      clear_tinfo_t();
      goto LABEL_109;
    }
    v35 = *(_QWORD *)(v26 + 64);
    v36 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
    v123 = &off_4DD1E0;
    v124 = 0;
    v125 = 0;
    v126 = 0;
    v127 = 0;
    v128 = v36;
    if ( !(unsigned int)sub_11FC20(v35, &v123) )
      v21[3] = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
  }
  clear_tinfo_t();
LABEL_56:
  if ( a1 != v26 )
    goto LABEL_57;
LABEL_109:
  sub_A33C0(a1, v20);
  sub_A3160(v16, (_QWORD *)v20, *(_QWORD *)(v16 + 56));
  *(_DWORD *)(a1 + 76) = 2;
  v34 = *(_DWORD *)(a1 + 72);
LABEL_57:
  if ( v20 )
  {
    if ( *(_DWORD *)v20 != 55 )
    {
      sub_11D5A0(v20);
      *(_DWORD *)v20 = 55;
    }
    *(_BYTE *)(v20 + 32) = 7;
    *(_DWORD *)(v20 + 40) = v34;
  }
  return 1;
}
