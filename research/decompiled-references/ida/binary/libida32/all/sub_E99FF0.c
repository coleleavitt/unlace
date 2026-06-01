unsigned __int64 __fastcall sub_E99FF0(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int128 a9,
        __int128 a10,
        __int128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  unsigned __int64 v17; // rbx
  char *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r12
  int v22; // ebp
  __int64 v23; // r14
  __int64 v24; // r13
  char *v25; // rdi
  char *v26; // rdx
  __int64 v27; // r13
  char *v28; // rdi
  char *v29; // rax
  __int64 v30; // r13
  size_t v31; // rdx
  char *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  _OWORD v38[4]; // [rsp+10h] [rbp-48h] BYREF

  v17 = sub_E99B50((__int64 *)(a1 + 2352), 8 * (6LL * *((_QWORD *)&a9 + 1) + 3) + 64, 3u);
  *(_DWORD *)v17 = a2;
  *(_DWORD *)(v17 + 48) = a4;
  *(_DWORD *)(v17 + 4) = a8;
  *(_DWORD *)(v17 + 52) = a5;
  *(_DWORD *)(v17 + 12) = a3;
  *(_DWORD *)(v17 + 16) = DWORD2(a9);
  *(_DWORD *)(v17 + 56) = a6;
  *(_DWORD *)(v17 + 8) = 53;
  *(_QWORD *)(v17 + 24) = 0;
  *(_DWORD *)(v17 + 32) = 103;
  *(_QWORD *)(v17 + 40) = 0;
  *(_DWORD *)(v17 + 60) = a7;
  v38[0] = a9;
  sub_E942E0((__int64)v38, (char *)(v17 + 64));
  v18 = (char *)(v17 + 8LL * *(unsigned int *)(v17 + 16) + 64);
  v38[0] = _mm_loadu_si128((const __m128i *)&a10);
  sub_E942E0((__int64)v38, v18);
  v19 = 16LL * *(unsigned int *)(v17 + 16);
  v38[0] = _mm_loadu_si128((const __m128i *)&a11);
  sub_E942E0((__int64)v38, (char *)(v17 + v19 + 64));
  v20 = *(unsigned int *)(v17 + 16);
  v21 = 8 * v20;
  v22 = *(_DWORD *)(v17 + 16);
  v23 = 8 * (v20 + *((_QWORD *)&a9 + 1));
  v24 = 16 * v20 + 64;
  v25 = (char *)(v17 + v24 + 8 * v20);
  v26 = (char *)(v23 + v17 + v24);
  if ( v26 != v25 )
    memset(v25, 0, 8 * ((unsigned __int64)(v26 - 8 - v25) >> 3) + 8);
  v27 = v21 + v24;
  v28 = (char *)(v17 + v27 + v21);
  v29 = (char *)(v23 + v17 + v27);
  if ( v29 != v28 )
    memset(v28, 0, 8 * ((unsigned __int64)(v29 - 8 - v28) >> 3) + 8);
  v30 = v21 + v27;
  v31 = 8LL * (unsigned int)(v22 + 1);
  v32 = (char *)(v17 + v30 + v21 + 16);
  if ( v32 != &v32[v31] )
    memset(v32, 0, v31);
  v33 = a14;
  *(__m128 *)(v17 + v30 + v21) = _mm_loadh_ps((const double *)&a13);
  *(_QWORD *)(v17 + 24) = v33;
  v34 = a15;
  *(_DWORD *)(v17 + 32) = 103;
  *(_QWORD *)(v17 + 40) = v34;
  return v17;
}

