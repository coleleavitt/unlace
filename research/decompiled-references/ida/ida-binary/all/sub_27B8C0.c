__int64 __fastcall sub_27B8C0(__int64 a1, __int64 a2)
{
  size_t v3; // r12
  __int64 v4; // rax
  __int64 v5; // r12
  size_t v6; // r12
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // r12
  void *v13; // rax
  const void *v14; // rsi
  void *v15; // rax
  const void *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // rdx
  const void **v22; // r12
  __int64 v23; // r8
  void *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // r14
  __int64 v29; // rdx
  const void **v30; // r12
  __int64 v31; // r8
  void *v32; // rax
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // r15
  __int64 v36; // r14
  __int64 v37; // rdx
  const void **v38; // r12
  __int64 v39; // r8
  void *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // r14
  __int64 v45; // rdx
  const void **v46; // r12
  __int64 v47; // r8
  void *v48; // rax
  void *v49; // rax
  const void *v50; // rsi
  void *v51; // rax
  const void *v52; // rsi
  __int64 v53; // [rsp+0h] [rbp-48h]
  __int64 v54; // [rsp+0h] [rbp-48h]
  __int64 v55; // [rsp+0h] [rbp-48h]
  __int64 v56; // [rsp+0h] [rbp-48h]
  __int64 n; // [rsp+8h] [rbp-40h]
  __int64 na; // [rsp+8h] [rbp-40h]
  __int64 nb; // [rsp+8h] [rbp-40h]
  __int64 nc; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = &unk_871288;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
  {
    v13 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 16));
    *(_QWORD *)(a1 + 24) = v3;
    v14 = *(const void **)(a2 + 8);
    *(_QWORD *)(a1 + 8) = v13;
    memcpy(v13, v14, v3);
    *(_QWORD *)(a1 + 16) = v3;
  }
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)a1 = interactive_graph_t___vtable;
  v4 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  v5 = *(_QWORD *)(a2 + 88);
  *(_QWORD *)(a1 + 72) = v4;
  if ( v5 )
  {
    v51 = (void *)qalloc_or_throw(4 * v5);
    *(_QWORD *)(a1 + 80) = v51;
    v52 = *(const void **)(a2 + 80);
    *(_QWORD *)(a1 + 96) = v5;
    memcpy(v51, v52, 4 * v5);
    *(_QWORD *)(a1 + 88) = v5;
  }
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  v6 = *(_QWORD *)(a2 + 112);
  if ( v6 )
  {
    v49 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 112));
    *(_QWORD *)(a1 + 104) = v49;
    v50 = *(const void **)(a2 + 104);
    *(_QWORD *)(a1 + 120) = v6;
    memcpy(v49, v50, v6);
    *(_QWORD *)(a1 + 112) = v6;
  }
  *(_QWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  v7 = *(_QWORD *)(a2 + 136);
  if ( v7 )
  {
    v41 = qalloc_or_throw(24 * v7);
    *(_QWORD *)(a1 + 128) = v41;
    v42 = v41;
    v43 = 0;
    *(_QWORD *)(a1 + 144) = v7;
    while ( 1 )
    {
      v44 = 24 * v43 + v42;
      v45 = *(_QWORD *)(a2 + 128) + 24 * v43;
      *(_QWORD *)v44 = 0;
      v46 = (const void **)v45;
      *(_OWORD *)(v44 + 8) = 0;
      v47 = *(_QWORD *)(v45 + 8);
      if ( v47 )
      {
        v56 = *(_QWORD *)(v45 + 8);
        nc = 4 * v47;
        v48 = (void *)qalloc_or_throw(4 * v47);
        *(_QWORD *)v44 = v48;
        ++v43;
        *(_QWORD *)(v44 + 16) = v56;
        memcpy(v48, *v46, nc);
        *(_QWORD *)(v44 + 8) = v56;
        if ( v7 == v43 )
        {
LABEL_37:
          *(_QWORD *)(a1 + 136) = v7;
          break;
        }
      }
      else if ( v7 == ++v43 )
      {
        goto LABEL_37;
      }
      v42 = *(_QWORD *)(a1 + 128);
    }
  }
  *(_QWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  v8 = *(_QWORD *)(a2 + 160);
  if ( !v8 )
    goto LABEL_9;
  v33 = qalloc_or_throw(24 * v8);
  *(_QWORD *)(a1 + 152) = v33;
  v34 = v33;
  v35 = 0;
  *(_QWORD *)(a1 + 168) = v8;
  while ( 1 )
  {
    v36 = 24 * v35 + v34;
    v37 = *(_QWORD *)(a2 + 152) + 24 * v35;
    *(_QWORD *)v36 = 0;
    v38 = (const void **)v37;
    *(_OWORD *)(v36 + 8) = 0;
    v39 = *(_QWORD *)(v37 + 8);
    if ( v39 )
      break;
    if ( v8 == ++v35 )
      goto LABEL_31;
LABEL_28:
    v34 = *(_QWORD *)(a1 + 152);
  }
  v55 = *(_QWORD *)(v37 + 8);
  nb = 4 * v39;
  v40 = (void *)qalloc_or_throw(4 * v39);
  *(_QWORD *)v36 = v40;
  ++v35;
  *(_QWORD *)(v36 + 16) = v55;
  memcpy(v40, *v38, nb);
  *(_QWORD *)(v36 + 8) = v55;
  if ( v8 != v35 )
    goto LABEL_28;
LABEL_31:
  *(_QWORD *)(a1 + 160) = v8;
LABEL_9:
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  v9 = *(_QWORD *)(a2 + 184);
  if ( !v9 )
    goto LABEL_10;
  v25 = qalloc_or_throw(24 * v9);
  *(_QWORD *)(a1 + 176) = v25;
  v26 = v25;
  v27 = 0;
  *(_QWORD *)(a1 + 192) = v9;
  while ( 2 )
  {
    v28 = 24 * v27 + v26;
    v29 = *(_QWORD *)(a2 + 176) + 24 * v27;
    *(_QWORD *)v28 = 0;
    v30 = (const void **)v29;
    *(_OWORD *)(v28 + 8) = 0;
    v31 = *(_QWORD *)(v29 + 8);
    if ( !v31 )
    {
      if ( v9 == ++v27 )
        break;
      goto LABEL_22;
    }
    v54 = *(_QWORD *)(v29 + 8);
    na = 4 * v31;
    v32 = (void *)qalloc_or_throw(4 * v31);
    *(_QWORD *)v28 = v32;
    ++v27;
    *(_QWORD *)(v28 + 16) = v54;
    memcpy(v32, *v30, na);
    *(_QWORD *)(v28 + 8) = v54;
    if ( v9 != v27 )
    {
LABEL_22:
      v26 = *(_QWORD *)(a1 + 176);
      continue;
    }
    break;
  }
  *(_QWORD *)(a1 + 184) = v9;
LABEL_10:
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  v10 = *(_QWORD *)(a2 + 208);
  if ( !v10 )
    goto LABEL_11;
  v17 = qalloc_or_throw(24 * v10);
  *(_QWORD *)(a1 + 200) = v17;
  v18 = v17;
  v19 = 0;
  *(_QWORD *)(a1 + 216) = v10;
  while ( 2 )
  {
    v20 = 24 * v19 + v18;
    v21 = *(_QWORD *)(a2 + 200) + 24 * v19;
    *(_QWORD *)v20 = 0;
    v22 = (const void **)v21;
    *(_OWORD *)(v20 + 8) = 0;
    v23 = *(_QWORD *)(v21 + 8);
    if ( !v23 )
    {
      if ( v10 == ++v19 )
        break;
      goto LABEL_16;
    }
    v53 = *(_QWORD *)(v21 + 8);
    n = 4 * v23;
    v24 = (void *)qalloc_or_throw(4 * v23);
    *(_QWORD *)v20 = v24;
    ++v19;
    *(_QWORD *)(v20 + 16) = v53;
    memcpy(v24, *v22, n);
    *(_QWORD *)(v20 + 8) = v53;
    if ( v10 != v19 )
    {
LABEL_16:
      v18 = *(_QWORD *)(a1 + 200);
      continue;
    }
    break;
  }
  *(_QWORD *)(a1 + 208) = v10;
LABEL_11:
  *(_QWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  v11 = *(_QWORD *)(a2 + 232);
  if ( v11 )
  {
    v15 = (void *)qalloc_or_throw(16 * v11);
    *(_QWORD *)(a1 + 224) = v15;
    v16 = *(const void **)(a2 + 224);
    *(_QWORD *)(a1 + 240) = v11;
    memcpy(v15, v16, 16 * v11);
    *(_QWORD *)(a1 + 232) = v11;
  }
  return sub_2A21D0(a1 + 248, a2 + 248);
}
