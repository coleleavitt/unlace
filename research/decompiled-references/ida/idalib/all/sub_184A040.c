void __fastcall sub_184A040(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, __m128 a5, __m128 a6)
{
  int v6; // eax
  __int64 v7; // r10
  int v8; // r9d
  unsigned int v9; // r8d
  __int64 *v10; // rax
  __int64 v11; // r11
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 *v21; // rsi
  __int64 v22; // rdi
  _QWORD *v23; // r12
  _QWORD *v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  int v27; // r13d
  unsigned int v28; // ebp
  __int64 v29; // rdx
  _QWORD *v30; // rdi
  void **v31; // rdx
  void **v32; // rbp
  int v33; // eax
  int v34; // ebx
  __int64 v35; // r11
  int v36; // esi
  int v37; // r9d
  __int64 v38; // rdi
  __int64 v39[2]; // [rsp+0h] [rbp-C8h] BYREF
  __m128 v40[11]; // [rsp+10h] [rbp-B8h] BYREF

  if ( !a2 || !a4 )
    return;
  v6 = *(_DWORD *)(a1 + 4208);
  v7 = *(_QWORD *)(a1 + 4192);
  if ( v6 )
  {
    v8 = v6 - 1;
    v9 = (v6 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v10 = (__int64 *)(v7 + 16LL * v9);
    v11 = *v10;
    if ( a2 == *v10 )
    {
LABEL_5:
      *v10 = -8192;
      --*(_DWORD *)(a1 + 4200);
      ++*(_DWORD *)(a1 + 4204);
      goto LABEL_6;
    }
    v33 = 1;
    if ( v11 != -4096 )
    {
      do
      {
        v34 = v33 + 1;
        v9 = v8 & (v33 + v9);
        v10 = (__int64 *)(v7 + 16LL * v9);
        v35 = *v10;
        if ( a2 == *v10 )
          goto LABEL_5;
        v33 = v34;
      }
      while ( v35 != -4096 );
    }
  }
LABEL_6:
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
  {
    sub_168B9F0((__int64)v40, (__int64 *)(a1 + 8), a3, 0x12AFu, 0);
    v39[0] = sub_EEC8C0(a4, a1 + 8, *(double *)a5.m128_u64);
    sub_1587DB0((__int64)v40, v39);
    sub_15F7200(v40);
LABEL_31:
    sub_183B3E0(a1, a2, a3, a4);
    return;
  }
  if ( (unsigned __int8)sub_1E534E0(a1, a4, 12) )
    goto LABEL_31;
  if ( sub_B799A0(a2) )
  {
    sub_168B9F0((__int64)v40, (__int64 *)(a1 + 8), a3, 0x12B4u, 0);
    v39[0] = sub_EEC8C0(a4, a1 + 8, *(double *)a5.m128_u64);
    sub_1587DB0((__int64)v40, v39);
    sub_15F7200(v40);
    sub_B74780(a2, 0);
    return;
  }
  v16 = sub_183B1D0(a1, a2, a4, a3, a5, a6);
  if ( v16 == 1 )
    goto LABEL_31;
  v39[0] = a1;
  v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
  v39[1] = v16 & 0xFFFFFFFFFFFFFFFELL;
  if ( (unsigned __int8)sub_1849E30((unsigned __int64 *)v39, v16 & 0xFFFFFFFFFFFFFFFELL, a5) )
  {
    sub_183B3E0(a1, a2, a3, v17);
    return;
  }
  sub_B74780(a2, v17);
  v18 = *(unsigned int *)(a1 + 11304);
  v19 = *(_QWORD *)(a1 + 11288);
  if ( (_DWORD)v18 )
  {
    v20 = (v18 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v21 = (__int64 *)(v19 + 16LL * v20);
    v22 = *v21;
    if ( a2 == *v21 )
    {
LABEL_13:
      sub_1840EB0(v40, v21, (_QWORD *)(16 * v18 + v19), a1 + 11288, 1);
      v23 = (_QWORD *)v40[0].m128_u64[0];
      goto LABEL_14;
    }
    v36 = 1;
    if ( v22 != -4096 )
    {
      do
      {
        v37 = v36 + 1;
        v20 = (v18 - 1) & (v36 + v20);
        v21 = (__int64 *)(v19 + 16LL * v20);
        v38 = *v21;
        if ( a2 == *v21 )
          goto LABEL_13;
        v36 = v37;
      }
      while ( v38 != -4096 );
    }
  }
  sub_1840EB0(
    v40,
    (_QWORD *)(v19 + 16LL * (unsigned int)v18),
    (_QWORD *)(v19 + 16LL * (unsigned int)v18),
    a1 + 11288,
    1);
  v23 = (_QWORD *)v40[0].m128_u64[0];
LABEL_14:
  v24 = (_QWORD *)(*(_QWORD *)(a1 + 11288) + 16LL * *(unsigned int *)(a1 + 11304));
  sub_1840EB0(v40, v24, v24, a1 + 11288, 1);
  if ( (_QWORD *)v40[0].m128_u64[0] != v23 )
  {
    v25 = v23[1];
    v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v25 & 4) == 0 )
    {
      v27 = 1;
      if ( !v26 )
        goto LABEL_28;
      goto LABEL_17;
    }
    v27 = *(_DWORD *)(v26 + 8);
    if ( v27 )
    {
LABEL_17:
      v28 = 0;
      while ( 1 )
      {
        v30 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v25 & 4) != 0 )
        {
          v29 = v28++;
          sub_B747F0(*(_QWORD *)(*v30 + 8 * v29), v17);
          if ( v27 == v28 )
            goto LABEL_22;
        }
        else
        {
          ++v28;
          sub_B747F0((__int64)v30, v17);
          if ( v28 == v27 )
          {
LABEL_22:
            v25 = v23[1];
            if ( v25 && (v25 & 4) != 0 )
              goto LABEL_24;
            goto LABEL_28;
          }
        }
        v25 = v23[1];
      }
    }
    if ( v25 )
    {
LABEL_24:
      v31 = (void **)(v25 & 0xFFFFFFFFFFFFFFF8LL);
      v32 = v31;
      if ( v31 )
      {
        if ( *v31 != v31 + 2 )
          free(*v31);
        operator delete(v32, 0x30u);
      }
    }
LABEL_28:
    *v23 = -8192;
    --*(_DWORD *)(a1 + 11296);
    ++*(_DWORD *)(a1 + 11300);
  }
}
