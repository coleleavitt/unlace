void __fastcall sub_AB9E50(__int64 a1, char *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 i; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  unsigned int v16; // edx
  _QWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdi
  unsigned int v27; // edx
  unsigned __int64 v28; // rsi
  __int64 v29; // rcx
  int v30; // ecx
  int v31; // r10d
  int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // esi
  __int64 **v37; // [rsp+0h] [rbp-100h]
  void *v38[2]; // [rsp+18h] [rbp-E8h] BYREF
  _BYTE v39[16]; // [rsp+28h] [rbp-D8h] BYREF
  __m128 v40; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v41[16]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-A8h]
  char *v43; // [rsp+60h] [rbp-A0h]
  void *v44; // [rsp+68h] [rbp-98h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h]
  __m128i v46; // [rsp+78h] [rbp-88h] BYREF
  __m128 v47; // [rsp+88h] [rbp-78h] BYREF
  void *v48[2]; // [rsp+98h] [rbp-68h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  __m128i v50; // [rsp+B0h] [rbp-50h] BYREF

  if ( a2[28] < 0 || (unsigned __int8)sub_B8E340(a2) )
    return;
  if ( (a2[29] & 1) == 0 )
    goto LABEL_64;
  v4 = sub_B8C3D0(a2);
  v5 = *(_QWORD **)v4;
  v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
  if ( (unsigned __int64)v5 >= v6 )
  {
    if ( v5 != (_QWORD *)v6 )
    {
      if ( *(_WORD *)(*(_QWORD *)v6 + 36LL) == 353 )
        goto LABEL_17;
      v7 = v6 + 8;
      for ( i = v7; v5 != (_QWORD *)v7; i = v7 )
      {
        v7 += 8LL;
        if ( *(_WORD *)(*(_QWORD *)i + 36LL) == 353 )
          goto LABEL_17;
      }
    }
LABEL_64:
    BUG();
  }
  v9 = v5;
  while ( *(_WORD *)(*v9 + 36LL) != 353 )
  {
    if ( (_QWORD *)v6 == ++v9 )
      goto LABEL_64;
  }
  if ( (_QWORD *)v6 == v9 )
    goto LABEL_64;
LABEL_17:
  v10 = *v5;
  if ( *(_WORD *)(*v5 + 36LL) != 353 )
  {
    v11 = v5 + 1;
    do
      v10 = *v11++;
    while ( *(_WORD *)(v10 + 36) != 353 );
  }
  v12 = *(_QWORD *)(a1 + 22840);
  v13 = *(_QWORD *)&byte_8[**(_QWORD **)(v10 + 40) & 0xFFFFFFFFFFFFFFF0LL];
  v37 = (__int64 **)(a1 + 22840);
  v14 = *(unsigned int *)(a1 + 22856);
  v15 = v13 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v13 | (unsigned __int8)**(_QWORD **)(v10 + 40)) & 7;
  if ( (_DWORD)v14 )
  {
    v16 = (v14 - 1) & (v15 ^ (v15 >> 9));
    v17 = (_QWORD *)(v12 + 56LL * v16);
    if ( v15 == *v17 )
    {
LABEL_22:
      sub_A868C0(&v47, v17, (_QWORD *)(v12 + 56 * v14), (__int64)v37, 1);
      goto LABEL_23;
    }
    if ( *v17 )
    {
      v30 = 1;
      do
      {
        v16 = (v14 - 1) & (v30 + v16);
        v17 = (_QWORD *)(v12 + 56LL * v16);
        if ( v15 == *v17 )
          goto LABEL_22;
        ++v30;
      }
      while ( *v17 );
    }
  }
  sub_A868C0(
    &v47,
    (_QWORD *)(v12 + 56LL * (unsigned int)v14),
    (_QWORD *)(v12 + 56LL * (unsigned int)v14),
    (__int64)v37,
    1);
LABEL_23:
  v18 = sub_E3AAF0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 2312) + 8LL), sub_A56C30, 0);
  v38[1] = nullptr;
  v19 = v18;
  v39[0] = 0;
  v38[0] = v39;
  sub_995C30((__int64)v38, 0x80u);
  v47.m128_i32[2] = 0;
  *(_OWORD *)v48 = 0;
  v47.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
  v50.m128i_i8[0] = 0;
  v50.m128i_i32[1] = 1;
  v49 = 0;
  v50.m128i_i64[1] = (__int64)v38;
  sub_227B8B0(&v47, 0, 0, 0);
  (*(void (__fastcall **)(__int64, unsigned __int64, __m128 *, _QWORD))(*(_QWORD *)v19 + 184LL))(v19, v15, &v47, 0);
  v40.m128_u64[0] = (unsigned __int64)v41;
  sub_A579B0(&v40, *(_BYTE **)v50.m128i_i64[1], *(_QWORD *)v50.m128i_i64[1] + *(_QWORD *)(v50.m128i_i64[1] + 8));
  v43 = a2;
  v42 = v15;
  v44 = &v46;
  sub_A579B0(&v44, v40.m128_u64[0], v40.m128_u64[0] + v40.m128_u64[1]);
  if ( (_BYTE *)v40.m128_u64[0] != v41 )
    operator delete((void *)v40.m128_u64[0]);
  v47.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
  sub_227B7A0(&v47);
  if ( v38[0] != v39 )
    operator delete(v38[0]);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v23 = (__int64)&v46;
  v47.m128_u64[0] = v15;
  v47.m128_u64[1] = v42;
  v48[0] = v43;
  v48[1] = &v50;
  if ( v44 == &v46 )
  {
    v50 = _mm_load_si128(&v46);
  }
  else
  {
    v48[1] = v44;
    v50.m128i_i64[0] = v46.m128i_i64[0];
  }
  v24 = v45;
  v46.m128i_i8[0] = 0;
  v45 = 0;
  v49 = v24;
  v44 = &v46;
  v25 = *(_DWORD *)(a1 + 22856);
  if ( !v25 )
  {
    v40.m128_u64[0] = 0;
    goto LABEL_52;
  }
  v21 = v25 - 1;
  v26 = *(_QWORD *)(a1 + 22840);
  v27 = v21 & (v15 ^ (v15 >> 9));
  v28 = v26 + 56LL * v27;
  v29 = *(_QWORD *)v28;
  if ( v15 != *(_QWORD *)v28 )
  {
    v31 = 1;
    v22 = 0;
    if ( v29 )
    {
      while ( 1 )
      {
        if ( v29 == -1 && !v22 )
          v22 = v28;
        v27 = v21 & (v31 + v27);
        v28 = v26 + 56LL * v27;
        v29 = *(_QWORD *)v28;
        if ( v15 == *(_QWORD *)v28 )
          goto LABEL_31;
        if ( !v29 )
        {
          if ( v22 )
            v28 = v22;
          break;
        }
        ++v31;
      }
    }
    v32 = *(_DWORD *)(a1 + 22848);
    v40.m128_u64[0] = v28;
    v23 = (unsigned int)(v32 + 1);
    v20 = 3 * v25;
    if ( 4 * (int)v23 < (unsigned int)v20 )
    {
      v20 = v25 - *(_DWORD *)(a1 + 22852) - (unsigned int)v23;
      if ( (unsigned int)v20 > v25 >> 3 )
      {
LABEL_45:
        *(_DWORD *)(a1 + 22848) = v23;
        if ( *(_QWORD *)v28 )
          --*(_DWORD *)(a1 + 22852);
        *(__m128 *)v28 = v47;
        *(void **)(v28 + 16) = v48[0];
        *(_QWORD *)(v28 + 24) = v28 + 40;
        if ( v48[1] == &v50 )
        {
          *(__m128i *)(v28 + 40) = _mm_loadu_si128(&v50);
        }
        else
        {
          *(void **)(v28 + 24) = v48[1];
          *(_QWORD *)(v28 + 40) = v50.m128i_i64[0];
        }
        v33 = *(unsigned int *)(a1 + 22856);
        *(_QWORD *)(v28 + 32) = v49;
        v48[1] = &v50;
        v34 = 7 * v33;
        v35 = *(_QWORD *)(a1 + 22840);
        v49 = 0;
        v50.m128i_i8[0] = 0;
        sub_A868C0(&v40, (_QWORD *)v28, (_QWORD *)(v35 + 8 * v34), (__int64)v37, 1);
        goto LABEL_32;
      }
      v36 = v25;
LABEL_53:
      sub_AB9BC0(v37, v36, v23, v20, v21, v22);
      sub_A86920((__int64 *)v37, (__int64 *)&v47, &v40);
      v28 = v40.m128_u64[0];
      LODWORD(v23) = *(_DWORD *)(a1 + 22848) + 1;
      goto LABEL_45;
    }
LABEL_52:
    v36 = 2 * v25;
    goto LABEL_53;
  }
LABEL_31:
  sub_A868C0(&v40, (_QWORD *)v28, (_QWORD *)(v26 + 56LL * v25), (__int64)v37, 1);
LABEL_32:
  if ( v48[1] != &v50 )
    operator delete(v48[1]);
  if ( v44 != &v46 )
    operator delete(v44);
}
