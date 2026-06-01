__int64 __fastcall sub_5ECC30(__int64 a1, int a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r12d
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // edx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  v2 = a1 + 440;
  v4 = *(_QWORD *)(a1 + 448);
  v5 = *(_QWORD *)(a1 + 120);
  v6 = *(_QWORD *)(a1 + 440);
  if ( *(_QWORD *)(a1 + 456) < (unsigned __int64)(v4 + 1) )
  {
    v23 = qvector_reserve(a1 + 440, v6, v4 + 1, 8);
    *(_QWORD *)(a1 + 440) = v23;
    v6 = v23;
    v4 = *(_QWORD *)(a1 + 448);
  }
  *(_QWORD *)(v6 + 8 * v4) = v5;
  v7 = *(_QWORD *)(a1 + 448);
  v8 = *(_QWORD *)(a1 + 112);
  v9 = *(_QWORD *)(a1 + 440);
  v10 = v7 + 1;
  v11 = v7 + 2;
  *(_QWORD *)(a1 + 448) = v10;
  if ( *(_QWORD *)(a1 + 456) < v11 )
  {
    v26 = qvector_reserve(v2, v9, v11, 8);
    *(_QWORD *)(a1 + 440) = v26;
    v9 = v26;
    v10 = *(_QWORD *)(a1 + 448);
  }
  *(_QWORD *)(v9 + 8 * v10) = v8;
  v12 = *(_QWORD *)(a1 + 448);
  v13 = *(_QWORD *)(a1 + 128);
  v14 = *(_QWORD *)(a1 + 440);
  v15 = v12 + 1;
  v16 = v12 + 2;
  *(_QWORD *)(a1 + 448) = v15;
  if ( *(_QWORD *)(a1 + 456) < v16 )
  {
    v25 = qvector_reserve(v2, v14, v16, 8);
    *(_QWORD *)(a1 + 440) = v25;
    v14 = v25;
    v15 = *(_QWORD *)(a1 + 448);
  }
  *(_QWORD *)(v14 + 8 * v15) = v13;
  v17 = *(_QWORD *)(a1 + 176);
  ++*(_QWORD *)(a1 + 448);
  v18 = *(_DWORD *)(a1 + 220);
  v19 = *(_QWORD *)(a1 + 168);
  if ( *(_QWORD *)(a1 + 184) < (unsigned __int64)(v17 + 1) )
  {
    v24 = qvector_reserve(a1 + 168, v19, v17 + 1, 1);
    *(_QWORD *)(a1 + 168) = v24;
    v19 = v24;
    v17 = *(_QWORD *)(a1 + 176);
  }
  *(_BYTE *)(v19 + v17) = v18;
  ++*(_QWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 220) = a2;
  v20 = sub_5E7430(a1);
  v21 = *(_DWORD *)(a1 + 488);
  *(_QWORD *)(a1 + 128) = v20;
  *(__m128i *)(a1 + 112) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)v20);
  *(_DWORD *)(v20 + 188) = v21;
  return 0;
}
