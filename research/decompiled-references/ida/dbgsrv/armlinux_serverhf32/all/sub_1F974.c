/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F974
// Address: 0x0001F974

//----- (0001F974) --------------------------------------------------------
int __fastcall sub_1F974(int a1, int a2, int a3)
{
  int v5; // r0
  _DWORD *v6; // r3
  int v7; // r9
  int v8; // r4
  __int16 v9; // r11
  int v10; // r10
  _DWORD *v11; // r0
  int v12; // r2
  int v13; // r3
  int v15; // r3
  _DWORD *v16; // r6
  _DWORD *v17; // r2
  int v18; // r3
  _DWORD *v19; // r3
  int v20; // r1
  _DWORD *v21; // r0
  int v22; // r2
  int v23; // r2
  int v24; // r3
  int v25; // r6
  const char *v26; // r0
  int v27; // r0
  int v28; // r11
  _DWORD *v29; // r0
  int v30; // r6
  const char *v31; // r2
  const char *v32; // r3
  unsigned int v33; // r3
  _BOOL4 v34; // r1
  int v35; // r2
  int v36; // r2
  _DWORD *v37; // r2
  _DWORD *v38; // r1
  int v39; // r12
  unsigned int v40; // r0
  _DWORD *v41; // r1
  _DWORD *v42; // r2
  int v43; // r0
  int v44; // r4
  int v45; // r1
  int v46; // r0
  int v47; // r2
  int v48; // r7
  _BOOL4 v49; // r0
  double v50; // r2
  __int64 v51; // kr08_8
  int v52; // r1
  int *v53; // r2
  int v54; // r0
  _DWORD *v55; // r2
  _DWORD *v56; // r1
  _DWORD *v57; // r0
  _DWORD *v58; // r2
  _DWORD *v59; // r1
  _DWORD *v60; // r0
  double v61; // [sp+8h] [bp-BCh]
  _DWORD *v62; // [sp+18h] [bp-ACh]
  unsigned int v63; // [sp+18h] [bp-ACh]
  unsigned int v64; // [sp+18h] [bp-ACh]
  unsigned int v65; // [sp+18h] [bp-ACh]
  unsigned int v66; // [sp+18h] [bp-ACh]
  int v67; // [sp+18h] [bp-ACh]
  _DWORD *v68; // [sp+1Ch] [bp-A8h]
  int v69; // [sp+1Ch] [bp-A8h]
  int v70; // [sp+24h] [bp-A0h]
  unsigned __int8 v71; // [sp+2Fh] [bp-95h] BYREF
  int v72; // [sp+30h] [bp-94h] BYREF
  int v73; // [sp+34h] [bp-90h]
  int v74; // [sp+38h] [bp-8Ch]
  char v75[12]; // [sp+3Ch] [bp-88h] BYREF
  int v76; // [sp+48h] [bp-7Ch]

  v71 = 0;
  v74 = a3;
  v72 = 0;
  v73 = 0;
  v5 = sub_1B8DC((_DWORD *)a1, &v72, &v71);
  if ( !v5 )
    return 0;
  v6 = *(_DWORD **)(a1 + 1008);
  v7 = a1 + 1004;
  v8 = v72;
  v9 = v73;
  if ( !v6 )
    goto LABEL_19;
  v10 = v5;
  v11 = (_DWORD *)(a1 + 1004);
  do
  {
    v12 = v6[4];
    if ( v72 > v12 )
      v6 = (_DWORD *)v6[3];
    else
      v11 = v6;
    if ( v72 <= v12 )
      v6 = (_DWORD *)v6[2];
  }
  while ( v6 );
  if ( (_DWORD *)v7 == v11 || v72 < v11[4] || v11 == (_DWORD *)-20 )
  {
LABEL_19:
    sub_53D50(a1, "EVENT FOR UNKNOWN THREAD %d, IGNORED...\n", v72);
    if ( (unsigned __int8)v9 == 127 )
      v13 = HIBYTE(v9);
    else
      v13 = 0;
    ptrace(PTRACE_CONT, v8, 0, v13);
    return 0;
  }
  if ( v11[10] == 1 && !*(_BYTE *)(a1 + 1077) && (v73 & 0x7F) != 0 && ((v73 & 0x7F) + 1) << 24 >> 25 <= 0 )
  {
    if ( !under_debugger )
      sub_78AFC(30057);
    goto LABEL_18;
  }
  *(_DWORD *)(a2 + 4) = 0;
  v11[10] = 1;
  sub_1BDD0(a1, 0, 1);
  v15 = v71;
  *(_BYTE *)(a1 + 1112) = 0;
  if ( v15 )
    goto LABEL_35;
  v16 = *(_DWORD **)(a1 + 1008);
  v17 = (_DWORD *)(a1 + 1004);
  if ( !v16 )
    goto LABEL_34;
  do
  {
    v18 = v16[4];
    if ( v8 > v18 )
      v16 = (_DWORD *)v16[3];
    else
      v17 = v16;
    if ( v8 <= v18 )
      v16 = (_DWORD *)v16[2];
  }
  while ( v16 );
  v62 = v17;
  if ( (_DWORD *)v7 == v17 || v8 < v17[4] || (v68 = v17 + 5, v17 == (_DWORD *)-20) )
  {
LABEL_34:
    sub_53D50(a1, "thread %d disappeared after freezing?!...\n", v8);
    goto LABEL_35;
  }
  v23 = *(_DWORD *)(a1 + 1068);
  *(_DWORD *)a2 = v23;
  *(_DWORD *)(a2 + 4) = v8;
  if ( *(_BYTE *)(a1 + 1077) )
  {
    *(_BYTE *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = -1;
    if ( (unsigned __int8)v9 == 127 )
      goto LABEL_66;
    v70 = v9 & 0x7F;
    if ( (v70 + 1) << 24 >> 25 > 0 )
      goto LABEL_53;
    goto LABEL_59;
  }
  v70 = v9 & 0x7F;
  if ( (v70 + 1) << 24 >> 25 <= 0 )
  {
    v27 = ptrace(PTRACE_PEEKUSER, v8, 60, 0);
    *(_BYTE *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = v27;
    if ( (unsigned __int8)v9 == 127 )
      goto LABEL_66;
LABEL_59:
    v25 = HIBYTE(v9);
LABEL_54:
    if ( *(_DWORD *)(a1 + 1020) > 1u && v62[5] != *(_DWORD *)(a1 + 1068) )
    {
      sub_6E318((_DWORD *)a2);
      sub_1BCAC(a1, *(_DWORD *)(a2 + 4), 3);
      goto LABEL_35;
    }
    sub_6E3C0((_DWORD *)a2, 2);
    if ( (((*(_DWORD *)(a2 + 16) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( !under_debugger )
        sub_78AFC(3296);
      goto LABEL_18;
    }
    *(_DWORD *)(a2 + 20) = v25;
    *(_BYTE *)(a1 + 1077) = 1;
LABEL_35:
    v19 = *(_DWORD **)(a1 + 1008);
    v20 = *(_DWORD *)(a2 + 4);
    if ( v19 )
      goto LABEL_36;
LABEL_47:
    sub_6E4A8(a1 + 96, a2);
    return 1;
  }
  ptrace(PTRACE_GETSIGINFO, v8, 0, v75);
  v24 = v76;
  *(_BYTE *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 8) = v24;
  if ( (unsigned __int8)v9 != 127 )
  {
    v8 = *(_DWORD *)(a2 + 4);
    v23 = *(_DWORD *)a2;
LABEL_53:
    v25 = v70;
    v69 = v23;
    v26 = (const char *)strsignal(v70);
    LODWORD(v61) = *(_DWORD *)(a2 + 8);
    sub_53D50(a1, "SIGNALED pid=%d tid=%d signal='%s'(%d) pc=%a\n", v69, v8, v26, v70, v61);
    goto LABEL_54;
  }
LABEL_66:
  sub_6E3C0((_DWORD *)a2, 7);
  if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 7 )
    goto LABEL_67;
  v28 = HIBYTE(v9);
  *(_DWORD *)(a2 + 20) = v28;
  *(_BYTE *)(a2 + 24) = 1;
  *(_DWORD *)(a2 + 28) = -1;
  if ( v28 == 19 && *((_BYTE *)v62 + 44) )
  {
    *((_BYTE *)v62 + 44) = 0;
    goto LABEL_122;
  }
  v29 = (_DWORD *)(*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 28))(a1, v28);
  v30 = (int)v29;
  if ( v29 )
  {
    if ( v29[3] )
      v31 = (const char *)v29[2];
    else
      v31 = (const char *)&dword_8DA5C;
    if ( v29[6] )
      v32 = (const char *)v29[5];
    else
      v32 = (const char *)&dword_8DA5C;
    sub_1873C(a2 + 32, "got %s signal (%s)", v31, v32);
    v10 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 236))(a1, a2, v30);
    if ( !v10 && (*(_DWORD *)(v30 + 4) & 2) != 0 )
      v28 = 0;
  }
  else
  {
    sub_1873C(a2 + 32, "got unknown signal #%d", v28);
  }
  if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 7 )
    goto LABEL_67;
  if ( (unsigned int)(*(_DWORD *)(a2 + 20) - 4) > 1 )
    goto LABEL_105;
  v33 = *(_DWORD *)(a2 + 8);
  if ( v33 == -1 )
    goto LABEL_105;
  v34 = *(_DWORD *)(a1 + 888) == v33;
  if ( !*(_DWORD *)(a1 + 888) )
    v34 = 0;
  if ( !v34 )
  {
    v35 = *(_DWORD *)(a1 + 864);
    if ( !v35 || v35 != v33 )
    {
      v36 = *(_DWORD *)(a1 + 876);
      if ( v36 != v33 || !v36 )
      {
        if ( *(_DWORD *)(a1 + 1120) <= 1u )
        {
          v65 = *(_DWORD *)(a2 + 8);
          sub_1F868((_DWORD *)a1);
          v58 = *(_DWORD **)(a1 + 1008);
          v59 = (_DWORD *)(a1 + 1004);
          v33 = v65;
          while ( v58 )
          {
            if ( v8 <= v58[4] )
            {
              v60 = (_DWORD *)v58[2];
            }
            else
            {
              v60 = (_DWORD *)v58[3];
              v58 = v59;
            }
            v59 = v58;
            v58 = v60;
          }
          if ( (_DWORD *)v7 == v59 || v8 < v59[4] )
          {
            v37 = *(_DWORD **)(a1 + 272);
            v38 = (_DWORD *)(a1 + 268);
            if ( !v37 )
              goto LABEL_101;
            v39 = a1 + 268;
            v68 = nullptr;
            goto LABEL_91;
          }
          v37 = *(_DWORD **)(a1 + 272);
          v68 = v59 + 5;
          v38 = (_DWORD *)(a1 + 268);
          if ( !v37 )
            goto LABEL_99;
        }
        else
        {
          v37 = *(_DWORD **)(a1 + 272);
          v38 = (_DWORD *)(a1 + 268);
          if ( !v37 )
            goto LABEL_100;
        }
        v39 = (int)v38;
        do
        {
LABEL_91:
          v40 = v37[4];
          if ( v40 < v33 )
            v37 = (_DWORD *)v37[3];
          else
            v38 = v37;
          if ( v40 >= v33 )
            v37 = (_DWORD *)v37[2];
        }
        while ( v37 );
        if ( v38 == (_DWORD *)v39 || v38[4] > v33 )
        {
LABEL_99:
          if ( v68 )
          {
LABEL_100:
            if ( *((_BYTE *)v68 + 16) )
            {
              sub_6E3C0((_DWORD *)a2, 6);
              v28 = 0;
              goto LABEL_105;
            }
          }
LABEL_101:
          if ( v30 && (*(_DWORD *)(v30 + 4) & 2) != 0 )
          {
            v28 = 0;
          }
          else
          {
            if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 7 )
            {
LABEL_67:
              if ( !under_debugger )
                sub_78AFC(3299);
              goto LABEL_18;
            }
            v28 = *(_DWORD *)(a2 + 20);
          }
          goto LABEL_105;
        }
        v51 = *(_QWORD *)(a1 + 224);
        v52 = v51 + 4 * HIDWORD(v51);
        if ( (_DWORD)v51 != v52 )
        {
          if ( v33 == *(_DWORD *)v51 )
            goto LABEL_99;
          v53 = (int *)(v51 + 4);
          while ( v52 != (_DWORD)v51 )
          {
            v54 = *v53++;
            if ( v54 == v33 )
              goto LABEL_99;
          }
        }
        v55 = *(_DWORD **)(a1 + 1088);
        v56 = (_DWORD *)(a1 + 1084);
        while ( v55 )
        {
          if ( v55[4] >= v33 )
          {
            v57 = (_DWORD *)v55[2];
          }
          else
          {
            v57 = (_DWORD *)v55[3];
            v55 = v56;
          }
          v56 = v55;
          v55 = v57;
        }
        if ( (_DWORD *)(a1 + 1084) != v56 && v56[4] <= v33 )
          goto LABEL_122;
        v66 = v33;
        sub_6E3C0((_DWORD *)a2, 5);
        if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 5 )
        {
          if ( !under_debugger )
            sub_78AFC(3298);
LABEL_18:
          __und(0xFFu);
        }
        *(_DWORD *)(a2 + 8) = v66;
        *(_DWORD *)(a2 + 20) = -1;
        v28 = 0;
        *(_DWORD *)(a2 + 24) = -1;
LABEL_105:
        v19 = *(_DWORD **)(a1 + 1008);
        if ( !v19 )
          goto LABEL_47;
        v41 = (_DWORD *)(a1 + 1004);
        v42 = *(_DWORD **)(a1 + 1008);
        do
        {
          v43 = v42[4];
          if ( v8 > v43 )
            v42 = (_DWORD *)v42[3];
          else
            v41 = v42;
          if ( v8 <= v43 )
            v42 = (_DWORD *)v42[2];
        }
        while ( v42 );
        if ( (_DWORD *)v7 != v41 )
        {
          if ( v8 >= v41[4] && v41 != (_DWORD *)-20 )
          {
            v41[8] = v28;
            if ( *(_BYTE *)(a1 + 1113) || !sub_54B38(a1, a2, 0) )
            {
              if ( v10 || (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 7 )
                goto LABEL_35;
              sub_54CE8(a1, a2, v30);
              goto LABEL_122;
            }
            return 0;
          }
          v19 = *(_DWORD **)(a1 + 1008);
        }
        v20 = *(_DWORD *)(a2 + 4);
LABEL_36:
        v21 = (_DWORD *)(a1 + 1004);
        do
        {
          v22 = v19[4];
          if ( v22 < v20 )
            v19 = (_DWORD *)v19[3];
          else
            v21 = v19;
          if ( v22 >= v20 )
            v19 = (_DWORD *)v19[2];
        }
        while ( v19 );
        if ( (_DWORD *)v7 != v21 && v21[4] <= v20 && v21 != (_DWORD *)-20 )
          *((_BYTE *)v21 + 36) = 0;
        goto LABEL_47;
      }
    }
    v45 = *(_DWORD *)(a1 + 72);
    v46 = *(_DWORD *)(a1 + 64);
    v47 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 1072) = v8;
    v48 = -1171354717 * ((v45 - v46) >> 2)
        - 1171354717 * ((v47 - *(_DWORD *)(a1 + 84)) >> 2)
        + 11 * (((*(_DWORD *)(a1 + 92) - *(_DWORD *)(a1 + 76)) >> 2) - 1);
    if ( *(_DWORD *)(a1 + 860) )
    {
      v63 = v33;
      sub_1CFE8(a1);
      v33 = v63;
    }
    v64 = v33;
    v49 = sub_17BAC(a1, v8);
    HIDWORD(v50) = v64;
    if ( !v49 )
    {
      sub_1700C((int)"%a: could not return from the thread breakpoint!\n", v50);
      return 1;
    }
    if ( v48 == -1171354717 * ((*(_DWORD *)(a1 + 72) - *(_DWORD *)(a1 + 64)) >> 2)
              - 1171354717 * ((*(_DWORD *)(a1 + 80) - *(_DWORD *)(a1 + 84)) >> 2)
              + 11 * (((*(_DWORD *)(a1 + 92) - *(_DWORD *)(a1 + 76)) >> 2) - 1) )
      goto LABEL_122;
LABEL_134:
    sub_6E3C0((_DWORD *)a2, 0);
    v28 = 0;
    goto LABEL_105;
  }
  v67 = *(_DWORD *)(a2 + 8);
  if ( !sub_17BAC(a1, v8) )
  {
    sub_1700C((int)"%a: could not return from the shlib breakpoint!\n", v67);
    return 1;
  }
  if ( sub_1F868((_DWORD *)a1) )
    goto LABEL_134;
LABEL_122:
  if ( *(_BYTE *)(a1 + 1113) || (v44 = *(unsigned __int8 *)(a1 + 1114), *(_BYTE *)(a1 + 1114)) )
  {
    sub_6E3C0((_DWORD *)a2, 13);
    return 1;
  }
  else
  {
    sub_1CE00(a1, *(unsigned __int8 *)(a1 + 1114));
    return v44;
  }
}
// 1FB40: variable 'v61' is possibly undefined
// 1FF50: variable 'v50' is possibly undefined
// 14148: using guessed type int __fastcall strsignal(_DWORD);
// 8DA5C: using guessed type int dword_8DA5C;
// D5C00: using guessed type char under_debugger;
