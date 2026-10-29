void __fastcall sub_D14900(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // r12
  _QWORD *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r12
  void *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r12
  void *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // r12
  void *v20; // rdi
  char *v21; // rdi
  char *v22; // rbx
  char *v23; // r12
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax

  v2 = *(_QWORD *)(a1 + 3080);
  *(_QWORD *)a1 = &off_1C5A190;
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_D0E500(*(_QWORD **)(v2 + 24));
    v4 = *(_QWORD **)(v2 + 32);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 != v3 + 6 )
      operator delete(v4, v3[6] + 1LL);
    operator delete(v3, 0x48u);
  }
  v5 = *(void **)(a1 + 2968);
  *(_QWORD *)(a1 + 2056) = off_1C79EA0;
  if ( v5 )
    sub_186B220(v5);
  v6 = *(_QWORD *)(a1 + 2936);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 - 4);
    if ( !v7 )
      goto LABEL_12;
    v8 = 0;
    v9 = 32LL * v7;
    do
    {
      v10 = v6 + v8 + 8;
      v8 += 32;
      sub_182EF00(*(_QWORD *)(*(_QWORD *)(a1 + 2944) + 728LL), v10);
      v6 = *(_QWORD *)(a1 + 2936);
    }
    while ( v8 != v9 );
    if ( v6 )
    {
LABEL_12:
      *(_DWORD *)(v6 - 4) = 0;
      sub_186B220((void *)(v6 - 8));
    }
  }
  v11 = *(_QWORD *)(a1 + 2928);
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = *(_QWORD *)(a1 + 2824);
  v13 = v12 + 24LL * *(unsigned int *)(a1 + 2832);
  if ( v12 != v13 )
  {
    while ( *(_DWORD *)(v12 + 4) != 2 )
    {
      v12 += 24;
      if ( v13 == v12 )
        goto LABEL_25;
    }
    if ( v13 != v12 )
    {
      do
      {
        sub_182EF00(*(_QWORD *)(a1 + 2816), *(_QWORD *)(v12 + 16));
        v14 = *(void **)(v12 + 16);
        if ( v14 )
          sub_186B220(v14);
        do
          v12 += 24;
        while ( v13 != v12 && *(_DWORD *)(v12 + 4) != 2 );
      }
      while ( v12 != *(_QWORD *)(a1 + 2824) + 24LL * *(unsigned int *)(a1 + 2832) );
    }
  }
LABEL_25:
  v15 = *(_QWORD *)(a1 + 2848);
  v16 = v15 + 24LL * *(unsigned int *)(a1 + 2856);
  if ( v15 != v16 )
  {
    while ( *(_DWORD *)(v15 + 4) != 2 )
    {
      v15 += 24;
      if ( v16 == v15 )
        goto LABEL_35;
    }
    if ( v16 != v15 )
    {
      do
      {
        sub_182EF00(*(_QWORD *)(a1 + 2816), *(_QWORD *)(v15 + 16));
        v17 = *(void **)(v15 + 16);
        if ( v17 )
          sub_186B220(v17);
        do
          v15 += 24;
        while ( v16 != v15 && *(_DWORD *)(v15 + 4) != 2 );
      }
      while ( v15 != *(_QWORD *)(a1 + 2848) + 24LL * *(unsigned int *)(a1 + 2856) );
    }
  }
LABEL_35:
  v18 = *(_QWORD *)(a1 + 2872);
  v19 = v18 + 24LL * *(unsigned int *)(a1 + 2880);
  if ( v18 != v19 )
  {
    while ( *(_DWORD *)(v18 + 4) != 2 )
    {
      v18 += 24;
      if ( v19 == v18 )
        goto LABEL_45;
    }
    if ( v19 != v18 )
    {
      do
      {
        sub_182EF00(*(_QWORD *)(a1 + 2816), *(_QWORD *)(v18 + 16));
        v20 = *(void **)(v18 + 16);
        if ( v20 )
          sub_186B220(v20);
        do
          v18 += 24;
        while ( v19 != v18 && *(_DWORD *)(v18 + 4) != 2 );
      }
      while ( v18 != *(_QWORD *)(a1 + 2872) + 24LL * *(unsigned int *)(a1 + 2880) );
    }
  }
LABEL_45:
  v21 = *(char **)(a1 + 2896);
  v22 = v21;
  v23 = &v21[24 * *(unsigned int *)(a1 + 2904)];
  if ( v21 != v23 )
  {
    while ( *((_DWORD *)v22 + 1) != 2 )
    {
      v22 += 24;
      if ( v23 == v22 )
        goto LABEL_55;
    }
    if ( v23 != v22 )
    {
      do
      {
        sub_182EF00(*(_QWORD *)(a1 + 2816), *((_QWORD *)v22 + 2));
        v24 = *((void **)v22 + 2);
        if ( v24 )
          sub_186B220(v24);
        do
          v22 += 24;
        while ( v23 != v22 && *((_DWORD *)v22 + 1) != 2 );
        v21 = *(char **)(a1 + 2896);
      }
      while ( v22 != &v21[24 * *(unsigned int *)(a1 + 2904)] );
    }
  }
LABEL_55:
  if ( v21 )
    sub_186B220(v21);
  v25 = *(void **)(a1 + 2872);
  if ( v25 )
    sub_186B220(v25);
  v26 = *(void **)(a1 + 2848);
  if ( v26 )
    sub_186B220(v26);
  v27 = *(void **)(a1 + 2824);
  if ( v27 )
    sub_186B220(v27);
  sub_184C8D0((void *)(a1 + 2080));
  sub_15F8AF0(a1 + 1696);
  sub_D0F080((_QWORD *)(a1 + 1080));
  sub_1665160(a1 + 496);
  *(_QWORD *)(a1 + 32) = &off_1C61E68;
  v28 = *(_QWORD *)(a1 + 480);
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  v29 = *(_QWORD *)(a1 + 472);
  if ( v29 )
    sub_186B220((void *)(v29 - 8));
  v30 = *(_QWORD *)(a1 + 464);
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = *(_QWORD *)(a1 + 456);
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v32 = *(_QWORD *)(a1 + 376);
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = *(_QWORD *)(a1 + 320);
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = *(_QWORD *)(a1 + 312);
  if ( v34 )
    sub_186B220((void *)(v34 - 8));
  v35 = *(_QWORD *)(a1 + 304);
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  v36 = *(_QWORD *)(a1 + 296);
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v37 = *(_QWORD *)(a1 + 288);
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v38 = *(_QWORD *)(a1 + 136);
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
  v39 = *(_QWORD *)(a1 + 128);
  if ( v39 )
    sub_186B220((void *)(v39 - 8));
  v40 = *(_QWORD *)(a1 + 120);
  if ( v40 )
    sub_186B220((void *)(v40 - 8));
  sub_18572D0((void *)(a1 + 24));
}

