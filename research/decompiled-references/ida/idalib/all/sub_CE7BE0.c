__int64 __fastcall sub_CE7BE0(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // r14
  _QWORD *i; // r13
  __int64 v5; // rbx
  __int64 v6; // rdx
  void (__fastcall *v7)(_QWORD, __int64); // rax
  _QWORD *v8; // rsi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  _QWORD *v11; // rdx
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rdx
  void *v20; // rdi
  __int64 *v21; // rbx
  __int64 *v22; // r13
  __int64 j; // rax
  __int64 v24; // rsi
  unsigned int v25; // ecx
  __int64 v26; // rdi
  __int64 *v27; // rbx
  __int64 *v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rdi
  void *v31; // rdi
  void *v32; // rdi
  _QWORD *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rsi
  _QWORD *v36; // r13
  void *v37; // rdi
  __int64 *v38; // r13
  __int64 v39; // r15
  void *v40; // rdi
  void *v41; // rdi
  void **v42; // r14
  void **v43; // rbx
  void *v44; // rdi
  void *v45; // rdi
  _QWORD *v46; // r14
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // r15
  void *v50; // rdi
  void *v51; // rdi
  void **v52; // r13
  void **v53; // rbx
  void *v54; // rdi
  void *v55; // rdi
  __int64 *v57; // [rsp+8h] [rbp-50h]
  _QWORD *v58; // [rsp+8h] [rbp-50h]
  __m128 v59[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = *(_QWORD **)(v2 + 232);
    for ( i = *(_QWORD **)(v2 + 224); v3 != i; ++i )
    {
      v5 = *i;
      if ( *(_BYTE *)(*i + 27LL) )
      {
        v6 = *(_QWORD *)(v5 + 32);
        v7 = *(void (__fastcall **)(_QWORD, __int64))(v6 + 72);
        if ( v7 )
          v7(*i, v5 + *(unsigned int *)(v6 + 24) + 40);
        *(_BYTE *)(v5 + 27) = 0;
      }
    }
    v8 = *(_QWORD **)(v2 + 272);
    if ( *(_DWORD *)(v2 + 280) )
      sub_CE7B70(v59, v8, &v8[2 * *(unsigned int *)(v2 + 288)], v2 + 272, 0);
    else
      sub_CE7B70(v59, &v8[2 * *(unsigned int *)(v2 + 288)], &v8[2 * *(unsigned int *)(v2 + 288)], v2 + 272, 1);
    v9 = v59[0].m128_u64[1];
    v10 = v59[0].m128_u64[0];
    v11 = (_QWORD *)(*(_QWORD *)(v2 + 272) + 16LL * *(unsigned int *)(v2 + 288));
    sub_CE7B70(v59, v11, v11, v2 + 272, 1);
    v12 = v59[0].m128_u64[0];
    while ( v10 != v12 )
    {
      v13 = *(_QWORD *)(v10 + 8);
      if ( v13 )
      {
        operator delete(*(_QWORD *)(v13 + 616), 16LL * *(unsigned int *)(v13 + 632), 8);
        operator delete(*(_QWORD *)(v13 + 592), 16LL * *(unsigned int *)(v13 + 608), 8);
        operator delete(*(_QWORD *)(v13 + 568), 16LL * *(unsigned int *)(v13 + 584), 8);
        v14 = *(void **)(v13 + 488);
        if ( v14 != (void *)(v13 + 504) )
          free(v14);
        v15 = *(void **)(v13 + 280);
        if ( v15 != (void *)(v13 + 296) )
          free(v15);
        v16 = *(void **)(v13 + 8);
        if ( v16 != (void *)(v13 + 24) )
          free(v16);
      }
      if ( v10 + 16 != v9 )
      {
        v17 = *(_QWORD *)(v10 + 16);
        if ( v17 != -8192 && v17 != -4096 )
        {
          v10 += 16LL;
          continue;
        }
        v18 = (__int64 *)(v10 + 32);
        while ( 1 )
        {
          v10 = (unsigned __int64)v18;
          if ( v18 == (__int64 *)v9 )
            break;
          v19 = *v18;
          v18 += 2;
          if ( v19 != -4096 && v19 != -8192 )
            goto LABEL_25;
        }
      }
      v10 = v9;
LABEL_25:
      ;
    }
    operator delete(*(_QWORD *)(v2 + 296), 16LL * *(unsigned int *)(v2 + 312), 8);
    operator delete(*(_QWORD *)(v2 + 272), 16LL * *(unsigned int *)(v2 + 288), 8);
    operator delete(*(_QWORD *)(v2 + 248), 16LL * *(unsigned int *)(v2 + 264), 8);
    v20 = *(void **)(v2 + 224);
    if ( v20 )
      operator delete(v20);
    v21 = *(__int64 **)(v2 + 144);
    v22 = &v21[*(unsigned int *)(v2 + 152)];
    if ( v21 != v22 )
    {
      for ( j = *(_QWORD *)(v2 + 144); ; j = *(_QWORD *)(v2 + 144) )
      {
        v24 = 0x40000000000LL;
        v25 = (unsigned int)(((__int64)v21 - j) >> 3) >> 7;
        if ( v25 <= 0x1D )
          v24 = 4096LL << v25;
        v26 = *v21++;
        operator delete(v26, v24, 16);
        if ( v22 == v21 )
          break;
      }
    }
    v27 = *(__int64 **)(v2 + 192);
    v28 = &v27[2 * *(unsigned int *)(v2 + 200)];
    if ( v27 != v28 )
    {
      do
      {
        v29 = v27[1];
        v30 = *v27;
        v27 += 2;
        operator delete(v30, v29, 16);
      }
      while ( v28 != v27 );
      v28 = *(__int64 **)(v2 + 192);
    }
    if ( v28 != (__int64 *)(v2 + 208) )
      free(v28);
    v31 = *(void **)(v2 + 144);
    if ( v31 != (void *)(v2 + 160) )
      free(v31);
    operator delete(*(_QWORD *)(v2 + 104), 16LL * *(unsigned int *)(v2 + 120), 8);
    v32 = *(void **)(v2 + 80);
    if ( v32 )
      operator delete(v32);
    v33 = *(_QWORD **)(v2 + 56);
    v34 = *(unsigned int *)(v2 + 72);
    v35 = 4 * v34;
    if ( (_DWORD)v34 )
    {
      v36 = &v33[v35];
      do
      {
        if ( *v33 != -8192 && *v33 != -4096 )
        {
          v37 = (void *)v33[1];
          if ( v37 )
            operator delete(v37);
        }
        v33 += 4;
      }
      while ( v36 != v33 );
      v33 = *(_QWORD **)(v2 + 56);
      v35 = 4LL * *(unsigned int *)(v2 + 72);
    }
    operator delete(v33, v35 * 8, 8);
    v38 = *(__int64 **)(v2 + 32);
    v57 = *(__int64 **)(v2 + 40);
    if ( v57 != v38 )
    {
      do
      {
        v39 = *v38;
        if ( *v38 )
        {
          v40 = *(void **)(v39 + 456);
          if ( v40 != (void *)(v39 + 472) )
            free(v40);
          operator delete(*(_QWORD *)(v39 + 432), 24LL * *(unsigned int *)(v39 + 448), 8);
          v41 = *(void **)(v39 + 384);
          if ( v41 != (void *)(v39 + 400) )
            free(v41);
          v42 = *(void ***)(v39 + 80);
          v43 = &v42[18 * *(unsigned int *)(v39 + 88)];
          if ( v42 != v43 )
          {
            do
            {
              while ( 1 )
              {
                v43 -= 18;
                if ( *v43 == v43 + 2 )
                  break;
                free(*v43);
                if ( v42 == v43 )
                  goto LABEL_60;
              }
            }
            while ( v42 != v43 );
LABEL_60:
            v43 = *(void ***)(v39 + 80);
          }
          if ( v43 != (void **)(v39 + 96) )
            free(v43);
          v44 = *(void **)(v39 + 56);
          if ( v44 )
            operator delete(v44);
          v45 = *(void **)(v39 + 32);
          if ( v45 )
            operator delete(v45);
          operator delete((void *)v39, 0x200u);
        }
        ++v38;
      }
      while ( v57 != v38 );
      v38 = *(__int64 **)(v2 + 32);
    }
    if ( v38 )
      operator delete(v38);
    v46 = *(_QWORD **)(v2 + 8);
    v47 = *(unsigned int *)(v2 + 24);
    v48 = 2 * v47;
    if ( (_DWORD)v47 )
    {
      v58 = &v46[v48];
      do
      {
        if ( *v46 != -4096 && *v46 != -8192 )
        {
          v49 = v46[1];
          if ( v49 )
          {
            v50 = *(void **)(v49 + 456);
            if ( v50 != (void *)(v49 + 472) )
              free(v50);
            operator delete(*(_QWORD *)(v49 + 432), 24LL * *(unsigned int *)(v49 + 448), 8);
            v51 = *(void **)(v49 + 384);
            if ( v51 != (void *)(v49 + 400) )
              free(v51);
            v52 = *(void ***)(v49 + 80);
            v53 = &v52[18 * *(unsigned int *)(v49 + 88)];
            if ( v52 != v53 )
            {
              do
              {
                while ( 1 )
                {
                  v53 -= 18;
                  if ( *v53 == v53 + 2 )
                    break;
                  free(*v53);
                  if ( v52 == v53 )
                    goto LABEL_84;
                }
              }
              while ( v52 != v53 );
LABEL_84:
              v53 = *(void ***)(v49 + 80);
            }
            if ( v53 != (void **)(v49 + 96) )
              free(v53);
            v54 = *(void **)(v49 + 56);
            if ( v54 )
              operator delete(v54);
            v55 = *(void **)(v49 + 32);
            if ( v55 )
              operator delete(v55);
            operator delete((void *)v49, 0x200u);
          }
        }
        v46 += 2;
      }
      while ( v58 != v46 );
      v46 = *(_QWORD **)(v2 + 8);
      v48 = 2LL * *(unsigned int *)(v2 + 24);
    }
    operator delete(v46, v48 * 8, 8);
    operator delete((void *)v2, 0x148u);
  }
  return sub_E21580(a1 + 8);
}
