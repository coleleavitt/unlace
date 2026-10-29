void __fastcall sub_20BCEC0(__int64 a1, __m128i *a2)
{
  __int64 v3; // r13
  const __m128i *v5; // r12
  __int64 *v6; // rsi
  __int64 v7; // rdx
  const __m128i *v8; // rdx
  const __m128i *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const __m128i *v13; // r13
  __int64 v14; // r12
  __m128i *v15; // rbx
  unsigned __int64 v16; // rax
  const __m128i *v17; // r12
  __int64 v18; // r9
  const __m128i *v19; // rdi
  __int64 v20; // rcx
  unsigned __int64 v21; // r14
  __int64 v22; // rdi
  int v23; // edx
  unsigned int v24; // eax
  __int64 *v25; // rsi
  __int64 v26; // rax
  __m128i *v27; // rdi
  int v28; // eax
  __int64 *v29; // r8
  int v30; // edx
  __int64 *v31; // rsi
  __int64 v32; // r8
  int v33; // edx
  unsigned int v34; // eax
  __int64 *v35; // rdi
  __int64 v36; // r10
  unsigned int v37; // eax
  int v38; // edx
  int i; // esi
  int v40; // r10d
  __int64 *v41; // rsi
  int v42; // edi
  int v43; // r10d
  __m128 v44; // [rsp+10h] [rbp-108h] BYREF
  _BYTE v45[248]; // [rsp+20h] [rbp-F8h] BYREF

  v3 = a1 + 16;
  v5 = (const __m128i *)sub_20ABC80(a1 + 16);
  if ( *(_DWORD *)(a1 + 16) >> 1 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v6 = (__int64 *)(a1 + 24);
      v7 = 12;
    }
    else
    {
      v6 = *(__int64 **)(a1 + 24);
      v7 = 3LL * *(unsigned int *)(a1 + 32);
    }
    sub_20ABC20(&v44, v6, &v6[v7], v3, 0);
    v8 = (const __m128i *)v44.m128_u64[1];
    v9 = (const __m128i *)v44.m128_u64[0];
  }
  else
  {
    v9 = (const __m128i *)sub_20ABC80(v3);
  }
  v44.m128_u64[0] = (unsigned __int64)v45;
  v44.m128_u64[1] = 0x800000000LL;
  sub_20A1320((__int64)&v44, v9, v8, v5);
  v13 = (const __m128i *)v44.m128_u64[0];
  v14 = 24LL * v44.m128_u32[2];
  v15 = (__m128i *)(v44.m128_u64[0] + v14);
  if ( v44.m128_u64[0] == v44.m128_u64[0] + v14 )
    goto LABEL_25;
  _BitScanReverse64(&v16, 0xAAAAAAAAAAAAAAABLL * (v14 >> 3));
  sub_209EF30(
    (__int64 *)v44.m128_u64[0],
    (__m128i *)(v44.m128_u64[0] + v14),
    2LL * (int)(63 - (v16 ^ 0x3F)),
    v10,
    v11,
    v12);
  if ( (unsigned __int64)v14 <= 0x180 )
  {
    sub_209E910((__int64)v13, v15);
  }
  else
  {
    v17 = v13 + 24;
    sub_209E910((__int64)v13, v13 + 24);
    if ( v15 != &v13[24] )
    {
      do
      {
        v19 = v17;
        v17 = (const __m128i *)((char *)v17 + 24);
        sub_209E8A0(v19);
      }
      while ( v15 != v17 );
    }
  }
  v20 = v44.m128_u64[0];
  v15 = (__m128i *)(v44.m128_u64[0] + 24LL * v44.m128_u32[2]);
  if ( (__m128i *)v44.m128_u64[0] == v15 )
    goto LABEL_25;
  v21 = v44.m128_u64[0];
  while ( 1 )
  {
LABEL_18:
    v29 = *(__int64 **)v21;
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v22 = a1 + 24;
      v23 = 3;
    }
    else
    {
      v30 = *(_DWORD *)(a1 + 32);
      v22 = *(_QWORD *)(a1 + 24);
      if ( !v30 )
        goto LABEL_17;
      v23 = v30 - 1;
    }
    v24 = v23 & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
    v25 = *(__int64 **)(v22 + 24LL * v24);
    if ( v29 != v25 )
    {
      if ( v25 == (__int64 *)-4096LL )
        goto LABEL_17;
      for ( i = 1; ; i = v40 )
      {
        v40 = i + 1;
        v24 = v23 & (i + v24);
        v41 = *(__int64 **)(v22 + 24LL * v24);
        if ( v29 == v41 )
          break;
        if ( v41 == (__int64 *)-4096LL )
          goto LABEL_17;
      }
    }
    v26 = *(_QWORD *)(v21 + 8);
    v27 = (__m128i *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v26 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      break;
    *v29 = (__int64)a2;
    if ( a2 )
      sub_20B2EE0((__int64)v29, a2, 1);
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v32 = a1 + 24;
      v33 = 3;
    }
    else
    {
      v38 = *(_DWORD *)(a1 + 32);
      v32 = *(_QWORD *)(a1 + 24);
      if ( !v38 )
        goto LABEL_17;
      v33 = v38 - 1;
    }
    v34 = v33 & (((unsigned int)*(_QWORD *)v21 >> 9) ^ ((unsigned int)*(_QWORD *)v21 >> 4));
    v35 = (__int64 *)(v32 + 24LL * v34);
    v36 = *v35;
    if ( *v35 != *(_QWORD *)v21 )
    {
      v42 = 1;
      if ( v36 == -4096 )
        goto LABEL_17;
      while ( 1 )
      {
        v43 = v42 + 1;
        v34 = v33 & (v42 + v34);
        v35 = (__int64 *)(v32 + 24LL * v34);
        if ( *(_QWORD *)v21 == *v35 )
          break;
        if ( *v35 == -4096 )
          goto LABEL_17;
        v42 = v43;
      }
    }
    *v35 = -8192;
    v37 = *(_DWORD *)(a1 + 16);
    ++*(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 16) = (2 * (v37 >> 1) - 2) | v37 & 1;
LABEL_17:
    v21 += 24LL;
    if ( v15 == (__m128i *)v21 )
      goto LABEL_24;
  }
  v28 = v26 & 3;
  if ( !v28 )
  {
    sub_20B5550((__int64)v27, a2);
    goto LABEL_17;
  }
  if ( v28 == 2 )
  {
    sub_20B3100((__int64)v27, *(__int64 **)v21, a2, v20, (__int64)v29, v18);
    goto LABEL_17;
  }
  v31 = *(__int64 **)v21;
  switch ( v27->m128i_i8[0] )
  {
    case 4:
      sub_2082C10(v27, v31, (__int64)a2, v20, (__int64)v29);
      goto LABEL_17;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
      sub_20BCC00(v27, (__int64)v31, a2);
      v21 += 24LL;
      if ( v15 != (__m128i *)v21 )
        goto LABEL_18;
      break;
  }
LABEL_24:
  v15 = (__m128i *)v44.m128_u64[0];
LABEL_25:
  if ( v15 != (__m128i *)v45 )
    free(v15);
}
