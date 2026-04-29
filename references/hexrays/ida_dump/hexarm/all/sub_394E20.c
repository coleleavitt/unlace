// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_394E20(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r12d
  __int64 v6; // rbp
  __int64 module_data; // r13
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 *v14; // r15
  __int64 *v15; // rbx
  __int64 fchunk; // rax
  int v17; // eax
  char v18; // bp
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rax
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 i; // r12
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 j; // r12
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 *v34; // rbp
  __int64 *v35; // r12
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  unsigned __int64 **k; // rax
  __int64 *v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rcx
  unsigned __int64 **m; // rdx
  __int64 *v50; // rax
  __int64 v51; // rdi
  __int64 *v52; // rbx
  __int64 v53; // rsi
  __int64 ii; // rdx
  __int64 *v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 jj; // rcx
  __int64 *v60; // rdx
  __int64 v61; // rdi
  unsigned int v62; // eax
  size_t v63; // rbp
  int v64; // ebp
  __int64 v65; // rcx
  __int64 v66; // rdx
  const char *v67; // r8
  unsigned int v68; // eax
  _QWORD *v69; // rbp
  __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 *v73; // rbp
  __int64 v74; // rcx
  unsigned __int64 v75; // rsi
  __int64 kk; // rax
  __int64 *v77; // rdx
  __int64 v78; // rdi
  __int64 v79; // rdi
  __int64 v80; // rcx
  unsigned __int64 v81; // rsi
  __int64 mm; // rdx
  __int64 *v83; // rax
  __int64 v84; // rdi
  __int64 v85; // r9
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 *v90; // r15
  __int64 v91; // rsi
  __int64 *v92; // rbx
  __int64 *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  unsigned __int64 **v96; // [rsp+0h] [rbp-158h]
  __int64 v97; // [rsp+8h] [rbp-150h]
  __int64 v98; // [rsp+10h] [rbp-148h]
  unsigned __int64 v99; // [rsp+18h] [rbp-140h]
  __int64 v100; // [rsp+20h] [rbp-138h]
  __int64 v101; // [rsp+20h] [rbp-138h]
  __int64 v102; // [rsp+20h] [rbp-138h]
  __int64 v103; // [rsp+20h] [rbp-138h]
  __int64 v104; // [rsp+30h] [rbp-128h]
  __int64 (__fastcall **v105)(); // [rsp+38h] [rbp-120h] BYREF
  unsigned __int64 *v106; // [rsp+40h] [rbp-118h] BYREF
  __int64 v107; // [rsp+48h] [rbp-110h]
  __int64 v108; // [rsp+50h] [rbp-108h]
  __int64 *v109; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v110; // [rsp+68h] [rbp-F0h]
  __int64 v111; // [rsp+78h] [rbp-E0h]
  __int64 v112; // [rsp+80h] [rbp-D8h]
  __int64 v113; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v114; // [rsp+98h] [rbp-C0h]
  void *src; // [rsp+A0h] [rbp-B8h]
  size_t n[3]; // [rsp+A8h] [rbp-B0h]
  _BYTE v117[24]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v118; // [rsp+D8h] [rbp-80h]
  __int128 v119; // [rsp+E0h] [rbp-78h]
  _QWORD v120[2]; // [rsp+F0h] [rbp-68h] BYREF
  _QWORD v121[11]; // [rsp+100h] [rbp-58h] BYREF

  v5 = a2;
  v6 = a3;
  v97 = a4;
  v121[3] = __readfsqword(0x28u);
  if ( a3 )
    module_data = *(_QWORD *)(a3 + 128);
  else
    module_data = get_module_data((unsigned int)dword_4EB8F8);
  if ( *(_QWORD *)(module_data + 936) > 1u )
  {
    if ( (*(_BYTE *)(module_data + 606) & 0x40) == 0 )
    {
      v13 = 0;
      sub_2B5230((__int64)"Cannot continue after an internal error, sorry");
      return v13;
    }
    v8 = *(_QWORD *)(module_data + 928);
    if ( v8 )
    {
      *(_QWORD *)(module_data + 936) = 0;
      qfree(v8);
      *(_QWORD *)(module_data + 928) = 0;
      *(_QWORD *)(module_data + 944) = 0;
    }
  }
  v96 = &v106;
  sub_390EF0((__int64)&v106, a1);
  v13 = (__int64)v106;
  if ( *(_QWORD *)(a1 + 32) != -1 || v106 )
  {
    v109 = nullptr;
    v111 = 0;
    v112 = 0xFFFFFFFFLL;
    v110 = 0;
    get_func_ranges(&v109, v106, v9, v10, v11, v12);
    v14 = v109;
    v15 = &v109[2 * v110];
    if ( v109 != v15 )
    {
      do
      {
        fchunk = get_fchunk(*v14);
        lock_func_range(fchunk, 1);
        v14 += 2;
      }
      while ( v15 != v14 );
    }
    LOBYTE(v98) = 0;
    if ( (a2 & 8) != 0 )
      goto LABEL_101;
    if ( v6 )
    {
LABEL_13:
      v17 = sub_332BA0((__int64)&v106, *(_QWORD *)(v6 + 24) + 8LL);
      v104 = 0;
      LOBYTE(v99) = v17 != 0;
      if ( !(v17 | v5 & 0xC) )
      {
        LODWORD(v96) = 1;
        v13 = v6;
        v18 = 0;
        LOBYTE(v99) = v5 & 1;
LABEL_15:
        v118 = -1;
        v119 = 0u;
        memset(v117, 0, sizeof(v117));
        if ( (unsigned int)sub_393D00((__m128i *)v117, module_data, v13, a1, 0, 1) == 1 )
        {
          if ( (_BYTE)v99 )
          {
            v62 = (unsigned int)v96 | 2;
            if ( (_BYTE)v98 )
            {
              if ( (v5 & 0x80) == 0 )
                v62 = (unsigned int)v96 | 6;
              LODWORD(v96) = v62;
            }
            else
            {
              LODWORD(v96) = (unsigned int)v96 | 2;
            }
          }
          callui(149, *(_QWORD *)(v13 + 8), v117, (unsigned int)v96, &callui, v19, v96, v97, v98, v99);
        }
        sub_38B9D0(v13, 0);
        if ( v97 && v18 )
        {
          v121[1] = v97;
          v21 = *(_QWORD *)(v13 + 8);
          v121[0] = 0;
          v120[1] = v21;
          v120[0] = 0;
          callui(176, v120, v121, 1, &callui, v20, v96, v97, v98, v99);
        }
        if ( *((_QWORD *)&v119 + 1) )
          qfree(*((_QWORD *)&v119 + 1));
LABEL_23:
        if ( v104 )
        {
          v22 = (*(_DWORD *)(v104 + 104))-- == 1;
          if ( v22 )
          {
            sub_258D30((__int64 *)v104);
            v23 = *(_QWORD *)(v104 + 184);
            if ( v23 )
            {
              v24 = *(_QWORD *)(v104 + 192);
              if ( v24 )
              {
                for ( i = 0; i != v24; ++i )
                {
                  v26 = (__int64 *)(v23 + 24 * i);
                  v27 = *v26;
                  if ( *v26 )
                  {
                    v26[1] = 0;
                    qfree(v27);
                    v23 = *(_QWORD *)(v104 + 184);
                  }
                }
              }
              *(_QWORD *)(v104 + 192) = 0;
              qfree(v23);
            }
            v28 = *(_QWORD *)(v104 + 160);
            if ( v28 )
            {
              *(_QWORD *)(v104 + 168) = 0;
              qfree(v28);
            }
            v29 = *(_QWORD *)(v104 + 128);
            if ( v29 )
            {
              v30 = *(_QWORD *)(v104 + 136);
              if ( v30 )
              {
                for ( j = 0; j != v30; ++j )
                {
                  v32 = (__int64 *)(v29 + 32 * j);
                  v33 = *v32;
                  if ( *v32 )
                  {
                    v32[1] = 0;
                    qfree(v33);
                    v29 = *(_QWORD *)(v104 + 128);
                  }
                }
              }
              *(_QWORD *)(v104 + 136) = 0;
              qfree(v29);
            }
            sub_255410(v104 + 16);
            j__qfree(v104);
          }
        }
        v34 = v109;
        v35 = &v109[2 * v110];
        if ( v109 != v35 )
        {
          do
          {
            v36 = *v34;
            v34 += 2;
            v37 = get_fchunk(v36);
            lock_func_range(v37, 0);
          }
          while ( v35 != v34 );
          v35 = v109;
        }
        if ( v35 )
        {
          *(_QWORD *)&v110 = 0;
          qfree(v35);
        }
        goto LABEL_47;
      }
      if ( (v5 & 2) == 0 )
        v5 |= 1u;
LABEL_52:
      if ( (v5 & 4) != 0 && v106 )
        sub_1477B0(*(_QWORD *)(module_data + 112), *v106, 0);
      v113 = 0;
      *(_OWORD *)n = 0;
      v114 = -1;
      src = nullptr;
      v39 = *(_QWORD *)(module_data + 112);
      sub_14C800(v117, v39, &v106, &v113, ((v5 & 0x100) != 0) + 8);
      v13 = *(_QWORD *)v117;
      v104 = *(_QWORD *)v117;
      if ( !*(_QWORD *)v117 )
        goto LABEL_106;
      if ( !*(_DWORD *)(*(_QWORD *)v117 + 104LL) )
      {
        sub_258D30(*(__int64 **)v117);
        v43 = *(_QWORD *)(v13 + 184);
        if ( v43 )
        {
          v39 = *(_QWORD *)(v13 + 192);
          if ( v39 )
          {
            for ( k = nullptr; k != (unsigned __int64 **)v39; k = (unsigned __int64 **)((char *)k + 1) )
            {
              v45 = (__int64 *)(v43 + 24LL * (_QWORD)k);
              v46 = *v45;
              if ( *v45 )
              {
                v45[1] = 0;
                v96 = k;
                qfree(v46);
                v43 = *(_QWORD *)(v13 + 184);
                k = v96;
              }
            }
          }
          *(_QWORD *)(v13 + 192) = 0;
          qfree(v43);
        }
        v47 = *(_QWORD *)(v13 + 160);
        if ( v47 )
        {
          *(_QWORD *)(v13 + 168) = 0;
          qfree(v47);
        }
        v48 = *(_QWORD *)(v13 + 128);
        if ( v48 )
        {
          v39 = *(_QWORD *)(v13 + 136);
          if ( v39 )
          {
            for ( m = nullptr; m != (unsigned __int64 **)v39; m = (unsigned __int64 **)((char *)m + 1) )
            {
              v50 = (__int64 *)(v48 + 32LL * (_QWORD)m);
              v51 = *v50;
              if ( *v50 )
              {
                v50[1] = 0;
                v96 = m;
                qfree(v51);
                v48 = *(_QWORD *)(v13 + 128);
                m = v96;
              }
            }
          }
          *(_QWORD *)(v13 + 136) = 0;
          qfree(v48);
        }
        sub_255410(v13 + 16);
        j__qfree(v13);
        v13 = v104;
        if ( !v104 )
        {
LABEL_106:
          v63 = n[0];
          *(_QWORD *)v117 = off_4D6390;
          v119 = 0;
          v105 = off_4DE2F8;
          v118 = 0;
          *(_DWORD *)&v117[8] = v113;
          *(_QWORD *)&v117[16] = v114;
          if ( n[0] )
          {
            v118 = qalloc_or_throw(n[0]);
            *((_QWORD *)&v119 + 1) = v63;
            memcpy((void *)v118, src, v63);
            *(_QWORD *)&v119 = v63;
          }
          sub_33C6D0(0.0, (__int64)&v105, module_data, (__int64)v117);
          *(_QWORD *)v117 = off_4D6390;
          if ( v118 )
          {
            *(_QWORD *)&v119 = 0;
            qfree(v118);
          }
          std::exception::~exception((std::exception *)v117);
          if ( src )
          {
            n[0] = 0;
            qfree(src);
          }
          v13 = 0;
          goto LABEL_23;
        }
      }
      if ( src )
      {
        n[0] = 0;
        qfree(src);
        v13 = v104;
        LODWORD(v96) = (unsigned __int8)v99 ^ 1;
        if ( v6 )
        {
          if ( (v5 & 9) != 1 )
          {
            LOBYTE(v99) = 0;
            if ( v104 )
              goto LABEL_78;
LABEL_153:
            v13 = v6;
            v18 = 0;
            goto LABEL_15;
          }
          LOBYTE(v99) = 1;
          if ( !v104 )
            goto LABEL_153;
LABEL_78:
          ++*(_DWORD *)(v13 + 104);
          *(_QWORD *)v117 = v13;
          sub_3908A0(v6, (__int64 *)v117, 0);
          v52 = *(__int64 **)v117;
          if ( *(_QWORD *)v117 )
          {
            v22 = (*(_DWORD *)(*(_QWORD *)v117 + 104LL))-- == 1;
            if ( v22 )
            {
              sub_258D30(v52);
              v53 = v52[23];
              if ( v53 )
              {
                v98 = v52[24];
                if ( v98 )
                {
                  for ( ii = 0; ii != v98; ++ii )
                  {
                    v55 = (__int64 *)(v53 + 24 * ii);
                    v56 = *v55;
                    if ( *v55 )
                    {
                      v55[1] = 0;
                      v100 = ii;
                      qfree(v56);
                      v53 = v52[23];
                      ii = v100;
                    }
                  }
                }
                v52[24] = 0;
                qfree(v53);
              }
              v57 = v52[20];
              if ( v57 )
              {
                v52[21] = 0;
                qfree(v57);
              }
              v58 = v52[16];
              if ( v58 )
              {
                v98 = v52[17];
                if ( v98 )
                {
                  for ( jj = 0; jj != v98; ++jj )
                  {
                    v60 = (__int64 *)(v58 + 32 * jj);
                    v61 = *v60;
                    if ( *v60 )
                    {
                      v60[1] = 0;
                      v101 = jj;
                      qfree(v61);
                      v58 = v52[16];
                      jj = v101;
                    }
                  }
                }
                v52[17] = 0;
                qfree(v58);
              }
              sub_255410((__int64)(v52 + 2));
              j__qfree(v52);
            }
          }
          LOBYTE(v98) = 1;
          v13 = v6;
          v18 = 0;
LABEL_98:
          *(_DWORD *)v13 |= 2u;
          goto LABEL_15;
        }
        if ( !v104 )
        {
          LOBYTE(v99) = 0;
          v18 = 0;
          goto LABEL_15;
        }
      }
      else
      {
        LODWORD(v96) = (unsigned __int8)v99 ^ 1;
        if ( v6 )
        {
          LOBYTE(v99) = (v5 & 9) == 1;
          goto LABEL_78;
        }
      }
      memset(v117, 0, sizeof(v117));
      v64 = sub_3878A0(*(_QWORD *)(*(_QWORD *)(v13 + 216) + 1008LL), v39, v40, v41, v42);
      sub_390C80((__int64 *)v117, v64, "Pseudocode-");
      v13 = operator new(0xA8u);
      v65 = *(_QWORD *)&v117[8];
      v113 = v104;
      v66 = *(_QWORD *)(v104 + 216);
      if ( v104 )
      {
        ++*(_DWORD *)(v104 + 104);
        v67 = s1;
        if ( v65 )
          v67 = *(const char **)v117;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = v64;
        *(_OWORD *)(v13 + 8) = 0;
        *(__m128i *)(v13 + 24) = _mm_unpacklo_epi64(
                                   _mm_loadl_epi64((const __m128i *)(v104 + 8)),
                                   (__m128i)(unsigned __int64)v104);
        ++*(_DWORD *)(v104 + 104);
        v68 = *(_DWORD *)v13 & 0xFFFFFFFD;
      }
      else
      {
        if ( *(_QWORD *)&v117[8] )
        {
          *(_DWORD *)(v13 + 4) = v64;
          v67 = *(const char **)v117;
        }
        else
        {
          *(_DWORD *)(v13 + 4) = v64;
          v67 = s1;
        }
        *(_OWORD *)(v13 + 8) = 0;
        v68 = 0;
        *(_OWORD *)(v13 + 24) = 0;
      }
      *(_QWORD *)(v13 + 128) = v66;
      *(_QWORD *)(v13 + 52) = 0;
      *(_QWORD *)(v13 + 44) = 0xFFFFFFFFLL;
      *(_DWORD *)(v13 + 80) = 0;
      *(_DWORD *)(v13 + 104) = 0;
      *(_QWORD *)(v13 + 136) = 0;
      *(_QWORD *)(v13 + 160) = 0;
      *(_DWORD *)v13 = v68;
      *(_OWORD *)(v13 + 144) = 0;
      v69 = *(_QWORD **)(v66 + 1008);
      v70 = v69[6];
      v71 = v69[5];
      if ( v69[7] < (unsigned __int64)(v70 + 1) )
      {
        v99 = (unsigned __int64)v67;
        v86 = qvector_reserve(v69 + 5, v71, v70 + 1, 8);
        v69[5] = v86;
        v71 = v86;
        v67 = (const char *)v99;
        v70 = v69[6];
      }
      *(_QWORD *)(v71 + 8 * v70) = v13;
      ++v69[6];
      sub_394A90((_QWORD *)v13, (__int64)v67, v5, -1);
      v73 = (__int64 *)v113;
      if ( v113 )
      {
        v22 = (*(_DWORD *)(v113 + 104))-- == 1;
        if ( v22 )
        {
          sub_258D30(v73);
          v74 = v73[23];
          if ( v74 )
          {
            v75 = v73[24];
            if ( v75 )
            {
              for ( kk = 0; kk != v75; ++kk )
              {
                v77 = (__int64 *)(v74 + 24 * kk);
                v78 = *v77;
                if ( *v77 )
                {
                  v77[1] = 0;
                  v102 = kk;
                  v99 = v75;
                  qfree(v78);
                  kk = v102;
                  v74 = v73[23];
                }
              }
            }
            v73[24] = 0;
            qfree(v74);
          }
          v79 = v73[20];
          if ( v79 )
          {
            v73[21] = 0;
            qfree(v79);
          }
          v80 = v73[16];
          if ( v80 )
          {
            v81 = v73[17];
            if ( v81 )
            {
              for ( mm = 0; mm != v81; ++mm )
              {
                v83 = (__int64 *)(v80 + 32 * mm);
                v84 = *v83;
                if ( *v83 )
                {
                  v83[1] = 0;
                  v103 = mm;
                  v99 = v81;
                  qfree(v84);
                  mm = v103;
                  v80 = v73[16];
                }
              }
            }
            v73[17] = 0;
            qfree(v80);
          }
          sub_255410((__int64)(v73 + 2));
          j__qfree(v73);
        }
      }
      sub_38FA40(v13, 1, v72);
      if ( (v5 & 0x10) == 0 )
      {
        callui(
          174,
          *(_QWORD *)(v13 + 16),
          (*(_DWORD *)(*(_QWORD *)(v13 + 128) + 724LL) << 16) | 0x104u,
          0,
          &callui,
          v85,
          v96,
          v97,
          (_BYTE)v98,
          v99);
        sub_33E5A0(*(_QWORD *)(v13 + 128), 0x64u, v13);
      }
      v18 = *(_BYTE *)(*(_QWORD *)(v13 + 128) + 713LL);
      LODWORD(v96) = ((v5 & 1) << 16) | (unsigned int)v96;
      if ( *(_QWORD *)v117 )
      {
        *(_QWORD *)&v117[8] = 0;
        qfree(*(_QWORD *)v117);
      }
      LOBYTE(v99) = 0;
      goto LABEL_98;
    }
    LOBYTE(v98) = 0;
    v6 = sub_38A180(module_data);
    if ( v6 )
      goto LABEL_100;
    v87 = *(_QWORD *)(module_data + 888);
    if ( v87 )
    {
      v88 = *(_QWORD *)(v87 + 8);
      v89 = *(_QWORD *)(module_data + 1008);
      v90 = *(__int64 **)(v89 + 40);
      v91 = *(_QWORD *)(v89 + 48);
      v92 = &v90[v91];
      if ( v88 )
      {
        v93 = *(__int64 **)(v89 + 40);
        if ( v91 * 8 )
        {
          while ( 1 )
          {
            v6 = *v93;
            if ( *v93 )
            {
              if ( v88 == *(_QWORD *)(v6 + 8) || v88 == *(_QWORD *)(v6 + 16) )
                goto LABEL_169;
            }
            if ( v92 == ++v93 )
              goto LABEL_163;
          }
        }
      }
      else
      {
LABEL_163:
        v99 = *(_QWORD *)(a1 + 16);
        if ( v90 != v92 )
        {
          while ( 1 )
          {
            v6 = *v90;
            if ( *v90 )
            {
              LOBYTE(v98) = sub_38A0C0(*v90, v99);
              if ( (_BYTE)v98 )
                break;
            }
            if ( v92 == ++v90 )
              goto LABEL_167;
          }
LABEL_100:
          if ( (*(_BYTE *)v6 & 1) != 0 )
            goto LABEL_13;
LABEL_101:
          v6 = 0;
          LOBYTE(v99) = 1;
          goto LABEL_52;
        }
      }
LABEL_167:
      v94 = *(_QWORD *)(module_data + 1008);
      v95 = *(_QWORD *)(v94 + 48);
      if ( v95 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v94 + 40) + 8 * v95 - 8);
        if ( v6 )
        {
LABEL_169:
          LOBYTE(v98) = 1;
          goto LABEL_100;
        }
      }
    }
    LOBYTE(v98) = 1;
    goto LABEL_101;
  }
LABEL_47:
  if ( v107 )
  {
    v108 = 0;
    qfree(v107);
  }
  return v13;
}
