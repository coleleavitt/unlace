void __fastcall sub_657840(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rdi
  __int64 *v3; // rcx
  __int64 *i; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdi
  void *v8; // rdi
  __int64 *v9; // rbp
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 *v14; // rbp
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 *v18; // rbp
  __int64 *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 *v26; // rbp
  __int64 *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 *v30; // rbp
  __int64 *v31; // r12
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 *v34; // rbp
  __int64 *v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(__int64 **)(v1 + 240);
    v3 = &v2[*(unsigned int *)(v1 + 248)];
    for ( i = v2; v3 != i; *(_BYTE *)(v5 + 6) &= ~1u )
      v5 = *i++;
    *(_DWORD *)(v1 + 248) = 0;
    if ( v2 && v2 != (__int64 *)(v1 + 256) )
      sub_186B220(v2);
    v6 = *(_QWORD *)(v1 + 232);
    if ( v6 )
      sub_186B220((void *)(v6 - 8));
    v7 = *(_QWORD *)(v1 + 224);
    if ( v7 )
      sub_186B220((void *)(v7 - 8));
    v8 = *(void **)(v1 + 200);
    if ( v8 )
      sub_186B220(v8);
    v9 = *(__int64 **)(v1 + 184);
    if ( v9 )
    {
      v10 = &v9[*((unsigned int *)v9 - 1)];
      if ( v9 >= v10 )
        goto LABEL_21;
      do
      {
        while ( 1 )
        {
          v11 = *v9;
          if ( *v9 )
          {
            v12 = *(_QWORD *)(v1 + 176);
            v13 = (*(_DWORD *)(v11 + 8))-- == 1;
            if ( v13 )
              break;
          }
          if ( ++v9 >= v10 )
            goto LABEL_20;
        }
        sub_15D7BC0(v12, v11);
        ++v9;
      }
      while ( v9 < v10 );
LABEL_20:
      v9 = *(__int64 **)(v1 + 184);
      if ( v9 )
LABEL_21:
        sub_186B220(v9 - 1);
    }
    v14 = *(__int64 **)(v1 + 168);
    if ( v14 )
    {
      v15 = &v14[*((unsigned int *)v14 - 1)];
      if ( v14 >= v15 )
        goto LABEL_30;
      do
      {
        while ( 1 )
        {
          v16 = *v14;
          if ( *v14 )
          {
            v17 = *(_QWORD *)(v1 + 160);
            v13 = (*(_DWORD *)(v16 + 8))-- == 1;
            if ( v13 )
              break;
          }
          if ( ++v14 >= v15 )
            goto LABEL_29;
        }
        sub_15D7BC0(v17, v16);
        ++v14;
      }
      while ( v14 < v15 );
LABEL_29:
      v14 = *(__int64 **)(v1 + 168);
      if ( v14 )
LABEL_30:
        sub_186B220(v14 - 1);
    }
    v18 = *(__int64 **)(v1 + 152);
    if ( v18 )
    {
      v19 = &v18[*((unsigned int *)v18 - 1)];
      if ( v18 >= v19 )
        goto LABEL_39;
      do
      {
        while ( 1 )
        {
          v20 = *v18;
          if ( *v18 )
          {
            v21 = *(_QWORD *)(v1 + 144);
            v13 = (*(_DWORD *)(v20 + 8))-- == 1;
            if ( v13 )
              break;
          }
          if ( ++v18 >= v19 )
            goto LABEL_38;
        }
        sub_15D7BC0(v21, v20);
        ++v18;
      }
      while ( v18 < v19 );
LABEL_38:
      v18 = *(__int64 **)(v1 + 152);
      if ( v18 )
LABEL_39:
        sub_186B220(v18 - 1);
    }
    v22 = *(void **)(v1 + 120);
    if ( v22 )
      sub_186B220(v22);
    v23 = *(void **)(v1 + 96);
    if ( v23 )
      sub_186B220(v23);
    sub_1580D10(v1 + 88);
    v24 = *(_QWORD *)(v1 + 80);
    if ( v24 )
      sub_186B220((void *)(v24 - 8));
    v25 = *(_QWORD *)(v1 + 72);
    if ( v25 )
      sub_186B220((void *)(v25 - 8));
    v26 = *(__int64 **)(v1 + 56);
    if ( v26 )
    {
      v27 = &v26[*((unsigned int *)v26 - 1)];
      if ( v26 >= v27 )
        goto LABEL_56;
      do
      {
        while ( 1 )
        {
          v28 = *v26;
          if ( *v26 )
          {
            v29 = *(_QWORD *)(v1 + 48);
            v13 = (*(_DWORD *)(v28 + 8))-- == 1;
            if ( v13 )
              break;
          }
          if ( ++v26 >= v27 )
            goto LABEL_55;
        }
        sub_15D7BC0(v29, v28);
        ++v26;
      }
      while ( v26 < v27 );
LABEL_55:
      v26 = *(__int64 **)(v1 + 56);
      if ( v26 )
LABEL_56:
        sub_186B220(v26 - 1);
    }
    v30 = *(__int64 **)(v1 + 40);
    if ( v30 )
    {
      v31 = &v30[*((unsigned int *)v30 - 1)];
      if ( v30 >= v31 )
        goto LABEL_65;
      do
      {
        while ( 1 )
        {
          v32 = *v30;
          if ( *v30 )
          {
            v33 = *(_QWORD *)(v1 + 32);
            v13 = (*(_DWORD *)(v32 + 8))-- == 1;
            if ( v13 )
              break;
          }
          if ( ++v30 >= v31 )
            goto LABEL_64;
        }
        sub_15D7BC0(v33, v32);
        ++v30;
      }
      while ( v30 < v31 );
LABEL_64:
      v30 = *(__int64 **)(v1 + 40);
      if ( v30 )
LABEL_65:
        sub_186B220(v30 - 1);
    }
    v34 = *(__int64 **)(v1 + 24);
    if ( v34 )
    {
      v35 = &v34[*((unsigned int *)v34 - 1)];
      if ( v34 >= v35 )
        goto LABEL_74;
      do
      {
        while ( 1 )
        {
          v36 = *v34;
          if ( *v34 )
          {
            v37 = *(_QWORD *)(v1 + 16);
            v13 = (*(_DWORD *)(v36 + 8))-- == 1;
            if ( v13 )
              break;
          }
          if ( ++v34 >= v35 )
            goto LABEL_73;
        }
        sub_15D7BC0(v37, v36);
        ++v34;
      }
      while ( v34 < v35 );
LABEL_73:
      v34 = *(__int64 **)(v1 + 24);
      if ( v34 )
LABEL_74:
        sub_186B220(v34 - 1);
    }
    sub_186B220((void *)v1);
  }
}

