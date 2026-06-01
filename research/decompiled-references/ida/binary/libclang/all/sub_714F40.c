unsigned __int64 __fastcall sub_714F40(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 i; // rax
  __int64 v8; // rdi
  int v9; // edx
  bool v10; // r13
  __int64 j; // rax
  __int64 v12; // rdi
  int v13; // edx
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // edx
  _QWORD *v18; // rdi
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 v20; // r13
  int v21; // edx
  __int64 *v22; // rdi
  int v23; // r11d
  __int64 *v24; // rsi
  unsigned int v25; // r10d
  __int64 *v26; // rax
  __int64 v27; // r9
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbp
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int v42; // edx
  void **v43; // r13
  char *v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rbp
  unsigned __int64 v49; // rbp
  unsigned __int8 v50; // al
  unsigned __int64 v51; // rax
  char v52; // bl
  __int64 v53; // rax
  unsigned int v54; // ecx
  unsigned int v55; // eax
  __int64 *v56; // rdi
  int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // r8
  int v60; // r10d
  __int64 *v61; // r9
  __int64 *v62; // rcx
  int v63; // edx
  __int64 v64; // r8
  int v65; // r10d
  __int64 v66; // rdi
  _QWORD *v67; // rdi
  __int64 (__fastcall *v68)(__int64); // rax
  __int64 v69; // rcx
  __int64 *v70; // rdi
  __int64 v71; // rsi
  unsigned int v72; // edx
  __int64 *v73; // rax
  __int64 v74; // r8
  __int64 *v75; // rdx
  __int64 v76; // rax
  unsigned __int64 v77; // rax
  int v78; // eax
  int v79; // r9d
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  void **v89; // r13
  char *v90; // r12
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rsi
  unsigned __int64 v95; // rsi
  unsigned __int8 v96; // cl
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  char v100; // [rsp+8h] [rbp-110h]
  char v101; // [rsp+10h] [rbp-108h]
  __int64 *v102; // [rsp+10h] [rbp-108h]
  __int64 v103; // [rsp+10h] [rbp-108h]
  char v104; // [rsp+10h] [rbp-108h]
  __int64 v105; // [rsp+18h] [rbp-100h]
  __int64 *v106; // [rsp+20h] [rbp-F8h]
  __int64 *v107; // [rsp+20h] [rbp-F8h]
  __int64 v108; // [rsp+28h] [rbp-F0h]
  __int64 v109; // [rsp+28h] [rbp-F0h]
  __int64 *v110; // [rsp+30h] [rbp-E8h]
  __int64 v111; // [rsp+38h] [rbp-E0h]
  __int64 v112; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v113; // [rsp+48h] [rbp-D0h] BYREF
  unsigned int v114; // [rsp+50h] [rbp-C8h]
  __int64 v115; // [rsp+58h] [rbp-C0h]
  __int64 v116; // [rsp+68h] [rbp-B0h]
  __int64 v117; // [rsp+78h] [rbp-A0h]
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v119; // [rsp+98h] [rbp-80h]
  _BYTE v120[120]; // [rsp+A0h] [rbp-78h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 34 > 1 )
    v5 = sub_B0D320(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 34 > 1 )
    v6 = sub_B0D320(*(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL));
  for ( i = *(_QWORD *)(v5 + 24); ; i = *(_QWORD *)(v8 + 24) )
  {
    v8 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    v9 = *(unsigned __int8 *)(v8 + 16);
    if ( (unsigned int)(v9 - 34) <= 1 )
    {
      if ( (_BYTE)v9 == 35 )
        goto LABEL_8;
      continue;
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
      break;
    v38 = sub_B0D320(v8);
    v8 = v38;
    if ( !v38 )
      break;
    if ( *(_BYTE *)(v38 + 16) == 35 )
    {
LABEL_8:
      v10 = sub_B07AF0(v8) == 0;
      goto LABEL_9;
    }
  }
  v10 = 1;
LABEL_9:
  for ( j = *(_QWORD *)(v6 + 24); ; j = *(_QWORD *)(v12 + 24) )
  {
    v12 = *(_QWORD *)(j & 0xFFFFFFFFFFFFFFF0LL);
    v13 = *(unsigned __int8 *)(v12 + 16);
    if ( (unsigned int)(v13 - 34) > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
        return 0;
      v39 = sub_B0D320(v12);
      v12 = v39;
      if ( !v39 )
        return 0;
      LOBYTE(v13) = *(_BYTE *)(v39 + 16);
    }
    if ( (_BYTE)v13 == 35 )
      break;
  }
  v14 = sub_B07AF0(v12);
  if ( !v14 || v10 )
    return 0;
  v100 = sub_B0DBD0(v5);
  if ( !v100 )
    v100 = sub_B0DBD0(v6);
  v112 = 1;
  v113 = -4096;
  v115 = -4096;
  v116 = -4096;
  v117 = -4096;
  while ( 2 )
  {
    v15 = *(_QWORD *)(v5 + 24);
    while ( 2 )
    {
      v16 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
      v17 = *(unsigned __int8 *)(v16 + 16);
      if ( (unsigned int)(v17 - 34) <= 1 )
      {
        if ( (_BYTE)v17 == 35 )
          break;
        goto LABEL_55;
      }
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1
        || (v41 = sub_B0D320(v16), (v16 = v41) == 0) )
      {
        BUG();
      }
      if ( *(_BYTE *)(v41 + 16) != 35 )
      {
LABEL_55:
        v15 = *(_QWORD *)(v16 + 24);
        continue;
      }
      break;
    }
    v18 = (_QWORD *)sub_B07AF0(v16);
    v19 = *(__int64 (__fastcall **)(__int64))(*v18 + 32LL);
    if ( v19 == sub_6A6790 )
      v20 = v18[12];
    else
      v20 = v19((__int64)v18);
    if ( (v112 & 1) != 0 )
    {
      v21 = 3;
      v22 = &v113;
      goto LABEL_24;
    }
    v42 = v114;
    if ( !v114 )
      goto LABEL_92;
    v22 = (__int64 *)v113;
    v21 = v114 - 1;
LABEL_24:
    v23 = 1;
    v24 = nullptr;
    v25 = v21 & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
    v26 = &v22[2 * v25];
    v27 = *v26;
    if ( v20 == *v26 )
    {
LABEL_25:
      v28 = v26 + 1;
      goto LABEL_26;
    }
    while ( v27 != -4096 )
    {
      if ( v27 == -8192 && !v24 )
        v24 = v26;
      v25 = v21 & (v23 + v25);
      v26 = &v22[2 * v25];
      v27 = *v26;
      if ( v20 == *v26 )
        goto LABEL_25;
      ++v23;
    }
    if ( !v24 )
      v24 = v26;
    if ( (v112 & 1) != 0 )
    {
      v54 = 12;
      v42 = 4;
    }
    else
    {
      v42 = v114;
      v54 = 3 * v114;
    }
    v55 = ((unsigned int)v112 >> 1) + 1;
    if ( 4 * v55 >= v54 )
    {
LABEL_92:
      sub_714A80((__int64)&v112, 2 * v42);
      if ( (v112 & 1) != 0 )
      {
        v57 = 3;
        v56 = &v113;
      }
      else
      {
        v56 = (__int64 *)v113;
        if ( !v114 )
          goto LABEL_160;
        v57 = v114 - 1;
      }
      LODWORD(v58) = v57 & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
      v55 = ((unsigned int)v112 >> 1) + 1;
      v24 = &v56[2 * (unsigned int)v58];
      v59 = *v24;
      if ( v20 == *v24 )
        goto LABEL_88;
      v60 = 1;
      v61 = nullptr;
      while ( v59 != -4096 )
      {
        if ( v59 == -8192 && !v61 )
          v61 = v24;
        v58 = v57 & (unsigned int)(v58 + v60);
        v24 = &v56[2 * v58];
        v59 = *v24;
        if ( v20 == *v24 )
          goto LABEL_88;
        ++v60;
      }
LABEL_98:
      if ( v61 )
        v24 = v61;
      goto LABEL_88;
    }
    if ( v42 >> 3 >= v42 - HIDWORD(v112) - v55 )
    {
      sub_714A80((__int64)&v112, v42);
      if ( (v112 & 1) != 0 )
      {
        v63 = 3;
        v62 = &v113;
        goto LABEL_104;
      }
      v62 = (__int64 *)v113;
      if ( v114 )
      {
        v63 = v114 - 1;
LABEL_104:
        LODWORD(v64) = v63 & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
        v65 = 1;
        v61 = nullptr;
        v24 = &v62[2 * (unsigned int)v64];
        v55 = ((unsigned int)v112 >> 1) + 1;
        v66 = *v24;
        if ( v20 == *v24 )
          goto LABEL_88;
        while ( v66 != -4096 )
        {
          if ( v66 == -8192 && !v61 )
            v61 = v24;
          v64 = v63 & (unsigned int)(v64 + v65);
          v24 = &v62[2 * v64];
          v66 = *v24;
          if ( v20 == *v24 )
            goto LABEL_88;
          ++v65;
        }
        goto LABEL_98;
      }
LABEL_160:
      LODWORD(v112) = (2 * ((unsigned int)v112 >> 1) + 2) | v112 & 1;
      BUG();
    }
LABEL_88:
    LODWORD(v112) = (2 * v55) | v112 & 1;
    if ( *v24 != -4096 )
      --HIDWORD(v112);
    *v24 = v20;
    v28 = v24 + 1;
    v24[1] = 0;
LABEL_26:
    *v28 = v5;
    v29 = *(_QWORD *)(v5 + 24);
    while ( 2 )
    {
      v30 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
      v31 = *(unsigned __int8 *)(v30 + 16);
      if ( (unsigned int)(v31 - 34) <= 1 )
      {
        if ( (_BYTE)v31 == 35 )
          goto LABEL_29;
LABEL_51:
        v29 = *(_QWORD *)(v30 + 24);
        continue;
      }
      break;
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
      goto LABEL_32;
    v40 = sub_B0D320(v30);
    v30 = v40;
    if ( !v40 )
      goto LABEL_32;
    if ( *(_BYTE *)(v40 + 16) != 35 )
      goto LABEL_51;
LABEL_29:
    v32 = sub_B07AF0(v30);
    if ( v32 )
    {
      if ( v14 == v32
        || (v33 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 32LL))(v32, v24),
            v33 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14)) )
      {
        v43 = (void **)((*(_WORD *)(v5 + 18) >> 3) & 0x7F);
        v44 = (char *)(v5 + 48);
        if ( (unsigned __int8)sub_B0DC30(v5) && (unsigned __int8)sub_B0DC30(v6) )
        {
          v106 = (__int64 *)sub_B0DCB0(v6, v24, v45);
          v108 = v81;
          v82 = sub_B0DCB0(v5, v24, v81);
          v105 = v83;
          v102 = (__int64 *)v82;
          v84 = sub_6A8100(*(_QWORD *)(v5 + 24));
          if ( !(unsigned __int8)sub_70A5C0(a1, v84, v102, v105, v106, v108) )
          {
            v36 = 0;
LABEL_70:
            v52 = v112 & 1;
            goto LABEL_71;
          }
        }
        else
        {
          v101 = sub_B0DC30(v5);
          if ( v101 != (unsigned __int8)sub_B0DC30(v6) )
          {
            v44 = nullptr;
            v43 = nullptr;
            ptr = v120;
            v119 = 0x800000000LL;
            v46 = sub_6A8100(*(_QWORD *)(v5 + 24));
            sub_6C0E80((__int64)a1, v46, a2, a3, (__int64)&ptr);
            goto LABEL_63;
          }
        }
        ptr = v120;
        v119 = 0x800000000LL;
        v53 = sub_6A8100(*(_QWORD *)(v5 + 24));
        sub_6C0E80((__int64)a1, v53, a2, a3, (__int64)&ptr);
        if ( !(_DWORD)v119 && (unsigned __int8)sub_B0DBD0(v5) == v100 )
        {
          v36 = sub_6C94F0((__int64)a1, v5 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_68:
          if ( ptr != v120 )
            free(ptr);
          goto LABEL_70;
        }
LABEL_63:
        v47 = sub_6A8100(*(_QWORD *)(v5 + 24));
        v48 = *(_QWORD *)(v47 + 104);
        if ( v48 )
          v49 = v48 & 0xFFFFFFFFFFFFFFF0LL;
        else
          v49 = sub_6B1730((__int64)a1, v47);
        v50 = 1;
        if ( !v100 )
          v50 = sub_B0DBD0(v5);
        v51 = sub_6DE400(a1, v49, v44, v43, (char *)ptr, (unsigned int)v119, v50);
        v36 = sub_6C94F0((__int64)a1, v51);
        goto LABEL_68;
      }
    }
LABEL_32:
    v34 = *(_QWORD *)(v5 + 32);
    if ( (v34 & 8) == 0 )
    {
      sub_B128A0(v5);
      v34 = *(_QWORD *)(v5 + 32);
    }
    v35 = v34 & 0xFFFFFFFFFFFFFFF0LL;
    if ( v35 > 0xF )
    {
      v5 = *(_QWORD *)v35;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v35 + 16LL) - 34 > 1 )
        v5 = sub_B0D320(v5);
      continue;
    }
    break;
  }
  v52 = v112 & 1;
  while ( 2 )
  {
    v67 = (_QWORD *)sub_6A8100(*(_QWORD *)(v6 + 24));
    v68 = *(__int64 (__fastcall **)(__int64))(*v67 + 32LL);
    if ( v68 == sub_6A6790 )
      v69 = v67[12];
    else
      v69 = v68((__int64)v67);
    if ( v52 )
    {
      v70 = &v113;
      v71 = 3;
      v72 = ((unsigned __int8)((unsigned int)v69 >> 9) ^ (unsigned __int8)((unsigned int)v69 >> 4)) & 3;
      v73 = &v113 + 2 * (((unsigned __int8)((unsigned int)v69 >> 9) ^ (unsigned __int8)((unsigned int)v69 >> 4)) & 3);
      v74 = *v73;
      if ( v69 == *v73 )
      {
LABEL_117:
        v75 = v70 + 8;
        goto LABEL_118;
      }
LABEL_128:
      v78 = 1;
      while ( v74 != -4096 )
      {
        v79 = v78 + 1;
        v80 = (unsigned int)v71 & (v72 + v78);
        v72 = v80;
        v73 = &v70[2 * v80];
        v74 = *v73;
        if ( v69 == *v73 )
        {
          if ( !v52 )
            goto LABEL_126;
          goto LABEL_117;
        }
        v78 = v79;
      }
      goto LABEL_119;
    }
    v70 = (__int64 *)v113;
    if ( !v114 )
      goto LABEL_119;
    v71 = v114 - 1;
    v72 = v71 & (((unsigned int)v69 >> 4) ^ ((unsigned int)v69 >> 9));
    v73 = (__int64 *)(v113 + 16LL * v72);
    v74 = *v73;
    if ( v69 != *v73 )
      goto LABEL_128;
LABEL_126:
    v75 = &v70[2 * v114];
LABEL_118:
    if ( v73 == v75 )
    {
LABEL_119:
      v76 = *(_QWORD *)(v6 + 32);
      if ( (v76 & 8) == 0 )
      {
        sub_B128A0(v6);
        v76 = *(_QWORD *)(v6 + 32);
      }
      v77 = v76 & 0xFFFFFFFFFFFFFFF0LL;
      if ( v77 <= 0xF )
        goto LABEL_138;
      v6 = *(_QWORD *)v77;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v77 + 16LL) - 34 > 1 )
        v6 = sub_B0D320(v6);
      continue;
    }
    break;
  }
  v103 = v73[1];
  v89 = (void **)((*(_WORD *)(v6 + 18) >> 3) & 0x7F);
  v90 = (char *)(v6 + 48);
  if ( (unsigned __int8)sub_B0DC30(v103) && (unsigned __int8)sub_B0DC30(v6) )
  {
    v110 = (__int64 *)sub_B0DCB0(v6, v71, v91);
    v111 = v85;
    v86 = sub_B0DCB0(v103, v71, v85);
    v109 = v87;
    v107 = (__int64 *)v86;
    v88 = sub_6A8100(*(_QWORD *)(v103 + 24));
    if ( !(unsigned __int8)sub_70A5C0(a1, v88, v107, v109, v110, v111) )
    {
LABEL_138:
      v36 = 0;
      goto LABEL_71;
    }
  }
  else
  {
    v104 = sub_B0DC30(v103);
    if ( v104 != (unsigned __int8)sub_B0DC30(v6) )
    {
      v90 = nullptr;
      v89 = nullptr;
      ptr = v120;
      v119 = 0x800000000LL;
      v92 = sub_6A8100(*(_QWORD *)(v6 + 24));
      sub_6C0E80((__int64)a1, v92, a2, a3, (__int64)&ptr);
LABEL_143:
      v93 = sub_6A8100(*(_QWORD *)(v6 + 24));
      v94 = *(_QWORD *)(v93 + 104);
      if ( v94 )
        v95 = v94 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v95 = sub_6B1730((__int64)a1, v93);
      v96 = 1;
      if ( !v100 )
        v96 = sub_B0DBD0(v6);
      v97 = sub_6DE400(a1, v95, v90, v89, (char *)ptr, (unsigned int)v119, v96);
      v36 = sub_6C94F0((__int64)a1, v97);
      goto LABEL_148;
    }
  }
  ptr = v120;
  v119 = 0x800000000LL;
  v98 = sub_6A8100(*(_QWORD *)(v6 + 24));
  sub_6C0E80((__int64)a1, v98, a2, a3, (__int64)&ptr);
  if ( (_DWORD)v119 || (unsigned __int8)sub_B0DBD0(v6) != v100 )
    goto LABEL_143;
  v36 = sub_6C94F0((__int64)a1, v6 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_148:
  if ( ptr != v120 )
    free(ptr);
LABEL_71:
  if ( !v52 )
    operator delete();
  return v36;
}

