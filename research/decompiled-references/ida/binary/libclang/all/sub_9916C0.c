__int64 __fastcall sub_9916C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // esi
  unsigned int v13; // edi
  int *v14; // rax
  int v15; // r8d
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  unsigned int v22; // edi
  int *v23; // rax
  int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // r14
  unsigned int v29; // ebx
  __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // rax
  int v34; // ebp
  __int64 v35; // rdx
  __int64 v36; // rsi
  int v37; // r8d
  __int64 v38; // rax
  int v39; // r8d
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // r15
  int v42; // eax
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rbp
  int v47; // eax
  int v48; // r14d
  __int64 v49; // rax
  unsigned __int64 v50; // rsi
  unsigned int v51; // ebp
  int v52; // edi
  __int64 v53; // rbp
  unsigned __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // r8
  unsigned __int64 v58; // rcx
  __int64 v59; // rsi
  unsigned __int8 *v60; // rcx
  unsigned __int8 v61; // al
  __int64 v62; // rdi
  unsigned __int8 *v63; // rsi
  unsigned __int8 v64; // dl
  unsigned __int64 v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // r8
  unsigned __int64 v69; // rcx
  int v70; // r10d
  int v71; // r10d
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned int v74; // ebp
  int v75; // eax
  int v76; // eax
  int v77; // eax
  unsigned int v78; // r14d
  int v79; // edx
  __int64 v80; // [rsp+0h] [rbp-178h]
  __int64 v81; // [rsp+0h] [rbp-178h]
  __int64 v82; // [rsp+0h] [rbp-178h]
  int v83; // [rsp+10h] [rbp-168h]
  int v84; // [rsp+10h] [rbp-168h]
  unsigned __int64 v85; // [rsp+10h] [rbp-168h]
  int v86; // [rsp+10h] [rbp-168h]
  int v87; // [rsp+10h] [rbp-168h]
  int v88; // [rsp+10h] [rbp-168h]
  int v89; // [rsp+10h] [rbp-168h]
  int v91; // [rsp+20h] [rbp-158h]
  int v92; // [rsp+20h] [rbp-158h]
  int v93; // [rsp+20h] [rbp-158h]
  int v94; // [rsp+20h] [rbp-158h]
  int v95; // [rsp+20h] [rbp-158h]
  int v96; // [rsp+20h] [rbp-158h]
  int v97; // [rsp+20h] [rbp-158h]
  __int64 v98; // [rsp+28h] [rbp-150h]
  unsigned int v99; // [rsp+28h] [rbp-150h]
  unsigned int v100; // [rsp+28h] [rbp-150h]
  __int64 v101; // [rsp+28h] [rbp-150h]
  int v102; // [rsp+34h] [rbp-144h]
  __int64 v103; // [rsp+40h] [rbp-138h] BYREF
  __int128 v104; // [rsp+48h] [rbp-130h]
  __int64 v105; // [rsp+58h] [rbp-120h]
  __int64 v106; // [rsp+60h] [rbp-118h]
  char v107; // [rsp+68h] [rbp-110h]
  int v108; // [rsp+70h] [rbp-108h]
  void *v109; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v110; // [rsp+88h] [rbp-F0h]
  __int64 v111; // [rsp+98h] [rbp-E0h]
  __int64 v112; // [rsp+A0h] [rbp-D8h]
  char v113; // [rsp+A8h] [rbp-D0h]
  int v114; // [rsp+B0h] [rbp-C8h]
  _QWORD v115[3]; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v116; // [rsp+D8h] [rbp-A0h]
  __int64 v117; // [rsp+E0h] [rbp-98h]
  int v118; // [rsp+F0h] [rbp-88h]
  _QWORD v119[3]; // [rsp+100h] [rbp-78h] BYREF
  __int64 v120; // [rsp+118h] [rbp-60h]
  __int64 v121; // [rsp+120h] [rbp-58h]
  int v122; // [rsp+130h] [rbp-48h]

  v9 = *(_QWORD *)(a3 + 32);
  v10 = *(_QWORD *)(a3 + 192);
  v11 = *(unsigned int *)(a3 + 208);
  v12 = **(_DWORD **)(v9 + 448);
  if ( (_DWORD)v11 )
  {
    v13 = (v11 - 1) & (37 * v12);
    v14 = (int *)(v10 + 16LL * v13);
    v15 = *v14;
    if ( v12 == *v14 )
    {
LABEL_3:
      if ( v14 != (int *)(v10 + 16 * v11) )
      {
        sub_A1BF70(v119, *((_QWORD *)v14 + 1));
        v16 = v120;
        v17 = v119[0];
        if ( !v122
          && (v82 = v119[0], v31 = sub_8E5480((__int64)v119), v17 = v82, *(_BYTE *)(v31 + 51))
          && (unsigned int)v121 == v82 )
        {
          v18 = v16 + (unsigned int)v121 + 72;
        }
        else
        {
          v18 = v16 + v17 + 40;
        }
        sub_A1C0C0(v119);
        goto LABEL_7;
      }
    }
    else
    {
      v43 = 1;
      while ( v15 != -1 )
      {
        v70 = v43 + 1;
        v13 = (v11 - 1) & (v43 + v13);
        v14 = (int *)(v10 + 16LL * v13);
        v15 = *v14;
        if ( v12 == *v14 )
          goto LABEL_3;
        v43 = v70;
      }
    }
  }
  v18 = *(_QWORD *)(a3 + 168) + v12 - (unsigned __int64)*(unsigned int *)(a3 + 160);
LABEL_7:
  sub_A1BFE0(v115, v18);
  v19 = *(unsigned int *)(a3 + 208);
  v20 = *(_QWORD *)(a3 + 192);
  v21 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 448LL) + 4LL);
  if ( !(_DWORD)v19 )
    goto LABEL_35;
  v22 = (v19 - 1) & (37 * v21);
  v23 = (int *)(v20 + 16LL * v22);
  v24 = *v23;
  if ( (_DWORD)v21 != *v23 )
  {
    v42 = 1;
    while ( v24 != -1 )
    {
      v71 = v42 + 1;
      v72 = ((_DWORD)v19 - 1) & (v22 + v42);
      v22 = v72;
      v23 = (int *)(v20 + 16 * v72);
      v24 = *v23;
      if ( (_DWORD)v21 == *v23 )
        goto LABEL_9;
      v42 = v71;
    }
    goto LABEL_35;
  }
LABEL_9:
  if ( v23 == (int *)(v20 + 16 * v19) )
  {
LABEL_35:
    v28 = *(_QWORD *)(a3 + 168) + v21 - *(unsigned int *)(a3 + 160);
    goto LABEL_14;
  }
  sub_A1BF70(v119, *((_QWORD *)v23 + 1));
  v25 = v120;
  v26 = v119[0];
  if ( v122
    || (v80 = v120, v27 = sub_8E5480((__int64)v119), v25 = v80, !*(_BYTE *)(v27 + 51))
    || (v28 = v80 + (unsigned int)v121 + 72, (unsigned int)v121 != v26) )
  {
    v28 = v25 + v26 + 40;
  }
  sub_A1C0C0(v119);
LABEL_14:
  sub_A1BFE0(v119, v28);
  if ( a4 == 1200 || a4 == 1211 )
    sub_9908C0(a1, a2, a4);
  v81 = -1;
  if ( a4 - 1210 <= 1 )
  {
    v44 = sub_985340(
            *(__int64 **)(a1 + 192),
            *(_QWORD *)(*(unsigned __int8 *)(a5 + 3) + a5 + 8LL * ((*(_BYTE *)(a5 + 2) & 8) != 0) + 8 + 16));
    v45 = *(_QWORD *)(a1 + 184);
    v103 = v44;
    sub_97E960((__int64)&v109, v45, v44, 0);
    v81 = (__int64)v109;
    if ( (unsigned int)v110 > 0x40 )
    {
      v46 = *(_QWORD *)v109;
      if ( v109 )
        operator delete[](v109);
      v81 = v46;
    }
    if ( !v81 )
    {
      sub_97E900(a1, 0, *(_QWORD *)(a5 + 8));
      goto LABEL_45;
    }
  }
  if ( !(unsigned __int8)sub_9D4CF0(a1, a2, v115, 0) || !(unsigned __int8)sub_9D4CF0(a1, a2, v119, 0) )
    goto LABEL_18;
  v32 = v118;
  if ( !v118 )
  {
    if ( v116 )
    {
      v33 = *(_QWORD *)(v116 + 32);
      if ( *(_BYTE *)(v33 + 52) )
        goto LABEL_18;
      v34 = v122;
      if ( !v122 )
      {
        v35 = v120;
        v36 = v120;
        if ( v120 )
        {
          if ( !*(_BYTE *)(*(_QWORD *)(v120 + 32) + 52LL) )
          {
            v37 = v117;
            if ( (unsigned int)v117 <= 0x10 )
            {
              v91 = v117;
              v83 = v118;
              v98 = v120;
              v38 = sub_8E5480((__int64)v115);
              v32 = v83;
              v39 = v91;
              v40 = *(unsigned int *)(v38 + 8);
              if ( !*(_DWORD *)(v38 + 8) )
              {
                v35 = v98;
                LODWORD(v41) = 0;
                goto LABEL_55;
              }
LABEL_155:
              v78 = v115[0];
              v79 = 0;
              if ( v115[0] == v39 )
                goto LABEL_158;
              goto LABEL_156;
            }
            v78 = v115[0];
            if ( (unsigned int)v117 != v115[0] )
              goto LABEL_164;
LABEL_134:
            LODWORD(v41) = 0;
            goto LABEL_55;
          }
LABEL_18:
          v29 = 0;
          goto LABEL_19;
        }
        v37 = v117;
        if ( (unsigned int)v117 <= 0x10 )
        {
          v95 = v117;
          v88 = v118;
          v38 = sub_8E5480((__int64)v115);
          v32 = v88;
          v39 = v95;
          v40 = *(unsigned int *)(v38 + 8);
          if ( *(_DWORD *)(v38 + 8) )
            goto LABEL_155;
        }
        else
        {
          v78 = v115[0];
          if ( v115[0] != (unsigned int)v117 )
          {
LABEL_164:
            if ( v37 == -1 )
            {
              LODWORD(v41) = 0;
              if ( *(_DWORD *)(v33 + 12) )
                LODWORD(v41) = v78 / *(_DWORD *)(v33 + 12);
              goto LABEL_54;
            }
            v97 = v37;
            v89 = v118;
            v101 = v120;
            v38 = sub_8E5480((__int64)v115);
            v32 = v89;
            v39 = v97;
            v40 = *(unsigned int *)(v38 + 8);
            if ( !*(_DWORD *)(v38 + 8) )
            {
              v36 = v101;
              LODWORD(v41) = 0;
              goto LABEL_54;
            }
LABEL_156:
            v79 = 32;
            if ( *(_QWORD *)(v38 + 32) )
              v79 = 16;
LABEL_158:
            v41 = (v78 - v39 - v79) / v40;
            if ( !v34 )
            {
              v36 = v120;
              goto LABEL_54;
            }
LABEL_139:
            v76 = v119[0];
            if ( v34 == 1 )
            {
              if ( v120 )
                v76 = *(_DWORD *)(v120 + 8) * LODWORD(v119[0]);
              v77 = v121 + v76;
            }
            else
            {
              v77 = v120 + LODWORD(v119[0]);
            }
            LODWORD(v85) = v77;
            goto LABEL_62;
          }
        }
        goto LABEL_169;
      }
      if ( (unsigned int)v117 <= 0x10 )
      {
        v93 = v117;
        v86 = v118;
        v38 = sub_8E5480((__int64)v115);
        v32 = v86;
        v39 = v93;
        v40 = *(unsigned int *)(v38 + 8);
        if ( *(_DWORD *)(v38 + 8) )
          goto LABEL_155;
      }
      else
      {
        v78 = v115[0];
        if ( v115[0] != (unsigned int)v117 )
        {
          if ( (_DWORD)v117 == -1 )
          {
            LODWORD(v41) = 0;
            if ( *(_DWORD *)(v33 + 12) )
              LODWORD(v41) = LODWORD(v115[0]) / *(_DWORD *)(v33 + 12);
            goto LABEL_139;
          }
          v94 = v117;
          v87 = v118;
          v38 = sub_8E5480((__int64)v115);
          v32 = v87;
          v39 = v94;
          v40 = *(unsigned int *)(v38 + 8);
          if ( *(_DWORD *)(v38 + 8) )
            goto LABEL_156;
        }
      }
    }
    else
    {
      v34 = v122;
      if ( !v122 )
      {
        v35 = v120;
        if ( v120 )
        {
          if ( !*(_BYTE *)(*(_QWORD *)(v120 + 32) + 52LL) )
            goto LABEL_134;
          goto LABEL_18;
        }
LABEL_169:
        LODWORD(v85) = 0;
        LODWORD(v41) = 0;
        goto LABEL_62;
      }
    }
    LODWORD(v41) = 0;
    goto LABEL_139;
  }
  v34 = v122;
  if ( v122 )
  {
    v75 = v115[0];
    if ( v118 == 1 )
    {
      if ( v116 )
        v75 = *(_DWORD *)(v116 + 8) * LODWORD(v115[0]);
      LODWORD(v41) = v117 + v75;
    }
    else
    {
      LODWORD(v41) = v116 + LODWORD(v115[0]);
    }
    goto LABEL_139;
  }
  v36 = v120;
  if ( v120 && *(_BYTE *)(*(_QWORD *)(v120 + 32) + 52LL) )
    goto LABEL_18;
  v47 = v115[0];
  if ( v118 == 1 )
  {
    if ( v116 )
      v47 = *(_DWORD *)(v116 + 8) * LODWORD(v115[0]);
    LODWORD(v41) = v117 + v47;
  }
  else
  {
    LODWORD(v41) = v116 + LODWORD(v115[0]);
  }
LABEL_54:
  v35 = v36;
  if ( !v36 )
    goto LABEL_160;
LABEL_55:
  v48 = v121;
  if ( (unsigned int)v121 > 0x10 )
  {
    v51 = v119[0];
    LODWORD(v85) = 0;
    if ( (unsigned int)v121 == v119[0] )
      goto LABEL_62;
    if ( (_DWORD)v121 == -1 )
    {
      v73 = *(_QWORD *)(v35 + 32);
      v50 = *(unsigned int *)(v73 + 12);
      if ( !*(_DWORD *)(v73 + 12) )
        goto LABEL_62;
      goto LABEL_61;
    }
    v96 = v32;
    v49 = sub_8E5480((__int64)v119);
    v32 = v96;
    v50 = *(unsigned int *)(v49 + 8);
    if ( !*(_DWORD *)(v49 + 8) )
      goto LABEL_62;
    goto LABEL_58;
  }
  v84 = v32;
  v49 = sub_8E5480((__int64)v119);
  v32 = v84;
  v50 = *(unsigned int *)(v49 + 8);
  if ( !*(_DWORD *)(v49 + 8) )
  {
LABEL_160:
    LODWORD(v85) = 0;
    goto LABEL_62;
  }
  v51 = v119[0];
  v52 = 0;
  if ( v119[0] != v48 )
  {
LABEL_58:
    v52 = 32;
    if ( *(_QWORD *)(v49 + 32) )
      v52 = 16;
  }
  v51 = v51 - v52 - v48;
LABEL_61:
  v85 = v51 / v50;
LABEL_62:
  v53 = 0;
  while ( 1 )
  {
    if ( v32 == 1 )
    {
      v109 = (void *)(unsigned int)(v41 + v53);
      v114 = 1;
      v112 = v117;
      v110 = 0;
      v111 = v116;
      goto LABEL_104;
    }
    if ( v32 == 2 )
    {
      v109 = (void *)(unsigned int)(v41 + v53);
      v114 = 2;
      v111 = v116;
      v112 = 0;
      v113 = 1;
      v110 = 0;
      goto LABEL_104;
    }
    if ( (_DWORD)v117 != -1 )
    {
      v102 = v32;
      v100 = v117;
      v65 = (unsigned int)(v41 + v53) * (unsigned __int64)*(unsigned int *)(sub_8E5480((__int64)v115) + 8);
      if ( v102 )
      {
        if ( v102 == 3 )
          BUG();
        v66 = v116;
        v67 = *(_QWORD *)(v116 + 32);
      }
      else
      {
        v66 = v116;
        v67 = *(_QWORD *)(v116 + 32);
        if ( *(_DWORD *)(v67 + 16) != v100 && v100 )
        {
          v68 = v100;
          v67 = *(_QWORD *)(v116 + v100 + 32);
          goto LABEL_101;
        }
      }
      v68 = v100;
LABEL_101:
      v69 = v65 + 32;
      if ( *(_QWORD *)(v67 + 32) )
        v69 = v65 + 16;
      sub_A1C030(&v109, v66, v100, v68 + v69);
      goto LABEL_104;
    }
    if ( v32 == 3 )
      BUG();
    sub_A1C030(&v109, v116, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v116 + 32) + 12LL));
LABEL_104:
    if ( v122 == 1 )
    {
      v103 = (unsigned int)(v85 + v53);
      v108 = 1;
      v106 = v121;
      v104 = 0;
      v105 = v120;
      goto LABEL_72;
    }
    if ( v122 == 2 )
    {
      v103 = (unsigned int)(v85 + v53);
      v108 = 2;
      v105 = v120;
      v106 = 0;
      v107 = 1;
      v104 = 0;
      goto LABEL_72;
    }
    if ( (_DWORD)v121 != -1 )
    {
      v99 = v121;
      v92 = v122;
      v54 = (unsigned int)(v85 + v53) * (unsigned __int64)*(unsigned int *)(sub_8E5480((__int64)v119) + 8);
      if ( v92 )
      {
        if ( v92 == 3 )
          BUG();
        v55 = v120;
        v56 = *(_QWORD *)(v120 + 32);
      }
      else
      {
        v55 = v120;
        v56 = *(_QWORD *)(v120 + 32);
        if ( *(_DWORD *)(v56 + 16) != v99 && v99 )
        {
          v57 = v99;
          v56 = *(_QWORD *)(v120 + v99 + 32);
          goto LABEL_69;
        }
      }
      v57 = v99;
LABEL_69:
      v58 = v54 + 32;
      if ( *(_QWORD *)(v56 + 32) )
        v58 = v54 + 16;
      sub_A1C030(&v103, v55, v99, v57 + v58);
      goto LABEL_72;
    }
    if ( v122 == 3 )
      BUG();
    sub_A1C030(&v103, v120, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v120 + 32) + 12LL));
LABEL_72:
    if ( !(unsigned __int8)sub_9D52F0(a1, a2, &v109, 0) || !(unsigned __int8)sub_9D52F0(a1, a2, &v103, 0) )
    {
      sub_A1C0C0(&v103);
      sub_A1C0C0(&v109);
      goto LABEL_18;
    }
    if ( v114 )
      goto LABEL_80;
    v59 = *(_QWORD *)(v111 + 32);
    if ( *(_DWORD *)(v59 + 16) != (_DWORD)v112 && (_DWORD)v112 )
      v59 = *(_QWORD *)(v111 + (unsigned int)v112 + 32);
    if ( !*(_BYTE *)(v59 + 51) || (v60 = (unsigned __int8 *)v109 + v111 + 72, (void *)(unsigned int)v112 != v109) )
LABEL_80:
      v60 = (unsigned __int8 *)v109 + v111 + 40;
    v61 = *v60;
    if ( v108 )
      goto LABEL_87;
    v62 = *(_QWORD *)(v105 + 32);
    if ( *(_DWORD *)(v62 + 16) != (_DWORD)v106 && (_DWORD)v106 )
      v62 = *(_QWORD *)(v105 + (unsigned int)v106 + 32);
    if ( !*(_BYTE *)(v62 + 51) || (v63 = (unsigned __int8 *)(v105 + v103 + 72), (unsigned int)v106 != v103) )
LABEL_87:
      v63 = (unsigned __int8 *)(v105 + v103 + 40);
    v64 = *v63;
    if ( *v63 < v61 )
    {
      v74 = 1;
      goto LABEL_151;
    }
    if ( v61 < v64 )
    {
      v74 = -1;
      goto LABEL_151;
    }
    if ( !v61 || !v64 )
      break;
    ++v53;
    sub_A1C0C0(&v103);
    sub_A1C0C0(&v109);
    if ( v81 == v53 )
    {
      v74 = 0;
      goto LABEL_136;
    }
    v32 = v118;
  }
  v74 = 0;
LABEL_151:
  sub_A1C0C0(&v103);
  sub_A1C0C0(&v109);
LABEL_136:
  sub_97E900(a1, v74, *(_QWORD *)(a5 + 8));
LABEL_45:
  v29 = 1;
LABEL_19:
  sub_A1C0C0(v119);
  sub_A1C0C0(v115);
  return v29;
}

