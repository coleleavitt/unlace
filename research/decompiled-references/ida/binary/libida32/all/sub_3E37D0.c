__int64 __fastcall sub_3E37D0(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  size_t v8; // rbx
  _QWORD *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // r13d
  __int64 v16; // r14
  _QWORD *v17; // rax
  __m128i v18; // xmm1
  _QWORD *v19; // rbx
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  size_t v30; // rbx
  _QWORD *v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rax
  _DWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r13
  int v37; // r14d
  __int64 v38; // r15
  __int64 v39; // rax
  __m128i v40; // xmm3
  __int64 v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rax
  _QWORD *v45; // rax
  _DWORD *v46; // rax
  void *v48; // rax
  const void *v49; // rsi
  void *v50; // rax
  const void *v51; // rsi
  __m128i si128; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v53; // [rsp+18h] [rbp-40h]

  v3 = (_QWORD *)operator new(0xC8u);
  v8 = a1[2];
  v9 = v3;
  *v3 = &off_2AFD020;
  v10 = *a1;
  v9[2] = 0;
  v9[1] = v10;
  *(_OWORD *)(v9 + 3) = 0;
  if ( v8 )
  {
    v48 = (void *)qalloc_or_throw(v8, a2, v4, v5, v6, v7);
    v9[2] = v48;
    v49 = (const void *)a1[1];
    v9[4] = v8;
    memcpy(v48, v49, v8);
    v9[3] = v8;
  }
  v11 = a1[4];
  v9[15] = -1;
  *(_OWORD *)(v9 + 7) = 0;
  v9[5] = v11;
  LODWORD(v11) = *((_DWORD *)a1 + 10);
  v9[16] = -1;
  *((_DWORD *)v9 + 12) = v11;
  v9[17] = 0xFFFFFFFFLL;
  *((_DWORD *)v9 + 36) = 0;
  *(_OWORD *)(v9 + 9) = 0;
  *(_OWORD *)(v9 + 11) = 0;
  *(_OWORD *)(v9 + 13) = 0;
  merge_handler_ctr();
  *((_OWORD *)v9 + 10) = 0;
  *v9 = &unk_2BCFEE0;
  v9[19] = 0;
  v12 = qvector_reserve(v9 + 19, 0, 6, 1);
  v9[19] = v12;
  v9[20] = 6;
  *(_DWORD *)v12 = 1701869908;
  *(_BYTE *)(v12 + 4) = 115;
  *(_BYTE *)(v9[19] + 5LL) = 0;
  *v9 = &off_2AFD548;
  v13 = *a1;
  v9[22] = 0;
  v9[9] = 0;
  *(_OWORD *)(v9 + 23) = 0;
  if ( *(int *)(v13 + 28) > 0 )
  {
    v14 = 0;
    v53 = v9 + 22;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
    do
    {
      v15 = *(_DWORD *)(v13 + 4LL * (int)v14 + 16);
      v16 = switch_dbctx(v15);
      v17 = (_QWORD *)operator new(0x58u);
      v18 = _mm_load_si128(&si128);
      v19 = v17;
      v20 = v17 + 8;
      v21 = *(_QWORD *)(*a1 + 8) + 240LL;
      v22 = *(_QWORD *)(v16 + 1360);
      v17[4] = *a1;
      *v17 = &off_2AFD608;
      v23 = v53;
      v19[5] = v22;
      v19[7] = v21;
      *((_DWORD *)v19 + 2) = v15;
      *((_DWORD *)v19 + 3) = -1;
      v19[6] = v23;
      v19[8] = 0;
      *((__m128i *)v19 + 1) = v18;
      *(_OWORD *)(v19 + 9) = 0;
      v24 = qvector_reserve(v20, 0, 6, 1);
      v19[8] = v24;
      v19[9] = 6;
      *(_DWORD *)v24 = 1701869908;
      *(_BYTE *)(v24 + 4) = 115;
      *(_BYTE *)(v19[8] + 5LL) = 0;
      v13 = *a1;
      v9[v14 + 7] = v19;
      *((_DWORD *)v19 + 3) = v14++;
    }
    while ( *(_DWORD *)(v13 + 28) > (int)v14 );
  }
  v25 = (_QWORD *)operator new(0xC8u);
  v30 = a1[2];
  v31 = v25;
  *v25 = &off_2AFD020;
  v32 = *a1;
  v31[2] = 0;
  v31[1] = v32;
  *(_OWORD *)(v31 + 3) = 0;
  if ( v30 )
  {
    v50 = (void *)qalloc_or_throw(v30, 0, v26, v27, v28, v29);
    v31[2] = v50;
    v51 = (const void *)a1[1];
    v31[4] = v30;
    memcpy(v50, v51, v30);
    v31[3] = v30;
  }
  v33 = a1[4];
  v31[15] = -1;
  *(_OWORD *)(v31 + 7) = 0;
  v31[5] = v33;
  LODWORD(v33) = *((_DWORD *)a1 + 10);
  v31[16] = -1;
  *((_DWORD *)v31 + 12) = v33;
  v31[17] = 0xFFFFFFFFLL;
  *((_DWORD *)v31 + 36) = 0;
  *(_OWORD *)(v31 + 9) = 0;
  *(_OWORD *)(v31 + 11) = 0;
  *(_OWORD *)(v31 + 13) = 0;
  merge_handler_ctr();
  *((_OWORD *)v31 + 10) = 0;
  *v31 = &unk_2BCFEE0;
  v31[19] = 0;
  v34 = (_DWORD *)qvector_reserve(v31 + 19, 0, 8, 1);
  v31[19] = v34;
  v31[20] = 8;
  *v34 = 1836216134;
  *(_DWORD *)((char *)v34 + 3) = 1937006957;
  *(_BYTE *)(v31[19] + 7LL) = 0;
  *v31 = &off_2AFD5A8;
  v35 = *a1;
  v31[22] = 0;
  v31[9] = 0;
  *(_OWORD *)(v31 + 23) = 0;
  if ( *(int *)(v35 + 28) > 0 )
  {
    v36 = 0;
    v53 = v31 + 22;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
    do
    {
      v37 = *(_DWORD *)(v35 + 4LL * (int)v36 + 16);
      v38 = switch_dbctx(v37);
      v39 = operator new(0x58u);
      v40 = _mm_load_si128(&si128);
      v41 = v39;
      v42 = v39 + 64;
      v43 = *(_QWORD *)(*a1 + 8) + 360LL;
      v44 = *(_QWORD *)(v38 + 1360);
      *(_QWORD *)(v41 + 32) = *a1;
      *(_QWORD *)v41 = &off_2AFD6C0;
      *(_QWORD *)(v41 + 56) = v43;
      *(_QWORD *)(v41 + 40) = v44 + 112;
      v45 = v53;
      *(_DWORD *)(v41 + 8) = v37;
      *(_DWORD *)(v41 + 12) = -1;
      *(_QWORD *)(v41 + 48) = v45;
      *(_QWORD *)(v41 + 64) = 0;
      *(__m128i *)(v41 + 16) = v40;
      *(_OWORD *)(v41 + 72) = 0;
      v46 = (_DWORD *)qvector_reserve(v42, 0, 8, 1);
      *(_QWORD *)(v41 + 64) = v46;
      *(_QWORD *)(v41 + 72) = 8;
      *v46 = 1836216134;
      *(_DWORD *)((char *)v46 + 3) = 1937006957;
      *(_BYTE *)(*(_QWORD *)(v41 + 64) + 7LL) = 0;
      v35 = *a1;
      v31[v36 + 7] = v41;
      *(_DWORD *)(v41 + 12) = v36++;
    }
    while ( *(_DWORD *)(v35 + 28) > (int)v36 );
  }
  return 0;
}

