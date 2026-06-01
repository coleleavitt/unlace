__int64 __fastcall sub_1870930(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbp
  unsigned int v4; // r13d
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  __int64 *v11; // r12
  unsigned __int64 *v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rcx
  char v17; // dl
  char v18; // al
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 **v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  _QWORD *v31; // rcx
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // rsi
  __int64 v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rbp
  __int64 v41; // rax
  unsigned int v42; // edx
  __int64 *v43; // rsi
  unsigned int v44; // ecx
  __int64 v45; // r14
  __int64 v46; // r15
  unsigned __int64 v47; // rax
  __int16 v48; // r15
  int v49; // r15d
  __int64 *v50; // rbx
  __int64 *v51; // r14
  __int64 v52; // r15
  unsigned int v53; // eax
  __int64 v54; // rbx
  unsigned __int64 v55; // rax
  int v56; // r14d
  unsigned int v57; // edx
  int v58; // eax
  __int64 v59; // r14
  _QWORD *v60; // r14
  unsigned __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // rcx
  char v66; // al
  __int64 v67; // rcx
  char v68; // al
  __int64 v69; // rcx
  char v70; // al
  __int64 v71; // rcx
  char v72; // al
  __int64 v73; // r15
  unsigned __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rsi
  char v77; // dl
  unsigned int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  _QWORD *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rsi
  char v88; // dl
  unsigned int v89; // eax
  __int64 v90; // rbp
  __int64 v91; // rax
  __int64 v92; // r12
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  unsigned int v96; // eax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // r13
  __int64 v103; // rax
  _QWORD *v104; // rax
  bool v105; // zf
  __int64 v106; // rax
  unsigned int v107; // eax
  __int64 v108; // rax
  unsigned int v109; // eax
  __int64 v110; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v111; // [rsp+10h] [rbp-E8h] BYREF
  unsigned __int64 v112; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v113; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v114; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v115[25]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = a2;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v4 = 1;
    sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x100Eu, 0);
    v114 = *(_QWORD *)(a2 + 40);
    sub_15894B0((__int64)v115, &v114);
    sub_15F7200(v115);
    return v4;
  }
  v4 = sub_B82220(a2);
  if ( (_BYTE)v4 )
  {
    v11 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x100Bu, 0);
    sub_15F7200(v115);
    v12 = (unsigned __int64 *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    {
      v13 = sub_B8E540(*v12);
      if ( !v13 )
        return v4;
    }
    else
    {
      v13 = sub_B8E540((unsigned __int64)v12);
      if ( !v13 )
        return v4;
    }
    sub_168B9F0((__int64)v115, v11, *(_DWORD *)(v13 + 72), 0x175Au, 0);
    sub_15F7200(v115);
    return v4;
  }
  v7 = sub_B77A30(a2);
  if ( v7 || (v7 = sub_B77AF0(a2)) != 0 )
  {
    if ( (unsigned int)sub_B76070(a2, a2, v5, v6) )
    {
      v42 = *(_DWORD *)(a2 + 24);
      v43 = (__int64 *)(a1 + 8);
      v44 = 4113;
LABEL_37:
      v4 = 1;
      sub_168B9F0((__int64)v115, v43, v42, v44, 0);
      sub_15F7200(v115);
      return v4;
    }
    v8 = *(_QWORD *)(v7 + 56);
    v9 = *(_DWORD *)(v8 + 20) & 0x1FFFFFFF;
    if ( v9 == 1 )
    {
      v14 = *(_QWORD *)(v8 + 24);
      if ( (*(_BYTE *)(v14 + 28) & 0x7F) != 0x2F )
      {
LABEL_7:
        v4 = 1;
        sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), *(_DWORD *)(v8 + 8), 0x1010u, 0);
        v114 = __PAIR64__(*(_DWORD *)(*(_QWORD *)(v7 + 56) + 16LL), *(_DWORD *)(*(_QWORD *)(v7 + 56) + 8LL));
        sub_1587DB0((__int64)v115, &v114);
        sub_15F7200(v115);
        return v4;
      }
      if ( (unsigned __int8)sub_B8BE90(*(_QWORD *)(v8 + 24)) )
      {
        v15 = *(_QWORD *)&byte_8[*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL];
        v16 = *(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(a1 + 248) + 18648LL) & 0xFFFFFFFFFFFFFFF0LL];
        v17 = v15 | *(_QWORD *)(v14 + 48);
        a2 = v15 & 0xFFFFFFFFFFFFFFF8LL;
        v18 = v16 | *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18648LL);
        v19 = v16 & 0xFFFFFFFFFFFFFFF8LL;
        v20 = a2 | v17 & 7;
        if ( v20 == (v19 | v18 & 7) )
          goto LABEL_50;
      }
      if ( *(char *)(*(_QWORD *)(a1 + 232) + 1LL) < 0 && !(unsigned __int8)sub_B8BE90(v14) )
      {
        v81 = *(_QWORD *)(*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        v82 = *(_QWORD *)(*(_QWORD *)(v81 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v82 + 16) == 48
          || *(_BYTE *)(v81 + 16) == 17
          || *(_BYTE *)(v82 + 16) == 17 && sub_F63050(v81, a2, v20, v19) )
        {
          goto LABEL_50;
        }
      }
    }
    else
    {
      if ( v9 != 2 )
        goto LABEL_7;
      v45 = *(_QWORD *)(v8 + 24);
      v46 = *(_QWORD *)(v8 + 32);
      if ( (*(_BYTE *)(v45 + 28) & 0x7F) != 0x43 )
        v45 = 0;
      if ( (*(_BYTE *)(v46 + 28) & 0x7F) != 0x2F || !v45 )
        goto LABEL_7;
      if ( !(unsigned __int8)sub_B8BE90(v45) )
      {
        if ( (unsigned __int8)sub_B8BE90(v46) )
        {
          v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
          if ( *(_BYTE *)(*(_QWORD *)v47 + 16LL) == 50 )
          {
            v48 = *(_WORD *)(*(_QWORD *)v47 + 20LL);
            v110 = *(_QWORD *)v47;
            if ( (v48 & 0x7FFF) == (unsigned int)sub_BBE590(v45) )
            {
              v49 = *(unsigned __int16 *)(v110 + 22);
              if ( v49 == (unsigned int)sub_BBE5B0(v45) )
              {
                if ( *(_DWORD *)(a1 + 11320) <= *(_DWORD *)(a1 + 12596) )
                {
                  a2 = a1 + 8;
                  sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), *(_DWORD *)(v7 + 24), 0x162Bu, 0);
                  sub_15F7200(v115);
                }
                goto LABEL_50;
              }
            }
          }
        }
      }
    }
    v8 = *(_QWORD *)(v7 + 56);
    goto LABEL_7;
  }
  if ( (unsigned int)sub_B76070(a2, a2, v5, v6) == 1 )
  {
    v60 = **(_QWORD ***)(a2 + 120);
    v115[0] = v60[6];
    v61 = sub_6D5440(v115);
    v112 = v61;
    v62 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0LL);
    v63 = *(_QWORD *)(*(_QWORD *)(v62 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v63 + 16) == 13 )
    {
      v20 = *(unsigned __int16 *)(v63 + 18);
      LOWORD(v20) = ((unsigned __int16)v20 >> 3) & 0x1FF;
      if ( (_WORD)v20 == 446 || (_WORD)v20 == 483 )
        goto LABEL_50;
    }
    a2 = *(_QWORD *)(a1 + 248);
    v64 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 18648) & 0xFFFFFFFFFFFFFFF0LL];
    v20 = *(_QWORD *)&byte_8[v61 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v61 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v61) & 7;
    v19 = v64 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v64 | (unsigned __int8)*(_QWORD *)(a2 + 18648)) & 7;
    if ( v20 == v19 )
      goto LABEL_50;
    v65 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 18664) & 0xFFFFFFFFFFFFFFF0LL];
    v66 = v65 | *(_QWORD *)(a2 + 18664);
    v19 = v65 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v20 == (v19 | v66 & 7) )
      goto LABEL_50;
    v67 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 18680) & 0xFFFFFFFFFFFFFFF0LL];
    v68 = v67 | *(_QWORD *)(a2 + 18680);
    v19 = v67 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v20 == (v19 | v68 & 7) )
      goto LABEL_50;
    v69 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 18688) & 0xFFFFFFFFFFFFFFF0LL];
    v70 = v69 | *(_QWORD *)(a2 + 18688);
    v19 = v69 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v20 == (v19 | v70 & 7) )
      goto LABEL_50;
    v71 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 18696) & 0xFFFFFFFFFFFFFFF0LL];
    v72 = v71 | *(_QWORD *)(a2 + 18696);
    v19 = v71 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v20 == (v19 | v72 & 7) )
      goto LABEL_50;
    if ( *(_BYTE *)(v62 + 16) != 42 )
    {
      v62 = sub_1838030(v62, a2, v20, v19);
      if ( !v62 )
      {
        if ( sub_F58100(*(_QWORD *)(v112 & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          v96 = (*(__int64 (__fastcall **)(_QWORD *))(*v60 + 16LL))(v60);
          sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), v96, 0x100Fu, 0);
          v97 = sub_1605D30((__int64)v115, (__int64 *)&v112);
          v80 = sub_1852DB0(v97, (__int64 *)(*(_QWORD *)(a1 + 248) + 18816LL));
        }
        else
        {
          v105 = sub_9EC890(*(_QWORD *)(v112 & 0xFFFFFFFFFFFFFFF0LL), a2, v93, v94, v95) == 0;
          v106 = *v60;
          if ( v105 )
          {
            v109 = (*(__int64 (__fastcall **)(_QWORD *))(v106 + 16))(v60);
            sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), v109, 0x100Du, 0);
            v80 = sub_1605D30((__int64)v115, (__int64 *)&v112);
          }
          else
          {
            v107 = (*(__int64 (__fastcall **)(_QWORD *))(v106 + 16))(v60);
            sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), v107, 0x100Fu, 0);
            v108 = sub_1605D30((__int64)v115, (__int64 *)&v112);
            v80 = sub_1852DB0(v108, (__int64 *)(*(_QWORD *)(a1 + 248) + 18784LL));
          }
        }
        goto LABEL_75;
      }
      a2 = *(_QWORD *)(a1 + 248);
    }
    v113 = *(_QWORD *)(v62 + 32);
    v73 = *(_QWORD *)(a2 + 18648);
    v74 = sub_6D5440(&v113);
    v75 = *(_QWORD *)&byte_8[v73 & 0xFFFFFFFFFFFFFFF0LL];
    v76 = *(_QWORD *)&byte_8[v74 & 0xFFFFFFFFFFFFFFF0LL];
    LOBYTE(v74) = v76 | v74;
    a2 = v76 & 0xFFFFFFFFFFFFFFF8LL;
    v77 = v74;
    LOBYTE(v74) = v75 | v73;
    v19 = v75 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (a2 | v77 & 7) == (v19 | v74 & 7) )
    {
      v20 = v113 & 7;
      if ( (v113 & 1) != 0 || (v19 = v113 & 0xFFFFFFFFFFFFFFF0LL, (byte_8[v113 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0) )
      {
        LOBYTE(v20) = v113 & 4;
        if ( (v113 & 4) == 0 && (byte_8[v113 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
          goto LABEL_50;
      }
    }
    v78 = (*(__int64 (__fastcall **)(_QWORD *))(*v60 + 16LL))(v60);
    sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), v78, 0x100Fu, 0);
    v79 = sub_1605D30((__int64)v115, (__int64 *)&v112);
    v80 = sub_1870880(v79, (__int64)"'const char *'");
LABEL_75:
    v40 = v80;
    v41 = *v60;
    goto LABEL_34;
  }
  if ( (unsigned int)sub_B76070(a2, a2, v21, v22) != 2 )
  {
    v42 = *(_DWORD *)(a2 + 24);
    v43 = (__int64 *)(a1 + 8);
    v44 = 4105;
    goto LABEL_37;
  }
  v25 = *(__int64 ***)(a2 + 120);
  sub_B76070(a2, a2, v23, v24);
  v115[0] = (*v25)[6];
  v111 = sub_6D5440(v115);
  v28 = *(_QWORD *)(v111 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v28 + 16) != 42 && (v28 = sub_1838030(v28, a2, v26, v27)) == 0
    || (v29 = *(_QWORD *)(v28 + 32), v112 = v29, (v29 & 1) == 0) && (byte_8[v29 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0
    || (v29 & 4) != 0
    || (byte_8[v29 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0
    || (v30 = sub_6D5440(&v112),
        v31 = *(_QWORD **)(a1 + 248),
        v32 = *(_QWORD *)&byte_8[v31[2331] & 0xFFFFFFFFFFFFFFF0LL],
        v33 = *(_QWORD *)&byte_8[v30 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[v30 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v30) & 7,
        v33 != (v32 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v32 | (unsigned __int8)v31[2331]) & 7))
    && (v34 = *(_QWORD *)&byte_8[v31[2333] & 0xFFFFFFFFFFFFFFF0LL],
        v33 != (v34 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v34 | (unsigned __int8)v31[2333]) & 7))
    && (v35 = *(_QWORD *)&byte_8[v31[2335] & 0xFFFFFFFFFFFFFFF0LL],
        v33 != (v35 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v35 | (unsigned __int8)v31[2335]) & 7))
    && (v36 = *(_QWORD *)&byte_8[v31[2336] & 0xFFFFFFFFFFFFFFF0LL],
        v33 != (v36 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v36 | (unsigned __int8)v31[2336]) & 7))
    && (v37 = v31[2337],
        v33 != (*(_QWORD *)&byte_8[v37 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v37 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v37) & 7)) )
  {
    v38 = (*(__int64 (__fastcall **)(__int64 *))(**v25 + 16))(*v25);
    sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), v38, 0x100Fu, 0);
    v39 = sub_1605D30((__int64)v115, (__int64 *)&v111);
    v40 = sub_1870880(v39, (__int64)"'const char *'");
    v41 = **v25;
LABEL_34:
    v114 = (*(__int64 (**)(void))(v41 + 16))();
    sub_1587DB0(v40, &v114);
    sub_15F7200(v115);
    return 1;
  }
  v115[0] = v25[1][6];
  v83 = sub_6D5440(v115);
  v84 = *(_QWORD **)(a1 + 248);
  v113 = v83;
  v85 = sub_A63CE0(v84);
  v86 = *(_QWORD *)&byte_8[v85 & 0xFFFFFFFFFFFFFFF0LL];
  v87 = *(_QWORD *)&byte_8[v113 & 0xFFFFFFFFFFFFFFF0LL];
  LOBYTE(v85) = v86 | v85;
  v19 = v86 & 0xFFFFFFFFFFFFFFF8LL;
  v88 = v87 | v113;
  a2 = v87 & 0xFFFFFFFFFFFFFFF8LL;
  v20 = a2 | v88 & 7;
  if ( v20 != (v19 | v85 & 7) )
  {
    v89 = (*(__int64 (__fastcall **)(__int64 *))(*v25[1] + 16))(v25[1]);
    sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), v89, 0x100Fu, 0);
    v90 = sub_1605D30((__int64)v115, (__int64 *)&v113);
    v91 = sub_A63CE0(*(_QWORD **)(a1 + 248));
    v92 = v91;
    if ( *(_BYTE *)(v90 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v90 + 32), v91, 8u);
    }
    else if ( *(_BYTE *)(v90 + 132) )
    {
      v102 = sub_168B9E0((_QWORD *)v90);
      v103 = *(_QWORD *)(v90 + 16);
      if ( v103 )
        v103 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v103 + 32LL))(*(_QWORD *)(v90 + 16));
      v114 = v103;
      v104 = sub_1587BC0(v102, &v114, v98, v99, v100, v101);
      sub_AE9DF0((unsigned __int8 **)(*v104 + 32LL * *(unsigned int *)(v90 + 128) + 8), v92, 8u);
    }
    v114 = (*(__int64 (__fastcall **)(__int64 *))(*v25[1] + 16))(v25[1]);
    sub_1587DB0(v90, &v114);
    sub_15F7200(v115);
    return 1;
  }
LABEL_50:
  v50 = *(__int64 **)(v3 + 120);
  v51 = &v50[(unsigned int)sub_B76070(v3, a2, v20, v19)];
  if ( v51 != v50 )
  {
    while ( 1 )
    {
      v52 = *v50;
      if ( sub_B74820(*v50) )
        break;
      if ( v51 == ++v50 )
        goto LABEL_55;
    }
    v53 = sub_B74790(v52);
    sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), v53, 0x100Au, 0);
    v114 = sub_B74790(v52);
    sub_1587DB0((__int64)v115, &v114);
    sub_15F7200(v115);
  }
LABEL_55:
  v54 = 0;
  if ( (*(_DWORD *)(v3 + 40) & 7) == 7 )
  {
    v55 = *(_QWORD *)(v3 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_DWORD *)v55 == 1 )
      v54 = *(_QWORD *)(v55 + 16);
  }
  v56 = sub_FDE160(v54);
  if ( v56 )
  {
    v57 = *(_DWORD *)(v3 + 24);
    if ( !v57 )
    {
LABEL_63:
      sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), v57, 0x1D79u, 0);
      LODWORD(v114) = v56;
      v59 = sub_1587D10((__int64)v115, (int *)&v114);
      LOBYTE(v113) = sub_13E43F0(
                       *(_QWORD *)(a1 + 232),
                       (char *)(*(_QWORD *)(v54 + 16) + 16LL),
                       **(unsigned int **)(v54 + 16));
      sub_1588420(v59, (unsigned __int8 *)&v113);
      sub_15F7200(v115);
      return v4;
    }
    v58 = sub_1021680(*(_QWORD *)(a1 + 272), v57);
    if ( !v58 || v58 == 3 )
    {
      v57 = *(_DWORD *)(v3 + 24);
      goto LABEL_63;
    }
  }
  return v4;
}
