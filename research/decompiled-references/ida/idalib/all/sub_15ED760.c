void __fastcall sub_15ED760(__int64 a1)
{
  __int64 *v2; // rbp
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 *v5; // r12
  __int64 v6; // rax
  __int64 *v7; // rdi
  void *v8; // rdi
  unsigned __int64 *v9; // r13
  unsigned __int64 *v10; // r12
  unsigned __int64 v11; // rdi
  void **v12; // rdi
  void **v13; // rbp
  void **v14; // rdi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  _QWORD *v17; // r15
  _QWORD *v18; // rbp
  _QWORD *v19; // rdi
  void *v20; // rdi
  void **v21; // rbp
  void **v22; // r15
  __int64 v23; // rdi
  void **v24; // rdi
  void **v25; // rbp
  void **v26; // rdi
  void *v27; // rdi
  void *v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  __int64 v31; // rdx

  *(_QWORD *)a1 = &off_2BC63E0;
  if ( (*(_BYTE *)(a1 + 760) & 1) == 0 )
  {
    v2 = *(__int64 **)(a1 + 768);
    v3 = *(unsigned int *)(a1 + 776);
    v4 = v3 << 6;
    if ( (_DWORD)v3 )
    {
      v5 = (__int64 *)((char *)v2 + v4);
      if ( (__int64 *)((char *)v2 + v4) != v2 )
      {
        v6 = *v2;
        if ( !*v2 )
          goto LABEL_10;
        goto LABEL_5;
      }
    }
    goto LABEL_68;
  }
  v2 = (__int64 *)(a1 + 768);
  v5 = (__int64 *)(a1 + 1280);
  do
  {
    while ( 1 )
    {
      v6 = *v2;
      if ( *v2 )
      {
LABEL_5:
        if ( v6 != 4 )
          break;
      }
LABEL_10:
      if ( v2[1] )
        break;
      v2 += 8;
      if ( v2 == v5 )
        goto LABEL_12;
    }
    v7 = (__int64 *)v2[2];
    if ( v7 != v2 + 4 )
      free(v7);
    v2 += 8;
  }
  while ( v2 != v5 );
LABEL_12:
  if ( (*(_BYTE *)(a1 + 760) & 1) != 0 )
    goto LABEL_13;
  v2 = *(__int64 **)(a1 + 768);
  v4 = (unsigned __int64)*(unsigned int *)(a1 + 776) << 6;
LABEL_68:
  operator delete(v2, v4, 8);
LABEL_13:
  v8 = *(void **)(a1 + 712);
  if ( v8 != (void *)(a1 + 728) )
    free(v8);
  if ( !*(_BYTE *)(a1 + 644) )
    free(*(void **)(a1 + 624));
  v9 = *(unsigned __int64 **)(a1 + 448);
  v10 = &v9[5 * *(unsigned int *)(a1 + 456)];
  if ( v9 != v10 )
  {
    do
    {
      v10 -= 5;
      v11 = v10[4];
      if ( v11 )
      {
        if ( (v11 & 4) != 0 )
        {
          v12 = (void **)(v11 & 0xFFFFFFFFFFFFFFF8LL);
          v13 = v12;
          if ( v12 )
          {
            v14 = (void **)*v12;
            if ( v14 != v13 + 2 )
              free(v14);
            operator delete(v13, 0x30u);
          }
        }
      }
      v15 = *v10;
      if ( *v10 )
      {
        v16 = v10[1];
        if ( v16 )
        {
          if ( v15 < v16 || v15 > v16 + 14848 )
          {
            v17 = *(_QWORD **)(v15 + 528);
            v18 = &v17[8 * (unsigned __int64)*(unsigned int *)(v15 + 536)];
            if ( v17 != v18 )
            {
              do
              {
                while ( 1 )
                {
                  v18 -= 8;
                  v19 = (_QWORD *)v18[3];
                  if ( v19 == v18 + 5 )
                    break;
                  operator delete(v19);
                  if ( v17 == v18 )
                    goto LABEL_30;
                }
              }
              while ( v17 != v18 );
LABEL_30:
              v18 = *(_QWORD **)(v15 + 528);
            }
            if ( v18 != (_QWORD *)(v15 + 544) )
              free(v18);
            v20 = *(void **)(v15 + 416);
            if ( v20 != (void *)(v15 + 432) )
              free(v20);
            v21 = (void **)(v15 + 384);
            v22 = (void **)(v15 + 64);
            do
            {
              while ( *v21 != v21 + 2 )
              {
                operator delete(*v21);
                v21 -= 4;
                if ( v21 == v22 )
                  goto LABEL_38;
              }
              v21 -= 4;
            }
            while ( v22 != v21 );
LABEL_38:
            operator delete((void *)v15, 0x3A0u);
          }
          else
          {
            v31 = *(unsigned int *)(v16 + 14976);
            *(_DWORD *)(v16 + 14976) = v31 + 1;
            *(_QWORD *)(v16 + 8 * v31 + 14848) = v15;
          }
        }
      }
    }
    while ( v9 != v10 );
    v10 = *(unsigned __int64 **)(a1 + 448);
  }
  if ( v10 != (unsigned __int64 *)(a1 + 464) )
    free(v10);
  v23 = *(_QWORD *)(a1 + 440);
  if ( v23 )
  {
    if ( (v23 & 4) != 0 )
    {
      v24 = (void **)(v23 & 0xFFFFFFFFFFFFFFF8LL);
      v25 = v24;
      if ( v24 )
      {
        v26 = (void **)*v24;
        if ( v26 != v25 + 2 )
          free(v26);
        operator delete(v25, 0x30u);
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 428) )
    free(*(void **)(a1 + 408));
  v27 = *(void **)(a1 + 360);
  if ( v27 != (void *)(a1 + 376) )
    free(v27);
  v28 = *(void **)(a1 + 264);
  if ( v28 != (void *)(a1 + 280) )
    free(v28);
  if ( (*(_BYTE *)(a1 + 192) & 1) == 0 )
    operator delete(*(_QWORD *)(a1 + 200), 16LL * *(unsigned int *)(a1 + 208), 8);
  v29 = *(void **)(a1 + 136);
  if ( v29 != (void *)(a1 + 152) )
    free(v29);
  v30 = *(void **)(a1 + 56);
  if ( v30 != (void *)(a1 + 72) )
    free(v30);
}
