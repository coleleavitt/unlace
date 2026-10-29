void __fastcall sub_141F670(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int128 a7)
{
  __int64 v8; // rcx
  __int64 v10; // r12
  __int64 v11; // r12
  char *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  char *v16; // r14
  __int64 v17; // rsi
  char *v18; // r15
  __int64 v19; // r10
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __m128i v22; // xmm1
  bool v23; // zf
  __int64 v24; // rdx
  char *v25; // rsi
  size_t v26; // rdx
  size_t v27; // rdx
  const void *v28; // rsi
  __int64 v29; // r14
  const void *v30; // r12
  unsigned int v31; // r13d
  char *v32; // rax
  char *v33; // r10
  char *v34; // rcx
  __m128i v36; // [rsp+10h] [rbp-58h] BYREF
  __int64 v37; // [rsp+20h] [rbp-48h]
  __int64 v38; // [rsp+28h] [rbp-40h]

  v36 = _mm_loadu_si128((const __m128i *)&a7);
  if ( a5 )
  {
    v8 = 0;
    if ( *(_BYTE *)(a3 + 200) )
      v8 = *(unsigned int *)(a3 + 144);
    v10 = v8;
    if ( *(_BYTE *)(a3 + 280) )
      v10 = v8 + *(unsigned int *)(a3 + 224);
    v11 = v10 + 1;
    v38 = a5;
    v37 = v8;
    v12 = (char *)operator new[](24 * v11);
    v14 = v37;
    v15 = v38;
    v16 = v12;
    v17 = (__int64)&v12[24 * v11 - 24];
    while ( 1 )
    {
      *(_DWORD *)v12 = 0;
      *((_WORD *)v12 + 8) = 0;
      *((_DWORD *)v12 + 1) = 0;
      *((_QWORD *)v12 + 1) = 0;
      *((_WORD *)v12 + 9) = 0;
      if ( (char *)v17 == v12 )
        break;
      v12 += 24;
    }
    v18 = v16;
    v19 = 1;
    if ( *(_BYTE *)(a3 + 200) )
    {
      v19 = v14 + 1;
      v27 = 24LL * *(unsigned int *)(a3 + 144);
      v18 = &v16[24 * v14];
      if ( v27 )
      {
        v28 = *(const void **)(a3 + 136);
        v38 = v15;
        v37 = v14 + 1;
        memmove(v16, v28, v27);
        v15 = v38;
        v19 = v37;
      }
    }
    v20 = a1[16];
    a1[26] += 32LL;
    v21 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( a1[17] >= v21 + 32 && v20 )
    {
      a1[16] = v21 + 32;
    }
    else
    {
      v38 = v15;
      v37 = v19;
      v21 = sub_986170((__int64)(a1 + 16), 32, 32, 4, v15, v13);
      v15 = v38;
      v19 = v37;
    }
    v22 = _mm_load_si128(&v36);
    *(_QWORD *)(v21 + 8) = v15;
    *(_QWORD *)v21 = a4;
    *(__m128i *)(v21 + 16) = v22;
    v23 = *(_BYTE *)(a3 + 280) == 0;
    *((_DWORD *)v18 + 4) = 461;
    *(_DWORD *)v18 = a2;
    *((_DWORD *)v18 + 1) = a2;
    *((_QWORD *)v18 + 1) = v21;
    if ( !v23 )
    {
      v26 = 24LL * *(unsigned int *)(a3 + 224);
      if ( v26 )
        memmove(&v16[24 * v19], *(const void **)(a3 + 216), v26);
    }
    v24 = (unsigned int)v11;
    v25 = v16;
LABEL_15:
    sub_14368B0(a1, v25, v24, 1, 1, 1);
    return;
  }
  if ( *(_BYTE *)(a3 + 120) )
  {
    v29 = *(unsigned int *)(a3 + 64);
    v30 = *(const void **)(a3 + 56);
    v31 = *(_DWORD *)(a3 + 64);
    v32 = (char *)operator new[](24 * v29);
    v33 = v32;
    v34 = &v32[24 * v29];
    if ( v29 )
    {
      do
      {
        *(_DWORD *)v32 = 0;
        v32 += 24;
        *((_DWORD *)v32 - 5) = 0;
        *((_QWORD *)v32 - 2) = 0;
        *((_WORD *)v32 - 4) = 0;
        *((_WORD *)v32 - 3) = 0;
      }
      while ( v32 != v34 );
    }
    if ( 24 * v29 )
      v33 = (char *)memmove(v33, v30, 24 * v29);
    v24 = v31;
    v25 = v33;
    goto LABEL_15;
  }
}
