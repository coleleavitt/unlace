__int64 (__fastcall **__fastcall sub_B55350(__int64 a1))()
{
  unsigned int *v2; // rax
  int v3; // r13d
  __int64 v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx
  int i; // r12d
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // r15
  void *v20; // rdi
  void *v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 *v24; // rbp
  __int64 *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  bool v28; // zf
  __int64 *v29; // rbp
  __int64 *v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // [rsp+0h] [rbp-48h]
  __int64 v47; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = off_1C72990;
  v2 = *(unsigned int **)(a1 + 1328);
  if ( !v2 )
  {
    v4 = a1 + 1336;
    goto LABEL_12;
  }
  v3 = *(v2 - 1);
  v4 = a1 + 1336;
  if ( !v3 )
    goto LABEL_12;
  v5 = *(_QWORD *)(a1 + 1320);
  v6 = *v2;
  v7 = 8 * v6;
  v8 = v5 + 8 * v6;
  if ( v5 )
  {
    v9 = 8LL * *(unsigned int *)(v5 - 4);
    v10 = v5 + v9;
    if ( v7 != v9 )
      goto LABEL_5;
    *(_DWORD *)(v5 - 4) = v6;
  }
  else
  {
    v10 = 0;
    if ( v7 )
    {
      do
      {
LABEL_5:
        v11 = *(_QWORD *)(v10 - 8);
        v10 -= 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      while ( v8 != v10 );
      v12 = *(_QWORD *)(a1 + 1320);
      v2 = *(unsigned int **)(a1 + 1328);
      if ( v12 )
        *(_DWORD *)(v12 - 4) = v6;
      if ( !v2 )
        goto LABEL_10;
    }
  }
  *(v2 - 1) = 0;
LABEL_10:
  v4 = a1 + 1336;
  for ( i = 0; i != v3; ++i )
    sub_180C2E0(a1 + 1336);
LABEL_12:
  v14 = *(_QWORD *)(a1 + 1320);
  if ( v14 )
  {
    v15 = v14 + 8LL * *(unsigned int *)(v14 - 4);
    if ( v14 == v15 )
      goto LABEL_16;
    do
    {
      v16 = *(_QWORD *)(v15 - 8);
      v15 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    while ( v14 != v15 );
    v15 = *(_QWORD *)(a1 + 1320);
    if ( v15 )
LABEL_16:
      *(_DWORD *)(v15 - 4) = 0;
  }
  if ( *(_BYTE *)(a1 + 1432) )
  {
    v17 = a1 + 720;
    sub_7E3FE0(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 24), a1 + 1408);
    sub_A72220(*(_QWORD *)(a1 + 24), a1 + 1440);
    v46 = a1 + 72;
    sub_D814A0(a1 + 72);
    sub_1584740(a1 + 720);
    v44 = *(_QWORD *)(a1 + 880);
    if ( v44 )
      *(_DWORD *)(v44 - 4) = 0;
    v45 = *(_QWORD *)(a1 + 1248);
    if ( v45 )
      *(_DWORD *)(v45 - 4) = 0;
    v18 = a1 + 888;
    v19 = a1 + 1048;
    sub_1584740(a1 + 888);
    sub_1584740(a1 + 1048);
    v47 = a1 + 56;
    sub_14B6450(a1 + 56);
    *(_BYTE *)(a1 + 1432) = 0;
  }
  else
  {
    v17 = a1 + 720;
    v46 = a1 + 72;
    v18 = a1 + 888;
    v47 = a1 + 56;
    v19 = a1 + 1048;
  }
  v20 = *(void **)(a1 + 1440);
  if ( v20 )
    sub_186B220(v20);
  v21 = *(void **)(a1 + 1408);
  if ( v21 )
    sub_186B220(v21);
  sub_180C0E0(v4);
  v22 = *(_QWORD *)(a1 + 1328);
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  v23 = *(_QWORD *)(a1 + 1320);
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  v24 = *(__int64 **)(a1 + 1296);
  *(_QWORD *)(a1 + 720) = &off_1C4D970;
  if ( v24 )
  {
    v25 = &v24[*((unsigned int *)v24 - 1)];
    if ( v24 >= v25 )
      goto LABEL_35;
    do
    {
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 )
        {
          v27 = *(_QWORD *)(a1 + 1288);
          v28 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v28 )
            break;
        }
        if ( ++v24 >= v25 )
          goto LABEL_34;
      }
      sub_15D7BC0(v27, v26);
      ++v24;
    }
    while ( v24 < v25 );
LABEL_34:
    v24 = *(__int64 **)(a1 + 1296);
    if ( v24 )
LABEL_35:
      sub_186B220(v24 - 1);
  }
  v29 = *(__int64 **)(a1 + 1272);
  if ( v29 )
  {
    v30 = &v29[*((unsigned int *)v29 - 1)];
    if ( v29 >= v30 )
      goto LABEL_44;
    do
    {
      while ( 1 )
      {
        v31 = *v29;
        if ( *v29 )
        {
          v32 = *(_QWORD *)(a1 + 1264);
          v28 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v28 )
            break;
        }
        if ( ++v29 >= v30 )
          goto LABEL_43;
      }
      sub_15D7BC0(v32, v31);
      ++v29;
    }
    while ( v29 < v30 );
LABEL_43:
    v29 = *(__int64 **)(a1 + 1272);
    if ( v29 )
LABEL_44:
      sub_186B220(v29 - 1);
  }
  v33 = *(_QWORD *)(a1 + 1248);
  *(_QWORD *)(a1 + 720) = &off_1C4D950;
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = *(_QWORD *)(a1 + 1232);
  if ( v34 )
  {
    v35 = *(_QWORD *)(a1 + 1240);
    v28 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v28 )
      sub_15D7BC0(v35, v34);
  }
  v36 = *(_QWORD *)(a1 + 1216);
  if ( v36 )
  {
    v37 = *(_QWORD *)(a1 + 1224);
    v28 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v28 )
      sub_15D7BC0(v37, v36);
  }
  v38 = *(_QWORD *)(a1 + 1200);
  if ( v38 )
  {
    v39 = *(_QWORD *)(a1 + 1208);
    v28 = (*(_DWORD *)(v38 + 8))-- == 1;
    if ( v28 )
      sub_15D7BC0(v39, v38);
  }
  *(_QWORD *)(a1 + 1048) = &qword_1C637E8;
  sub_15841B0(v19);
  *(_QWORD *)(a1 + 888) = &qword_1C637E8;
  sub_15841B0(v18);
  v40 = *(_QWORD *)(a1 + 880);
  if ( v40 )
    sub_186B220((void *)(v40 - 8));
  sub_15841B0(v17);
  *(_QWORD *)(a1 + 72) = &off_1C5A7B8;
  sub_D81A00(v46);
  sub_14B63F0(v47);
  v41 = *(_QWORD *)(a1 + 40);
  result = off_1C70148;
  *(_QWORD *)a1 = off_1C70148;
  if ( v41 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v41 - 8));
  v43 = *(_QWORD *)(a1 + 32);
  if ( v43 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v43 - 8));
  return result;
}

