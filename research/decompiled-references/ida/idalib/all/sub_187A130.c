__int64 __fastcall sub_187A130(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // r14
  __int64 v12; // r13
  __int64 *v13; // rsi
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rdx
  char v18; // bl
  char v19; // r13
  char v20; // r14
  int v21; // eax
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rdi
  int v25; // r15d
  _QWORD *v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // ebx
  __int64 *v32; // rdi
  char v33; // al
  __int64 v34; // rax
  _QWORD *v36; // rdi
  char v37; // al
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r13
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // rbx
  _QWORD *v46; // rbx
  unsigned __int64 v47; // rax
  __int64 *v48; // rsi
  unsigned int v49; // edx
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // r14
  __int64 v59; // rax
  unsigned int v60; // edx
  __int64 *v61; // rsi
  unsigned int v62; // ecx
  char v63; // r13
  __int64 v64; // rbx
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  unsigned __int64 v70; // rsi
  unsigned __int64 v71; // rax
  __int64 v72; // rdx
  __int64 *v73; // r13
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 *v76; // r14
  __int64 v77; // r15
  unsigned int v78; // eax
  unsigned int v79; // edx
  __int64 *v80; // rsi
  unsigned int v81; // ecx
  unsigned int v82; // eax
  unsigned int v83; // edx
  __int64 *v84; // rsi
  unsigned int v85; // ecx
  __int64 v86; // r13
  unsigned __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rax
  _QWORD *v94[2]; // [rsp+8h] [rbp-F0h] BYREF
  int v95; // [rsp+1Ch] [rbp-DCh] BYREF
  __int64 v96; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v97; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v98[25]; // [rsp+30h] [rbp-C8h] BYREF

  v94[0] = a2;
  v5 = sub_B77890((__int64)a2);
  if ( ((v5 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( (v5 & 0xFFFFFFFD) != 1 )
    {
      if ( (*((_BYTE *)v94[0] + 28) & 0x7Fu) - 35 > 3 )
      {
        v57 = v94[0][15];
        v58 = v57 + 8LL * (unsigned int)sub_B76070((__int64)v94[0], (__int64)a2, v3, v4);
        if ( v57 == v58 )
        {
LABEL_106:
          sub_168B9F0((__int64)v98, (__int64 *)(a1 + 8), *((_DWORD *)v94[0] + 6), 0x127Au, 0);
          v97 = v94[0][5];
          v31 = *(unsigned __int8 *)(sub_15894B0((__int64)v98, &v97) + 120);
          sub_15F7200(v98);
          return v31;
        }
        while ( 1 )
        {
          v98[0] = *(_QWORD *)(*(_QWORD *)v57 + 48LL);
          v59 = *(_QWORD *)(sub_C1BEF0((__int64)v98, (__int64)a2, v6, v7) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (*(_BYTE *)(v59 + 17) & 4) != 0
            || (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47) <= 1u )
          {
            break;
          }
          v57 += 8;
          if ( v58 == v57 )
            goto LABEL_106;
        }
      }
      else if ( sub_B979F0(v94[0]) )
      {
        v48 = (__int64 *)(a1 + 8);
        v49 = *((_DWORD *)v94[0] + 6);
        if ( (unsigned int)(v5 - 42) > 1 )
        {
          sub_168B9F0((__int64)v98, v48, v49, 0x127Cu, 0);
          v31 = *(unsigned __int8 *)(sub_1795A40((__int64)v98, (__int64 *)v94) + 120);
          sub_15F7200(v98);
          return v31;
        }
        sub_168B9F0((__int64)v98, v48, v49, (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 1) == 0 ? 5639 : 6753, 0);
        a2 = (__int64 *)v94;
        sub_1795A40((__int64)v98, (__int64 *)v94);
        sub_15F7200(v98);
      }
      v8 = v94[0];
      if ( v5 != 42 )
      {
        v9 = (__int64 *)v94[0][15];
        v11 = &v9[(unsigned int)sub_B76070((__int64)v94[0], (__int64)a2, v6, v7)];
        if ( v11 == v9 )
          goto LABEL_51;
        while ( 1 )
        {
          v12 = *v9;
          if ( sub_B74820(*v9) )
            break;
          if ( v11 == ++v9 )
            goto LABEL_51;
        }
        if ( !v12 )
        {
LABEL_51:
          v50 = 3LL * v5;
          v18 = byte_2642F60[v50];
          v19 = byte_2642F60[v50 + 1];
          v20 = byte_2642F60[v50 + 2];
          v51 = sub_B76070((__int64)v94[0], (__int64)a2, v50, v10);
          v24 = v94[0];
          v25 = v51;
          if ( (*((_BYTE *)v94[0] + 28) & 0x7Fu) - 35 > 3 )
            goto LABEL_53;
          goto LABEL_52;
        }
        v13 = (__int64 *)(a1 + 8);
        if ( v5 != 43 )
        {
          sub_168B9F0((__int64)v98, v13, *(_DWORD *)(v12 + 24), 0x1277u, 0);
          v96 = v94[0][5];
          v64 = sub_15894B0((__int64)v98, &v96);
          v97 = sub_B74790(v12);
          v31 = *(unsigned __int8 *)(sub_1587DB0(v64, &v97) + 120);
          sub_15F7200(v98);
          return v31;
        }
        v14 = -((*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 1) == 0);
        LOBYTE(v14) = v14 & 0x44;
        sub_168B9F0((__int64)v98, v13, *((_DWORD *)v94[0] + 6), v14 + 5677, 0);
        v96 = v94[0][5];
        v15 = sub_15894B0((__int64)v98, &v96);
        v95 = 1;
        v16 = sub_1587D10(v15, &v95);
        a2 = &v97;
        v97 = sub_B74790(v12);
        sub_1587DB0(v16, &v97);
        sub_15F7200(v98);
        v8 = v94[0];
      }
      v17 = 3LL * v5;
      v18 = byte_2642F60[v17];
      v19 = byte_2642F60[v17 + 1];
      v20 = byte_2642F60[v17 + 2];
      v21 = sub_B76070((__int64)v8, (__int64)a2, v17, v7);
      v24 = v94[0];
      v25 = v21;
      if ( (*((_BYTE *)v94[0] + 28) & 0x7Fu) - 35 > 3 )
      {
        v95 = v21;
LABEL_15:
        if ( v25 != 2 && v5 == 43 )
        {
          v54 = -((*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 1) == 0);
          LOBYTE(v54) = v54 & 0x44;
          sub_168B9F0((__int64)v98, (__int64 *)(a1 + 8), *((_DWORD *)v94[0] + 6), v54 + 5677, 0);
          v97 = v94[0][5];
          v55 = sub_15894B0((__int64)v98, &v97);
          a2 = &v96;
          LODWORD(v96) = 2 * (v95 != 1);
          sub_1587D10(v55, (int *)&v96);
          sub_15F7200(v98);
        }
        else if ( v5 == 42 )
        {
          if ( !v20 )
            return 0;
          goto LABEL_19;
        }
LABEL_62:
        v56 = *(_QWORD *)(v94[0][6] & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v56 + 16) != 26 )
          v56 = sub_F63050(*(_QWORD *)(v94[0][6] & 0xFFFFFFFFFFFFFFF0LL), a2, v22, v23);
        if ( *(char *)(v56 + 19) < 0 )
        {
          v84 = (__int64 *)(a1 + 8);
          v85 = 4733;
          v83 = *((_DWORD *)v94[0] + 6);
          goto LABEL_96;
        }
        if ( !v20 )
        {
LABEL_20:
          if ( (unsigned int)(v5 - 37) <= 1 && v95 == 2 )
          {
            v26 = v94[0];
            v27 = *(_QWORD *)(v26[15]
                            + 8LL * ((unsigned int)sub_B76070((__int64)v94[0], (__int64)a2, (__int64)v22, v23) - 1));
            v28 = *(_QWORD *)(*(_QWORD *)(v27 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            v29 = *(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(v29 + 16) != 13 || ((*(_WORD *)(v29 + 18) >> 3) & 0x1FF) != 0x1C4)
              && (*(_BYTE *)(v28 + 17) & 4) == 0 )
            {
              sub_168B9F0((__int64)v98, (__int64 *)(a1 + 8), *(_DWORD *)(v27 + 24), 0x127Bu, 0);
              v97 = *(_QWORD *)(v27 + 48);
              v30 = sub_162B6D0((__int64)v98, &v97);
              LOBYTE(v96) = v5 == 38;
              v31 = *(unsigned __int8 *)(sub_1588420(v30, (unsigned __int8 *)&v96) + 120);
              sub_15F7200(v98);
              return v31;
            }
          }
          return 0;
        }
LABEL_19:
        v22 = v94[0];
        if ( (*((_BYTE *)v94[0] + 28) & 0x7Fu) - 35 <= 3 )
          goto LABEL_20;
        v83 = *((_DWORD *)v94[0] + 6);
        v84 = (__int64 *)(a1 + 8);
        v85 = 4729;
LABEL_96:
        sub_168B9F0((__int64)v98, v84, v83, v85, 0);
        v97 = v94[0][5];
        v31 = *(unsigned __int8 *)(sub_15894B0((__int64)v98, &v97) + 120);
        sub_15F7200(v98);
        return v31;
      }
LABEL_52:
      v25 += (unsigned __int8)sub_B771C0((__int64)v24, (__int64)a2, (__int64)v22, v23) ^ 1;
LABEL_53:
      v95 = v25;
      if ( (unsigned int)(v5 - 42) <= 1 )
        goto LABEL_15;
      if ( v25 != 1 )
      {
        if ( v25 == 2 )
        {
          if ( v19 )
            goto LABEL_62;
        }
        else if ( v19 )
        {
          if ( v18 )
          {
            LODWORD(v96) = 2;
LABEL_59:
            sub_168B9F0((__int64)v98, (__int64 *)(a1 + 8), *((_DWORD *)v94[0] + 6), 0x1278u, 0);
            v97 = v94[0][5];
            v52 = sub_15894B0((__int64)v98, &v97);
            v53 = sub_1588370(v52, (unsigned int *)&v95);
            v31 = *(unsigned __int8 *)(sub_1588370(v53, (unsigned int *)&v96) + 120);
            sub_15F7200(v98);
            return v31;
          }
LABEL_79:
          LODWORD(v96) = 1;
          goto LABEL_59;
        }
        if ( v18 )
        {
          LODWORD(v96) = 0;
          goto LABEL_59;
        }
        goto LABEL_79;
      }
      if ( v18 )
        goto LABEL_62;
      goto LABEL_79;
    }
    v32 = (__int64 *)(v94[0][2] & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v94[0][2] & 4) != 0 )
    {
      v33 = *(_BYTE *)(sub_B8EAA0(*v32) + 8) & 0x7F;
      if ( v33 != 24 )
      {
LABEL_28:
        if ( v33 || *((_BYTE *)v94[0] + 81) >> 5 != 2 )
        {
LABEL_30:
          v34 = sub_A63CE0(*(_QWORD **)(a1 + 248));
          return (unsigned int)sub_1879B50(
                                 a1,
                                 (__int64)v94[0],
                                 0,
                                 *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19056LL),
                                 ((unsigned __int8)*(_QWORD *)&byte_8[v34 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v34)
                               & 7
                               | *(_QWORD *)&byte_8[v34 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL,
                                 4725,
                                 118);
        }
        v79 = *((_DWORD *)v94[0] + 6);
        v80 = (__int64 *)(a1 + 8);
        v81 = 4720;
LABEL_89:
        sub_168B9F0((__int64)v98, v80, v79, v81, 0);
        v97 = v94[0][5];
        v31 = *(unsigned __int8 *)(sub_15894B0((__int64)v98, &v97) + 120);
        sub_15F7200(v98);
        if ( (_BYTE)v31 )
          return v31;
        goto LABEL_30;
      }
    }
    else
    {
      v33 = *(_BYTE *)(sub_B8EAA0((__int64)v32) + 8) & 0x7F;
      if ( v33 != 24 )
        goto LABEL_28;
    }
    v79 = *((_DWORD *)v94[0] + 6);
    v80 = (__int64 *)(a1 + 8);
    v81 = 4719;
    goto LABEL_89;
  }
  v36 = (_QWORD *)(v94[0][2] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v94[0][2] & 4) != 0 )
    v36 = (_QWORD *)*v36;
  v37 = *(_BYTE *)(sub_B8EAA0((__int64)v36) + 8) & 0x7F;
  if ( v37 == 24 )
  {
    v60 = *((_DWORD *)v94[0] + 6);
    v61 = (__int64 *)(a1 + 8);
    v62 = 4719;
  }
  else
  {
    if ( v37 || *((_BYTE *)v94[0] + 81) >> 5 != 2 )
      goto LABEL_37;
    v60 = *((_DWORD *)v94[0] + 6);
    v61 = (__int64 *)(a1 + 8);
    v62 = 4720;
  }
  sub_168B9F0((__int64)v98, v61, v60, v62, 0);
  a2 = &v97;
  v97 = v94[0][5];
  v63 = *(_BYTE *)(sub_15894B0((__int64)v98, &v97) + 120);
  sub_15F7200(v98);
  if ( v63 )
    return 1;
LABEL_37:
  if ( (*((_BYTE *)v94[0] + 28) & 0x7Fu) - 35 > 3 )
    return (unsigned int)sub_1879B50(
                           a1,
                           (__int64)v94[0],
                           1,
                           *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL),
                           *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19056LL),
                           4716,
                           109);
  v98[0] = 0;
  if ( (!(unsigned int)sub_B76070((__int64)v94[0], (__int64)a2, v38, v39)
     || !(unsigned __int8)sub_1844A50(
                            a1,
                            *(_QWORD *)(**((_QWORD **)v94[0] + 15) + 48LL),
                            nullptr,
                            "type_identity",
                            (_QWORD **)(a1 + 4184),
                            v98))
    && !v98[0] )
  {
    goto LABEL_41;
  }
  v42 = *(_QWORD *)(a1 + 248);
  v43 = *(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(v94[0][15] + 8LL) + 48LL) & 0xFFFFFFFFFFFFFFF0LL];
  v44 = v43 | *(_QWORD *)(*(_QWORD *)(v94[0][15] + 8LL) + 48LL);
  v40 = v43 & 0xFFFFFFFFFFFFFFF8LL;
  v45 = v40 | v44 & 7;
  if ( *(_QWORD *)(v42 + 19056) == v45 )
    goto LABEL_41;
  v65 = sub_B72690((__int64)(v94[0] + 9));
  v69 = v65 - 64;
  if ( v65 )
    v65 -= 64LL;
  v70 = sub_A7A9D0(v42, v65, v69, v66, v67, v68);
  v71 = sub_A70010(v42, v70);
  v72 = *(_QWORD *)&byte_8[v71 & 0xFFFFFFFFFFFFFFF0LL];
  LOBYTE(v71) = v72 | v71;
  v40 = v72 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v45 != (v40 | v71 & 7)
    || (v73 = (__int64 *)v94[0][15], v76 = &v73[(unsigned int)sub_B76070((__int64)v94[0], v70, v40, v41)], v73 == v76) )
  {
LABEL_41:
    if ( sub_1844F30(a1, (unsigned __int64)v94[0], v40, v41) )
    {
      v46 = v94[0] + 9;
      v86 = *(_QWORD *)(a1 + 248);
      v87 = sub_B72690((__int64)(v94[0] + 9));
      v91 = v87 - 64;
      if ( v87 )
        v87 -= 64LL;
      v92 = sub_A7A9D0(v86, v87, v91, v88, v89, v90);
      v93 = sub_A70010(v86, v92);
      if ( !(unsigned __int8)sub_1879B50(
                               a1,
                               (__int64)v94[0],
                               1,
                               *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL),
                               ((unsigned __int8)*(_QWORD *)&byte_8[v93 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v93)
                             & 7
                             | *(_QWORD *)&byte_8[v93 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL,
                               4716,
                               109) )
      {
LABEL_43:
        v47 = sub_B72690((__int64)v46);
        if ( v47 )
          v47 -= 64LL;
        if ( !(unsigned __int8)sub_B8E180(v47 + 64) )
        {
          LOBYTE(v82) = sub_B74C20((__int64)v94[0]);
          v31 = v82;
          if ( (_BYTE)v82 )
          {
            if ( !(unsigned __int8)sub_19A2FE0(a1, v94[0]) )
            {
              sub_168B9F0((__int64)v98, (__int64 *)(a1 + 8), *((_DWORD *)v94[0] + 6), 0xE5Eu, 0);
              sub_15F7200(v98);
              return v31;
            }
          }
        }
        return 0;
      }
    }
    else
    {
      v46 = v94[0] + 9;
      if ( !(unsigned __int8)sub_1879B50(
                               a1,
                               (__int64)v94[0],
                               1,
                               *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL),
                               *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19056LL),
                               4716,
                               109) )
        goto LABEL_43;
    }
    return 1;
  }
  while ( 1 )
  {
    v77 = *v73;
    LOBYTE(v78) = sub_1837A90(*(_QWORD *)(*v73 + 48), v70, v40, v41, v74, v75);
    v31 = v78;
    if ( (_BYTE)v78 )
      break;
    if ( v76 == ++v73 )
      goto LABEL_41;
  }
  sub_168B9F0((__int64)v98, (__int64 *)(a1 + 8), *((_DWORD *)v94[0] + 6), 0x1448u, 0);
  v97 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
  sub_1587DB0((__int64)v98, &v97);
  sub_15F7200(v98);
  return v31;
}
