__int64 __fastcall sub_408660(__int64 a1, _QWORD *a2, int a3, int a4, int a5, int a6)
{
  int *v7; // rdi
  int v8; // eax
  bool v9; // zf
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rbx
  __int64 i; // rax
  __int64 j; // rbp
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdi
  int *v20; // rdi
  int v21; // eax
  int *v22; // rdi
  int v23; // eax
  int *v24; // rdi
  int v25; // eax
  int *v26; // rdi
  int v27; // eax
  int *v28; // rdi
  int v29; // eax
  int *v30; // rdi
  int v31; // eax
  __int64 v32; // rdi
  int *v33; // rdi
  int v34; // eax
  int *v35; // rdi
  int v36; // eax
  _QWORD *v37; // rbp
  _QWORD *v38; // rbx
  _QWORD *v39; // rdi
  __int64 k; // rax
  _QWORD *v41; // rax
  __int64 v42; // r12
  __int64 v43; // rbx
  int *v44; // rdi
  int v45; // eax
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 m; // r12
  __int64 v49; // rbp
  int n; // ebx
  __int64 v51; // rax
  __int64 v52; // rdi
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rdi
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  int v61; // r9d
  __int64 v62; // rdi
  int *v64; // rdi
  int v65; // eax
  _BYTE v66[32]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v67[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(int *)(a1 + 152) > 0 )
    sub_47D740((unsigned int)"DeleteInterpProc called with active evals", (_DWORD)a2, a3, a4, a5, a6);
  if ( (*(_BYTE *)(a1 + 424) & 1) == 0 )
    sub_47D740((unsigned int)"DeleteInterpProc called on interpreter not marked deleted", (_DWORD)a2, a3, a4, a5, a6);
  v7 = *(int **)(a1 + 944);
  if ( v7 )
  {
    v8 = *v7 - 1;
    v9 = *v7 == 1;
    *v7 = v8;
    if ( v8 < 0 || v9 )
      sub_47B120(v7);
    *(_QWORD *)(a1 + 944) = 0;
  }
  sub_45B6B0(a1);
  sub_45B120(a1);
  sub_487820(*(_QWORD *)(a1 + 32));
  sub_4737D0(*(_QWORD *)(a1 + 40));
  v14 = *(_QWORD *)(a1 + 48);
  if ( v14 )
  {
    a2 = v67;
    for ( i = sub_457E20(*(_QWORD *)(a1 + 48), v67); i; i = sub_457DE0(v67) )
    {
      a2 = *(_QWORD **)(i + 24);
      sub_4075E0(a1, a2);
    }
    sub_457CE0(v14);
    Tcl_Free(v14);
  }
  for ( j = *(_QWORD *)(a1 + 448); j; j = *(_QWORD *)(a1 + 448) )
  {
    *(_QWORD *)(a1 + 448) = 0;
    while ( 1 )
    {
      a2 = v67;
      v17 = sub_457E20(j, v67);
      if ( !v17 )
        break;
      v18 = *(_QWORD *)(v17 + 24);
      sub_457BC0(v17);
      if ( *(_QWORD *)v18 )
        (*(void (__fastcall **)(_QWORD, __int64))v18)(*(_QWORD *)(v18 + 8), a1);
      Tcl_Free(v18);
    }
    sub_457CE0(j);
    Tcl_Free(j);
  }
  if ( *(_QWORD *)(a1 + 160) != *(_QWORD *)(a1 + 192) )
    sub_47D740(
      (unsigned int)"DeleteInterpProc: popping rootCallFrame with other frames on top",
      (_DWORD)a2,
      v10,
      v11,
      v12,
      v13);
  sub_473B30(a1);
  Tcl_Free(*(_QWORD *)(a1 + 192));
  v19 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 192) = 0;
  sub_4739B0(v19);
  sub_48B590(a1);
  v20 = *(int **)(a1 + 680);
  *(_QWORD *)a1 = 0;
  v21 = *v20 - 1;
  v9 = *v20 == 1;
  *v20 = v21;
  if ( v21 < 0 || v9 )
    sub_47B120(v20);
  v22 = *(int **)(a1 + 752);
  *(_QWORD *)(a1 + 680) = 0;
  v23 = *v22 - 1;
  v9 = *v22 == 1;
  *v22 = v23;
  if ( v23 < 0 || v9 )
    sub_47B120(v22);
  v24 = *(int **)(a1 + 744);
  if ( v24 )
  {
    v25 = *v24 - 1;
    v9 = *v24 == 1;
    *v24 = v25;
    if ( v25 < 0 || v9 )
      sub_47B120(v24);
    *(_QWORD *)(a1 + 744) = 0;
  }
  v26 = *(int **)(a1 + 736);
  v27 = *v26 - 1;
  v9 = *v26 == 1;
  *v26 = v27;
  if ( v27 < 0 || v9 )
    sub_47B120(v26);
  v28 = *(int **)(a1 + 728);
  if ( v28 )
  {
    v29 = *v28 - 1;
    v9 = *v28 == 1;
    *v28 = v29;
    if ( v29 < 0 || v9 )
      sub_47B120(v28);
    *(_QWORD *)(a1 + 728) = 0;
  }
  v30 = *(int **)(a1 + 720);
  if ( v30 )
  {
    v31 = *v30 - 1;
    v9 = *v30 == 1;
    *v30 = v31;
    if ( v31 < 0 || v9 )
      sub_47B120(v30);
  }
  v32 = *(_QWORD *)(a1 + 208);
  if ( v32 )
  {
    Tcl_Free(v32);
    *(_QWORD *)(a1 + 208) = 0;
  }
  sub_484890(a1);
  while ( *(_QWORD *)(a1 + 440) )
    sub_499720(a1);
  if ( *(_QWORD *)(a1 + 456) )
    sub_449130();
  v33 = *(int **)(a1 + 416);
  if ( v33 )
  {
    v34 = *v33 - 1;
    v9 = *v33 == 1;
    *v33 = v34;
    if ( v34 < 0 || v9 )
      sub_47B120(v33);
    *(_QWORD *)(a1 + 416) = 0;
  }
  v35 = *(int **)(a1 + 464);
  v36 = *v35 - 1;
  v9 = *v35 == 1;
  *v35 = v36;
  if ( v36 < 0 || v9 )
    sub_47B120(v35);
  v37 = *(_QWORD **)(a1 + 408);
  *(_QWORD *)(a1 + 464) = 0;
  while ( v37 )
  {
    v38 = (_QWORD *)v37[4];
    Tcl_Free(*v37);
    v39 = v37;
    v37 = v38;
    Tcl_Free(v39);
  }
  sub_470850(a1, a1 + 336);
  for ( k = sub_457E20(*(_QWORD *)(a1 + 976), v66); ; k = sub_457DE0(v66) )
  {
    v42 = k;
    if ( !k )
      break;
    v43 = *(_QWORD *)(k + 24);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 976) + 60LL) == 1 || *(_DWORD *)(*(_QWORD *)(a1 + 976) + 60LL) == -1 )
      v41 = *(_QWORD **)(k + 32);
    else
      v41 = (_QWORD *)(k + 32);
    *v41 = 0;
    if ( v43 )
    {
      if ( *(_DWORD *)v43 == 4 )
      {
        v44 = *(int **)(v43 + 40);
        v45 = *v44 - 1;
        v9 = *v44 == 1;
        *v44 = v45;
        if ( v45 < 0 || v9 )
          sub_47B120(v44);
      }
      Tcl_Free(*(_QWORD *)(v43 + 8));
      Tcl_Free(v43);
    }
    sub_457BC0(v42);
  }
  sub_457CE0(*(_QWORD *)(a1 + 976));
  Tcl_Free(*(_QWORD *)(a1 + 976));
  v46 = *(_QWORD *)(a1 + 984);
  *(_QWORD *)(a1 + 976) = 0;
  v47 = sub_457E20(v46, v66);
  for ( m = v47; v47; m = v47 )
  {
    v49 = *(_QWORD *)(v47 + 24);
    if ( *(_DWORD *)v49 == 4 )
    {
      v64 = *(int **)(v49 + 8);
      v65 = *v64 - 1;
      v9 = *v64 == 1;
      *v64 = v65;
      if ( v65 < 0 || v9 )
        sub_47B120(v64);
    }
    for ( n = 0; *(_DWORD *)(v49 + 28) > n; ++n )
    {
      v51 = n;
      Tcl_Free(*(_QWORD *)(*(_QWORD *)(v49 + 16) + 24 * v51 + 8));
    }
    v52 = *(_QWORD *)(v49 + 16);
    if ( v52 )
      Tcl_Free(v52);
    sub_457CE0(v49 + 32);
    Tcl_Free(v49);
    sub_457BC0(m);
    v47 = sub_457DE0(v66);
  }
  sub_457CE0(*(_QWORD *)(a1 + 984));
  Tcl_Free(*(_QWORD *)(a1 + 984));
  v57 = *(_QWORD *)(a1 + 1000);
  *(_QWORD *)(a1 + 984) = 0;
  if ( *(_DWORD *)(v57 + 44) )
  {
    sub_47D740((unsigned int)"Argument location tracking table not empty", (unsigned int)v66, v53, v54, v55, v56);
    v57 = *(_QWORD *)(a1 + 1000);
  }
  sub_457CE0(v57);
  Tcl_Free(*(_QWORD *)(a1 + 1000));
  v62 = *(_QWORD *)(a1 + 992);
  *(_QWORD *)(a1 + 1000) = 0;
  if ( *(_DWORD *)(v62 + 44) )
  {
    sub_47D740((unsigned int)"Argument location tracking table not empty", (unsigned int)v66, v58, v59, v60, v61);
    v62 = *(_QWORD *)(a1 + 992);
  }
  sub_457CE0(v62);
  Tcl_Free(*(_QWORD *)(a1 + 992));
  *(_QWORD *)(a1 + 992) = 0;
  sub_457CE0(a1 + 1024);
  sub_457CE0(a1 + 1112);
  return Tcl_Free(a1);
}

