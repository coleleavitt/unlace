/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140021D00
// Address: 0x0000000140021D00

//----- (0000000140021D00) ----------------------------------------------------
char __fastcall sub_140021D00(__int64 a1, char *a2, char *a3, int a4)
{
  char *v5; // r14
  signed int v7; // r12d
  int v8; // r15d
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  struct __crt_locale_pointers *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  int v14; // r15d
  signed int v15; // eax
  signed int v16; // r8d
  __int64 v17; // rcx
  char *v18; // rdx
  struct _RTL_CRITICAL_SECTION *v19; // rbx
  int v20; // eax
  char *v21; // rdx
  char v22; // r14
  va_list v23; // r9
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  _QWORD *v28; // rax
  char *v30; // rax
  unsigned __int8 v31; // si
  __int64 v32; // rax
  unsigned __int16 v33; // ax
  char *v34; // r15
  signed int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rsi
  signed int v38; // r14d
  __int128 *v39; // r13
  _BYTE *v40; // rsi
  __int64 v41; // rbx
  int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // eax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 *v50; // rcx
  unsigned __int64 v51; // rax
  int v52; // edx
  unsigned __int8 v53; // al
  unsigned __int16 v54; // ax
  char *v55; // rax
  unsigned __int16 v56; // ax
  int v57; // edx
  unsigned __int8 v58; // al
  char *v59; // rax
  int v60; // edx
  unsigned __int8 v61; // al
  unsigned __int16 v62; // ax
  __int64 v63; // rbx
  char *v64; // rax
  unsigned __int16 v65; // ax
  int v66; // edx
  unsigned __int8 v67; // al
  __int64 v68; // rbx
  char *v69; // rax
  int v70; // edx
  unsigned __int8 v71; // al
  unsigned __int16 v72; // ax
  char *v73; // rax
  int v74; // edx
  unsigned __int8 v75; // al
  unsigned __int16 v76; // ax
  __int64 v77; // rbx
  char *v78; // rax
  int v79; // edx
  char *v80; // rax
  unsigned __int8 v81; // al
  unsigned __int16 v82; // ax
  int v83; // edx
  unsigned __int16 v84; // ax
  unsigned __int8 v85; // al
  unsigned __int16 v86; // ax
  unsigned __int8 v87; // al
  __int64 v88; // rbx
  unsigned __int16 v89; // ax
  char *v90; // rax
  __int64 v91; // rbx
  unsigned __int8 v92; // al
  unsigned __int16 v93; // ax
  unsigned __int8 v94; // al
  unsigned __int16 v95; // ax
  int v96; // edx
  unsigned __int8 v97; // al
  __int64 v98; // rbx
  unsigned __int16 v99; // ax
  char *v100; // rax
  __int64 v101; // rbx
  unsigned __int8 v102; // al
  unsigned __int16 v103; // ax
  unsigned __int8 v104; // al
  unsigned __int16 v105; // ax
  int v106; // edx
  unsigned __int8 v107; // al
  _QWORD *v108; // rsi
  __int64 v109; // rbx
  void *v110; // rdx
  char *v111; // rcx
  __int64 v112; // r9
  char *v113; // rax
  __int64 v114; // rsi
  struct _RTL_CRITICAL_SECTION *v115; // rbx
  __int64 (__fastcall ***v116)(_QWORD, char *); // rcx
  int v117; // r14d
  unsigned __int8 v118; // al
  unsigned __int16 v119; // ax
  unsigned __int16 v120; // ax
  int v121; // eax
  signed __int64 v122; // rsi
  signed __int64 v123; // r14
  _BYTE *v124; // rax
  _BYTE *v125; // rbx
  int v126; // eax
  int v127; // r14d
  __int64 v128; // rbx
  __int64 v129; // rbx
  __int64 *v130; // rax
  __int64 *v131; // rsi
  int v132; // edx
  unsigned __int16 v133; // ax
  void *v134; // rax
  __int64 v135; // rax
  unsigned __int64 v136; // rcx
  _DWORD *v137; // rbx
  int v138; // eax
  int v139; // eax
  char *v140; // rbx
  __int64 v141; // rcx
  int v142; // ebx
  __int64 v143; // rsi
  int v144; // ebx
  __int64 v145; // r14
  __int64 v146; // rbx
  __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rbx
  __int64 v150; // rcx
  __int64 v151; // r15
  int v152; // eax
  __int64 v153; // rcx
  __int64 v154; // rbx
  __int64 v155; // rcx
  __int64 v156; // rsi
  char *v157; // rbx
  __int64 v158; // rcx
  __int64 v159; // rbx
  unsigned __int8 v160; // al
  unsigned __int16 v161; // ax
  int v162; // [rsp+20h] [rbp-E0h]
  int v163; // [rsp+30h] [rbp-D0h]
  char v164[4]; // [rsp+34h] [rbp-CCh] BYREF
  char v165[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v166; // [rsp+40h] [rbp-C0h] BYREF
  signed __int64 v167; // [rsp+50h] [rbp-B0h]
  int v168; // [rsp+58h] [rbp-A8h]
  char *v169; // [rsp+60h] [rbp-A0h] BYREF
  void *Block; // [rsp+68h] [rbp-98h] BYREF
  __int64 v171; // [rsp+70h] [rbp-90h]
  unsigned __int64 v172; // [rsp+78h] [rbp-88h]
  char *v173; // [rsp+80h] [rbp-80h]
  char v174[8]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v175; // [rsp+90h] [rbp-70h]
  __int64 v176; // [rsp+A0h] [rbp-60h]
  char v177[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v178; // [rsp+B0h] [rbp-50h]
  __int64 v179; // [rsp+C0h] [rbp-40h]
  char v180[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v181; // [rsp+D0h] [rbp-30h]
  __int64 v182; // [rsp+E0h] [rbp-20h]
  void *v183; // [rsp+E8h] [rbp-18h]
  void *v184; // [rsp+F0h] [rbp-10h]
  void *v185; // [rsp+F8h] [rbp-8h]
  __int64 *v186; // [rsp+100h] [rbp+0h]
  void *v187; // [rsp+108h] [rbp+8h]
  unsigned int v188[2]; // [rsp+110h] [rbp+10h] BYREF
  int v189; // [rsp+118h] [rbp+18h]
  int v190; // [rsp+11Ch] [rbp+1Ch]
  struct __crt_locale_pointers v191; // [rsp+120h] [rbp+20h] BYREF

  v5 = a3;
  v173 = a2;
  v165[0] = 2;
  v167 = 0;
  v7 = 0;
  v166 = 0u;
  v168 = 0;
  v8 = *(_DWORD *)(a1 + 56);
  v163 = v8;
  *(_QWORD *)(a1 + 128) = 0;
  if ( a3 )
  {
    v9 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
    v183 = qword_1400CAFD8;
    sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
    a4 = sub_14002CEB0(*(_QWORD **)(a1 + 8), v5);
    sub_14005D6D0(v9);
    if ( a4 == 0x7FFFFFFF )
      goto LABEL_311;
  }
  *(_DWORD *)(a1 + 120) = a4;
  while ( 1 )
  {
    v10 = (struct __crt_locale_pointers *)*(int *)(a1 + 120);
    if ( (int)v10 < 0 )
      break;
    v11 = *(_QWORD **)(a1 + 8);
    if ( (unsigned __int64)v10 >= v11[1] )
    {
      v12 = 0;
LABEL_28:
      sub_1400640B0(0x58u);
      if ( v12 && *(_QWORD *)(v12 + 8) > 1u )
      {
        sub_140063F70(0, *(_BYTE **)v12);
      }
      else
      {
        sub_14005B0A0(&v191, 20, "#%d", *(_DWORD *)(a1 + 120));
        sub_140063F70(0, &v191);
      }
      goto LABEL_33;
    }
    v12 = *(_QWORD *)(*v11 + 8LL * (_QWORD)v10);
    if ( !v12 || !*(_QWORD *)(v12 + 40) )
      goto LABEL_28;
    v13 = *(_QWORD *)(a1 + 80);
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v13 - 4);
    if ( v13 )
      *(_QWORD *)(a1 + 80) = v13 - 1;
    v15 = *(_DWORD *)(a1 + 32) - v14;
    v16 = *(_DWORD *)(v12 + 24);
    if ( v15 < v16 )
    {
      v17 = *(_QWORD *)(v12 + 72);
      if ( v17 )
        v15 = sub_1400285B0(a1, v15, v16, *(_QWORD *)(v12 + 64), v17);
    }
    if ( *(_DWORD *)(v12 + 24) == v15 )
    {
      v19 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
      v184 = qword_1400CAFD8;
      sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
      v20 = *(_DWORD *)(v12 + 136);
      if ( v20 == -1 )
      {
        v21 = (char *)Str1;
        if ( *(_QWORD *)(v12 + 8) )
          v21 = *(char **)v12;
        sub_140063F70(0, v21);
        sub_1400640B0(0x28u);
        v22 = 0;
      }
      else
      {
        *(_DWORD *)(v12 + 136) = v20 + 1;
        v22 = 1;
      }
      sub_14005D6D0(v19);
      if ( v22 )
      {
        v24 = *(_QWORD *)(a1 + 56) + 1LL;
        if ( v24 > *(_QWORD *)(a1 + 64) )
          *(_QWORD *)(a1 + 48) = sub_14005ABE0(a1 + 48, *(void **)(a1 + 48), v24, 0x18u);
        v10 = *(struct __crt_locale_pointers **)(a1 + 56);
        v25 = *(_QWORD *)(a1 + 48) + 24LL * (_QWORD)v10;
        *(_QWORD *)(a1 + 56) = (char *)&v10->locinfo + 1;
        *(_DWORD *)(v25 + 8) = *(_DWORD *)(a1 + 112);
        *(_QWORD *)v25 = *(_QWORD *)(a1 + 104);
        *(_DWORD *)(v25 + 12) = *(_DWORD *)(a1 + 96);
        *(_DWORD *)(v25 + 16) = *(_DWORD *)(a1 + 100);
        *(_DWORD *)(a1 + 96) = v14;
        *(_DWORD *)(a1 + 100) = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 128) = v12 + 32;
        *(_QWORD *)(a1 + 104) = v12;
        v7 = 0;
        *(_QWORD *)(a1 + 112) = 0;
        goto LABEL_52;
      }
    }
    else
    {
      sub_1400640B0(0x38u);
      v18 = (char *)Str1;
      if ( *(_QWORD *)(v12 + 8) )
        v18 = *(char **)v12;
      sub_140063F70(0, v18);
    }
LABEL_32:
    while ( 1 )
    {
      v8 = v163;
LABEL_33:
      if ( (unsigned int)sub_140063DE0() != 90 )
        sub_140021BB0((__int64)v165);
      v26 = *(_QWORD *)(a1 + 32) + 1LL;
      if ( v26 > *(_QWORD *)(a1 + 40) )
        *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v26, 0x20u);
      v27 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
      *(_BYTE *)v27 = 2;
      v7 = 0;
      *(_QWORD *)(v27 + 16) = 0;
      *(_QWORD *)(v27 + 24) = 0;
      *(_QWORD *)(v27 + 8) = 0;
      ++*(_QWORD *)(a1 + 32);
      sub_14002A460((char *)v27, v165);
LABEL_38:
      sub_140023AB0(a1, 32LL * *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24) - 32LL);
LABEL_39:
      v28 = *(_QWORD **)(a1 + 128);
      if ( !v28 )
      {
LABEL_44:
        sub_140029390((__int64)v165);
        return 0;
      }
      while ( !sub_14002D780(v28, *(_QWORD *)(a1 + 112) - 1LL, v188) )
      {
        if ( *(_QWORD *)(a1 + 56) > (unsigned __int64)v8 )
        {
          if ( !sub_140028220(a1) )
          {
            if ( byte_1400CB61C )
              __debugbreak();
            sub_14005A480(301);
          }
          v28 = *(_QWORD **)(a1 + 128);
          if ( v28 )
            continue;
        }
        goto LABEL_44;
      }
      *(_QWORD *)(a1 + 112) = v188[1];
      switch ( v189 )
      {
        case 1:
          v30 = (char *)sub_1400260F0(a1, v190);
          break;
        case 2:
          v30 = (char *)sub_140023C60(a1, v190);
          break;
        case 3:
          v30 = (char *)sub_1400258A0(*(_QWORD *)(a1 + 8), v190);
          break;
        default:
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(300);
      }
      v169 = v30;
      sub_140028C20((_QWORD *)(a1 + 24), v30);
LABEL_52:
      if ( *(_BYTE *)(a1 + 144) || !(unsigned __int8)off_1400C6AE0(27, v10, v25, v23, v162) )
        break;
      sub_1400640B0(0x5CFu);
    }
    v31 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
    ++*(_QWORD *)(a1 + 112);
    v32 = *(_QWORD *)(a1 + 8);
    if ( !*(_BYTE *)(v32 + 124) )
    {
      v25 = (unsigned int)(v168 + 1);
      v168 = v25;
      if ( (int)v25 > 100 )
      {
        v168 = 0;
        if ( *(_QWORD *)(v32 + 112) != -1
          && sub_14005C830()
          && unknown_libname_44(0) - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) > 2 )
        {
          sub_1400085B0((signed __int64)"Running IDC script");
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 124LL) = 1;
        }
      }
    }
    v8 = v163;
LABEL_61:
    v10 = (struct __crt_locale_pointers *)v31;
    switch ( v31 )
    {
      case 0u:
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
        goto LABEL_64;
      case 0x10u:
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
        *(_DWORD *)(a1 + 120) = v31 - 16;
        continue;
      case 0x20u:
      case 0x21u:
      case 0x22u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
        v52 = v31 - 32;
        goto LABEL_123;
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
        v70 = v31 - 48;
        goto LABEL_141;
      case 0x40u:
      case 0x41u:
      case 0x42u:
      case 0x43u:
      case 0x44u:
      case 0x45u:
      case 0x46u:
      case 0x47u:
      case 0x48u:
      case 0x49u:
      case 0x4Au:
      case 0x4Bu:
      case 0x4Cu:
      case 0x4Du:
      case 0x4Eu:
      case 0x4Fu:
        v60 = v31 - 64;
        goto LABEL_132;
      case 0x50u:
      case 0x51u:
      case 0x52u:
      case 0x53u:
      case 0x54u:
      case 0x55u:
      case 0x56u:
      case 0x57u:
      case 0x58u:
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Cu:
      case 0x5Du:
      case 0x5Eu:
      case 0x5Fu:
        v74 = v31 - 80;
        goto LABEL_146;
      case 0x60u:
      case 0x61u:
      case 0x62u:
      case 0x63u:
      case 0x64u:
      case 0x65u:
      case 0x66u:
      case 0x67u:
      case 0x68u:
      case 0x69u:
      case 0x6Au:
      case 0x6Bu:
      case 0x6Cu:
      case 0x6Du:
      case 0x6Eu:
      case 0x6Fu:
        v79 = v31 - 96;
        *(_DWORD *)(a1 + 120) = v79;
        v80 = (char *)sub_1400260F0(a1, v79);
        goto LABEL_175;
      case 0x70u:
      case 0x71u:
      case 0x72u:
      case 0x73u:
      case 0x74u:
      case 0x75u:
      case 0x76u:
      case 0x77u:
      case 0x78u:
      case 0x79u:
      case 0x7Au:
      case 0x7Bu:
      case 0x7Cu:
      case 0x7Du:
      case 0x7Eu:
      case 0x7Fu:
        v83 = v31 - 112;
        *(_DWORD *)(a1 + 120) = v83;
        v80 = (char *)sub_140023C60(a1, v83);
        goto LABEL_175;
      case 0x80u:
        LODWORD(v10) = (unsigned __int8)sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        goto LABEL_64;
      case 0x81u:
        v33 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        LODWORD(v10) = v33;
        goto LABEL_64;
      case 0x82u:
        v160 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        *(_DWORD *)(a1 + 120) = v160;
        continue;
      case 0x83u:
        v161 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        *(_DWORD *)(a1 + 120) = v161;
        continue;
      case 0x84u:
        v53 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v52 = v53;
        goto LABEL_123;
      case 0x85u:
        v54 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v52 = v54;
LABEL_123:
        *(_DWORD *)(a1 + 120) = v52;
        v55 = (char *)sub_1400260F0(a1, v52);
        if ( !sub_140028C20((_QWORD *)(a1 + 24), v55) )
          goto LABEL_33;
        goto LABEL_52;
      case 0x86u:
        v71 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v70 = v71;
        goto LABEL_141;
      case 0x87u:
        v72 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v70 = v72;
LABEL_141:
        *(_DWORD *)(a1 + 120) = v70;
        v73 = (char *)sub_140023C60(a1, v70);
        if ( !sub_140028C20((_QWORD *)(a1 + 24), v73) )
          goto LABEL_33;
        goto LABEL_52;
      case 0x88u:
        v61 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v60 = v61;
        goto LABEL_132;
      case 0x89u:
        v62 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v60 = v62;
LABEL_132:
        *(_DWORD *)(a1 + 120) = v60;
        v63 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
        v64 = (char *)sub_1400260F0(a1, v60);
        if ( (unsigned int)sub_140028E70(v64, (char *)(v63 - 32)) )
          goto LABEL_33;
        goto LABEL_52;
      case 0x8Au:
        v75 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v74 = v75;
        goto LABEL_146;
      case 0x8Bu:
        v76 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v74 = v76;
LABEL_146:
        *(_DWORD *)(a1 + 120) = v74;
        v77 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
        v78 = (char *)sub_140023C60(a1, v74);
        if ( (unsigned int)sub_140028E70(v78, (char *)(v77 - 32)) )
          goto LABEL_33;
        goto LABEL_52;
      case 0x8Cu:
        v81 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        *(_DWORD *)(a1 + 120) = v81;
        v80 = (char *)sub_1400260F0(a1, v81);
        goto LABEL_175;
      case 0x8Du:
        v82 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        *(_DWORD *)(a1 + 120) = v82;
        v80 = (char *)sub_1400260F0(a1, v82);
        goto LABEL_175;
      case 0x8Eu:
        v85 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        *(_DWORD *)(a1 + 120) = v85;
        v80 = (char *)sub_140023C60(a1, v85);
        goto LABEL_175;
      case 0x8Fu:
        v84 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        *(_DWORD *)(a1 + 120) = v84;
        v80 = (char *)sub_140023C60(a1, v84);
        goto LABEL_175;
      case 0xA0u:
        LOBYTE(v48) = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v48 = (char)v48;
        goto LABEL_114;
      case 0xA1u:
        LOWORD(v48) = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v48 = (__int16)v48;
        goto LABEL_114;
      case 0xA2u:
        v118 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        *(_DWORD *)(a1 + 120) = v118;
        sub_140028540(a1, v118);
        goto LABEL_52;
      case 0xA3u:
        v119 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        *(_DWORD *)(a1 + 120) = v119;
        sub_140028540(a1, v119);
        goto LABEL_52;
      case 0xA4u:
        v158 = 32LL * *(_QWORD *)(a1 + 32);
        v157 = (char *)(v158 + *(_QWORD *)(a1 + 24) - 32LL);
        if ( *v157 == 10 && !sub_1400291D0((char *)(v158 + *(_QWORD *)(a1 + 24) - 32LL), 2) )
          goto LABEL_33;
        if ( *v157 != 2 && *v157 != 9 || *((_QWORD *)v157 + 1) == -1 || dword_1400C60B0 <= 0 )
          goto LABEL_321;
        sub_140028C20((_QWORD *)(a1 + 24), v165);
        v159 = 32LL * *(int *)(*(_QWORD *)(a1 + 72) + 4LL * *(_QWORD *)(a1 + 80) - 4);
        sub_140025D30((char **)(a1 + 24), v159 + *(_QWORD *)(a1 + 24), v165);
        v180[0] = 2;
        v182 = 0;
        v181 = 0u;
        sub_140025D30((char **)(a1 + 24), v159 + *(_QWORD *)(a1 + 24) + 32LL, v180);
        sub_140029390((__int64)v180);
        *(_DWORD *)(a1 + 120) = -dword_1400C60B0;
        continue;
      case 0xA5u:
        v120 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        *(_DWORD *)(a1 + 120) = v120;
        v165[0] = 2;
        *(_QWORD *)&v166 = 0;
        sub_140028700((unsigned __int64 *)(a1 + 24), *(_QWORD *)(a1 + 32) + v120, v165);
        goto LABEL_52;
      case 0xA6u:
        goto LABEL_52;
      case 0xA7u:
        LODWORD(v48) = sub_14002DC50(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        v48 = (int)v48;
        goto LABEL_114;
      case 0xA8u:
        v121 = sub_14002DC50(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        v122 = v121;
        v123 = v121 + 1LL;
        v124 = sub_14005AA50(v123);
        v125 = v124;
        if ( !v124 )
          goto LABEL_33;
        sub_140025C80(a1, v124, v122);
        v125[v122] = 0;
        v165[0] = 7;
        *(_QWORD *)&v166 = v125;
        v167 = v123;
        *((_QWORD *)&v166 + 1) = v123;
        sub_140028D60(a1, v165);
        goto LABEL_52;
      case 0xA9u:
        goto LABEL_293;
      case 0xAAu:
      case 0xD4u:
        v117 = *(_DWORD *)(a1 + 32) - 1;
        if ( v31 != 0xD4 )
          v117 = *(_DWORD *)(a1 + 32);
        v25 = *(_QWORD *)(a1 + 80) + 1LL;
        if ( v25 > *(_QWORD *)(a1 + 88) )
          *(_QWORD *)(a1 + 72) = sub_14005ABE0(a1 + 72, *(void **)(a1 + 72), v25, 4u);
        *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4LL * (*(_QWORD *)(a1 + 80))++) = v117;
        goto LABEL_52;
      case 0xABu:
        v126 = sub_14002DC50(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        sub_14002E1C0(a1, v126);
        goto LABEL_52;
      case 0xACu:
      case 0xADu:
        v127 = sub_14002DC50(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        v128 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
        if ( !sub_140021910((char *)(v128 - 32)) )
          goto LABEL_33;
        if ( v31 == 0xAD )
          *(_QWORD *)(v128 - 24) = *(_QWORD *)(v128 - 24) == 0;
        if ( *(_QWORD *)(v128 - 24) )
          sub_14002E1C0(a1, v127);
        goto LABEL_293;
      case 0xAEu:
        v114 = 32LL * *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24) - 32LL;
        if ( (unsigned int)sub_14002A220(v114) )
          goto LABEL_33;
        v5 = (char *)Str1;
        if ( *(_QWORD *)(v114 + 16) )
          v5 = *(char **)(v114 + 8);
        v115 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
        v185 = qword_1400CAFD8;
        sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
        *(_DWORD *)(a1 + 120) = sub_14002CEB0(*(_QWORD **)(a1 + 8), v5);
        sub_14005D6D0(v115);
        if ( *(_DWORD *)(a1 + 120) != 0x7FFFFFFF )
        {
          sub_140029390(v114);
          *(_BYTE *)v114 = 6;
          *(_DWORD *)(v114 + 8) = *(_DWORD *)(a1 + 120);
          goto LABEL_52;
        }
        v116 = *(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 136);
        if ( v116 )
        {
          *(_QWORD *)&v166 = (**v116)(v116, v5);
          if ( (_QWORD)v166 != -1 )
          {
            sub_140028E70((char *)v114, v165);
            goto LABEL_52;
          }
        }
LABEL_311:
        sub_1400640B0(0x58u);
        sub_140063F70(0, v5);
        goto LABEL_33;
      case 0xAFu:
        if ( !sub_140028220(a1) )
          goto LABEL_33;
        if ( *(_QWORD *)(a1 + 56) > (unsigned __int64)v8 )
          goto LABEL_52;
        if ( v173 )
        {
          if ( !sub_140028C20((_QWORD *)(a1 + 24), v173) )
            goto LABEL_33;
        }
        else
        {
          sub_140028BA0(a1);
        }
        goto LABEL_330;
      case 0xB0u:
      case 0xB1u:
      case 0xB2u:
      case 0xB3u:
      case 0xB4u:
      case 0xB5u:
      case 0xB6u:
      case 0xB7u:
      case 0xB8u:
      case 0xB9u:
      case 0xBAu:
      case 0xBBu:
      case 0xBCu:
      case 0xBDu:
      case 0xBEu:
      case 0xBFu:
      case 0xC8u:
      case 0xC9u:
      case 0xCAu:
      case 0xCBu:
      case 0xCCu:
      case 0xCDu:
      case 0xCEu:
      case 0xD0u:
      case 0xD1u:
        if ( (unsigned int)sub_1400264D0((_QWORD *)(a1 + 24), v31) )
          goto LABEL_33;
        goto LABEL_52;
      case 0xC0u:
        v94 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v90 = (char *)sub_1400260F0(a1, v94);
        goto LABEL_163;
      case 0xC1u:
        v93 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v90 = (char *)sub_1400260F0(a1, v93);
        goto LABEL_163;
      case 0xC2u:
        v97 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v96 = v97;
        goto LABEL_162;
      case 0xC3u:
        v95 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v96 = v95;
LABEL_162:
        v90 = (char *)sub_140023C60(a1, v96);
        goto LABEL_163;
      case 0xC4u:
        v104 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v100 = (char *)sub_1400260F0(a1, v104);
        goto LABEL_172;
      case 0xC5u:
        v103 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v100 = (char *)sub_1400260F0(a1, v103);
        goto LABEL_172;
      case 0xC6u:
        v107 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v106 = v107;
        goto LABEL_171;
      case 0xC7u:
        v105 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v106 = v105;
LABEL_171:
        v100 = (char *)sub_140023C60(a1, v106);
        goto LABEL_172;
      case 0xD2u:
        v165[0] = 3;
        sub_14002D910(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112), &v166, 16);
        *(_QWORD *)(a1 + 112) += 16LL;
        sub_140028CD0(a1, v165);
        goto LABEL_52;
      case 0xD3u:
        v49 = *(_QWORD *)(a1 + 112);
        v50 = *(__int64 **)(a1 + 128);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) == 4 )
        {
          v51 = sub_14002DB50(v50, v49);
          v165[0] = 9;
        }
        else
        {
          v51 = sub_14002DB50(v50, v49);
          v165[0] = 2;
        }
        *(_QWORD *)&v166 = v51;
        *(_QWORD *)(a1 + 112) += 8LL;
        sub_140028CD0(a1, v165);
        goto LABEL_52;
      case 0xD5u:
        v87 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        *(_DWORD *)(a1 + 120) = v87;
        v80 = (char *)sub_1400258A0(*(_QWORD *)(a1 + 8), v87);
        goto LABEL_175;
      case 0xD6u:
        v86 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        *(_DWORD *)(a1 + 120) = v86;
        v80 = (char *)sub_1400258A0(*(_QWORD *)(a1 + 8), v86);
        goto LABEL_175;
      case 0xD7u:
        v58 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v57 = v58;
        goto LABEL_127;
      case 0xD8u:
        v56 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v57 = v56;
LABEL_127:
        *(_DWORD *)(a1 + 120) = v57;
        v59 = (char *)sub_1400258A0(*(_QWORD *)(a1 + 8), v57);
        if ( !sub_140028C20((_QWORD *)(a1 + 24), v59) )
          goto LABEL_33;
        goto LABEL_52;
      case 0xD9u:
        v67 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v66 = v67;
        goto LABEL_136;
      case 0xDAu:
        v65 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v66 = v65;
LABEL_136:
        *(_DWORD *)(a1 + 120) = v66;
        v68 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
        v69 = (char *)sub_1400258A0(*(_QWORD *)(a1 + 8), v66);
        if ( (unsigned int)sub_140028E70(v69, (char *)(v68 - 32)) )
          goto LABEL_33;
        goto LABEL_52;
      case 0xDBu:
        v91 = *(_QWORD *)(a1 + 8);
        v92 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v90 = (char *)sub_1400258A0(v91, v92);
        goto LABEL_163;
      case 0xDCu:
        v88 = *(_QWORD *)(a1 + 8);
        v89 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v90 = (char *)sub_1400258A0(v88, v89);
LABEL_163:
        v169 = v90;
        if ( sub_140025CC0(v90, 1) )
          goto LABEL_52;
        goto LABEL_33;
      case 0xDDu:
        v101 = *(_QWORD *)(a1 + 8);
        v102 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v100 = (char *)sub_1400258A0(v101, v102);
        goto LABEL_172;
      case 0xDEu:
        v98 = *(_QWORD *)(a1 + 8);
        v99 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v100 = (char *)sub_1400258A0(v98, v99);
LABEL_172:
        v169 = v100;
        if ( !sub_140025CC0(v100, -1) )
          goto LABEL_33;
        goto LABEL_52;
      case 0xDFu:
        sub_1400640B0(0x5Au);
        goto LABEL_38;
      case 0xE0u:
      case 0xE1u:
      case 0xE2u:
      case 0xE3u:
      case 0xE4u:
      case 0xE5u:
      case 0xE6u:
      case 0xE7u:
      case 0xE8u:
      case 0xE9u:
      case 0xEAu:
      case 0xEBu:
      case 0xECu:
      case 0xEDu:
      case 0xEEu:
      case 0xEFu:
        v48 = v31 - 224LL;
LABEL_114:
        *(_QWORD *)&v166 = v48;
        v165[0] = 2;
        sub_140028CD0(a1, v165);
        goto LABEL_52;
      case 0xF0u:
        v133 = sub_14002DCB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        *(_DWORD *)(a1 + 120) = v133;
        v165[0] = 5;
        v134 = operator new(0x18u);
        v187 = v134;
        if ( v134 )
          v135 = sub_14002BC20((__int64)v134, *(_DWORD *)(a1 + 120));
        else
          v135 = 0;
        *(_QWORD *)&v166 = v135;
        v136 = *(int *)(v135 + 20);
        if ( (_DWORD)v136 != *(_DWORD *)(a1 + 120) )
        {
          sub_140063F20(0, *(int *)(a1 + 120));
          sub_1400640B0(0x5FFu);
          goto LABEL_33;
        }
        v137 = (_DWORD *)sub_14002D950(v136);
        v138 = sub_140025060(v137, (__int64)(v137 + 6));
        *(_DWORD *)(a1 + 120) = v138;
        if ( v138 == -1 )
        {
          do
          {
            if ( !v137[4] )
              break;
            v137 = (_DWORD *)sub_14002D9C0(*(_QWORD *)(a1 + 8), (int)v137[4]);
            v139 = sub_140025060(v137, (__int64)(v137 + 6));
            *(_DWORD *)(a1 + 120) = v139;
          }
          while ( v139 == -1 );
        }
        goto LABEL_255;
      case 0xF1u:
        v129 = 32LL * *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24) - 32LL;
        v169 = (char *)v129;
        if ( *(_BYTE *)v129 == 5 )
        {
          v130 = (__int64 *)operator new(0x18u);
          v186 = v130;
          if ( v130 )
            v131 = sub_1400211D0(v130, *(_QWORD *)(v129 + 8));
          else
            v131 = nullptr;
          sub_140029390(v129);
          *(_BYTE *)v129 = 5;
          *(_QWORD *)(v129 + 8) = v131;
          goto LABEL_52;
        }
        if ( !(unsigned int)sub_140028E70((char *)v129, (char *)v129) )
          goto LABEL_52;
        goto LABEL_33;
      case 0xF2u:
        v169 = v165;
        if ( !(unsigned __int8)sub_1400255C0(a1, &v169) )
          goto LABEL_39;
        if ( (unsigned int)sub_14002A460((char *)(*(_QWORD *)(a1 + 24) - 32LL + 32LL * *(_QWORD *)(a1 + 32)), v165) )
          goto LABEL_33;
        goto LABEL_52;
      case 0xF3u:
        if ( !(unsigned __int8)sub_140028A60((__int64 *)a1) )
          goto LABEL_39;
        goto LABEL_52;
      case 0xF4u:
        if ( (unsigned __int8)sub_140028A60((__int64 *)a1) )
          goto LABEL_293;
        goto LABEL_39;
      case 0xF5u:
      case 0xF6u:
        v169 = v165;
        if ( !(unsigned __int8)sub_1400255C0(a1, &v169) )
          goto LABEL_39;
        if ( !v169 )
        {
          sub_1400640B0(0x5FEu);
          goto LABEL_33;
        }
        v132 = -1;
        if ( v31 == 0xF5 )
          v132 = 1;
        if ( sub_140025CC0(v169, v132)
          && !(unsigned int)sub_14002A460((char *)(*(_QWORD *)(a1 + 24) - 32LL + 32LL * *(_QWORD *)(a1 + 32)), v165) )
        {
          goto LABEL_52;
        }
        goto LABEL_33;
      case 0xF7u:
        v169 = v165;
        if ( !(unsigned __int8)sub_1400259C0(a1, (_DWORD *)(a1 + 120), &v169) )
          goto LABEL_33;
        if ( *(_DWORD *)(a1 + 120) == -1 )
        {
          v157 = v169;
LABEL_321:
          if ( *v157 != 6 )
          {
            sub_1400640B0(0x605u);
            goto LABEL_33;
          }
          *(_DWORD *)(a1 + 120) = *((_DWORD *)v157 + 2);
          sub_140028BA0(a1);
        }
        else
        {
          sub_140028C20((_QWORD *)(a1 + 24), v165);
LABEL_255:
          v177[0] = 2;
          v179 = 0;
          v178 = 0u;
          v140 = sub_140025D30(
                   (char **)(a1 + 24),
                   *(_QWORD *)(a1 + 24) + 32LL * *(int *)(*(_QWORD *)(a1 + 72) + 4LL * *(_QWORD *)(a1 + 80) - 4),
                   v177);
          sub_140029390((__int64)v177);
          if ( (unsigned int)sub_14002A460(v140, v165) )
            goto LABEL_33;
          if ( *(_DWORD *)(a1 + 120) == -1 )
          {
            v141 = *(_QWORD *)(a1 + 80);
            v10 = (struct __crt_locale_pointers *)*(int *)(*(_QWORD *)(a1 + 72) + 4 * v141 - 4);
            if ( v141 )
              *(_QWORD *)(a1 + 80) = v141 - 1;
            if ( v10 != (struct __crt_locale_pointers *)(*(_QWORD *)(a1 + 32) - 1LL) )
            {
              sub_1400640B0(0x38u);
              goto LABEL_33;
            }
            goto LABEL_52;
          }
        }
        break;
      case 0xF8u:
        v142 = *(_DWORD *)(a1 + 96);
        goto LABEL_263;
      case 0xF9u:
        v142 = *(_DWORD *)(a1 + 100);
LABEL_263:
        v143 = *(_QWORD *)(a1 + 24) - 32LL + 32LL * *(_QWORD *)(a1 + 32);
        if ( (unsigned int)sub_14002A090(v143) )
          goto LABEL_33;
        v144 = *(_DWORD *)(v143 + 8) + v142;
        if ( (unsigned __int64)(unsigned int)v144 >= *(_QWORD *)(a1 + 32) )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(292);
        }
        v145 = v143;
        goto LABEL_270;
      case 0xFAu:
        v143 = 32LL * *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24) - 32LL;
        v145 = v143;
        if ( (unsigned int)sub_14002A090(v143) )
          goto LABEL_33;
        v146 = *(_QWORD *)(v143 + 8);
        if ( v146 < 0 || (unsigned __int64)v146 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL) )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(294);
        }
        v144 = ~(_DWORD)v146;
LABEL_270:
        *(_BYTE *)v143 = 10;
        *(_QWORD *)(v145 + 8) = a1;
        *(_DWORD *)(v145 + 16) = v144;
        if ( v144 < 0 )
        {
          v147 = sub_1400258A0(*(_QWORD *)(a1 + 8), ~v144);
        }
        else
        {
          if ( !a1 || *(_DWORD *)a1 != 289621065 || (unsigned __int64)v144 >= *(_QWORD *)(a1 + 32) )
          {
LABEL_353:
            if ( byte_1400CB61C )
              __debugbreak();
            sub_14005A480(293);
          }
          v147 = *(_QWORD *)(a1 + 24) + 32LL * v144;
        }
        if ( !v147 )
          goto LABEL_353;
        if ( *(_BYTE *)v147 == 10 )
          *(_OWORD *)(v145 + 8) = *(_OWORD *)(v147 + 8);
        goto LABEL_52;
      case 0xFBu:
        v150 = *(_QWORD *)(a1 + 32) - 4LL;
        if ( v150 < 0 )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(296);
        }
        v151 = 32 * v150 + *(_QWORD *)(a1 + 24);
        if ( (unsigned int)sub_14002A090(v151 + 64) || (unsigned int)sub_14002A090(v151 + 96) )
          goto LABEL_32;
        v152 = sub_14002AA60((char *)(v151 + 32), *(_QWORD *)(v151 + 72), *(_QWORD *)(v151 + 104), (char *)v151, 0);
        v8 = v163;
        if ( v152 )
          goto LABEL_33;
        sub_140028BA0(a1);
LABEL_289:
        sub_140028BA0(a1);
        sub_140028C20((_QWORD *)(a1 + 24), v165);
        sub_140028BA0(a1);
        sub_140028D60(a1, v165);
        goto LABEL_52;
      case 0xFCu:
        v148 = *(_QWORD *)(a1 + 32) - 3LL;
        if ( v148 < 0 )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(295);
        }
        v149 = 32 * v148 + *(_QWORD *)(a1 + 24);
        if ( (unsigned int)sub_14002A090(v149 + 32)
          || (unsigned int)sub_14002A090(v149 + 64)
          || (unsigned int)sub_1400299B0((char *)v149, (char *)v149, *(_QWORD *)(v149 + 40), *(_QWORD *)(v149 + 72), 0) )
        {
          goto LABEL_33;
        }
        sub_140028BA0(a1);
        sub_140028BA0(a1);
        goto LABEL_52;
      case 0xFDu:
        v80 = (char *)(32LL * *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24) - 32LL);
LABEL_175:
        sub_140028E70(v165, v80);
        if ( v165[0] != 10 )
          goto LABEL_191;
        Block = nullptr;
        v171 = 0;
        v172 = 0;
        v108 = sub_14002DA30();
        v109 = sub_140024CF0((__int64 *)&v166, (__int64)v108);
        if ( !v109 )
          goto LABEL_185;
        while ( *(_BYTE *)v109 == 10 )
        {
          v110 = Block;
          v111 = (char *)Block;
          v112 = v171;
          v113 = (char *)Block + 8 * v171;
          if ( Block != v113 )
          {
            do
            {
              if ( v109 == *(_QWORD *)v111 )
                break;
              v111 += 8;
            }
            while ( v111 != v113 );
          }
          if ( v111 == (char *)Block + 8 * v171 )
          {
            if ( v171 + 1 > v172 )
            {
              v110 = sub_14005ABE0((__int64)&Block, Block, v171 + 1, 8u);
              Block = v110;
              v112 = v171;
            }
            *((_QWORD *)v110 + v112) = v109;
            ++v171;
            v109 = sub_140024CF0((__int64 *)(v109 + 8), (__int64)v108);
            if ( v109 )
              continue;
          }
LABEL_185:
          sub_1400640B0(0x61Bu);
          if ( Block )
          {
            v171 = 0;
            j_free(Block);
            Block = nullptr;
            v172 = 0;
          }
          goto LABEL_33;
        }
        v165[0] = 2;
        if ( (unsigned int)sub_140028E70(v165, (char *)v109) )
        {
          if ( Block )
          {
            v171 = 0;
            j_free(Block);
            Block = nullptr;
            v172 = 0;
          }
          goto LABEL_33;
        }
        if ( Block )
        {
          v171 = 0;
          j_free(Block);
          Block = nullptr;
          v172 = 0;
        }
LABEL_191:
        sub_140028D60(a1, v165);
        goto LABEL_52;
      case 0xFEu:
        v153 = *(_QWORD *)(a1 + 32) - 2LL;
        if ( v153 < 0 )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(297);
        }
        v154 = 32 * v153 + *(_QWORD *)(a1 + 24);
        if ( (unsigned int)sub_14002A090(v154 + 32)
          || (unsigned int)sub_1400299B0((char *)v154, (char *)v154, *(_QWORD *)(v154 + 40), 0, 1) )
        {
          goto LABEL_33;
        }
LABEL_293:
        sub_140028BA0(a1);
        goto LABEL_52;
      case 0xFFu:
        v155 = *(_QWORD *)(a1 + 32) - 3LL;
        if ( v155 < 0 )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(298);
        }
        v156 = 32 * v155 + *(_QWORD *)(a1 + 24);
        if ( (unsigned int)sub_14002A090(v156 + 64) )
          goto LABEL_32;
        v8 = v163;
        if ( !(unsigned int)sub_14002AA60((char *)(v156 + 32), *(_QWORD *)(v156 + 72), 0, (char *)v156, 1) )
          goto LABEL_289;
        goto LABEL_33;
      default:
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(299);
    }
  }
  LODWORD(v10) = -(int)v10;
LABEL_64:
  *(_DWORD *)(a1 + 120) = (_DWORD)v10;
  v168 += 200;
  if ( (int)v10 >= (unsigned __int64)qword_1400C6060
    || (v165[0] = 2, *(_QWORD *)&v166 = 0, (v34 = (char *)off_1400C6068 + 40 * (int)v10) == nullptr) )
  {
    sub_1400640B0(0x57u);
    goto LABEL_32;
  }
  v35 = sub_14002CFB0(*((const char **)v34 + 2), v164);
  v36 = *(_QWORD *)(a1 + 80);
  v37 = *(int *)(*(_QWORD *)(a1 + 72) + 4 * v36 - 4);
  if ( v36 )
    *(_QWORD *)(a1 + 80) = v36 - 1;
  v38 = *(_DWORD *)(a1 + 32) - v37;
  if ( v38 < v35 )
    v38 = sub_1400285B0(a1, v38, v35, *((_QWORD *)v34 + 3), *((_DWORD *)v34 + 8));
  if ( v164[0] )
  {
    *(_QWORD *)&v166 = v38;
  }
  else if ( v35 != v38 )
  {
    sub_140063F70(0, *(_BYTE **)v34);
    sub_1400640B0(0x38u);
    goto LABEL_32;
  }
  if ( (v34[36] & 1) != 0 && qword_1400C6090 && !(unsigned __int8)qword_1400C6090() )
  {
    sub_1400640B0(0x5D1u);
    goto LABEL_32;
  }
  if ( (v34[36] & 4) == 0 && !sub_14005C830() )
  {
    sub_140063F70(0, *(_BYTE **)v34);
    sub_1400640B0(0x8Fu);
    goto LABEL_32;
  }
  v39 = (__int128 *)(*(_QWORD *)(a1 + 24) + 32 * v37);
  v40 = *((_BYTE **)v34 + 2);
  v41 = (__int64)v39;
  if ( v38 <= 0 )
  {
LABEL_93:
    if ( !*v40 || *v40 == 4 )
      goto LABEL_97;
    v43 = 56;
  }
  else
  {
    while ( *(_BYTE *)v41 == *v40 )
    {
LABEL_92:
      ++v7;
      v41 += 32;
      ++v40;
      if ( v7 >= v38 )
        goto LABEL_93;
    }
    switch ( *v40 )
    {
      case 2:
        v42 = sub_14002A090(v41);
        goto LABEL_85;
      case 3:
        v42 = sub_140029E90(v41);
        goto LABEL_85;
      case 4:
        if ( !v40[1] )
          --v40;
        goto LABEL_92;
      case 5:
      case 8:
        v43 = 1532;
        break;
      case 6:
        v43 = 1554;
        break;
      case 7:
        v42 = sub_14002A220(v41);
        goto LABEL_85;
      case 9:
        v42 = sub_140029F90(v41);
LABEL_85:
        if ( !v42 )
          goto LABEL_92;
        goto LABEL_32;
      case 0xA:
        if ( *(_BYTE *)v41 == 2 && !*(_QWORD *)(v41 + 8) )
          goto LABEL_92;
        v43 = 1566;
        break;
      default:
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(289);
    }
  }
  if ( (unsigned int)sub_1400640B0(v43) )
    goto LABEL_32;
LABEL_97:
  if ( (v34[36] & 2) != 0 )
    sub_140024440(a1, (__int64)v34, v39, v38);
  v44 = (*((__int64 (__fastcall **)(__int128 *, char *))v34 + 1))(v39, v165);
  if ( v44 )
  {
    sub_1400640B0(v44);
    goto LABEL_32;
  }
  v45 = *(_QWORD *)(a1 + 32);
  if ( v38 > v45 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(285);
  }
  v7 = 0;
  if ( v45 - v38 != v45 )
  {
    v174[0] = 2;
    v176 = 0;
    v175 = 0u;
    sub_140028700((unsigned __int64 *)(a1 + 24), v45 - v38, v174);
    sub_140029390((__int64)v174);
  }
  v8 = v163;
  if ( *(_QWORD *)(a1 + 56) > (unsigned __int64)v163 )
  {
    sub_1400640B0(0);
    v31 = sub_14002DC10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
    ++*(_QWORD *)(a1 + 112);
    if ( v31 == 0xA9 )
    {
      sub_140029390((__int64)v165);
      goto LABEL_52;
    }
    v46 = *(_QWORD *)(a1 + 32) + 1LL;
    if ( v46 > *(_QWORD *)(a1 + 40) )
      *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v46, 0x20u);
    v47 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
    *(_BYTE *)v47 = 2;
    *(_QWORD *)(v47 + 16) = 0;
    *(_QWORD *)(v47 + 24) = 0;
    *(_QWORD *)(v47 + 8) = 0;
    ++*(_QWORD *)(a1 + 32);
    sub_14002A460((char *)v47, v165);
    goto LABEL_61;
  }
  if ( v173 && (unsigned int)sub_14002A460(v173, v165) )
    goto LABEL_33;
LABEL_330:
  sub_140029390((__int64)v165);
  return 1;
}
// 1400220F2: variable 'v10' is possibly undefined
// 1400220F2: variable 'v25' is possibly undefined
// 1400220F2: variable 'v23' is possibly undefined
// 1400220F2: variable 'v162' is possibly undefined
// 14007117C: using guessed type __int64 __fastcall unknown_libname_44(_QWORD);
// 1400C6060: using guessed type __int64 qword_1400C6060;
// 1400C6090: using guessed type __int64 (*qword_1400C6090)(void);
// 1400C60B0: using guessed type int dword_1400C60B0;
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
// 1400CB61C: using guessed type char byte_1400CB61C;
