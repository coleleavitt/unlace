__int64 __fastcall sub_E0AF10(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rax
  unsigned int v4; // esi
  void (__fastcall ***v5)(_QWORD); // rbp
  _QWORD *v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  void **v13; // rbp
  void **v14; // r14
  void (__fastcall ***v15)(void *); // r13
  void (__fastcall ***v16)(void *); // rbp
  void (__fastcall ***v17)(void *); // rbp
  void (__fastcall ***v18)(_QWORD); // rbp
  void (__fastcall ***v19)(_QWORD); // rbp
  void (__fastcall ***v20)(void *); // rbp
  void (__fastcall ***v21)(void *); // rbp
  void (__fastcall ***v22)(void *); // rbp
  void (__fastcall ***v23)(_QWORD); // rbp
  __int64 v24; // rdi
  void (__fastcall *v25)(__int64, __int64, __int64); // rax
  _QWORD *v26; // rbp
  _QWORD *v27; // rdi
  _QWORD *v28; // rbp
  _QWORD *v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // r13
  __int64 v32; // rbp
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  void *v39; // rdi
  void *v40; // rdi
  void *v41; // rdi
  void *v42; // rdi
  __int64 *v43; // rbp
  __int64 v44; // rax
  __int64 *v45; // r13
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdi
  void *v50; // rdi
  void *v51; // rdi
  void **v52; // rbp
  void **v53; // r13
  void *v54; // rdi
  void *v55; // rdi
  void **v56; // rbp
  void **v57; // r14
  void (__fastcall ***v58)(void *); // r13
  void (__fastcall ***v59)(_QWORD); // rbp

  *(_QWORD *)a1 = &off_1C5B2B0;
  v2 = *(_BYTE *)(a1 + 240) == 0;
  *(_QWORD *)(a1 + 104) = off_1C5B338;
  if ( !v2 )
  {
    sub_180B140(&std::cerr);
    v3 = *(_QWORD *)(a1 + 848);
    if ( v3 )
      goto LABEL_3;
LABEL_125:
    v4 = 0;
    goto LABEL_4;
  }
  v3 = *(_QWORD *)(a1 + 848);
  if ( !v3 )
    goto LABEL_125;
LABEL_3:
  v4 = *(_DWORD *)(v3 - 4);
LABEL_4:
  sub_E0ACB0(a1, v4);
  sub_DF8D30(a1);
  sub_DEBF80(a1 + 8);
  v5 = *(void (__fastcall ****)(_QWORD))(a1 + 280);
  if ( v5 )
  {
    (**v5)(*(_QWORD *)(a1 + 280));
    sub_186B220(v5);
    *(_QWORD *)(a1 + 280) = 0;
  }
  v6 = *(_QWORD **)(a1 + 616);
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = &v6[4 * v7];
      do
      {
        v11 = v6[2];
        if ( v11 )
        {
          v12 = v6[3];
          v2 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v2 )
            sub_15D7BC0(v12, v11);
        }
        v9 = *v6;
        if ( *v6 )
        {
          v10 = v6[1];
          v2 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v2 )
            sub_15D7BC0(v10, v9);
        }
        v6 += 4;
      }
      while ( v6 != v8 );
      v6 = *(_QWORD **)(a1 + 616);
    }
    *((_DWORD *)v6 - 1) = 0;
  }
  sub_E04890(a1, 1);
  v13 = *(void ***)(a1 + 288);
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 >= v14 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v15 = (void (__fastcall ***)(void *))*v13;
        if ( *v13 )
        {
          v2 = (*((_DWORD *)v15 + 2))-- == 1;
          if ( v2 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_25;
      }
      ++v13;
      (**v15)(v15);
      sub_186B220(v15);
    }
    while ( v13 < v14 );
LABEL_25:
    v13 = *(void ***)(a1 + 288);
    if ( v13 )
LABEL_26:
      *((_DWORD *)v13 - 1) = 0;
  }
  v16 = *(void (__fastcall ****)(void *))(a1 + 864);
  if ( v16 )
  {
    v2 = (*((_DWORD *)v16 + 12))-- == 1;
    if ( v2 )
    {
      (**v16)(v16);
      sub_186B220(v16);
    }
  }
  v17 = *(void (__fastcall ****)(void *))(a1 + 872);
  *(_QWORD *)(a1 + 864) = 0;
  if ( v17 )
  {
    v2 = (*((_DWORD *)v17 + 12))-- == 1;
    if ( v2 )
    {
      (**v17)(v17);
      sub_186B220(v17);
    }
  }
  v18 = *(void (__fastcall ****)(_QWORD))(a1 + 920);
  *(_QWORD *)(a1 + 872) = 0;
  if ( v18 )
  {
    (**v18)(v18);
    sub_186B220(v18);
  }
  v19 = *(void (__fastcall ****)(_QWORD))(a1 + 912);
  if ( v19 )
  {
    (**v19)(*(_QWORD *)(a1 + 912));
    sub_186B220(v19);
  }
  v20 = *(void (__fastcall ****)(void *))(a1 + 880);
  if ( v20 )
  {
    v2 = (*((_DWORD *)v20 + 12))-- == 1;
    if ( v2 )
    {
      (**v20)(v20);
      sub_186B220(v20);
    }
  }
  v21 = *(void (__fastcall ****)(void *))(a1 + 872);
  if ( v21 )
  {
    v2 = (*((_DWORD *)v21 + 12))-- == 1;
    if ( v2 )
    {
      (**v21)(v21);
      sub_186B220(v21);
    }
  }
  v22 = *(void (__fastcall ****)(void *))(a1 + 864);
  if ( v22 )
  {
    v2 = (*((_DWORD *)v22 + 12))-- == 1;
    if ( v2 )
    {
      (**v22)(v22);
      sub_186B220(v22);
    }
  }
  v23 = *(void (__fastcall ****)(_QWORD))(a1 + 856);
  if ( v23 )
  {
    (**v23)(*(_QWORD *)(a1 + 856));
    sub_186B220(v23);
  }
  v24 = *(_QWORD *)(a1 + 848);
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 832);
  if ( v25 )
    v25(a1 + 816, a1 + 816, 3);
  v26 = *(_QWORD **)(a1 + 808);
  if ( v26 )
  {
    v27 = *(_QWORD **)(a1 + 808);
    *v26 = &off_1C4CA80;
    sub_267D20(v27);
    sub_186B220(v26);
  }
  v28 = *(_QWORD **)(a1 + 800);
  if ( v28 )
  {
    v29 = *(_QWORD **)(a1 + 800);
    *v28 = &off_1C4CA80;
    sub_267D20(v29);
    sub_186B220(v28);
  }
  v30 = *(_QWORD *)(a1 + 792);
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = *(_QWORD *)(a1 + 776);
  v32 = *(_QWORD *)(a1 + 768);
  if ( v31 != v32 )
  {
    do
    {
      if ( *(_QWORD *)v32 != v32 + 16 )
        operator delete(*(void **)v32, *(_QWORD *)(v32 + 16) + 1LL);
      v32 += 32;
    }
    while ( v31 != v32 );
    v32 = *(_QWORD *)(a1 + 768);
  }
  if ( v32 )
    operator delete((void *)v32, *(_QWORD *)(a1 + 784) - v32);
  v33 = *(_QWORD *)(a1 + 760);
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = *(_QWORD *)(a1 + 752);
  if ( v34 )
    sub_186B220((void *)(v34 - 8));
  v35 = *(_QWORD *)(a1 + 744);
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  v36 = *(_QWORD *)(a1 + 736);
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v37 = *(_QWORD *)(a1 + 728);
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v38 = *(_QWORD *)(a1 + 720);
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
  v39 = *(void **)(a1 + 696);
  if ( v39 )
    sub_186B220(v39);
  v40 = *(void **)(a1 + 672);
  if ( v40 )
    sub_186B220(v40);
  v41 = *(void **)(a1 + 648);
  if ( v41 )
    sub_186B220(v41);
  v42 = *(void **)(a1 + 624);
  if ( v42 )
    sub_186B220(v42);
  v43 = *(__int64 **)(a1 + 616);
  if ( v43 )
  {
    v44 = *((unsigned int *)v43 - 1);
    if ( (_DWORD)v44 )
    {
      v45 = &v43[4 * v44];
      do
      {
        v48 = v43[2];
        if ( v48 )
        {
          v49 = v43[3];
          v2 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v2 )
            sub_15D7BC0(v49, v48);
        }
        v46 = *v43;
        if ( *v43 )
        {
          v47 = v43[1];
          v2 = (*(_DWORD *)(v46 + 8))-- == 1;
          if ( v2 )
            sub_15D7BC0(v47, v46);
        }
        v43 += 4;
      }
      while ( v43 != v45 );
      v43 = *(__int64 **)(a1 + 616);
    }
    sub_186B220(v43 - 1);
  }
  v50 = *(void **)(a1 + 592);
  if ( v50 )
    sub_186B220(v50);
  v51 = *(void **)(a1 + 568);
  if ( v51 )
    sub_186B220(v51);
  v52 = *(void ***)(a1 + 560);
  if ( v52 )
  {
    v53 = &v52[*((unsigned int *)v52 - 1)];
    if ( v52 == v53 )
      goto LABEL_107;
    do
    {
      if ( *v52 )
        sub_186B220(*v52);
      ++v52;
    }
    while ( v53 != v52 );
    v53 = *(void ***)(a1 + 560);
    if ( v53 )
    {
LABEL_107:
      *((_DWORD *)v53 - 1) = 0;
      sub_186B220(v53 - 1);
    }
  }
  v54 = *(void **)(a1 + 536);
  if ( v54 )
    sub_186B220(v54);
  v55 = *(void **)(a1 + 512);
  if ( v55 )
    sub_186B220(v55);
  sub_DFA4F0(a1 + 424);
  sub_233E40(a1 + 464);
  sub_233E40(a1 + 424);
  sub_DFA4F0(a1 + 336);
  sub_233E40(a1 + 376);
  sub_233E40(a1 + 336);
  sub_E2CF70(a1 + 328);
  v56 = *(void ***)(a1 + 288);
  if ( v56 )
  {
    v57 = &v56[*((unsigned int *)v56 - 1)];
    if ( v56 >= v57 )
      goto LABEL_120;
    do
    {
      while ( 1 )
      {
        v58 = (void (__fastcall ***)(void *))*v56;
        if ( *v56 )
        {
          v2 = (*((_DWORD *)v58 + 2))-- == 1;
          if ( v2 )
            break;
        }
        if ( ++v56 >= v57 )
          goto LABEL_119;
      }
      ++v56;
      (**v58)(v58);
      sub_186B220(v58);
    }
    while ( v56 < v57 );
LABEL_119:
    v56 = *(void ***)(a1 + 288);
    if ( v56 )
LABEL_120:
      sub_186B220(v56 - 1);
  }
  v59 = *(void (__fastcall ****)(_QWORD))(a1 + 280);
  if ( v59 )
  {
    (**v59)(*(_QWORD *)(a1 + 280));
    sub_186B220(v59);
  }
  sub_233E40(a1 + 200);
  sub_233E40(a1 + 152);
  sub_233E40(a1 + 120);
  return sub_DEC3C0(a1 + 8);
}

