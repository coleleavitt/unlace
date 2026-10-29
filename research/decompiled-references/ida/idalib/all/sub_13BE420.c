void __fastcall sub_13BE420(__int64 a1)
{
  __int64 *v2; // r12
  __int64 *v3; // rbp
  __int64 v4; // rdi
  __int64 *v5; // r12
  __int64 *v6; // rbp
  __int64 v7; // rdi
  __int64 *v8; // r12
  __int64 *v9; // rbp
  __int64 v10; // rdi
  __int64 *v11; // r12
  __int64 *v12; // rbp
  __int64 v13; // rdi
  void *v14; // rdi
  __int64 v15; // rbp
  char *v16; // rdi
  int v17; // eax
  __int64 v18; // r12
  __int64 v19; // r14
  _QWORD *v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // r15
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  int v25; // eax
  char *v26; // rdi
  __int64 v27; // r12
  __int64 v28; // r13
  _QWORD *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // [rsp+0h] [rbp-48h]
  __int64 v33; // [rsp+8h] [rbp-40h]

  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)a1 = &off_2C44458;
  *(_QWORD *)(a1 + 16) = off_2C444B0;
  sub_13BD8D0(a1);
  operator delete(*(_QWORD *)(a1 + 256), 24LL * *(unsigned int *)(a1 + 272), 8);
  operator delete(*(_QWORD *)(a1 + 232), 16LL * *(unsigned int *)(a1 + 248), 8);
  v2 = *(__int64 **)(a1 + 216);
  v3 = *(__int64 **)(a1 + 208);
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v4 = *v3;
        if ( !*v3 )
          break;
        ++v3;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        if ( v2 == v3 )
          goto LABEL_4;
      }
      ++v3;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = *(__int64 **)(a1 + 208);
  }
  if ( v3 )
    operator delete(v3);
  v5 = *(__int64 **)(a1 + 192);
  v6 = *(__int64 **)(a1 + 184);
  if ( v5 != v6 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *v6;
        if ( !*v6 )
          break;
        ++v6;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        if ( v5 == v6 )
          goto LABEL_10;
      }
      ++v6;
    }
    while ( v5 != v6 );
LABEL_10:
    v6 = *(__int64 **)(a1 + 184);
  }
  if ( v6 )
    operator delete(v6);
  v8 = *(__int64 **)(a1 + 168);
  v9 = *(__int64 **)(a1 + 160);
  if ( v8 != v9 )
  {
    do
    {
      while ( 1 )
      {
        v10 = *v9;
        if ( !*v9 )
          break;
        ++v9;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        if ( v8 == v9 )
          goto LABEL_16;
      }
      ++v9;
    }
    while ( v8 != v9 );
LABEL_16:
    v9 = *(__int64 **)(a1 + 160);
  }
  if ( v9 )
    operator delete(v9);
  v11 = *(__int64 **)(a1 + 144);
  v12 = *(__int64 **)(a1 + 136);
  if ( v11 != v12 )
  {
    do
    {
      while ( 1 )
      {
        v13 = *v12;
        if ( !*v12 )
          break;
        ++v12;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        if ( v11 == v12 )
          goto LABEL_22;
      }
      ++v12;
    }
    while ( v11 != v12 );
LABEL_22:
    v12 = *(__int64 **)(a1 + 136);
  }
  if ( v12 )
    operator delete(v12);
  v14 = *(void **)(a1 + 104);
  if ( v14 != (void *)(a1 + 120) )
    operator delete(v14);
  v15 = *(_QWORD *)(a1 + 56);
  if ( v15 )
  {
    v16 = *(char **)(v15 + 32);
    if ( *(_DWORD *)(v15 + 44) )
    {
      v17 = *(_DWORD *)(v15 + 40);
      if ( v17 )
      {
        v18 = 0;
        v32 = 8LL * (unsigned int)(v17 - 1) + 8;
        do
        {
          v19 = *(_QWORD *)&v16[v18];
          if ( v19 != -8 && v19 )
          {
            v20 = *(_QWORD **)(v19 + 8);
            v33 = *(_QWORD *)v19 + 217LL;
            v21 = 12LL * *(unsigned int *)(v19 + 16);
            v22 = &v20[v21];
            if ( v20 != &v20[v21] )
            {
              do
              {
                while ( 1 )
                {
                  v22 -= 12;
                  v23 = (_QWORD *)v22[7];
                  if ( v23 != v22 + 9 )
                    operator delete(v23);
                  v24 = (_QWORD *)v22[1];
                  if ( v24 == v22 + 3 )
                    break;
                  operator delete(v24);
                  if ( v20 == v22 )
                    goto LABEL_38;
                }
              }
              while ( v20 != v22 );
LABEL_38:
              v22 = *(_QWORD **)(v19 + 8);
            }
            if ( v22 != (_QWORD *)(v19 + 24) )
              free(v22);
            operator delete(v19, v33, 8);
            v16 = *(char **)(v15 + 32);
          }
          v18 += 8;
        }
        while ( v32 != v18 );
      }
    }
    free(v16);
    if ( *(_DWORD *)(v15 + 20) )
    {
      v25 = *(_DWORD *)(v15 + 16);
      v26 = *(char **)(v15 + 8);
      if ( v25 )
      {
        v27 = 0;
        v28 = 8LL * (unsigned int)(v25 - 1) + 8;
        do
        {
          v29 = *(_QWORD **)&v26[v27];
          if ( v29 != (_QWORD *)-8LL && v29 )
          {
            operator delete(*(_QWORD *)&v26[v27], *v29 + 25LL, 8);
            v26 = *(char **)(v15 + 8);
          }
          v27 += 8;
        }
        while ( v28 != v27 );
      }
    }
    else
    {
      v26 = *(char **)(v15 + 8);
    }
    free(v26);
    operator delete((void *)v15, 0x38u);
  }
  v30 = *(_QWORD *)(a1 + 48);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
  v31 = *(_QWORD *)(a1 + 40);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
  nullsub_687(a1 + 16);
  nullsub_558();
}
