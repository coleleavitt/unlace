__int64 __fastcall sub_1D74580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  _BYTE *v9; // rax
  int v10; // r15d
  unsigned int v11; // r15d
  char *v12; // rsi
  char *i; // r12
  unsigned int v14; // r12d
  const __m128i *v16; // r12
  char *v17; // rsi
  __int64 v18; // rdx
  const __m128i *v19; // rax
  __int64 v20; // r9
  int v21; // edx
  _BYTE *v22; // r8
  __m128i v23; // xmm0
  int v24; // r9d
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // r14d
  char v33; // dl
  int v34; // esi
  __int64 v35; // rax
  unsigned int v37; // [rsp+0h] [rbp-1E8h]
  int v38; // [rsp+8h] [rbp-1E0h]
  char v39; // [rsp+10h] [rbp-1D8h]
  const __m128i *v40; // [rsp+10h] [rbp-1D8h]
  char v41; // [rsp+1Fh] [rbp-1C9h]
  __int64 v42; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v43; // [rsp+28h] [rbp-1C0h] BYREF
  int v44; // [rsp+3Ch] [rbp-1ACh] BYREF
  char v45[8]; // [rsp+40h] [rbp-1A8h] BYREF
  unsigned __int8 v46; // [rsp+48h] [rbp-1A0h]
  _QWORD v47[2]; // [rsp+50h] [rbp-198h] BYREF
  _QWORD v48[2]; // [rsp+60h] [rbp-188h] BYREF
  _QWORD v49[8]; // [rsp+70h] [rbp-178h] BYREF
  void *v50; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-130h]
  _BYTE v52[96]; // [rsp+C0h] [rbp-128h] BYREF
  void *ptr; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+128h] [rbp-C0h]
  _BYTE v55[184]; // [rsp+130h] [rbp-B8h] BYREF

  v8 = *(_QWORD *)(a4 + 144);
  v43 = a4;
  v9 = v55;
  v10 = *(_DWORD *)(v8 + 20);
  v42 = a5;
  ptr = v55;
  v11 = v10 & 0x1FFFFFFF;
  v54 = 0x400000000LL;
  if ( v11 )
  {
    v12 = v55;
    if ( v11 > 4uLL )
    {
      sub_2237220(&ptr, v55, v11, 32);
      a4 = v43;
      v9 = ptr;
      v12 = (char *)ptr + 32 * (unsigned int)v54;
    }
    for ( i = &v9[32 * v11]; i != v12; *((_QWORD *)v12 - 3) = 0 )
    {
      v12[24] = 0;
      *(_QWORD *)v12 &= 0xFFFFFFFE00000000LL;
      v12 += 32;
    }
    LODWORD(v54) = v11;
    v8 = *(_QWORD *)(a4 + 144);
  }
  v14 = 0;
  if ( !(unsigned int)sub_1D6C080(a1, v8, a3, a2, a6, (__int64 *)&ptr, 0, 2, 0, nullptr) )
  {
    v16 = (const __m128i *)ptr;
    v17 = v52;
    v51 = 0x400000000LL;
    v18 = 32LL * (unsigned int)v54;
    v50 = v52;
    v19 = (const __m128i *)((char *)ptr + v18);
    v20 = v18 >> 5;
    if ( (unsigned __int64)v18 > 0x80 )
    {
      v40 = (const __m128i *)((char *)ptr + v18);
      v38 = v18 >> 5;
      sub_2237220(&v50, v52, v18 >> 5, 24);
      LODWORD(v20) = v38;
      v19 = v40;
      v21 = v51;
      LODWORD(v22) = (_DWORD)v50;
      v17 = (char *)v50 + 24 * (unsigned int)v51;
    }
    else
    {
      v21 = 0;
      v22 = v52;
    }
    if ( v16 != v19 )
    {
      do
      {
        v23 = _mm_loadu_si128(v16);
        v16 += 2;
        v17 += 24;
        *(__m128i *)(v17 - 24) = v23;
        *((_QWORD *)v17 - 1) = v16[-1].m128i_i64[0];
      }
      while ( v19 != v16 );
      LODWORD(v22) = (_DWORD)v50;
      v21 = v51;
    }
    v24 = v21 + v20;
    v25 = *(_DWORD *)(a6 + 16);
    LODWORD(v51) = v24;
    sub_1DC3940((unsigned int)v45, a1, v25, v43, (_DWORD)v22, v24, a6, 0);
    v14 = v46;
    if ( v46 )
    {
      v14 = 0;
    }
    else
    {
      v26 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
      v27 = v26 + 48;
      v28 = *(unsigned int *)(v26 + 20);
      v47[0] = v27;
      v47[1] = v28;
      v29 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
      v30 = v29 + 48;
      v31 = *(unsigned int *)(v29 + 20);
      v48[0] = v30;
      v48[1] = v31;
      v37 = *(_DWORD *)(a1 + 11200);
      v39 = *(_BYTE *)(a1 + 12592);
      v41 = *(_BYTE *)(a1 + 11248);
      v32 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
      sub_1DBADC0(a1);
      if ( !v33 )
        *(_BYTE *)(a1 + 12592) = 1;
      *(_BYTE *)(a1 + 11248) = 0;
      v49[0] = &v44;
      v34 = *(_DWORD *)(a6 + 16);
      v49[2] = &v42;
      v49[3] = v47;
      v49[4] = v48;
      v49[7] = &v43;
      v49[1] = a1;
      v49[5] = &ptr;
      v49[6] = a6;
      sub_15F0FC0(a1, v34, (__int64 (__fastcall *)(__int64))sub_1D6A010, (__int64)v49);
      if ( !v44 )
        LOBYTE(v14) = *(_DWORD *)(a1 + 11200) <= v37;
      *(_DWORD *)(a1 + 11200) = v37;
      *(_BYTE *)(a1 + 12592) = v39;
      *(_BYTE *)(a1 + 11248) = v41;
      v35 = *(_QWORD *)(a1 + 264);
      if ( *(_DWORD *)(v35 + 204) == 5 )
        *(_BYTE *)(v35 + 194) = 1;
      if ( v32 )
        v32 = 3;
      *(_DWORD *)(v35 + 204) = v32;
    }
    sub_1DBADA0(v45);
    if ( v50 != v52 )
      free(v50);
  }
  if ( ptr != v55 )
    free(ptr);
  return v14;
}
