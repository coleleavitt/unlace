__int64 __fastcall sub_415900(__int64 a1, int *a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // r14
  int v8; // ebp
  __int64 v9; // rax
  int v10; // ebp
  int *v11; // r13
  __int64 v12; // r12
  _DWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // r12
  __int64 v18; // rax
  int v19; // ebp
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r14
  unsigned __int8 *v25; // r13
  __int64 v26; // r12
  _DWORD *v27; // rax
  __int64 v28; // rax
  int v29; // ebp
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v37; // r12
  _DWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r12
  _DWORD *v41; // rax
  unsigned int *v42; // rax
  __int64 v43; // r12
  __int64 v44; // rax
  size_t v45; // rsi
  void *v46; // rdi
  __int64 v47; // r12
  _DWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r12
  _DWORD *v51; // rax
  __int64 v52; // r12
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // r12
  _DWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r12
  _DWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r12
  _DWORD *v62; // rax
  unsigned int *v63; // rax
  __int64 v64; // r12
  _DWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // r12
  __int64 v68; // rax
  size_t v69; // rsi
  void *v70; // rdi
  _DWORD *v71; // r13
  int i; // r14d
  __int64 v73; // rdx
  __int64 v74; // rbx
  int v75; // ebp
  void **v76; // r12
  __int64 (__fastcall *v77)(void *); // rax
  __int64 v78; // rbx
  int v79; // r13d
  int v80; // ebx
  __int64 v81; // r12
  __int64 v82; // rax
  __int64 v83; // rax
  int v84; // ebp
  __int64 v85; // r12
  __int64 v86; // r12
  _DWORD *v87; // rax
  unsigned int *v88; // rax
  __int64 v89; // r12
  _DWORD *v90; // rax
  int v91; // ebp
  __int64 v92; // rdx
  _DWORD *v93; // rdi
  __int64 v94; // [rsp+8h] [rbp-E0h]
  __int64 v95; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v96; // [rsp+18h] [rbp-D0h]
  __int64 v97; // [rsp+20h] [rbp-C8h]
  __int64 v98; // [rsp+28h] [rbp-C0h]
  __int64 v99; // [rsp+30h] [rbp-B8h]
  __int64 v100; // [rsp+38h] [rbp-B0h]
  __int64 v101; // [rsp+40h] [rbp-A8h]
  __int64 v102; // [rsp+48h] [rbp-A0h]

  v7 = 0;
  v8 = 0;
  v9 = *((_QWORD *)a2 + 3);
  v94 = a1;
  if ( v9 )
    v7 = *(_QWORD *)(v9 + 48);
  switch ( *a2 )
  {
    case 0:
      v37 = sub_496740();
      *(_DWORD *)v37 = 0;
      v38 = (_DWORD *)sub_40FB00(5);
      *(_QWORD *)(v37 + 8) = v38;
      *v38 = 1701869940;
      v8 = 6;
      *(_BYTE *)(*(_QWORD *)(v37 + 8) + 4LL) = 0;
      *(_DWORD *)(v37 + 16) = 4;
      v39 = *a2;
      *(_QWORD *)(v37 + 24) = 0;
      v95 = v37;
      v96 = sub_48DF10(off_654020[v39], 0xFFFFFFFF);
      v40 = sub_496740();
      *(_DWORD *)v40 = 0;
      v41 = (_DWORD *)sub_40FB00(5);
      *(_QWORD *)(v40 + 8) = v41;
      *v41 = 1701734764;
      *(_BYTE *)(*(_QWORD *)(v40 + 8) + 4LL) = 0;
      v42 = *((unsigned int **)a2 + 1);
      *(_DWORD *)(v40 + 16) = 4;
      *(_QWORD *)(v40 + 24) = 0;
      v97 = v40;
      v98 = sub_47BD00(*v42);
      v43 = sub_496740();
      *(_DWORD *)v43 = 0;
      v44 = sub_40FB00(4);
      *(_QWORD *)(v43 + 8) = v44;
      *(_WORD *)v44 = 28003;
      *(_BYTE *)(v44 + 2) = 100;
      *(_BYTE *)(*(_QWORD *)(v43 + 8) + 3LL) = 0;
      *(_DWORD *)(v43 + 16) = 3;
      *(_QWORD *)(v43 + 24) = 0;
      v45 = (unsigned int)a2[16];
      v46 = *((void **)a2 + 7);
      v99 = v43;
      v100 = sub_48DF10(v46, v45);
      break;
    case 1:
      v47 = sub_496740();
      *(_DWORD *)v47 = 0;
      v48 = (_DWORD *)sub_40FB00(5);
      *(_QWORD *)(v47 + 8) = v48;
      *v48 = 1701869940;
      v8 = 6;
      *(_BYTE *)(*(_QWORD *)(v47 + 8) + 4LL) = 0;
      *(_DWORD *)(v47 + 16) = 4;
      v49 = *a2;
      *(_QWORD *)(v47 + 24) = 0;
      v95 = v47;
      v96 = sub_48DF10(off_654020[v49], 0xFFFFFFFF);
      v50 = sub_496740();
      *(_DWORD *)v50 = 0;
      v51 = (_DWORD *)sub_40FB00(5);
      *(_QWORD *)(v50 + 8) = v51;
      *v51 = 1701734764;
      *(_BYTE *)(*(_QWORD *)(v50 + 8) + 4LL) = 0;
      *(_DWORD *)(v50 + 16) = 4;
      *(_QWORD *)(v50 + 24) = 0;
      v97 = v50;
      v98 = sub_47BD00(1);
      v52 = sub_496740();
      *(_DWORD *)v52 = 0;
      v53 = sub_40FB00(4);
      *(_QWORD *)(v52 + 8) = v53;
      *(_WORD *)v53 = 28003;
      *(_BYTE *)(v53 + 2) = 100;
      *(_BYTE *)(*(_QWORD *)(v52 + 8) + 3LL) = 0;
      *(_DWORD *)(v52 + 16) = 3;
      *(_QWORD *)(v52 + 24) = 0;
      v54 = *((_QWORD *)a2 + 7);
      v99 = v52;
      v100 = sub_47B2A0(v54);
      break;
    case 2:
      v10 = 2;
      v11 = (int *)sub_4495F0(v94, 72);
      *(_QWORD *)v11 = *(_QWORD *)a2;
      *((_QWORD *)v11 + 1) = *((_QWORD *)a2 + 1);
      *((_QWORD *)v11 + 2) = *((_QWORD *)a2 + 2);
      *((_QWORD *)v11 + 3) = *((_QWORD *)a2 + 3);
      *((_QWORD *)v11 + 4) = *((_QWORD *)a2 + 4);
      *((_QWORD *)v11 + 5) = *((_QWORD *)a2 + 5);
      *((_QWORD *)v11 + 6) = *((_QWORD *)a2 + 6);
      *((_QWORD *)v11 + 7) = *((_QWORD *)a2 + 7);
      *((_QWORD *)v11 + 8) = *((_QWORD *)a2 + 8);
      sub_449C70(v11);
      v12 = sub_496740();
      *(_DWORD *)v12 = 0;
      v13 = (_DWORD *)sub_40FB00(5);
      *(_QWORD *)(v12 + 8) = v13;
      *v13 = 1701869940;
      *(_BYTE *)(*(_QWORD *)(v12 + 8) + 4LL) = 0;
      *(_DWORD *)(v12 + 16) = 4;
      v14 = *v11;
      *(_QWORD *)(v12 + 24) = 0;
      v95 = v12;
      v15 = sub_48DF10(off_654020[v14], 0xFFFFFFFF);
      v16 = *((_QWORD *)v11 + 1) == 0;
      v96 = v15;
      if ( !v16 )
      {
        v86 = sub_496740();
        *(_DWORD *)v86 = 0;
        v87 = (_DWORD *)sub_40FB00(5);
        *(_QWORD *)(v86 + 8) = v87;
        *v87 = 1701734764;
        LOBYTE(v10) = 4;
        *(_BYTE *)(*(_QWORD *)(v86 + 8) + 4LL) = 0;
        v88 = *((unsigned int **)v11 + 1);
        *(_DWORD *)(v86 + 16) = 4;
        *(_QWORD *)(v86 + 24) = 0;
        v97 = v86;
        v98 = sub_47BD00(*v88);
      }
      if ( *v11 == 4 )
      {
        v89 = sub_496740();
        *(_DWORD *)v89 = 0;
        v90 = (_DWORD *)sub_40FB00(5);
        *(_QWORD *)(v89 + 8) = v90;
        *v90 = 1701603686;
        *(_BYTE *)(*(_QWORD *)(v89 + 8) + 4LL) = 0;
        *(_DWORD *)(v89 + 16) = 4;
        *(&v95 + v10) = v89;
        *(_QWORD *)(v89 + 24) = 0;
        v91 = v10 + 1;
        v92 = v91;
        v10 = v91 + 1;
        *(&v95 + v92) = *((_QWORD *)v11 + 5);
        v93 = *((_DWORD **)v11 + 5);
        LODWORD(v90) = *v93 - 1;
        v16 = *v93 == 1;
        *v93 = (_DWORD)v90;
        if ( (int)v90 < 0 || v16 )
          sub_47B120(v93);
      }
      v17 = sub_496740();
      *(_DWORD *)v17 = 0;
      v18 = sub_40FB00(4);
      *(_QWORD *)(v17 + 8) = v18;
      *(_WORD *)v18 = 28003;
      *(_BYTE *)(v18 + 2) = 100;
      *(_BYTE *)(*(_QWORD *)(v17 + 8) + 3LL) = 0;
      *(_DWORD *)(v17 + 16) = 3;
      *(_QWORD *)(v17 + 24) = 0;
      *(&v95 + v10) = v17;
      v19 = v10 + 1;
      v20 = v19;
      v8 = v19 + 1;
      v21 = v94;
      *(&v95 + v20) = sub_48DF10(*((void **)v11 + 7), (unsigned int)v11[16]);
      sub_449510(v21, v11);
      break;
    case 3:
      v55 = sub_496740();
      *(_DWORD *)v55 = 0;
      v56 = (_DWORD *)sub_40FB00(5);
      *(_QWORD *)(v55 + 8) = v56;
      *v56 = 1701869940;
      v8 = 2;
      *(_BYTE *)(*(_QWORD *)(v55 + 8) + 4LL) = 0;
      *(_DWORD *)(v55 + 16) = 4;
      v57 = *a2;
      *(_QWORD *)(v55 + 24) = 0;
      v95 = v55;
      v96 = sub_48DF10(off_654020[v57], 0xFFFFFFFF);
      break;
    case 4:
      v58 = sub_496740();
      *(_DWORD *)v58 = 0;
      v59 = (_DWORD *)sub_40FB00(5);
      *(_QWORD *)(v58 + 8) = v59;
      *v59 = 1701869940;
      v8 = 8;
      *(_BYTE *)(*(_QWORD *)(v58 + 8) + 4LL) = 0;
      *(_DWORD *)(v58 + 16) = 4;
      v60 = *a2;
      *(_QWORD *)(v58 + 24) = 0;
      v95 = v58;
      v96 = sub_48DF10(off_654020[v60], 0xFFFFFFFF);
      v61 = sub_496740();
      *(_DWORD *)v61 = 0;
      v62 = (_DWORD *)sub_40FB00(5);
      *(_QWORD *)(v61 + 8) = v62;
      *v62 = 1701734764;
      *(_BYTE *)(*(_QWORD *)(v61 + 8) + 4LL) = 0;
      v63 = *((unsigned int **)a2 + 1);
      *(_DWORD *)(v61 + 16) = 4;
      *(_QWORD *)(v61 + 24) = 0;
      v97 = v61;
      v98 = sub_47BD00(*v63);
      v64 = sub_496740();
      *(_DWORD *)v64 = 0;
      v65 = (_DWORD *)sub_40FB00(5);
      *(_QWORD *)(v64 + 8) = v65;
      *v65 = 1701603686;
      *(_BYTE *)(*(_QWORD *)(v64 + 8) + 4LL) = 0;
      *(_DWORD *)(v64 + 16) = 4;
      *(_QWORD *)(v64 + 24) = 0;
      v66 = *((_QWORD *)a2 + 5);
      v99 = v64;
      v100 = v66;
      v67 = sub_496740();
      *(_DWORD *)v67 = 0;
      v68 = sub_40FB00(4);
      *(_QWORD *)(v67 + 8) = v68;
      *(_WORD *)v68 = 28003;
      *(_BYTE *)(v68 + 2) = 100;
      *(_BYTE *)(*(_QWORD *)(v67 + 8) + 3LL) = 0;
      *(_DWORD *)(v67 + 16) = 3;
      *(_QWORD *)(v67 + 24) = 0;
      v69 = (unsigned int)a2[16];
      v70 = *((void **)a2 + 7);
      v101 = v67;
      v102 = sub_48DF10(v70, v69);
      break;
    case 5:
      sub_47D740((unsigned int)"TCL_LOCATION_PROC found in standard frame", (_DWORD)a2, a3, a4, a5, a6);
      break;
    default:
      break;
  }
  if ( v7 )
  {
    v22 = *(__int64 **)(v7 + 16);
    v23 = *v22;
    if ( *v22 )
    {
      v24 = v23 + 32;
      if ( *(_DWORD *)(*(_QWORD *)(v23 + 8) + 60LL) == 1 || *(_DWORD *)(*(_QWORD *)(v23 + 8) + 60LL) == -1 )
        v24 = *(_QWORD *)(v23 + 32);
      v25 = *(unsigned __int8 **)(v22[1] + 8);
      v26 = sub_496740();
      *(_DWORD *)v26 = 0;
      v27 = (_DWORD *)sub_40FB00(5);
      *(_QWORD *)(v26 + 8) = v27;
      *v27 = 1668248176;
      *(_BYTE *)(*(_QWORD *)(v26 + 8) + 4LL) = 0;
      v28 = v8;
      v29 = v8 + 1;
      v30 = v29;
      *(_DWORD *)(v26 + 16) = 4;
      *(_QWORD *)(v26 + 24) = 0;
      *(&v95 + v28) = v26;
      v8 = v29 + 1;
      *(&v95 + v30) = sub_48DF10(v25, 0xFFFFFFFF);
      v31 = *v25 - 58;
      if ( *v25 == 58 && (v31 = v25[1] - 58, v25[1] == 58) )
      {
        v32 = v8;
        if ( !v25[2] )
          goto LABEL_15;
      }
      else
      {
        v32 = v8;
        if ( !v31 )
        {
LABEL_15:
          sub_48EDF0(*(&v94 + v32), v24, 0xFFFFFFFFLL);
          goto LABEL_16;
        }
      }
      sub_48EDF0(*(&v94 + v32), "::", 0xFFFFFFFFLL);
      goto LABEL_15;
    }
    v71 = (_DWORD *)v22[7];
    if ( v71 )
    {
      for ( i = 0; *v71 > i; ++i )
      {
        v74 = v8;
        v75 = v8 + 1;
        v76 = (void **)&v71[6 * i];
        *(&v95 + v74) = sub_48DF10(v76[1], 0xFFFFFFFF);
        v77 = (__int64 (__fastcall *)(void *))v76[2];
        if ( v77 )
        {
          v78 = v75;
          v8 = v75 + 1;
          *(&v95 + v78) = v77(v76[3]);
        }
        else
        {
          v73 = v75;
          v8 = v75 + 1;
          *(&v95 + v73) = (__int64)v76[3];
        }
      }
    }
  }
LABEL_16:
  v33 = *((_QWORD *)a2 + 3);
  if ( v33 )
  {
    v34 = *(_QWORD *)(v94 + 168);
    if ( v34 )
    {
      v35 = *(_QWORD *)(v94 + 168);
      while ( v35 != v33 )
      {
        v35 = *(_QWORD *)(v35 + 32);
        if ( !v35 )
          return sub_46EEB0((unsigned int)v8, &v95);
      }
      v79 = *(_DWORD *)(v35 + 40);
      v80 = *(_DWORD *)(v34 + 40);
      v81 = sub_496740();
      *(_DWORD *)v81 = 0;
      v82 = sub_40FB00(6);
      *(_QWORD *)(v81 + 8) = v82;
      *(_DWORD *)v82 = 1702258028;
      *(_BYTE *)(v82 + 4) = 108;
      *(_BYTE *)(*(_QWORD *)(v81 + 8) + 5LL) = 0;
      v83 = v8;
      v84 = v8 + 1;
      *(_DWORD *)(v81 + 16) = 5;
      *(_QWORD *)(v81 + 24) = 0;
      *(&v95 + v83) = v81;
      v85 = v84;
      v8 = v84 + 1;
      *(&v95 + v85) = sub_47BD00((unsigned int)(v80 - v79));
    }
  }
  return sub_46EEB0((unsigned int)v8, &v95);
}

