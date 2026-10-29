__int64 (__fastcall **__fastcall sub_B085B0(__int64 a1))()
{
  __int64 v2; // rdi
  _QWORD *v3; // rbp
  __int64 v4; // rax
  _QWORD *v5; // r12
  void *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // r13
  void *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r12
  __int64 v32; // r12
  __int64 v33; // rbp
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v38; // rdi

  *(_QWORD *)a1 = off_1C71DA8;
  sub_B03770(a1);
  v2 = *(_QWORD *)(a1 + 960);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *(_QWORD **)(a1 + 952);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = &v3[v4];
      do
      {
        while ( *v3 )
        {
          v6 = (void *)(*v3++ - 8LL);
          sub_186B220(v6);
          if ( v5 == v3 )
          {
            v3 = *(_QWORD **)(a1 + 952);
            goto LABEL_9;
          }
        }
        ++v3;
      }
      while ( v3 != v5 );
      v3 = *(_QWORD **)(a1 + 952);
    }
LABEL_9:
    sub_186B220(v3 - 1);
  }
  v7 = *(_QWORD *)(a1 + 944);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  sub_2334C0((__int64 *)(a1 + 928));
  v8 = *(_QWORD *)(a1 + 920);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  sub_2334C0((__int64 *)(a1 + 904));
  v9 = *(_QWORD *)(a1 + 896);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 888);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *(_QWORD *)(a1 + 880);
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = *(_QWORD *)(a1 + 864);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = *(_QWORD *)(a1 + 856);
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = *(_QWORD *)(a1 + 840);
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = *(_QWORD *)(a1 + 824);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = *(_QWORD *)(a1 + 816);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(_QWORD *)(a1 + 808);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  sub_25A130((char *)(a1 + 744));
  v18 = *(_QWORD *)(a1 + 736);
  if ( v18 )
  {
    v19 = *(unsigned int *)(v18 - 4);
    if ( (_DWORD)v19 )
    {
      v20 = v18 + 16 * v19;
      do
      {
        v21 = v18;
        v18 += 16;
        sub_15D0DF0(v21);
      }
      while ( v18 != v20 );
      v18 = *(_QWORD *)(a1 + 736);
    }
    sub_186B220((void *)(v18 - 8));
  }
  v22 = *(_QWORD *)(a1 + 728);
  if ( v22 )
  {
    v23 = *(unsigned int *)(v22 - 4);
    if ( (_DWORD)v23 )
    {
      v24 = v22 + 32 * v23;
      do
      {
        v25 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v22);
        v26 = v22 + 16;
        v22 += 32;
        sub_182CBA0(v25, v26);
      }
      while ( v22 != v24 );
      v22 = *(_QWORD *)(a1 + 728);
    }
    sub_186B220((void *)(v22 - 8));
  }
  v27 = *(_QWORD *)(a1 + 704);
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  v28 = *(_QWORD *)(a1 + 696);
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  v29 = *(_QWORD *)(a1 + 688);
  if ( v29 )
    sub_186B220((void *)(v29 - 8));
  v30 = *(_QWORD *)(a1 + 672);
  if ( v30 )
  {
    v31 = *(unsigned int *)(v30 - 4);
    if ( !(_DWORD)v31 )
      goto LABEL_55;
    v32 = 16 * v31;
    v33 = 0;
    do
    {
      v34 = v33 + v30;
      v33 += 16;
      sub_182EF00(*(_QWORD *)(a1 + 680), v34);
      v30 = *(_QWORD *)(a1 + 672);
    }
    while ( v32 != v33 );
    if ( v30 )
    {
LABEL_55:
      *(_DWORD *)(v30 - 4) = 0;
      sub_186B220((void *)(v30 - 8));
    }
  }
  sub_182EDF0(a1 + 72);
  v35 = *(_QWORD *)(a1 + 64);
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  v36 = *(_QWORD *)(a1 + 40);
  result = off_1C70148;
  *(_QWORD *)a1 = off_1C70148;
  if ( v36 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v36 - 8));
  v38 = *(_QWORD *)(a1 + 32);
  if ( v38 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v38 - 8));
  return result;
}

