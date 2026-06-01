__int64 __fastcall sub_3E9A70(__int64 *a1)
{
  _QWORD *v2; // rax
  size_t v3; // rbx
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r15
  int v10; // r13d
  __int64 v11; // r14
  _QWORD *v12; // rax
  __m128i v13; // xmm1
  _QWORD *v14; // rbx
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  size_t v21; // rbx
  _QWORD *v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rax
  _DWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r13
  int v28; // r14d
  __int64 v29; // r15
  __int64 v30; // rax
  __m128i v31; // xmm3
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rax
  _QWORD *v36; // rax
  _DWORD *v37; // rax
  void *v39; // rax
  const void *v40; // rsi
  void *v41; // rax
  const void *v42; // rsi
  __m128i si128; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v44; // [rsp+18h] [rbp-40h]

  v2 = (_QWORD *)operator new(0xC8u);
  v3 = a1[2];
  v4 = v2;
  *v2 = &off_2B26160;
  v5 = *a1;
  v4[2] = 0;
  v4[1] = v5;
  *(_OWORD *)(v4 + 3) = 0;
  if ( v3 )
  {
    v39 = (void *)qalloc_or_throw(v3);
    v4[2] = v39;
    v40 = (const void *)a1[1];
    v4[4] = v3;
    memcpy(v39, v40, v3);
    v4[3] = v3;
  }
  v6 = a1[4];
  v4[15] = -1;
  v4[16] = -1;
  v4[5] = v6;
  LODWORD(v6) = *((_DWORD *)a1 + 10);
  v4[17] = -1;
  *((_DWORD *)v4 + 12) = v6;
  v4[18] = 0;
  *(_OWORD *)(v4 + 7) = 0;
  *(_OWORD *)(v4 + 9) = 0;
  *(_OWORD *)(v4 + 11) = 0;
  *(_OWORD *)(v4 + 13) = 0;
  merge_handler_ctr(v4, "Types");
  *((_OWORD *)v4 + 10) = 0;
  *v4 = &unk_2BF9E80;
  v4[19] = 0;
  v7 = qvector_reserve(v4 + 19, 0, 6, 1);
  v4[19] = v7;
  v4[20] = 6;
  *(_DWORD *)v7 = 1701869908;
  *(_BYTE *)(v7 + 4) = 115;
  *(_BYTE *)(v4[19] + 5LL) = 0;
  *v4 = &off_2B26688;
  v8 = *a1;
  v4[22] = 0;
  v4[9] = 0;
  *(_OWORD *)(v4 + 23) = 0;
  if ( *(int *)(v8 + 28) > 0 )
  {
    v9 = 0;
    v44 = v4 + 22;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
    do
    {
      v10 = *(_DWORD *)(v8 + 4LL * (int)v9 + 16);
      v11 = switch_dbctx(v10);
      v12 = (_QWORD *)operator new(0x58u);
      v13 = _mm_load_si128(&si128);
      v14 = v12;
      v15 = v12 + 8;
      v16 = *(_QWORD *)(*a1 + 8) + 240LL;
      v17 = *(_QWORD *)(v11 + 1552);
      v12[4] = *a1;
      *v12 = &off_2B26748;
      v18 = v44;
      v14[5] = v17;
      v14[7] = v16;
      *((_DWORD *)v14 + 2) = v10;
      *((_DWORD *)v14 + 3) = -1;
      v14[6] = v18;
      v14[8] = 0;
      *((__m128i *)v14 + 1) = v13;
      *(_OWORD *)(v14 + 9) = 0;
      v19 = qvector_reserve(v15, 0, 6, 1);
      v14[8] = v19;
      v14[9] = 6;
      *(_DWORD *)v19 = 1701869908;
      *(_BYTE *)(v19 + 4) = 115;
      *(_BYTE *)(v14[8] + 5LL) = 0;
      v8 = *a1;
      v4[v9 + 7] = v14;
      *((_DWORD *)v14 + 3) = v9++;
    }
    while ( *(_DWORD *)(v8 + 28) > (int)v9 );
  }
  v20 = (_QWORD *)operator new(0xC8u);
  v21 = a1[2];
  v22 = v20;
  *v20 = &off_2B26160;
  v23 = *a1;
  v22[2] = 0;
  v22[1] = v23;
  *(_OWORD *)(v22 + 3) = 0;
  if ( v21 )
  {
    v41 = (void *)qalloc_or_throw(v21);
    v22[2] = v41;
    v42 = (const void *)a1[1];
    v22[4] = v21;
    memcpy(v41, v42, v21);
    v22[3] = v21;
  }
  v24 = a1[4];
  v22[15] = -1;
  v22[16] = -1;
  v22[5] = v24;
  LODWORD(v24) = *((_DWORD *)a1 + 10);
  v22[17] = -1;
  *((_DWORD *)v22 + 12) = v24;
  v22[18] = 0;
  *(_OWORD *)(v22 + 7) = 0;
  *(_OWORD *)(v22 + 9) = 0;
  *(_OWORD *)(v22 + 11) = 0;
  *(_OWORD *)(v22 + 13) = 0;
  merge_handler_ctr(v22, "Formats");
  *((_OWORD *)v22 + 10) = 0;
  *v22 = &unk_2BF9E80;
  v22[19] = 0;
  v25 = (_DWORD *)qvector_reserve(v22 + 19, 0, 8, 1);
  v22[19] = v25;
  v22[20] = 8;
  *v25 = 1836216134;
  *(_DWORD *)((char *)v25 + 3) = 1937006957;
  *(_BYTE *)(v22[19] + 7LL) = 0;
  *v22 = &off_2B266E8;
  v26 = *a1;
  v22[22] = 0;
  v22[9] = 0;
  *(_OWORD *)(v22 + 23) = 0;
  if ( *(int *)(v26 + 28) > 0 )
  {
    v27 = 0;
    v44 = v22 + 22;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
    do
    {
      v28 = *(_DWORD *)(v26 + 4LL * (int)v27 + 16);
      v29 = switch_dbctx(v28);
      v30 = operator new(0x58u);
      v31 = _mm_load_si128(&si128);
      v32 = v30;
      v33 = v30 + 64;
      v34 = *(_QWORD *)(*a1 + 8) + 360LL;
      v35 = *(_QWORD *)(v29 + 1552);
      *(_QWORD *)(v32 + 32) = *a1;
      *(_QWORD *)v32 = &off_2B26800;
      *(_QWORD *)(v32 + 56) = v34;
      *(_QWORD *)(v32 + 40) = v35 + 112;
      v36 = v44;
      *(_DWORD *)(v32 + 8) = v28;
      *(_DWORD *)(v32 + 12) = -1;
      *(_QWORD *)(v32 + 48) = v36;
      *(_QWORD *)(v32 + 64) = 0;
      *(__m128i *)(v32 + 16) = v31;
      *(_OWORD *)(v32 + 72) = 0;
      v37 = (_DWORD *)qvector_reserve(v33, 0, 8, 1);
      *(_QWORD *)(v32 + 64) = v37;
      *(_QWORD *)(v32 + 72) = 8;
      *v37 = 1836216134;
      *(_DWORD *)((char *)v37 + 3) = 1937006957;
      *(_BYTE *)(*(_QWORD *)(v32 + 64) + 7LL) = 0;
      v26 = *a1;
      v22[v27 + 7] = v32;
      *(_DWORD *)(v32 + 12) = v27++;
    }
    while ( *(_DWORD *)(v26 + 28) > (int)v27 );
  }
  return 0;
}
