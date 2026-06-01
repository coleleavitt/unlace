__int64 __fastcall sub_582430(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int *v3; // rax
  unsigned int *v4; // r13
  unsigned int v5; // edx
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // r12d
  unsigned int v12; // eax
  char v13; // r13
  int v14; // eax
  unsigned int *v15; // rax
  unsigned int v16; // eax
  unsigned __int64 v17; // r14
  unsigned int v18; // eax
  unsigned int v19; // ebp
  unsigned int v20; // r12d
  int byte; // eax
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // r8d
  unsigned __int64 v26; // rdx
  char v27; // cl
  unsigned int v28; // eax
  char v29; // bp
  unsigned int v30; // r13d
  size_t v31; // r12
  unsigned int v32; // r14d
  _BYTE *v33; // rdi
  _BYTE *v34; // rax
  __int64 v35; // rsi
  _BYTE *v36; // rax
  bool v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  _BYTE *v40; // rax
  unsigned int v41; // eax
  unsigned int v42; // r12d
  unsigned int v43; // r13d
  unsigned int v44; // r8d
  char v45; // al
  unsigned __int64 v46; // rdx
  unsigned int v47; // r8d
  unsigned int v48; // eax
  __int64 v49; // rax
  int bytes; // eax
  void *v51; // rdi
  char v52; // r9
  int v53; // r12d
  unsigned int v54; // r14d
  unsigned __int8 *v55; // rbx
  unsigned __int8 v56; // al
  int v57; // r13d
  unsigned int v58; // r13d
  unsigned int v59; // eax
  int v60; // eax
  char v61; // r12
  unsigned __int8 v62; // al
  int v63; // ebx
  unsigned int v64; // eax
  char v65; // r9
  unsigned int v66; // eax
  char v67; // cl
  unsigned int v68; // eax
  unsigned int v69; // r13d
  char v70; // r12
  unsigned __int64 v71; // rdx
  unsigned int v72; // r12d
  int v73; // eax
  char v74; // r9
  unsigned int v75; // eax
  __int64 v76; // rbp
  unsigned int v77; // [rsp+0h] [rbp-168h]
  unsigned int v78; // [rsp+4h] [rbp-164h]
  unsigned int v79; // [rsp+8h] [rbp-160h]
  unsigned int v80; // [rsp+8h] [rbp-160h]
  char v81; // [rsp+8h] [rbp-160h]
  void *v82; // [rsp+8h] [rbp-160h]
  char v83; // [rsp+8h] [rbp-160h]
  char v84; // [rsp+8h] [rbp-160h]
  char v85; // [rsp+8h] [rbp-160h]
  unsigned int ptr; // [rsp+10h] [rbp-158h]
  unsigned int ptra; // [rsp+10h] [rbp-158h]
  char v88; // [rsp+18h] [rbp-150h]
  unsigned int v89; // [rsp+18h] [rbp-150h]
  bool v90; // [rsp+20h] [rbp-148h]
  unsigned __int64 v91; // [rsp+20h] [rbp-148h]
  int v92; // [rsp+20h] [rbp-148h]
  unsigned int v93; // [rsp+28h] [rbp-140h]
  unsigned int v94; // [rsp+28h] [rbp-140h]
  char v95; // [rsp+28h] [rbp-140h]
  char v96; // [rsp+28h] [rbp-140h]
  char v97; // [rsp+2Fh] [rbp-139h]
  void *flags_by_size; // [rsp+30h] [rbp-138h]
  unsigned __int64 v99; // [rsp+38h] [rbp-130h]
  unsigned __int64 v100; // [rsp+38h] [rbp-130h]
  unsigned int v101; // [rsp+38h] [rbp-130h]
  char v102; // [rsp+40h] [rbp-128h]
  __int64 v103; // [rsp+48h] [rbp-120h]
  int v104; // [rsp+50h] [rbp-118h]
  unsigned __int8 *v105; // [rsp+58h] [rbp-110h]
  _QWORD v106[4]; // [rsp+60h] [rbp-108h] BYREF
  int v107[4]; // [rsp+80h] [rbp-E8h] BYREF
  int v108[2]; // [rsp+90h] [rbp-D8h]
  int v109[2]; // [rsp+98h] [rbp-D0h]
  _BYTE s2[64]; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE s1[72]; // [rsp+E0h] [rbp-88h] BYREF
  unsigned __int64 v112; // [rsp+128h] [rbp-40h]

  v2 = (__int64)a1;
  v77 = a2;
  v112 = __readfsqword(0x28u);
  v3 = sub_4EE820((__int64)(a1 + 194), a2);
  if ( !v3 )
  {
    v15 = sub_4EE960((__int64)(a1 + 194), a2);
    v5 = -1;
    if ( v15 )
      v5 = *v15;
    goto LABEL_5;
  }
  v4 = v3;
  if ( (v3[6] & 0x18) == 8 || (unsigned __int8)is_spec_ea((unsigned int)a2) )
  {
    v5 = v4[1];
LABEL_5:
    sub_39F720((__int64)a1, a2, v5, 0xC8u);
    return 0;
  }
  v7 = sub_3B9AA0((__int64)a1, a2, 4);
  if ( (sub_614FB0(*a1, 10) & 0x80000) != 0 )
  {
    v106[0] = 0;
    v106[1] = 0xFFFFFFFF00000000LL;
    v106[2] = 0;
    if ( (unsigned __int8)get_fixup(v106, (unsigned int)a2) )
    {
      if ( LOWORD(v106[0]) == 2 )
      {
        v72 = a2 - 2;
        if ( (sub_3B9AA0((__int64)a1, (int)a2 - 2, 4) & 0x600) == 0 )
        {
          a2 = v72;
          if ( (unsigned __int8)sub_409D00((__int64)a1, v72, v77, 0, 0) )
            return (unsigned int)get_item_end(v77, a2, v8, v9) - v77;
        }
      }
      a2 = v77;
      if ( (unsigned __int8)sub_409D00((__int64)a1, v77, v77, 0, 0) )
        return (unsigned int)get_item_end(v77, a2, v8, v9) - v77;
    }
    else if ( (unsigned __int8)get_fixup(v106, (unsigned int)(a2 + 2)) )
    {
      if ( LOWORD(v106[0]) == 2 )
      {
        a2 = (unsigned int)a2;
        if ( (unsigned __int8)sub_409D00((__int64)a1, a2, (int)a2 + 2, 0, 0) )
          return (unsigned int)get_item_end(v77, a2, v8, v9) - v77;
      }
    }
  }
  v78 = 1;
  if ( (unsigned __int8)sub_3FD000(a1, 0xFFFFFFFF, v77, v7, 1u) )
    return v78;
  v10 = sub_375980(0x1Bu, v77);
  if ( v10 )
    return v10;
  if ( a1[152] != a1[154] || v77 < *((_DWORD *)a1 + 310) || (v11 = *((_DWORD *)a1 + 311), v77 >= v11) )
  {
    v12 = sub_3BD290((__int64)a1, v77, 15);
    *((_DWORD *)a1 + 310) = v77;
    *((_DWORD *)a1 + 311) = v12;
    v11 = v12;
    a1[154] = a1[152];
  }
  v13 = *((_BYTE *)v4 + 96);
  v14 = sub_614FB0(*a1, 10);
  if ( v13 == 2 )
  {
    if ( (v14 & 0x40000000) == 0 )
      goto LABEL_22;
    v78 = v11 - v77;
    sub_3B9CB0((__int64)a1, v106, v77);
    v96 = v106[0];
    if ( LOBYTE(v106[0]) )
    {
      v73 = is_align_insn(v77);
      v17 = v73;
      if ( v73 )
      {
        v99 = v78;
        if ( v78 >= (unsigned __int64)v73 )
        {
          if ( v73 == 1 && v78 != 1 )
          {
            v76 = 1;
            while ( 1 )
            {
              sub_3B9CB0((__int64)a1, v106, v77 + v76);
              if ( v96 != LOBYTE(v106[0]) )
                break;
              if ( v78 == ++v76 )
              {
                flags_by_size = (void *)get_flags_by_size(1);
                if ( !flags_by_size )
                  flags_by_size = elf_gnu_hash_indexes + 344;
LABEL_41:
                v19 = v77;
                while ( 2 )
                {
                  v97 = sub_3BB2F0(v2, v19);
                  v25 = v19 + v78;
                  if ( !v97 )
                    goto LABEL_42;
                  if ( v17 <= 0x40 )
                  {
                    v69 = v19 + v78;
                    v70 = 0;
                    v100 = v78;
LABEL_134:
                    while ( 1 )
                    {
                      s2[0] = 0;
                      if ( v100 >= v17 && v19 < v69 )
                        break;
                      if ( v17 <= 1 )
                        goto LABEL_129;
                      v17 >>= 1;
                      flags_by_size = (void *)get_flags_by_size(v17);
                      if ( !(unsigned __int8)sub_3BB2F0(v2, v19) )
                      {
                        v97 = v70;
                        v25 = v69;
                        goto LABEL_42;
                      }
                    }
                    v27 = v70;
                    v25 = v69;
                    LODWORD(v71) = 512;
                    if ( v100 / v17 <= 0x200 )
                      v71 = v100 / v17;
                    ptr = v71;
                  }
                  else
                  {
                    s2[0] = 0;
                    v100 = v78;
                    LODWORD(v26) = 512;
                    if ( v78 / v17 <= 0x200 )
                      v26 = v78 / v17;
                    ptr = v26;
                    if ( v19 >= v25 || v78 < v17 )
                    {
LABEL_129:
                      if ( !under_debugger )
                        interr(1199);
                      BUG();
                    }
                    flags_by_size = elf_gnu_hash_indexes + 344;
                    v27 = 0;
                    v17 = 1;
                  }
                  v28 = v19;
                  v93 = v19;
                  v90 = v17 > 1;
                  v29 = v17;
                  v30 = 0;
                  v102 = v27;
                  v31 = v17;
                  v32 = v28;
                  v79 = v25;
                  while ( 2 )
                  {
                    if ( sub_3BAE00((_QWORD *)v2, s1, v31, v32, 0, 0) != v31 )
                    {
                      v66 = v32;
                      v19 = v93;
                      v44 = v79;
                      v17 = v31;
                      v67 = v97;
                      v42 = v30;
                      v43 = v66;
                      goto LABEL_127;
                    }
                    if ( v93 != v32 && *(_QWORD *)(*(_QWORD *)(v2 + 32) + 152LL) && !memcmp(s1, s2, v31) )
                      goto LABEL_68;
                    v36 = s2;
                    v37 = v90 && v30 != 0;
                    if ( !v37 )
                    {
                      ++v30;
                      v33 = s2;
                      v34 = s1;
                      if ( (unsigned int)v31 >= 8 )
                        goto LABEL_76;
                      goto LABEL_62;
                    }
                    do
                    {
                      if ( &s2[v31] == v36 )
                      {
                        v40 = s1;
                        do
                        {
                          if ( v40 == &s1[v31] )
                            goto LABEL_61;
                          ++v40;
                        }
                        while ( !*(v40 - 1) );
                        v19 = v93;
                        v41 = v32;
                        v17 = v31;
                        v42 = v30;
                        v43 = v41;
                        v44 = v79;
                        v94 = v41 - v93;
                        if ( !v94 )
                          goto LABEL_85;
                        goto LABEL_91;
                      }
                      ++v36;
                    }
                    while ( !*(v36 - 1) );
LABEL_61:
                    ++v30;
                    v33 = s2;
                    v34 = s1;
                    if ( (unsigned int)v31 < 8 )
                      goto LABEL_62;
LABEL_76:
                    LODWORD(v38) = 0;
                    do
                    {
                      v39 = (unsigned int)v38;
                      v38 = (unsigned int)(v38 + 8);
                      *(_QWORD *)&s2[v39] = *(_QWORD *)&s1[v39];
                    }
                    while ( (unsigned int)v38 < (v31 & 0xFFFFFFF8) );
                    v33 = &s2[v38];
                    v34 = &s1[v38];
LABEL_62:
                    v35 = 0;
                    if ( (v29 & 4) != 0 )
                    {
                      *(_DWORD *)v33 = *(_DWORD *)v34;
                      v35 = 4;
                    }
                    if ( (v29 & 2) != 0 )
                    {
                      *(_WORD *)&v33[v35] = *(_WORD *)&v34[v35];
                      v35 += 2;
                    }
                    if ( (v29 & 1) != 0 )
                      v33[v35] = v34[v35];
LABEL_68:
                    v32 += v31;
                    if ( v32 < v79 && v30 < ptr )
                      continue;
                    break;
                  }
                  v68 = v32;
                  v67 = v102;
                  v17 = v31;
                  v19 = v93;
                  v42 = v30;
                  v44 = v79;
                  v43 = v68;
LABEL_127:
                  v37 = v67;
                  v94 = v43 - v19;
                  if ( v43 == v19 )
                  {
                    if ( v17 <= 1 )
                      goto LABEL_129;
LABEL_85:
                    v17 >>= 1;
                    v80 = v44;
                    v95 = v37;
                    flags_by_size = (void *)get_flags_by_size(v17);
                    v45 = sub_3BB2F0(v2, v19);
                    v25 = v80;
                    if ( v45 )
                    {
                      v70 = v95;
                      v69 = v80;
                      goto LABEL_134;
                    }
                    v97 = v95;
LABEL_42:
                    v20 = v78;
                    if ( v19 < v25 )
                    {
                      byte = find_byte(v19 + 1, v78 - 1, 0, 4);
                      if ( byte != -1 )
                      {
                        v22 = byte - v19;
                        v20 = byte - v19;
                        if ( v22 == v22 % v17 )
                        {
                          v97 = 1;
                          v17 = 1;
                          flags_by_size = elf_gnu_hash_indexes + 344;
                        }
                        else
                        {
                          v20 = v22 - v22 % v17;
                        }
                      }
                    }
                    v23 = *(_QWORD *)(v2 + 32);
                    if ( !*(_QWORD *)(v23 + 160) && !*(_QWORD *)(v23 + 152) )
                    {
                      LODWORD(v46) = 512;
                      if ( v20 / v17 <= 0x200 )
                        v46 = v20 / v17;
                      v20 = v17 * v46;
                    }
                    goto LABEL_47;
                  }
LABEL_91:
                  v47 = v44 - v43;
                  v81 = v37;
                  v48 = 0;
                  if ( v42 >= ptr )
                    v48 = v47;
                  ptra = v48;
                  if ( v94 - 17 > 0xFFEF )
                    goto LABEL_123;
                  v49 = qalloc(v94);
                  if ( !v49 )
                    goto LABEL_123;
                  v88 = v81;
                  v82 = (void *)v49;
                  bytes = get_bytes(v49, v94, v19, 0, 0);
                  v51 = v82;
                  v52 = v88;
                  if ( bytes <= 0 )
                  {
LABEL_122:
                    v81 = v52;
                    qfree(v51);
LABEL_123:
                    v64 = sub_5820A0((__int64 *)v2, v19, v94, v77);
                    v65 = v81;
                    v20 = v64;
                    goto LABEL_124;
                  }
                  v91 = v17;
                  v53 = -1;
                  v103 = v2;
                  v54 = v19 + bytes;
                  v55 = (unsigned __int8 *)v82;
                  v105 = (unsigned __int8 *)v82;
                  v83 = 0;
                  v101 = v19;
                  v104 = bytes;
LABEL_103:
                  v56 = *v55;
                  if ( *v55 )
                  {
                    if ( (v56 & 0x80u) == 0 )
                    {
                      v57 = v56;
                      if ( (unsigned __int8)is_valid_cp(v56, 1, 0) )
                      {
                        if ( v53 == -1 )
                        {
                          v83 = 0;
                          v53 = v19;
                        }
                        v83 |= isalnum(v57) != 0;
LABEL_102:
                        ++v19;
                        ++v55;
                        if ( v19 == v54 )
                        {
                          v58 = v19;
                          v52 = v88;
                          v17 = v91;
                          v19 = v101;
                          v2 = v103;
                          if ( v53 == -1 )
                            goto LABEL_122;
                          if ( v77 == v53 )
                            goto LABEL_122;
                          v59 = ptra;
                          if ( !ptra || v94 != v104 )
                            goto LABEL_122;
                          if ( ptra > v94 )
                            v59 = v94;
                          v60 = get_bytes(v51, v59, v58, 0, 0);
                          v52 = v88;
                          if ( v60 <= 0 )
                            goto LABEL_122;
                          v89 = v58 + v60;
                          v92 = v53;
                          v61 = v52;
                          while ( 1 )
                          {
                            v62 = *v105;
                            if ( !*v105 )
                              break;
                            if ( (v62 & 0x80u) == 0 )
                            {
                              v63 = v62;
                              if ( (unsigned __int8)is_valid_cp(v62, 1, 0) )
                              {
                                ++v105;
                                ++v58;
                                v83 |= isalnum(v63) != 0;
                                if ( v89 != v58 )
                                  continue;
                              }
                            }
                            v2 = v103;
                            v52 = v61;
                            goto LABEL_122;
                          }
                          v52 = v61;
                          v2 = v103;
                          if ( v58 - v92 <= 0x10 || !v83 )
                            goto LABEL_122;
                          v85 = v61;
                          v20 = v92 - v101;
                          qfree(v51);
                          v74 = v85;
LABEL_159:
                          v84 = v74;
                          v75 = sub_5820A0((__int64 *)v2, v19, v94, v77);
                          v65 = v84;
                          if ( v20 < v75 )
                            goto LABEL_47;
                          v20 = v75;
LABEL_124:
                          if ( v20 == -1 )
                          {
                            v97 = v65;
                            v20 = v94;
                          }
LABEL_47:
                          remember_problem(13, v19, 0);
                          *(_OWORD *)v107 = 0;
                          *(_QWORD *)v108 = 0;
                          *(_QWORD *)v109 = 0;
                          sub_3CE970((__int64 *)v2, v19, flags_by_size, v20, -1, (const __m128i *)v107);
                          if ( *(_QWORD *)v108 )
                            (*(void (__fastcall **)(int *, int *, __int64))v108)(v107, v107, 3);
                          v24 = *(_QWORD *)(v2 + 1216);
                          if ( v24 == *(_QWORD *)(v2 + 1232) + v20 )
                          {
                            *(_QWORD *)(v2 + 1232) = v24;
                            *(_DWORD *)(v2 + 1240) = v20 + v19;
                          }
                          if ( v97 )
                            return v19 - v77;
                          v19 += v20;
                          v78 -= v20;
                          if ( !v78 )
                            return v19 - v77;
                          continue;
                        }
                        goto LABEL_103;
                      }
                    }
                  }
                  else if ( v53 != -1 && v77 != v53 && v19 - v53 > 0x10 && v83 )
                  {
                    v19 = v101;
                    v17 = v91;
                    v2 = v103;
                    qfree(v51);
                    v74 = v88;
                    v20 = v53 - v101;
                    goto LABEL_159;
                  }
                  break;
                }
                v53 = -1;
                goto LABEL_102;
              }
            }
            LODWORD(v17) = v76;
          }
          v78 = v17;
          flags_by_size = (void *)get_flags_by_size(1);
          if ( !flags_by_size )
            flags_by_size = elf_gnu_hash_indexes + 344;
          v17 = 1;
          goto LABEL_41;
        }
        v17 = 1;
        goto LABEL_37;
      }
    }
  }
  else
  {
    if ( (v14 & 0x20000000) == 0 )
    {
LABEL_22:
      sub_39F720((__int64)a1, v77, v11, 0xC8u);
      return 0;
    }
    v78 = v11 - v77;
    sub_3B9CB0((__int64)a1, v106, v77);
  }
  v16 = sub_581F00((__int64)a1, v77);
  v17 = v16;
  if ( (v77 & (v16 - 1)) == 0 )
  {
    v99 = v78;
    goto LABEL_37;
  }
  do
    v17 >>= 1;
  while ( (v77 & (v17 - 1)) != 0 );
  v18 = (v16 + v77 - 1) & -v16;
  if ( v18 < v77 )
    v18 = v77;
  if ( v18 <= v11 )
    v11 = v18;
  v10 = sub_582310(v77, v7, v11, v13 == 2);
  v78 = v11 - v77;
  v99 = v11 - v77;
  if ( v10 )
    return v10;
LABEL_37:
  flags_by_size = (void *)get_flags_by_size(v17);
  if ( flags_by_size && v99 >= v17 )
  {
    v78 -= v99 % v17;
  }
  else
  {
    flags_by_size = elf_gnu_hash_indexes + 344;
    v17 = 1;
  }
  if ( v78 )
    goto LABEL_41;
  return v78;
}

