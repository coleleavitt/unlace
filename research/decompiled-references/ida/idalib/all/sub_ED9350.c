void __fastcall sub_ED9350(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 *v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // r15
  _QWORD *v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // edx
  int v19; // esi
  unsigned int v20; // ecx
  __int64 *v21; // rdx
  __int64 v22; // r8
  int v23; // esi
  int v24; // r8d
  __int64 v25; // r10
  int v26; // edx
  int v27; // r9d
  __int64 v28; // r8
  __m128 v29[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a2 + 72;
  v4 = a1 + 1168;
  v6 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  if ( (v6 & 4) != 0 )
    v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  v8 = *(unsigned int *)(a1 + 1184);
  if ( v7 )
    v7 -= 64LL;
  v9 = *(_QWORD *)(a1 + 1168);
  if ( (_DWORD)v8 )
  {
    v10 = (v8 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
    v11 = (__int64 *)(v9 + 16LL * v10);
    v12 = *v11;
    if ( v7 == *v11 )
    {
LABEL_7:
      sub_ED92E0(v29, v11, (_QWORD *)(16 * v8 + v9), v4, 1);
      v13 = v29[0].m128_u64[0];
      goto LABEL_8;
    }
    v23 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v24 = v23 + 1;
        v10 = (v8 - 1) & (v23 + v10);
        v11 = (__int64 *)(v9 + 16LL * v10);
        v25 = *v11;
        if ( v7 == *v11 )
          goto LABEL_7;
        v23 = v24;
      }
      while ( v25 != -4096 );
    }
  }
  sub_ED92E0(v29, (_QWORD *)(v9 + 16LL * (unsigned int)v8), (_QWORD *)(v9 + 16LL * (unsigned int)v8), v4, 1);
  v13 = v29[0].m128_u64[0];
LABEL_8:
  v14 = (_QWORD *)(*(_QWORD *)(a1 + 1168) + 16LL * *(unsigned int *)(a1 + 1184));
  sub_ED92E0(v29, v14, v14, v4, 1);
  if ( v29[0].m128_u64[0] == v13 )
    return;
  v29[0].m128_u64[0] = *(_QWORD *)(v13 + 8);
  if ( (v29[0].m128_i8[0] & 1) != 0 )
  {
    v29[0].m128_u64[0] = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(a1 + 18360) + 16LL))(
                           *(_QWORD *)(a1 + 18360),
                           v29[0].m128_u64[0] >> 1);
    if ( a2 != v29[0].m128_u64[0] )
      return;
  }
  else if ( a2 != v29[0].m128_u64[0] )
  {
    return;
  }
  v15 = *(_QWORD *)(sub_B8C1B0(v2) + 16);
  if ( (v15 & 4) != 0 )
    v16 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
  v17 = *(_QWORD *)(a1 + 1168);
  if ( v16 )
    v16 -= 64LL;
  v18 = *(_DWORD *)(a1 + 1184);
  if ( v18 )
  {
    v19 = v18 - 1;
    v20 = (v18 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
    v21 = (__int64 *)(v17 + 16LL * v20);
    v22 = *v21;
    if ( v16 == *v21 )
    {
LABEL_19:
      *v21 = -8192;
      --*(_DWORD *)(a1 + 1176);
      ++*(_DWORD *)(a1 + 1180);
      return;
    }
    v26 = 1;
    if ( v22 != -4096 )
    {
      while ( 1 )
      {
        v27 = v26 + 1;
        v20 = v19 & (v26 + v20);
        v21 = (__int64 *)(v17 + 16LL * v20);
        v28 = *v21;
        if ( v16 == *v21 )
          break;
        v26 = v27;
        if ( v28 == -4096 )
          return;
      }
      goto LABEL_19;
    }
  }
}
