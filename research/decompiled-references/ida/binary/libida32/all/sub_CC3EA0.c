__int64 __fastcall sub_CC3EA0(__int64 a1)
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
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  _QWORD *v15; // rdi
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rdx
  void *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r13
  char *v23; // rbx
  char *v24; // r13
  void *v25; // rdi
  void *v26; // rdi
  _QWORD *v27; // rbx
  __int64 v28; // rax
  _QWORD *v29; // r13
  void *v30; // rdi
  __int64 *v31; // r13
  __int64 v32; // r15
  void *v33; // rdi
  void *v34; // rdi
  void **v35; // r14
  void **v36; // rbx
  void *v37; // rdi
  void *v38; // rdi
  _QWORD *v39; // r14
  __int64 v40; // rax
  __int64 v41; // r15
  void *v42; // rdi
  void *v43; // rdi
  void **v44; // r13
  void **v45; // rbx
  void *v46; // rdi
  void *v47; // rdi
  __int64 *v49; // [rsp+8h] [rbp-50h]
  _QWORD *v50; // [rsp+8h] [rbp-50h]
  __m128 v51[4]; // [rsp+10h] [rbp-48h] BYREF

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
      sub_CC3E30(v51, v8, &v8[2 * *(unsigned int *)(v2 + 288)], v2 + 272, 0);
    else
      sub_CC3E30(v51, &v8[2 * *(unsigned int *)(v2 + 288)], &v8[2 * *(unsigned int *)(v2 + 288)], v2 + 272, 1);
    v9 = v51[0].m128_u64[1];
    v10 = v51[0].m128_u64[0];
    v11 = (_QWORD *)(*(_QWORD *)(v2 + 272) + 16LL * *(unsigned int *)(v2 + 288));
    sub_CC3E30(v51, v11, v11, v2 + 272, 1);
    v12 = v51[0].m128_u64[0];
    while ( v10 != v12 )
    {
      v13 = *(_QWORD **)(v10 + 8);
      if ( v13 )
      {
        operator delete();
        operator delete();
        operator delete();
        v14 = (_QWORD *)v13[61];
        if ( v14 != v13 + 63 )
          free(v14);
        v15 = (_QWORD *)v13[35];
        if ( v15 != v13 + 37 )
          free(v15);
        v16 = (_QWORD *)v13[1];
        if ( v16 != v13 + 3 )
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
    operator delete();
    operator delete();
    operator delete();
    v20 = *(void **)(v2 + 224);
    if ( v20 )
      operator delete(v20);
    v21 = *(_QWORD *)(v2 + 144);
    v22 = v21 + 8LL * *(unsigned int *)(v2 + 152);
    while ( v22 != v21 )
    {
      v21 += 8;
      operator delete();
    }
    v23 = *(char **)(v2 + 192);
    v24 = &v23[16 * *(unsigned int *)(v2 + 200)];
    if ( v23 != v24 )
    {
      do
      {
        v23 += 16;
        operator delete();
      }
      while ( v24 != v23 );
      v24 = *(char **)(v2 + 192);
    }
    if ( v24 != (char *)(v2 + 208) )
      free(v24);
    v25 = *(void **)(v2 + 144);
    if ( v25 != (void *)(v2 + 160) )
      free(v25);
    operator delete();
    v26 = *(void **)(v2 + 80);
    if ( v26 )
      operator delete(v26);
    v27 = *(_QWORD **)(v2 + 56);
    v28 = *(unsigned int *)(v2 + 72);
    if ( (_DWORD)v28 )
    {
      v29 = &v27[4 * v28];
      do
      {
        if ( *v27 != -8192 && *v27 != -4096 )
        {
          v30 = (void *)v27[1];
          if ( v30 )
            operator delete(v30);
        }
        v27 += 4;
      }
      while ( v29 != v27 );
    }
    operator delete();
    v31 = *(__int64 **)(v2 + 32);
    v49 = *(__int64 **)(v2 + 40);
    if ( v49 != v31 )
    {
      do
      {
        v32 = *v31;
        if ( *v31 )
        {
          v33 = *(void **)(v32 + 456);
          if ( v33 != (void *)(v32 + 472) )
            free(v33);
          operator delete();
          v34 = *(void **)(v32 + 384);
          if ( v34 != (void *)(v32 + 400) )
            free(v34);
          v35 = *(void ***)(v32 + 80);
          v36 = &v35[18 * *(unsigned int *)(v32 + 88)];
          if ( v35 != v36 )
          {
            do
            {
              while ( 1 )
              {
                v36 -= 18;
                if ( *v36 == v36 + 2 )
                  break;
                free(*v36);
                if ( v35 == v36 )
                  goto LABEL_55;
              }
            }
            while ( v35 != v36 );
LABEL_55:
            v36 = *(void ***)(v32 + 80);
          }
          if ( v36 != (void **)(v32 + 96) )
            free(v36);
          v37 = *(void **)(v32 + 56);
          if ( v37 )
            operator delete(v37);
          v38 = *(void **)(v32 + 32);
          if ( v38 )
            operator delete(v38);
          operator delete((void *)v32, 0x200u);
        }
        ++v31;
      }
      while ( v49 != v31 );
      v31 = *(__int64 **)(v2 + 32);
    }
    if ( v31 )
      operator delete(v31);
    v39 = *(_QWORD **)(v2 + 8);
    v40 = *(unsigned int *)(v2 + 24);
    if ( (_DWORD)v40 )
    {
      v50 = &v39[2 * v40];
      do
      {
        if ( *v39 != -4096 && *v39 != -8192 )
        {
          v41 = v39[1];
          if ( v41 )
          {
            v42 = *(void **)(v41 + 456);
            if ( v42 != (void *)(v41 + 472) )
              free(v42);
            operator delete();
            v43 = *(void **)(v41 + 384);
            if ( v43 != (void *)(v41 + 400) )
              free(v43);
            v44 = *(void ***)(v41 + 80);
            v45 = &v44[18 * *(unsigned int *)(v41 + 88)];
            if ( v44 != v45 )
            {
              do
              {
                while ( 1 )
                {
                  v45 -= 18;
                  if ( *v45 == v45 + 2 )
                    break;
                  free(*v45);
                  if ( v44 == v45 )
                    goto LABEL_79;
                }
              }
              while ( v44 != v45 );
LABEL_79:
              v45 = *(void ***)(v41 + 80);
            }
            if ( v45 != (void **)(v41 + 96) )
              free(v45);
            v46 = *(void **)(v41 + 56);
            if ( v46 )
              operator delete(v46);
            v47 = *(void **)(v41 + 32);
            if ( v47 )
              operator delete(v47);
            operator delete((void *)v41, 0x200u);
          }
        }
        v39 += 2;
      }
      while ( v50 != v39 );
    }
    operator delete();
    operator delete((void *)v2, 0x148u);
  }
  return sub_DFD840(a1 + 8);
}

