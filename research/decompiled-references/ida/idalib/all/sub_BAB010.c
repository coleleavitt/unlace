unsigned __int64 __fastcall sub_BAB010(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10)
{
  unsigned __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i v20; // xmm0
  bool v21; // zf
  int v22; // eax
  int v23; // eax
  __int64 *v24; // rbp
  __int64 v25; // r15
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  void (*v34)(); // rax
  __m128i v36; // [rsp+0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+18h] [rbp-40h]

  v37 = a6;
  v36 = (__m128i)_mm_loadh_ps((const double *)&a8);
  v14 = sub_B902D0(152, a1, a2, 0);
  sub_B725B0(v14, 0x17u, a2, a4);
  v15 = 23;
  *(_QWORD *)(v14 + 40) = v37;
  *(_QWORD *)v14 = &off_2B4A650;
  sub_B8E080(v14 + 48, 23);
  v20 = _mm_load_si128(&v36);
  *(_QWORD *)(v14 + 80) = 0;
  v21 = a8 == 0;
  *(_DWORD *)(v14 + 60) = a3;
  *(_QWORD *)v14 = &off_2C03BF0;
  v22 = a9;
  *(_QWORD *)(v14 + 104) = 0;
  *(_DWORD *)(v14 + 140) = v22;
  v23 = a10;
  *(_DWORD *)(v14 + 112) = 0;
  *(_OWORD *)(v14 + 120) = 0;
  *(_DWORD *)(v14 + 136) = a5;
  *(_DWORD *)(v14 + 144) = v23;
  *(__m128i *)(v14 + 88) = v20;
  if ( !v21 )
  {
    v17 = a8;
    v24 = (__int64 *)(a8 + 16);
    v25 = a8 + 8LL * *(unsigned int *)(a8 + 8) + 16;
    if ( a8 + 16 != v25 )
    {
      do
      {
        v26 = *v24;
        v15 = v14 + 48;
        ++v24;
        sub_B8C080(v26, v14 + 48);
      }
      while ( (__int64 *)v25 != v24 );
    }
  }
  if ( a7 )
  {
    *(_QWORD *)(v14 + 128) = sub_BAAD00(a7, v15, v16, v17, v18, v19);
    v31 = *(_QWORD *)(a7 + 120);
    if ( v31 )
    {
      v32 = v31 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v32 )
        return v14;
    }
    else
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(a7 + 96) + 88LL), *(_QWORD *)(a7 + 96), v27, v28, v29, v30);
      v32 = *(_QWORD *)(a7 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v32 )
        return v14;
    }
    *(_QWORD *)(v32 + 56) = v14;
    v33 = a1[2296];
    if ( v33 )
    {
      v34 = *(void (**)())(*(_QWORD *)v33 + 136LL);
      if ( v34 != nullsub_444 )
        ((void (__fastcall *)(__int64, unsigned __int64, __int64))v34)(v33, v14, a7);
    }
  }
  return v14;
}
