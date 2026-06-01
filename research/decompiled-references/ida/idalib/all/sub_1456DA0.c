void __fastcall sub_1456DA0(__int64 a1, const __m128i *a2)
{
  int v3; // r13d
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 *v9; // rsi
  __int64 v10; // rdi
  _QWORD *v11; // r12
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int *v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // rdi
  void *v29; // rax
  int v30; // esi
  int v31; // r9d
  __int64 v32; // rdi
  __int64 *v33; // rax
  __int64 v34; // rsi
  int v35; // r15d
  int v36; // eax
  unsigned int v37; // eax
  int v38; // edi
  unsigned int v39; // eax
  int v40; // r15d
  int v41; // edi
  unsigned int v42; // [rsp+4h] [rbp-94h]
  __m128 v43; // [rsp+10h] [rbp-88h] BYREF
  __int64 v44; // [rsp+20h] [rbp-78h]

  v3 = a2->m128i_i32[0];
  v4 = sub_1451CA0((__int64 *)a1, a2);
  if ( !v4 )
    return;
  v5 = v4;
  v6 = *(unsigned int *)(a1 + 2288);
  v7 = *(_QWORD *)(a1 + 2272);
  if ( (_DWORD)v6 )
  {
    v8 = (v6 - 1) & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
    v9 = (__int64 *)(v7 + 32LL * v8);
    v10 = *v9;
    if ( v5 == *v9 )
    {
LABEL_4:
      sub_1452FC0(&v43, v9, (_QWORD *)(32 * v6 + v7), a1 + 2272, 1);
      v11 = (_QWORD *)v43.m128_u64[0];
      goto LABEL_5;
    }
    v30 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v31 = v30 + 1;
        v8 = (v6 - 1) & (v30 + v8);
        v9 = (__int64 *)(v7 + 32LL * v8);
        v32 = *v9;
        if ( v5 == *v9 )
          goto LABEL_4;
        v30 = v31;
      }
      while ( v32 != -4096 );
    }
  }
  sub_1452FC0(&v43, (_QWORD *)(v7 + 32LL * (unsigned int)v6), (_QWORD *)(v7 + 32LL * (unsigned int)v6), a1 + 2272, 1);
  v11 = (_QWORD *)v43.m128_u64[0];
LABEL_5:
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 2272) + 32LL * *(unsigned int *)(a1 + 2288));
  sub_1452FC0(&v43, v12, v12, a1 + 2272, 1);
  if ( (_QWORD *)v43.m128_u64[0] == v11 )
  {
    sub_FC70B0((__int64)&v43, *(_QWORD *)(a1 + 48), v3, 1409);
    sub_AEC220((unsigned __int8 **)&v43, (_BYTE *)(*(_QWORD *)(v5 + 16) + 16LL), **(unsigned int **)(v5 + 16));
    sub_AEA040((__int64)&v43);
    return;
  }
  if ( (*(_BYTE *)(v5 + 3) & 2) == 0 )
    goto LABEL_13;
  sub_1423DB0((__int64)&v43, (_QWORD *)a1, v5, v13, v14, v15);
  if ( (v43.m128_u64[0] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    if ( !v44 )
      goto LABEL_13;
    goto LABEL_9;
  }
  if ( v44 )
  {
LABEL_9:
    v16 = v43.m128_i64[1];
    v17 = *(unsigned int **)(*(_QWORD *)(v43.m128_u64[1] + 8 * v44 - 8) + 16LL);
    goto LABEL_10;
  }
  v33 = sub_13F1C60((__int64 *)(v43.m128_u64[0] & 0xFFFFFFFFFFFFFFF8LL));
  if ( !v33 )
    goto LABEL_13;
  v17 = (unsigned int *)v33[2];
LABEL_10:
  if ( v17 )
  {
    if ( (*((_BYTE *)v17 + 37) & 2) != 0 )
    {
      v16 = *v17;
      if ( (*(_BYTE *)(a1 + 2104) & 1) != 0 )
      {
        v34 = a1 + 2112;
        v35 = 31;
      }
      else
      {
        v40 = *(_DWORD *)(a1 + 2120);
        v34 = *(_QWORD *)(a1 + 2112);
        if ( !v40 )
          goto LABEL_12;
        v35 = v40 - 1;
      }
      v43.m128_i32[0] = *v17;
      v42 = v16;
      v36 = sub_101AC30(&v43);
      v16 = v42;
      v37 = v35 & v36;
      v13 = v34 + 4LL * v37;
      v38 = *(_DWORD *)v13;
      if ( v42 != *(_DWORD *)v13 )
      {
        v13 = 1;
        if ( v38 == -1 )
          goto LABEL_12;
        while ( 1 )
        {
          v14 = (unsigned int)(v13 + 1);
          v37 = v35 & (v13 + v37);
          v13 = v34 + 4LL * v37;
          v41 = *(_DWORD *)v13;
          if ( v42 == *(_DWORD *)v13 )
            break;
          v13 = (unsigned int)v14;
          if ( v41 == -1 )
            goto LABEL_12;
        }
      }
      *(_DWORD *)v13 = -2;
      v39 = *(_DWORD *)(a1 + 2104);
      ++*(_DWORD *)(a1 + 2108);
      v16 = 2 * (v39 >> 1) - 2;
      *(_DWORD *)(a1 + 2104) = v16 | v39 & 1;
    }
LABEL_12:
    v18 = sub_141F580((_QWORD *)a1, v3, v16, v13, v14, v15);
    sub_144BC70(a1, (_BYTE *)v5, v18, v19, v20, v21);
  }
LABEL_13:
  v22 = v11[2];
  v23 = *(_QWORD *)(v22 - 8);
  if ( v23 )
  {
    v24 = sub_141F5F0((_QWORD *)a1, v23, v3, v13, v14, v15);
    sub_144BC70(a1, (_BYTE *)v5, v24, v25, v26, v27);
    v22 = v11[2];
  }
  v28 = (void *)v11[1];
  v29 = (void *)(v22 - 8);
  v11[2] = v29;
  if ( v28 == v29 )
  {
    if ( v28 )
      operator delete(v28);
    *v11 = -8192;
    --*(_DWORD *)(a1 + 2280);
    ++*(_DWORD *)(a1 + 2284);
  }
}
