void __fastcall sub_507990(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  unsigned __int64 v5; // r15
  int v7; // eax
  __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // r14
  const void *v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rbx
  void *v18; // rax
  void *v19; // rax
  __m128i si128; // xmm2
  __m128i *v21; // rbx
  __int64 *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rdx
  char v27; // dl
  __int64 v28; // rdi
  __int64 v29; // rax
  void *v30; // rdi
  __m128i v31[4]; // [rsp+0h] [rbp-48h] BYREF

  v3 = a1[4];
  v4 = *(_QWORD *)v3 + 16LL * (int)a2;
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 8LL);
  if ( a3 < **(_QWORD **)v4 || a3 >= v5 )
  {
    if ( !under_debugger )
      interr(1366);
    goto LABEL_26;
  }
  v7 = *(_DWORD *)(v3 + 180);
  if ( v7 )
    goto LABEL_6;
  v31[0].m128i_i32[0] = a2;
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    v7 = *(_DWORD *)(v3 + 180);
LABEL_6:
    *(_DWORD *)(v3 + 180) = v7 + 1;
  }
  v9 = *(_QWORD *)v4;
  v10 = (_QWORD *)(v4 + 16);
  sub_5047B0((__int64 *)(a1[4] + 64LL), 4, (__int64)a1, a2, a3, *(_QWORD *)(v9 + 8));
  v11 = *(v10 - 2);
  *((_BYTE *)v10 - 4) = 1;
  *(_QWORD *)(v11 + 8) = a3;
  v12 = (__int64 *)a1[4];
  v13 = (const void *)*(v10 - 2);
  v14 = *v12;
  v15 = v12[1];
  v16 = (__int64)v10 - *v12;
  if ( v12[2] < (unsigned __int64)(v15 + 1) )
  {
    v28 = a1[4];
    v31[0].m128i_i64[0] = (__int64)v10 - *v12;
    v29 = qvector_reserve(v28, v14, v15 + 1, 16);
    v16 = v31[0].m128i_i64[0];
    v15 = v12[1];
    *v12 = v29;
    v10 = (_QWORD *)(v16 + v29);
  }
  v31[0] = _mm_unpacklo_epi64((__m128i)a3, (__m128i)v5);
  memmove(v10 + 2, v10, 16 * v15 - v16);
  *v10 = 0;
  *((_DWORD *)v10 + 2) = 0;
  *((_BYTE *)v10 + 12) = 1;
  ++v12[1];
  qfree(nullptr);
  v12[3] = (__int64)v10;
  qfree(nullptr);
  v17 = (_QWORD *)v12[3];
  v18 = (void *)qalloc(*((unsigned int *)v12 + 8));
  if ( !v18 )
    sub_3BC000((int)"ranges_cache_t");
  v19 = memcpy(v18, v13, *((unsigned int *)v12 + 8));
  si128 = _mm_load_si128(v31);
  *v17 = v19;
  v21 = *(__m128i **)v12[3];
  *v21 = si128;
  if ( !(unsigned __int8)sub_503D10(a1, v21) )
  {
    if ( !under_debugger )
      interr(1367);
LABEL_26:
    BUG();
  }
  v22 = (__int64 *)(a1[4] + 64LL);
  sub_5056E0(v22, 0, (__int64)a1, v21);
  v24 = a1[4];
  v25 = *(_DWORD *)(v24 + 180);
  if ( v25 || (v27 = must_journal(v22, 0, v23), v25 = *(_DWORD *)(v24 + 180), v27) )
    *(_DWORD *)(v24 + 180) = --v25;
  if ( !v25 )
  {
    v26 = *(_QWORD *)(v24 + 72);
    if ( v26 )
    {
      add_undo_record(*(unsigned int *)(v24 + 176), *(_QWORD *)(v24 + 64), v26);
      v30 = *(void **)(v24 + 64);
      if ( v30 )
      {
        *(_QWORD *)(v24 + 72) = 0;
        qfree(v30);
        *(_QWORD *)(v24 + 64) = 0;
        *(_QWORD *)(v24 + 80) = 0;
      }
      *(_QWORD *)(v24 + 144) = -1;
    }
  }
}
