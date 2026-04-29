__int64 __fastcall sub_269840(__int64 a1, __int64 a2, char a3)
{
  int v5; // r14d
  __int64 v6; // rax
  char v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r14
  int v17; // edx
  int v18; // eax
  int v19; // edx
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rdi
  int v23; // r12d
  int v25; // r9d
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // r9d
  __int64 v36; // rdx
  int v37; // ecx
  int v38; // r14d
  int v39; // r12d
  __int64 v40; // rax
  __int64 v41; // rax
  char v42; // al
  char v43; // al
  __int64 v44; // r8
  int v45; // r11d
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdi
  char v50; // al
  __int64 v51; // rsi
  char v52; // al
  __int64 v53; // rsi
  __m128 v54; // xmm0
  int v55; // r13d
  __int64 v56; // rsi
  bool v57; // r12
  char v58; // r12
  char v59; // r12
  signed int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rdi
  char v63; // r14
  int v64; // eax
  int v65; // r14d
  __int64 v66; // rcx
  __int64 i; // rdi
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  char v71; // al
  __int64 v72; // rdx
  int v73; // eax
  char v74; // al
  __int64 v75; // rdx
  int v76; // r8d
  int v77; // r9d
  int v78; // r8d
  int v79; // r9d
  __int64 v80; // [rsp+0h] [rbp-F0h]
  char v81; // [rsp+16h] [rbp-DAh]
  char v82; // [rsp+17h] [rbp-D9h]
  __int64 v83; // [rsp+18h] [rbp-D8h]
  int tinfo_size; // [rsp+20h] [rbp-D0h]
  __int64 v85; // [rsp+28h] [rbp-C8h]
  __int64 v86; // [rsp+40h] [rbp-B0h]
  char v87; // [rsp+48h] [rbp-A8h]
  int v88; // [rsp+48h] [rbp-A8h]
  int v89; // [rsp+4Ch] [rbp-A4h]
  __int64 v90; // [rsp+58h] [rbp-98h]
  char v91; // [rsp+58h] [rbp-98h]
  _QWORD *v92; // [rsp+58h] [rbp-98h]
  __int64 v93; // [rsp+58h] [rbp-98h]
  __int64 tinfo_property; // [rsp+60h] [rbp-90h] BYREF
  __int64 v95; // [rsp+68h] [rbp-88h] BYREF
  __int64 v96; // [rsp+70h] [rbp-80h] BYREF
  __int64 v97; // [rsp+78h] [rbp-78h] BYREF
  _QWORD v98[2]; // [rsp+80h] [rbp-70h] BYREF
  __int128 v99; // [rsp+90h] [rbp-60h] BYREF
  __int64 v100; // [rsp+A0h] [rbp-50h] BYREF
  int v101; // [rsp+A8h] [rbp-48h]
  __int16 v102; // [rsp+ACh] [rbp-44h]
  unsigned __int64 v103; // [rsp+B8h] [rbp-38h]

  v90 = a2;
  v103 = __readfsqword(0x28u);
  v86 = *(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 96);
  if ( !(*(_QWORD *)(a1 + 64) | v86) )
    goto LABEL_32;
  if ( *(_DWORD *)(a1 + 440) || *(_BYTE *)(a1 + 453) )
  {
    v32 = sub_266EB0(a1, a2);
    *(_BYTE *)(a1 + 453) = 0;
    v90 = v32;
  }
  tinfo_property = 0;
  v83 = v90 + 48;
  tinfo_property = get_tinfo_property(*(_QWORD *)(v90 + 48), 13);
  tinfo_size = get_tinfo_size(0, tinfo_property, 0);
  v5 = tinfo_size;
  v6 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v6 + 8) != 48 )
    goto LABEL_5;
  v7 = *(_BYTE *)(a1 + 452);
  if ( v7 )
    goto LABEL_104;
  v25 = *(_DWORD *)(a1 + 436);
  if ( !v25 )
    v25 = get_tinfo_property(*(_QWORD *)(v6 + 48), 14);
  v26 = *(_QWORD *)(a1 + 56);
  v27 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(a1 + 450) == 1 && v25 <= tinfo_size && tinfo_size > 0 )
  {
    if ( 32 * v27 )
    {
      v69 = *(_QWORD *)(a1 + 56);
      while ( !(*(_QWORD *)(v69 + 24) % tinfo_size) )
      {
        v69 += 32;
        if ( v69 == v26 + 32 * v27 )
          goto LABEL_189;
      }
      if ( v25 <= 0 )
        goto LABEL_5;
      v30 = v26 + 32 * v27;
      v28 = v25;
LABEL_50:
      v31 = v26;
      while ( !(*(_QWORD *)(v31 + 24) % v28) )
      {
        v31 += 32;
        if ( v31 == v30 )
          goto LABEL_174;
      }
      goto LABEL_5;
    }
LABEL_189:
    if ( !(v86 % tinfo_size) )
      goto LABEL_5;
  }
  if ( v25 <= 0 )
    goto LABEL_5;
  v28 = v25;
  v29 = 32LL * *(_QWORD *)(a1 + 64);
  v30 = v26 + v29;
  if ( v29 )
    goto LABEL_50;
LABEL_174:
  if ( !(v86 % v28) )
  {
    if ( v25 != 1 )
    {
      for ( ; v30 != v26; *(_QWORD *)(v26 - 8) = v70 / v28 )
      {
        v70 = *(_QWORD *)(v26 + 24);
        v26 += 32;
      }
      v86 /= v28;
    }
    *(_BYTE *)(a1 + 451) = 1;
    v81 = 0;
    goto LABEL_14;
  }
LABEL_5:
  v7 = *(_BYTE *)(a1 + 451);
  if ( v7 )
  {
LABEL_104:
    v81 = 0;
    v7 = 0;
    goto LABEL_14;
  }
  v81 = 0;
  if ( !*(_BYTE *)(a1 + 452) )
  {
    v81 = a3 | (*(_DWORD *)(a1 + 436) == 0);
    if ( v81 )
    {
      if ( tinfo_size > 0 )
      {
        v8 = *(_QWORD *)(a1 + 56);
        v9 = 32LL * *(_QWORD *)(a1 + 64);
        v10 = v8 + v9;
        if ( v9 )
        {
          v11 = *(_QWORD *)(a1 + 56);
          while ( !(*(_QWORD *)(v11 + 24) % tinfo_size) )
          {
            v11 += 32;
            if ( v11 == v10 )
              goto LABEL_154;
          }
          v7 = 0;
        }
        else
        {
LABEL_154:
          v7 = 0;
          if ( !(v86 % tinfo_size) )
          {
            v7 = a3 | (*(_DWORD *)(a1 + 436) == 0);
            if ( tinfo_size != 1 )
            {
              for ( ; v8 != v10; *(_QWORD *)(v8 - 8) = v61 / tinfo_size )
              {
                v61 = *(_QWORD *)(v8 + 24);
                v8 += 32;
              }
              v86 /= tinfo_size;
              v7 = v81;
            }
          }
        }
      }
    }
  }
LABEL_14:
  v12 = *(_BYTE *)(a1 + 449) == 0;
  v95 = 0;
  v89 = 35;
  if ( !v12 )
    v89 = 6;
  v98[0] = 0;
  v80 = a1 + 144;
  v97 = 0;
  v99 = 0;
  copy_tinfo_t((char *)&v99 + 8, &v97);
  v100 = 0;
  copy_tinfo_t(&v100, v98);
  v101 = 0;
  v102 = 0;
  clear_tinfo_t(&v97);
  clear_tinfo_t(v98);
  get_tinfo_details(*(_QWORD *)(a1 + 144), 10, &v99);
  v82 = HIBYTE(v102) & 0x60;
  clear_tinfo_t(&v100);
  clear_tinfo_t((char *)&v99 + 8);
  clear_tinfo_t(&v99);
  v87 = *(_BYTE *)(a1 + 451);
  if ( !v87 && (v7 || (unsigned __int8)sub_325700(*(_QWORD *)a1, v83, *(_QWORD *)a1 + 200LL)) )
  {
    v85 = 0;
    v13 = v90;
    goto LABEL_19;
  }
  if ( *(_BYTE *)(a1 + 449) )
  {
    v47 = j__qalloc_or_throw(64);
    v48 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)v47 = -1;
    *(_DWORD *)(v47 + 8) = 0;
    *(_QWORD *)(v47 + 12) = -1;
    *(_QWORD *)(v47 + 48) = 0;
    *(_DWORD *)(v47 + 56) = 0;
    v85 = v47;
    sub_256770(v47, v48);
    v89 = 35;
  }
  else
  {
    v85 = 0;
  }
  v33 = j__qalloc_or_throw(64);
  *(_QWORD *)v33 = -1;
  v13 = v33;
  *(_DWORD *)(v33 + 8) = 48;
  *(_QWORD *)(v33 + 12) = -1;
  *(_QWORD *)(v33 + 32) = 0;
  *(_QWORD *)(v33 + 24) = v90;
  *(_QWORD *)(v33 + 40) = 0;
  *(_QWORD *)(v33 + 48) = 0;
  *(_DWORD *)(v33 + 56) = 1;
  if ( *(_BYTE *)(a1 + 451) )
  {
    copy_tinfo_t(v33 + 48, *(_QWORD *)(a1 + 24) + 48LL);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 56LL) & 0x20) != 0 )
      *(_DWORD *)(v13 + 56) |= 0x20u;
    sub_2696B0(v98, v13 + 48);
    v34 = *(_QWORD *)(v13 + 48);
    *(_QWORD *)(v13 + 48) = v98[0];
    v35 = *(_DWORD *)(a1 + 436);
    v98[0] = v34;
    if ( v35 )
    {
      sub_327610(&v99, *(_QWORD *)(*(_QWORD *)a1 + 112LL), v13 + 48);
      copy_tinfo_t(v13 + 48, &v99);
      clear_tinfo_t(&v99);
      sub_266D50((_QWORD *)(v13 + 48), v82);
    }
    clear_tinfo_t(v98);
    v87 = 0;
    goto LABEL_19;
  }
  copy_tinfo_t(&v95, v83);
  v43 = get_tinfo_property(*(_QWORD *)(a1 + 144), 2);
  if ( (v43 & 0x3E) == 0 || (v43 & 0xFu) > 8 )
    goto LABEL_93;
  v49 = *(_QWORD *)(a1 + 144);
  if ( !(_BYTE)v49 || (v49 & 0xE) == 0 && (v49 & 0x30) != 0 )
  {
LABEL_113:
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 112LL) + 84LL) != get_tinfo_size(0, v49, 0) )
      goto LABEL_114;
LABEL_93:
    if ( v81 )
    {
      v44 = 32LL * *(_QWORD *)(a1 + 64);
      if ( tinfo_size > 1 )
      {
        while ( (v5 & (v5 - 1)) == 0 )
        {
          v45 = v5 >> 1;
          if ( v5 <= 33 )
          {
            if ( v44 )
            {
              v46 = *(_QWORD *)(a1 + 56);
              while ( !(*(_QWORD *)(v46 + 24) % v45) )
              {
                v46 += 32;
                if ( v46 == *(_QWORD *)(a1 + 56) + v44 )
                  goto LABEL_139;
              }
            }
            else
            {
LABEL_139:
              if ( !((int)v86 % (__int64)v45) )
              {
                if ( v45 == 1 )
                  break;
                v88 = v5 >> 1;
                v92 = (_QWORD *)(v13 + 48);
                if ( (get_tinfo_property(*(_QWORD *)(a1 + 144), 2) & 0xF) == 0xA )
                {
                  v62 = *(_QWORD *)(a1 + 144);
                  *(_QWORD *)&v99 = 0;
                  *(_QWORD *)&v99 = get_tinfo_property(v62, 9);
                  v63 = get_tinfo_property(v99, 2);
                  clear_tinfo_t(&v99);
                  v92 = (_QWORD *)(v13 + 48);
                  if ( (v63 & 0x3F) != 1 )
                  {
                    v64 = get_tinfo_property(*(_QWORD *)(a1 + 144), 14);
                    v65 = v64;
                    if ( v64 <= 1 )
                      break;
                    v92 = (_QWORD *)(v13 + 48);
                    if ( !(v88 % v64) )
                    {
                      copy_tinfo_t(v13 + 48, v80);
                      v66 = *(_QWORD *)(a1 + 56);
                      for ( i = v66 + 32LL * *(_QWORD *)(a1 + 64); i != v66; *(_QWORD *)(v66 - 8) = v68 / v65 )
                      {
                        v68 = *(_QWORD *)(v66 + 24);
                        v66 += 32;
                      }
                      v86 /= v65;
                    }
                  }
                }
                goto LABEL_142;
              }
            }
          }
          if ( v45 == 1 )
            break;
          v5 >>= 1;
        }
      }
    }
    v92 = (_QWORD *)(v13 + 48);
    goto LABEL_142;
  }
  *(_QWORD *)&v99 = 0;
  *(_QWORD *)&v99 = get_tinfo_property(v49, 9);
  v91 = get_tinfo_property(v99, 2);
  clear_tinfo_t(&v99);
  if ( (v91 & 0x3F) == 0x30 )
  {
    v49 = *(_QWORD *)(a1 + 144);
    goto LABEL_113;
  }
LABEL_114:
  v92 = (_QWORD *)(v13 + 48);
  copy_tinfo_t(v13 + 48, v80);
  clear_tinfo_t(&v95);
LABEL_142:
  if ( !*(_BYTE *)(v13 + 48) )
  {
    v56 = *(_QWORD *)a1 + 200LL;
    if ( *(_BYTE *)(a1 + 450) )
      v56 = *(_QWORD *)a1 + 216LL;
    copy_tinfo_t(v92, v56);
    sub_266D50(v92, v82);
  }
  set_tinfo_property(v92, 6, 192);
  *(_DWORD *)(v13 + 56) |= 0x20u;
  v87 = 1;
LABEL_19:
  v14 = sub_2693F0(a1, v86);
  if ( v14 )
  {
    if ( (unsigned __int8)sub_266500(*(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL), v14, v89) )
    {
      if ( v89 != 35 )
      {
        v89 = 7;
LABEL_25:
        v15 = j__qalloc_or_throw(64);
        *(_QWORD *)(v15 + 32) = v14;
        v16 = v15;
        *(_QWORD *)v15 = -1;
        *(_DWORD *)(v15 + 8) = v89;
        *(_QWORD *)(v15 + 12) = -1;
        *(_QWORD *)(v15 + 24) = v13;
        *(_QWORD *)(v15 + 40) = 0;
        *(_QWORD *)(v15 + 48) = 0;
        *(_DWORD *)(v15 + 56) = 0;
        sub_23F940(v15, *(_QWORD *)(*(_QWORD *)a1 + 112LL), 0);
        v13 = v16;
        v17 = *(_DWORD *)(v16 + 56);
        v18 = v17 | 0x21;
        v19 = v17 | 1;
        if ( !v87 )
          v18 = v19;
        *(_DWORD *)(v16 + 56) = v18;
        goto LABEL_28;
      }
    }
    else
    {
      if ( v89 != 35 )
      {
        v89 = 6;
        goto LABEL_25;
      }
      if ( (unsigned int)(*(_DWORD *)(v14 + 8) - 35) > 1
        || !(unsigned __int8)sub_266500(
                               *(_QWORD *)a1,
                               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
                               *(_QWORD *)(v14 + 24),
                               35) )
      {
        goto LABEL_25;
      }
      v52 = get_tinfo_property(*(_QWORD *)(v13 + 48), 2);
      if ( (v52 & 0x3E) != 0
        && (v52 & 0xFu) <= 8
        && (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v14 + 24) + 48LL), 2) & 0xF) == 0xA )
      {
        v53 = *(_QWORD *)a1 + 200LL;
        if ( *(_BYTE *)(a1 + 450) )
          v53 = *(_QWORD *)a1 + 216LL;
        copy_tinfo_t(v13 + 48, v53);
        sub_266D50((_QWORD *)(v13 + 48), v82);
      }
      v93 = j__qalloc_or_throw(64);
      v13 = v93;
      v54 = _mm_loadh_ps((const double *)(v14 + 24));
      *(_QWORD *)v93 = -1;
      *(_DWORD *)(v93 + 8) = 36;
      *(_QWORD *)(v93 + 12) = -1;
      *(_QWORD *)(v93 + 40) = 0;
      *(_QWORD *)(v93 + 48) = 0;
      *(_DWORD *)(v93 + 56) = 0;
      *(__m128 *)(v93 + 24) = v54;
      v89 = *(_DWORD *)(v14 + 8);
      sub_250FD0((__int64 *)v14, *(_QWORD *)(v14 + 32));
      sub_23F940(v93, *(_QWORD *)(*(_QWORD *)a1 + 112LL), 0);
      *(_DWORD *)(v93 + 56) |= 1u;
      if ( v89 != 36 )
      {
        v13 = v93;
        goto LABEL_25;
      }
    }
    v50 = get_tinfo_property(*(_QWORD *)(v13 + 48), 2);
    if ( (v50 & 0x3E) != 0 && (v50 & 0xFu) <= 8 && (get_tinfo_property(*(_QWORD *)(v14 + 48), 2) & 0xF) == 0xA )
    {
      if ( !(unsigned __int8)compare_tinfo(*(_QWORD *)(v13 + 48), *(_QWORD *)(a1 + 144), 1) )
      {
        if ( !under_debugger )
          sub_37E160(52124);
        goto LABEL_207;
      }
      if ( (unsigned int)get_tinfo_property(*(_QWORD *)(v14 + 48), 14) != 1 )
      {
        if ( !under_debugger )
          sub_37E160(52125);
        goto LABEL_207;
      }
      v51 = *(_QWORD *)a1 + 200LL;
      if ( *(_BYTE *)(a1 + 450) )
        v51 = *(_QWORD *)a1 + 216LL;
      copy_tinfo_t(v13 + 48, v51);
      sub_266D50((_QWORD *)(v13 + 48), v82);
    }
    v89 = 36;
    goto LABEL_25;
  }
LABEL_28:
  if ( (_BYTE)v95 )
  {
    if ( (get_tinfo_property(tinfo_property, 2) & 0xF) == 0xB
      && (get_tinfo_property(*(_QWORD *)(a1 + 144), 2) & 0xF) == 0xA )
    {
      copy_tinfo_t(&v95, v80);
      set_tinfo_property(&v95, 6, 192);
    }
    else
    {
      v98[0] = 0;
      v98[1] = 0;
      if ( (unsigned __int8)get_tinfo_details(v95, 11, v98) )
      {
        v96 = 0;
        v97 = 0;
        v99 = 0;
        copy_tinfo_t((char *)&v99 + 8, &v97);
        v100 = 0;
        copy_tinfo_t(&v100, &v96);
        v101 = 0;
        v102 = 0;
        clear_tinfo_t(&v97);
        clear_tinfo_t(&v96);
        v41 = v99;
        *(_QWORD *)&v99 = v98[0];
        v98[0] = v41;
        create_tinfo(&v95, 10, 10, &v99);
        clear_tinfo_t(&v100);
        clear_tinfo_t((char *)&v99 + 8);
        clear_tinfo_t(&v99);
      }
      clear_tinfo_t(v98);
    }
    v42 = sub_2422C0(v13, *(_QWORD *)a1, &v95);
    if ( v87 && v42 )
      *(_DWORD *)(v13 + 56) |= 0x20u;
  }
  if ( v85 )
  {
    v90 = j__qalloc_or_throw(64);
    *(_QWORD *)v90 = -1;
    *(_DWORD *)(v90 + 8) = 2;
    *(_QWORD *)(v90 + 12) = -1;
    *(_QWORD *)(v90 + 24) = v85;
    *(_QWORD *)(v90 + 32) = v13;
    *(_QWORD *)(v90 + 40) = 0;
    *(_QWORD *)(v90 + 48) = 0;
    *(_DWORD *)(v90 + 56) = 0;
    sub_23F940(v90, *(_QWORD *)(*(_QWORD *)a1 + 112LL), 0);
    *(_DWORD *)(v90 + 56) |= 1u;
  }
  else
  {
    v90 = v13;
  }
  clear_tinfo_t(&v95);
  clear_tinfo_t(&tinfo_property);
LABEL_32:
  if ( !*(_DWORD *)(a1 + 436) && (*(_DWORD *)(a1 + 440) || *(_BYTE *)(a1 + 453)) )
    v90 = sub_266EB0(a1, v90);
  v20 = *(_QWORD *)(a1 + 24);
  v21 = *(_DWORD *)(v20 + 8);
  if ( v21 != 48 )
  {
    v22 = *(_QWORD *)(a1 + 32);
    if ( v21 == 57 && v20 && v22 == *(_QWORD *)(v20 + 24) )
    {
      if ( !get_tinfo_property(*(_QWORD *)(v90 + 48), 6) )
        goto LABEL_58;
      *(_QWORD *)&v99 = 0;
      *(_QWORD *)&v99 = get_tinfo_property(*(_QWORD *)(v90 + 48), 9);
      if ( (unsigned int)verify_tinfo(v99) )
      {
        clear_tinfo_t(&v99);
LABEL_58:
        if ( !get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL), 6)
          || (unsigned int)verify_tinfo(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL)) )
        {
          if ( !under_debugger )
            sub_37E160(52694);
          goto LABEL_207;
        }
        sub_2422C0(v90, *(_QWORD *)a1, (_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL));
        if ( *(_BYTE *)(a1 + 453) )
          goto LABEL_40;
        goto LABEL_61;
      }
      clear_tinfo_t(&v99);
      v22 = *(_QWORD *)(a1 + 32);
    }
    v23 = sub_2657D0((_QWORD *)(v22 + 48));
    if ( v23 != (unsigned int)sub_2657D0((_QWORD *)(v90 + 48)) )
    {
      *(_QWORD *)&v99 = 0;
      *(_QWORD *)&v99 = get_tinfo_property(*(_QWORD *)(v90 + 48), 9);
      if ( (get_tinfo_property(v99, 2) & 0xF) == 0xB )
      {
        clear_tinfo_t(&v99);
      }
      else
      {
        clear_tinfo_t(&v99);
        sub_2696B0(v98, *(_QWORD *)(a1 + 32) + 48LL);
        v57 = (get_tinfo_property(*(_QWORD *)(v90 + 48), 2) & 0xF) == 9;
        if ( v57 == ((get_tinfo_property(v98[0], 2) & 0xF) == 9) )
        {
          sub_2422C0(v90, *(_QWORD *)a1, v98);
          *(_DWORD *)(v90 + 56) |= 0x20u;
        }
        else
        {
          *(_QWORD *)&v99 = 0;
          *(_QWORD *)&v99 = get_tinfo_property(*(_QWORD *)(v90 + 48), 9);
          v58 = get_tinfo_property(v99, 2);
          clear_tinfo_t(&v99);
          if ( (v58 & 0xF) != 0xB )
          {
            v59 = 4;
            if ( !*(_DWORD *)(a1 + 440) && !*(_BYTE *)(a1 + 453) )
              v59 = 6;
            v60 = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL), 0);
            v90 = sub_242E20(*(_QWORD *)a1, *(_QWORD *)v90, v90, 0, v98, v60, v59);
            *(_BYTE *)(a1 + 453) = 1;
          }
        }
        clear_tinfo_t(v98);
      }
    }
    if ( *(_BYTE *)(a1 + 453) )
    {
LABEL_40:
      v20 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)(v20 + 8) != 48 )
        goto LABEL_41;
      goto LABEL_74;
    }
LABEL_61:
    if ( (get_tinfo_property(*(_QWORD *)(v90 + 48), 2) & 0xF) != 0xA )
      goto LABEL_40;
    v98[0] = 0;
    v98[0] = get_tinfo_property(*(_QWORD *)(v90 + 48), 9);
    if ( (get_tinfo_property(v98[0], 2) & 0xF) != 0xB )
      goto LABEL_63;
    v71 = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL), 2);
    v72 = *(_QWORD *)(a1 + 32);
    if ( (v71 & 0xF) != 0xB || *(_DWORD *)(v72 + 8) == 51 || (v73 = *(_DWORD *)(a1 + 436), v73 <= 0) )
    {
      v74 = get_tinfo_property(*(_QWORD *)(v72 + 48), 2);
      v75 = *(_QWORD *)(a1 + 32);
      if ( (v74 & 0xF) == 0xA )
      {
        sub_2422C0(v90, *(_QWORD *)a1, (_QWORD *)(v75 + 48));
      }
      else if ( *(_DWORD *)(v75 + 8) == 51 )
      {
        sub_327610(&v99, *(_QWORD *)(*(_QWORD *)a1 + 112LL), v75 + 48);
        sub_2422C0(v90, *(_QWORD *)a1, &v99);
        clear_tinfo_t(&v99);
      }
      goto LABEL_63;
    }
    if ( v73 != get_tinfo_size(0, *(_QWORD *)(v90 + 48), 0) )
      v90 = sub_23FAA0(*(_QWORD *)(*(_QWORD *)a1 + 112LL), v90, *(_DWORD *)(a1 + 436), 0, v76, v77);
    if ( (get_tinfo_property(*(_QWORD *)(v90 + 48), 2) & 0xF) != 0xB || !sub_118880(*(_DWORD *)(a1 + 436)) )
      goto LABEL_63;
    if ( (unsigned int)get_tinfo_property(*(_QWORD *)(v90 + 48), 12) == 1 )
    {
      v90 = sub_23FAA0(*(_QWORD *)(*(_QWORD *)a1 + 112LL), v90, *(_DWORD *)(a1 + 436), 0, v78, v79);
      *(_BYTE *)(a1 + 453) = 1;
LABEL_63:
      clear_tinfo_t(v98);
      goto LABEL_40;
    }
    if ( !under_debugger )
      sub_37E160(51708);
LABEL_207:
    BUG();
  }
  if ( !*(_BYTE *)(a1 + 453) )
    goto LABEL_61;
LABEL_74:
  if ( (get_tinfo_property(*(_QWORD *)(v20 + 48), 2) & 0xF) == 9
    && (get_tinfo_property(*(_QWORD *)(v90 + 48), 2) & 0xF) == 0xA )
  {
    sub_2422C0(v90, *(_QWORD *)a1, (_QWORD *)(*(_QWORD *)a1 + 288LL));
  }
LABEL_41:
  if ( *(_DWORD *)(v90 + 8) == 52 )
  {
    v36 = *(_QWORD *)(a1 + 16);
    v37 = *(_DWORD *)(v36 + 8) - 1;
    v38 = v37;
    if ( v37 > 0 )
    {
      v39 = *(_DWORD *)(v36 + 8) - 1;
      v40 = *(_QWORD *)v36 + 8LL * (unsigned int)v37;
      while ( *(_DWORD *)(*(_QWORD *)v40 + 8LL) == 51 )
      {
        v40 -= 8;
        if ( !--v39 )
          goto LABEL_134;
      }
      v38 = v37 - v39;
      if ( v37 - v39 <= 0 )
        return v90;
LABEL_134:
      v98[0] = 0;
      v55 = 0;
      copy_tinfo_t(v98, v90 + 48);
      do
      {
        *(_QWORD *)&v99 = 0;
        *(_QWORD *)&v99 = get_tinfo_property(v98[0], 9);
        copy_tinfo_t(v98, &v99);
        ++v55;
        clear_tinfo_t(&v99);
      }
      while ( v55 != v38 );
      if ( !(unsigned __int8)sub_31EC10(
                               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
                               *(_QWORD *)(**(_QWORD **)(a1 + 16) + 8LL * v39),
                               *(_QWORD *)(**(_QWORD **)(a1 + 16) + 8LL * (v39 + 1)),
                               v98) )
      {
        sub_2696B0(&v99, *(_QWORD *)(a1 + 32) + 48LL);
        sub_2422C0(v90, *(_QWORD *)a1, &v99);
        clear_tinfo_t(&v99);
      }
      clear_tinfo_t(v98);
    }
  }
  return v90;
}
