// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_3948E0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbp
  __int64 module_data; // r13
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rbx
  int v13; // eax
  char v14; // bp
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 i; // r12
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r13
  __int64 j; // r12
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // r12
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned __int64 **k; // rax
  __int64 *v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rcx
  unsigned __int64 **m; // rdx
  __int64 *v43; // rax
  __int64 v44; // rdi
  __int64 *v45; // rbx
  __int64 v46; // rsi
  __int64 ii; // rdx
  __int64 *v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 jj; // rcx
  __int64 *v53; // rdx
  __int64 v54; // rdi
  unsigned int v55; // eax
  size_t v56; // rbp
  int v57; // ebp
  __int64 v58; // rcx
  __int64 v59; // rdx
  const char *v60; // r8
  unsigned int v61; // eax
  _QWORD *v62; // rbp
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rdx
  __int64 *v66; // rbp
  __int64 v67; // rcx
  unsigned __int64 v68; // rsi
  __int64 kk; // rax
  __int64 *v70; // rdx
  __int64 v71; // rdi
  __int64 v72; // rdi
  __int64 v73; // rcx
  unsigned __int64 v74; // rsi
  __int64 mm; // rdx
  __int64 *v76; // rax
  __int64 v77; // rdi
  __int64 v78; // r9
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 *v83; // r15
  __int64 v84; // rsi
  __int64 *v85; // rbx
  __int64 *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  unsigned __int64 **v89; // [rsp+0h] [rbp-158h]
  __int64 v90; // [rsp+8h] [rbp-150h]
  __int64 v91; // [rsp+10h] [rbp-148h]
  unsigned __int64 v92; // [rsp+18h] [rbp-140h]
  __int64 v93; // [rsp+20h] [rbp-138h]
  __int64 v94; // [rsp+20h] [rbp-138h]
  __int64 v95; // [rsp+20h] [rbp-138h]
  __int64 v96; // [rsp+20h] [rbp-138h]
  __int64 v97; // [rsp+30h] [rbp-128h]
  __int64 (__fastcall **v98)(); // [rsp+38h] [rbp-120h] BYREF
  unsigned __int64 *v99; // [rsp+40h] [rbp-118h] BYREF
  __int64 v100; // [rsp+48h] [rbp-110h]
  __int64 v101; // [rsp+50h] [rbp-108h]
  __int64 v102; // [rsp+60h] [rbp-F8h]
  __int128 v103; // [rsp+68h] [rbp-F0h]
  __int64 v104; // [rsp+78h] [rbp-E0h]
  __int64 v105; // [rsp+80h] [rbp-D8h]
  __int64 v106; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v107; // [rsp+98h] [rbp-C0h]
  void *src; // [rsp+A0h] [rbp-B8h]
  size_t n[3]; // [rsp+A8h] [rbp-B0h]
  _BYTE v110[24]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v111; // [rsp+D8h] [rbp-80h]
  __int128 v112; // [rsp+E0h] [rbp-78h]
  _QWORD v113[2]; // [rsp+F0h] [rbp-68h] BYREF
  _QWORD v114[11]; // [rsp+100h] [rbp-58h] BYREF

  v6 = a3;
  v90 = a4;
  v114[3] = __readfsqword(0x28u);
  if ( a3 )
    module_data = *(_QWORD *)(a3 + 128);
  else
    module_data = get_module_data();
  if ( *(_QWORD *)(module_data + 936) > 1u )
  {
    if ( (*(_BYTE *)(module_data + 606) & 0x40) == 0 )
    {
      v9 = 0;
      sub_2B4E70((__int64)"Cannot continue after an internal error, sorry");
      return v9;
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
  v89 = &v99;
  sub_3909B0((__int64)&v99, a1);
  v9 = (__int64)v99;
  if ( *(_QWORD *)(a1 + 32) != -1 || v99 )
  {
    v10 = (__int64)v99;
    v102 = 0;
    v104 = 0;
    v105 = 0xFFFFFFFFLL;
    v103 = 0;
    get_func_ranges();
    v11 = v102;
    v12 = v102 + 16 * v103;
    if ( v102 != v12 )
    {
      do
      {
        get_fchunk();
        v10 = 1;
        lock_func_range();
        v11 += 16;
      }
      while ( v12 != v11 );
    }
    LOBYTE(v91) = 0;
    if ( (a2 & 8) != 0 )
      goto LABEL_101;
    if ( v6 )
    {
LABEL_13:
      v13 = sub_332860((__int64)&v99, *(_QWORD *)(v6 + 24) + 8LL);
      v97 = 0;
      LOBYTE(v92) = v13 != 0;
      if ( !(v13 | a2 & 0xC) )
      {
        LODWORD(v89) = 1;
        v9 = v6;
        v14 = 0;
        LOBYTE(v92) = a2 & 1;
LABEL_15:
        v111 = -1;
        v112 = 0u;
        memset(v110, 0, sizeof(v110));
        if ( (unsigned int)sub_3937C0((__m128i *)v110, module_data, v9, a1, 0, 1) == 1 )
        {
          if ( (_BYTE)v92 )
          {
            v55 = (unsigned int)v89 | 2;
            if ( (_BYTE)v91 )
            {
              if ( (a2 & 0x80) == 0 )
                v55 = (unsigned int)v89 | 6;
              LODWORD(v89) = v55;
            }
            else
            {
              LODWORD(v89) = (unsigned int)v89 | 2;
            }
          }
          callui(149, *(_QWORD *)(v9 + 8), v110, (unsigned int)v89, &callui, v15, v89, v90, v91, v92);
        }
        sub_38B490(v9, 0);
        if ( v90 && v14 )
        {
          v114[1] = v90;
          v17 = *(_QWORD *)(v9 + 8);
          v114[0] = 0;
          v113[1] = v17;
          v113[0] = 0;
          callui(176, v113, v114, 1, &callui, v16, v89, v90, v91, v92);
        }
        if ( *((_QWORD *)&v112 + 1) )
          qfree(*((__int64 *)&v112 + 1));
LABEL_23:
        if ( v97 )
        {
          v18 = (*(_DWORD *)(v97 + 104))-- == 1;
          if ( v18 )
          {
            sub_258970((__int64 *)v97);
            v19 = *(_QWORD *)(v97 + 184);
            if ( v19 )
            {
              v20 = *(_QWORD *)(v97 + 192);
              if ( v20 )
              {
                for ( i = 0; i != v20; ++i )
                {
                  v22 = (__int64 *)(v19 + 24 * i);
                  v23 = *v22;
                  if ( *v22 )
                  {
                    v22[1] = 0;
                    qfree(v23);
                    v19 = *(_QWORD *)(v97 + 184);
                  }
                }
              }
              *(_QWORD *)(v97 + 192) = 0;
              qfree(v19);
            }
            v24 = *(_QWORD *)(v97 + 160);
            if ( v24 )
            {
              *(_QWORD *)(v97 + 168) = 0;
              qfree(v24);
            }
            v25 = *(_QWORD *)(v97 + 128);
            if ( v25 )
            {
              v26 = *(_QWORD *)(v97 + 136);
              if ( v26 )
              {
                for ( j = 0; j != v26; ++j )
                {
                  v28 = (__int64 *)(v25 + 32 * j);
                  v29 = *v28;
                  if ( *v28 )
                  {
                    v28[1] = 0;
                    qfree(v29);
                    v25 = *(_QWORD *)(v97 + 128);
                  }
                }
              }
              *(_QWORD *)(v97 + 136) = 0;
              qfree(v25);
            }
            sub_255050(v97 + 16);
            j__qfree(v97);
          }
        }
        v30 = v102;
        v31 = v102 + 16 * v103;
        if ( v102 != v31 )
        {
          do
          {
            v30 += 16;
            get_fchunk();
            lock_func_range();
          }
          while ( v31 != v30 );
          v31 = v102;
        }
        if ( v31 )
        {
          *(_QWORD *)&v103 = 0;
          qfree(v31);
        }
        goto LABEL_47;
      }
      if ( (a2 & 2) == 0 )
        a2 |= 1u;
LABEL_52:
      if ( (a2 & 4) != 0 && v99 )
        sub_147D70(*(_QWORD *)(module_data + 112), *v99, 0);
      v106 = 0;
      *(_OWORD *)n = 0;
      v107 = -1;
      src = nullptr;
      v33 = *(_QWORD *)(module_data + 112);
      sub_14CDC0((__int64 *)v110, v33, &v99, &v106, ((a2 & 0x100) != 0) + 8);
      v9 = *(_QWORD *)v110;
      v97 = *(_QWORD *)v110;
      if ( !*(_QWORD *)v110 )
        goto LABEL_106;
      if ( !*(_DWORD *)(*(_QWORD *)v110 + 104LL) )
      {
        sub_258970(*(__int64 **)v110);
        v36 = *(_QWORD *)(v9 + 184);
        if ( v36 )
        {
          v33 = *(_QWORD *)(v9 + 192);
          if ( v33 )
          {
            for ( k = nullptr; k != (unsigned __int64 **)v33; k = (unsigned __int64 **)((char *)k + 1) )
            {
              v38 = (__int64 *)(v36 + 24LL * (_QWORD)k);
              v39 = *v38;
              if ( *v38 )
              {
                v38[1] = 0;
                v89 = k;
                qfree(v39);
                v36 = *(_QWORD *)(v9 + 184);
                k = v89;
              }
            }
          }
          *(_QWORD *)(v9 + 192) = 0;
          qfree(v36);
        }
        v40 = *(_QWORD *)(v9 + 160);
        if ( v40 )
        {
          *(_QWORD *)(v9 + 168) = 0;
          qfree(v40);
        }
        v41 = *(_QWORD *)(v9 + 128);
        if ( v41 )
        {
          v33 = *(_QWORD *)(v9 + 136);
          if ( v33 )
          {
            for ( m = nullptr; m != (unsigned __int64 **)v33; m = (unsigned __int64 **)((char *)m + 1) )
            {
              v43 = (__int64 *)(v41 + 32LL * (_QWORD)m);
              v44 = *v43;
              if ( *v43 )
              {
                v43[1] = 0;
                v89 = m;
                qfree(v44);
                v41 = *(_QWORD *)(v9 + 128);
                m = v89;
              }
            }
          }
          *(_QWORD *)(v9 + 136) = 0;
          qfree(v41);
        }
        sub_255050(v9 + 16);
        j__qfree(v9);
        v9 = v97;
        if ( !v97 )
        {
LABEL_106:
          v56 = n[0];
          *(_QWORD *)v110 = off_4DBCD0;
          v112 = 0;
          v98 = off_4E3C38;
          v111 = 0;
          *(_DWORD *)&v110[8] = v106;
          *(_QWORD *)&v110[16] = v107;
          if ( n[0] )
          {
            v111 = qalloc_or_throw(n[0], v33, v34, v35);
            *((_QWORD *)&v112 + 1) = v56;
            memcpy((void *)v111, src, v56);
            *(_QWORD *)&v112 = v56;
          }
          sub_33C260(0.0, (__int64)&v98, module_data, (__int64)v110);
          *(_QWORD *)v110 = off_4DBCD0;
          if ( v111 )
          {
            *(_QWORD *)&v112 = 0;
            qfree(v111);
          }
          std::exception::~exception((std::exception *)v110);
          if ( src )
          {
            n[0] = 0;
            qfree((__int64)src);
          }
          v9 = 0;
          goto LABEL_23;
        }
      }
      if ( src )
      {
        n[0] = 0;
        qfree((__int64)src);
        v9 = v97;
        LODWORD(v89) = (unsigned __int8)v92 ^ 1;
        if ( v6 )
        {
          if ( (a2 & 9) != 1 )
          {
            LOBYTE(v92) = 0;
            if ( v97 )
              goto LABEL_78;
LABEL_153:
            v9 = v6;
            v14 = 0;
            goto LABEL_15;
          }
          LOBYTE(v92) = 1;
          if ( !v97 )
            goto LABEL_153;
LABEL_78:
          ++*(_DWORD *)(v9 + 104);
          *(_QWORD *)v110 = v9;
          sub_390360(v6, (__int64 *)v110, 0);
          v45 = *(__int64 **)v110;
          if ( *(_QWORD *)v110 )
          {
            v18 = (*(_DWORD *)(*(_QWORD *)v110 + 104LL))-- == 1;
            if ( v18 )
            {
              sub_258970(v45);
              v46 = v45[23];
              if ( v46 )
              {
                v91 = v45[24];
                if ( v91 )
                {
                  for ( ii = 0; ii != v91; ++ii )
                  {
                    v48 = (__int64 *)(v46 + 24 * ii);
                    v49 = *v48;
                    if ( *v48 )
                    {
                      v48[1] = 0;
                      v93 = ii;
                      qfree(v49);
                      v46 = v45[23];
                      ii = v93;
                    }
                  }
                }
                v45[24] = 0;
                qfree(v46);
              }
              v50 = v45[20];
              if ( v50 )
              {
                v45[21] = 0;
                qfree(v50);
              }
              v51 = v45[16];
              if ( v51 )
              {
                v91 = v45[17];
                if ( v91 )
                {
                  for ( jj = 0; jj != v91; ++jj )
                  {
                    v53 = (__int64 *)(v51 + 32 * jj);
                    v54 = *v53;
                    if ( *v53 )
                    {
                      v53[1] = 0;
                      v94 = jj;
                      qfree(v54);
                      v51 = v45[16];
                      jj = v94;
                    }
                  }
                }
                v45[17] = 0;
                qfree(v51);
              }
              sub_255050((__int64)(v45 + 2));
              j__qfree((__int64)v45);
            }
          }
          LOBYTE(v91) = 1;
          v9 = v6;
          v14 = 0;
LABEL_98:
          *(_DWORD *)v9 |= 2u;
          goto LABEL_15;
        }
        if ( !v97 )
        {
          LOBYTE(v92) = 0;
          v14 = 0;
          goto LABEL_15;
        }
      }
      else
      {
        LODWORD(v89) = (unsigned __int8)v92 ^ 1;
        if ( v6 )
        {
          LOBYTE(v92) = (a2 & 9) == 1;
          goto LABEL_78;
        }
      }
      memset(v110, 0, sizeof(v110));
      v57 = sub_387360(*(_QWORD *)(*(_QWORD *)(v9 + 216) + 1008LL));
      sub_390740((__int64 *)v110, v57, "Pseudocode-");
      v9 = operator new(0xA8u);
      v58 = *(_QWORD *)&v110[8];
      v106 = v97;
      v59 = *(_QWORD *)(v97 + 216);
      if ( v97 )
      {
        ++*(_DWORD *)(v97 + 104);
        v60 = s1;
        if ( v58 )
          v60 = *(const char **)v110;
        *(_DWORD *)v9 = 0;
        *(_DWORD *)(v9 + 4) = v57;
        *(_OWORD *)(v9 + 8) = 0;
        *(__m128i *)(v9 + 24) = _mm_unpacklo_epi64(
                                  _mm_loadl_epi64((const __m128i *)(v97 + 8)),
                                  (__m128i)(unsigned __int64)v97);
        ++*(_DWORD *)(v97 + 104);
        v61 = *(_DWORD *)v9 & 0xFFFFFFFD;
      }
      else
      {
        if ( *(_QWORD *)&v110[8] )
        {
          *(_DWORD *)(v9 + 4) = v57;
          v60 = *(const char **)v110;
        }
        else
        {
          *(_DWORD *)(v9 + 4) = v57;
          v60 = s1;
        }
        *(_OWORD *)(v9 + 8) = 0;
        v61 = 0;
        *(_OWORD *)(v9 + 24) = 0;
      }
      *(_QWORD *)(v9 + 128) = v59;
      *(_QWORD *)(v9 + 52) = 0;
      *(_QWORD *)(v9 + 44) = 0xFFFFFFFFLL;
      *(_DWORD *)(v9 + 80) = 0;
      *(_DWORD *)(v9 + 104) = 0;
      *(_QWORD *)(v9 + 136) = 0;
      *(_QWORD *)(v9 + 160) = 0;
      *(_DWORD *)v9 = v61;
      *(_OWORD *)(v9 + 144) = 0;
      v62 = *(_QWORD **)(v59 + 1008);
      v63 = v62[6];
      v64 = v62[5];
      if ( v62[7] < (unsigned __int64)(v63 + 1) )
      {
        v92 = (unsigned __int64)v60;
        v79 = qvector_reserve((__int64)(v62 + 5), v64, v63 + 1, 8);
        v62[5] = v79;
        v64 = v79;
        v60 = (const char *)v92;
        v63 = v62[6];
      }
      *(_QWORD *)(v64 + 8 * v63) = v9;
      ++v62[6];
      sub_394550((_QWORD *)v9, (__int64)v60, a2, -1);
      v66 = (__int64 *)v106;
      if ( v106 )
      {
        v18 = (*(_DWORD *)(v106 + 104))-- == 1;
        if ( v18 )
        {
          sub_258970(v66);
          v67 = v66[23];
          if ( v67 )
          {
            v68 = v66[24];
            if ( v68 )
            {
              for ( kk = 0; kk != v68; ++kk )
              {
                v70 = (__int64 *)(v67 + 24 * kk);
                v71 = *v70;
                if ( *v70 )
                {
                  v70[1] = 0;
                  v95 = kk;
                  v92 = v68;
                  qfree(v71);
                  kk = v95;
                  v67 = v66[23];
                }
              }
            }
            v66[24] = 0;
            qfree(v67);
          }
          v72 = v66[20];
          if ( v72 )
          {
            v66[21] = 0;
            qfree(v72);
          }
          v73 = v66[16];
          if ( v73 )
          {
            v74 = v66[17];
            if ( v74 )
            {
              for ( mm = 0; mm != v74; ++mm )
              {
                v76 = (__int64 *)(v73 + 32 * mm);
                v77 = *v76;
                if ( *v76 )
                {
                  v76[1] = 0;
                  v96 = mm;
                  v92 = v74;
                  qfree(v77);
                  mm = v96;
                  v73 = v66[16];
                }
              }
            }
            v66[17] = 0;
            qfree(v73);
          }
          sub_255050((__int64)(v66 + 2));
          j__qfree((__int64)v66);
        }
      }
      sub_38F500(v9, 1, v65);
      if ( (a2 & 0x10) == 0 )
      {
        callui(
          174,
          *(_QWORD *)(v9 + 16),
          (*(_DWORD *)(*(_QWORD *)(v9 + 128) + 724LL) << 16) | 0x104u,
          0,
          &callui,
          v78,
          v89,
          v90,
          (_BYTE)v91,
          v92);
        sub_33E140(*(_QWORD *)(v9 + 128), 0x64u, v9);
      }
      v14 = *(_BYTE *)(*(_QWORD *)(v9 + 128) + 713LL);
      LODWORD(v89) = ((a2 & 1) << 16) | (unsigned int)v89;
      if ( *(_QWORD *)v110 )
      {
        *(_QWORD *)&v110[8] = 0;
        qfree(*(__int64 *)v110);
      }
      LOBYTE(v92) = 0;
      goto LABEL_98;
    }
    LOBYTE(v91) = 0;
    v6 = sub_389C40(module_data, v10);
    if ( v6 )
      goto LABEL_100;
    v80 = *(_QWORD *)(module_data + 888);
    if ( v80 )
    {
      v81 = *(_QWORD *)(v80 + 8);
      v82 = *(_QWORD *)(module_data + 1008);
      v83 = *(__int64 **)(v82 + 40);
      v84 = *(_QWORD *)(v82 + 48);
      v85 = &v83[v84];
      if ( v81 )
      {
        v86 = *(__int64 **)(v82 + 40);
        if ( v84 * 8 )
        {
          while ( 1 )
          {
            v6 = *v86;
            if ( *v86 )
            {
              if ( v81 == *(_QWORD *)(v6 + 8) || v81 == *(_QWORD *)(v6 + 16) )
                goto LABEL_169;
            }
            if ( v85 == ++v86 )
              goto LABEL_163;
          }
        }
      }
      else
      {
LABEL_163:
        v92 = *(_QWORD *)(a1 + 16);
        if ( v83 != v85 )
        {
          while ( 1 )
          {
            v6 = *v83;
            if ( *v83 )
            {
              LOBYTE(v91) = sub_389B80(*v83, v92);
              if ( (_BYTE)v91 )
                break;
            }
            if ( v85 == ++v83 )
              goto LABEL_167;
          }
LABEL_100:
          if ( (*(_BYTE *)v6 & 1) != 0 )
            goto LABEL_13;
LABEL_101:
          v6 = 0;
          LOBYTE(v92) = 1;
          goto LABEL_52;
        }
      }
LABEL_167:
      v87 = *(_QWORD *)(module_data + 1008);
      v88 = *(_QWORD *)(v87 + 48);
      if ( v88 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v87 + 40) + 8 * v88 - 8);
        if ( v6 )
        {
LABEL_169:
          LOBYTE(v91) = 1;
          goto LABEL_100;
        }
      }
    }
    LOBYTE(v91) = 1;
    goto LABEL_101;
  }
LABEL_47:
  if ( v100 )
  {
    v101 = 0;
    qfree(v100);
  }
  return v9;
}
