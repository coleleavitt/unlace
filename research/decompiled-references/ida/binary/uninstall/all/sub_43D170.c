__int64 __fastcall sub_43D170(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _DWORD *v3; // rbp
  __int64 v4; // r14
  __int64 *v5; // rax
  int v6; // r15d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbx
  int v12; // edx
  char *v13; // r8
  _DWORD *v14; // rbx
  int v15; // r9d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  char *k; // rbp
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // r9d
  int v25; // ebp
  __int64 *v26; // rbx
  int v27; // edx
  char *v28; // r9
  char *v29; // r8
  char *v30; // rcx
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  int v37; // r8d
  int v38; // r9d
  bool v39; // cc
  _BYTE *v40; // rbp
  _BYTE *v41; // r15
  char v42; // al
  _BYTE *v43; // rbx
  int v44; // ecx
  char v45; // al
  char v46; // al
  int v47; // r12d
  const char *v48; // rdx
  int v49; // ebx
  _BYTE *v50; // rdx
  char v51; // al
  unsigned __int8 *v52; // rbp
  int v53; // ecx
  int v54; // eax
  unsigned __int8 *v55; // r15
  int v56; // r12d
  int v57; // eax
  _BYTE *v58; // rcx
  bool v59; // cc
  _BYTE *v60; // r15
  char *v61; // rbp
  _BYTE *v62; // rdx
  char v63; // al
  _BYTE *v64; // rbx
  char v65; // al
  char v66; // al
  int v67; // r12d
  __int64 v68; // rcx
  int v69; // r8d
  int v70; // r9d
  int v71; // ebx
  int v72; // edx
  __int64 v73; // rcx
  int v74; // r8d
  int v75; // r9d
  unsigned __int8 *v76; // r15
  int v77; // r12d
  int v78; // eax
  __int64 v79; // [rsp+0h] [rbp-C8h]
  __int64 v80; // [rsp+0h] [rbp-C8h]
  __int64 v81; // [rsp+8h] [rbp-C0h]
  char *v82; // [rsp+8h] [rbp-C0h]
  char *v83; // [rsp+10h] [rbp-B8h]
  int j; // [rsp+20h] [rbp-A8h]
  int i; // [rsp+20h] [rbp-A8h]
  int v86; // [rsp+20h] [rbp-A8h]
  int v87; // [rsp+20h] [rbp-A8h]
  int v88; // [rsp+24h] [rbp-A4h]
  int v89; // [rsp+28h] [rbp-A0h]
  int v90; // [rsp+28h] [rbp-A0h]
  int v91; // [rsp+2Ch] [rbp-9Ch]
  int v92; // [rsp+2Ch] [rbp-9Ch]
  _BYTE *v93; // [rsp+30h] [rbp-98h]
  _BYTE *v94; // [rsp+30h] [rbp-98h]
  _BYTE *v95; // [rsp+38h] [rbp-90h]
  _BYTE *v96; // [rsp+38h] [rbp-90h]
  unsigned __int64 v97; // [rsp+40h] [rbp-88h]
  char *v98; // [rsp+48h] [rbp-80h]
  char v99[32]; // [rsp+50h] [rbp-78h] BYREF
  char s[88]; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = **(_DWORD ***)v2;
  v4 = sub_496740(a1, a2);
  *(_DWORD *)v4 = 0;
  v5 = off_656088;
  *(_DWORD *)(v4 + 16) = 0;
  v6 = *(_DWORD *)(v2 + 28);
  *(_QWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 8) = v5;
  if ( v6 <= 0 )
    return v4;
  v98 = *(char **)(v2 + 104);
  v88 = *(_DWORD *)(v2 + 64);
  v97 = (unsigned __int64)&v98[*(int *)(v2 + 72)];
  sprintf(s, "%p", (const void *)v2);
  sprintf(v99, "%p", v3);
  sub_490C60(
    v4,
    (unsigned int)"ByteCode 0x%s, refCt %u, epoch %u, interp 0x%s (epoch %u)\n",
    (unsigned int)s,
    *(_DWORD *)(v2 + 28),
    *(_DWORD *)(v2 + 8),
    (unsigned int)v99,
    v3[98]);
  sub_48EDF0(v4, "  Source ", 0xFFFFFFFFLL);
  v7 = *(_DWORD *)(v2 + 68);
  if ( v7 >= 56 )
    v7 = 55;
  sub_43CAE0(v4, *(char **)(v2 + 40), v7);
  LODWORD(v79) = *(_DWORD *)(v2 + 84);
  sub_490C60(
    v4,
    (unsigned int)"\n  Cmds %d, src %d, inst %d, litObjs %u, aux %d, stkDepth %u, code/src %.2f\n",
    v88,
    *(_DWORD *)(v2 + 68),
    *(_DWORD *)(v2 + 72),
    *(_DWORD *)(v2 + 76),
    0.0,
    v79,
    *(_DWORD *)(v2 + 96));
  v11 = *(_QWORD *)(v2 + 48);
  if ( v11 )
  {
    v25 = *(_DWORD *)(v11 + 36);
    sprintf(s, "%p", *(const void **)(v2 + 48));
    sub_490C60(
      v4,
      (unsigned int)"  Proc 0x%s, refCt %d, args %d, compiled locals %d\n",
      (unsigned int)s,
      *(_DWORD *)(v11 + 8),
      *(_DWORD *)(v11 + 32),
      v25);
    if ( v25 > 0 )
    {
      v26 = *(__int64 **)(v11 + 40);
      for ( i = 0; i < v25; ++i )
      {
        v27 = *((_DWORD *)v26 + 4);
        v28 = ", link";
        v29 = ", array";
        v30 = ", scalar";
        v31 = ", resolved";
        if ( (v27 & 2) == 0 )
          v28 = "";
        if ( (v27 & 1) == 0 )
          v29 = "";
        if ( (v27 & 3) != 0 )
          v30 = "";
        if ( (v27 & 0x8000u) == 0 )
          v31 = "";
        v83 = v31;
        v32 = ", temp";
        if ( (*((_BYTE *)v26 + 17) & 2) == 0 )
          v32 = "";
        v82 = v32;
        v33 = ", arg";
        if ( (*((_BYTE *)v26 + 17) & 1) == 0 )
          v33 = "";
        sub_490C60(
          v4,
          (unsigned int)"      slot %d%s%s%s%s%s%s",
          i,
          (_DWORD)v30,
          (_DWORD)v29,
          (_DWORD)v28,
          v33,
          v82,
          v83);
        if ( (*((_BYTE *)v26 + 17) & 2) != 0 )
          sub_48EDF0(v4, "\n", 0xFFFFFFFFLL);
        else
          sub_490C60(v4, (unsigned int)", \"%s\"\n", (_DWORD)v26 + 40, v34, v35, v36);
        v26 = (__int64 *)*v26;
      }
    }
  }
  v12 = *(_DWORD *)(v2 + 80);
  if ( v12 > 0 )
  {
    sub_490C60(v4, (unsigned int)"  Exception ranges %d, depth %d:\n", v12, *(_DWORD *)(v2 + 92), v9, v10);
    for ( j = 0; *(_DWORD *)(v2 + 80) > j; v8 = j )
    {
      while ( 1 )
      {
        v13 = "loop";
        v14 = (_DWORD *)(*(_QWORD *)(v2 + 120) + 28LL * j);
        v15 = v14[2];
        if ( *v14 )
          v13 = "catch";
        LODWORD(v80) = v14[3] + v15 - 1;
        sub_490C60(v4, (unsigned int)"      %d: level %d, %s, pc %d-%d, ", j, v14[1], (_DWORD)v13, v15, v80);
        if ( *v14 )
          break;
        sub_490C60(v4, (unsigned int)"continue %d, break %d\n", v14[5], v14[4], v18, v19);
        v8 = ++j;
        if ( *(_DWORD *)(v2 + 80) <= j )
          goto LABEL_15;
      }
      if ( *v14 == 1 )
        sub_490C60(v4, (unsigned int)"catch %d\n", v14[6], v17, v18, v19);
      else
        sub_47D740((unsigned int)"TclDisassembleByteCodeObj: bad ExceptionRange type %d", *v14, v16, v17, v18, v19);
      ++j;
    }
  }
LABEL_15:
  if ( !v88 )
  {
    for ( k = v98; (unsigned __int64)k < v97; k += (int)sub_43CC00(v2, k, v4, v21, v22, v23) )
      sub_48EDF0(v4, "    ", 0xFFFFFFFFLL);
    return v4;
  }
  sub_490C60(v4, (unsigned int)"  Commands %d:", v88, v8, v9, v10);
  v86 = 0;
  v39 = v88 > 0;
  v40 = *(_BYTE **)(v2 + 144);
  v41 = *(_BYTE **)(v2 + 160);
  v89 = 0;
  v95 = *(_BYTE **)(v2 + 136);
  v91 = 0;
  v93 = *(_BYTE **)(v2 + 152);
  while ( v39 )
  {
    v50 = v95;
    v51 = *v95;
    if ( *v95 == 0xFF )
    {
      v95 += 5;
      v91 += (unsigned __int8)v50[4]
           | ((unsigned __int8)v50[3] << 8)
           | ((unsigned __int8)v50[2] << 16)
           | ((char)v50[1] << 24);
      v42 = *v40;
      if ( *v40 != 0xFF )
      {
LABEL_41:
        v43 = v93;
        v44 = v42;
        ++v40;
        v45 = *v93;
        if ( *v93 != 0xFF )
          goto LABEL_42;
        goto LABEL_51;
      }
    }
    else
    {
      ++v95;
      v91 += v51;
      v42 = *v40;
      if ( *v40 != 0xFF )
        goto LABEL_41;
    }
    v52 = v40 + 1;
    v43 = v93;
    v53 = (v52[2] << 8) | (v52[1] << 16) | ((char)*v52 << 24);
    v54 = v52[3];
    v40 = v52 + 4;
    v44 = v54 | v53;
    v45 = *v93;
    if ( *v93 != 0xFF )
    {
LABEL_42:
      ++v93;
      v89 += v45;
      v46 = *v41;
      if ( *v41 != 0xFF )
        goto LABEL_43;
      goto LABEL_52;
    }
LABEL_51:
    v93 = v43 + 5;
    v89 += (unsigned __int8)v43[4]
         | ((unsigned __int8)v43[3] << 8)
         | ((unsigned __int8)v43[2] << 16)
         | ((char)v43[1] << 24);
    v46 = *v41;
    if ( *v41 != 0xFF )
    {
LABEL_43:
      v47 = v46;
      ++v41;
      goto LABEL_44;
    }
LABEL_52:
    v55 = v41 + 1;
    v56 = (v55[2] << 8) | (v55[1] << 16) | ((char)*v55 << 24);
    v57 = v55[3];
    v41 = v55 + 4;
    v47 = v57 | v56;
LABEL_44:
    v48 = "   \t";
    v49 = v86 + 1;
    LODWORD(v80) = v89;
    if ( (v86 & 1) == 0 )
      v48 = "\n   ";
    LODWORD(v81) = v89 + v47 - 1;
    sub_490C60(v4, (unsigned int)"%s%4d: pc %d-%d, src %d-%d", (_DWORD)v48, v49, v91, v91 + v44 - 1, v80, v81);
    ++v86;
    v39 = v49 < v88;
  }
  if ( v88 > 0 )
    sub_48EDF0(v4, "\n", 0xFFFFFFFFLL);
  v58 = *(_BYTE **)(v2 + 136);
  v87 = 0;
  v59 = v88 > 0;
  v60 = *(_BYTE **)(v2 + 160);
  v61 = v98;
  v96 = v58;
  v94 = *(_BYTE **)(v2 + 152);
  v90 = 0;
  v92 = 0;
  while ( 2 )
  {
    if ( v59 )
    {
      v62 = v96;
      v63 = *v96;
      if ( *v96 == 0xFF )
      {
        v64 = v94;
        LODWORD(v58) = (_DWORD)v96 + 5;
        v96 += 5;
        v92 += (unsigned __int8)v62[4]
             | ((unsigned __int8)v62[3] << 8)
             | ((unsigned __int8)v62[2] << 16)
             | ((char)v62[1] << 24);
        v65 = *v94;
        if ( *v94 == 0xFF )
          goto LABEL_70;
LABEL_59:
        ++v94;
        v90 += v65;
        v66 = *v60;
        if ( *v60 != 0xFF )
          goto LABEL_60;
LABEL_71:
        v76 = v60 + 1;
        v77 = (v76[2] << 8) | (v76[1] << 16) | ((char)*v76 << 24);
        v78 = v76[3];
        v60 = v76 + 4;
        v67 = v78 | v77;
      }
      else
      {
        v64 = v94;
        ++v96;
        v92 += v63;
        v65 = *v94;
        if ( *v94 != 0xFF )
          goto LABEL_59;
LABEL_70:
        v94 = v64 + 5;
        v90 += (unsigned __int8)v64[4]
             | ((unsigned __int8)v64[3] << 8)
             | ((unsigned __int8)v64[2] << 16)
             | ((char)v64[1] << 24);
        v66 = *v60;
        if ( *v60 == 0xFF )
          goto LABEL_71;
LABEL_60:
        v67 = v66;
        ++v60;
      }
      for ( ; v61 - v98 < v92; v61 += (int)sub_43CC00(v2, v61, v4, v68, v69, v70) )
        sub_48EDF0(v4, "    ", 0xFFFFFFFFLL);
      v71 = v87 + 1;
      sub_490C60(v4, (unsigned int)"  Command %d: ", v87 + 1, (_DWORD)v58, v37, v38);
      v72 = 55;
      if ( v67 < 56 )
        v72 = v67;
      sub_43CAE0(v4, (char *)(*(_QWORD *)(v2 + 40) + v90), v72);
      sub_48EDF0(v4, "\n", 0xFFFFFFFFLL);
      ++v87;
      v59 = v71 < v88;
      continue;
    }
    break;
  }
  while ( (unsigned __int64)v61 < v97 )
  {
    sub_48EDF0(v4, "    ", 0xFFFFFFFFLL);
    v61 += (int)sub_43CC00(v2, v61, v4, v73, v74, v75);
  }
  return v4;
}

