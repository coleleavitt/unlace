__int64 __fastcall sub_97FB00(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v8; // r12
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 *v17; // r14
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __m128i v30; // xmm2
  __int64 v31; // rax
  __m128i v32; // xmm3
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v45; // rax
  __m128i v46; // xmm4
  __m128i v47; // xmm5
  __int64 v48; // rax
  __m128i v49; // [rsp+8h] [rbp-60h] BYREF
  __int64 v50; // [rsp+18h] [rbp-50h]
  __m128i v51; // [rsp+28h] [rbp-40h] BYREF
  __int64 v52; // [rsp+38h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    if ( *(_BYTE *)(a1 + 320) )
      return 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
  }
  v8 = sub_975DE0(a1, a2, a3, a4, a5, a6);
  *(_QWORD *)(v8 + 32) = a2 & 0xFFFFFFFFFFFFFFF9LL;
  sub_9784E0((_QWORD *)a1, v8, a2);
  *(_QWORD *)(a1 + 16) = v8;
  v9 = *(_QWORD **)(a2 + 8);
  v17 = sub_97E030((__m128i *)a1, v9, 0, v10, v11, v12);
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( *(_BYTE *)(a1 + 320) )
      return 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v18 = *(_QWORD *)(a1 + 48);
  v19 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  *(_QWORD *)(a1 + 24) = v17;
  v50 = v18;
  v20 = *(_QWORD *)(a1 + 72);
  v49 = v19;
  v51 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v52 = v20;
  v21 = sub_975DA0(a1, (__int64)v9, v13, v14, v15, v16);
  *(_QWORD *)(a1 + 24) = v21;
  *(_QWORD *)(v21 + 40) = a2;
  v22 = *(_QWORD *)(a1 + 128);
  v23 = *(_DWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 56) = v6;
  *(_QWORD *)(a1 + 64) = v22;
  *(_DWORD *)(a1 + 72) = v23;
  *(_QWORD *)(a1 + 40) = v22;
  *(_DWORD *)(a1 + 48) = v23;
  *(_QWORD *)(a1 + 32) = v21;
  v26 = sub_979740(a1, *(_QWORD *)(a2 + 24), 1, 0, v24, v25);
  if ( !v26 )
  {
    v26 = *(_QWORD *)(a1 + 32);
LABEL_10:
    sub_975B20(v8, v26, 2LL * (v26 == 0), (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v27, v28);
    v29 = v52;
    *(_QWORD *)(a1 + 24) = v17;
    v30 = _mm_loadu_si128(&v51);
    *(_QWORD *)(a1 + 72) = v29;
    v31 = v50;
    v32 = _mm_loadu_si128(&v49);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 48) = v31;
    v33 = *(_QWORD *)(a1 + 8);
    *(__m128i *)(a1 + 56) = v30;
    *(__m128i *)(a1 + 32) = v32;
    sub_975B20(v8, v6, 2LL * (v6 == 0), (_QWORD *)(v33 + 32), v34, v35);
    v40 = sub_975DA0(a1, v6, v36, v37, v38, v39);
    v41 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 16) = v40;
    return sub_979740(a1, v41, 1, 0, v42, v43);
  }
  if ( !*(_QWORD *)(a1 + 16) || !*(_BYTE *)(a1 + 320) )
    goto LABEL_10;
  v45 = v52;
  v46 = _mm_loadu_si128(&v51);
  *(_QWORD *)(a1 + 24) = v17;
  v47 = _mm_loadu_si128(&v49);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 72) = v45;
  v48 = v50;
  *(__m128i *)(a1 + 56) = v46;
  *(_QWORD *)(a1 + 48) = v48;
  *(__m128i *)(a1 + 32) = v47;
  return 0;
}

