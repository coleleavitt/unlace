__int64 __fastcall sub_1CB61F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // r14d
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // r15
  unsigned int v15; // eax
  int v16; // eax
  unsigned __int64 v17; // rax
  int v18; // r13d
  __m128i v19; // xmm1
  int v20; // edx
  __m128i v21; // xmm2
  int v22; // eax
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  unsigned __int64 v25; // rdx
  double v26[2]; // [rsp+8h] [rbp-120h] BYREF
  __int64 v27; // [rsp+18h] [rbp-110h] BYREF
  __int128 v28; // [rsp+20h] [rbp-108h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-F8h]
  __m128i v30; // [rsp+40h] [rbp-E8h] BYREF
  int v31; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v32; // [rsp+58h] [rbp-D0h]
  __int64 v33; // [rsp+60h] [rbp-C8h]
  __int64 v34[2]; // [rsp+68h] [rbp-C0h] BYREF
  int v35; // [rsp+7Ch] [rbp-ACh]
  __m128i v36; // [rsp+80h] [rbp-A8h] BYREF
  int v37; // [rsp+90h] [rbp-98h]
  int v38; // [rsp+94h] [rbp-94h]
  __m128 v39; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-78h]
  _BYTE v41[8]; // [rsp+B8h] [rbp-70h] BYREF
  void *v42; // [rsp+C0h] [rbp-68h]
  int v43; // [rsp+CCh] [rbp-5Ch]
  __m128i v44; // [rsp+D0h] [rbp-58h] BYREF
  int v45; // [rsp+E0h] [rbp-48h]
  int v46; // [rsp+E4h] [rbp-44h]

  if ( (sub_1E5F010(a3, &v27) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 64) = 0;
    *(_OWORD *)(a1 + 24) = 0;
    return a1;
  }
  v6 = *(_QWORD *)v27;
  v7 = v27 + 8;
  v8 = *(_QWORD *)v27;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 232) + 1LL) & 0x40) == 0 )
  {
LABEL_22:
    *(_QWORD *)&v26[0] = v7;
    v39 = _mm_loadh_ps(v26);
    v16 = sub_F6CCB0((__int64 *)&v39, v39);
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 64) = v16;
    *(_DWORD *)(a1 + 68) = 0;
    return a1;
  }
  v9 = *(_QWORD *)v27;
  v10 = *(_QWORD *)v27 & 7LL;
  if ( v10 | (v6 >> 3) & 1 )
  {
    v11 = 0;
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 38 )
    {
      v11 = 0;
      v28 = 0;
      *(_OWORD *)ptr = 0;
      v30 = 0;
      goto LABEL_8;
    }
    *(_QWORD *)&v26[0] = v27 + 8;
    v39 = _mm_loadh_ps(v26);
    if ( !v6 )
    {
      v28 = 0;
      *(_OWORD *)ptr = 0;
      v30 = 0;
LABEL_19:
      if ( HIDWORD(ptr[1]) )
        free(ptr[0]);
      goto LABEL_21;
    }
    v11 = *(_DWORD *)(v27 + 8);
    v6 = sub_1743190((__int64)&v39);
    v8 = v6;
    v7 = v25;
    LOBYTE(v9) = v6;
    v10 = v6 & 7;
  }
  v28 = 0;
  *(_OWORD *)ptr = 0;
  v30 = 0;
  if ( v10 )
  {
LABEL_21:
    v7 = v27 + 8;
    goto LABEL_22;
  }
LABEL_8:
  if ( (v9 & 8) != 0 )
    goto LABEL_19;
  if ( *(_BYTE *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24 && v8 )
  {
    v12 = *(_QWORD *)(v8 + 32);
    if ( (unsigned __int8)(*(_WORD *)(v8 + 18) >> 3) != 6 || (v13 = 0, v12) )
      v13 = *(_QWORD *)(v7 + 8);
    v14 = v7;
    sub_15AB8B0((__int64)&v28, v12, v13);
    if ( (unsigned __int8)(*(_WORD *)(v8 + 18) >> 3) != 6 || *(_QWORD *)(v8 + 32) )
      v14 = v7 + 16;
    v15 = sub_F6C520(*(_QWORD *)(v8 + 40));
    v8 = *(_QWORD *)(v8 + 40);
    v7 = ((v14 != 0) + (v14 - (v14 != 0)) / v15) * v15;
    v6 = v8;
    if ( (v8 & 7) != 0 || (v8 & 8) != 0 )
      goto LABEL_19;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 17 || !v8 )
    goto LABEL_19;
  v17 = *(_QWORD *)(v8 + 40);
  v18 = *(_DWORD *)v7;
  v31 = 2;
  v32 = v17;
  v33 = v28;
  sub_E90750((__int64)v34, (__int64 *)&v28 + 1);
  v19 = _mm_load_si128(&v30);
  v37 = v18;
  v38 = 0;
  v36 = v19;
  if ( v11 )
  {
    v39.m128_i32[0] = v31;
    v39.m128_u64[1] = v32;
    v40 = v33;
    sub_E90750((__int64)v41, v34);
    v23 = _mm_load_si128(&v36);
    v46 = v11;
    v45 = v37;
    v44 = v23;
    v31 = v39.m128_i32[0];
    v32 = v39.m128_u64[1];
    v33 = v40;
    sub_E907B0((__int64)v34, (__int64)v41);
    v24 = _mm_load_si128(&v44);
    v37 = v45;
    v36 = v24;
    v38 = v46;
    if ( v43 )
      free(v42);
  }
  *(_DWORD *)a1 = v31;
  *(_QWORD *)(a1 + 8) = v32;
  *(_QWORD *)(a1 + 16) = v33;
  sub_E90750(a1 + 24, v34);
  v20 = v35;
  v21 = _mm_load_si128(&v36);
  *(_DWORD *)(a1 + 64) = v37;
  v22 = v38;
  *(__m128i *)(a1 + 48) = v21;
  *(_DWORD *)(a1 + 68) = v22;
  if ( v20 )
    free((void *)v34[1]);
  if ( HIDWORD(ptr[1]) )
    free(ptr[0]);
  return a1;
}
