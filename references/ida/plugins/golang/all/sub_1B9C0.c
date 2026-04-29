unsigned __int64 __fastcall sub_1B9C0(__int64 a1, double a2, double a3, double a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  bool v6; // zf
  _QWORD *v7; // r13
  int i; // r12d
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  const char *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rbp
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rbp
  unsigned __int64 j; // r12
  __int64 v18; // rbp
  int v19; // eax
  unsigned __int8 v20; // r12
  unsigned __int8 v21; // bp
  __int64 v22; // rax
  __int64 v23; // rbp
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rbp
  unsigned __int64 k; // r13
  __int64 v28; // r14
  __int16 v29; // bp
  _QWORD *v30; // rax
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // r15
  __int64 v33; // r12
  __int64 v34; // rbp
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // r14
  _QWORD *v40; // rax
  __int64 v41; // r13
  __int64 v42; // rax
  unsigned __int64 v43; // r13
  __int64 v44; // r13
  __int64 v45; // rax
  unsigned __int64 v46; // rbp
  unsigned __int64 v47; // r14
  _QWORD *v48; // rax
  unsigned __int64 v49; // r13
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // r13
  _QWORD *v52; // rax
  unsigned __int8 v53; // al
  unsigned __int64 v54; // r12
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // r14
  unsigned int dword; // eax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // r12
  _QWORD *v60; // rax
  _QWORD *v61; // rsi
  __int64 v62; // rbp
  __int64 v63; // rax
  __int64 v64; // rbp
  __int16 v65; // r15
  __int64 v66; // rsi
  __int64 v67; // rax
  _QWORD *v68; // r15
  _DWORD *v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rbx
  __int64 v72; // r15
  _QWORD *v73; // rbp
  __int64 v74; // rax
  __int64 v75; // r14
  __int64 v76; // rax
  unsigned __int64 v77; // [rsp+8h] [rbp-1A0h]
  _QWORD *v78; // [rsp+10h] [rbp-198h]
  __int64 v79; // [rsp+10h] [rbp-198h]
  unsigned __int64 v80; // [rsp+20h] [rbp-188h]
  __int64 v81; // [rsp+20h] [rbp-188h]
  __int64 v82; // [rsp+38h] [rbp-170h]
  __int64 v83; // [rsp+68h] [rbp-140h] BYREF
  __int64 v84; // [rsp+70h] [rbp-138h]
  __int64 v85; // [rsp+78h] [rbp-130h]
  __int64 v86; // [rsp+80h] [rbp-128h]
  __int64 v87; // [rsp+88h] [rbp-120h]
  __int64 v88; // [rsp+90h] [rbp-118h] BYREF
  __int128 v89; // [rsp+98h] [rbp-110h]
  __int64 v90; // [rsp+B0h] [rbp-F8h] BYREF
  __int128 v91; // [rsp+B8h] [rbp-F0h]
  int v92; // [rsp+C8h] [rbp-E0h]
  __int64 v93; // [rsp+D0h] [rbp-D8h] BYREF
  __int128 v94; // [rsp+D8h] [rbp-D0h]
  int v95; // [rsp+E8h] [rbp-C0h]
  __int128 v96; // [rsp+F0h] [rbp-B8h]
  __int64 v97; // [rsp+100h] [rbp-A8h]
  int v98; // [rsp+108h] [rbp-A0h]
  __int16 v99; // [rsp+10Ch] [rbp-9Ch]
  __int64 idati; // [rsp+110h] [rbp-98h] BYREF
  __int128 v101; // [rsp+118h] [rbp-90h]
  __int128 v102; // [rsp+128h] [rbp-80h]
  __int64 v103; // [rsp+138h] [rbp-70h]
  __int64 v104; // [rsp+140h] [rbp-68h]
  __int64 v105; // [rsp+148h] [rbp-60h]
  __int64 v106; // [rsp+150h] [rbp-58h]
  __int128 v107; // [rsp+158h] [rbp-50h] BYREF
  unsigned __int64 v108; // [rsp+168h] [rbp-40h]

  v108 = __readfsqword(0x28u);
  v4 = a1;
  sub_114E0(a1);
  if ( *(_QWORD *)(a1 + 472) == -1 )
  {
    sub_5050((__int64)"golang: failed to locate the runtime.firstmoduledata symbol\n");
  }
  else
  {
    sub_57B0(*(_DWORD *)(a1 + 404));
    sub_5050((__int64)"%a: golang: found moduledata\n", a2);
    idati = 0;
    if ( !(unsigned __int8)get_data_value()
      || (v5 = *(_QWORD *)(a1 + 392), *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) == v5)
      || v5 == -1 )
    {
      *(_QWORD *)(a1 + 392) = idati;
      sub_11D20(a1, a2);
    }
    else if ( v5 != idati )
    {
      sub_5050((__int64)"golang: pclntab_base(%a) does not match moduledata(%a) pclntab_base(%a)\n", a2, a3, a4);
    }
  }
  v6 = *(_QWORD *)(a1 + 432) == -1;
  *(_BYTE *)(a1 + 564) = 1;
  if ( !v6 )
  {
    v7 = &off_27930;
    for ( i = 3; i != 15; ++i )
    {
      idati = 0;
      if ( *v7 && (unsigned __int8)sub_52A0((__int64)&idati, i) )
        save_tinfo();
      v7 += 3;
      clear_tinfo_t();
    }
    h2ti();
    h2ti();
    h2ti();
    if ( *(_BYTE *)(a1 + 559) )
    {
      v9 = *(_QWORD *)(a1 + 432);
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (v9 + 4LL * *(_QWORD *)(a1 + 440));
      if ( v9 < v10 && (v52 = (_QWORD *)getseg()) != nullptr && v10 - 1 >= *v52 && v10 - 1 < v52[1] )
      {
        v53 = getinf();
        v54 = *(_QWORD *)(a1 + 432);
        *(_DWORD *)(a1 + 568) = v53;
        if ( v54 < v10 )
        {
          do
          {
            v56 = *(_QWORD *)(a1 + 416);
            create_data();
            LODWORD(v102) = 9;
            idati = -1;
            v101 = v56;
            op_offset_ex();
            create_xrefs_from();
            dword = get_dword();
            if ( dword )
            {
              v58 = *(_QWORD *)(a1 + 416);
              v59 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (v58 + dword);
              if ( v59 >= v58 && v59 < *(_QWORD *)(a1 + 424) )
              {
                v60 = *(_QWORD **)(a1 + 328);
                if ( !v60 )
                  goto LABEL_124;
                v61 = (_QWORD *)(a1 + 320);
                do
                {
                  if ( v60[4] >= v59 )
                  {
                    v61 = v60;
                    v60 = (_QWORD *)v60[2];
                  }
                  else
                  {
                    v60 = (_QWORD *)v60[3];
                  }
                }
                while ( v60 );
                if ( v61 == (_QWORD *)(a1 + 320) || v59 < v61[4] )
                {
LABEL_124:
                  sub_FE10(a1, 0xCu, 0, 0);
                  create_data();
                  sub_15CE0((_QWORD *)a1, v59, 0);
                }
              }
            }
            v55 = *(_QWORD *)(a1 + 432) + 4LL;
            *(_QWORD *)(a1 + 432) = v55;
          }
          while ( v55 < v10 );
        }
      }
      else
      {
        sub_5050((__int64)"golang: discarding typelinks, bad range: %a - %a\n", a2, a3);
      }
      if ( (unsigned int)get_type_ordinal() )
      {
        *(_QWORD *)&v96 = 0;
        v11 = "reflect_typeAlg";
        goto LABEL_20;
      }
      if ( (unsigned int)get_type_ordinal() )
      {
        *(_QWORD *)&v96 = 0;
        v11 = "runtime_typeAlg";
LABEL_20:
        *(_QWORD *)&v101 = v11;
        WORD4(v101) = 0;
        idati = get_idati();
        create_tinfo();
        save_tinfo();
        clear_tinfo_t();
      }
    }
  }
  v12 = *(_QWORD *)(a1 + 448);
  if ( v12 != -1 )
  {
    v13 = v12 - 1;
    v14 = *(_QWORD *)(a1 + 456) * *(unsigned __int8 *)(a1 + 565);
    v15 = (unsigned __int64 *)getseg();
    if ( v15 )
    {
      v16 = v13 + v14;
      if ( v16 >= *v15 && v16 < v15[1] && *(_QWORD *)(a1 + 456) )
      {
        for ( j = 0; j < *(_QWORD *)(v4 + 456); ++j )
        {
          if ( !(unsigned __int8)get_data_value() )
            break;
          if ( *(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL) )
          {
            create_data();
            create_data();
            create_data();
            create_data();
            if ( (unsigned __int8)get_data_value() )
            {
              a3 = 0.0;
              v84 = 0;
              v18 = *(_QWORD *)(v4 + 416);
              v89 = 0;
              v88 = 0;
              if ( (unsigned __int8)get_data_value() )
              {
                if ( v84 )
                {
                  idati = 0;
                  if ( (unsigned __int8)get_data_value() )
                  {
                    if ( idati )
                      sub_6470(v4, (__int64)&v88, *(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL) & (v18 + idati));
                  }
                }
              }
              if ( (unsigned __int8)get_data_value() )
              {
                v85 = 0;
                v62 = *(_QWORD *)(v4 + 416);
                v91 = 0;
                v90 = 0;
                if ( (unsigned __int8)get_data_value() )
                {
                  if ( v85 )
                  {
                    idati = 0;
                    if ( (unsigned __int8)get_data_value() )
                    {
                      if ( idati )
                        sub_6470(v4, (__int64)&v90, *(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL) & (v62 + idati));
                    }
                  }
                }
                if ( (get_flags_ex() & 0x4000) == 0 )
                {
                  idati = 0;
                  v101 = 0;
                  sub_CCD0(&idati);
                  set_name();
                  if ( idati )
                  {
                    *(_QWORD *)&v101 = 0;
                    qfree();
                  }
                }
                if ( !*(_BYTE *)(v4 + 559) )
                {
LABEL_108:
                  if ( v90 )
                  {
                    *(_QWORD *)&v91 = 0;
                    qfree();
                  }
                  if ( !v88 )
                    goto LABEL_38;
LABEL_37:
                  *(_QWORD *)&v89 = 0;
                  qfree();
                  goto LABEL_38;
                }
                v83 = 0;
                if ( *(_QWORD *)(v4 + 416) || !*(_QWORD *)(v4 + 424) )
                {
LABEL_114:
                  clear_tinfo_t();
                  goto LABEL_108;
                }
                v63 = *(_QWORD *)(v4 + 328);
                if ( !v63 )
                  goto LABEL_127;
                do
                {
                  v64 = v63;
                  v63 = *(_QWORD *)(v63 + 16);
                }
                while ( v63 );
                if ( v4 + 320 == v64 || *(_QWORD *)(v64 + 32) )
                {
LABEL_127:
                  sub_FE10(v4, 0xCu, 0, 0);
                  create_data();
                  if ( !(unsigned __int8)sub_15CE0((_QWORD *)v4, 0, (__int64)&v83) )
                    goto LABEL_114;
                }
                else
                {
                  copy_tinfo_t();
                  if ( !*(_BYTE *)(v64 + 40) )
                    goto LABEL_114;
                }
                v93 = 0;
                v94 = 0;
                sub_CCD0(&v93);
                validate_name();
                sub_F940((__int64)&v93, 0);
                idati = 0;
                v65 = *(unsigned __int8 *)(v4 + 565);
                v103 = 0;
                LODWORD(v104) = 1;
                v101 = 0;
                v102 = 0;
                sub_C190(&idati, 2u);
                v66 = *(_QWORD *)(idati + 16);
                v78 = (_QWORD *)idati;
                if ( *(_QWORD *)(idati + 32) <= 3u )
                {
                  v75 = idati;
                  v76 = qvector_reserve();
                  *(_QWORD *)(v75 + 16) = v76;
                  v66 = v76;
                }
                v78[3] = 4;
                *(_WORD *)v66 = 24948;
                *(_BYTE *)(v66 + 2) = 98;
                *(_BYTE *)(v78[2] + 3LL) = 0;
                *(_QWORD *)&v96 = 0;
                get_stock_tinfo();
                copy_tinfo_t();
                clear_tinfo_t();
                v67 = (8 * v65) & 0x7F8;
                v78[1] = v67;
                v68 = (_QWORD *)idati;
                v82 = v67;
                v69 = *(_DWORD **)(idati + 160);
                if ( *(_QWORD *)(idati + 176) <= 4u )
                {
                  v74 = qvector_reserve();
                  v68[20] = v74;
                  v69 = (_DWORD *)v74;
                }
                v68[21] = 5;
                *v69 = 1635017060;
                *(_BYTE *)(v68[20] + 4LL) = 0;
                v86 = 0;
                v87 = 0;
                v96 = 0;
                copy_tinfo_t();
                v97 = 0;
                copy_tinfo_t();
                v98 = 0;
                v99 = 0;
                clear_tinfo_t();
                clear_tinfo_t();
                copy_tinfo_t();
                create_tinfo();
                clear_tinfo_t();
                clear_tinfo_t();
                clear_tinfo_t();
                v68[19] = v82;
                v68[18] = v78[1];
                *(_QWORD *)&v96 = 0;
                create_tinfo();
                v70 = idati;
                if ( idati )
                {
                  if ( (_QWORD)v101 )
                  {
                    v79 = v4;
                    v71 = 0;
                    v72 = v101;
                    do
                    {
                      v73 = (_QWORD *)(v70 + 144 * v71);
                      clear_tinfo_t();
                      if ( v73[5] )
                      {
                        v73[6] = 0;
                        qfree();
                      }
                      if ( v73[2] )
                      {
                        v73[3] = 0;
                        qfree();
                      }
                      ++v71;
                      v70 = idati;
                    }
                    while ( v72 != v71 );
                    v4 = v79;
                  }
                  *(_QWORD *)&v101 = 0;
                  qfree();
                }
                if ( (unsigned int)save_tinfo() )
                  sub_5050((__int64)"golang %a: golang: failed to create type from itab entry %s\n", 0.0, nullptr);
                clear_tinfo_t();
                if ( v93 )
                {
                  *(_QWORD *)&v94 = 0;
                  qfree();
                }
                goto LABEL_114;
              }
              if ( v88 )
                goto LABEL_37;
            }
          }
LABEL_38:
          *(_QWORD *)(v4 + 448) += *(unsigned __int8 *)(v4 + 565);
        }
      }
    }
  }
  v87 = 0;
  if ( (unsigned __int8)get_data_value() )
  {
    v19 = *(_DWORD *)(v4 + 404);
    if ( v19 <= 115 )
    {
      v20 = 3;
      v21 = 0;
    }
    else
    {
      v20 = 4;
      v21 = 1;
      if ( v19 > 117 )
      {
        v21 = 2;
        v20 = (v19 != 118) + 5;
      }
    }
    get_std_dirtree();
    v88 = 0;
    v22 = sub_FE10(v4, v20, (__int64)&v88, 0);
    idati = v4;
    *(_QWORD *)&v101 = &v88;
    *((_QWORD *)&v101 + 1) = v22;
    *(_QWORD *)&v102 = -1;
    *((_QWORD *)&v102 + 1) = -1;
    v103 = -1;
    v104 = -1;
    v105 = -1;
    v106 = 0;
    v107 = 0;
    sub_6920((__int64)&v88, &v107, (_DWORD *)&v107 + 1, "npcdata");
    sub_6920(v101, (_DWORD *)&v107 + 2, (_DWORD *)&v107 + 3, "nfuncdata");
    if ( *(_DWORD *)(v4 + 400) == -5 )
    {
      v36 = *(unsigned __int8 *)(v4 + 565);
      v81 = (unsigned __int8)(2 * v36);
      v37 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL);
      v38 = v37 & (*(_QWORD *)(v4 + 392) + v36 + 8);
      v39 = v37 & (v81 * v87 + v38);
      v77 = v39;
      v40 = (_QWORD *)getseg();
      if ( v40 )
      {
        if ( v39 - 1 >= *v40 && v39 - 1 < v40[1] )
        {
          sub_FE10(v4, v21, 0, 0);
          create_data();
          create_data();
          set_cmt();
          v41 = *(_QWORD *)(v4 + 392);
          v42 = v41 + (unsigned int)get_dword();
          v43 = *(_QWORD *)(v4 + 392);
          *(_QWORD *)(v4 + 504) = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL) & v42;
          create_data();
          v92 = 9;
          v90 = -1;
          v91 = v43;
          op_offset_ex();
          create_xrefs_from();
          set_cmt();
          create_data();
          v44 = (unsigned int)get_dword() - 1;
          set_cmt();
          v45 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL);
          v46 = v45 & (*(_QWORD *)(v4 + 504) + 4LL);
          v47 = v45 & (v46 + 4 * v44);
          v48 = (_QWORD *)getseg();
          if ( v48 )
          {
            if ( v47 - 1 >= *v48 && v47 - 1 < v48[1] )
            {
              for ( ; v46 < v47; v46 += 4LL )
              {
                v49 = *(_QWORD *)(v4 + 392);
                create_data();
                v95 = 9;
                v93 = -1;
                v94 = v49;
                op_offset_ex();
                create_xrefs_from();
                get_dword();
                create_strlit();
              }
              if ( v38 < v77 )
              {
                while ( 1 )
                {
                  v93 = 0;
                  if ( !(unsigned __int8)get_data_value() )
                    break;
                  v50 = *(_QWORD *)(v4 + 392);
                  v51 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL) & (v50 + v93);
                  if ( v51 >= v50 && v93 )
                  {
                    create_data();
                    *(_QWORD *)&v96 = 0;
                    if ( (unsigned __int8)get_data_value() )
                    {
                      sub_E250(v4, *(unsigned __int8 *)(v4 + 565) + v51 + 12, v96);
                      sub_EC90();
                      sub_DCC0(v4, v51, (__int64)&idati, (__m128i)0LL);
                    }
                    else
                    {
                      sub_5050((__int64)"%a: golang: failed to read function address", 0.0);
                    }
                  }
                  else
                  {
                    sub_5050((__int64)"%a: golang: invalid offset %a to FUNC_INFO\n", 0.0, a3);
                  }
                  v38 += v81;
                  if ( v38 >= v77 )
                    goto LABEL_63;
                }
                sub_5050((__int64)"%a: golang: failed to read function table\n", 0.0);
              }
            }
          }
        }
      }
    }
    else
    {
      sub_FE10(v4, v21, 0, 0);
      v23 = *(_QWORD *)(v4 + 504);
      v24 = (unsigned __int64 *)getseg();
      if ( v24 )
      {
        v25 = v23 - 1;
        if ( v25 >= *v24 && v25 < v24[1] )
        {
          v26 = *(_QWORD *)(v4 + 496);
          for ( k = *(_QWORD *)(v4 + 504); v26 < k; v26 += 4LL )
          {
            create_data();
            *((_QWORD *)&v96 + 1) = k;
            v98 = 2057;
            *(_QWORD *)&v96 = -1;
            v97 = 0;
            op_offset_ex();
            create_xrefs_from();
            k = *(_QWORD *)(v4 + 504);
          }
          v28 = 8;
          LOBYTE(v29) = 4;
          if ( *(_DWORD *)(v4 + 404) <= 0x75u )
          {
            v29 = *(unsigned __int8 *)(v4 + 565);
            v28 = (2 * v29) & 0x1FE;
          }
          v80 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL) & (*(_QWORD *)(v4 + 520) + v28 * v87);
          v30 = (_QWORD *)getseg();
          if ( v30 )
          {
            if ( v80 - 1 >= *v30 && v80 - 1 < v30[1] )
            {
              v31 = *(_QWORD *)(v4 + 520);
              if ( v31 >= v80 )
              {
LABEL_62:
                get_flags_by_size();
                create_data();
                set_cmt();
              }
              else
              {
                v32 = (unsigned __int8)v29 + v31;
                while ( 1 )
                {
                  v93 = 0;
                  if ( !(unsigned __int8)get_data_value() )
                    break;
                  create_data();
                  v34 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL) & (*(_QWORD *)(v4 + 520) + v93);
                  create_data();
                  *(_QWORD *)&v96 = 0;
                  if ( !(unsigned __int8)get_data_value() )
                    break;
                  if ( *(_DWORD *)(v4 + 404) > 0x75u )
                  {
                    v33 = 4;
                    *(_QWORD *)&v96 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL) & (*(_QWORD *)(v4 + 480) + v96);
                  }
                  else
                  {
                    v33 = *(unsigned __int8 *)(v4 + 565);
                  }
                  get_dword();
                  sub_E250(v4, v34 + v33 + 12, v96);
                  sub_EC90();
                  sub_DCC0(v4, v34, (__int64)&idati, (__m128i)0LL);
                  v31 += v28;
                  v32 += v28;
                  if ( v31 >= v80 )
                    goto LABEL_62;
                }
              }
            }
          }
        }
      }
    }
LABEL_63:
    clear_tinfo_t();
    clear_tinfo_t();
  }
  return v108 - __readfsqword(0x28u);
}
