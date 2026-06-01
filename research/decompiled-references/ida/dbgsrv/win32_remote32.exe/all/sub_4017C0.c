/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4017C0
// Address: 0x004017C0

//----- (004017C0) --------------------------------------------------------
int __userpurge sub_4017C0@<eax>(__m128i a1@<xmm0>, int a2, int a3, int *a4, int a5, LPVOID *a6, unsigned int *a7)
{
  signed int v7; // esi
  _DWORD *v8; // eax
  char *v9; // edx
  unsigned int *v10; // ecx
  int result; // eax
  char *v12; // eax
  char *v13; // esi
  unsigned int v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  void *v18; // eax
  char *v19; // eax
  int v20; // ecx
  int *k; // edx
  int v22; // esi
  int v23; // eax
  const char *v24; // ecx
  int v25; // esi
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  const char *v30; // ecx
  unsigned int v31; // ecx
  const char *v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // edi
  unsigned int v35; // esi
  char *v36; // eax
  char *v37; // edx
  const char *v38; // eax
  const char *v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // edx
  unsigned int v42; // ecx
  unsigned int v43; // esi
  char *v44; // eax
  char *v45; // edx
  void *v46; // eax
  const char *v47; // eax
  int v48; // ecx
  int j; // edx
  int v50; // esi
  int v51; // eax
  int v52; // edi
  char v53; // al
  int v54; // eax
  unsigned int v55; // edi
  char *v56; // eax
  const char *v57; // eax
  int v58; // ecx
  int i; // edx
  const char *v60; // eax
  int v61; // ecx
  int m; // edx
  int v63; // edi
  int v64; // esi
  int v65; // eax
  int v66; // edx
  unsigned int v67; // esi
  char *v68; // eax
  const char *v69; // eax
  int v70; // ecx
  int n; // edx
  int v72; // edi
  int v73; // esi
  int v74; // eax
  const char *v75; // eax
  int v76; // ecx
  int ii; // edx
  int v78; // edi
  int v79; // edx
  int v80; // esi
  int v81; // eax
  const char *v82; // eax
  int v83; // ecx
  int jj; // edx
  int v85; // eax
  const char *v86; // eax
  int v87; // ecx
  int kk; // edx
  int v89; // eax
  const char *v90; // eax
  int v91; // ecx
  int mm; // edx
  int v93; // eax
  unsigned int v94; // ecx
  unsigned int v95; // eax
  int *v96; // edx
  const char *v97; // edi
  int v98; // esi
  const char *v99; // eax
  const char *v100; // eax
  unsigned int v101; // edi
  char *v102; // eax
  void *v103; // [esp-8h] [ebp-C4h]
  int v104; // [esp-8h] [ebp-C4h]
  int v105; // [esp-8h] [ebp-C4h]
  unsigned int v106; // [esp-4h] [ebp-C0h]
  const char *v107; // [esp+Ch] [ebp-B0h] BYREF
  int v108; // [esp+10h] [ebp-ACh]
  int v109; // [esp+14h] [ebp-A8h]
  __int128 v110; // [esp+18h] [ebp-A4h] BYREF
  unsigned __int8 *v111; // [esp+28h] [ebp-94h] BYREF
  unsigned int v112; // [esp+2Ch] [ebp-90h]
  unsigned __int8 *v113; // [esp+30h] [ebp-8Ch] BYREF
  unsigned int v114; // [esp+34h] [ebp-88h]
  char *v115; // [esp+38h] [ebp-84h] BYREF
  unsigned int v116; // [esp+3Ch] [ebp-80h]
  unsigned int v117; // [esp+40h] [ebp-7Ch]
  int v118; // [esp+44h] [ebp-78h] BYREF
  char *v119; // [esp+48h] [ebp-74h]
  unsigned __int8 *v120; // [esp+4Ch] [ebp-70h] BYREF
  unsigned int v121; // [esp+50h] [ebp-6Ch]
  LPVOID *v122; // [esp+54h] [ebp-68h]
  unsigned int *v123; // [esp+58h] [ebp-64h]
  const char *v124; // [esp+5Ch] [ebp-60h]
  char v125; // [esp+63h] [ebp-59h]
  void *v126; // [esp+64h] [ebp-58h] BYREF
  int v127; // [esp+68h] [ebp-54h]
  int v128; // [esp+6Ch] [ebp-50h]
  void *v129; // [esp+70h] [ebp-4Ch] BYREF
  int v130; // [esp+74h] [ebp-48h]
  int v131; // [esp+78h] [ebp-44h]
  __int128 v132; // [esp+7Ch] [ebp-40h] BYREF
  __int64 v133; // [esp+8Ch] [ebp-30h]
  void *v134; // [esp+94h] [ebp-28h] BYREF
  int v135; // [esp+98h] [ebp-24h]
  int v136; // [esp+9Ch] [ebp-20h]
  int v137; // [esp+A0h] [ebp-1Ch]
  int v138; // [esp+A4h] [ebp-18h]
  int v139; // [esp+A8h] [ebp-14h]
  int v140; // [esp+B8h] [ebp-4h]

  v122 = a6;
  v123 = a7;
  switch ( a3 )
  {
    case 0:
      if ( a5 != 4 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(30119);
      }
      v7 = sub_415770((void *)a2, *a4, &v118);
      if ( v7 >= 0 )
      {
        v8 = sub_453990(8);
        *v122 = v8;
        if ( v8 )
        {
          v9 = v119;
          *v8 = v118;
          v10 = v123;
          v8[1] = v9;
          *v10 = 8;
        }
      }
      return v7;
    case 1:
      if ( a5 != 16 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(30120);
      }
      return sub_417E40(a2, a1, *a4, a4[2], a4[3]);
    case 3:
      sub_4081F0((struct _RTL_CRITICAL_SECTION **)&hHandle);
      v120 = (unsigned __int8 *)a4;
      v121 = (unsigned int)a4 + a5;
      v12 = (char *)sub_4627C2(0xE0u);
      v119 = v12;
      v140 = 0;
      if ( v12 )
        v13 = sub_402C80(v12);
      else
        v13 = nullptr;
      v14 = *(_DWORD *)(a2 + 728) + 1;
      v140 = -1;
      if ( v14 > *(_DWORD *)(a2 + 732) )
        *(_DWORD *)(a2 + 724) = sub_453B00(a2 + 724, *(void **)(a2 + 724), v14, 4u);
      *(_DWORD *)(*(_DWORD *)(a2 + 724) + 4 * (*(_DWORD *)(a2 + 728))++) = v13;
      *(_QWORD *)&v110 = 0;
      WORD4(v110) = 0;
      HIDWORD(v110) = 0;
      sub_4029F0((unsigned int *)&v120, (unsigned int)&v110, 0x10u);
      v126 = nullptr;
      v127 = 0;
      v128 = 0;
      v129 = nullptr;
      v130 = 0;
      v131 = 0;
      v132 = 0;
      v134 = nullptr;
      v133 = 0;
      v135 = 0;
      v136 = 0;
      v137 = -1;
      v138 = 0;
      v139 = 18;
      v140 = 1;
      v15 = sub_402A20(&v120);
      sub_401590((int)&v126, v15);
      v16 = sub_402A20(&v120);
      sub_401590((int)&v129, v16);
      sub_4029F0((unsigned int *)&v120, (unsigned int)&v132, 0x18u);
      v17 = sub_402A20(&v120);
      sub_401590((int)&v134, v17);
      v137 = sub_4542B0(&v120, v121) - 1;
      v139 = sub_4541E0(&v120, v121);
      sub_4058A0((int)v13, &v110, (int)&v126);
      v115 = nullptr;
      v116 = 0;
      v117 = 0;
      v106 = *((_DWORD *)v13 + 54);
      LOBYTE(v140) = 2;
      sub_402780(&v115, v106);
      *v123 = v116;
      v18 = sub_401770(&v115);
      *v122 = v18;
      v13[93] = 1;
      sub_401400((void **)&v115);
      v140 = 3;
      if ( v134 )
      {
        v135 = 0;
        sub_453A20(v134);
        v134 = nullptr;
        v136 = 0;
      }
      v140 = 4;
      if ( v129 )
      {
        v130 = 0;
        sub_453A20(v129);
        v129 = nullptr;
        v131 = 0;
      }
      v140 = 5;
      if ( !v126 )
        return 1;
      v127 = 0;
      sub_453A20(v126);
      return 1;
    case 4:
      if ( !sub_405490((struct _RTL_CRITICAL_SECTION **)&hHandle) )
        return sub_402820(a1, v122, v123, "PDB thread not running?!?\n");
      DWORD2(v110) = a4;
      HIDWORD(v110) = (char *)a4 + a5;
      if ( a4 >= (int *)((char *)a4 + a5) )
        return -2;
      v57 = (const char *)sub_4541E0((unsigned __int8 **)&v110 + 2, (unsigned int)a4 + a5);
      v58 = 0;
      v124 = v57;
      if ( !*(_DWORD *)(a2 + 728) )
        return 1;
      for ( i = *(_DWORD *)(a2 + 724); *(const char **)(*(_DWORD *)i + 216) != v124; i += 4 )
      {
        if ( (unsigned int)++v58 >= *(_DWORD *)(a2 + 728) )
          return 1;
      }
      if ( *(_DWORD *)(*(_DWORD *)(a2 + 724) + 4 * v58) )
        sub_4016C0((unsigned int *)a2, (int)v124);
      return 1;
    case 5:
    case 6:
      if ( !sub_405490((struct _RTL_CRITICAL_SECTION **)&hHandle) )
        return sub_402820(a1, v122, v123, "PDB thread not running?!?\n");
      v120 = (unsigned __int8 *)a4;
      v121 = (unsigned int)a4 + a5;
      if ( a4 >= (int *)((char *)a4 + a5) )
        return -2;
      v47 = (const char *)sub_4541E0(&v120, (unsigned int)a4 + a5);
      v48 = 0;
      v124 = v47;
      if ( !*(_DWORD *)(a2 + 728) )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      for ( j = *(_DWORD *)(a2 + 724); *(const char **)(*(_DWORD *)j + 216) != v124; j += 4 )
      {
        if ( (unsigned int)++v48 >= *(_DWORD *)(a2 + 728) )
          return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      }
      v50 = *(_DWORD *)(*(_DWORD *)(a2 + 724) + 4 * v48);
      if ( !v50 )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      v51 = sub_4541E0(&v120, v121);
      v52 = v51;
      if ( a3 == 5 )
      {
        v53 = sub_404EF0(v50, v51);
      }
      else
      {
        v54 = sub_4541E0(&v120, v121);
        v53 = sub_404CA0(v50, v52, v54);
      }
      goto LABEL_82;
    case 7:
      if ( !sub_405490((struct _RTL_CRITICAL_SECTION **)&hHandle) )
        return sub_402820(a1, v122, v123, "PDB thread not running?!?\n");
      DWORD2(v110) = a4;
      HIDWORD(v110) = (char *)a4 + a5;
      if ( a4 >= (int *)((char *)a4 + a5) )
        return -2;
      v19 = (char *)sub_4541E0((unsigned __int8 **)&v110 + 2, (unsigned int)a4 + a5);
      v20 = 0;
      v119 = v19;
      if ( !*(_DWORD *)(a2 + 728) )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v19);
      for ( k = *(int **)(a2 + 724); ; ++k )
      {
        v22 = *k;
        if ( *(char **)(*k + 216) == v19 )
          break;
        if ( (unsigned int)++v20 >= *(_DWORD *)(a2 + 728) )
          return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v19);
      }
      if ( !v22 )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v19);
      if ( sub_456370(*(HANDLE *)(v22 + 28), 0) )
        sub_4025B0(a2, a1, v22);
      v115 = nullptr;
      v116 = 0;
      v117 = 0;
      v103 = *(void **)(v22 + 200);
      v140 = 6;
      if ( !sub_456370(v103, 0) )
      {
        sub_402780(&v115, 0);
LABEL_70:
        *v123 = v116;
        v46 = sub_401770(&v115);
        *v122 = v46;
        sub_401400((void **)&v115);
        return 1;
      }
      v23 = *(_DWORD *)(v22 + 96);
      *(_BYTE *)(v22 + 93) = 0;
      v24 = *(const char **)(v23 + 40);
      v25 = *(_DWORD *)(v23 + 8);
      v26 = -2147467259;
      v124 = v24;
      if ( v25 )
        v26 = 0;
      v112 = v26;
      if ( v25 )
      {
        sub_402780(&v115, 1u);
        v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 44))(v25);
        sub_402780(&v115, v27);
        v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 52))(v25);
        sub_402780(&v115, v28);
        v29 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 56))(v25);
        sub_402780(&v115, v29);
        v30 = pNodeName;
        if ( v124 )
          v30 = v124;
        v112 = (unsigned int)v30;
        v31 = strlen(v30);
        v32 = (const char *)(v31 + 1);
        v124 = (const char *)(v31 + 1);
        if ( v31 != -1 )
        {
          v33 = v116;
          v34 = v116;
          v35 = (unsigned int)&v32[v116];
          if ( (unsigned int)&v32[v116] < v116 )
            v35 = 0x7FFFFFFF;
          if ( v35 <= v116 )
          {
            if ( v35 != v116 )
            {
              if ( v35 < v116 )
                v33 = v35;
              v125 = 0;
              v116 = v33;
            }
          }
          else
          {
            if ( v35 <= v117 )
            {
              v37 = v115;
            }
            else
            {
              v36 = (char *)sub_453B00((int)&v115, v115, v35, 1u);
              v33 = v116;
              v37 = v36;
              v115 = v36;
            }
            sub_464890((__m128i *)&v37[v33], 0, v35 - v33);
            v32 = v124;
            v116 = v35;
          }
          sub_464310((unsigned int)&v115[v34], v112, (unsigned int)v32);
        }
        goto LABEL_70;
      }
      sub_402780(&v115, 0xFFFFFFFF);
      v107 = nullptr;
      v108 = 0;
      v109 = 0;
      LOBYTE(v140) = 7;
      v38 = sub_406DA0(a1, v112);
      sub_402970(a1, (LPVOID *)&v107, "%s: %s\n", v124, v38);
      if ( v108 )
      {
        v39 = pNodeName;
        if ( v107 )
          v39 = v107;
      }
      else
      {
        v39 = MultiByteStr;
      }
      v124 = v39;
      v40 = strlen(v39);
      v41 = v40 + 1;
      v114 = v40 + 1;
      if ( v40 == -1 )
        goto LABEL_68;
      v42 = v116;
      v112 = 0x7FFFFFFF;
      v121 = v116;
      v43 = v116 + v41;
      if ( v116 + v41 < v116 )
        v43 = v112;
      if ( v43 <= v116 )
      {
        if ( v43 == v116 )
        {
LABEL_67:
          sub_464310((unsigned int)&v115[v121], (unsigned int)v124, v41);
LABEL_68:
          sub_4016C0((unsigned int *)a2, (int)v119);
          LOBYTE(v140) = 6;
          sub_401400((void **)&v107);
          goto LABEL_70;
        }
        if ( v43 < v116 )
          v42 = v43;
        v116 = v42;
      }
      else
      {
        if ( v43 <= v117 )
        {
          v45 = v115;
        }
        else
        {
          v44 = (char *)sub_453B00((int)&v115, v115, v43, 1u);
          v42 = v116;
          v45 = v44;
          v115 = v44;
        }
        sub_464890((__m128i *)&v45[v42], 0, v43 - v42);
        v41 = v114;
        v116 = v43;
      }
      v125 = 0;
      goto LABEL_67;
    case 8:
      if ( !sub_405490((struct _RTL_CRITICAL_SECTION **)&hHandle) )
        return sub_402820(a1, v122, v123, "PDB thread not running?!?\n");
      v120 = (unsigned __int8 *)a4;
      v121 = (unsigned int)a4 + a5;
      if ( a4 >= (int *)((char *)a4 + a5) )
        return -2;
      v60 = (const char *)sub_4541E0(&v120, (unsigned int)a4 + a5);
      v61 = 0;
      v124 = v60;
      if ( !*(_DWORD *)(a2 + 728) )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      for ( m = *(_DWORD *)(a2 + 724); *(const char **)(*(_DWORD *)m + 216) != v124; m += 4 )
      {
        if ( (unsigned int)++v61 >= *(_DWORD *)(a2 + 728) )
          return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      }
      v63 = *(_DWORD *)(*(_DWORD *)(a2 + 724) + 4 * v61);
      if ( !v63 )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      v64 = sub_4542B0(&v120, v121) - 1;
      v65 = sub_4542B0(&v120, v121);
      v125 = sub_404E90(v63, v64, v65, v66);
      if ( !v125 )
        goto LABEL_85;
      v67 = *(_DWORD *)(v63 + 192);
      v68 = (char *)sub_453990(v67);
      v119 = v68;
      if ( !v68 )
        return -2;
      sub_464310((unsigned int)v68, *(_DWORD *)(v63 + 188), v67);
      *v122 = v119;
      *v123 = v67;
      goto LABEL_85;
    case 9:
      if ( !sub_405490((struct _RTL_CRITICAL_SECTION **)&hHandle) )
        return sub_402820(a1, v122, v123, "PDB thread not running?!?\n");
      v120 = (unsigned __int8 *)a4;
      v121 = (unsigned int)a4 + a5;
      if ( a4 >= (int *)((char *)a4 + a5) )
        return -2;
      v69 = (const char *)sub_4541E0(&v120, (unsigned int)a4 + a5);
      v70 = 0;
      v124 = v69;
      if ( !*(_DWORD *)(a2 + 728) )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      for ( n = *(_DWORD *)(a2 + 724); *(const char **)(*(_DWORD *)n + 216) != v124; n += 4 )
      {
        if ( (unsigned int)++v70 >= *(_DWORD *)(a2 + 728) )
          return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      }
      v119 = *(char **)(*(_DWORD *)(a2 + 724) + 4 * v70);
      if ( !v119 )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      v72 = sub_4541E0(&v120, v121);
      v73 = sub_4541E0(&v120, v121);
      v74 = sub_4541E0(&v120, v121);
      v104 = v73;
      v50 = (int)v119;
      v53 = sub_404E30((int)v119, v72, v104, v74);
      goto LABEL_82;
    case 10:
      if ( !sub_405490((struct _RTL_CRITICAL_SECTION **)&hHandle) )
        return sub_402820(a1, v122, v123, "PDB thread not running?!?\n");
      v113 = (unsigned __int8 *)a4;
      v114 = (unsigned int)a4 + a5;
      if ( a4 >= (int *)((char *)a4 + a5) )
        return -2;
      v75 = (const char *)sub_4541E0(&v113, (unsigned int)a4 + a5);
      v76 = 0;
      v124 = v75;
      if ( !*(_DWORD *)(a2 + 728) )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      for ( ii = *(_DWORD *)(a2 + 724); *(const char **)(*(_DWORD *)ii + 216) != v124; ii += 4 )
      {
        if ( (unsigned int)++v76 >= *(_DWORD *)(a2 + 728) )
          return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      }
      v121 = *(_DWORD *)(*(_DWORD *)(a2 + 724) + 4 * v76);
      if ( !v121 )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      v119 = (char *)(sub_4542B0(&v113, v114) - 1);
      v78 = sub_4542B0(&v113, v114);
      v80 = v79;
      v81 = sub_4541E0(&v113, v114);
      v105 = v80;
      v50 = v121;
      v53 = sub_404F90(v121, (int)v119, v78, v105, v81);
      goto LABEL_82;
    case 11:
      if ( !sub_405490((struct _RTL_CRITICAL_SECTION **)&hHandle) )
        return sub_402820(a1, v122, v123, "PDB thread not running?!?\n");
      v120 = (unsigned __int8 *)a4;
      v121 = (unsigned int)a4 + a5;
      if ( a4 >= (int *)((char *)a4 + a5) )
        return -2;
      v82 = (const char *)sub_4541E0(&v120, (unsigned int)a4 + a5);
      v83 = 0;
      v124 = v82;
      if ( !*(_DWORD *)(a2 + 728) )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      for ( jj = *(_DWORD *)(a2 + 724); *(const char **)(*(_DWORD *)jj + 216) != v124; jj += 4 )
      {
        if ( (unsigned int)++v83 >= *(_DWORD *)(a2 + 728) )
          return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      }
      v50 = *(_DWORD *)(*(_DWORD *)(a2 + 724) + 4 * v83);
      if ( !v50 )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      v85 = sub_4541E0(&v120, v121);
      v53 = sub_404CF0(v50, v85);
      goto LABEL_82;
    case 12:
      if ( !sub_405490((struct _RTL_CRITICAL_SECTION **)&hHandle) )
        return sub_402820(a1, v122, v123, "PDB thread not running?!?\n");
      v120 = (unsigned __int8 *)a4;
      v121 = (unsigned int)a4 + a5;
      if ( a4 >= (int *)((char *)a4 + a5) )
        return -2;
      v86 = (const char *)sub_4541E0(&v120, (unsigned int)a4 + a5);
      v87 = 0;
      v124 = v86;
      if ( !*(_DWORD *)(a2 + 728) )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      for ( kk = *(_DWORD *)(a2 + 724); *(const char **)(*(_DWORD *)kk + 216) != v124; kk += 4 )
      {
        if ( (unsigned int)++v87 >= *(_DWORD *)(a2 + 728) )
          return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      }
      v50 = *(_DWORD *)(*(_DWORD *)(a2 + 724) + 4 * v87);
      if ( !v50 )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      v89 = sub_4541E0(&v120, v121);
      v53 = sub_404D40(v50, v89);
      goto LABEL_82;
    case 13:
      if ( !sub_405490((struct _RTL_CRITICAL_SECTION **)&hHandle) )
        return sub_402820(a1, v122, v123, "PDB thread not running?!?\n");
      v120 = (unsigned __int8 *)a4;
      v121 = (unsigned int)a4 + a5;
      if ( a4 >= (int *)((char *)a4 + a5) )
        return -2;
      v90 = (const char *)sub_4541E0(&v120, (unsigned int)a4 + a5);
      v91 = 0;
      v124 = v90;
      if ( !*(_DWORD *)(a2 + 728) )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      for ( mm = *(_DWORD *)(a2 + 724); *(const char **)(*(_DWORD *)mm + 216) != v124; mm += 4 )
      {
        if ( (unsigned int)++v91 >= *(_DWORD *)(a2 + 728) )
          return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      }
      v50 = *(_DWORD *)(*(_DWORD *)(a2 + 724) + 4 * v91);
      if ( !v50 )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      v93 = sub_4541E0(&v120, v121);
      v53 = sub_404F40(v50, v93);
LABEL_82:
      v125 = v53;
      if ( !v53 )
        goto LABEL_85;
      v55 = *(_DWORD *)(v50 + 192);
      v56 = (char *)sub_453990(v55);
      v119 = v56;
      if ( v56 )
      {
        sub_464310((unsigned int)v56, *(_DWORD *)(v50 + 188), v55);
        *v122 = v119;
        *v123 = v55;
        goto LABEL_85;
      }
      return -2;
    case 14:
      if ( !sub_405490((struct _RTL_CRITICAL_SECTION **)&hHandle) )
        return sub_402820(a1, v122, v123, "PDB thread not running?!?\n");
      v111 = (unsigned __int8 *)a4;
      v112 = (unsigned int)a4 + a5;
      if ( a4 >= (int *)((char *)a4 + a5) )
        return -2;
      v124 = (const char *)sub_4541E0(&v111, (unsigned int)a4 + a5);
      v94 = 0;
      v95 = *(_DWORD *)(a2 + 728);
      if ( !v95 )
      {
        v97 = v124;
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v97);
      }
      v96 = *(int **)(a2 + 724);
      v97 = v124;
      while ( 1 )
      {
        v98 = *v96;
        if ( *(const char **)(*v96 + 216) == v124 )
          break;
        ++v94;
        ++v96;
        if ( v94 >= v95 )
          return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v124);
      }
      if ( !v98 )
        return sub_402820(a1, v122, v123, "Unknown PDB session #%d\n", v97);
      v99 = sub_402A20(&v111);
      sub_401340(&v107, v99);
      v100 = MultiByteStr;
      v140 = 8;
      if ( v108 )
        v100 = v107;
      v125 = sub_404D90(v98, v100);
      if ( v125 )
      {
        v101 = *(_DWORD *)(v98 + 192);
        v102 = (char *)sub_453990(v101);
        v119 = v102;
        if ( !v102 )
        {
          sub_401400((void **)&v107);
          return -2;
        }
        sub_464310((unsigned int)v102, *(_DWORD *)(v98 + 188), v101);
        *v122 = v119;
        *v123 = v101;
      }
      sub_401400((void **)&v107);
LABEL_85:
      result = -2;
      if ( v125 )
        return 1;
      return result;
    default:
      return 0;
  }
}
// 402074: variable 'v66' is possibly undefined
// 402227: variable 'v79' is possibly undefined
// 4B70F0: using guessed type char byte_4B70F0;
