void __fastcall sub_171ECA0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  int v7; // ebp
  unsigned int v8; // ebx
  __int64 v9; // r15
  int v10; // r14d
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rdi
  int v15; // r14d
  __m128 *v16; // rbp
  __int64 *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(__int64); // rdx
  __int64 (*v21)(void); // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  __int64 *v26; // rbx
  unsigned __int64 v27; // r15
  __int64 v28; // rax
  __int64 *v29; // r13
  __int64 v30; // r13
  __int64 v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rsi
  __m128i v35; // xmm1
  char **v36; // r14
  int v37; // eax
  void *v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  void ***v41; // rcx
  __int64 v42; // r12
  __int64 v43; // rbx
  _BYTE *v44; // rax
  size_t v45; // rdx
  _BYTE *v46; // rdi
  size_t v47; // rbp
  unsigned __int64 v48; // rcx
  _BYTE *v49; // rdi
  size_t v50; // rbp
  _BYTE *v51; // rdx
  size_t v52; // r15
  char *v53; // rax
  char *v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // rax
  _QWORD *v60; // r12
  _QWORD *v61; // r14
  _QWORD *v62; // rdi
  void *v63; // rdi
  const void **v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  char *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned __int64 v73; // rax
  __int64 v74; // rax
  int v75; // edx
  __int64 v76; // rcx
  __int64 v78; // [rsp+8h] [rbp-3D0h]
  __int64 *v79; // [rsp+10h] [rbp-3C8h]
  __int64 v80; // [rsp+10h] [rbp-3C8h]
  __int64 *v81; // [rsp+18h] [rbp-3C0h]
  unsigned __int64 v82; // [rsp+20h] [rbp-3B8h]
  __int64 *v85; // [rsp+48h] [rbp-390h]
  unsigned __int64 v86; // [rsp+50h] [rbp-388h]
  unsigned __int64 v87; // [rsp+68h] [rbp-370h] BYREF
  void *v88; // [rsp+70h] [rbp-368h] BYREF
  size_t v89; // [rsp+78h] [rbp-360h]
  __int64 v90; // [rsp+80h] [rbp-358h] BYREF
  void **v91; // [rsp+90h] [rbp-348h] BYREF
  unsigned __int64 v92; // [rsp+98h] [rbp-340h]
  __m128i si128; // [rsp+A0h] [rbp-338h]
  int v94; // [rsp+B0h] [rbp-328h]
  void *v95[2]; // [rsp+B8h] [rbp-320h] BYREF
  __int64 v96; // [rsp+C8h] [rbp-310h]
  char v97; // [rsp+D0h] [rbp-308h]
  __int64 v98; // [rsp+D8h] [rbp-300h]
  __int64 v99; // [rsp+E0h] [rbp-2F8h]
  __int64 v100; // [rsp+E8h] [rbp-2F0h]
  __m128 v101; // [rsp+F0h] [rbp-2E8h] BYREF
  __int64 v102; // [rsp+100h] [rbp-2D8h]
  __int64 v103; // [rsp+108h] [rbp-2D0h]
  __int64 v104; // [rsp+110h] [rbp-2C8h]
  __int64 v105; // [rsp+118h] [rbp-2C0h]
  void *v106; // [rsp+120h] [rbp-2B8h]
  __int64 v107; // [rsp+128h] [rbp-2B0h]
  char v108; // [rsp+148h] [rbp-290h]
  __int64 *v109; // [rsp+150h] [rbp-288h]
  __int64 v110; // [rsp+158h] [rbp-280h]
  int v111; // [rsp+160h] [rbp-278h]
  char v112; // [rsp+164h] [rbp-274h]
  __int64 v113; // [rsp+168h] [rbp-270h] BYREF
  void *ptr; // [rsp+170h] [rbp-268h]
  __int64 v115; // [rsp+178h] [rbp-260h]
  char *v116; // [rsp+1B0h] [rbp-228h] BYREF
  char *v117; // [rsp+1B8h] [rbp-220h]
  char *v118; // [rsp+1C0h] [rbp-218h]
  __m128i v119[3]; // [rsp+268h] [rbp-170h] BYREF
  __int64 v120[9]; // [rsp+298h] [rbp-140h] BYREF
  int v121[62]; // [rsp+2E0h] [rbp-F8h] BYREF

  v6 = *(_QWORD *)(*a1 + 552);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
    if ( v7 )
    {
      v8 = 0;
      while ( 1 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 552) + 24LL))(*(_QWORD *)(*a1 + 552), v8);
        if ( !v13 )
          goto LABEL_5;
        v14 = *(_QWORD *)(*a1 + 736);
        v15 = *(_DWORD *)(v14 + 80);
        if ( v15 )
        {
          v9 = *(_QWORD *)(v14 + 64);
          v10 = v15 - 1;
          v11 = v10 & sub_FDE780(v13);
          v12 = *(_QWORD *)(v9 + 40LL * v11);
          if ( v13 != v12 )
          {
            if ( v12 == -1 )
            {
LABEL_89:
              sub_18953D0(*(_QWORD *)(*a1 + 736), v13);
              goto LABEL_9;
            }
            v75 = 1;
            while ( 1 )
            {
              v11 = v10 & (v75 + v11);
              v76 = *(_QWORD *)(v9 + 40LL * v11);
              if ( v13 == v76 )
                break;
              ++v75;
              if ( v76 == -1 )
                goto LABEL_89;
            }
          }
LABEL_5:
          if ( v7 == ++v8 )
            break;
        }
        else
        {
          sub_18953D0(v14, v13);
LABEL_9:
          if ( v7 == ++v8 )
            break;
        }
      }
    }
  }
  v16 = &v101;
  v101.m128_i32[0] = 27;
  v101.m128_i8[4] = 0;
  v109 = &v113;
  v101.m128_u64[1] = 0;
  v17 = (__int64 *)a1[1];
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v18 = *v17;
  v19 = (__int64)(v17 + 3);
  v108 = 0;
  v20 = *(__int64 (__fastcall **)(__int64))(v18 + 48);
  v112 = 1;
  v110 = 8;
  v111 = 0;
  if ( v20 != sub_15A1860 )
  {
    v19 = ((__int64 (__fastcall *)(__int64 *, __int64 (__fastcall *)(__int64), __int64 (__fastcall *)(__int64), __int64))v20)(
            v17,
            sub_15A1860,
            v20,
            v19);
    v17 = (__int64 *)a1[1];
    v18 = *v17;
  }
  v21 = *(__int64 (**)(void))(v18 + 40);
  if ( (char *)v21 == (char *)sub_15A1850 )
  {
    v22 = v17[6];
  }
  else
  {
    v78 = v19;
    v74 = v21();
    v19 = v78;
    v22 = v74;
  }
  sub_16FF270((__int64)&v116, *a1, v22, v19, (unsigned int *)&v101, a6, 0);
  sub_17038E0((__int64)&v101);
  sub_16FF160((__int64)v120, (std::__detail::_List_node_base *)v120);
  v23 = *(_QWORD *)(*a1 + 736);
  v24 = v23 + 64;
  if ( *(_DWORD *)(v23 + 72) )
  {
    sub_171EC50(
      &v101,
      *(_QWORD **)(v23 + 64),
      (_QWORD *)(*(_QWORD *)(v23 + 64) + 40LL * *(unsigned int *)(v23 + 80)),
      v24,
      0);
  }
  else
  {
    v25 = (_QWORD *)(*(_QWORD *)(v23 + 64) + 40LL * *(unsigned int *)(v23 + 80));
    sub_171EC50(&v101, v25, v25, v24, 1);
  }
  v27 = v101.m128_u64[1];
  v26 = (__int64 *)v101.m128_u64[0];
  v28 = *(_QWORD *)(*a1 + 736);
  sub_171EC50(
    &v101,
    (_QWORD *)(*(_QWORD *)(v28 + 64) + 40LL * *(unsigned int *)(v28 + 80)),
    (_QWORD *)(*(_QWORD *)(v28 + 64) + 40LL * *(unsigned int *)(v28 + 80)),
    v28 + 64,
    1);
  v82 = v101.m128_u64[0];
  if ( v26 != (__int64 *)v101.m128_u64[0] )
  {
    v29 = &v90;
    while ( 1 )
    {
      v87 = *v26;
      v101.m128_u64[0] = v87;
      if ( (unsigned int)a4 > (unsigned int)sub_FDE930((__int64 *)v16) )
        goto LABEL_25;
      if ( (_DWORD)a4 )
      {
        v81 = v29;
        v30 = 0;
        v79 = v26;
        while ( 1 )
        {
          v31 = *(_QWORD *)(a3 + 8 * v30);
          if ( v31 != sub_FDE960((__int64 *)v16, v30) )
          {
            v26 = v79;
            v29 = v81;
            goto LABEL_25;
          }
          if ( (_DWORD)a4 - 1 == v30 )
            break;
          ++v30;
        }
        v26 = v79;
        v29 = v81;
      }
      v35 = _mm_loadu_si128(v119);
      v36 = (char **)v119[0].m128i_i64[0];
      v102 = 0;
      v106 = &v16[4];
      v107 = 0x400000000LL;
      ptr = &v16[9];
      v115 = 0x200000000LL;
      v101 = (__m128)v35;
      v103 = 0;
      v104 = 0;
      v105 = 0;
      if ( (v87 & 3) != 1 )
        break;
      v64 = (const void **)sub_FDE9A0((__int64 *)&v87, 0);
      LOWORD(v94) = 261;
      v92 = v65;
      v91 = (void **)v64;
      v68 = sub_15A4EB0(v36, (const void ***)&v91, v65, 261, v66, v67);
      sub_15A2F70((__int64)v16, (__int64)v68);
      v73 = sub_15A5CA0((__int64)v16, (__int64)v68, v69, v70, v71, v72);
      v91 = nullptr;
      v92 = v73;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
      v94 = 0;
      *(_OWORD *)v95 = 0;
      v96 = 0;
      v97 = v97 & 0x80 | 0x40;
      v98 = 0;
      v99 = 0;
      v100 = 0;
      if ( v117 == v118 )
      {
        sub_1706840((__int64)&v116, v117, (__int64)&v91);
      }
      else
      {
        sub_17048E0((__int64)v117, (__int64)&v91);
        v117 += 96;
      }
      sub_1705410((__int64)v95);
      v63 = ptr;
      if ( ptr != &v16[9] )
        goto LABEL_73;
LABEL_74:
      if ( v106 != &v16[4] )
        free(v106);
LABEL_25:
      if ( v26 + 5 != (__int64 *)v27 )
      {
        if ( (unsigned __int64)v26[5] < 0xFFFFFFFFFFFFFFFELL )
        {
          v26 += 5;
          goto LABEL_31;
        }
        v32 = v26 + 10;
        while ( 1 )
        {
          v26 = v32;
          if ( v32 == (__int64 *)v27 )
            break;
          v32 += 5;
          if ( (unsigned __int64)*v26 < 0xFFFFFFFFFFFFFFFELL )
            goto LABEL_31;
        }
      }
      v26 = (__int64 *)v27;
LABEL_31:
      if ( (__int64 *)v82 == v26 )
        goto LABEL_32;
    }
    v88 = v29;
    LOBYTE(v90) = 0;
    v89 = 0;
    v37 = sub_FDE930((__int64 *)&v87);
    v41 = &v91;
    if ( v37 )
    {
      v85 = v26;
      v42 = (unsigned int)(v37 - 1);
      v43 = 0;
      v86 = v27;
      v80 = (__int64)v16;
      while ( 1 )
      {
        if ( v43 == a4 && v89 )
        {
          LOWORD(v94) = 260;
          v91 = &v88;
          v53 = sub_15A4EB0((char **)v101.m128_u64[0], (const void ***)&v91, (__int64)v38, (__int64)v41, v39, v40);
          sub_15A30F0(v80, (__int64)v53);
          v89 = 0;
          *(_BYTE *)v88 = 0;
        }
        v44 = (_BYTE *)sub_FDE9A0((__int64 *)&v87, v43);
        if ( v45 > 0x7FFFFFFFFFFFFFFFLL - v89 )
          std::__throw_length_error("basic_string::append");
        v46 = v88;
        v47 = v45 + v89;
        v48 = v88 == v29 ? 15LL : v90;
        if ( v47 > v48 )
        {
          sub_998B30((__int64)&v88, v89, 0, v44, v45);
          v46 = v88;
        }
        else if ( v45 )
        {
          v49 = (char *)v88 + v89;
          if ( v45 == 1 )
            *v49 = *v44;
          else
            memcpy(v49, v44, v45);
          v46 = v88;
        }
        v89 = v47;
        v46[v47] = 0;
        v50 = v89;
        v51 = v88;
        v52 = v89 + 1;
        if ( v88 == v29 )
          v41 = (void ***)(byte_9 + 6);
        else
          v41 = (void ***)v90;
        if ( v52 > (unsigned __int64)v41 )
        {
          sub_998B30((__int64)&v88, v89, 0, nullptr, 1u);
          v51 = v88;
        }
        v51[v50] = 58;
        v38 = v88;
        v89 = v52;
        *((_BYTE *)v88 + v50 + 1) = 0;
        if ( v42 == v43 )
          break;
        ++v43;
      }
      v26 = v85;
      v27 = v86;
      v16 = (__m128 *)v80;
    }
    LOWORD(v94) = 260;
    v91 = &v88;
    v54 = sub_15A4EB0((char **)v101.m128_u64[0], (const void ***)&v91, 260, (__int64)v41, v39, v40);
    sub_15A2F70((__int64)v16, (__int64)v54);
    v59 = sub_15A5CA0((__int64)v16, (__int64)v54, v55, v56, v57, v58);
    v91 = nullptr;
    v92 = v59;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v94 = 0;
    *(_OWORD *)v95 = 0;
    v96 = 0;
    v97 = v97 & 0x80 | 0x40;
    v98 = 0;
    v99 = 0;
    v100 = 0;
    if ( v117 == v118 )
    {
      sub_1706840((__int64)&v116, v117, (__int64)&v91);
    }
    else
    {
      sub_17048E0((__int64)v117, (__int64)&v91);
      v117 += 96;
    }
    v60 = v95[1];
    v61 = v95[0];
    if ( v95[1] != v95[0] )
    {
      do
      {
        while ( 1 )
        {
          v62 = (_QWORD *)v61[3];
          if ( v62 == v61 + 5 )
            break;
          operator delete(v62);
          v61 += 8;
          if ( v61 == v60 )
            goto LABEL_67;
        }
        v61 += 8;
      }
      while ( v60 != v61 );
LABEL_67:
      v61 = v95[0];
    }
    if ( v61 )
      operator delete(v61);
    if ( v88 != v29 )
      operator delete(v88);
    v63 = ptr;
    if ( ptr == &v16[9] )
      goto LABEL_74;
LABEL_73:
    free(v63);
    goto LABEL_74;
  }
LABEL_32:
  sub_16FF8C0((__int64)v120, v120[1]);
  v33 = 0;
  v34 = a1[1];
  if ( v116 != v117 )
    v33 = (__int64)v116;
  if ( v34 )
    sub_1700D50(*a1, v34, v121, v33, -1431655765 * ((v117 - v116) >> 5));
  sub_1700A70((__int64)&v116);
}
