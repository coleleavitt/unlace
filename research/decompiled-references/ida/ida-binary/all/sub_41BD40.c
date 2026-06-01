void __fastcall sub_41BD40(__int64 a1, __int64 a2)
{
  size_t v3; // r12
  size_t v4; // r12
  size_t v5; // r12
  size_t v6; // r12
  size_t v7; // r12
  size_t v8; // r12
  size_t v9; // r12
  size_t v10; // r12
  size_t v11; // r12
  size_t v12; // r12
  void *v13; // rax
  const void *v14; // rsi
  void *v15; // rax
  const void *v16; // rsi
  void *v17; // rax
  const void *v18; // rsi
  void *v19; // rax
  const void *v20; // rsi
  void *v21; // rax
  const void *v22; // rsi
  void *v23; // rax
  const void *v24; // rsi
  void *v25; // rax
  const void *v26; // rsi
  void *v27; // rax
  const void *v28; // rsi
  void *v29; // rax
  const void *v30; // rsi
  void *v31; // rax
  const void *v32; // rsi

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v13 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 8));
    *(_QWORD *)(a1 + 16) = v3;
    v14 = *(const void **)a2;
    *(_QWORD *)a1 = v13;
    memcpy(v13, v14, v3);
    *(_QWORD *)(a1 + 8) = v3;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v4 = *(_QWORD *)(a2 + 32);
  if ( v4 )
  {
    v31 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 32));
    *(_QWORD *)(a1 + 24) = v31;
    v32 = *(const void **)(a2 + 24);
    *(_QWORD *)(a1 + 40) = v4;
    memcpy(v31, v32, v4);
    *(_QWORD *)(a1 + 32) = v4;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v5 = *(_QWORD *)(a2 + 56);
  if ( v5 )
  {
    v29 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 56));
    *(_QWORD *)(a1 + 48) = v29;
    v30 = *(const void **)(a2 + 48);
    *(_QWORD *)(a1 + 64) = v5;
    memcpy(v29, v30, v5);
    *(_QWORD *)(a1 + 56) = v5;
  }
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  v6 = *(_QWORD *)(a2 + 80);
  if ( v6 )
  {
    v27 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 80));
    *(_QWORD *)(a1 + 72) = v27;
    v28 = *(const void **)(a2 + 72);
    *(_QWORD *)(a1 + 88) = v6;
    memcpy(v27, v28, v6);
    *(_QWORD *)(a1 + 80) = v6;
  }
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  v7 = *(_QWORD *)(a2 + 104);
  if ( v7 )
  {
    v25 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 104));
    *(_QWORD *)(a1 + 96) = v25;
    v26 = *(const void **)(a2 + 96);
    *(_QWORD *)(a1 + 112) = v7;
    memcpy(v25, v26, v7);
    *(_QWORD *)(a1 + 104) = v7;
  }
  *(_QWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  v8 = *(_QWORD *)(a2 + 128);
  if ( v8 )
  {
    v23 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 128));
    *(_QWORD *)(a1 + 120) = v23;
    v24 = *(const void **)(a2 + 120);
    *(_QWORD *)(a1 + 136) = v8;
    memcpy(v23, v24, v8);
    *(_QWORD *)(a1 + 128) = v8;
  }
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  v9 = *(_QWORD *)(a2 + 152);
  if ( v9 )
  {
    v21 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 152));
    *(_QWORD *)(a1 + 144) = v21;
    v22 = *(const void **)(a2 + 144);
    *(_QWORD *)(a1 + 160) = v9;
    memcpy(v21, v22, v9);
    *(_QWORD *)(a1 + 152) = v9;
  }
  *(_QWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  v10 = *(_QWORD *)(a2 + 176);
  if ( v10 )
  {
    v19 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 176));
    *(_QWORD *)(a1 + 168) = v19;
    v20 = *(const void **)(a2 + 168);
    *(_QWORD *)(a1 + 184) = v10;
    memcpy(v19, v20, v10);
    *(_QWORD *)(a1 + 176) = v10;
  }
  *(_QWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  v11 = *(_QWORD *)(a2 + 200);
  if ( v11 )
  {
    v17 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 200));
    *(_QWORD *)(a1 + 192) = v17;
    v18 = *(const void **)(a2 + 192);
    *(_QWORD *)(a1 + 208) = v11;
    memcpy(v17, v18, v11);
    *(_QWORD *)(a1 + 200) = v11;
  }
  *(_QWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  v12 = *(_QWORD *)(a2 + 224);
  if ( v12 )
  {
    v15 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 224));
    *(_QWORD *)(a1 + 232) = v12;
    v16 = *(const void **)(a2 + 216);
    *(_QWORD *)(a1 + 216) = v15;
    memcpy(v15, v16, v12);
    *(_QWORD *)(a1 + 224) = v12;
  }
}
