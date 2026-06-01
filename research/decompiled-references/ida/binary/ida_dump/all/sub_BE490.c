__int64 __fastcall sub_BE490(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r12
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // r12
  __int64 v12; // r12
  __int64 result; // rax
  __int64 v14; // r13
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 i; // r12
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // rax
  void *v21; // rax
  __int64 v22; // r12
  __int64 v23; // r14
  size_t v24; // r15
  __int64 v25; // r12
  __int64 v26; // rcx
  size_t v27; // r15
  void *v28; // rax
  void *v29; // rax
  void *v30; // rax
  const void *v31; // rsi
  void *v32; // rax
  const void *v33; // rsi
  void *v34; // rax
  const void *v35; // rsi
  void *v36; // rax
  const void *v37; // rsi
  void *v38; // rax
  const void *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // r13
  const void **v43; // [rsp+0h] [rbp-70h]
  __int64 v44; // [rsp+0h] [rbp-70h]
  size_t n; // [rsp+8h] [rbp-68h]

  v4 = *a2;
  *(_QWORD *)(a1 + 8) = a2[1];
  v5 = a2[2];
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v6 = a2[4];
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 16) = v5;
  if ( v6 )
  {
    v15 = 0;
    v16 = qalloc_or_throw();
    *(_QWORD *)(a1 + 40) = v6;
    *(_QWORD *)(a1 + 24) = v16;
    for ( i = v16; ; i = *(_QWORD *)(a1 + 24) )
    {
      v18 = 80 * v15 + i;
      v19 = a2[3] + 80 * v15;
      sub_123A40(v18, v19);
      v20 = *(_QWORD *)(v19 + 16);
      *(_QWORD *)(v18 + 24) = 0;
      *(_QWORD *)(v18 + 16) = v20;
      copy_tinfo_t();
      *(_QWORD *)(v18 + 32) = 0;
      *(_OWORD *)(v18 + 40) = 0;
      if ( *(_QWORD *)(v19 + 40) )
      {
        n = *(_QWORD *)(v19 + 40);
        v21 = (void *)qalloc_or_throw();
        *(_QWORD *)(v18 + 32) = v21;
        *(_QWORD *)(v18 + 48) = n;
        memcpy(v21, *(const void **)(v19 + 32), n);
        *(_QWORD *)(v18 + 40) = n;
      }
      *(_DWORD *)(v18 + 56) = 0;
      copy_argloc();
      ++v15;
      *(_DWORD *)(v18 + 72) = *(_DWORD *)(v19 + 72);
      if ( v6 == v15 )
        break;
    }
    *(_QWORD *)(a1 + 32) = v6;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v7 = a2[7];
  if ( v7 )
  {
    v40 = qalloc_or_throw();
    *(_QWORD *)(a1 + 48) = v40;
    v41 = v40;
    v42 = 0;
    *(_QWORD *)(a1 + 64) = v7;
    while ( 1 )
    {
      sub_123A40(16 * v42 + v41, 16 * v42 + a2[6]);
      if ( v7 == ++v42 )
        break;
      v41 = *(_QWORD *)(a1 + 48);
    }
    *(_QWORD *)(a1 + 56) = v7;
  }
  *(_QWORD *)(a1 + 72) = 0;
  copy_tinfo_t();
  *(_DWORD *)(a1 + 80) = 0;
  copy_argloc();
  sub_64000((__int64 *)(a1 + 96), (__int64)(a2 + 12));
  *(_QWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  v8 = a2[15];
  if ( v8 )
  {
    v38 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 112) = v38;
    v39 = (const void *)a2[14];
    *(_QWORD *)(a1 + 128) = v8;
    memcpy(v38, v39, 16 * v8);
    *(_QWORD *)(a1 + 120) = v8;
  }
  sub_64000((__int64 *)(a1 + 136), (__int64)(a2 + 17));
  *(_QWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  v9 = a2[20];
  if ( v9 )
  {
    v36 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 152) = v36;
    v37 = (const void *)a2[19];
    *(_QWORD *)(a1 + 168) = v9;
    memcpy(v36, v37, 16 * v9);
    *(_QWORD *)(a1 + 160) = v9;
  }
  sub_64000((__int64 *)(a1 + 176), (__int64)(a2 + 22));
  *(_QWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  v10 = a2[25];
  if ( v10 )
  {
    v34 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 192) = v34;
    v35 = (const void *)a2[24];
    *(_QWORD *)(a1 + 208) = v10;
    memcpy(v34, v35, 16 * v10);
    *(_QWORD *)(a1 + 200) = v10;
  }
  *(_QWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  v11 = a2[28];
  if ( v11 )
  {
    v32 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 216) = v32;
    v33 = (const void *)a2[27];
    *(_QWORD *)(a1 + 232) = v11;
    memcpy(v32, v33, 16 * v11);
    *(_QWORD *)(a1 + 224) = v11;
  }
  sub_64000((__int64 *)(a1 + 240), (__int64)(a2 + 30));
  *(_QWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  v12 = a2[33];
  if ( v12 )
  {
    v30 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 256) = v30;
    v31 = (const void *)a2[32];
    *(_QWORD *)(a1 + 272) = v12;
    memcpy(v30, v31, 16 * v12);
    *(_QWORD *)(a1 + 264) = v12;
  }
  result = a2[35];
  *(_QWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  v14 = a2[37];
  *(_QWORD *)(a1 + 280) = result;
  if ( v14 )
  {
    result = qalloc_or_throw();
    *(_QWORD *)(a1 + 288) = result;
    v22 = result;
    v23 = 0;
    *(_QWORD *)(a1 + 304) = v14;
    while ( 1 )
    {
      v25 = 48 * v23 + v22;
      v26 = a2[36] + 48 * v23;
      *(_QWORD *)v25 = 0;
      *(_OWORD *)(v25 + 8) = 0;
      v27 = *(_QWORD *)(v26 + 8);
      if ( v27 )
      {
        v43 = (const void **)v26;
        v28 = (void *)qalloc_or_throw();
        *(_QWORD *)v25 = v28;
        *(_QWORD *)(v25 + 16) = v27;
        result = (__int64)memcpy(v28, *v43, v27);
        *(_QWORD *)(v25 + 8) = v27;
        v26 = (__int64)v43;
      }
      *(_QWORD *)(v25 + 24) = 0;
      *(_OWORD *)(v25 + 32) = 0;
      v24 = *(_QWORD *)(v26 + 32);
      if ( v24 )
      {
        v44 = v26;
        v29 = (void *)qalloc_or_throw();
        *(_QWORD *)(v25 + 24) = v29;
        *(_QWORD *)(v25 + 40) = v24;
        ++v23;
        result = (__int64)memcpy(v29, *(const void **)(v44 + 24), v24);
        *(_QWORD *)(v25 + 32) = v24;
        if ( v14 == v23 )
        {
LABEL_27:
          *(_QWORD *)(a1 + 296) = v14;
          return result;
        }
      }
      else if ( v14 == ++v23 )
      {
        goto LABEL_27;
      }
      v22 = *(_QWORD *)(a1 + 288);
    }
  }
  return result;
}
