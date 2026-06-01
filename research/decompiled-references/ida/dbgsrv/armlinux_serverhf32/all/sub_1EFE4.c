/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1EFE4
// Address: 0x0001EFE4

//----- (0001EFE4) --------------------------------------------------------
int __fastcall sub_1EFE4(int a1, int a2, int a3)
{
  void *v4; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r3
  bool v8; // zf
  char v9; // r7
  int v10; // r7
  int v11; // r0
  int v12; // r1
  size_t v13; // r0
  size_t v14; // r10
  int v15; // r3
  FILE *v16; // r0
  const char *v17; // r6
  size_t v18; // r0
  size_t v19; // r7
  int v20; // r3
  int v21; // r0
  void *v22; // r0
  _DWORD *v23; // r3
  int v24; // r10
  int i; // r9
  void *v26; // r0
  char *v27; // r3
  void *v28; // r0
  _DWORD *v29; // r3
  int v30; // r10
  int j; // r9
  void *v32; // r0
  char *v33; // r3
  int v34; // r3
  int v35; // r3
  unsigned int v36; // r2
  void *v37; // r0
  unsigned int v38; // r9
  void *v39; // r0
  unsigned int v40; // r6
  int *v41; // r0
  const char *v42; // r0
  char *v44; // r9
  unsigned int *v45; // r0
  int *v46; // r7
  unsigned int v47; // r0
  int v48; // r3
  int v49; // r3
  bool v50; // zf
  const void *v51; // r9
  void *v52; // r0
  int *v53; // r0
  const char *v54; // r8
  size_t v55; // r8
  void *v56; // r0
  int v57; // r7
  int v58; // r9
  int v59; // r4
  int v60; // r10
  _DWORD *v61; // r4
  void *v62; // r0
  void *v63; // r0
  int v64; // r3
  int v65; // r3
  size_t v66; // r0
  signed int v67; // r7
  size_t v68; // r8
  unsigned int v70; // [sp+Ch] [bp-10C0h]
  unsigned int v71; // [sp+Ch] [bp-10C0h]
  unsigned int v72; // [sp+10h] [bp-10BCh]
  size_t n; // [sp+14h] [bp-10B8h]
  int v74; // [sp+1Ch] [bp-10B0h] BYREF
  void *v75; // [sp+20h] [bp-10ACh] BYREF
  int v76; // [sp+24h] [bp-10A8h]
  int v77; // [sp+28h] [bp-10A4h]
  void *v78; // [sp+2Ch] [bp-10A0h] BYREF
  size_t v79; // [sp+30h] [bp-109Ch]
  int v80; // [sp+34h] [bp-1098h]
  int (**v81)(); // [sp+38h] [bp-1094h] BYREF
  signed int v82; // [sp+3Ch] [bp-1090h]
  void **v83; // [sp+40h] [bp-108Ch]
  unsigned int v84; // [sp+44h] [bp-1088h] BYREF
  unsigned int v85; // [sp+48h] [bp-1084h]
  void *v86; // [sp+4Ch] [bp-1080h]
  size_t v87; // [sp+50h] [bp-107Ch]
  size_t v88; // [sp+54h] [bp-1078h]
  void *v89; // [sp+58h] [bp-1074h]
  size_t v90; // [sp+5Ch] [bp-1070h]
  size_t v91; // [sp+60h] [bp-106Ch]
  int v92; // [sp+64h] [bp-1068h] BYREF
  int v93; // [sp+68h] [bp-1064h] BYREF
  _DWORD *v94; // [sp+6Ch] [bp-1060h]
  int *v95; // [sp+70h] [bp-105Ch]
  int *v96; // [sp+74h] [bp-1058h]
  int v97; // [sp+78h] [bp-1054h]
  void *v98; // [sp+7Ch] [bp-1050h]
  int v99; // [sp+80h] [bp-104Ch]
  int v100; // [sp+84h] [bp-1048h]
  void *v101; // [sp+88h] [bp-1044h]
  int v102; // [sp+8Ch] [bp-1040h]
  int v103; // [sp+90h] [bp-103Ch]
  int v104; // [sp+94h] [bp-1038h]
  int v105; // [sp+98h] [bp-1034h] BYREF
  int v106; // [sp+9Ch] [bp-1030h]
  int v107; // [sp+A0h] [bp-102Ch]
  char v108; // [sp+A4h] [bp-1028h]
  int v109; // [sp+A8h] [bp-1024h]
  void *v110; // [sp+ACh] [bp-1020h] BYREF
  unsigned int v111; // [sp+B0h] [bp-101Ch]
  unsigned int v112; // [sp+B4h] [bp-1018h]
  unsigned int v113; // [sp+B8h] [bp-1014h]
  unsigned int v114; // [sp+BCh] [bp-1010h]
  int v115; // [sp+C0h] [bp-100Ch]
  char v116[4092]; // [sp+C4h] [bp-1008h] BYREF

  v4 = *(void **)(a1 + 1024);
  *(_DWORD *)(a1 + 336) = a2;
  if ( v4 )
  {
    *(_DWORD *)(a1 + 1028) = 0;
    sub_77E08(v4);
    a2 = *(_DWORD *)(a1 + 336);
    *(_DWORD *)(a1 + 1024) = 0;
    *(_DWORD *)(a1 + 1032) = 0;
  }
  *(_DWORD *)(a1 + 1068) = a2;
  *(_BYTE *)(a1 + 1076) = 0;
  *(_DWORD *)(a1 + 1108) = 0;
  sub_1A4DC(a1, a2);
  v6 = a3;
  if ( a3 == 2 )
    v6 = 0;
  else
    v5 = 0;
  if ( a3 == 2 )
    v5 = 1;
  else
    v6 = -1;
  sub_7A478(&v74, *(_DWORD *)(a1 + 336), v5, v6);
  sub_53D50(a1, "process pid/tid: %d\n", *(_DWORD *)(a1 + 336));
  v110 = nullptr;
  *(_BYTE *)(a1 + 1112) = 0;
  v111 = 0;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  v106 = 0;
  v108 = 0;
  v109 = 0;
  v107 = -1;
  v105 = -1;
  sub_6E3C0(&v105, 1);
  v7 = v109 & 0xFFFFFFF;
  v8 = (v109 & 0xFFFFFFF) == 11;
  if ( (v109 & 0xFFFFFFF) != 0xB )
    v8 = v7 == 1;
  v9 = !v8;
  if ( v7 == 8 )
    v10 = 0;
  else
    v10 = v9 & 1;
  if ( v10 )
  {
    if ( !under_debugger )
      sub_78AFC(3295);
LABEL_28:
    __und(0xFFu);
  }
  v105 = *(_DWORD *)(a1 + 336);
  v106 = v105;
  v11 = ptrace(PTRACE_PEEKUSER, v105, 60, 0);
  v12 = *(_DWORD *)a1;
  v107 = v11;
  v108 = 1;
  (*(void (__fastcall **)(int, _DWORD, char *, int))(v12 + 328))(a1, *(_DWORD *)(a1 + 336), v116, 4096);
  v13 = strlen(v116);
  v14 = v13;
  if ( v13 )
  {
    v36 = v13 + 1;
    v70 = v36;
    v37 = v110;
    if ( v36 > v112 )
    {
      v37 = sub_77EB0((int)&v110, v110, v36, 1u);
      v110 = v37;
    }
    v111 = v70;
    memmove(v37, v116, v14);
    *((_BYTE *)v110 + v14) = 0;
  }
  else
  {
    v111 = 0;
  }
  v15 = *(_DWORD *)(a1 + 336);
  v113 = -1;
  v114 = 0;
  v115 = -1;
  sub_7EA4C(v116, 4096, "/proc/%u/maps", v15);
  v16 = sub_75CB0((int)v116);
  *(_DWORD *)(a1 + 1104) = v16;
  if ( !v16 )
  {
    v41 = _errno_location();
    v42 = (const char *)sub_792D8(*v41);
    sub_172DC(a1, "%s: %s\n", v116, v42);
    goto LABEL_68;
  }
  if ( v111 )
    v17 = (const char *)v110;
  else
    v17 = (const char *)&dword_8DA5C;
  if ( v17 )
  {
    v18 = strlen(v17);
    v19 = v18;
    if ( v18 )
    {
      v38 = v18 + 1;
      v39 = *(void **)(a1 + 1128);
      if ( v38 > *(_DWORD *)(a1 + 1136) )
      {
        v39 = sub_77EB0(a1 + 1128, *(void **)(a1 + 1128), v38, 1u);
        *(_DWORD *)(a1 + 1128) = v39;
      }
      *(_DWORD *)(a1 + 1132) = v38;
      memmove(v39, v17, v19);
      *(_BYTE *)(*(_DWORD *)(a1 + 1128) + v19) = 0;
      if ( *(_BYTE *)(a1 + 453) )
        goto LABEL_26;
      v40 = *(_DWORD *)(a1 + 1132);
      if ( v40 > 1 )
      {
        v51 = *(const void **)(a1 + 1128);
        v52 = *(void **)(a1 + 300);
        if ( v40 > *(_DWORD *)(a1 + 308) )
        {
          v52 = sub_77EB0(a1 + 300, *(void **)(a1 + 300), *(_DWORD *)(a1 + 1132), 1u);
          *(_DWORD *)(a1 + 300) = v52;
        }
        *(_DWORD *)(a1 + 304) = v40;
        memmove(v52, v51, v40 - 1);
        *(_BYTE *)(*(_DWORD *)(a1 + 300) + v40 - 1) = 0;
        goto LABEL_26;
      }
      goto LABEL_66;
    }
  }
  v20 = *(unsigned __int8 *)(a1 + 453);
  *(_DWORD *)(a1 + 1132) = 0;
  if ( !v20 )
LABEL_66:
    *(_DWORD *)(a1 + 304) = 0;
LABEL_26:
  *(_DWORD *)(a1 + 144) = 4;
  v76 = 0;
  v77 = 0;
  v75 = nullptr;
  if ( sub_1EBEC(a1, (int *)&v75, 0) <= 0 )
  {
    if ( !under_debugger )
      sub_78AFC(30065);
    goto LABEL_28;
  }
  v21 = *(_DWORD *)(a1 + 340);
  if ( v21 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 4))(v21);
    v22 = *(void **)(a1 + 344);
    if ( v22 )
    {
      *(_DWORD *)(a1 + 348) = 0;
      sub_77E08(v22);
      *(_DWORD *)(a1 + 344) = 0;
      *(_DWORD *)(a1 + 352) = 0;
    }
    v23 = *(_DWORD **)(a1 + 356);
    if ( v23 )
    {
      v24 = *(_DWORD *)(a1 + 360);
      if ( v24 )
      {
        for ( i = 0; i != v24; ++i )
        {
          v26 = (void *)v23[3 * i];
          v27 = (char *)&v23[3 * i];
          if ( v26 )
          {
            *((_DWORD *)v27 + 1) = 0;
            sub_77E08(v26);
          }
          v23 = *(_DWORD **)(a1 + 356);
        }
      }
      *(_DWORD *)(a1 + 360) = 0;
      sub_77E08(v23);
      *(_DWORD *)(a1 + 356) = 0;
      *(_DWORD *)(a1 + 364) = 0;
    }
    v28 = *(void **)(a1 + 368);
    if ( v28 )
    {
      *(_DWORD *)(a1 + 372) = 0;
      sub_77E08(v28);
      *(_DWORD *)(a1 + 368) = 0;
      *(_DWORD *)(a1 + 376) = 0;
    }
    v29 = *(_DWORD **)(a1 + 380);
    if ( v29 )
    {
      v30 = *(_DWORD *)(a1 + 384);
      if ( v30 )
      {
        for ( j = 0; j != v30; ++j )
        {
          v32 = (void *)v29[3 * j];
          v33 = (char *)&v29[3 * j];
          if ( v32 )
          {
            *((_DWORD *)v33 + 1) = 0;
            sub_77E08(v32);
          }
          v29 = *(_DWORD **)(a1 + 380);
        }
      }
      *(_DWORD *)(a1 + 384) = 0;
      sub_77E08(v29);
      *(_DWORD *)(a1 + 380) = 0;
      *(_DWORD *)(a1 + 388) = 0;
    }
  }
  v34 = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 340) = 0;
  (*(void (__fastcall **)(int))(v34 + 296))(a1);
  if ( *(_DWORD *)(a1 + 400) == -1 || *(_DWORD *)(a1 + 404) == -1 )
    goto LABEL_56;
  v35 = *(_DWORD *)(a1 + 348);
  if ( !v35 )
    v35 = *(_DWORD *)(a1 + 396);
  if ( v35 <= 0 )
  {
LABEL_56:
    if ( !under_debugger )
      sub_78AFC(30016);
    goto LABEL_28;
  }
  nullsub_9(1);
  if ( v111 )
    v44 = (char *)v110;
  else
    v44 = (char *)&dword_8DA5C;
  v45 = (unsigned int *)sub_15AF4((int *)&v75, v44);
  v46 = (int *)v45;
  if ( v45 )
  {
    v113 = *v45;
    v47 = sub_18394(a1, &v75, v45);
    v48 = *(unsigned __int8 *)(a1 + 453);
    v114 = v47;
    if ( !v48 )
      v115 = *v46;
  }
  else if ( !*(_BYTE *)(a1 + 453) )
  {
    sub_172DC(a1, "%s: nowhere in the process memory?!\n", v44);
  }
  if ( !sub_1E2B4(a1, (int *)&v75) )
    sub_172DC(a1, "Could not set the shlib bpt, shared object events will not be handled\n");
  if ( (v109 & 0xFFFFFFF) != 0 )
  {
    v64 = *(_DWORD *)(a1 + 80);
    if ( v64 == *(_DWORD *)(a1 + 88) - 44 )
    {
      sub_1BA70((_DWORD *)(a1 + 56), (int)&v105);
    }
    else
    {
      *(_DWORD *)v64 = -1;
      *(_DWORD *)(v64 + 8) = -1;
      *(_DWORD *)(v64 + 4) = 0;
      *(_BYTE *)(v64 + 12) = 0;
      *(_DWORD *)(v64 + 16) = 0;
      sub_6E4A8(v64, (int)&v105);
      *(_DWORD *)(a1 + 80) += 44;
    }
    *(_BYTE *)(a1 + 1112) = 0;
  }
  if ( a3 )
  {
    sub_6E3C0(&v105, 11);
    v49 = v109 & 0xFFFFFFF;
    if ( (v109 & 0xFFFFFFF) == 1 )
      goto LABEL_127;
    v50 = v49 == 11;
    if ( v49 != 11 )
      v50 = v49 == 8;
    if ( !v50 )
    {
      if ( !under_debugger )
        sub_78AFC(3295);
      goto LABEL_28;
    }
    if ( v49 )
    {
LABEL_127:
      v65 = *(_DWORD *)(a1 + 80);
      if ( v65 == *(_DWORD *)(a1 + 88) - 44 )
      {
        sub_1BA70((_DWORD *)(a1 + 56), (int)&v105);
      }
      else
      {
        *(_DWORD *)v65 = -1;
        *(_DWORD *)(v65 + 8) = -1;
        *(_DWORD *)(v65 + 4) = 0;
        *(_BYTE *)(v65 + 12) = 0;
        *(_DWORD *)(v65 + 16) = 0;
        sub_6E4A8(v65, (int)&v105);
        *(_DWORD *)(a1 + 80) += 44;
      }
      *(_BYTE *)(a1 + 1112) = 0;
    }
    if ( !sub_7A72C("IDA_SKIP_SYMS", 0) )
    {
      v78 = nullptr;
      v79 = 0;
      v80 = 0;
      if ( v111 )
        v53 = (int *)v110;
      else
        v53 = &dword_8DA5C;
      v82 = 4;
      v83 = &v78;
      v81 = (int (**)())&off_CF590;
      sub_34EA8((int)v53, &v81, 0);
      v71 = v113;
      v72 = v114;
      if ( v111 )
        v54 = (const char *)v110;
      else
        v54 = (const char *)&dword_8DA5C;
      v81 = nullptr;
      v82 = 0;
      v83 = nullptr;
      if ( v54 )
      {
        v66 = strlen(v54);
        v67 = v66 + 1;
        n = v66;
        v81 = (int (**)())sub_77EB0((int)&v81, nullptr, v66 + 1, 1u);
        v82 = v67;
        memmove(v81, v54, n);
        *((_BYTE *)v81 + n) = 0;
        v68 = v82;
        v84 = v71;
        v85 = v72;
        v86 = nullptr;
        v87 = 0;
        v88 = 0;
        if ( v82 )
        {
          v86 = sub_77E84(v82);
          v88 = v68;
          memcpy(v86, v81, v68);
          v87 = v68;
        }
      }
      else
      {
        v84 = v113;
        v85 = v114;
        v86 = nullptr;
        v87 = 0;
        v88 = 0;
      }
      v55 = v79;
      v89 = nullptr;
      v90 = 0;
      v91 = 0;
      if ( v79 )
      {
        v89 = sub_77E84(v79);
        v91 = v55;
        memcpy(v89, v78, v55);
        v90 = v55;
      }
      v93 = 0;
      v94 = nullptr;
      v97 = 0;
      v98 = nullptr;
      v99 = 0;
      v100 = 0;
      v101 = nullptr;
      v102 = 0;
      v103 = 0;
      v104 = 0;
      v95 = &v93;
      v96 = &v93;
      if ( v81 )
      {
        v82 = 0;
        sub_77E08(v81);
      }
      sub_18BD0(a1, &v84);
      if ( v101 )
      {
        v102 = 0;
        sub_77E08(v101);
      }
      if ( v98 )
      {
        v99 = 0;
        sub_77E08(v98);
      }
      sub_18B5C((int)&v92, v94);
      if ( v89 )
      {
        v90 = 0;
        sub_77E08(v89);
      }
      if ( v86 )
      {
        v87 = 0;
        sub_77E08(v86);
      }
      if ( v78 )
      {
        v79 = 0;
        sub_77E08(v78);
      }
    }
  }
  v56 = v75;
  if ( v75 )
  {
    v57 = v76;
    if ( v76 )
    {
      v58 = 0;
      v59 = (int)v75;
      v60 = 0;
      while ( 1 )
      {
        v61 = (_DWORD *)(v59 + v58);
        v62 = (void *)v61[5];
        if ( v62 )
        {
          v61[6] = 0;
          sub_77E08(v62);
        }
        v63 = (void *)v61[2];
        if ( v63 )
        {
          v61[3] = 0;
          sub_77E08(v63);
        }
        ++v60;
        v58 += 40;
        if ( v57 == v60 )
          break;
        v59 = (int)v75;
      }
      v56 = v75;
    }
    v76 = 0;
    sub_77E08(v56);
  }
  v10 = 1;
LABEL_68:
  sub_6E318(&v105);
  return v10;
}
// 1F068: variable 'v5' is possibly undefined
// 56FE4: using guessed type int __fastcall nullsub_9(_DWORD);
// 8DA5C: using guessed type int dword_8DA5C;
// CF590: using guessed type _UNKNOWN *off_CF590;
// D5C00: using guessed type char under_debugger;
