void __fastcall sub_BC9890(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rbx
  __m128i si128; // xmm0
  unsigned int v12; // eax
  __int64 v13; // rax
  __m128 v14; // xmm0
  __int64 v15; // rax
  _QWORD *v16; // rax
  _OWORD *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rdx
  _QWORD *v23; // r13
  __int64 v24; // r14
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 v28; // rsi
  unsigned int v29; // r15d
  __int64 v30; // rbx
  __int64 v31[2]; // [rsp+0h] [rbp-58h] BYREF
  const __m128i *v32[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 224);
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  v5 = *(_QWORD *)(a1 + 232);
  if ( !v5 || (v6 = *(unsigned int *)(v5 - 4), (_DWORD)v6 == *(_DWORD *)(v5 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 232));
    v5 = *(_QWORD *)(a1 + 232);
    v6 = *(unsigned int *)(v5 - 4);
  }
  *(_DWORD *)(v5 + 4 * v6) = v4;
  ++*(_DWORD *)(v5 - 4);
  v7 = sub_186B270(0x110u);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(unsigned int *)(a1 + 8);
  v10 = v7;
  *(__m128i *)v31 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a2 + 72)), (__m128i)v8);
  sub_13716C0(v7, v8, v9);
  si128 = _mm_load_si128((const __m128i *)v31);
  *(_QWORD *)v10 = &off_1C57D80;
  *(__m128i *)(v10 + 24) = si128;
  sub_180C5A0(v32, "seq");
  v12 = sub_15DA4C0(v8 + 560, v32);
  v13 = sub_15D2690(v8, v12);
  *(__m128 *)(v10 + 40) = _mm_loadh_ps((const double *)(v13 + 88));
  LODWORD(v13) = *(_DWORD *)(v13 + 16);
  *(_QWORD *)(v10 + 112) = 0;
  v14 = _mm_loadh_ps((const double *)(v10 + 32));
  *(_DWORD *)(v10 + 56) = v13;
  *(_DWORD *)(v10 + 80) = v13;
  *(_DWORD *)(v10 + 104) = v13;
  v15 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 128) = 0;
  *(_QWORD *)(v10 + 120) = v15;
  *(_QWORD *)(v10 + 136) = 0;
  *(_QWORD *)(v10 + 144) = 0;
  *(_QWORD *)(v10 + 152) = 0xFFFFFFFFLL;
  *(_QWORD *)(v10 + 160) = 0;
  *(__m128 *)(v10 + 64) = v14;
  *(__m128 *)(v10 + 88) = v14;
  v16 = (_QWORD *)sub_186B270(0x80u);
  *v16 = 0;
  v16[1] = 0;
  v16[2] = 0;
  v16[3] = 0;
  v16[4] = 0;
  v16[5] = 0;
  v16[6] = 0;
  v16[7] = 0;
  v16[8] = 0;
  v16[9] = 0;
  v16[10] = 0;
  v16[11] = 0;
  v16[12] = 0;
  v16[13] = 0;
  v16[14] = 0;
  v16[15] = 0;
  *(_QWORD *)(v10 + 168) = v16;
  *(_QWORD *)(v10 + 200) = v10 + 216;
  *(_QWORD *)(v10 + 176) = 8;
  *(_DWORD *)(v10 + 184) = 0;
  *(_DWORD *)(v10 + 192) = 0;
  *(_QWORD *)(v10 + 208) = 1;
  *(_WORD *)(v10 + 216) = 33;
  v17 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v10 + 256) = v8;
  *(_QWORD *)(v10 + 232) = v17;
  *(_QWORD *)(v10 + 240) = 8;
  *(_DWORD *)(v10 + 248) = 0;
  *(_QWORD *)(v10 + 264) = 0;
  *v17 = 0;
  v17[1] = 0;
  v17[2] = 0;
  v17[3] = 0;
  v17[4] = 0;
  v17[5] = 0;
  v17[6] = 0;
  v17[7] = 0;
  sub_180C5A0(v32, "");
  sub_6338A0(v10 + 168, v32);
  sub_180C5A0(v32, "a");
  sub_6338A0(v10 + 168, v32);
  sub_180C5A0(v32, "b");
  sub_6338A0(v10 + 168, v32);
  *(_QWORD *)(a1 + 912) = v10;
  v18 = v10;
  v19 = 0;
  sub_A6F1C0(a2, v18);
  v20 = *(unsigned int *)(a1 + 304);
  v21 = 4 * v20;
  if ( (_DWORD)v20 )
  {
    do
    {
      v22 = *(unsigned int *)(*(_QWORD *)(a1 + 336) + v19);
      v19 += 4;
      v23 = (_QWORD *)(*(_QWORD *)(a1 + 320) + 56 * v22);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 912) + 40LL))(*(_QWORD *)(a1 + 912), *v23);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 912) + 40LL))(*(_QWORD *)(a1 + 912), v23[2]);
    }
    while ( v21 != v19 );
    v24 = *(unsigned int *)(a1 + 304);
    if ( (_DWORD)v24 )
    {
      v25 = 4 * v24;
      v26 = 0;
      do
      {
        v27 = *(_QWORD *)(a1 + 320) + 56LL * *(unsigned int *)(*(_QWORD *)(a1 + 336) + v26);
        v28 = *(_QWORD *)(v27 + 32);
        if ( v28 )
        {
          v29 = 0;
          do
          {
            if ( v29 >= *(_DWORD *)(v28 - 4) )
              break;
            v30 = v29++;
            v30 *= 32;
            sub_BC95A0((_QWORD *)a1, v30 + v28);
            sub_BC95A0((_QWORD *)a1, *(_QWORD *)(v27 + 32) + v30 + 16);
            v28 = *(_QWORD *)(v27 + 32);
          }
          while ( v28 );
        }
        v26 += 4;
      }
      while ( v25 != v26 );
    }
  }
}

