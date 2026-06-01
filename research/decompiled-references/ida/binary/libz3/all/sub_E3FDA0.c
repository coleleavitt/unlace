__int64 __fastcall sub_E3FDA0(__int64 a1, _QWORD **a2, __int64 a3)
{
  void (*v3)(void); // rax
  void **v4; // rbx
  void **v5; // r13
  void (__fastcall ***v6)(void *); // rbp
  bool v7; // zf
  _QWORD *v8; // r14
  _DWORD *v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  _OWORD *v18; // rax
  _QWORD *v19; // r13
  _QWORD *v20; // r15
  __int64 *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // r13
  _QWORD *v24; // rcx
  __int64 *v25; // r15
  _QWORD *v26; // rax
  int v27; // eax
  _QWORD *v28; // rsi
  unsigned int v29; // eax
  int v30; // eax
  void (__fastcall ***v31)(void *); // rbp
  _QWORD *v32; // r13
  __int64 *v33; // rax
  unsigned int v34; // edx
  unsigned int v35; // ebx
  __int64 v36; // r12
  __int64 result; // rax
  void (__fastcall ***v38)(_QWORD); // rbx
  __int64 *v39; // rbx
  unsigned __int64 v40; // rbp
  __int64 v41; // rsi
  unsigned int v42; // r8d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rsi
  __int64 *v46; // r13
  _QWORD *v47; // rbx
  _OWORD *v48; // rax
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  __int64 *v53; // r12
  __int64 v54; // r15
  __int64 *i; // rbx
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 *v58; // rdx
  unsigned int v59; // eax
  unsigned int v60; // edx
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 *v63; // rdx
  __int64 *v64; // r12
  __int64 *v65; // r15
  char *v66; // r10
  char *v67; // rcx
  int v68; // edi
  __int64 v69; // rax
  char *v70; // rsi
  __int64 v71; // rdx
  char *v72; // r9
  char *j; // rdx
  char *v74; // rax
  __int64 v75; // rax
  __int64 *v76; // rax
  __int64 *v77; // r12
  unsigned __int64 v78; // r15
  __int64 v79; // rsi
  __int64 v80; // rbx
  _QWORD *v81; // rdi
  __int64 v82; // rax
  unsigned int v83; // ecx
  size_t v84; // rsi
  unsigned int *v85; // rax
  char **v86; // r13
  __int64 v87; // rdx
  _QWORD *v88; // rax
  __int64 v89; // rax
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rbx
  void (__fastcall ***v93)(void *); // r12
  _QWORD *v94; // rdx
  __int64 k; // rax
  char **v96; // r13
  __int64 v97; // rdx
  char **v98; // rbp
  __int64 v99; // rdx
  char **exception; // rbx
  __int64 v101; // rdx
  char **v102; // rbp
  __int64 v103; // rdx
  char **v104; // r12
  __int64 v105; // rdx
  unsigned int v106; // [rsp+0h] [rbp-148h]
  unsigned int v107; // [rsp+0h] [rbp-148h]
  _DWORD *v108; // [rsp+0h] [rbp-148h]
  __int64 v111; // [rsp+28h] [rbp-120h]
  __int64 *v112; // [rsp+38h] [rbp-110h] BYREF
  void *v113; // [rsp+40h] [rbp-108h] BYREF
  void *v114; // [rsp+48h] [rbp-100h] BYREF
  _QWORD *v115; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD *v116; // [rsp+58h] [rbp-F0h]
  __int64 v117; // [rsp+60h] [rbp-E8h]
  void *ptr; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v119; // [rsp+78h] [rbp-D0h]
  int v120; // [rsp+80h] [rbp-C8h]
  __int64 v121[4]; // [rsp+90h] [rbp-B8h] BYREF
  _OWORD v122[2]; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v123; // [rsp+D0h] [rbp-78h]
  void *v124; // [rsp+D8h] [rbp-70h]
  __int64 v125; // [rsp+E0h] [rbp-68h]
  int v126; // [rsp+E8h] [rbp-60h]
  __int128 v127; // [rsp+F0h] [rbp-58h]
  int v128; // [rsp+100h] [rbp-48h]

  v3 = *(void (**)(void))(*(_QWORD *)a1 + 152LL);
  if ( (char *)v3 == (char *)sub_E3BD80 )
  {
    sub_E3B820(a1 + 88);
    v4 = *(void ***)(a1 + 48);
    if ( v4 )
    {
      v5 = &v4[*((unsigned int *)v4 - 1)];
      if ( v4 >= v5 )
        goto LABEL_10;
      do
      {
        while ( 1 )
        {
          v6 = (void (__fastcall ***)(void *))*v4;
          if ( *v4 )
          {
            v7 = (*((_DWORD *)v6 + 4))-- == 1;
            if ( v7 )
              break;
          }
          if ( ++v4 >= v5 )
            goto LABEL_9;
        }
        ++v4;
        (**v6)(v6);
        sub_186B220(v6);
      }
      while ( v4 < v5 );
LABEL_9:
      v4 = *(void ***)(a1 + 48);
      if ( v4 )
LABEL_10:
        *((_DWORD *)v4 - 1) = 0;
    }
  }
  else
  {
    v3();
  }
  sub_EE4F60("parallel-tactic");
  v8 = (_QWORD *)**a2;
  if ( v8[114] )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_181416((__int64 *)v122, "parallel tactic does not work with trace", v101);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v122);
    sub_233E40((__int64)v122);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v9 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 80LL))(
                   *(_QWORD *)(a1 + 16),
                   **a2,
                   a1 + 40);
  v10 = sub_186B270(0x58u);
  *(_OWORD *)v10 = 0;
  *(_QWORD *)(v10 + 16) = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 72LL))(v9);
  v11 = *(_QWORD *)v9;
  *(_QWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 32) = (*(__int64 (__fastcall **)(_DWORD *))(v11 + 72))(v9);
  *(_QWORD *)(v10 + 40) = 0;
  sub_1858590(v10 + 48, a1 + 40);
  *(_QWORD *)(v10 + 56) = v9;
  ++v9[12];
  *(_DWORD *)(v10 + 64) = 0;
  *(_QWORD *)(v10 + 72) = 0x3FF0000000000000LL;
  *(_BYTE *)(v10 + 80) = 0;
  if ( &_pthread_key_create )
  {
    v12 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 88));
    if ( v12 )
      std::__throw_system_error(v12);
  }
  v13 = *(_QWORD **)(a1 + 176);
  if ( v13 )
  {
    v14 = *((_DWORD *)v13 - 1);
    if ( v14 == *((_DWORD *)v13 - 2) )
    {
      v83 = (3 * v14 + 1) >> 1;
      v84 = 8 * v83 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v84 || v14 >= v83 )
      {
        v102 = (char **)__cxa_allocate_exception(0x28u);
        sub_181416((__int64 *)v122, "Overflow encountered when expanding vector", v103);
        *v102 = (char *)off_1C63128;
        sub_2333C0(v102 + 1, v122);
        sub_233E40((__int64)v122);
        __cxa_throw(v102, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v106 = (3 * v14 + 1) >> 1;
      v85 = (unsigned int *)sub_186B300(v13 - 1, v84);
      v13 = v85 + 2;
      *(_QWORD *)(a1 + 176) = v85 + 2;
      *v85 = v106;
      LODWORD(v85) = v85[1];
      v17 = &v13[(unsigned int)v85];
      v16 = (_DWORD)v85 + 1;
    }
    else
    {
      v15 = v14;
      v16 = v14 + 1;
      v17 = &v13[v15];
    }
  }
  else
  {
    v94 = (_QWORD *)sub_186B270(0x18u);
    *v94 = 2;
    v16 = 1;
    v13 = v94 + 1;
    *(_QWORD *)(a1 + 176) = v13;
    v17 = v13;
  }
  *v17 = v10;
  *((_DWORD *)v13 - 1) = v16;
  if ( *(_DWORD *)(a1 + 192) )
    std::condition_variable::notify_one((std::condition_variable *)(a1 + 128));
  if ( &_pthread_key_create )
    pthread_mutex_unlock((pthread_mutex_t *)(a1 + 88));
  v115 = v8;
  v116 = nullptr;
  v112 = nullptr;
  v18 = (_OWORD *)sub_186B270(0x80u);
  ptr = v18;
  *v18 = 0;
  v18[1] = 0;
  v18[2] = 0;
  v18[3] = 0;
  v18[4] = 0;
  v18[5] = 0;
  v18[6] = 0;
  v18[7] = 0;
  v120 = 0;
  v119 = 8;
  v113 = nullptr;
  sub_E5B080(a2, &v115, &v112, &ptr, &v113);
  if ( v116 )
  {
    v19 = &v116[*((unsigned int *)v116 - 1)];
    if ( v116 != v19 )
    {
      v20 = v116;
      do
        sub_E5EBF0(v9, *v20++);
      while ( v19 != v20 );
    }
  }
  v21 = v112;
  if ( v112 )
  {
    v22 = *((unsigned int *)v112 - 1);
    if ( (_DWORD)v22 )
    {
      v23 = *v112;
      v24 = *(_QWORD **)(v10 + 40);
      v25 = &v112[v22];
      if ( *v112 )
        ++*(_DWORD *)(v23 + 8);
      if ( v24 )
        goto LABEL_34;
      v26 = (_QWORD *)sub_186B270(0x18u);
      v24 = v26 + 1;
      *v26 = 2;
      v27 = 1;
      *(_QWORD *)(v10 + 40) = v24;
      v28 = v24;
      while ( 1 )
      {
        ++v21;
        *v28 = v23;
        *((_DWORD *)v24 - 1) = v27;
        if ( v25 == v21 )
          break;
        while ( 1 )
        {
          v23 = *v21;
          if ( *v21 )
            ++*(_DWORD *)(v23 + 8);
LABEL_34:
          v29 = *((_DWORD *)v24 - 1);
          if ( v29 == *((_DWORD *)v24 - 2) )
            break;
          ++v21;
          v24[v29] = v23;
          *((_DWORD *)v24 - 1) = v29 + 1;
          if ( v25 == v21 )
            goto LABEL_36;
        }
        v42 = (3 * v29 + 1) >> 1;
        v43 = 8 * v42 + 8;
        if ( 8 * v29 + 8 >= (unsigned int)v43 || v29 >= v42 )
        {
          v98 = (char **)__cxa_allocate_exception(0x28u);
          sub_181416((__int64 *)v122, "Overflow encountered when expanding vector", v99);
          *v98 = (char *)off_1C63128;
          sub_2333C0(v98 + 1, v122);
          sub_233E40((__int64)v122);
          __cxa_throw(v98, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v106 = (3 * v29 + 1) >> 1;
        v44 = (unsigned int *)sub_186B300(v24 - 1, v43);
        v45 = v44[1];
        v24 = v44 + 2;
        *(_QWORD *)(v10 + 40) = v44 + 2;
        *v44 = v106;
        LODWORD(v44) = v45;
        v28 = &v24[v45];
        v27 = (_DWORD)v44 + 1;
      }
    }
  }
LABEL_36:
  v114 = nullptr;
  v30 = sub_E3D8C0((pthread_mutex_t *)a1, (__int64 *)&v114, 0.0);
  v31 = (void (__fastcall ***)(void *))v114;
  if ( !v30 )
  {
    if ( !(unsigned __int8)sub_18290A0(v8) )
    {
      v104 = (char **)__cxa_allocate_exception(0x28u);
      sub_181416((__int64 *)v122, (const char *)off_1C7E180, v105);
      *v104 = (char *)off_1C63670;
      sub_2333C0(v104 + 1, v122);
      sub_233E40((__int64)v122);
      __cxa_throw(v104, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    if ( *(_BYTE *)(a1 + 260) )
    {
      v86 = (char **)__cxa_allocate_exception(0x28u);
      sub_181416((__int64 *)v122, *(const char **)(a1 + 312), v87);
      *v86 = (char *)off_1C63670;
      sub_2333C0(v86 + 1, v122);
      sub_233E40((__int64)v122);
      __cxa_throw(v86, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    goto LABEL_103;
  }
  if ( v30 != 1 )
  {
    v46 = *(__int64 **)(a1 + 56);
    if ( v46 )
    {
      v47 = (_QWORD *)*v46;
      v123 = 0;
      v122[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v47, (__m128i)(unsigned __int64)v8);
      v122[1] = 0;
      v48 = (_OWORD *)sub_186B270(0x80u);
      v124 = v48;
      *v48 = 0;
      v48[1] = 0;
      v48[2] = 0;
      v48[3] = 0;
      v48[4] = 0;
      v48[5] = 0;
      v48[6] = 0;
      v48[7] = 0;
      v126 = 0;
      v125 = 8;
      v128 = 0;
      v127 = 0;
      if ( v47 != v8 )
      {
        sub_15DA640(DWORD2(v122[0]), v122[0], v49, v50, v51, v52, v106);
        sub_15D2280(*((_QWORD *)&v122[0] + 1), *(_QWORD *)&v122[0]);
      }
      v46 = *(__int64 **)(*(_QWORD *)(a1 + 56) + 8LL);
      v111 = *((_QWORD *)&v122[0] + 1);
      v117 = *((_QWORD *)&v122[0] + 1);
      if ( v46 )
      {
        v53 = &v46[*((unsigned int *)v46 - 1)];
        if ( v46 != v53 )
        {
          v54 = *v46;
          if ( *((_QWORD *)&v122[0] + 1) == *(_QWORD *)&v122[0] )
          {
            if ( v54 )
              ++*(_DWORD *)(v54 + 8);
          }
          else
          {
            v54 = sub_15CFF50(v122, v54);
            i = nullptr;
            if ( v54 )
              goto LABEL_76;
          }
LABEL_124:
          v88 = (_QWORD *)sub_186B270(0x18u);
          v58 = v88 + 1;
          *v88 = 2;
          v57 = 1;
          for ( i = v58; ; v58 = &i[v56] )
          {
            ++v46;
            *v58 = v54;
            *((_DWORD *)i - 1) = v57;
            if ( v46 == v53 )
              break;
            while ( 1 )
            {
              v54 = *v46;
              if ( *((_QWORD *)&v122[0] + 1) == *(_QWORD *)&v122[0] )
              {
                if ( v54 )
                  ++*(_DWORD *)(v54 + 8);
              }
              else
              {
                v54 = sub_15CFF50(v122, *v46);
                if ( v54 )
                {
LABEL_76:
                  ++*(_DWORD *)(v54 + 8);
                  if ( !i )
                    goto LABEL_124;
                }
              }
              v59 = *((_DWORD *)i - 1);
              if ( v59 != *((_DWORD *)i - 2) )
                break;
              v60 = (3 * v59 + 1) >> 1;
              v61 = 8 * v60 + 8;
              if ( 8 * v59 + 8 >= (unsigned int)v61 || v59 >= v60 )
              {
                v96 = (char **)__cxa_allocate_exception(0x28u);
                sub_181416(v121, "Overflow encountered when expanding vector", v97);
                *v96 = (char *)off_1C63128;
                sub_2333C0(v96 + 1, v121);
                sub_233E40((__int64)v121);
                __cxa_throw(v96, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v107 = (3 * v59 + 1) >> 1;
              v62 = (unsigned int *)sub_186B300(i - 1, v61);
              i = (__int64 *)(v62 + 2);
              ++v46;
              *v62 = v107;
              LODWORD(v62) = v62[1];
              v63 = &i[(unsigned int)v62];
              v57 = (unsigned int)((_DWORD)v62 + 1);
              *v63 = v54;
              *((_DWORD *)i - 1) = v57;
              if ( v46 == v53 )
                goto LABEL_81;
            }
            v56 = v59;
            v57 = v59 + 1;
          }
LABEL_81:
          v64 = &i[v57];
          if ( i == v64 )
          {
            v46 = nullptr;
          }
          else
          {
            v65 = i;
            v46 = nullptr;
            do
            {
              v66 = (char *)*v65;
              v67 = (char *)ptr;
              v68 = *(_DWORD *)(*v65 + 12);
              v69 = 16LL * (unsigned int)v119;
              v70 = (char *)ptr + v69;
              v71 = 16LL * (v68 & (unsigned int)(v119 - 1));
              v72 = (char *)ptr + v71;
              if ( v71 != v69 )
              {
                for ( j = (char *)ptr + v71; v70 != j; j += 16 )
                {
                  v74 = *(char **)j;
                  if ( *(_QWORD *)j > 1u )
                  {
                    if ( *((_DWORD *)v74 + 3) == v68 && v66 == v74 )
                    {
                      v74 = j;
                      goto LABEL_90;
                    }
                  }
                  else if ( !v74 )
                  {
                    goto LABEL_90;
                  }
                }
              }
              if ( ptr == v72 )
              {
LABEL_137:
                v74 = nullptr;
              }
              else
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v74 = *(char **)v67;
                    if ( *(_QWORD *)v67 > 1u )
                      break;
                    if ( !v74 )
                      goto LABEL_90;
                    v67 += 16;
                    if ( v72 == v67 )
                      goto LABEL_137;
                  }
                  if ( *((_DWORD *)v74 + 3) == v68 && v66 == v74 )
                    break;
                  v67 += 16;
                  if ( v72 == v67 )
                    goto LABEL_137;
                }
                v74 = v67;
              }
LABEL_90:
              v75 = sub_15D3210(v8, *((_QWORD *)v74 + 1));
              if ( v46 )
              {
                if ( (__int64 *)v75 != v46 )
                {
                  v108 = (_DWORD *)v75;
                  if ( v75 )
                  {
                    v76 = (__int64 *)sub_17E9C90(v8[82], 24);
                    *(_DWORD *)v46 = (*(_DWORD *)v46 + 1) & 0x3FFFFFFF | *(_DWORD *)v46 & 0xC0000000;
                    *v108 = (*v108 + 1) & 0x3FFFFFFF | *v108 & 0xC0000000;
                    *v76 = 0;
                    v76[2] = (__int64)v108;
                    v76[1] = (__int64)v46;
                    v46 = v76;
                  }
                }
              }
              else
              {
                v46 = (__int64 *)v75;
              }
              ++v65;
            }
            while ( v64 != v65 );
          }
          v77 = i;
          v78 = (unsigned __int64)&i[*((unsigned int *)i - 1)];
          if ( (unsigned __int64)i < v78 )
          {
            do
            {
              while ( 1 )
              {
                v79 = *v77;
                if ( *v77 )
                {
                  v7 = (*(_DWORD *)(v79 + 8))-- == 1;
                  if ( v7 )
                    break;
                }
                if ( (unsigned __int64)++v77 >= v78 )
                  goto LABEL_101;
              }
              ++v77;
              sub_15D7BC0(v111, v79);
            }
            while ( (unsigned __int64)v77 < v78 );
          }
LABEL_101:
          sub_186B220(i - 1);
          sub_15CE760(v122);
          goto LABEL_102;
        }
        v46 = nullptr;
      }
      sub_15CE760(v122);
    }
LABEL_102:
    sub_EDB570(*a2, v8[108], 0, v46);
    goto LABEL_103;
  }
  sub_ED2DA0(*a2);
  v32 = *a2;
  if ( (*((_BYTE *)*a2 + 123) & 4) == 0 )
    goto LABEL_39;
  v89 = sub_1336B20(v31);
  v90 = sub_1336AB0(v113, v89);
  v91 = sub_1336AB0(v32[1], v90);
  v92 = v91;
  if ( v91 )
    ++*(_DWORD *)(v91 + 8);
  v93 = (void (__fastcall ***)(void *))v32[1];
  if ( v93 )
  {
    v7 = (*((_DWORD *)v93 + 2))-- == 1;
    if ( v7 )
    {
      (**v93)(v93);
      sub_186B220(v93);
    }
  }
  v32[1] = v92;
LABEL_103:
  v32 = *a2;
  if ( !*a2 )
  {
    v33 = (__int64 *)a3;
    v34 = *(_DWORD *)(a3 + 8);
    v35 = *(_DWORD *)(a3 + 12);
    if ( v34 < v35 )
      goto LABEL_40;
LABEL_105:
    v80 = 2 * v35;
    v36 = sub_186B270(8 * v80);
    v34 = *(_DWORD *)(a3 + 8);
    v81 = *(_QWORD **)a3;
    if ( v34 )
    {
      if ( v34 - 1 <= 2 || (_QWORD *)v36 == v81 + 1 )
      {
        for ( k = 0; k != v34; ++k )
          *(_QWORD *)(v36 + k * 8) = v81[k];
      }
      else
      {
        v82 = 0;
        do
        {
          *(__m128i *)(v36 + v82 * 8) = _mm_loadu_si128((const __m128i *)&v81[v82]);
          v82 += 2;
        }
        while ( 2LL * (v34 >> 1) != v82 );
        if ( (v34 & 1) != 0 )
          *(_QWORD *)(v36 + 8LL * (v34 & 0xFFFFFFFE)) = v81[v34 & 0xFFFFFFFE];
      }
    }
    if ( v81 != (_QWORD *)(a3 + 16) && v81 )
    {
      sub_186B220(v81);
      v34 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v36;
    *(_DWORD *)(a3 + 12) = v80;
    goto LABEL_41;
  }
LABEL_39:
  v33 = (__int64 *)a3;
  ++*((_DWORD *)v32 + 8);
  v34 = *(_DWORD *)(a3 + 8);
  v35 = *(_DWORD *)(a3 + 12);
  if ( v34 >= v35 )
    goto LABEL_105;
LABEL_40:
  v36 = *v33;
LABEL_41:
  *(_QWORD *)(v36 + 8LL * v34) = v32;
  result = a3;
  *(_DWORD *)(a3 + 8) = v34 + 1;
  if ( v31 )
  {
    v7 = (*((_DWORD *)v31 + 4))-- == 1;
    if ( v7 )
    {
      (**v31)(v31);
      result = sub_186B220(v31);
    }
  }
  v38 = (void (__fastcall ***)(_QWORD))v113;
  if ( v113 )
  {
    v7 = (*((_DWORD *)v113 + 2))-- == 1;
    if ( v7 )
    {
      (**v38)(v38);
      result = sub_186B220(v38);
    }
  }
  if ( ptr )
    result = sub_186B220(ptr);
  if ( v112 )
    result = sub_186B220(v112 - 1);
  v39 = v116;
  if ( v116 )
  {
    result = *((unsigned int *)v116 - 1);
    v40 = (unsigned __int64)&v116[result];
    if ( (unsigned __int64)v116 >= v40 )
      return sub_186B220(v39 - 1);
    do
    {
      while ( 1 )
      {
        v41 = *v39;
        if ( *v39 )
        {
          v7 = (*(_DWORD *)(v41 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( (unsigned __int64)++v39 >= v40 )
          goto LABEL_58;
      }
      result = sub_15D7BC0(v115, v41);
      ++v39;
    }
    while ( (unsigned __int64)v39 < v40 );
LABEL_58:
    v39 = v116;
    if ( v116 )
      return sub_186B220(v39 - 1);
  }
  return result;
}

