void __fastcall sub_1FDD310(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  void *v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  __int64 v31; // [rsp+0h] [rbp-48h]
  __int64 v32; // [rsp+0h] [rbp-48h]
  __int64 v33; // [rsp+0h] [rbp-48h]
  __int64 v34; // [rsp+0h] [rbp-48h]
  __int64 v35; // [rsp+0h] [rbp-48h]
  __int64 v36; // [rsp+0h] [rbp-48h]
  __int64 v37; // [rsp+8h] [rbp-40h]
  __int64 v38; // [rsp+8h] [rbp-40h]
  __int64 v39; // [rsp+8h] [rbp-40h]

  v3 = *a2;
  v4 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 280) = 0;
  v5 = *(_QWORD *)(v3 + 88);
  *(_QWORD *)(v3 + 88) = v4;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 88);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 88);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 88);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 88);
          if ( v9 )
          {
            v10 = *(_QWORD *)(v9 + 88);
            if ( v10 )
            {
              v11 = *(_QWORD *)(v10 + 88);
              if ( v11 )
              {
                v37 = *(_QWORD *)(v9 + 88);
                v31 = *(_QWORD *)(v8 + 88);
                sub_1FDAF20(v11);
                v10 = v37;
                v9 = v31;
              }
              v12 = *(void **)(v10 + 48);
              if ( v12 != (void *)(v10 + 64) )
              {
                v38 = v10;
                v32 = v9;
                free(v12);
                v10 = v38;
                v9 = v32;
              }
              if ( *(_QWORD *)v10 != v10 + 16 )
              {
                v39 = v10;
                v33 = v9;
                free(*(void **)v10);
                v10 = v39;
                v9 = v33;
              }
              v34 = v9;
              operator delete((void *)v10, 0x60u);
              v9 = v34;
            }
            v13 = *(void **)(v9 + 48);
            if ( v13 != (void *)(v9 + 64) )
            {
              v35 = v9;
              free(v13);
              v9 = v35;
            }
            if ( *(_QWORD *)v9 != v9 + 16 )
            {
              v36 = v9;
              free(*(void **)v9);
              v9 = v36;
            }
            operator delete((void *)v9, 0x60u);
          }
          v14 = *(void **)(v8 + 48);
          if ( v14 != (void *)(v8 + 64) )
            free(v14);
          if ( *(_QWORD *)v8 != v8 + 16 )
            free(*(void **)v8);
          operator delete((void *)v8, 0x60u);
        }
        v15 = *(void **)(v7 + 48);
        if ( v15 != (void *)(v7 + 64) )
          free(v15);
        if ( *(_QWORD *)v7 != v7 + 16 )
          free(*(void **)v7);
        operator delete((void *)v7, 0x60u);
      }
      v16 = *(void **)(v6 + 48);
      if ( v16 != (void *)(v6 + 64) )
        free(v16);
      if ( *(_QWORD *)v6 != v6 + 16 )
        free(*(void **)v6);
      operator delete((void *)v6, 0x60u);
    }
    v17 = *(void **)(v5 + 48);
    if ( v17 != (void *)(v5 + 64) )
      free(v17);
    if ( *(_QWORD *)v5 != v5 + 16 )
      free(*(void **)v5);
    operator delete((void *)v5, 0x60u);
    v3 = *a2;
  }
  v18 = *(_QWORD *)(a1 + 280);
  *a2 = 0;
  *(_QWORD *)(a1 + 280) = v3;
  if ( v18 )
  {
    v19 = *(_QWORD *)(v18 + 88);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 88);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 88);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 88);
          if ( v22 )
          {
            v23 = *(_QWORD *)(v22 + 88);
            if ( v23 )
            {
              v24 = *(_QWORD *)(v23 + 88);
              if ( v24 )
                sub_1FDAF20(v24);
              v25 = *(void **)(v23 + 48);
              if ( v25 != (void *)(v23 + 64) )
                free(v25);
              if ( *(_QWORD *)v23 != v23 + 16 )
                free(*(void **)v23);
              operator delete((void *)v23, 0x60u);
            }
            v26 = *(void **)(v22 + 48);
            if ( v26 != (void *)(v22 + 64) )
              free(v26);
            if ( *(_QWORD *)v22 != v22 + 16 )
              free(*(void **)v22);
            operator delete((void *)v22, 0x60u);
          }
          v27 = *(void **)(v21 + 48);
          if ( v27 != (void *)(v21 + 64) )
            free(v27);
          if ( *(_QWORD *)v21 != v21 + 16 )
            free(*(void **)v21);
          operator delete((void *)v21, 0x60u);
        }
        v28 = *(void **)(v20 + 48);
        if ( v28 != (void *)(v20 + 64) )
          free(v28);
        if ( *(_QWORD *)v20 != v20 + 16 )
          free(*(void **)v20);
        operator delete((void *)v20, 0x60u);
      }
      v29 = *(void **)(v19 + 48);
      if ( v29 != (void *)(v19 + 64) )
        free(v29);
      if ( *(_QWORD *)v19 != v19 + 16 )
        free(*(void **)v19);
      operator delete((void *)v19, 0x60u);
    }
    v30 = *(void **)(v18 + 48);
    if ( v30 != (void *)(v18 + 64) )
      free(v30);
    if ( *(_QWORD *)v18 != v18 + 16 )
      free(*(void **)v18);
    operator delete((void *)v18, 0x60u);
  }
}
