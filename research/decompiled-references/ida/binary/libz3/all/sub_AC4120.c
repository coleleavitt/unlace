__int64 (__fastcall **__fastcall sub_AC4120(__int64 a1))()
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  _QWORD *v8; // rbp
  __int64 v9; // rax
  _QWORD *v10; // r12
  void *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r14
  void *v16; // r12
  __int64 v17; // rsi
  char *v18; // r15
  __int64 v19; // rax
  char *v20; // rbp
  char *v21; // r14
  void *v22; // r12
  char *v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdi
  _QWORD *v26; // rbp
  __int64 v27; // rax
  _QWORD *v28; // r12
  void *v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  _QWORD *v32; // rbp
  __int64 v33; // rax
  _QWORD *v34; // r12
  void *v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 *v41; // rdi
  __int64 *v42; // rcx
  __int64 *i; // rax
  __int64 v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v51; // rdi

  *(_QWORD *)a1 = off_1C71238;
  v2 = *(_QWORD *)(a1 + 1176);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *(_QWORD *)(a1 + 1168);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(_QWORD *)(a1 + 1152);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *(_QWORD *)(a1 + 1144);
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *(_QWORD *)(a1 + 1136);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *(_QWORD *)(a1 + 1128);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(_QWORD **)(a1 + 864);
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    if ( (_DWORD)v9 )
    {
      v10 = &v8[v9];
      do
      {
        while ( *v8 )
        {
          v11 = (void *)(*v8++ - 8LL);
          sub_186B220(v11);
          if ( v8 == v10 )
          {
            v8 = *(_QWORD **)(a1 + 864);
            goto LABEL_19;
          }
        }
        ++v8;
      }
      while ( v8 != v10 );
      v8 = *(_QWORD **)(a1 + 864);
    }
LABEL_19:
    sub_186B220(v8 - 1);
  }
  v12 = *(_QWORD *)(a1 + 848);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = *(_QWORD *)(a1 + 584);
  if ( v13 )
  {
    v14 = *(unsigned int *)(v13 - 4);
    if ( (_DWORD)v14 )
    {
      v15 = v13 + 32 * v14;
      do
      {
        v16 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v13);
        v17 = v13 + 16;
        v13 += 32;
        sub_182CBA0(v16, v17);
      }
      while ( v13 != v15 );
      v13 = *(_QWORD *)(a1 + 584);
    }
    sub_186B220((void *)(v13 - 8));
  }
  v18 = *(char **)(a1 + 560);
  if ( v18 )
  {
    v19 = *(unsigned int *)(a1 + 568);
    if ( (_DWORD)v19 )
    {
      v20 = *(char **)(a1 + 560);
      v21 = &v18[56 * v19];
      do
      {
        v22 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20 + 8);
        v23 = v20 + 24;
        v20 += 56;
        sub_182CBA0(v22, v23);
      }
      while ( v20 != v21 );
    }
    sub_186B220(v18);
  }
  v24 = *(_QWORD *)(a1 + 544);
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = *(_QWORD *)(a1 + 536);
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = *(_QWORD **)(a1 + 528);
  if ( v26 )
  {
    v27 = *((unsigned int *)v26 - 1);
    if ( (_DWORD)v27 )
    {
      v28 = &v26[v27];
      do
      {
        while ( *v26 )
        {
          v29 = (void *)(*v26++ - 8LL);
          sub_186B220(v29);
          if ( v28 == v26 )
          {
            v26 = *(_QWORD **)(a1 + 528);
            goto LABEL_43;
          }
        }
        ++v26;
      }
      while ( v26 != v28 );
      v26 = *(_QWORD **)(a1 + 528);
    }
LABEL_43:
    sub_186B220(v26 - 1);
  }
  v30 = *(_QWORD *)(a1 + 520);
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = *(_QWORD *)(a1 + 512);
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v32 = *(_QWORD **)(a1 + 504);
  if ( v32 )
  {
    v33 = *((unsigned int *)v32 - 1);
    if ( (_DWORD)v33 )
    {
      v34 = &v32[v33];
      do
      {
        while ( *v32 )
        {
          v35 = (void *)(*v32++ - 8LL);
          sub_186B220(v35);
          if ( v34 == v32 )
          {
            v32 = *(_QWORD **)(a1 + 504);
            goto LABEL_54;
          }
        }
        ++v32;
      }
      while ( v32 != v34 );
      v32 = *(_QWORD **)(a1 + 504);
    }
LABEL_54:
    sub_186B220(v32 - 1);
  }
  v36 = *(_QWORD *)(a1 + 480);
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v37 = *(_QWORD *)(a1 + 472);
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v38 = *(_QWORD *)(a1 + 464);
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
  sub_180C0E0(a1 + 408);
  v39 = *(_QWORD *)(a1 + 400);
  if ( v39 )
    sub_186B220((void *)(v39 - 8));
  v40 = *(_QWORD *)(a1 + 392);
  if ( v40 )
    sub_186B220((void *)(v40 - 8));
  v41 = *(__int64 **)(a1 + 248);
  v42 = &v41[*(unsigned int *)(a1 + 256)];
  for ( i = v41; i != v42; *(_BYTE *)(v44 + 6) &= ~1u )
    v44 = *i++;
  *(_DWORD *)(a1 + 256) = 0;
  if ( v41 != (__int64 *)(a1 + 264) && v41 )
    sub_186B220(v41);
  v45 = *(_QWORD *)(a1 + 240);
  if ( v45 )
    sub_186B220((void *)(v45 - 8));
  v46 = *(_QWORD *)(a1 + 232);
  if ( v46 )
    sub_186B220((void *)(v46 - 8));
  v47 = *(_QWORD *)(a1 + 224);
  if ( v47 )
    sub_186B220((void *)(v47 - 8));
  v48 = *(_QWORD *)(a1 + 216);
  if ( v48 )
    sub_186B220((void *)(v48 - 8));
  v49 = *(_QWORD *)(a1 + 40);
  result = off_1C70148;
  *(_QWORD *)a1 = off_1C70148;
  if ( v49 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v49 - 8));
  v51 = *(_QWORD *)(a1 + 32);
  if ( v51 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v51 - 8));
  return result;
}

