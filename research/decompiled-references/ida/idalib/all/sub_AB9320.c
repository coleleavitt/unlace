void __fastcall sub_AB9320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  __int64 *v9; // rcx
  unsigned int v10; // edi
  unsigned __int64 v11; // rsi
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdi
  void (*v15)(); // rax
  int v16; // edi
  bool v17; // zf
  __int64 v18; // rax
  unsigned __int64 v19; // r12
  __int64 v20; // r13
  __int64 *v21; // rax
  int v22; // r11d
  unsigned __int64 v23; // r12
  int v24; // edi
  __int64 v25; // r9
  __int64 *v26; // [rsp+0h] [rbp-48h]
  __int64 v27; // [rsp+8h] [rbp-40h] BYREF
  __m128 v28[3]; // [rsp+10h] [rbp-38h] BYREF

  v27 = a2;
  if ( (unsigned int)a3 <= 1 )
    return;
  v6 = *(_DWORD *)(a1 + 2088);
  v7 = a3;
  v9 = (__int64 *)(a1 + 2072);
  if ( !v6 )
  {
    v28[0].m128_u64[0] = 0;
    goto LABEL_10;
  }
  a5 = *(_QWORD *)(a1 + 2072);
  a3 = a2;
  v10 = (v6 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v11 = a5 + 16LL * v10;
  v12 = *(_QWORD *)v11;
  if ( a3 != *(_QWORD *)v11 )
  {
    v22 = 1;
    v23 = 0;
    if ( v12 != -4096 )
    {
      while ( 1 )
      {
        if ( v12 == -8192 && !v23 )
          v23 = v11;
        v10 = (v6 - 1) & (v22 + v10);
        v11 = a5 + 16LL * v10;
        v12 = *(_QWORD *)v11;
        if ( a3 == *(_QWORD *)v11 )
          goto LABEL_4;
        if ( v12 == -4096 )
        {
          if ( v23 )
            v11 = v23;
          break;
        }
        ++v22;
      }
    }
    v24 = *(_DWORD *)(a1 + 2080);
    a6 = 3 * v6;
    v28[0].m128_u64[0] = v11;
    v16 = v24 + 1;
    if ( 4 * v16 < (unsigned int)a6 )
    {
      v25 = v6 - *(_DWORD *)(a1 + 2084) - v16;
      if ( (unsigned int)v25 > v6 >> 3 )
        goto LABEL_12;
      v26 = v9;
      sub_AB9120(v9, v6, a3, (__int64)v9, a5, v25);
LABEL_11:
      sub_A864D0(v26, &v27, v28);
      a3 = v27;
      a5 = *(_QWORD *)(a1 + 2072);
      v11 = v28[0].m128_u64[0];
      v9 = v26;
      v16 = *(_DWORD *)(a1 + 2080) + 1;
LABEL_12:
      v17 = *(_QWORD *)v11 == -4096;
      *(_DWORD *)(a1 + 2080) = v16;
      if ( !v17 )
        --*(_DWORD *)(a1 + 2084);
      *(_QWORD *)v11 = a3;
      *(_DWORD *)(v11 + 8) = 0;
      sub_A8BC90(v28, (_QWORD *)v11, (_QWORD *)(a5 + 16LL * *(unsigned int *)(a1 + 2088)), (__int64)v9, 1);
      v18 = *(unsigned int *)(a1 + 2104);
      v19 = v28[0].m128_u64[0];
      v20 = v27;
      if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 2108) )
      {
        sub_2237220(a1 + 2096, a1 + 2112, v18 + 1, 16);
        v18 = *(unsigned int *)(a1 + 2104);
      }
      v21 = (__int64 *)(*(_QWORD *)(a1 + 2096) + 16 * v18);
      *v21 = v20;
      v21[1] = 0;
      v13 = *(unsigned int *)(a1 + 2104);
      *(_DWORD *)(a1 + 2104) = v13 + 1;
      *(_DWORD *)(v19 + 8) = v13;
      goto LABEL_5;
    }
LABEL_10:
    v26 = v9;
    sub_AB9120(v9, 2 * v6, a3, (__int64)v9, a5, a6);
    goto LABEL_11;
  }
LABEL_4:
  sub_A8BC90(v28, (_QWORD *)v11, (_QWORD *)(a5 + 16LL * v6), (__int64)v9, 1);
  v13 = *(unsigned int *)(v28[0].m128_u64[0] + 8);
LABEL_5:
  *(_DWORD *)(*(_QWORD *)(a1 + 2096) + 16 * v13 + 8) = v7;
  v14 = *(_QWORD *)(a1 + 18368);
  if ( v14 )
  {
    v15 = *(void (**)())(*(_QWORD *)v14 + 200LL);
    if ( v15 != nullsub_452 )
      ((void (__fastcall *)(__int64, __int64, _QWORD))v15)(v14, v27, v7);
  }
}
