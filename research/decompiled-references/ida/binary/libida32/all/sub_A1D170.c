void __fastcall sub_A1D170(__int64 a1)
{
  char *v2; // r12
  char *v3; // rbx
  char *v4; // rdi
  void *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  char *v8; // r13
  char *v9; // r12
  __int64 v10; // rdi
  void *v11; // rdi
  _QWORD *v12; // r13
  _QWORD *v13; // r12
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  _QWORD *v23; // r12
  _QWORD *v24; // rbx
  void *v25; // rdi
  void *v26; // rdi
  _QWORD *v27; // r13
  _QWORD *v28; // rbx
  void *v29; // rdi
  _QWORD *v30; // r14
  _QWORD *v31; // r12
  void *v32; // rdi
  void *v33; // rdi
  _QWORD *v34; // r13
  _QWORD *v35; // rbx
  void *v36; // rdi
  _QWORD *v37; // r14
  _QWORD *v38; // r12
  void *v39; // rdi
  void *v40; // rdi

  v2 = *(char **)(a1 + 176);
  v3 = *(char **)(a1 + 168);
  if ( v2 != v3 )
  {
    do
    {
      v4 = v3 + 64;
      v3 += 256;
      sub_A1D170(v4);
    }
    while ( v2 != v3 );
    v3 = *(char **)(a1 + 168);
  }
  if ( v3 )
    operator delete(v3);
  v5 = *(void **)(a1 + 144);
  if ( v5 )
    operator delete(v5);
  v6 = *(_QWORD *)(a1 + 128);
  v7 = *(_QWORD *)(a1 + 120);
  if ( v6 != v7 )
  {
    do
    {
      v8 = *(char **)(v7 + 392);
      v9 = *(char **)(v7 + 384);
      if ( v8 != v9 )
      {
        do
        {
          v10 = (__int64)v9;
          v9 += 408;
          sub_A1CA30(v10);
        }
        while ( v8 != v9 );
        v9 = *(char **)(v7 + 384);
      }
      if ( v9 )
        operator delete(v9);
      v11 = *(void **)(v7 + 360);
      if ( v11 )
        operator delete(v11);
      v12 = *(_QWORD **)(v7 + 344);
      v13 = *(_QWORD **)(v7 + 336);
      if ( v12 != v13 )
      {
        do
        {
          while ( 1 )
          {
            v14 = (void *)v13[5];
            if ( v14 )
              operator delete(v14);
            v15 = (void *)v13[2];
            if ( !v15 )
              break;
            operator delete(v15);
            v13 += 22;
            if ( v12 == v13 )
              goto LABEL_21;
          }
          v13 += 22;
        }
        while ( v12 != v13 );
LABEL_21:
        v13 = *(_QWORD **)(v7 + 336);
      }
      if ( v13 )
        operator delete(v13);
      if ( *(_BYTE *)(v7 + 304) )
      {
        v16 = *(void **)(v7 + 272);
        if ( v16 != (void *)(v7 + 288) )
          operator delete(v16);
      }
      if ( *(_BYTE *)(v7 + 264) )
      {
        v17 = *(void **)(v7 + 232);
        if ( v17 != (void *)(v7 + 248) )
          operator delete(v17);
      }
      if ( *(_BYTE *)(v7 + 224) )
      {
        v18 = *(void **)(v7 + 192);
        if ( v18 != (void *)(v7 + 208) )
          operator delete(v18);
      }
      if ( *(_BYTE *)(v7 + 184) )
      {
        v19 = *(void **)(v7 + 152);
        if ( v19 != (void *)(v7 + 168) )
          operator delete(v19);
      }
      if ( *(_BYTE *)(v7 + 144) )
      {
        v20 = *(void **)(v7 + 112);
        if ( v20 != (void *)(v7 + 128) )
          operator delete(v20);
      }
      v7 += 408;
    }
    while ( v6 != v7 );
    v7 = *(_QWORD *)(a1 + 120);
  }
  if ( v7 )
    operator delete((void *)v7);
  v21 = *(void **)(a1 + 96);
  if ( v21 )
    operator delete(v21);
  v22 = *(void **)(a1 + 72);
  if ( v22 )
    operator delete(v22);
  v23 = *(_QWORD **)(a1 + 56);
  v24 = *(_QWORD **)(a1 + 48);
  if ( v23 != v24 )
  {
    do
    {
      while ( 1 )
      {
        v25 = (void *)v24[5];
        if ( v25 )
          operator delete(v25);
        v26 = (void *)v24[2];
        if ( !v26 )
          break;
        operator delete(v26);
        v24 += 22;
        if ( v23 == v24 )
          goto LABEL_52;
      }
      v24 += 22;
    }
    while ( v23 != v24 );
LABEL_52:
    v24 = *(_QWORD **)(a1 + 48);
  }
  if ( v24 )
    operator delete(v24);
  v27 = *(_QWORD **)(a1 + 32);
  v28 = *(_QWORD **)(a1 + 24);
  if ( v27 != v28 )
  {
    do
    {
      while ( 1 )
      {
        v29 = (void *)v28[19];
        if ( v29 )
          operator delete(v29);
        v30 = (_QWORD *)v28[17];
        v31 = (_QWORD *)v28[16];
        if ( v30 != v31 )
        {
          do
          {
            while ( 1 )
            {
              v32 = (void *)v31[6];
              if ( v32 )
                operator delete(v32);
              v33 = (void *)v31[3];
              if ( !v33 )
                break;
              operator delete(v33);
              v31 += 22;
              if ( v30 == v31 )
                goto LABEL_63;
            }
            v31 += 22;
          }
          while ( v30 != v31 );
LABEL_63:
          v31 = (_QWORD *)v28[16];
        }
        if ( !v31 )
          break;
        v28 += 22;
        operator delete(v31);
        if ( v27 == v28 )
          goto LABEL_66;
      }
      v28 += 22;
    }
    while ( v27 != v28 );
LABEL_66:
    v28 = *(_QWORD **)(a1 + 24);
  }
  if ( v28 )
    operator delete(v28);
  v34 = *(_QWORD **)(a1 + 8);
  v35 = *(_QWORD **)a1;
  if ( v34 != *(_QWORD **)a1 )
  {
    do
    {
      while ( 1 )
      {
        v36 = (void *)v35[19];
        if ( v36 )
          operator delete(v36);
        v37 = (_QWORD *)v35[17];
        v38 = (_QWORD *)v35[16];
        if ( v37 != v38 )
        {
          do
          {
            while ( 1 )
            {
              v39 = (void *)v38[6];
              if ( v39 )
                operator delete(v39);
              v40 = (void *)v38[3];
              if ( !v40 )
                break;
              operator delete(v40);
              v38 += 22;
              if ( v38 == v37 )
                goto LABEL_77;
            }
            v38 += 22;
          }
          while ( v37 != v38 );
LABEL_77:
          v38 = (_QWORD *)v35[16];
        }
        if ( !v38 )
          break;
        v35 += 22;
        operator delete(v38);
        if ( v34 == v35 )
          goto LABEL_80;
      }
      v35 += 22;
    }
    while ( v34 != v35 );
LABEL_80:
    v35 = *(_QWORD **)a1;
  }
  if ( v35 )
    operator delete(v35);
}

