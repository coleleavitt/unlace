__int64 __fastcall sub_BBAB20(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rdx
  __int64 v4; // rax
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r13d
  __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // r12
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rax
  int v32; // r12d
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  int v38; // r12d
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rax
  int v48; // ebp
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned int v52; // r13d
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57[9]; // [rsp+0h] [rbp-48h] BYREF

  sub_966D90(a1);
  v4 = *(_QWORD *)(a1 + 224);
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v6 = *(_QWORD *)(a1 + 232);
  if ( !v6 || (v7 = *(unsigned int *)(v6 - 4), (_DWORD)v7 == *(_DWORD *)(v6 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 232));
    v6 = *(_QWORD *)(a1 + 232);
    v7 = *(unsigned int *)(v6 - 4);
  }
  *(_DWORD *)(v6 + 4 * v7) = v5;
  v8 = (_QWORD *)(a1 + 984);
  ++*(_DWORD *)(v6 - 4);
  v9 = *(_QWORD *)(a1 + 960);
  if ( v9 )
    v10 = *(_DWORD *)(v9 - 4);
  else
    v10 = 0;
  LODWORD(v57[0]) = v10;
  sub_BB7DA0(v8, (unsigned int *)v57);
  sub_180C250(a1 + 72);
  sub_180C250(a1 + 3960);
  v11 = *(_QWORD *)(a1 + 3944);
  if ( v11 )
    v12 = *(_DWORD *)(v11 - 4);
  else
    v12 = 0;
  v13 = *(_QWORD *)(a1 + 3952);
  if ( !v13 || (v14 = *(unsigned int *)(v13 - 4), (_DWORD)v14 == *(_DWORD *)(v13 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 3952));
    v13 = *(_QWORD *)(a1 + 3952);
    v14 = *(unsigned int *)(v13 - 4);
  }
  *(_DWORD *)(v13 + 4 * v14) = v12;
  ++*(_DWORD *)(v13 - 4);
  v15 = *(_DWORD *)(a1 + 1032);
  v16 = sub_180C100(a1 + 3960, 24);
  v17 = *(_QWORD **)(a1 + 3944);
  v18 = v16;
  *(_QWORD *)v16 = &off_1C4C070;
  *(_QWORD *)(v16 + 8) = a1 + 1032;
  *(_DWORD *)(v16 + 16) = v15;
  if ( v17 )
  {
    v19 = *((_DWORD *)v17 - 1);
    if ( v19 == *((_DWORD *)v17 - 2) )
    {
      v52 = (3 * v19 + 1) >> 1;
      v53 = 8 * v52 + 8;
      if ( 8 * v19 + 8 >= (unsigned int)v53 || v19 >= v52 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v57, "Overflow encountered when expanding vector", v2);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v57);
        sub_233E40((__int64)v57);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v54 = (unsigned int *)sub_186B300(v17 - 1, v53);
      v55 = v54[1];
      v17 = v54 + 2;
      *v54 = v52;
      *(_QWORD *)(a1 + 3944) = v54 + 2;
      LODWORD(v54) = v55;
      v22 = &v17[v55];
      v21 = (_DWORD)v54 + 1;
    }
    else
    {
      v20 = v19;
      v21 = v19 + 1;
      v22 = &v17[v20];
    }
  }
  else
  {
    v56 = (_QWORD *)sub_186B270(0x18u);
    v17 = v56 + 1;
    *v56 = 2;
    v21 = 1;
    *(_QWORD *)(a1 + 3944) = v17;
    v22 = v17;
  }
  *v22 = v18;
  *((_DWORD *)v17 - 1) = v21;
  v23 = *(_QWORD *)(a1 + 256);
  if ( v23 )
    v24 = *(_DWORD *)(v23 - 4);
  else
    v24 = 0;
  *(_DWORD *)(a1 + 244) = v24;
  sub_BB7E40((_QWORD *)(a1 + 248), (unsigned int *)(a1 + 240));
  v25 = *(_QWORD *)(a1 + 280);
  if ( v25 )
    v26 = *(_DWORD *)(v25 - 4);
  else
    v26 = 0;
  v27 = *(_QWORD *)(a1 + 296);
  if ( !v27 || (v28 = *(unsigned int *)(v27 - 4), (_DWORD)v28 == *(_DWORD *)(v27 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 296));
    v27 = *(_QWORD *)(a1 + 296);
    v28 = *(unsigned int *)(v27 - 4);
  }
  *(_DWORD *)(v27 + 4 * v28) = v26;
  ++*(_DWORD *)(v27 - 4);
  sub_BB7E40((_QWORD *)(a1 + 264), (unsigned int *)(a1 + 244));
  v29 = *(_QWORD *)(a1 + 320);
  if ( v29 )
    v30 = *(_DWORD *)(v29 - 4);
  else
    v30 = 0;
  *(_DWORD *)(a1 + 308) = v30;
  sub_BB7E40((_QWORD *)(a1 + 312), (unsigned int *)(a1 + 304));
  v31 = *(_QWORD *)(a1 + 344);
  if ( v31 )
    v32 = *(_DWORD *)(v31 - 4);
  else
    v32 = 0;
  v33 = *(_QWORD *)(a1 + 360);
  if ( !v33 || (v34 = *(unsigned int *)(v33 - 4), (_DWORD)v34 == *(_DWORD *)(v33 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 360));
    v33 = *(_QWORD *)(a1 + 360);
    v34 = *(unsigned int *)(v33 - 4);
  }
  *(_DWORD *)(v33 + 4 * v34) = v32;
  ++*(_DWORD *)(v33 - 4);
  sub_BB7E40((_QWORD *)(a1 + 328), (unsigned int *)(a1 + 308));
  v35 = *(_QWORD *)(a1 + 384);
  if ( v35 )
    v36 = *(_DWORD *)(v35 - 4);
  else
    v36 = 0;
  *(_DWORD *)(a1 + 372) = v36;
  sub_BB7E40((_QWORD *)(a1 + 376), (unsigned int *)(a1 + 368));
  v37 = *(_QWORD *)(a1 + 408);
  if ( v37 )
    v38 = *(_DWORD *)(v37 - 4);
  else
    v38 = 0;
  v39 = *(_QWORD *)(a1 + 424);
  if ( !v39 || (v40 = *(unsigned int *)(v39 - 4), (_DWORD)v40 == *(_DWORD *)(v39 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 424));
    v39 = *(_QWORD *)(a1 + 424);
    v40 = *(unsigned int *)(v39 - 4);
  }
  *(_DWORD *)(v39 + 4 * v40) = v38;
  ++*(_DWORD *)(v39 - 4);
  sub_BB7E40((_QWORD *)(a1 + 392), (unsigned int *)(a1 + 372));
  v41 = *(_QWORD *)(a1 + 448);
  if ( v41 )
    v42 = *(_DWORD *)(v41 - 4);
  else
    v42 = 0;
  *(_DWORD *)(a1 + 436) = v42;
  sub_BB7E40((_QWORD *)(a1 + 440), (unsigned int *)(a1 + 432));
  v43 = *(_QWORD *)(a1 + 472);
  if ( v43 )
    v44 = *(_DWORD *)(v43 - 4);
  else
    v44 = 0;
  LODWORD(v57[0]) = v44;
  sub_BB7DA0((_QWORD *)(a1 + 488), (unsigned int *)v57);
  sub_BB7E40((_QWORD *)(a1 + 456), (unsigned int *)(a1 + 436));
  v45 = *(_QWORD *)(a1 + 512);
  if ( v45 )
    v46 = *(_DWORD *)(v45 - 4);
  else
    v46 = 0;
  *(_DWORD *)(a1 + 500) = v46;
  sub_BB7E40((_QWORD *)(a1 + 504), (unsigned int *)(a1 + 496));
  v47 = *(_QWORD *)(a1 + 536);
  if ( v47 )
    v48 = *(_DWORD *)(v47 - 4);
  else
    v48 = 0;
  v49 = *(_QWORD *)(a1 + 552);
  if ( !v49 || (v50 = *(unsigned int *)(v49 - 4), (_DWORD)v50 == *(_DWORD *)(v49 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 552));
    v49 = *(_QWORD *)(a1 + 552);
    v50 = *(unsigned int *)(v49 - 4);
  }
  *(_DWORD *)(v49 + 4 * v50) = v48;
  ++*(_DWORD *)(v49 - 4);
  return sub_BB7E40((_QWORD *)(a1 + 520), (unsigned int *)(a1 + 500));
}

