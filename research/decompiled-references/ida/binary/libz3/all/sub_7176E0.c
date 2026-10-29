void __fastcall sub_7176E0(__int64 a1)
{
  void *v2; // r12
  void *v3; // r12
  void *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  void (__fastcall ***v8)(void *); // rbx
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  void (__fastcall ***v17)(void *); // rbx
  __int64 *v18; // r13
  __int64 v19; // rax
  __int64 *v20; // r12
  __int64 *v21; // rbx
  __int64 *v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  __int64 v27; // rax
  void (__fastcall ***v28)(void *); // rbx
  void *v29; // rdi
  void *v30; // rdi
  void *v31; // rdi
  void *v32; // rdi
  __int64 v33; // rax
  __int64 *v34; // r13
  __int64 v35; // rax
  __int64 *v36; // r12
  __int64 *v37; // rbx
  __int64 *v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdi
  void (__fastcall ***v43)(void *); // rbx
  __int64 v44; // rsi
  __int64 v45; // rdi
  void (__fastcall ***v46)(void *); // rbx
  __int64 v47; // rax
  __int64 v48; // rax

  *(_QWORD *)a1 = &off_1C536C0;
  sub_717280(a1);
  v2 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 568);
  sub_182CBA0(v2, a1 + 584);
  v3 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 536);
  sub_182CBA0(v3, a1 + 552);
  v4 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 504);
  sub_182CBA0(v4, a1 + 520);
  v5 = *(_QWORD *)(a1 + 488);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 496);
    v7 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v6, v5);
  }
  v8 = *(void (__fastcall ****)(void *))(a1 + 480);
  if ( v8 )
  {
    v7 = (*((_DWORD *)v8 + 4))-- == 1;
    if ( v7 )
    {
      (**v8)(v8);
      sub_186B220(v8);
    }
  }
  v9 = *(__int64 **)(a1 + 448);
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *(_QWORD *)(a1 + 440);
          v7 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_14;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_14:
    v9 = *(__int64 **)(a1 + 448);
    if ( v9 )
LABEL_15:
      sub_186B220(v9 - 1);
  }
  v13 = *(__int64 **)(a1 + 432);
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 >= v14 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = *(_QWORD *)(a1 + 424);
          v7 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_23;
      }
      sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_23:
    v13 = *(__int64 **)(a1 + 432);
    if ( v13 )
LABEL_24:
      sub_186B220(v13 - 1);
  }
  v17 = *(void (__fastcall ****)(void *))(a1 + 408);
  if ( v17 )
  {
    v7 = (*((_DWORD *)v17 + 4))-- == 1;
    if ( v7 )
    {
      (**v17)(v17);
      sub_186B220(v17);
    }
  }
  v18 = *(__int64 **)(a1 + 392);
  if ( v18 )
  {
    v19 = *((unsigned int *)v18 - 1);
    if ( (_DWORD)v19 )
    {
      v20 = &v18[2 * v19];
      do
      {
        v21 = (__int64 *)v18[1];
        if ( v21 )
        {
          v22 = &v21[*((unsigned int *)v21 - 1)];
          if ( v21 >= v22 )
            goto LABEL_39;
          do
          {
            while ( 1 )
            {
              v23 = *v21;
              if ( *v21 )
              {
                v24 = *v18;
                v7 = (*(_DWORD *)(v23 + 8))-- == 1;
                if ( v7 )
                  break;
              }
              if ( ++v21 >= v22 )
                goto LABEL_38;
            }
            sub_15D7BC0(v24, v23);
            ++v21;
          }
          while ( v21 < v22 );
LABEL_38:
          v21 = (__int64 *)v18[1];
          if ( v21 )
LABEL_39:
            sub_186B220(v21 - 1);
        }
        v18 += 2;
      }
      while ( v18 != v20 );
      v18 = *(__int64 **)(a1 + 392);
    }
    sub_186B220(v18 - 1);
  }
  sub_2334C0((__int64 *)(a1 + 376));
  sub_2334C0((__int64 *)(a1 + 360));
  v25 = *(void **)(a1 + 336);
  if ( v25 )
    sub_186B220(v25);
  v26 = *(void **)(a1 + 312);
  if ( v26 )
    sub_186B220(v26);
  v27 = *(_QWORD *)(a1 + 304);
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  v28 = *(void (__fastcall ****)(void *))(a1 + 296);
  if ( v28 )
  {
    v7 = (*((_DWORD *)v28 + 2))-- == 1;
    if ( v7 )
    {
      (**v28)(v28);
      sub_186B220(v28);
    }
  }
  sub_2334C0((__int64 *)(a1 + 280));
  v29 = *(void **)(a1 + 256);
  if ( v29 )
    sub_186B220(v29);
  v30 = *(void **)(a1 + 232);
  if ( v30 )
    sub_186B220(v30);
  v31 = *(void **)(a1 + 208);
  if ( v31 )
    sub_186B220(v31);
  v32 = *(void **)(a1 + 184);
  if ( v32 )
    sub_186B220(v32);
  v33 = *(_QWORD *)(a1 + 176);
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  sub_2334C0((__int64 *)(a1 + 160));
  v34 = *(__int64 **)(a1 + 152);
  if ( v34 )
  {
    v35 = *((unsigned int *)v34 - 1);
    if ( (_DWORD)v35 )
    {
      v36 = &v34[2 * v35];
      do
      {
        v37 = (__int64 *)v34[1];
        if ( v37 )
        {
          v38 = &v37[*((unsigned int *)v37 - 1)];
          if ( v37 >= v38 )
            goto LABEL_73;
          do
          {
            while ( 1 )
            {
              v39 = *v37;
              if ( *v37 )
              {
                v40 = *v34;
                v7 = (*(_DWORD *)(v39 + 8))-- == 1;
                if ( v7 )
                  break;
              }
              if ( ++v37 >= v38 )
                goto LABEL_72;
            }
            sub_15D7BC0(v40, v39);
            ++v37;
          }
          while ( v37 < v38 );
LABEL_72:
          v37 = (__int64 *)v34[1];
          if ( v37 )
LABEL_73:
            sub_186B220(v37 - 1);
        }
        v34 += 2;
      }
      while ( v34 != v36 );
      v34 = *(__int64 **)(a1 + 152);
    }
    sub_186B220(v34 - 1);
  }
  v41 = *(_QWORD *)(a1 + 128);
  if ( v41 )
  {
    v42 = *(_QWORD *)(a1 + 136);
    v7 = (*(_DWORD *)(v41 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v42, v41);
  }
  v43 = *(void (__fastcall ****)(void *))(a1 + 120);
  if ( v43 )
  {
    v7 = (*((_DWORD *)v43 + 12))-- == 1;
    if ( v7 )
    {
      (**v43)(v43);
      sub_186B220(v43);
    }
  }
  sub_18572D0((void *)(a1 + 112));
  v44 = *(_QWORD *)(a1 + 88);
  if ( v44 )
  {
    v45 = *(_QWORD *)(a1 + 96);
    v7 = (*(_DWORD *)(v44 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v45, v44);
  }
  v46 = *(void (__fastcall ****)(void *))(a1 + 80);
  if ( v46 )
  {
    v7 = (*((_DWORD *)v46 + 12))-- == 1;
    if ( v7 )
    {
      (**v46)(v46);
      sub_186B220(v46);
    }
  }
  sub_18572D0((void *)(a1 + 72));
  sub_6EF670((_QWORD **)(a1 + 56));
  v47 = *(_QWORD *)(a1 + 48);
  if ( v47 )
    sub_186B220((void *)(v47 - 8));
  v48 = *(_QWORD *)(a1 + 40);
  if ( v48 )
    sub_186B220((void *)(v48 - 8));
  sub_18572D0((void *)(a1 + 24));
}

