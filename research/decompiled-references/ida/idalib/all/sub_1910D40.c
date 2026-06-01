void __fastcall sub_1910D40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r14
  int v9; // r12d
  __int64 v11; // rbx
  bool v12; // r15
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rdi
  _WORD *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rdi
  __int64 (*v27)(void); // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // edx
  unsigned int v34; // eax
  __int64 *v35; // rdi
  int v36; // edi
  __int64 *v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 *v41; // r14
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 *v46; // rbx
  __int64 *v47; // r13
  __int64 v48; // rax
  unsigned int *v49; // rdx
  __int64 v50; // rax
  char v51; // al
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 *v54; // rax
  __int64 *v55; // rdx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rax
  char v58; // al
  bool v59; // zf
  __int64 *v60; // rax
  __int64 v61; // rcx
  unsigned __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 (__fastcall *v71)(__int64); // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  _QWORD *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rsi
  __int64 v87; // rsi
  _QWORD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 *v93; // rbx
  __int64 **v94; // rax
  __int64 *v95; // rdx
  __int64 *v96; // rcx
  __int64 *v97; // rax
  __int64 v98; // rax
  unsigned int *v99; // [rsp+8h] [rbp-80h] BYREF
  __int64 *v100; // [rsp+10h] [rbp-78h]
  char v101; // [rsp+18h] [rbp-70h] BYREF
  unsigned int v102; // [rsp+1Ch] [rbp-6Ch] BYREF
  __int64 v103; // [rsp+28h] [rbp-60h] BYREF
  __m128 v104; // [rsp+30h] [rbp-58h] BYREF
  __int64 v105; // [rsp+40h] [rbp-48h]
  char *v106; // [rsp+48h] [rbp-40h]

  v8 = a3 + 72;
  v9 = 0;
  v11 = a3;
  v101 = a4;
  v102 = a2;
  v100 = (__int64 *)a3;
  *(_BYTE *)(a3 + 29) |= 8u;
  v12 = v101;
  v13 = *(_QWORD *)(a1 + 544);
  if ( v101 && (v21 = sub_18BB0D0(a1), v11 = (__int64)v100, v9 = v21, v12 = v21 == 3, v13 == v8) && v21 == 3 )
  {
    v12 = 0;
    v9 = 2;
    if ( *((char *)v100 + 82) < 0 )
    {
LABEL_25:
      if ( (*(_BYTE *)(v11 + 29) & 1) == 0 )
        goto LABEL_26;
      v54 = sub_B8C3D0(v11, a2, a3, a4, a5, a6);
      v55 = (__int64 *)*v54;
      v56 = *v54 + 8LL * *((unsigned int *)v54 + 2);
      if ( *v54 >= v56 )
      {
        if ( v55 == (__int64 *)v56 )
          goto LABEL_26;
        if ( *(_WORD *)(*(_QWORD *)v56 + 36LL) == 195 )
        {
LABEL_82:
          v11 = (__int64)v100;
LABEL_27:
          v14 = *(unsigned int *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
          if ( ((1LL << v14) & 0xF6) == 0 )
            goto LABEL_5;
          goto LABEL_28;
        }
        v60 = (__int64 *)(v56 + 8);
        while ( v55 != v60 )
        {
          v61 = *v60++;
          if ( *(_WORD *)(v61 + 36) == 195 )
            goto LABEL_82;
        }
      }
      else
      {
        v57 = *v54;
        while ( *(_WORD *)(*(_QWORD *)v57 + 36LL) != 195 )
        {
          v57 += 8LL;
          if ( v56 == v57 )
            goto LABEL_26;
        }
        if ( v56 != v57 )
          goto LABEL_82;
      }
LABEL_26:
      v11 = (__int64)v100;
      if ( v9 == 3 )
      {
        v12 = 1;
        v58 = *((_BYTE *)v100 + 28) & 0x7F;
        if ( v58 == 38 )
        {
          v11 = (__int64)v100;
          v59 = !sub_B98FC0((__int64)v100, a2);
          v58 = *((_BYTE *)v100 + 28) & 0x7F;
          if ( !v59 )
          {
            v12 = 0;
            v9 = 2;
          }
        }
        if ( v58 == 36 )
        {
          v9 = 2;
          v14 = *(unsigned int *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
          if ( ((1LL << v14) & 0xF6) == 0 )
            goto LABEL_7;
          v12 = 0;
          v9 = 2;
          goto LABEL_28;
        }
      }
      goto LABEL_27;
    }
  }
  else if ( *(char *)(v11 + 82) < 0 )
  {
    goto LABEL_25;
  }
  v14 = *(unsigned int *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  if ( ((1LL << v14) & 0xF6) == 0 )
    goto LABEL_4;
LABEL_28:
  if ( (*(_BYTE *)(v11 + 84) & 3) == 0 )
    goto LABEL_5;
  if ( (unsigned __int8)sub_B7F7D0(v11) )
    goto LABEL_30;
  a2 = 1;
  v49 = (unsigned int *)sub_B7D580(v11, 1, v22, v14);
  if ( !v49 )
    v49 = (unsigned int *)v11;
  v50 = *(_QWORD *)v49;
  v99 = v49;
  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned int *))(v50 + 32))(v49) + 82) & 0x40) != 0
    || (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v99 + 32LL))(v99) + 83) & 2) != 0 )
  {
LABEL_30:
    v11 = (__int64)v100;
    goto LABEL_31;
  }
  v51 = *(_BYTE *)(v11 + 28) & 0x7F;
  if ( v51 != 37 )
  {
    if ( v51 == 38 )
    {
      if ( (*(_BYTE *)(v11 + 87) & 0x20) == 0 )
      {
        v11 = (__int64)v100;
        goto LABEL_5;
      }
      v59 = *(_QWORD *)(v11 + 176) == 0;
      v11 = (__int64)v100;
      if ( v59 )
        goto LABEL_5;
      goto LABEL_31;
    }
LABEL_4:
    v11 = (__int64)v100;
    goto LABEL_5;
  }
  v52 = sub_B72690(v11 + 72);
  if ( !v52 )
    BUG();
  v53 = *(_QWORD *)(v52 + 64);
  v11 = (__int64)v100;
  if ( !v53 || (*(_BYTE *)(v53 + 10) & 0x20) == 0 )
  {
LABEL_5:
    if ( v13 == v8 || !v12 )
      goto LABEL_7;
LABEL_34:
    if ( (unsigned int)sub_B77D20(v11) || sub_B77930((__int64)v100) )
    {
      a2 = v102;
      sub_1CB7B70(a1, v102, v100);
    }
    v26 = v100;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
    {
      a2 = v102;
      sub_1799D00(*(__int64 **)(a1 + 664), v102, (__int64)v100);
      v26 = v100;
    }
    v27 = *(__int64 (**)(void))(*v26 + 64);
    if ( (char *)v27 == (char *)sub_6EF210 )
    {
      a2 = (__int64)&v104;
      v28 = sub_B7F750(v26, &v104, (__int64)sub_6EF210, v23, v24, v25);
    }
    else
    {
      v28 = v27();
    }
    if ( !v28 )
    {
      a2 = v102;
      v99 = &v102;
      v105 = a1;
      v106 = &v101;
      a7 = _mm_loadh_ps((const double *)&v99);
      v104 = a7;
      sub_15F0FC0(a1, v102, (__int64 (__fastcall *)(__int64))sub_199EDB0, (__int64)&v104);
    }
    v11 = (__int64)v100;
    goto LABEL_9;
  }
LABEL_31:
  if ( v13 != v8 && (v9 == 3 || (*(_BYTE *)(v11 + 82) & 8) == 0) )
    goto LABEL_34;
LABEL_7:
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
  {
    a2 = v102;
    sub_1799D00(*(__int64 **)(a1 + 664), v102, v11);
    v11 = (__int64)v100;
  }
LABEL_9:
  if ( (*(_BYTE *)(v11 + 28) & 0x7F) == 0x26 )
  {
    a2 = (unsigned int)((unsigned __int8)sub_B7D7F0(v11) == 0) + 5;
    sub_18C74E0(a1, a2, v11, 4);
    v15 = sub_B98F20(v11) + 8LL * (unsigned __int16)(*(_DWORD *)(v11 + 84) >> 13);
    v16 = sub_B98F20(v11);
    while ( v15 != v16 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)v16;
        v18 = *(_WORD **)(*(_QWORD *)v16 + 8LL);
        v103 = *(_QWORD *)v16;
        if ( (*v18 & 0x1FF) == 0x6F )
          break;
        v16 += 8;
        if ( v15 == v16 )
          goto LABEL_15;
      }
      v104.m128_u64[0] = (unsigned __int64)&v103;
      v16 += 8;
      v104.m128_u64[1] = a1;
      v19 = sub_B98AF0(v17);
      a2 = v19;
      sub_15F0FC0(a1, v19, (__int64 (__fastcall *)(__int64))sub_1912420, (__int64)&v104);
    }
LABEL_15:
    sub_190D5E0(a1, a7);
    v11 = (__int64)v100;
  }
  v20 = *(_QWORD *)(*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v20 + 16) == 26
    || (v29 = *(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v29 + 16) == 26)
    && (v20 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v29, v14)) != 0 )
  {
    if ( ((*(_BYTE *)(v20 + 19) >> 1) & 0xFu) - 9 <= 1 )
      sub_18B0530(a1, v102, v20, *(double *)a7.m128_u64, a8);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 0x84) == 0x84 )
  {
    v30 = *(_QWORD *)(a1 + 248);
    v31 = *(_QWORD *)(v30 + 22816);
    v32 = *(_DWORD *)(v30 + 22832);
    if ( !v32 )
      goto LABEL_52;
    v33 = v32 - 1;
    v34 = (v32 - 1) & (((unsigned int)v100 >> 9) ^ ((unsigned int)v100 >> 4));
    v35 = *(__int64 **)(v31 + 8LL * v34);
    if ( v100 == v35 )
      goto LABEL_20;
    if ( v35 == (__int64 *)-4096LL )
    {
LABEL_52:
      sub_17941C0(*(__int64 **)(a1 + 664), (__int64)v100);
      goto LABEL_20;
    }
    v36 = 1;
    while ( 1 )
    {
      v34 = v33 & (v36 + v34);
      v37 = *(__int64 **)(v31 + 8LL * v34);
      if ( v100 == v37 )
        break;
      ++v36;
      if ( v37 == (__int64 *)-4096LL )
        goto LABEL_52;
    }
  }
LABEL_20:
  if ( v9 != 3 || sub_B8C400((__int64)v100, 0) )
    return;
  if ( (unsigned __int8)sub_B7D390((__int64)v100, (__int64)&v104, 0, v38) || sub_B8D690((__int64)v100) )
    goto LABEL_55;
  if ( (unsigned __int8)sub_17A3710((__int64)v100) )
  {
LABEL_111:
    v77 = *v100;
LABEL_112:
    v104.m128_u64[0] = (*(__int64 (**)(void))(v77 + 32))();
    v104.m128_i32[2] = v102;
    sub_17E3890(a1 + 4216, (__int64 *)&v104, (__int64)&v104.m128_i64[1], v78, v79, v80);
    goto LABEL_55;
  }
  v81 = sub_7053D0((__int64 *)(v100[14] + 104), v100[14], v73, v74, v75, v76);
  v86 = (__int64)v100;
  if ( (*((_BYTE *)v81 + 82) & 1) != 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 45LL) & 1) == 0 )
  {
    v87 = v100[14];
    v88 = sub_7053D0((__int64 *)(v87 + 104), v87, v82, v83, v84, v85);
    if ( (*((_BYTE *)v88 + 29) & 1) != 0 )
    {
      v94 = (__int64 **)sub_B8C3D0((__int64)v88, v87, v89, v90, v91, v92);
      v95 = *v94;
      v96 = &(*v94)[*((unsigned int *)v94 + 2)];
      if ( *v94 < v96 )
      {
        v97 = *v94;
        while ( *(_WORD *)(*v97 + 36) != 221 )
        {
          if ( v96 == ++v97 )
            goto LABEL_123;
        }
        v93 = v100;
        v86 = (__int64)v100;
        if ( v96 != v97 )
          goto LABEL_119;
LABEL_124:
        v77 = *v93;
        goto LABEL_112;
      }
      while ( v95 != v96 )
      {
        v98 = *v96++;
        if ( *(_WORD *)(v98 + 36) == 221 )
        {
          v86 = (__int64)v100;
          goto LABEL_119;
        }
      }
    }
LABEL_123:
    v93 = v100;
    goto LABEL_124;
  }
LABEL_119:
  if ( (unsigned __int8)sub_15F1490(a1, v86) )
    goto LABEL_111;
LABEL_55:
  v40 = *(_QWORD *)(a1 + 248);
  v41 = v100;
  v42 = *(_QWORD *)(v40 + 17448);
  if ( !*(_BYTE *)(v42 + 344) )
    goto LABEL_64;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 && !(unsigned __int8)sub_B82220((__int64)v100) )
    goto LABEL_63;
  v43 = *(_QWORD *)(v41[6] & 0xFFFFFFFFFFFFFFF0LL);
  v44 = (unsigned int)*(unsigned __int8 *)(v43 + 16) - 25;
  if ( (unsigned int)v44 > 1 )
    v43 = sub_F63050(v43, v40, v44, v39);
  v41 = v100;
  v45 = (*(_WORD *)(v43 + 20) >> 2) & 0x3F;
  if ( ((*(_WORD *)(v43 + 20) >> 2) & 0x3Fu) <= 4 && ((1LL << ((*(_WORD *)(v43 + 20) >> 2) & 0x3F)) & 0x16) != 0 )
  {
    v46 = (__int64 *)v100[15];
    LODWORD(v99) = v102;
    v47 = &v46[(unsigned int)sub_B76070((__int64)v100, v40, v44, v45)];
    while ( v47 != v46 )
    {
      v48 = *v46;
      v104.m128_u64[0] = (unsigned __int64)off_2BC6EF0;
      v104.m128_u64[1] = (unsigned __int64)v41;
      ++v46;
      v105 = v48;
      sub_1E63C20(a1, (unsigned int)v99, *(_QWORD *)(v48 + 48), 1, &v104);
    }
LABEL_63:
    v40 = *(_QWORD *)(a1 + 248);
    v41 = v100;
    v42 = *(_QWORD *)(v40 + 17448);
    goto LABEL_64;
  }
  v40 = *(_QWORD *)(a1 + 248);
  v42 = *(_QWORD *)(v40 + 17448);
LABEL_64:
  if ( *(_DWORD *)(v42 + 340) == 10 && (*((_BYTE *)v41 + 28) & 0x7F) == 0x24 )
  {
    v62 = sub_B72690((__int64)(v41 + 9));
    v67 = v62;
    if ( !v62 )
      JUMPOUT(0x2E9BF4);
    sub_7052B0((__int64 *)(*(_QWORD *)(v62 + 40) + 96LL), *(_QWORD *)(v62 + 40), v63, v64, v65, v66);
    if ( *(_DWORD *)(*(_QWORD *)(v67 + 64) + 20LL) )
    {
      v71 = *(__int64 (__fastcall **)(__int64))(*v41 + 64);
      if ( v71 == sub_6EF210 )
        v72 = sub_B7F750(v41, &v104, (__int64)sub_6EF210, v68, v69, v70);
      else
        v72 = v71((__int64)v41);
      if ( !v72 )
        sub_185DED0(a1, v102, (__int64)v41);
    }
    v41 = v100;
    v40 = *(_QWORD *)(a1 + 248);
  }
  sub_B8C4D0((__int64)v41, v40);
}
