__int64 __fastcall sub_1851AB0(
        __int64 a1,
        double a2,
        double a3,
        __int64 a4,
        __int64 a5,
        const void *a6,
        unsigned __int64 a7,
        unsigned int a8)
{
  char v11; // al
  __int64 v12; // rax
  __m128 si128; // xmm0
  __int64 p_ptr; // rsi
  __int64 v15; // rdx
  __int64 *v16; // rax
  _DWORD *v17; // rdx
  __int64 *v18; // r13
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // r14
  size_t v25; // rax
  size_t v26; // r12
  int v27; // eax
  char *v28; // rax
  unsigned __int64 v29; // rdi
  size_t v30; // rdx
  size_t v31; // r12
  char *v32; // r15
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _BYTE *v37; // r14
  int v38; // eax
  __int64 v39; // rax
  int v40; // eax
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // rbp
  __int64 v47; // r13
  void *v48; // rdi
  void *v49; // rdi
  _BYTE *v50; // r13
  __int64 v51; // r14
  _BYTE *v52; // rbp
  int v53; // eax
  unsigned int v54; // edx
  unsigned int i; // r13d
  __int64 v56; // rax
  void **v57; // r15
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // r15
  void **v61; // rbx
  void *v62; // r13
  __int64 v63; // r13
  void *v64; // rdi
  void *v65; // rdi
  char v66; // al
  _BYTE *v67; // rbp
  _BYTE *v68; // rdi
  _QWORD *v69; // r13
  _QWORD *v70; // rbp
  _QWORD *v71; // rdi
  __int64 v72; // rbx
  __int64 v73; // rbp
  void *v74; // rdi
  void *v75; // rdi
  void *v77; // rdi
  void **v78; // rbp
  __int64 v79; // rsi
  __int64 v80; // r13
  void *v81; // rdi
  void *v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rbp
  void *v85; // rdi
  void *v86; // rdi
  unsigned __int64 v87; // rax
  char *v88; // rdi
  __int64 v89; // rax
  __int64 v90; // [rsp-10h] [rbp-C08h]
  __int64 v91; // [rsp-8h] [rbp-C00h]
  unsigned int v92; // [rsp+8h] [rbp-BF0h]
  __int64 v93; // [rsp+8h] [rbp-BF0h]
  unsigned int v95; // [rsp+18h] [rbp-BE0h]
  __int64 v96; // [rsp+18h] [rbp-BE0h]
  __int64 *v98; // [rsp+20h] [rbp-BD8h]
  __int64 v99; // [rsp+20h] [rbp-BD8h]
  __int64 v100; // [rsp+28h] [rbp-BD0h]
  char v101; // [rsp+37h] [rbp-BC1h]
  int v102; // [rsp+44h] [rbp-BB4h] BYREF
  __int64 v103; // [rsp+48h] [rbp-BB0h] BYREF
  void *ptr; // [rsp+50h] [rbp-BA8h] BYREF
  __m128 v105; // [rsp+58h] [rbp-BA0h]
  _BYTE dest[24]; // [rsp+68h] [rbp-B90h] BYREF
  __int64 v107[3]; // [rsp+80h] [rbp-B78h] BYREF
  void *v108; // [rsp+98h] [rbp-B60h]
  __int64 v109; // [rsp+A8h] [rbp-B50h] BYREF
  __int64 v110[18]; // [rsp+C0h] [rbp-B38h] BYREF
  _DWORD *v111; // [rsp+150h] [rbp-AA8h] BYREF
  __int64 v112; // [rsp+158h] [rbp-AA0h]
  void *v113[2]; // [rsp+160h] [rbp-A98h]
  unsigned __int8 *v114[3]; // [rsp+170h] [rbp-A88h] BYREF
  int v115; // [rsp+188h] [rbp-A70h]
  __int64 v116; // [rsp+190h] [rbp-A68h]
  __int64 v117; // [rsp+1A0h] [rbp-A58h]
  __int64 v118; // [rsp+1A8h] [rbp-A50h]
  int v119; // [rsp+1B0h] [rbp-A48h]
  __int64 v120; // [rsp+1B8h] [rbp-A40h]
  __int64 v121; // [rsp+1C0h] [rbp-A38h]
  int v122; // [rsp+1C8h] [rbp-A30h]
  _BYTE *v123; // [rsp+1D0h] [rbp-A28h]
  __int64 v124; // [rsp+1D8h] [rbp-A20h]
  _BYTE v125[576]; // [rsp+1E0h] [rbp-A18h] BYREF
  __int16 v126; // [rsp+420h] [rbp-7D8h]
  __int64 v127; // [rsp+428h] [rbp-7D0h]
  void *v128; // [rsp+430h] [rbp-7C8h]
  __int64 v129; // [rsp+438h] [rbp-7C0h]
  _BYTE v130[16]; // [rsp+440h] [rbp-7B8h] BYREF
  __int64 v131; // [rsp+450h] [rbp-7A8h] BYREF
  void *v132; // [rsp+458h] [rbp-7A0h]
  __int64 v133; // [rsp+460h] [rbp-798h]
  _QWORD v134[3]; // [rsp+468h] [rbp-790h] BYREF
  __int64 v135; // [rsp+480h] [rbp-778h]
  __int64 v136; // [rsp+488h] [rbp-770h]
  __int64 v137; // [rsp+490h] [rbp-768h]
  __int64 v138; // [rsp+498h] [rbp-760h]
  __int64 v139; // [rsp+4A0h] [rbp-758h]
  __int64 v140; // [rsp+BA8h] [rbp-50h]
  __int64 v141; // [rsp+BB0h] [rbp-48h]

  v95 = *(_DWORD *)(a5 + 160);
  v92 = *(_DWORD *)(a5 + 264);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0 && (*(_BYTE *)(a5 + 4) & 8) == 0 )
  {
    sub_168B9F0((__int64)&v111, (__int64 *)(a1 + 8), v92, 0xF0Fu, 0);
    sub_15F7200(&v111);
  }
  v11 = (*(_BYTE *)(a5 + 3) >> 2) & 0x1F;
  if ( v11 )
  {
    if ( (*(_BYTE *)(a5 + 3) & 4) != 0 )
    {
      sub_168B9F0((__int64)&v111, (__int64 *)(a1 + 8), *(_DWORD *)(a5 + 220), 0x16u, 0);
      if ( (_BYTE)v122 )
      {
        sub_AE9DF0(v114, (__int64)"const", 1u);
      }
      else if ( BYTE4(v123) )
      {
        sub_18510A0((__int64)&v111, (__int64)"const");
      }
      sub_15F7200(&v111);
      v11 = (*(_BYTE *)(a5 + 3) >> 2) & 0x1F;
      if ( ((*(_BYTE *)(a5 + 3) >> 2) & 4) == 0 )
      {
LABEL_7:
        if ( (v11 & 2) == 0 )
          goto LABEL_8;
        goto LABEL_158;
      }
    }
    else if ( ((*(_BYTE *)(a5 + 3) >> 2) & 4) == 0 )
    {
      goto LABEL_7;
    }
    sub_168B9F0((__int64)&v111, (__int64 *)(a1 + 8), *(_DWORD *)(a5 + 228), 0x16u, 0);
    if ( (_BYTE)v122 )
    {
      sub_AE9DF0(v114, (__int64)"volatile", 1u);
    }
    else if ( BYTE4(v123) )
    {
      sub_18510A0((__int64)&v111, (__int64)"volatile");
    }
    sub_15F7200(&v111);
    v11 = (*(_BYTE *)(a5 + 3) >> 2) & 0x1F;
    if ( ((*(_BYTE *)(a5 + 3) >> 2) & 2) == 0 )
    {
LABEL_8:
      if ( (v11 & 0x10) == 0 )
      {
LABEL_9:
        if ( (v11 & 8) != 0 )
        {
          sub_168B9F0((__int64)&v111, (__int64 *)(a1 + 8), *(_DWORD *)(a5 + 236), 0x16u, 0);
          if ( (_BYTE)v122 )
          {
            sub_AE9DF0(v114, (__int64)"__unaligned", 1u);
          }
          else if ( BYTE4(v123) )
          {
            sub_18510A0((__int64)&v111, (__int64)"__unaligned");
          }
          sub_15F7200(&v111);
        }
        goto LABEL_10;
      }
LABEL_162:
      sub_168B9F0((__int64)&v111, (__int64 *)(a1 + 8), *(_DWORD *)(a5 + 232), 0x16u, 0);
      if ( (_BYTE)v122 )
      {
        sub_AE9DF0(v114, (__int64)"_Atomic", 1u);
      }
      else if ( BYTE4(v123) )
      {
        sub_18510A0((__int64)&v111, (__int64)"_Atomic");
      }
      sub_15F7200(&v111);
      v11 = (*(_BYTE *)(a5 + 3) >> 2) & 0x1F;
      goto LABEL_9;
    }
LABEL_158:
    sub_168B9F0((__int64)&v111, (__int64 *)(a1 + 8), *(_DWORD *)(a5 + 224), 0x16u, 0);
    if ( (_BYTE)v122 )
    {
      sub_AE9DF0(v114, (__int64)"restrict", 1u);
    }
    else if ( BYTE4(v123) )
    {
      sub_18510A0((__int64)&v111, (__int64)"restrict");
    }
    sub_15F7200(&v111);
    v11 = (*(_BYTE *)(a5 + 3) >> 2) & 0x1F;
    if ( ((*(_BYTE *)(a5 + 3) >> 2) & 0x10) == 0 )
      goto LABEL_9;
    goto LABEL_162;
  }
LABEL_10:
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v12 = *(_QWORD *)(a5 + 160);
  si128 = 0;
  p_ptr = (__int64)&v111;
  *(_OWORD *)v113 = 0;
  v118 = v12;
  v123 = v125;
  v124 = 0x400000000LL;
  LODWORD(v12) = *(_DWORD *)a5;
  v134[2] = qword_2CD8AE0;
  v111 = (_DWORD *)a5;
  v112 = 0;
  memset(v114, 0, sizeof(v114));
  v115 = 0;
  v15 = *(_QWORD *)(a5 + 72);
  LOBYTE(v126) = ((((unsigned int)v12 >> 12) & 0x7F) == 69) | v126 & 0xFE;
  v128 = v130;
  v131 = v15;
  v132 = v134;
  v129 = 0x200000000LL;
  v133 = 0x200000000LL;
  v116 = 0;
  v117 = 0;
  v119 = 7;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v126 &= 0xFC01u;
  v127 = 0;
  v135 = 0;
  v136 = 0;
  v137 = 0;
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v16 = (__int64 *)sub_1E85170(a1, &v111);
  v17 = v111;
  v18 = v16;
  v103 = *v16;
  if ( (v126 & 1) != 0 )
    goto LABEL_118;
  v19 = 0;
  if ( ((*v111 >> 12) & 0x7F) != 0x45 )
  {
    if ( a8 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*v16 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) == 0 )
      {
        sub_168B9F0((__int64)v110, (__int64 *)(a1 + 8), a8, 0x12ACu, 0);
        v107[0] = *v18;
        v107[1] = (__int64)(v18 + 1);
        p_ptr = (__int64)&ptr;
        ptr = (void *)sub_183A8D0(v107, (__m128)0LL);
        sub_1587DB0((__int64)v110, (__int64 *)&ptr);
        sub_15F7200(v110);
        v101 = 1;
        goto LABEL_16;
      }
    }
    else
    {
      p_ptr = v95;
      if ( (unsigned __int8)sub_1E535C0(a1, v95, v16, 9) )
      {
LABEL_33:
        v17 = v111;
        goto LABEL_34;
      }
    }
    v101 = 0;
LABEL_16:
    if ( (unsigned __int8)sub_F589F0(*(_QWORD *)(v103 & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      v100 = (unsigned __int64)v18 | 4;
      if ( a7 )
      {
        v87 = sub_BC4B60(*(_QWORD **)(a1 + 248), *(_QWORD *)(a1 + 544), v95, a6, a7, v100, v92);
        v44 = v90;
        v19 = v87;
        goto LABEL_30;
      }
      goto LABEL_29;
    }
    v98 = (__int64 *)(a1 + 8);
    if ( !a7 )
    {
      v24 = sub_F63240(*(_QWORD *)(v103 & 0xFFFFFFFFFFFFFFF0LL), p_ptr, v20, v21, v22, v23);
      v100 = (unsigned __int64)v18 | 4;
      if ( v24 )
      {
        v25 = j__strlen(" ");
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
        v26 = v25;
        ptr = dest;
        v105 = si128;
        if ( v25 > 0x10 )
        {
          sub_2236E10(&ptr, dest, v25, 1);
          v88 = (char *)ptr + v105.m128_u64[0];
        }
        else
        {
          if ( !v25 )
          {
LABEL_21:
            v105.m128_u64[0] = v26;
            v27 = sub_F58620(*((_BYTE *)v24 + 73) >> 5);
            v28 = sub_F58640(v27);
            v29 = v105.m128_u64[0];
            v31 = v30;
            v32 = v28;
            v33 = v105.m128_u64[0] + v30;
            if ( v33 > v105.m128_u64[1] )
            {
              sub_2236E10(&ptr, dest, v33, 1);
              v29 = v105.m128_u64[0];
            }
            if ( v31 )
            {
              memcpy((char *)ptr + v29, v32, v31);
              v29 = v105.m128_u64[0];
            }
            v34 = *(_QWORD *)(a1 + 232);
            v105.m128_u64[0] = v29 + v31;
            sub_168B9F0((__int64)v110, v98, v95, (*(_BYTE *)(v34 + 1) & 0x10) == 0 ? 5717 : 6784, 0);
            v102 = *((_BYTE *)v24 + 73) >> 5;
            v35 = sub_16CF160((__int64)v110, (unsigned int *)&v102);
            v36 = sub_1605D30(v35, &v103);
            v37 = ptr;
            v96 = v36;
            v99 = v105.m128_u64[0];
            v38 = sub_15F0EF0(a1, v92, 0, (__m128i)si128, a3);
            sub_9EC740((__int64)v107, v38, v37, v99, 0);
            sub_1589170(v96, v107);
            if ( v108 != &v109 )
              operator delete(v108);
            sub_15F7200(v110);
            if ( ptr != dest )
              free(ptr);
            goto LABEL_29;
          }
          v88 = dest;
        }
        memcpy(v88, " ", v26);
        v26 += v105.m128_u64[0];
        goto LABEL_21;
      }
      sub_168BB30((__int64)v110, (__int64 *)(a1 + 8), v92, 1u, 0);
      v89 = sub_1605D30((__int64)v110, &v103);
      v107[0] = *(_QWORD *)(a5 + 160);
      sub_1587DB0(v89, v107);
      sub_15F7200(v110);
LABEL_29:
      v39 = *v18;
      v110[1] = (__int64)(v18 + 1);
      v110[0] = v39;
      v40 = sub_F6CCB0(v110, si128);
      v41 = sub_BA5C60(*(_QWORD **)(a1 + 248), *(_QWORD *)(a1 + 544), v40, v100, v92, a8, nullptr, 0);
      v45 = v91;
      v19 = v41;
LABEL_30:
      if ( v19 )
      {
        *(_BYTE *)(v19 + 29) &= 0x9Fu;
        sub_B94AD0(*(__m128i **)(a1 + 544), v19, v42, v43, v45, v44);
        if ( v101 )
          sub_B88650(v19, 1);
      }
      goto LABEL_33;
    }
    sub_168B9F0((__int64)v110, (__int64 *)(a1 + 8), v95, 0x13D5u, 0);
    v107[0] = *(_QWORD *)(a5 + 160);
    sub_1587DB0((__int64)v110, v107);
    sub_15F7200(v110);
    v17 = v111;
LABEL_118:
    v19 = 0;
  }
LABEL_34:
  v112 = 0;
  v113[0] = nullptr;
  v46 = v121;
  LODWORD(v114[0]) = 0;
  v115 = 0;
  v116 = 0;
  v117 = 0;
  v118 = *((_QWORD *)v17 + 20);
  v120 = 0;
  if ( v122 < 0 )
  {
    if ( v121 )
    {
      v79 = 112LL * *(_QWORD *)(v121 - 8);
      v80 = v121 + v79;
      if ( v121 + v79 != v121 )
      {
        while ( 1 )
        {
          v46 = v80 - 112;
          if ( !*(_BYTE *)(v80 - 16) )
            goto LABEL_122;
          sub_15DCED0(*(_QWORD *)(v80 - 56), v46 + 56);
          v81 = *(void **)(v80 - 48);
          if ( v81 != (void *)(v46 + 80) )
            free(v81);
          v82 = *(void **)(v46 + 24);
          if ( v82 == (void *)(v46 + 40) )
          {
LABEL_122:
            if ( v121 == v46 )
              goto LABEL_129;
          }
          else
          {
            free(v82);
            if ( v121 == v46 )
            {
LABEL_129:
              v79 = 112LL * *(_QWORD *)(v80 - 120);
              break;
            }
          }
          v80 -= 112;
        }
      }
      operator delete[]((void *)(v46 - 8), v79 + 8);
    }
  }
  else
  {
    v47 = v121 + 112LL * (v122 & 0x7FFFFFFF);
    if ( v47 != v121 )
    {
      do
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v46 + 96) )
          {
            *(_BYTE *)(v46 + 96) = 0;
            sub_15DCED0(*(_QWORD *)(v46 + 56), v46 + 56);
            v48 = *(void **)(v46 + 64);
            if ( v48 != (void *)(v46 + 80) )
              free(v48);
            v49 = *(void **)(v46 + 24);
            if ( v49 != (void *)(v46 + 40) )
              break;
          }
          v46 += 112;
          if ( v47 == v46 )
            goto LABEL_43;
        }
        free(v49);
        v46 += 112;
      }
      while ( v47 != v46 );
    }
  }
LABEL_43:
  v121 = 0;
  v122 = 0;
  if ( !(_DWORD)v124 )
    goto LABEL_86;
  v50 = v123;
  v51 = 0;
  v93 = 16 * (9LL * (unsigned int)(v124 - 1) + 9);
  do
  {
    while ( 1 )
    {
      v52 = &v50[v51];
      v53 = *(_DWORD *)&v50[v51];
      if ( v53 != 3 )
      {
        if ( v53 != 5 || !*((_DWORD *)v52 + 23) )
          goto LABEL_47;
        free(*((void **)v52 + 10));
        goto LABEL_81;
      }
      v54 = *((_DWORD *)v52 + 18);
      for ( i = 0; i < v54; ++i )
      {
        v56 = *((_QWORD *)v52 + 12) + 32LL * i;
        v57 = *(void ***)(v56 + 24);
        *(_QWORD *)(v56 + 24) = 0;
        if ( v57 )
        {
          if ( *v57 != v57 + 2 )
            free(*v57);
          operator delete(v57, 0x70u);
          v54 = *((_DWORD *)v52 + 18);
        }
      }
      if ( (v52[57] & 1) != 0 )
      {
        v58 = *((_QWORD *)v52 + 12);
        if ( v58 )
        {
          v59 = 32LL * *(_QWORD *)(v58 - 8);
          v60 = v58 + v59;
          if ( v58 != v58 + v59 )
          {
            while ( 1 )
            {
              v61 = *(void ***)(v60 - 8);
              if ( v61 )
              {
                if ( *v61 != v61 + 2 )
                  free(*v61);
                operator delete(v61, 0x70u);
                v58 = *((_QWORD *)v52 + 12);
              }
              if ( v60 - 32 == v58 )
                break;
              v60 -= 32;
            }
            v59 = 32LL * *(_QWORD *)(v60 - 40);
          }
          operator delete[]((void *)(v58 - 8), v59 + 8);
        }
        v52[57] &= ~1u;
      }
      v62 = *((void **)v52 + 14);
      *((_DWORD *)v52 + 18) = 0;
      if ( v62 )
      {
        sub_15D7C30((__int64)v62);
        operator delete(v62, 0x520u);
      }
      v63 = *((_QWORD *)v52 + 13);
      if ( v63 )
      {
        if ( *(_DWORD *)(v63 + 140) )
          free(*(void **)(v63 + 128));
        sub_15DCED0(*(_QWORD *)(v63 + 72), v63 + 72);
        v64 = *(void **)(v63 + 80);
        if ( v64 != (void *)(v63 + 96) )
          free(v64);
        v65 = *(void **)(v63 + 40);
        if ( v65 != (void *)(v63 + 56) )
          free(v65);
        operator delete((void *)v63, 0x128u);
      }
      v66 = v52[56] >> 4;
      if ( v66 != 2 )
        break;
LABEL_108:
      v77 = *((void **)v52 + 15);
      if ( !v77 )
        goto LABEL_81;
      operator delete[](v77);
      v50 = v123;
LABEL_47:
      v51 += 144;
      if ( v93 == v51 )
        goto LABEL_82;
    }
    if ( v66 == 11 )
    {
      v78 = *((void ***)v52 + 15);
      if ( v78 )
      {
        if ( *v78 != v78 + 2 )
          free(*v78);
        operator delete(v78, 0x70u);
        v50 = v123;
        goto LABEL_47;
      }
    }
    else if ( !v66 && *((_DWORD *)v52 + 19) )
    {
      goto LABEL_108;
    }
LABEL_81:
    v50 = v123;
    v51 += 144;
  }
  while ( v93 != v51 );
LABEL_82:
  v67 = &v50[144 * (unsigned int)v124];
  while ( v67 != v50 )
  {
    while ( 1 )
    {
      v67 -= 144;
      v68 = *((_BYTE **)v67 + 3);
      if ( v68 == v67 + 40 )
        break;
      free(v68);
      if ( v67 == v50 )
        goto LABEL_86;
    }
  }
LABEL_86:
  LODWORD(v124) = 0;
  LODWORD(v129) = 0;
  sub_15DCED0(v131, (__int64)&v131);
  LODWORD(v133) = 0;
  v127 = 0;
  v135 = 0;
  v126 &= 0xFC3Fu;
  v140 = 0;
  v141 = 0;
  sub_15DCED0(v131, (__int64)&v131);
  if ( v132 != v134 )
    free(v132);
  if ( v128 != v130 )
    free(v128);
  v69 = v123;
  v70 = &v123[144 * (unsigned int)v124];
  if ( v123 != (_BYTE *)v70 )
  {
    do
    {
      while ( 1 )
      {
        v70 -= 18;
        v71 = (_QWORD *)v70[3];
        if ( v71 == v70 + 5 )
          break;
        free(v71);
        if ( v69 == v70 )
          goto LABEL_93;
      }
    }
    while ( v69 != v70 );
LABEL_93:
    v70 = v123;
  }
  if ( v70 != (_QWORD *)v125 )
    free(v70);
  v72 = v121;
  v120 = 0;
  if ( v122 >= 0 )
  {
    v73 = v121 + 112LL * (v122 & 0x7FFFFFFF);
    if ( v73 != v121 )
    {
      do
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v72 + 96) )
          {
            *(_BYTE *)(v72 + 96) = 0;
            sub_15DCED0(*(_QWORD *)(v72 + 56), v72 + 56);
            v74 = *(void **)(v72 + 64);
            if ( v74 != (void *)(v72 + 80) )
              free(v74);
            v75 = *(void **)(v72 + 24);
            if ( v75 != (void *)(v72 + 40) )
              break;
          }
          v72 += 112;
          if ( v73 == v72 )
            goto LABEL_105;
        }
        free(v75);
        v72 += 112;
      }
      while ( v73 != v72 );
    }
LABEL_105:
    if ( !HIDWORD(v114[0]) )
      return v19;
LABEL_143:
    free(v113[1]);
    return v19;
  }
  if ( !v121 )
    goto LABEL_105;
  v83 = 112LL * *(_QWORD *)(v121 - 8);
  v84 = v121 + v83;
  if ( v121 + v83 != v121 )
  {
    while ( 1 )
    {
      v72 = v84 - 112;
      if ( !*(_BYTE *)(v84 - 16) )
        goto LABEL_134;
      sub_15DCED0(*(_QWORD *)(v84 - 56), v72 + 56);
      v85 = *(void **)(v84 - 48);
      if ( v85 != (void *)(v72 + 80) )
        free(v85);
      v86 = *(void **)(v72 + 24);
      if ( v86 == (void *)(v72 + 40) )
      {
LABEL_134:
        if ( v121 == v72 )
          goto LABEL_141;
      }
      else
      {
        free(v86);
        if ( v121 == v72 )
        {
LABEL_141:
          v83 = 112LL * *(_QWORD *)(v84 - 120);
          break;
        }
      }
      v84 -= 112;
    }
  }
  operator delete[]((void *)(v72 - 8), v83 + 8);
  if ( HIDWORD(v114[0]) )
    goto LABEL_143;
  return v19;
}
