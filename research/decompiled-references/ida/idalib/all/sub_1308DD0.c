void __fastcall sub_1308DD0(__int64 a1)
{
  void *v2; // rax
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void **v10; // r12
  void **v11; // rbp
  void **v12; // r12
  void **v13; // rbp
  void **v14; // r12
  void **v15; // rbp
  void **v16; // r12
  void **v17; // rbp
  void **v18; // r12
  void **v19; // rbp
  void **v20; // r12
  void **v21; // rbp
  _QWORD *v22; // r13
  _QWORD *v23; // rbp
  volatile signed __int32 *v24; // r12
  void **v25; // r12
  void **v26; // rbp
  void **v27; // r12
  void **v28; // rbp
  __int64 v29; // r12
  void **v30; // r14
  void **v31; // rbp
  __int64 v32; // r13
  void *v33; // rdi
  int v34; // eax
  _DWORD *v35; // r12
  int v36; // eax
  void *v37; // rdi
  void **v38; // r12
  void **v39; // rbp
  void *v40; // rdi
  void *v41; // rdi
  void *v42; // rdi
  void *v43; // rdi
  void *v44; // rdi
  void *v45; // rdi
  void *v46; // rdi
  void **v47; // r12
  void **v48; // rbp
  void **v49; // r12
  void **v50; // rbp

  v2 = (void *)(a1 + 872);
  v3 = *(void **)(a1 + 856);
  if ( v3 != v2 )
    operator delete(v3);
  v4 = *(void **)(a1 + 824);
  if ( v4 != (void *)(a1 + 840) )
    operator delete(v4);
  v5 = *(void **)(a1 + 792);
  if ( v5 != (void *)(a1 + 808) )
    operator delete(v5);
  v6 = *(void **)(a1 + 752);
  if ( v6 != (void *)(a1 + 768) )
    operator delete(v6);
  if ( *(_BYTE *)(a1 + 744) )
  {
    v49 = *(void ***)(a1 + 728);
    v50 = *(void ***)(a1 + 720);
    if ( v49 != v50 )
    {
      do
      {
        while ( *v50 != v50 + 2 )
        {
          operator delete(*v50);
          v50 += 4;
          if ( v49 == v50 )
            goto LABEL_147;
        }
        v50 += 4;
      }
      while ( v49 != v50 );
LABEL_147:
      v50 = *(void ***)(a1 + 720);
    }
    if ( v50 )
      operator delete(v50);
  }
  if ( *(_BYTE *)(a1 + 712) )
  {
    v7 = *(void **)(a1 + 680);
    if ( v7 != (void *)(a1 + 696) )
      operator delete(v7);
  }
  v8 = *(void **)(a1 + 648);
  if ( v8 != (void *)(a1 + 664) )
    operator delete(v8);
  v9 = *(void **)(a1 + 616);
  if ( v9 != (void *)(a1 + 632) )
    operator delete(v9);
  v10 = *(void ***)(a1 + 600);
  v11 = *(void ***)(a1 + 592);
  if ( v10 != v11 )
  {
    do
    {
      while ( *v11 != v11 + 2 )
      {
        operator delete(*v11);
        v11 += 4;
        if ( v10 == v11 )
          goto LABEL_20;
      }
      v11 += 4;
    }
    while ( v10 != v11 );
LABEL_20:
    v11 = *(void ***)(a1 + 592);
  }
  if ( v11 )
    operator delete(v11);
  v12 = *(void ***)(a1 + 576);
  v13 = *(void ***)(a1 + 568);
  if ( v12 != v13 )
  {
    do
    {
      while ( *v13 != v13 + 2 )
      {
        operator delete(*v13);
        v13 += 4;
        if ( v12 == v13 )
          goto LABEL_26;
      }
      v13 += 4;
    }
    while ( v12 != v13 );
LABEL_26:
    v13 = *(void ***)(a1 + 568);
  }
  if ( v13 )
    operator delete(v13);
  v14 = *(void ***)(a1 + 552);
  v15 = *(void ***)(a1 + 544);
  if ( v14 != v15 )
  {
    do
    {
      while ( *v15 != v15 + 2 )
      {
        operator delete(*v15);
        v15 += 4;
        if ( v14 == v15 )
          goto LABEL_32;
      }
      v15 += 4;
    }
    while ( v14 != v15 );
LABEL_32:
    v15 = *(void ***)(a1 + 544);
  }
  if ( v15 )
    operator delete(v15);
  v16 = *(void ***)(a1 + 528);
  v17 = *(void ***)(a1 + 520);
  if ( v16 != v17 )
  {
    do
    {
      while ( *v17 != v17 + 2 )
      {
        operator delete(*v17);
        v17 += 4;
        if ( v16 == v17 )
          goto LABEL_38;
      }
      v17 += 4;
    }
    while ( v16 != v17 );
LABEL_38:
    v17 = *(void ***)(a1 + 520);
  }
  if ( v17 )
    operator delete(v17);
  v18 = *(void ***)(a1 + 504);
  v19 = *(void ***)(a1 + 496);
  if ( v18 != v19 )
  {
    do
    {
      while ( *v19 != v19 + 2 )
      {
        operator delete(*v19);
        v19 += 4;
        if ( v18 == v19 )
          goto LABEL_44;
      }
      v19 += 4;
    }
    while ( v18 != v19 );
LABEL_44:
    v19 = *(void ***)(a1 + 496);
  }
  if ( v19 )
    operator delete(v19);
  v20 = *(void ***)(a1 + 480);
  v21 = *(void ***)(a1 + 472);
  if ( v20 != v21 )
  {
    do
    {
      while ( *v21 != v21 + 2 )
      {
        operator delete(*v21);
        v21 += 4;
        if ( v20 == v21 )
          goto LABEL_50;
      }
      v21 += 4;
    }
    while ( v20 != v21 );
LABEL_50:
    v21 = *(void ***)(a1 + 472);
  }
  if ( v21 )
    operator delete(v21);
  v22 = *(_QWORD **)(a1 + 456);
  v23 = *(_QWORD **)(a1 + 448);
  if ( v22 != v23 )
  {
    if ( &_pthread_key_create )
    {
      v24 = (volatile signed __int32 *)v23[1];
      if ( v24 )
        goto LABEL_58;
LABEL_56:
      while ( 1 )
      {
        v23 += 2;
        if ( v22 == v23 )
          break;
        while ( 1 )
        {
          v24 = (volatile signed __int32 *)v23[1];
          if ( !v24 )
            break;
LABEL_58:
          if ( _InterlockedSub(v24 + 2, 1u) )
            goto LABEL_56;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
          if ( _InterlockedSub(v24 + 3, 1u) )
            goto LABEL_56;
          v23 += 2;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 24LL))(v24);
          if ( v22 == v23 )
            goto LABEL_61;
        }
      }
    }
    else
    {
      do
      {
        v35 = (_DWORD *)v23[1];
        if ( v35 )
        {
          v36 = v35[2];
          v35[2] = v36 - 1;
          if ( v36 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v35 + 16LL))(v35);
            v34 = v35[3];
            v35[3] = v34 - 1;
            if ( v34 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v35 + 24LL))(v35);
          }
        }
        v23 += 2;
      }
      while ( v23 != v22 );
    }
LABEL_61:
    v23 = *(_QWORD **)(a1 + 448);
  }
  if ( v23 )
    operator delete(v23);
  v25 = *(void ***)(a1 + 432);
  v26 = *(void ***)(a1 + 424);
  if ( v25 != v26 )
  {
    do
    {
      while ( *v26 != v26 + 2 )
      {
        operator delete(*v26);
        v26 += 4;
        if ( v25 == v26 )
          goto LABEL_67;
      }
      v26 += 4;
    }
    while ( v25 != v26 );
LABEL_67:
    v26 = *(void ***)(a1 + 424);
  }
  if ( v26 )
    operator delete(v26);
  v27 = *(void ***)(a1 + 408);
  v28 = *(void ***)(a1 + 400);
  if ( v27 != v28 )
  {
    do
    {
      while ( *v28 != v28 + 2 )
      {
        operator delete(*v28);
        v28 += 4;
        if ( v27 == v28 )
          goto LABEL_73;
      }
      v28 += 4;
    }
    while ( v27 != v28 );
LABEL_73:
    v28 = *(void ***)(a1 + 400);
  }
  if ( v28 )
    operator delete(v28);
  v29 = *(_QWORD *)(a1 + 368);
  if ( v29 )
  {
    while ( 1 )
    {
      sub_1308D00(a1 + 352, *(_QWORD **)(v29 + 24));
      v30 = *(void ***)(v29 + 72);
      v31 = *(void ***)(v29 + 64);
      v32 = *(_QWORD *)(v29 + 16);
      if ( v30 != v31 )
      {
        do
        {
          while ( *v31 != v31 + 2 )
          {
            operator delete(*v31);
            v31 += 4;
            if ( v31 == v30 )
              goto LABEL_80;
          }
          v31 += 4;
        }
        while ( v30 != v31 );
LABEL_80:
        v31 = *(void ***)(v29 + 64);
      }
      if ( v31 )
        operator delete(v31);
      v33 = *(void **)(v29 + 32);
      if ( v33 == (void *)(v29 + 48) )
      {
        operator delete((void *)v29);
        if ( !v32 )
          break;
      }
      else
      {
        operator delete(v33);
        operator delete((void *)v29);
        if ( !v32 )
          break;
      }
      v29 = v32;
    }
  }
  v37 = *(void **)(a1 + 320);
  if ( v37 != (void *)(a1 + 336) )
    operator delete(v37);
  v38 = *(void ***)(a1 + 304);
  v39 = *(void ***)(a1 + 296);
  if ( v38 != v39 )
  {
    do
    {
      while ( *v39 != v39 + 2 )
      {
        operator delete(*v39);
        v39 += 4;
        if ( v39 == v38 )
          goto LABEL_102;
      }
      v39 += 4;
    }
    while ( v38 != v39 );
LABEL_102:
    v39 = *(void ***)(a1 + 296);
  }
  if ( v39 )
    operator delete(v39);
  v40 = *(void **)(a1 + 264);
  if ( v40 != (void *)(a1 + 280) )
    operator delete(v40);
  v41 = *(void **)(a1 + 232);
  if ( v41 != (void *)(a1 + 248) )
    operator delete(v41);
  v42 = *(void **)(a1 + 184);
  if ( v42 != (void *)(a1 + 200) )
    operator delete(v42);
  v43 = *(void **)(a1 + 152);
  if ( v43 != (void *)(a1 + 168) )
    operator delete(v43);
  v44 = *(void **)(a1 + 120);
  if ( v44 != (void *)(a1 + 136) )
    operator delete(v44);
  v45 = *(void **)(a1 + 88);
  if ( v45 != (void *)(a1 + 104) )
    operator delete(v45);
  v46 = *(void **)(a1 + 56);
  if ( v46 != (void *)(a1 + 72) )
    operator delete(v46);
  v47 = *(void ***)(a1 + 40);
  v48 = &v47[10 * *(unsigned int *)(a1 + 48)];
  if ( v47 != v48 )
  {
    do
    {
      while ( 1 )
      {
        v48 -= 10;
        if ( *v48 == v48 + 2 )
          break;
        operator delete(*v48);
        if ( v47 == v48 )
          goto LABEL_122;
      }
    }
    while ( v47 != v48 );
LABEL_122:
    v48 = *(void ***)(a1 + 40);
  }
  if ( v48 != (void **)(a1 + 56) )
    free(v48);
}
