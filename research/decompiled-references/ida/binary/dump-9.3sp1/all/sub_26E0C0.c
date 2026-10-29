__int64 __fastcall sub_26E0C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r13
  int v6; // r14d
  char v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r14
  int v26; // edx
  int v27; // eax
  __int64 v28; // rax
  int v29; // edx
  int v30; // r12d
  int tinfo_property; // r9d
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // r9d
  __int64 v43; // rdx
  int v44; // ecx
  int v45; // r14d
  int v46; // r12d
  __int64 v47; // rax
  __int64 v48; // rax
  char v49; // al
  char v50; // al
  __int64 v51; // r8
  int v52; // r11d
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdi
  char v56; // al
  __int64 v57; // rsi
  char v58; // al
  __int64 v59; // rdx
  __int64 v60; // rcx
  __m128 v61; // xmm0
  int v62; // r13d
  bool v63; // r12
  char v64; // r12
  char v65; // r12
  int v66; // eax
  __int64 v67; // rax
  char v68; // r14
  int v69; // eax
  int v70; // r14d
  __int64 v71; // rcx
  __int64 i; // rdi
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  int v76; // eax
  char v77; // al
  __int64 v78; // rdx
  int v79; // r8d
  int v80; // r9d
  int v81; // r8d
  int v82; // r9d
  char v83; // [rsp+16h] [rbp-DAh]
  int tinfo_size; // [rsp+20h] [rbp-D0h]
  __int64 v85; // [rsp+28h] [rbp-C8h]
  __int64 v86; // [rsp+40h] [rbp-B0h]
  char v87; // [rsp+48h] [rbp-A8h]
  int v88; // [rsp+48h] [rbp-A8h]
  int v89; // [rsp+4Ch] [rbp-A4h]
  __int64 v90; // [rsp+58h] [rbp-98h]
  char v91; // [rsp+58h] [rbp-98h]
  __int64 v92; // [rsp+58h] [rbp-98h]
  __int64 v93; // [rsp+58h] [rbp-98h]
  _QWORD v94[2]; // [rsp+68h] [rbp-88h] BYREF
  __int64 v95; // [rsp+78h] [rbp-78h]
  _QWORD v96[2]; // [rsp+80h] [rbp-70h] BYREF
  __int128 v97; // [rsp+90h] [rbp-60h] BYREF
  __int64 v98; // [rsp+A0h] [rbp-50h]
  int v99; // [rsp+A8h] [rbp-48h]
  __int16 v100; // [rsp+ACh] [rbp-44h]
  unsigned __int64 v101; // [rsp+B8h] [rbp-38h]

  v90 = a2;
  v101 = __readfsqword(0x28u);
  v86 = a1[11] - a1[12];
  if ( !(a1[8] | v86) )
    goto LABEL_32;
  v5 = a3;
  if ( *((_DWORD *)a1 + 110) || *((_BYTE *)a1 + 453) )
  {
    v39 = sub_26B730((__int64)a1, a2, a3, a4);
    *((_BYTE *)a1 + 453) = 0;
    v90 = v39;
  }
  get_tinfo_property();
  tinfo_size = get_tinfo_size();
  v6 = tinfo_size;
  if ( *(_DWORD *)(a1[3] + 8LL) != 48 )
    goto LABEL_5;
  v7 = *((_BYTE *)a1 + 452);
  if ( v7 )
    goto LABEL_104;
  tinfo_property = *((_DWORD *)a1 + 109);
  if ( !tinfo_property )
    tinfo_property = get_tinfo_property();
  v33 = a1[7];
  v34 = a1[8];
  if ( *((_BYTE *)a1 + 450) == 1 && tinfo_property <= tinfo_size && tinfo_size > 0 )
  {
    if ( 32 * v34 )
    {
      v74 = a1[7];
      while ( !(*(_QWORD *)(v74 + 24) % tinfo_size) )
      {
        v74 += 32;
        if ( v74 == v33 + 32 * v34 )
          goto LABEL_182;
      }
      if ( tinfo_property <= 0 )
        goto LABEL_5;
      v37 = v33 + 32 * v34;
      v35 = tinfo_property;
LABEL_50:
      v38 = v33;
      while ( !(*(_QWORD *)(v38 + 24) % v35) )
      {
        v38 += 32;
        if ( v38 == v37 )
          goto LABEL_167;
      }
      goto LABEL_5;
    }
LABEL_182:
    if ( !(v86 % tinfo_size) )
      goto LABEL_5;
  }
  if ( tinfo_property <= 0 )
    goto LABEL_5;
  v35 = tinfo_property;
  v36 = 32LL * a1[8];
  v37 = v33 + v36;
  if ( v36 )
    goto LABEL_50;
LABEL_167:
  if ( !(v86 % v35) )
  {
    if ( tinfo_property != 1 )
    {
      for ( ; v37 != v33; *(_QWORD *)(v33 - 8) = v75 / v35 )
      {
        v75 = *(_QWORD *)(v33 + 24);
        v33 += 32;
      }
      v86 /= v35;
    }
    *((_BYTE *)a1 + 451) = 1;
    v83 = 0;
    goto LABEL_14;
  }
LABEL_5:
  v7 = *((_BYTE *)a1 + 451);
  if ( v7 )
  {
LABEL_104:
    v83 = 0;
    v7 = 0;
    goto LABEL_14;
  }
  v83 = 0;
  if ( !*((_BYTE *)a1 + 452) )
  {
    v83 = v5 | (*((_DWORD *)a1 + 109) == 0);
    if ( v83 )
    {
      if ( tinfo_size > 0 )
      {
        v8 = a1[7];
        v9 = 32LL * a1[8];
        v10 = v8 + v9;
        if ( v9 )
        {
          v11 = a1[7];
          while ( !(*(_QWORD *)(v11 + 24) % tinfo_size) )
          {
            v11 += 32;
            if ( v11 == v10 )
              goto LABEL_147;
          }
          v7 = 0;
        }
        else
        {
LABEL_147:
          v7 = 0;
          if ( !(v86 % tinfo_size) )
          {
            v7 = v5 | (*((_DWORD *)a1 + 109) == 0);
            if ( tinfo_size != 1 )
            {
              for ( ; v8 != v10; *(_QWORD *)(v8 - 8) = v67 / tinfo_size )
              {
                v67 = *(_QWORD *)(v8 + 24);
                v8 += 32;
              }
              v86 /= tinfo_size;
              v7 = v83;
            }
          }
        }
      }
    }
  }
LABEL_14:
  v12 = *((_BYTE *)a1 + 449) == 0;
  v94[0] = 0;
  v89 = 35;
  if ( !v12 )
    v89 = 6;
  v96[0] = 0;
  v95 = 0;
  v97 = 0;
  copy_tinfo_t();
  v98 = 0;
  copy_tinfo_t();
  v99 = 0;
  v100 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  v13 = 10;
  get_tinfo_details();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  v87 = *((_BYTE *)a1 + 451);
  if ( !v87 && (v7 || (v13 = v90 + 48, (unsigned __int8)sub_32A510(*a1, v90 + 48, *a1 + 200LL))) )
  {
    v85 = 0;
    v16 = v90;
  }
  else
  {
    if ( *((_BYTE *)a1 + 449) )
    {
      v54 = j__qalloc_or_throw(64, v13, v14, v15);
      v13 = a1[5];
      *(_QWORD *)v54 = -1;
      *(_DWORD *)(v54 + 8) = 0;
      *(_QWORD *)(v54 + 12) = -1;
      *(_QWORD *)(v54 + 48) = 0;
      *(_DWORD *)(v54 + 56) = 0;
      v85 = v54;
      sub_25AFF0(v54, v13);
      v89 = 35;
    }
    else
    {
      v85 = 0;
    }
    v40 = j__qalloc_or_throw(64, v13, v14, v15);
    *(_QWORD *)v40 = -1;
    v16 = v40;
    *(_DWORD *)(v40 + 8) = 48;
    *(_QWORD *)(v40 + 12) = -1;
    *(_QWORD *)(v40 + 32) = 0;
    *(_QWORD *)(v40 + 24) = v90;
    *(_QWORD *)(v40 + 40) = 0;
    *(_QWORD *)(v40 + 48) = 0;
    *(_DWORD *)(v40 + 56) = 1;
    if ( *((_BYTE *)a1 + 451) )
    {
      copy_tinfo_t();
      if ( (*(_BYTE *)(a1[3] + 56LL) & 0x20) != 0 )
        *(_DWORD *)(v16 + 56) |= 0x20u;
      sub_26DF30(v96);
      v41 = *(_QWORD *)(v16 + 48);
      *(_QWORD *)(v16 + 48) = v96[0];
      v42 = *((_DWORD *)a1 + 109);
      v96[0] = v41;
      if ( v42 )
      {
        sub_32C540(&v97, *(_QWORD *)(*a1 + 112LL), v16 + 48);
        copy_tinfo_t();
        clear_tinfo_t();
        sub_26B5D0(v16 + 48, 0);
      }
      clear_tinfo_t();
      v87 = 0;
    }
    else
    {
      copy_tinfo_t();
      v50 = get_tinfo_property();
      if ( (v50 & 0x3E) == 0
        || (v50 & 0xFu) > 8
        || ((v55 = a1[18], !(_BYTE)v55)
         || (v55 & 0xE) == 0 && (v55 & 0x30) != 0
         || (*(_QWORD *)&v97 = get_tinfo_property(), v91 = get_tinfo_property(), clear_tinfo_t(), (v91 & 0x3F) == 0x30))
        && *(_DWORD *)(*(_QWORD *)(*a1 + 112LL) + 84LL) == get_tinfo_size() )
      {
        if ( v83 )
        {
          v51 = 32LL * a1[8];
          if ( tinfo_size > 1 )
          {
            while ( (v6 & (v6 - 1)) == 0 )
            {
              v52 = v6 >> 1;
              if ( v6 <= 33 )
              {
                if ( v51 )
                {
                  v53 = a1[7];
                  while ( !(*(_QWORD *)(v53 + 24) % v52) )
                  {
                    v53 += 32;
                    if ( v53 == a1[7] + v51 )
                      goto LABEL_134;
                  }
                }
                else
                {
LABEL_134:
                  if ( !((int)v86 % (__int64)v52) )
                  {
                    if ( v52 == 1 )
                      break;
                    v88 = v6 >> 1;
                    v92 = v16 + 48;
                    if ( (get_tinfo_property() & 0xF) == 0xA )
                    {
                      *(_QWORD *)&v97 = get_tinfo_property();
                      v68 = get_tinfo_property();
                      clear_tinfo_t();
                      v92 = v16 + 48;
                      if ( (v68 & 0x3F) != 1 )
                      {
                        v69 = get_tinfo_property();
                        v70 = v69;
                        if ( v69 <= 1 )
                          break;
                        v92 = v16 + 48;
                        if ( !(v88 % v69) )
                        {
                          copy_tinfo_t();
                          v71 = a1[7];
                          for ( i = v71 + 32LL * a1[8]; i != v71; *(_QWORD *)(v71 - 8) = v73 / v70 )
                          {
                            v73 = *(_QWORD *)(v71 + 24);
                            v71 += 32;
                          }
                          v86 /= v70;
                        }
                      }
                    }
                    goto LABEL_137;
                  }
                }
              }
              if ( v52 == 1 )
                break;
              v6 >>= 1;
            }
          }
        }
        v92 = v16 + 48;
      }
      else
      {
        v92 = v16 + 48;
        copy_tinfo_t();
        clear_tinfo_t();
      }
LABEL_137:
      if ( !*(_BYTE *)(v16 + 48) )
      {
        copy_tinfo_t();
        sub_26B5D0(v92, 0);
      }
      set_tinfo_property();
      *(_DWORD *)(v16 + 56) |= 0x20u;
      v87 = 1;
    }
  }
  v17 = v86;
  v20 = sub_26DC70((__int64)a1, v86, v14, v15);
  if ( !v20 )
    goto LABEL_28;
  v21 = *(_QWORD *)(a1[1] + 64LL);
  if ( !(unsigned __int8)sub_26AD80(*a1, v21, v20, v89) )
  {
    if ( v89 != 35 )
    {
      v89 = 6;
      goto LABEL_25;
    }
    if ( (unsigned int)(*(_DWORD *)(v20 + 8) - 35) > 1 )
      goto LABEL_25;
    v21 = *(_QWORD *)(a1[1] + 64LL);
    if ( !(unsigned __int8)sub_26AD80(*a1, v21, *(_QWORD *)(v20 + 24), 35) )
      goto LABEL_25;
    v57 = 2;
    v58 = get_tinfo_property();
    if ( (v58 & 0x3E) != 0 && (v58 & 0xFu) <= 8 )
    {
      v57 = 2;
      if ( (get_tinfo_property() & 0xF) == 0xA )
      {
        copy_tinfo_t();
        v57 = 0;
        sub_26B5D0(v16 + 48, 0);
      }
    }
    v93 = j__qalloc_or_throw(64, v57, v59, v60);
    v16 = v93;
    v61 = _mm_loadh_ps((const double *)(v20 + 24));
    *(_QWORD *)v93 = -1;
    *(_DWORD *)(v93 + 8) = 36;
    *(_QWORD *)(v93 + 12) = -1;
    *(_QWORD *)(v93 + 40) = 0;
    *(_QWORD *)(v93 + 48) = 0;
    *(_DWORD *)(v93 + 56) = 0;
    *(__m128 *)(v93 + 24) = v61;
    v89 = *(_DWORD *)(v20 + 8);
    sub_255850((__int64 *)v20, *(_QWORD *)(v20 + 32));
    v21 = *(_QWORD *)(*a1 + 112LL);
    sub_2441C0(v93, v21, 0);
    *(_DWORD *)(v93 + 56) |= 1u;
    if ( v89 != 36 )
    {
      v16 = v93;
      goto LABEL_25;
    }
LABEL_114:
    v21 = 2;
    v56 = get_tinfo_property();
    if ( (v56 & 0x3E) != 0 && (v56 & 0xFu) <= 8 )
    {
      v21 = 2;
      if ( (get_tinfo_property() & 0xF) == 0xA )
      {
        if ( !(unsigned __int8)compare_tinfo() )
        {
          if ( !under_debugger )
            sub_383060(52124);
          goto LABEL_200;
        }
        if ( (unsigned int)get_tinfo_property() != 1 )
        {
          if ( !under_debugger )
            sub_383060(52125);
          goto LABEL_200;
        }
        copy_tinfo_t();
        v21 = 0;
        sub_26B5D0(v16 + 48, 0);
      }
    }
    v89 = 36;
    goto LABEL_25;
  }
  if ( v89 == 35 )
    goto LABEL_114;
  v89 = 7;
LABEL_25:
  v24 = j__qalloc_or_throw(64, v21, v22, v23);
  *(_QWORD *)(v24 + 32) = v20;
  v25 = v24;
  *(_QWORD *)v24 = -1;
  *(_DWORD *)(v24 + 8) = v89;
  *(_QWORD *)(v24 + 12) = -1;
  *(_QWORD *)(v24 + 24) = v16;
  *(_QWORD *)(v24 + 40) = 0;
  *(_QWORD *)(v24 + 48) = 0;
  *(_DWORD *)(v24 + 56) = 0;
  v17 = *(_QWORD *)(*a1 + 112LL);
  sub_2441C0(v24, v17, 0);
  v16 = v25;
  v26 = *(_DWORD *)(v25 + 56);
  v27 = v26 | 0x21;
  v18 = v26 | 1u;
  if ( !v87 )
    v27 = v18;
  *(_DWORD *)(v25 + 56) = v27;
LABEL_28:
  if ( LOBYTE(v94[0]) )
  {
    if ( (get_tinfo_property() & 0xF) == 0xB && (get_tinfo_property() & 0xF) == 0xA )
    {
      copy_tinfo_t();
      set_tinfo_property();
    }
    else
    {
      v96[0] = 0;
      v96[1] = 0;
      if ( (unsigned __int8)get_tinfo_details() )
      {
        v94[1] = 0;
        v95 = 0;
        v97 = 0;
        copy_tinfo_t();
        v98 = 0;
        copy_tinfo_t();
        v99 = 0;
        v100 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        v48 = v97;
        *(_QWORD *)&v97 = v96[0];
        v96[0] = v48;
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      clear_tinfo_t();
    }
    v17 = *a1;
    v49 = sub_246B40(v16, *a1, v94);
    if ( v87 && v49 )
      *(_DWORD *)(v16 + 56) |= 0x20u;
  }
  if ( v85 )
  {
    v90 = j__qalloc_or_throw(64, v17, v18, v19);
    *(_QWORD *)v90 = -1;
    *(_DWORD *)(v90 + 8) = 2;
    *(_QWORD *)(v90 + 12) = -1;
    *(_QWORD *)(v90 + 24) = v85;
    *(_QWORD *)(v90 + 32) = v16;
    *(_QWORD *)(v90 + 40) = 0;
    *(_QWORD *)(v90 + 48) = 0;
    *(_DWORD *)(v90 + 56) = 0;
    sub_2441C0(v90, *(_QWORD *)(*a1 + 112LL), 0);
    *(_DWORD *)(v90 + 56) |= 1u;
  }
  else
  {
    v90 = v16;
  }
  clear_tinfo_t();
  clear_tinfo_t();
LABEL_32:
  if ( !*((_DWORD *)a1 + 109) && (*((_DWORD *)a1 + 110) || *((_BYTE *)a1 + 453)) )
    v90 = sub_26B730((__int64)a1, v90, a3, a4);
  v28 = a1[3];
  v29 = *(_DWORD *)(v28 + 8);
  if ( v29 != 48 )
  {
    if ( v29 == 57 && v28 && a1[4] == *(_QWORD *)(v28 + 24) )
    {
      if ( !get_tinfo_property() )
        goto LABEL_58;
      *(_QWORD *)&v97 = 0;
      *(_QWORD *)&v97 = get_tinfo_property();
      if ( (unsigned int)verify_tinfo() )
      {
        clear_tinfo_t();
LABEL_58:
        if ( !get_tinfo_property() || (unsigned int)verify_tinfo() )
        {
          if ( !under_debugger )
            sub_383060(52694);
          goto LABEL_200;
        }
        sub_246B40(v90, *a1, (_QWORD *)(a1[4] + 48LL));
        if ( *((_BYTE *)a1 + 453) )
          goto LABEL_40;
        goto LABEL_61;
      }
      clear_tinfo_t();
    }
    v30 = sub_26A050();
    if ( v30 != (unsigned int)sub_26A050() )
    {
      *(_QWORD *)&v97 = 0;
      *(_QWORD *)&v97 = get_tinfo_property();
      if ( (get_tinfo_property() & 0xF) != 0xB )
      {
        clear_tinfo_t();
        sub_26DF30(v96);
        v63 = (get_tinfo_property() & 0xF) == 9;
        if ( v63 == ((get_tinfo_property() & 0xF) == 9) )
        {
          sub_246B40(v90, *a1, v96);
          *(_DWORD *)(v90 + 56) |= 0x20u;
        }
        else
        {
          *(_QWORD *)&v97 = 0;
          *(_QWORD *)&v97 = get_tinfo_property();
          v64 = get_tinfo_property();
          clear_tinfo_t();
          if ( (v64 & 0xF) != 0xB )
          {
            v65 = 4;
            if ( !*((_DWORD *)a1 + 110) && !*((_BYTE *)a1 + 453) )
              v65 = 6;
            v66 = get_tinfo_size();
            v90 = sub_2476A0(*a1, *(_QWORD *)v90, v90, 0, v96, v66, v65);
            *((_BYTE *)a1 + 453) = 1;
          }
        }
      }
      clear_tinfo_t();
    }
    if ( *((_BYTE *)a1 + 453) )
    {
LABEL_40:
      if ( *(_DWORD *)(a1[3] + 8LL) != 48 )
        goto LABEL_41;
      goto LABEL_74;
    }
LABEL_61:
    if ( (get_tinfo_property() & 0xF) != 0xA )
      goto LABEL_40;
    v96[0] = 0;
    v96[0] = get_tinfo_property();
    if ( (get_tinfo_property() & 0xF) != 0xB )
      goto LABEL_63;
    if ( (get_tinfo_property() & 0xF) != 0xB
      || *(_DWORD *)(a1[4] + 8LL) == 51
      || (v76 = *((_DWORD *)a1 + 109), v76 <= 0) )
    {
      v77 = get_tinfo_property();
      v78 = a1[4];
      if ( (v77 & 0xF) == 0xA )
      {
        sub_246B40(v90, *a1, (_QWORD *)(v78 + 48));
      }
      else if ( *(_DWORD *)(v78 + 8) == 51 )
      {
        sub_32C540(&v97, *(_QWORD *)(*a1 + 112LL), v78 + 48);
        sub_246B40(v90, *a1, &v97);
        clear_tinfo_t();
      }
      goto LABEL_63;
    }
    if ( v76 != get_tinfo_size() )
      v90 = sub_244320(*(_QWORD *)(*a1 + 112LL), v90, *((unsigned int *)a1 + 109), 0, v79, v80);
    if ( (get_tinfo_property() & 0xF) != 0xB || !sub_11CA80(*((_DWORD *)a1 + 109)) )
      goto LABEL_63;
    if ( (unsigned int)get_tinfo_property() == 1 )
    {
      v90 = sub_244320(*(_QWORD *)(*a1 + 112LL), v90, *((unsigned int *)a1 + 109), 0, v81, v82);
      *((_BYTE *)a1 + 453) = 1;
LABEL_63:
      clear_tinfo_t();
      goto LABEL_40;
    }
    if ( !under_debugger )
      sub_383060(51708);
LABEL_200:
    BUG();
  }
  if ( !*((_BYTE *)a1 + 453) )
    goto LABEL_61;
LABEL_74:
  if ( (get_tinfo_property() & 0xF) == 9 && (get_tinfo_property() & 0xF) == 0xA )
    sub_246B40(v90, *a1, (_QWORD *)(*a1 + 288LL));
LABEL_41:
  if ( *(_DWORD *)(v90 + 8) == 52 )
  {
    v43 = a1[2];
    v44 = *(_DWORD *)(v43 + 8) - 1;
    v45 = v44;
    if ( v44 > 0 )
    {
      v46 = *(_DWORD *)(v43 + 8) - 1;
      v47 = *(_QWORD *)v43 + 8LL * (unsigned int)v44;
      while ( *(_DWORD *)(*(_QWORD *)v47 + 8LL) == 51 )
      {
        v47 -= 8;
        if ( !--v46 )
          goto LABEL_129;
      }
      v45 = v44 - v46;
      if ( v44 - v46 <= 0 )
        return v90;
LABEL_129:
      v96[0] = 0;
      v62 = 0;
      copy_tinfo_t();
      do
      {
        *(_QWORD *)&v97 = 0;
        *(_QWORD *)&v97 = get_tinfo_property();
        copy_tinfo_t();
        ++v62;
        clear_tinfo_t();
      }
      while ( v62 != v45 );
      if ( !(unsigned __int8)sub_323990(
                               *(_QWORD *)(a1[1] + 64LL),
                               *(_QWORD *)(*(_QWORD *)a1[2] + 8LL * v46),
                               *(_QWORD *)(*(_QWORD *)a1[2] + 8LL * (v46 + 1)),
                               v96) )
      {
        sub_26DF30(&v97);
        sub_246B40(v90, *a1, &v97);
        clear_tinfo_t();
      }
      clear_tinfo_t();
    }
  }
  return v90;
}
