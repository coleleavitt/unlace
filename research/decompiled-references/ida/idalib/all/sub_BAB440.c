unsigned __int64 __fastcall sub_BAB440(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  double v15[3]; // [rsp+0h] [rbp-18h] BYREF

  v6 = *(_QWORD *)(a1 + 120);
  if ( v6 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_28;
  }
  else
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
    v6 = *(_QWORD *)(a1 + 120);
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_25;
  }
  if ( (*(_BYTE *)(v7 + 72) & 1) != 0 )
  {
    sub_BA8900(a1);
    v6 = *(_QWORD *)(a1 + 120);
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    v8 = *(unsigned int *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 48);
    if ( (_DWORD)v8 )
    {
LABEL_5:
      v7 = *(_QWORD *)(v7 + 40);
      *(_QWORD *)&v15[0] = v7 + 8 * v8;
      if ( v6 )
        goto LABEL_6;
      goto LABEL_23;
    }
    if ( !v6 )
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v7, v8, a5, a6);
      v6 = *(_QWORD *)(a1 + 120);
      v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v6 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        goto LABEL_20;
LABEL_25:
      v15[0] = 0.0;
      if ( v6 )
        return _mm_loadh_ps(v15).m128_u64[0];
      goto LABEL_23;
    }
    if ( v7 )
      goto LABEL_20;
LABEL_28:
    v15[0] = 0.0;
    return _mm_loadh_ps(v15).m128_u64[0];
  }
  v8 = *(unsigned int *)(v7 + 48);
  if ( (_DWORD)v8 )
    goto LABEL_5;
LABEL_20:
  if ( (*(_BYTE *)(v7 + 72) & 1) != 0 )
  {
    sub_BA8900(a1);
    v6 = *(_QWORD *)(a1 + 120);
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v14 = *(unsigned int *)(v7 + 24);
  v7 = *(_QWORD *)(v7 + 16);
  v8 = v7 + 8 * v14;
  *(_QWORD *)&v15[0] = v8;
  if ( !v6 )
  {
LABEL_23:
    sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v7, v8, a5, a6);
    v6 = *(_QWORD *)(a1 + 120);
  }
LABEL_6:
  v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v9 )
    return _mm_loadh_ps(v15).m128_u64[0];
  if ( (*(_BYTE *)(v9 + 72) & 1) == 0 )
  {
    if ( *(_DWORD *)(v9 + 48) )
      return _mm_loadh_ps(v15).m128_u64[0];
    goto LABEL_14;
  }
  sub_BA8900(a1);
  v9 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  v13 = *(unsigned int *)(v9 + 48);
  if ( !(_DWORD)v13 )
  {
    if ( !*(_QWORD *)(a1 + 120) )
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), 0, v13, v11, v12);
      v9 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    if ( v9 )
    {
LABEL_14:
      if ( (*(_BYTE *)(v9 + 72) & 1) != 0 )
        sub_BA8900(a1);
    }
  }
  return _mm_loadh_ps(v15).m128_u64[0];
}
