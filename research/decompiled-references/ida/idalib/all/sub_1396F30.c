void __fastcall sub_1396F30(__int64 a1)
{
  void *v2; // rbp
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r14
  _QWORD *v10; // rbp
  _QWORD *v11; // r15
  _QWORD *v12; // r12
  volatile signed __int32 *v13; // r13
  _QWORD *v14; // r14
  _QWORD *v15; // rbp
  _QWORD *v16; // r15
  _QWORD *v17; // r12
  volatile signed __int32 *v18; // r13
  _QWORD *v19; // r13
  _QWORD *v20; // rbp
  volatile signed __int32 *v21; // r12
  void *v22; // rdi
  void *v23; // rdi
  void **v24; // r12
  void **v25; // rbp
  void **v26; // r12
  void **v27; // rbp
  void **v28; // r12
  void **v29; // rbp
  void **v30; // r12
  void **v31; // rbp
  void **v32; // r12
  void **v33; // rbp
  void *v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  int v37; // eax
  _DWORD *v38; // r13
  int v39; // eax
  int v40; // eax
  _DWORD *v41; // r13
  int v42; // eax
  int v43; // eax
  _DWORD *v44; // r12
  int v45; // eax
  _QWORD *v46; // rbp
  int v47; // r12d
  __int64 v48; // rax

  v2 = *(void **)(a1 + 2424);
  if ( v2 )
  {
    sub_FCAA60(*(_QWORD **)(a1 + 2424));
    operator delete(v2, 0x3B90u);
  }
  operator delete(*(_QWORD *)(a1 + 2392), 32LL * *(unsigned int *)(a1 + 2408), 8);
  operator delete(*(_QWORD *)(a1 + 2368), 16LL * *(unsigned int *)(a1 + 2384), 8);
  operator delete(*(_QWORD *)(a1 + 2344), 4LL * *(unsigned int *)(a1 + 2360), 4);
  v3 = *(void **)(a1 + 2064);
  if ( v3 != (void *)(a1 + 2088) )
    free(v3);
  v4 = *(void **)(a1 + 1536);
  if ( v4 != (void *)(a1 + 1552) )
    free(v4);
  operator delete(*(_QWORD *)(a1 + 1512), 8LL * *(unsigned int *)(a1 + 1528), 4);
  v5 = *(void **)(a1 + 1480);
  if ( v5 != (void *)(a1 + 1496) )
    operator delete(v5);
  if ( *(_DWORD *)(a1 + 1376) )
  {
    v46 = *(_QWORD **)(a1 + 1352);
    v47 = *(_DWORD *)(a1 + 1380);
    v48 = v46[1];
    if ( (unsigned __int64)(v48 + 4) > v46[2] )
    {
      sub_2236E10(*(_QWORD *)(a1 + 1352), v46 + 3, v48 + 4, 1);
      v48 = v46[1];
    }
    *(_DWORD *)(*v46 + v48) = v47;
    v46[1] += 4LL;
    *(_QWORD *)(a1 + 1376) = 0;
  }
  v6 = *(_QWORD *)(a1 + 1360);
  if ( v6 )
  {
    v7 = *(_QWORD **)(a1 + 1352);
    v8 = v7[1];
    if ( v8 )
    {
      sub_227BF10(v6, *v7, v8);
      *(_QWORD *)(*(_QWORD *)(a1 + 1352) + 8LL) = 0;
    }
  }
  v9 = *(_QWORD **)(a1 + 1464);
  v10 = *(_QWORD **)(a1 + 1456);
  if ( v9 != v10 )
  {
    do
    {
      while ( 1 )
      {
        v11 = (_QWORD *)v10[2];
        v12 = (_QWORD *)v10[1];
        if ( v11 != v12 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              while ( 1 )
              {
                v13 = (volatile signed __int32 *)v12[1];
                if ( v13 )
                {
                  if ( !_InterlockedSub(v13 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
                    if ( !_InterlockedSub(v13 + 3, 1u) )
                      break;
                  }
                }
                v12 += 2;
                if ( v11 == v12 )
                  goto LABEL_22;
              }
              v12 += 2;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 24LL))(v13);
            }
            while ( v11 != v12 );
          }
          else
          {
            do
            {
              v38 = (_DWORD *)v12[1];
              if ( v38 )
              {
                v39 = v38[2];
                v38[2] = v39 - 1;
                if ( v39 == 1 )
                {
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v38 + 16LL))(v38);
                  v37 = v38[3];
                  v38[3] = v37 - 1;
                  if ( v37 == 1 )
                    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v38 + 24LL))(v38);
                }
              }
              v12 += 2;
            }
            while ( v11 != v12 );
          }
LABEL_22:
          v12 = (_QWORD *)v10[1];
        }
        if ( !v12 )
          break;
        v10 += 4;
        operator delete(v12);
        if ( v9 == v10 )
        {
          v10 = *(_QWORD **)(a1 + 1456);
          goto LABEL_26;
        }
      }
      v10 += 4;
    }
    while ( v9 != v10 );
    v10 = *(_QWORD **)(a1 + 1456);
  }
LABEL_26:
  if ( v10 )
    operator delete(v10);
  v14 = *(_QWORD **)(a1 + 1440);
  v15 = *(_QWORD **)(a1 + 1432);
  if ( v14 != v15 )
  {
    do
    {
      while ( 1 )
      {
        v16 = (_QWORD *)v15[3];
        v17 = (_QWORD *)v15[2];
        if ( v16 != v17 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              while ( 1 )
              {
                v18 = (volatile signed __int32 *)v17[1];
                if ( v18 )
                {
                  if ( !_InterlockedSub(v18 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
                    if ( !_InterlockedSub(v18 + 3, 1u) )
                      break;
                  }
                }
                v17 += 2;
                if ( v16 == v17 )
                  goto LABEL_37;
              }
              v17 += 2;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 24LL))(v18);
            }
            while ( v16 != v17 );
          }
          else
          {
            do
            {
              v41 = (_DWORD *)v17[1];
              if ( v41 )
              {
                v42 = v41[2];
                v41[2] = v42 - 1;
                if ( v42 == 1 )
                {
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v41 + 16LL))(v41);
                  v40 = v41[3];
                  v41[3] = v40 - 1;
                  if ( v40 == 1 )
                    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v41 + 24LL))(v41);
                }
              }
              v17 += 2;
            }
            while ( v16 != v17 );
          }
LABEL_37:
          v17 = (_QWORD *)v15[2];
        }
        if ( !v17 )
          break;
        v15 += 5;
        operator delete(v17);
        if ( v14 == v15 )
          goto LABEL_40;
      }
      v15 += 5;
    }
    while ( v14 != v15 );
LABEL_40:
    v15 = *(_QWORD **)(a1 + 1432);
  }
  if ( v15 )
    operator delete(v15);
  v19 = *(_QWORD **)(a1 + 1400);
  v20 = *(_QWORD **)(a1 + 1392);
  if ( v19 != v20 )
  {
    if ( &_pthread_key_create )
    {
      v21 = (volatile signed __int32 *)v20[1];
      if ( v21 )
        goto LABEL_48;
LABEL_46:
      while ( 1 )
      {
        v20 += 2;
        if ( v19 == v20 )
          break;
        while ( 1 )
        {
          v21 = (volatile signed __int32 *)v20[1];
          if ( !v21 )
            break;
LABEL_48:
          if ( _InterlockedSub(v21 + 2, 1u) )
            goto LABEL_46;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          if ( _InterlockedSub(v21 + 3, 1u) )
            goto LABEL_46;
          v20 += 2;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 24LL))(v21);
          if ( v19 == v20 )
            goto LABEL_51;
        }
      }
    }
    else
    {
      do
      {
        v44 = (_DWORD *)v20[1];
        if ( v44 )
        {
          v45 = v44[2];
          v44[2] = v45 - 1;
          if ( v45 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v44 + 16LL))(v44);
            v43 = v44[3];
            v44[3] = v43 - 1;
            if ( v43 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v44 + 24LL))(v44);
          }
        }
        v20 += 2;
      }
      while ( v19 != v20 );
    }
LABEL_51:
    v20 = *(_QWORD **)(a1 + 1392);
  }
  if ( v20 )
    operator delete(v20);
  v22 = *(void **)(a1 + 1328);
  if ( v22 != (void *)(a1 + 1352) )
    free(v22);
  v23 = *(void **)(a1 + 280);
  if ( v23 != (void *)(a1 + 304) )
    free(v23);
  v24 = *(void ***)(a1 + 264);
  v25 = *(void ***)(a1 + 256);
  if ( v24 != v25 )
  {
    do
    {
      while ( *v25 != v25 + 2 )
      {
        operator delete(*v25);
        v25 += 4;
        if ( v25 == v24 )
          goto LABEL_61;
      }
      v25 += 4;
    }
    while ( v24 != v25 );
LABEL_61:
    v25 = *(void ***)(a1 + 256);
  }
  if ( v25 )
    operator delete(v25);
  v26 = *(void ***)(a1 + 240);
  v27 = *(void ***)(a1 + 232);
  if ( v26 != v27 )
  {
    do
    {
      while ( *v27 != v27 + 2 )
      {
        operator delete(*v27);
        v27 += 4;
        if ( v27 == v26 )
          goto LABEL_67;
      }
      v27 += 4;
    }
    while ( v26 != v27 );
LABEL_67:
    v27 = *(void ***)(a1 + 232);
  }
  if ( v27 )
    operator delete(v27);
  v28 = *(void ***)(a1 + 216);
  v29 = *(void ***)(a1 + 208);
  if ( v28 != v29 )
  {
    do
    {
      while ( *v29 != v29 + 2 )
      {
        operator delete(*v29);
        v29 += 4;
        if ( v28 == v29 )
          goto LABEL_73;
      }
      v29 += 4;
    }
    while ( v28 != v29 );
LABEL_73:
    v29 = *(void ***)(a1 + 208);
  }
  if ( v29 )
    operator delete(v29);
  v30 = *(void ***)(a1 + 192);
  v31 = *(void ***)(a1 + 184);
  if ( v30 != v31 )
  {
    do
    {
      while ( *v31 != v31 + 2 )
      {
        operator delete(*v31);
        v31 += 4;
        if ( v31 == v30 )
          goto LABEL_79;
      }
      v31 += 4;
    }
    while ( v30 != v31 );
LABEL_79:
    v31 = *(void ***)(a1 + 184);
  }
  if ( v31 )
    operator delete(v31);
  v32 = *(void ***)(a1 + 168);
  v33 = *(void ***)(a1 + 160);
  if ( v32 != v33 )
  {
    do
    {
      while ( *v33 != v33 + 2 )
      {
        operator delete(*v33);
        v33 += 4;
        if ( v32 == v33 )
          goto LABEL_85;
      }
      v33 += 4;
    }
    while ( v32 != v33 );
LABEL_85:
    v33 = *(void ***)(a1 + 160);
  }
  if ( v33 )
    operator delete(v33);
  v34 = *(void **)(a1 + 128);
  if ( v34 != (void *)(a1 + 144) )
    operator delete(v34);
  v35 = *(void **)(a1 + 96);
  if ( v35 != (void *)(a1 + 112) )
    operator delete(v35);
  v36 = *(void **)(a1 + 64);
  if ( v36 != (void *)(a1 + 80) )
    operator delete(v36);
}
