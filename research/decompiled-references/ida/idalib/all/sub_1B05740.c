__int64 __fastcall sub_1B05740(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r14
  __int64 v5; // r12
  unsigned __int64 v6; // rbp
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r10
  int v11; // r8d
  __int64 v12; // rax
  unsigned __int32 v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  unsigned int v22; // edi
  __int64 v23; // rdi
  __int64 v24; // rsi
  int v25; // edx
  char v26; // al
  __int64 v27; // rsi
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rbp
  __int64 v36; // rax
  unsigned int v37; // r13d
  __int64 v38; // rax
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 *v44; // rcx
  __int64 v45; // r9
  __int64 v46; // rsi
  unsigned int v47; // eax
  __int64 v48; // rdx
  bool v49; // cl
  __int64 v50; // r15
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r14
  __int64 v57; // r13
  __int64 *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned __int64 v61; // r14
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 *v69; // r14
  __int64 v70; // r15
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rbp
  __int64 v77; // rax
  int v78; // r8d
  __int64 *v79; // rcx
  unsigned int i; // edi
  __int64 *v81; // rsi
  int v82; // ecx
  int v83; // r10d
  __int64 v84; // r9
  int v85; // ecx
  int v86; // ecx
  int v87; // edi
  unsigned int k; // edx
  __int64 v89; // r8
  __int64 v90; // rcx
  int v91; // ecx
  int v92; // ecx
  int v93; // edi
  unsigned int j; // edx
  __int64 v95; // r8
  unsigned int v96; // edx
  unsigned int v97; // edx
  unsigned int v98; // edi
  bool v99; // [rsp+7h] [rbp-A1h]
  __m128 v100; // [rsp+10h] [rbp-98h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v102[16]; // [rsp+30h] [rbp-78h] BYREF
  __m128 v103; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v104; // [rsp+50h] [rbp-58h]

  v4 = a4;
  v5 = a2;
  v6 = a3;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = sub_1AE5FF0(v8);
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 976) != 103 )
    {
      v11 = *(_DWORD *)(v10 + 27456);
      if ( v11 == 106 || (v12 = sub_1AE6050(v8)) != 0 && *(_DWORD *)(v12 + 976) != 103 )
      {
        sub_1AF1480(
          (__int64)&v103,
          v10,
          a2,
          (unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))sub_1AE69F0,
          (__int64)&v100,
          v11 != 106,
          (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1AE9830,
          (__int64)ptr);
        v13 = v103.m128_u32[1];
        v10 = *(_QWORD *)(a1 + 8);
        if ( v103.m128_i32[1] == 82
          && (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2C
          && (unsigned __int8)sub_1AE61F0(*(_QWORD *)(a1 + 8), a2) )
        {
          if ( !(unsigned int)sub_1AFA3A0(v10, a2) )
            return v13;
          v10 = *(_QWORD *)(a1 + 8);
        }
      }
    }
  }
  if ( !(unsigned __int8)sub_1AE9A00(v10, (__int64)sub_1AE6580, (__int64 (__fastcall *)(_QWORD))sub_FFEF70, v6) )
    goto LABEL_8;
  v100.m128_u64[0] = *(_QWORD *)(a2 + 48);
  ptr[0] = (void *)sub_C1BEF0((__int64)&v100, (__int64)sub_1AE6580, v14, v15);
  v46 = sub_168B6C0(a1);
  LOBYTE(v47) = sub_F62A70((__int64 *)ptr, v46);
  v49 = v47;
  if ( (_BYTE)v47 )
  {
    v103.m128_u64[0] = *(_QWORD *)(v5 + 48);
    v64 = sub_C1BEF0((__int64)&v103, v46, v48, v47);
    v49 = sub_F63270(
            *(_QWORD *)(*(_QWORD *)&byte_8[v64 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
            v46,
            v65,
            v66,
            v67,
            v68) == nullptr;
  }
  v99 = v49;
  v50 = 1688LL * (unsigned int)v6;
  v51 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL)
                                    + 6776LL * *(unsigned int *)(*(_QWORD *)(a1 + 8) + 344LL)
                                    - 6776)
                        + v50
                        + 976);
  ptr[0] = v102;
  ptr[1] = (void *)0x400000000LL;
  sub_FFF220((__int64)ptr, v51);
  if ( (unsigned __int8)sub_FFEF70(*((unsigned int *)ptr[0] + v4), v51, v52, v53)
    && (v99 || !sub_FFE5D0(*((_DWORD *)ptr[0] + v4))) )
  {
    if ( (unsigned __int8)sub_1AFA770(
                            *(_QWORD *)(a1 + 8),
                            v5,
                            (__int64 (__fastcall *)(__int64, __int64, _QWORD))sub_1AE65D0,
                            (__int64)&v103,
                            v6,
                            1u) )
    {
LABEL_83:
      if ( ptr[0] != v102 )
        free(ptr[0]);
      return 36;
    }
    sub_1AF1810((__int64)&v103, *(_QWORD *)(a1 + 8), v5, v6);
    if ( v103.m128_i32[1] != 94 && !(unsigned int)sub_1AF96C0(*(_QWORD *)(a1 + 8), v5, v6) )
    {
      v69 = v104;
      if ( !v104 )
      {
        v70 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL)
                        + 6776LL * *(unsigned int *)(*(_QWORD *)(a1 + 8) + 344LL)
                        - 6776)
            + v50;
        v71 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
        v75 = *(unsigned int *)(v70 + 1224);
        v76 = v71;
        if ( !(_DWORD)v75 )
          goto LABEL_94;
        v77 = *(_QWORD *)(v70 + 1208);
        v78 = 1;
        v79 = nullptr;
        for ( i = (v75 - 1) & (((unsigned int)v76 >> 9) ^ ((unsigned int)v76 >> 4)); ; i = (v75 - 1) & v98 )
        {
          v81 = (__int64 *)(v77 + 8LL * i);
          v74 = *v81;
          if ( v76 == *v81 )
            goto LABEL_82;
          if ( v74 == -4096 )
            break;
          if ( v74 != -8192 || v79 )
            v81 = v79;
          v98 = v78 + i;
          v79 = v81;
          ++v78;
        }
        if ( v79 )
          v81 = v79;
        v72 = (unsigned int)(*(_DWORD *)(v70 + 1216) + 1);
        v73 = (unsigned int)(4 * v72);
        if ( (unsigned int)v73 < 3 * (int)v75 )
        {
          v90 = (unsigned int)(v75 - *(_DWORD *)(v70 + 1220) - v72);
          if ( (unsigned int)v90 > (unsigned int)v75 >> 3 )
            goto LABEL_97;
          sub_1B054E0(v70 + 1208, v75, v75, v90, v73, -4096);
          v91 = *(_DWORD *)(v70 + 1224);
          if ( v91 )
          {
            v92 = v91 - 1;
            v93 = 1;
            v77 = *(_QWORD *)(v70 + 1208);
            for ( j = v92 & (((unsigned int)v76 >> 9) ^ ((unsigned int)v76 >> 4)); ; j = v92 & v97 )
            {
              v81 = (__int64 *)(v77 + 8LL * j);
              v95 = *v81;
              if ( v76 == *v81 )
                break;
              if ( v95 == -4096 )
                goto LABEL_109;
              if ( v69 || v95 != -8192 )
                v81 = v69;
              v97 = v93 + j;
              v69 = v81;
              ++v93;
            }
            goto LABEL_97;
          }
        }
        else
        {
LABEL_94:
          sub_1B054E0(v70 + 1208, 2 * v75, v75, v72, v73, v74);
          v85 = *(_DWORD *)(v70 + 1224);
          if ( v85 )
          {
            v86 = v85 - 1;
            v77 = *(_QWORD *)(v70 + 1208);
            v87 = 1;
            for ( k = v86 & (((unsigned int)v76 >> 9) ^ ((unsigned int)v76 >> 4)); ; k = v86 & v96 )
            {
              v81 = (__int64 *)(v77 + 8LL * k);
              v89 = *v81;
              if ( v76 == *v81 )
                break;
              if ( v89 == -4096 )
              {
LABEL_109:
                if ( v69 )
                  v81 = v69;
                break;
              }
              if ( v69 || v89 != -8192 )
                v81 = v69;
              v96 = v87 + k;
              v69 = v81;
              ++v87;
            }
LABEL_97:
            ++*(_DWORD *)(v70 + 1216);
            if ( *v81 != -4096 )
              --*(_DWORD *)(v70 + 1220);
            *v81 = v76;
            v75 = *(unsigned int *)(v70 + 1224);
LABEL_82:
            sub_1AFEC60(&v100, v81, (_QWORD *)(v77 + 8 * v75), v70 + 1208, 1);
            goto LABEL_83;
          }
        }
        ++*(_DWORD *)(v70 + 1216);
        BUG();
      }
    }
  }
  if ( ptr[0] != v102 )
  {
    free(ptr[0]);
    sub_1AE5FF0(*(_QWORD *)(a1 + 8));
    goto LABEL_9;
  }
LABEL_8:
  sub_1AE5FF0(*(_QWORD *)(a1 + 8));
LABEL_9:
  if ( def_FFDDA1() )
  {
    v16 = sub_1AE5FF0(*(_QWORD *)(a1 + 8));
    v17 = v16 ? *(_DWORD *)(v16 + 976) : 103;
    if ( !(unsigned __int8)sub_FFF0D0(v17) )
    {
      v18 = *(_QWORD *)(a1 + 8);
      v19 = sub_1AE5FF0(v18);
      if ( v19 && *(_DWORD *)(v19 + 1084) && *(_BYTE *)(v19 + 1107) )
      {
        if ( v5 )
        {
          v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
          v19 = sub_1AE5FF0(v18);
        }
        *(_QWORD *)(v19 + 1096) = v5;
        v13 = 82;
        *(_BYTE *)(sub_1AE5FF0(*(_QWORD *)(a1 + 8)) + 1107) = 0;
        return v13;
      }
      v20 = *(_QWORD *)(v19 + 1096);
      if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) == v20
         || (unsigned int)sub_1AFA3A0(*(_QWORD *)(a1 + 8), v5))
        && !(unsigned __int8)sub_1AFA770(
                               *(_QWORD *)(a1 + 8),
                               v5,
                               (__int64 (__fastcall *)(__int64, __int64, _QWORD))sub_1AE65E0,
                               (__int64)&v103,
                               v6,
                               0) )
      {
        v21 = sub_1AE5FF0(*(_QWORD *)(a1 + 8));
        v22 = v21 ? *(_DWORD *)(v21 + 976) : 103;
        if ( !(unsigned __int8)sub_FFEBC0(v22, v5) )
          return 82;
      }
    }
  }
  v23 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 40 <= 6 )
  {
    v24 = *(_QWORD *)(a1 + 8);
    sub_1AFBE90((__int64)&v103, v24, v5);
    v26 = sub_FFEF60(v103.m128_i32[1], v24, v25);
    v23 = *(_QWORD *)(a1 + 8);
    if ( v26 )
    {
      if ( *(_BYTE *)(v23 + 27472) )
      {
        v13 = 82;
        if ( !(unsigned __int8)sub_1AFA770(
                                 v23,
                                 v5,
                                 (__int64 (__fastcall *)(__int64, __int64, _QWORD))sub_1AE65F0,
                                 (__int64)&v103,
                                 v6,
                                 0) )
          return v13;
        v23 = *(_QWORD *)(a1 + 8);
      }
    }
  }
  v27 = (__int64)sub_1AE6580;
  if ( (unsigned __int8)sub_1AE9A00(v23, (__int64)sub_1AE6580, (__int64 (__fastcall *)(_QWORD))sub_FFE8A0, v6) )
  {
    v40 = sub_1AE5FF0(*(_QWORD *)(a1 + 8));
    v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
    v42 = *(unsigned int *)(v40 + 1320);
    v43 = *(_QWORD *)(v40 + 1304);
    if ( (_DWORD)v42 )
    {
      v27 = ((_DWORD)v42 - 1) & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
      v44 = (__int64 *)(v43 + 16 * v27);
      v45 = *v44;
      if ( v41 != *v44 )
      {
        v82 = 1;
        if ( v45 == -4096 )
          goto LABEL_25;
        while ( 1 )
        {
          v83 = v82 + 1;
          v27 = ((_DWORD)v42 - 1) & (unsigned int)(v82 + v27);
          v44 = (__int64 *)(v43 + 16LL * (unsigned int)v27);
          v84 = *v44;
          if ( v41 == *v44 )
            break;
          v82 = v83;
          if ( v84 == -4096 )
            goto LABEL_25;
        }
      }
      if ( v44 != (__int64 *)(v43 + 16 * v42) && *((_DWORD *)v44 + 2) == 1 )
        return 82;
    }
  }
LABEL_25:
  v28 = *(_QWORD *)(a1 + 8);
  v29 = *(unsigned int *)(v28 + 344);
  if ( (_DWORD)v29 )
  {
    v27 = *(_QWORD *)(v28 + 328);
    v30 = *(_QWORD *)(v28 + 336) + 6776 * v29 - 6776;
    if ( *(_QWORD *)(v30 + 6768) == v27 )
    {
      v54 = *(unsigned int *)(v30 + 8);
      v55 = *(unsigned int *)(v28 + 27504);
      if ( (unsigned int)v54 > (unsigned int)v55 && v54 - v55 > v6 )
      {
        v56 = sub_1AEE450(v5);
        v57 = *(_QWORD *)(*(_QWORD *)(v28 + 336) + 6776LL * *(unsigned int *)(v28 + 344) - 6776) + 1688 * v6;
        v58 = sub_1AEA920(v57, v56);
        if ( (*(_BYTE *)v57 & 1) != 0 )
        {
          v59 = v57 + 8;
          v60 = 320;
        }
        else
        {
          v59 = *(_QWORD *)(v57 + 8);
          v60 = 40LL * *(unsigned int *)(v57 + 16);
        }
        if ( v58 != (__int64 *)(v60 + v59) && (v58[2] & 0xFFFFFFFFFFFFFFFCLL) != 0 && *((_DWORD *)v58 + 2) == 82 )
          return 82;
        v61 = sub_1AFA610(v57 + 728, v56);
        if ( (*(_BYTE *)(v57 + 728) & 1) != 0 )
        {
          v62 = v57 + 736;
          v63 = 192;
        }
        else
        {
          v62 = *(_QWORD *)(v57 + 736);
          v63 = 24LL * *(unsigned int *)(v57 + 744);
        }
        v27 = v63 + v62;
        sub_1AF9650(&v103, (_QWORD *)v27, (_QWORD *)v27, v57 + 728, 1);
        if ( v103.m128_u64[0] != v61 )
          return 82;
        v28 = *(_QWORD *)(a1 + 8);
      }
    }
  }
  if ( *(_DWORD *)(v28 + 27456) == 82 )
    return 82;
  v31 = *(unsigned int *)(v28 + 344);
  if ( !(_DWORD)v31 )
    return 106;
  v32 = *(_QWORD *)(v28 + 336) + 6776 * v31 - 6776;
  if ( *(_QWORD *)(v32 + 6768) != *(_QWORD *)(v28 + 328) )
    return 106;
  v33 = *(unsigned int *)(v32 + 8);
  v34 = *(unsigned int *)(v28 + 27504);
  if ( (unsigned int)v33 <= (unsigned int)v34 || v33 - v34 <= v6 )
    return 106;
  v35 = 1688 * v6;
  v36 = v35 + *(_QWORD *)v32;
  v37 = *(_DWORD *)(v36 + 976);
  if ( v37 != 89 )
  {
    if ( (sub_FFE740(v37) || sub_FFE580(v37)) && !(unsigned __int8)sub_FFEBC0(v37, v27) )
    {
      v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL)
                      + 6776LL * *(unsigned int *)(*(_QWORD *)(a1 + 8) + 344LL)
                      - 6776)
          + v35;
      goto LABEL_41;
    }
    return 106;
  }
LABEL_41:
  v38 = *(_QWORD *)(v36 + 1128);
  v13 = 106;
  if ( v38 && *(_QWORD *)(v38 + 16) == v5 )
    return 82;
  return v13;
}
