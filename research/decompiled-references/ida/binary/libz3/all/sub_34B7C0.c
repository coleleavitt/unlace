__int64 __fastcall sub_34B7C0(__int64 a1)
{
  __int64 v2; // r12
  _QWORD *v3; // rdi
  _QWORD *v4; // r12
  _QWORD *v5; // rbx
  void *v6; // r13
  _QWORD *v7; // rax
  void *v8; // rbx
  char *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbx
  char *v12; // r13
  void *v13; // r15
  __int64 v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  __int64 *v19; // r14
  __int64 v20; // rax
  __int64 *v21; // r13
  __int64 *v22; // rbx
  __int64 *v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  void (***v27)(void); // rdi
  void (*v28)(void); // rax
  void (__fastcall ***v29)(void *); // rbx
  void *v30; // rbx
  void (__fastcall ***v31)(void *); // rbx
  void *v32; // rbx
  __int64 *v33; // rbx
  __int64 *v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 *v37; // rbx
  __int64 *v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rdi
  char *v41; // r15
  __int64 v42; // rax
  char *v43; // rbx
  char *v44; // r14
  void *v45; // r13
  char *v46; // rsi
  __int64 *v47; // rbx
  __int64 *v48; // r13
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 *v51; // rbx
  __int64 *v52; // r13
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 *v55; // rbx
  __int64 *v56; // r13
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rax
  void (__fastcall ***v60)(void *); // rbx
  void *v61; // rbx
  void *v62; // rbx
  void (***v64)(void); // [rsp+8h] [rbp-40h]

  v2 = *(unsigned int *)(a1 + 680);
  *(_QWORD *)a1 = &off_1C4D670;
  v3 = *(_QWORD **)(a1 + 672);
  v4 = &v3[2 * v2];
  v5 = v3;
  if ( v3 != v4 )
  {
    while ( *v5 <= 1u )
    {
      v5 += 2;
      if ( v4 == v5 )
        goto LABEL_14;
    }
    if ( v4 != v5 )
    {
      do
      {
        v6 = (void *)v5[1];
        if ( v6 )
        {
          sub_359F60(v5[1]);
          sub_186B220(v6);
        }
        v7 = v5 + 2;
        if ( v4 == v5 + 2 )
          break;
        while ( 1 )
        {
          v5 = v7;
          if ( *v7 > 1u )
            break;
          v7 += 2;
          if ( v4 == v7 )
            goto LABEL_13;
        }
      }
      while ( v7 != v4 );
LABEL_13:
      v3 = *(_QWORD **)(a1 + 672);
    }
  }
LABEL_14:
  if ( v3 )
    sub_186B220(v3);
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 640);
  sub_182CBA0(v8, a1 + 656);
  v9 = *(char **)(a1 + 616);
  if ( v9 )
  {
    v10 = *(unsigned int *)(a1 + 624);
    if ( (_DWORD)v10 )
    {
      v11 = *(_QWORD *)(a1 + 616);
      v12 = &v9[56 * v10];
      do
      {
        while ( 1 )
        {
          v13 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v11 + 24);
          sub_182CBA0(v13, v11 + 40);
          v14 = *(_QWORD *)(v11 + 8);
          if ( !v14 )
            break;
          v11 += 56;
          sub_186B220((void *)(v14 - 8));
          if ( v12 == (char *)v11 )
            goto LABEL_21;
        }
        v11 += 56;
      }
      while ( (char *)v11 != v12 );
    }
LABEL_21:
    sub_186B220(v9);
  }
  v15 = *(void **)(a1 + 592);
  if ( v15 )
    sub_186B220(v15);
  v16 = *(void **)(a1 + 560);
  if ( v16 != (void *)(a1 + 576) )
    operator delete(v16, *(_QWORD *)(a1 + 576) + 1LL);
  v17 = *(void **)(a1 + 520);
  if ( v17 )
    sub_186B220(v17);
  v18 = *(void **)(a1 + 496);
  if ( v18 )
    sub_186B220(v18);
  v19 = *(__int64 **)(a1 + 472);
  if ( v19 )
  {
    v20 = *((unsigned int *)v19 - 1);
    if ( (_DWORD)v20 )
    {
      v21 = &v19[2 * v20];
      do
      {
        v22 = (__int64 *)v19[1];
        if ( v22 )
        {
          v23 = &v22[*((unsigned int *)v22 - 1)];
          if ( v22 >= v23 )
            goto LABEL_41;
          do
          {
            while ( 1 )
            {
              v24 = *v22;
              if ( *v22 )
              {
                v25 = *v19;
                v26 = (*(_DWORD *)(v24 + 8))-- == 1;
                if ( v26 )
                  break;
              }
              if ( ++v22 >= v23 )
                goto LABEL_40;
            }
            sub_15D7BC0(v25, v24);
            ++v22;
          }
          while ( v22 < v23 );
LABEL_40:
          v22 = (__int64 *)v19[1];
          if ( v22 )
LABEL_41:
            sub_186B220(v22 - 1);
        }
        v19 += 2;
      }
      while ( v19 != v21 );
      v19 = *(__int64 **)(a1 + 472);
    }
    sub_186B220(v19 - 1);
  }
  v27 = *(void (****)(void))(a1 + 464);
  if ( v27 )
  {
    v28 = **v27;
    if ( v28 != nullsub_164 )
    {
      v64 = *(void (****)(void))(a1 + 464);
      v28();
      v27 = v64;
    }
    sub_186B220(v27);
  }
  v29 = *(void (__fastcall ****)(void *))(a1 + 456);
  if ( v29 )
  {
    v26 = (*((_DWORD *)v29 + 4))-- == 1;
    if ( v26 )
    {
      (**v29)(v29);
      sub_186B220(v29);
    }
  }
  v30 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 424);
  sub_182CBA0(v30, a1 + 440);
  sub_2334C0((__int64 *)(a1 + 392));
  sub_2334C0((__int64 *)(a1 + 376));
  v31 = *(void (__fastcall ****)(void *))(a1 + 320);
  if ( v31 )
  {
    v26 = (*((_DWORD *)v31 + 4))-- == 1;
    if ( v26 )
    {
      (**v31)(v31);
      sub_186B220(v31);
    }
  }
  v32 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 288);
  sub_182CBA0(v32, a1 + 304);
  v33 = *(__int64 **)(a1 + 272);
  if ( v33 )
  {
    v34 = &v33[*((unsigned int *)v33 - 1)];
    if ( v33 >= v34 )
      goto LABEL_63;
    do
    {
      while ( 1 )
      {
        v35 = *v33;
        if ( *v33 )
        {
          v36 = *(_QWORD *)(a1 + 264);
          v26 = (*(_DWORD *)(v35 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( ++v33 >= v34 )
          goto LABEL_62;
      }
      sub_15D7BC0(v36, v35);
      ++v33;
    }
    while ( v33 < v34 );
LABEL_62:
    v33 = *(__int64 **)(a1 + 272);
    if ( v33 )
LABEL_63:
      sub_186B220(v33 - 1);
  }
  sub_E1FA60(a1 + 256);
  v37 = *(__int64 **)(a1 + 248);
  if ( v37 )
  {
    v38 = &v37[*((unsigned int *)v37 - 1)];
    if ( v37 >= v38 )
      goto LABEL_72;
    do
    {
      while ( 1 )
      {
        v39 = *v37;
        if ( *v37 )
        {
          v40 = *(_QWORD *)(a1 + 240);
          v26 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( ++v37 >= v38 )
          goto LABEL_71;
      }
      sub_15D7BC0(v40, v39);
      ++v37;
    }
    while ( v37 < v38 );
LABEL_71:
    v37 = *(__int64 **)(a1 + 248);
    if ( v37 )
LABEL_72:
      sub_186B220(v37 - 1);
  }
  v41 = *(char **)(a1 + 216);
  if ( v41 )
  {
    v42 = *(unsigned int *)(a1 + 224);
    if ( (_DWORD)v42 )
    {
      v43 = *(char **)(a1 + 216);
      v44 = &v41[40 * v42];
      do
      {
        v45 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v43 + 8);
        v46 = v43 + 24;
        v43 += 40;
        sub_182CBA0(v45, v46);
      }
      while ( v43 != v44 );
    }
    sub_186B220(v41);
  }
  v47 = *(__int64 **)(a1 + 208);
  if ( v47 )
  {
    v48 = &v47[*((unsigned int *)v47 - 1)];
    if ( v47 >= v48 )
      goto LABEL_86;
    do
    {
      while ( 1 )
      {
        v49 = *v47;
        if ( *v47 )
        {
          v50 = *(_QWORD *)(a1 + 200);
          v26 = (*(_DWORD *)(v49 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( ++v47 >= v48 )
          goto LABEL_85;
      }
      sub_15D7BC0(v50, v49);
      ++v47;
    }
    while ( v47 < v48 );
LABEL_85:
    v47 = *(__int64 **)(a1 + 208);
    if ( v47 )
LABEL_86:
      sub_186B220(v47 - 1);
  }
  v51 = *(__int64 **)(a1 + 192);
  if ( v51 )
  {
    v52 = &v51[*((unsigned int *)v51 - 1)];
    if ( v51 >= v52 )
      goto LABEL_95;
    do
    {
      while ( 1 )
      {
        v53 = *v51;
        if ( *v51 )
        {
          v54 = *(_QWORD *)(a1 + 184);
          v26 = (*(_DWORD *)(v53 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( ++v51 >= v52 )
          goto LABEL_94;
      }
      sub_15D7BC0(v54, v53);
      ++v51;
    }
    while ( v51 < v52 );
LABEL_94:
    v51 = *(__int64 **)(a1 + 192);
    if ( v51 )
LABEL_95:
      sub_186B220(v51 - 1);
  }
  v55 = *(__int64 **)(a1 + 176);
  if ( v55 )
  {
    v56 = &v55[*((unsigned int *)v55 - 1)];
    if ( v55 >= v56 )
      goto LABEL_104;
    do
    {
      while ( 1 )
      {
        v57 = *v55;
        if ( *v55 )
        {
          v58 = *(_QWORD *)(a1 + 168);
          v26 = (*(_DWORD *)(v57 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( ++v55 >= v56 )
          goto LABEL_103;
      }
      sub_15D7BC0(v58, v57);
      ++v55;
    }
    while ( v55 < v56 );
LABEL_103:
    v55 = *(__int64 **)(a1 + 176);
    if ( v55 )
LABEL_104:
      sub_186B220(v55 - 1);
  }
  *(_QWORD *)a1 = qword_1C64158;
  sub_18572D0((void *)(a1 + 152));
  v59 = *(_QWORD *)(a1 + 144);
  if ( v59 )
    sub_186B220((void *)(v59 - 8));
  v60 = *(void (__fastcall ****)(void *))(a1 + 136);
  if ( v60 )
  {
    v26 = (*((_DWORD *)v60 + 4))-- == 1;
    if ( v26 )
    {
      (**v60)(v60);
      sub_186B220(v60);
    }
  }
  v61 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 104);
  sub_182CBA0(v61, a1 + 120);
  v62 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 72);
  sub_182CBA0(v62, a1 + 88);
  sub_2334C0((__int64 *)(a1 + 56));
  return sub_2334C0((__int64 *)(a1 + 40));
}

