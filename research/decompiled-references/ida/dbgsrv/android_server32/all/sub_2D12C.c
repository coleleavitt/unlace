/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2D12C
// Address: 0x0002D12C

//----- (0002D12C) --------------------------------------------------------
void __fastcall sub_2D12C(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  void *v10; // r3
  int v11; // r0
  __int64 v12; // r0
  int *v13; // r3
  int v14; // r5
  __int64 v15; // r0
  int *v16; // r5
  __int64 v17; // kr08_8
  __int64 v18; // r0
  __int64 v19; // kr10_8
  unsigned int v20; // r2
  unsigned int v21; // r1
  void **v22; // r0
  char *v23; // r0
  unsigned int *v24; // r4
  unsigned int v25; // r7
  int v26; // r1
  int v27; // r2
  unsigned int v28; // r7
  unsigned __int64 v29; // r0
  unsigned int v30; // r4
  __int64 v31; // r2
  int *v32; // r6
  int v33; // r4
  int v34; // r4
  signed int v35; // r5
  int v36; // r4
  int *v37; // r5
  signed int v38; // r4
  int v39; // r7
  signed int v40; // r4
  int v41; // r7
  int *v42; // r4
  int v43; // r7
  int v44; // r7
  int v45; // r7
  int v46; // r7
  int v47; // r0
  unsigned int v48; // r6
  int *v49; // r7
  unsigned int *v50; // r3
  int v51; // r1
  unsigned int v52; // r2
  char *v53; // r0
  int v54; // r3
  char *v55; // r0
  int v56; // r1
  int v57; // r1
  unsigned int v58; // r2
  _DWORD *v59; // r3
  int v60; // r5
  __int64 v61; // r0
  unsigned int v62; // r7
  void (__fastcall *v63)(int *, int, int, int, _DWORD, _DWORD); // r5
  __int64 v64; // r0
  unsigned int v65; // r5
  unsigned int v66; // r1
  char **v67; // r0
  __int64 v68; // r0
  __int64 v69; // r0
  __int64 v70; // r0
  void (__fastcall *v71)(int *, int, signed int, int, _DWORD, _DWORD); // r4
  __int64 v72; // r0
  void (__fastcall *v73)(int *, int, signed int, int, _DWORD, _DWORD); // r4
  __int64 v74; // r0
  void (__fastcall *v75)(int *, int, signed int, int, _DWORD, _DWORD); // r4
  __int64 v76; // r0
  void (__fastcall *v77)(int *, int, int, int, _DWORD, _DWORD); // r5
  __int64 v78; // r0
  void (__fastcall *v79)(int *, int, int, int, _DWORD, _DWORD); // r4
  __int64 v80; // r0
  char *v81; // r0
  unsigned int *v82; // r6
  __int64 v83; // r0
  int v84; // r2
  int v85; // [sp+4h] [bp-CCh]
  int v86; // [sp+8h] [bp-C8h]
  int v87; // [sp+Ch] [bp-C4h]
  int v88; // [sp+10h] [bp-C0h]
  int v89; // [sp+14h] [bp-BCh]
  int *v90; // [sp+1Ch] [bp-B4h]
  void **v91; // [sp+20h] [bp-B0h]
  void **v92; // [sp+24h] [bp-ACh]
  signed int v93; // [sp+28h] [bp-A8h]
  signed int v94; // [sp+28h] [bp-A8h]
  signed int v95; // [sp+28h] [bp-A8h]
  int *v96; // [sp+2Ch] [bp-A4h]
  unsigned int *v97; // [sp+30h] [bp-A0h]
  _DWORD *v98; // [sp+38h] [bp-98h]
  signed int *v99; // [sp+3Ch] [bp-94h]
  int v100; // [sp+4Ch] [bp-84h]
  int v101; // [sp+50h] [bp-80h]
  unsigned __int64 v102; // [sp+54h] [bp-7Ch]
  _BYTE *v103; // [sp+64h] [bp-6Ch]
  signed int *v104; // [sp+68h] [bp-68h]
  unsigned int v105; // [sp+6Ch] [bp-64h]
  signed int *v106; // [sp+74h] [bp-5Ch]
  unsigned int v107; // [sp+78h] [bp-58h]
  _DWORD *v108; // [sp+7Ch] [bp-54h]
  int v109; // [sp+80h] [bp-50h]
  int v110; // [sp+80h] [bp-50h]
  _DWORD *v111; // [sp+84h] [bp-4Ch]
  unsigned int v112; // [sp+84h] [bp-4Ch]
  int *v113; // [sp+88h] [bp-48h]
  int v114; // [sp+8Ch] [bp-44h]
  unsigned int v115; // [sp+8Ch] [bp-44h]
  unsigned __int8 *v116; // [sp+8Ch] [bp-44h]
  unsigned int v117; // [sp+8Ch] [bp-44h]
  void (__fastcall *v118)(int *, int, signed int, int, _DWORD, _DWORD); // [sp+8Ch] [bp-44h]
  void (__fastcall *v119)(int *, int, signed int, int, _DWORD, _DWORD); // [sp+8Ch] [bp-44h]
  void (__fastcall *v120)(int *, int, signed int, int, _DWORD, _DWORD); // [sp+8Ch] [bp-44h]
  int *v121; // [sp+90h] [bp-40h]
  _DWORD v122[14]; // [sp+94h] [bp-3Ch] BYREF

  v10 = &_stack_chk_guard;
  v11 = a1[106];
  if ( !(a1[105] | v11) )
    sub_2D97E(v11, 420, 0, (int)&_stack_chk_guard, v85, v86, v87, v88, v89);
  v101 = (int)v10;
  v111 = a1 + 105;
  v12 = qlseek(a1[91], 0, 1);
  v13 = a1;
  v114 = a1[93];
  v14 = a1[92];
  v102 = v12 - __PAIR64__(v114, v14);
  v108 = v13 + 92;
  v121 = v13 + 91;
  v113 = v13;
  v15 = qlseek(v13[91], *(_QWORD *)v111 + __PAIR64__(v114, v14), 0);
  if ( ((unsigned int)v15 & HIDWORD(v15)) == 0xFFFFFFFF )
    goto LABEL_124;
  v115 = *((unsigned __int16 *)v113 + 221);
  v107 = *((unsigned __int16 *)v113 + 222);
  v16 = (int *)*v121;
  v109 = 0;
  v17 = qlseek(*v121, 0, 1);
  LODWORD(v18) = qlsize(v16);
  v19 = v18 - v17;
  if ( (v17 | (v18 - v17)) <= -1 )
LABEL_128:
    sub_371F8((int)"%s is incorrect, maximum possible value is %u%s", (int)"PHT entries", v109, (int)&byte_A0742);
  v20 = v107;
  if ( v107 && v115 && (v20 = v107, 0xFFFFFFFF / v107 < v115) || v19 < v20 * v115 )
  {
    v109 = v19 / v115;
    goto LABEL_128;
  }
  v21 = v113[5];
  v97 = (unsigned int *)(v113 + 5);
  v22 = (void **)(v113 + 4);
  v92 = (void **)(v113 + 4);
  if ( v21 >= v20 )
  {
    if ( v21 != v20 )
    {
      v25 = v20;
      memset(v122, 0, sizeof(v122));
      sub_35EF0(v92, v25, v122);
      v20 = v107;
    }
  }
  else
  {
    if ( v113[6] >= v107 )
    {
      v23 = (char *)*v22;
      v24 = (unsigned int *)(v113 + 5);
    }
    else
    {
      v23 = (char *)qvector_reserve((int)v22, *v22, v107, 0x38u);
      v113[4] = (int)v23;
      v24 = (unsigned int *)(v113 + 5);
      v21 = *v97;
    }
    memset(&v23[56 * v21], 0, 56 * (v107 - v21));
    v20 = v107;
    *v24 = v107;
  }
  *((_BYTE *)v113 + 36) = 1;
  if ( v20 )
  {
    v91 = (void **)(v113 + 115);
    v106 = v113 + 86;
    v104 = v113 + 84;
    v99 = v113 + 85;
    v103 = (char *)v113 + 481;
    v116 = (unsigned __int8 *)(v113 + 120);
    v26 = 0;
    v27 = -1;
    v90 = nullptr;
    v96 = v113 + 116;
    while ( 1 )
    {
      v110 = v26;
      v28 = v27;
      v29 = *((unsigned __int16 *)v113 + 221) * (unsigned __int64)(unsigned int)(v27 + 1);
      v30 = (v29 + *(_QWORD *)v111) >> 32;
      if ( __CFADD__(__CFADD__((_DWORD)v29, *v111), v111[1]) | __CFADD__(HIDWORD(v29), v30) )
        goto LABEL_124;
      v100 = v27 + 1;
      HIDWORD(v31) = v108[1];
      LODWORD(v31) = v29 + *v111;
      if ( qlseek(*v121, __PAIR64__(v30, *v108) + v31, 0) == -1 )
        goto LABEL_124;
      if ( !*((_BYTE *)v113 + 36) )
      {
        if ( !under_debugger )
          interr(20100);
        __debugbreak();
      }
      v105 = v28;
      v32 = (int *)(v113[4] + v110);
      v33 = lreadbytes(*v121, v32, 4, *v116);
      if ( v33 < 0 )
      {
        v63 = (void (__fastcall *)(int *, int, int, int, _DWORD, _DWORD))v113[96];
        v64 = qlseek(*v121, 0, 1);
        v63(v113, 19, 4, v33, v64, HIDWORD(v64));
        v65 = v28;
        if ( !v110 )
          v65 = 0;
        v66 = *v97;
        if ( *v97 < v65 )
        {
          v67 = (char **)(v113 + 4);
          if ( v113[6] < v65 )
            goto LABEL_121;
          goto LABEL_122;
        }
        if ( *v97 == v65 )
          goto LABEL_124;
        goto LABEL_116;
      }
      if ( *v103 )
      {
        v34 = lreadbytes(*v121, v32 + 1, 4, *v116);
        if ( v34 < 0 )
          break;
      }
      v35 = *v99;
      v98 = v32 + 2;
      v36 = lreadbytes(*v121, v32 + 2, *v99, *v116);
      if ( v36 < 0 )
      {
        v118 = (void (__fastcall *)(int *, int, signed int, int, _DWORD, _DWORD))v113[96];
        v68 = qlseek(*v121, 0, 1);
        v118(v113, 19, v35, v36, v68, HIDWORD(v68));
        v65 = v28;
        if ( !v110 )
          v65 = 0;
        v66 = *v97;
        if ( *v97 < v65 )
        {
          v67 = (char **)(v113 + 4);
          if ( v113[6] < v65 )
            goto LABEL_121;
          goto LABEL_122;
        }
        if ( *v97 == v65 )
          goto LABEL_124;
        goto LABEL_116;
      }
      v37 = v32 + 4;
      v38 = *v104;
      v39 = lreadbytes(*v121, v32 + 4, *v104, *v116);
      if ( v39 < 0 )
      {
        v119 = (void (__fastcall *)(int *, int, signed int, int, _DWORD, _DWORD))v113[96];
        v69 = qlseek(*v121, 0, 1);
        v119(v113, 19, v38, v39, v69, HIDWORD(v69));
        v65 = v105;
        if ( !v110 )
          v65 = 0;
        v66 = *v97;
        if ( *v97 < v65 )
        {
          v67 = (char **)(v113 + 4);
          if ( v113[6] < v65 )
            goto LABEL_121;
          goto LABEL_122;
        }
        if ( *v97 == v65 )
          goto LABEL_124;
        goto LABEL_116;
      }
      v40 = *v104;
      v41 = lreadbytes(*v121, v32 + 6, *v104, *v116);
      if ( v41 < 0 )
      {
        v120 = (void (__fastcall *)(int *, int, signed int, int, _DWORD, _DWORD))v113[96];
        v70 = qlseek(*v121, 0, 1);
        v120(v113, 19, v40, v41, v70, HIDWORD(v70));
        v65 = v105;
        if ( !v110 )
          v65 = 0;
        v66 = *v97;
        if ( *v97 < v65 )
        {
          v67 = (char **)(v113 + 4);
          if ( v113[6] < v65 )
            goto LABEL_121;
          goto LABEL_122;
        }
        if ( *v97 == v65 )
          goto LABEL_124;
        goto LABEL_116;
      }
      v42 = v32 + 8;
      v93 = *v106;
      v43 = lreadbytes(*v121, v32 + 8, *v106, *v116);
      if ( v43 < 0 )
      {
        v71 = (void (__fastcall *)(int *, int, signed int, int, _DWORD, _DWORD))v113[96];
        v72 = qlseek(*v121, 0, 1);
        v71(v113, 19, v93, v43, v72, HIDWORD(v72));
        v65 = v105;
        if ( !v110 )
          v65 = 0;
        v66 = *v97;
        if ( *v97 < v65 )
        {
          v67 = (char **)(v113 + 4);
          if ( v113[6] < v65 )
            goto LABEL_121;
          goto LABEL_122;
        }
        if ( *v97 == v65 )
          goto LABEL_124;
        goto LABEL_116;
      }
      v94 = *v106;
      v44 = lreadbytes(*v121, v32 + 10, *v106, *v116);
      if ( v44 < 0 )
      {
        v73 = (void (__fastcall *)(int *, int, signed int, int, _DWORD, _DWORD))v113[96];
        v74 = qlseek(*v121, 0, 1);
        v73(v113, 19, v94, v44, v74, HIDWORD(v74));
        v65 = v105;
        if ( !v110 )
          v65 = 0;
        v66 = *v97;
        if ( *v97 < v65 )
        {
          v67 = (char **)(v113 + 4);
          if ( v113[6] < v65 )
            goto LABEL_121;
          goto LABEL_122;
        }
        if ( *v97 == v65 )
          goto LABEL_124;
        goto LABEL_116;
      }
      if ( !*v103 )
      {
        v45 = lreadbytes(*v121, v32 + 1, 4, *v116);
        if ( v45 < 0 )
        {
          v79 = (void (__fastcall *)(int *, int, int, int, _DWORD, _DWORD))v113[96];
          v80 = qlseek(*v121, 0, 1);
          v79(v113, 19, 4, v45, v80, HIDWORD(v80));
          v65 = v105;
          if ( !v110 )
            v65 = 0;
          v66 = *v97;
          if ( *v97 >= v65 )
            JUMPOUT(0x2D9A4);
          v67 = (char **)(v113 + 4);
          if ( v113[6] >= v65 )
            goto LABEL_122;
LABEL_121:
          v81 = (char *)qvector_reserve((int)v67, *v92, v65, 0x38u);
          *v92 = v81;
          v82 = (unsigned int *)(v113 + 5);
          v66 = *v97;
          goto LABEL_123;
        }
      }
      v95 = *v106;
      v46 = lreadbytes(*v121, v32 + 12, *v106, *v116);
      if ( v46 < 0 )
      {
        v75 = (void (__fastcall *)(int *, int, signed int, int, _DWORD, _DWORD))v113[96];
        v76 = qlseek(*v121, 0, 1);
        v75(v113, 19, v95, v46, v76, HIDWORD(v76));
        v65 = v105;
        if ( !v110 )
          v65 = 0;
        v66 = *v97;
        if ( *v97 < v65 )
        {
          v67 = (char **)(v113 + 4);
          if ( v113[6] < v65 )
            goto LABEL_121;
          goto LABEL_122;
        }
        if ( *v97 == v65 )
          goto LABEL_124;
LABEL_116:
        memset(v122, 0, sizeof(v122));
        sub_35EF0(v92, v65, v122);
        goto LABEL_124;
      }
      v47 = *v32;
      if ( *v32 == 2 )
      {
        v90 = v32;
        v48 = v105;
        v49 = v113;
      }
      else
      {
        v48 = v105;
        v49 = v113;
        v50 = (unsigned int *)(v113 + 116);
        if ( v47 == 1 )
        {
          v51 = *v96;
          v52 = *v96 + 1;
          if ( v113[117] >= v52 )
          {
            v53 = (char *)*v91;
          }
          else
          {
            v53 = (char *)qvector_reserve((int)v91, *v91, v52, 0x18u);
            *v91 = v53;
            v50 = (unsigned int *)(v113 + 116);
            v51 = *v96;
            v52 = *v96 + 1;
            v48 = v105;
            v49 = v113;
          }
          *v50 = v52;
          v54 = v98[1];
          *(_DWORD *)&v53[24 * v51] = *v98;
          v55 = &v53[24 * v51];
          *((_DWORD *)v55 + 1) = v54;
          v56 = *v42;
          *((_DWORD *)v55 + 3) = v42[1];
          *((_DWORD *)v55 + 2) = v56;
          v57 = *v37;
          *((_DWORD *)v55 + 5) = v37[1];
          *((_DWORD *)v55 + 4) = v57;
          if ( *(_QWORD *)v37 < (unsigned __int64)(unsigned int)v49[7] )
            v49[7] = *v37 & 0xFFFFF000;
        }
      }
      v26 = v110 + 56;
      v27 = v100;
      if ( v48 + 2 >= v107 )
      {
        if ( v90 )
        {
          v117 = v90[4];
          v112 = v49[116];
          if ( v112 )
          {
            v58 = v90[5];
            v59 = (_DWORD *)v49[115];
            v60 = 0;
            while ( 1 )
            {
              LODWORD(v61) = v59[4];
              v62 = v59[5];
              if ( __PAIR64__(v58, v117) >= __PAIR64__(v62, v61) )
              {
                HIDWORD(v61) = v59[3];
                if ( __PAIR64__(v58, v117) < __PAIR64__(v62, v59[2]) + v61 )
                  break;
              }
              v59 += 6;
              if ( ++v60 >= v112 )
                JUMPOUT(0x2D9C0);
            }
            JUMPOUT(0x2D9BC);
          }
          JUMPOUT(0x2D9C4);
        }
        JUMPOUT(0x2D9CE);
      }
    }
    v77 = (void (__fastcall *)(int *, int, int, int, _DWORD, _DWORD))v113[96];
    v78 = qlseek(*v121, 0, 1);
    v77(v113, 19, 4, v34, v78, HIDWORD(v78));
    v65 = v28;
    if ( !v110 )
      v65 = 0;
    v66 = *v97;
    if ( *v97 >= v65 )
      JUMPOUT(0x2D98C);
    v67 = (char **)(v113 + 4);
    if ( v113[6] < v65 )
      goto LABEL_121;
LABEL_122:
    v81 = *v67;
    v82 = (unsigned int *)(v113 + 5);
LABEL_123:
    memset(&v81[56 * v66], 0, 56 * (v65 - v66));
    *v82 = v65;
  }
LABEL_124:
  v83 = qlseek(*v121, *(_QWORD *)v108 + v102, 0);
  sub_2D97E(v83, SHIDWORD(v83), v84, v101, a5, a6, a7, a8, a9);
}
// 2D502: control flows out of bounds to 2D9CE
// 2D52A: control flows out of bounds to 2D9C4
// 2D55C: control flows out of bounds to 2D9BC
// 2D56A: control flows out of bounds to 2D9C0
// 2D822: control flows out of bounds to 2D98C
// 2D928: control flows out of bounds to 2D9A4
// 2D154: variable 'v85' is possibly undefined
// 2D154: variable 'v86' is possibly undefined
// 2D154: variable 'v87' is possibly undefined
// 2D154: variable 'v88' is possibly undefined
// 2D154: variable 'v89' is possibly undefined
// 2D158: variable 'v10' is possibly undefined
// 2D1F2: variable 'v18' is possibly undefined
// 2D97D: variable 'v84' is possibly undefined
// A0742: using guessed type char byte_A0742;
// E0550: using guessed type char under_debugger;
