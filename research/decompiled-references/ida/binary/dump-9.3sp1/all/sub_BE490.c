__int64 __fastcall sub_BE490(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r12
  const void *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // r12
  const void *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r12
  __int64 result; // rax
  __int64 v26; // r13
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 i; // r12
  __int64 v30; // r12
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  void *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r12
  __int64 v38; // r14
  size_t v39; // r15
  __int64 v40; // r12
  __int64 v41; // rcx
  size_t v42; // r15
  void *v43; // rax
  void *v44; // rax
  void *v45; // rax
  void *v46; // rax
  const void *v47; // rsi
  void *v48; // rax
  void *v49; // rax
  const void *v50; // rsi
  void *v51; // rax
  const void *v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // r13
  const void **v56; // [rsp+0h] [rbp-70h]
  __int64 v57; // [rsp+0h] [rbp-70h]
  size_t n; // [rsp+8h] [rbp-68h]

  v4 = a2;
  v6 = *a2;
  *(_QWORD *)(a1 + 8) = a2[1];
  v7 = a2[2];
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v8 = a2[4];
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 16) = v7;
  if ( v8 )
  {
    v27 = 0;
    v28 = qalloc_or_throw(80 * v8, (__int64)a2, v6, a4);
    *(_QWORD *)(a1 + 40) = v8;
    *(_QWORD *)(a1 + 24) = v28;
    for ( i = v28; ; i = *(_QWORD *)(a1 + 24) )
    {
      v30 = 80 * v27 + i;
      v31 = v4[3] + 80 * v27;
      sub_123A40(v30);
      v32 = *(_QWORD *)(v31 + 16);
      *(_QWORD *)(v30 + 24) = 0;
      *(_QWORD *)(v30 + 16) = v32;
      copy_tinfo_t();
      *(_QWORD *)(v30 + 32) = 0;
      *(_OWORD *)(v30 + 40) = 0;
      if ( *(_QWORD *)(v31 + 40) )
      {
        n = *(_QWORD *)(v31 + 40);
        v35 = (void *)qalloc_or_throw(n, v31 + 24, v33, v34);
        *(_QWORD *)(v30 + 32) = v35;
        *(_QWORD *)(v30 + 48) = n;
        memcpy(v35, *(const void **)(v31 + 32), n);
        *(_QWORD *)(v30 + 40) = n;
      }
      *(_DWORD *)(v30 + 56) = 0;
      a2 = (__int64 *)(v31 + 56);
      copy_argloc();
      ++v27;
      *(_DWORD *)(v30 + 72) = *(_DWORD *)(v31 + 72);
      if ( v8 == v27 )
        break;
    }
    *(_QWORD *)(a1 + 32) = v8;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v9 = v4[7];
  if ( v9 )
  {
    v53 = qalloc_or_throw(16 * v9, (__int64)a2, v6, a4);
    *(_QWORD *)(a1 + 48) = v53;
    v54 = v53;
    v55 = 0;
    *(_QWORD *)(a1 + 64) = v9;
    while ( 1 )
    {
      sub_123A40(16 * v55++ + v54);
      if ( v9 == v55 )
        break;
      v54 = *(_QWORD *)(a1 + 48);
    }
    *(_QWORD *)(a1 + 56) = v9;
  }
  *(_QWORD *)(a1 + 72) = 0;
  copy_tinfo_t();
  *(_DWORD *)(a1 + 80) = 0;
  copy_argloc();
  sub_64000((__int64 *)(a1 + 96), (__int64)(v4 + 12));
  *(_QWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  v12 = v4[15];
  if ( v12 )
  {
    v51 = (void *)qalloc_or_throw(16 * v12, (__int64)(v4 + 12), v10, v11);
    *(_QWORD *)(a1 + 112) = v51;
    v52 = (const void *)v4[14];
    *(_QWORD *)(a1 + 128) = v12;
    memcpy(v51, v52, 16 * v12);
    *(_QWORD *)(a1 + 120) = v12;
  }
  sub_64000((__int64 *)(a1 + 136), (__int64)(v4 + 17));
  *(_QWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  v15 = v4[20];
  if ( v15 )
  {
    v49 = (void *)qalloc_or_throw(16 * v15, (__int64)(v4 + 17), v13, v14);
    *(_QWORD *)(a1 + 152) = v49;
    v50 = (const void *)v4[19];
    *(_QWORD *)(a1 + 168) = v15;
    memcpy(v49, v50, 16 * v15);
    *(_QWORD *)(a1 + 160) = v15;
  }
  v16 = v4 + 22;
  sub_64000((__int64 *)(a1 + 176), (__int64)(v4 + 22));
  *(_QWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  v19 = v4[25];
  if ( v19 )
  {
    v48 = (void *)qalloc_or_throw(16 * v19, (__int64)v16, v17, v18);
    *(_QWORD *)(a1 + 192) = v48;
    v16 = (const void *)v4[24];
    *(_QWORD *)(a1 + 208) = v19;
    memcpy(v48, v16, 16 * v19);
    *(_QWORD *)(a1 + 200) = v19;
  }
  *(_QWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  v20 = v4[28];
  if ( v20 )
  {
    v46 = (void *)qalloc_or_throw(16 * v20, (__int64)v16, v17, v18);
    *(_QWORD *)(a1 + 216) = v46;
    v47 = (const void *)v4[27];
    *(_QWORD *)(a1 + 232) = v20;
    memcpy(v46, v47, 16 * v20);
    *(_QWORD *)(a1 + 224) = v20;
  }
  v21 = v4 + 30;
  sub_64000((__int64 *)(a1 + 240), (__int64)(v4 + 30));
  *(_QWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  v24 = v4[33];
  if ( v24 )
  {
    v45 = (void *)qalloc_or_throw(16 * v24, (__int64)v21, v22, v23);
    *(_QWORD *)(a1 + 256) = v45;
    v21 = (const void *)v4[32];
    *(_QWORD *)(a1 + 272) = v24;
    memcpy(v45, v21, 16 * v24);
    *(_QWORD *)(a1 + 264) = v24;
  }
  result = v4[35];
  *(_QWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  v26 = v4[37];
  *(_QWORD *)(a1 + 280) = result;
  if ( v26 )
  {
    result = qalloc_or_throw(48 * v26, (__int64)v21, v22, v23);
    *(_QWORD *)(a1 + 288) = result;
    v37 = result;
    v38 = 0;
    *(_QWORD *)(a1 + 304) = v26;
    while ( 1 )
    {
      v40 = 48 * v38 + v37;
      v41 = v4[36] + 48 * v38;
      *(_QWORD *)v40 = 0;
      *(_OWORD *)(v40 + 8) = 0;
      v42 = *(_QWORD *)(v41 + 8);
      if ( v42 )
      {
        v56 = (const void **)v41;
        v43 = (void *)qalloc_or_throw(*(_QWORD *)(v41 + 8), (__int64)v21, v36, v41);
        *(_QWORD *)v40 = v43;
        *(_QWORD *)(v40 + 16) = v42;
        v21 = *v56;
        result = (__int64)memcpy(v43, *v56, v42);
        *(_QWORD *)(v40 + 8) = v42;
        v41 = (__int64)v56;
      }
      *(_QWORD *)(v40 + 24) = 0;
      *(_OWORD *)(v40 + 32) = 0;
      v39 = *(_QWORD *)(v41 + 32);
      if ( v39 )
      {
        v57 = v41;
        v44 = (void *)qalloc_or_throw(*(_QWORD *)(v41 + 32), (__int64)v21, v36, v41);
        *(_QWORD *)(v40 + 24) = v44;
        *(_QWORD *)(v40 + 40) = v39;
        ++v38;
        v21 = *(const void **)(v57 + 24);
        result = (__int64)memcpy(v44, v21, v39);
        *(_QWORD *)(v40 + 32) = v39;
        if ( v26 == v38 )
        {
LABEL_27:
          *(_QWORD *)(a1 + 296) = v26;
          return result;
        }
      }
      else if ( v26 == ++v38 )
      {
        goto LABEL_27;
      }
      v37 = *(_QWORD *)(a1 + 288);
    }
  }
  return result;
}
