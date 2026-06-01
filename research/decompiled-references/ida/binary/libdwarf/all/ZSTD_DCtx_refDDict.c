unsigned __int64 __fastcall ZSTD_DCtx_refDDict(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  bool v4; // zf
  void **v5; // r14
  __int64 (__fastcall *v6)(__int64, __int64); // rcx
  __int64 v7; // r12
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  size_t v10; // rsi
  void *v11; // rax
  void *v12; // rax
  void *v13; // rcx
  void **v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rsi
  _QWORD *v17; // rax
  void *v18; // rdx
  void (__fastcall *v19)(__int64, void **); // rax
  void (__fastcall *v20)(__int64, void **); // [rsp+0h] [rbp-48h]
  __int64 (__fastcall *v21)(__int64, __int64); // [rsp+8h] [rbp-40h]

  result = -60;
  if ( *(_DWORD *)(a1 + 30236) )
    return result;
  ZSTD_freeDDict(*(void **)(a1 + 30184));
  *(_QWORD *)(a1 + 30184) = 0;
  *(_QWORD *)(a1 + 30192) = 0;
  *(_DWORD *)(a1 + 30208) = 0;
  if ( !a2 )
    return 0;
  v4 = *(_DWORD *)(a1 + 30224) == 1;
  *(_QWORD *)(a1 + 30192) = a2;
  *(_DWORD *)(a1 + 30208) = -1;
  if ( !v4 )
    return 0;
  v5 = *(void ***)(a1 + 30216);
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 30128);
  v7 = *(_QWORD *)(a1 + 30144);
  v20 = *(void (__fastcall **)(__int64, void **))(a1 + 30136);
  if ( !v5 )
  {
    if ( v6 )
    {
      v21 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 30128);
      v5 = (void **)v6(v7, 24);
      if ( !v5 )
        goto LABEL_31;
      v17 = (_QWORD *)v21(v7, 512);
      *v17 = 0;
      v18 = v17;
      v17[63] = 0;
      memset(
        (void *)((unsigned __int64)(v17 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((unsigned int)v17 - (((_DWORD)v17 + 8) & 0xFFFFFFF8) + 512) >> 3));
    }
    else
    {
      v5 = (void **)malloc(0x18u);
      if ( !v5 )
        goto LABEL_31;
      v18 = calloc(1u, 0x200u);
    }
    *v5 = v18;
    if ( v18 )
    {
      v5[1] = &dword_40;
      v5[2] = nullptr;
      v19 = *(void (__fastcall **)(__int64, void **))(a1 + 30136);
      *(_QWORD *)(a1 + 30216) = v5;
      v6 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 30128);
      v7 = *(_QWORD *)(a1 + 30144);
      v20 = v19;
      goto LABEL_8;
    }
    if ( !v20 )
    {
      free(v5);
      *(_QWORD *)(a1 + 30216) = 0;
      return -64;
    }
    v20(v7, v5);
LABEL_31:
    *(_QWORD *)(a1 + 30216) = 0;
    return -64;
  }
LABEL_8:
  v8 = (unsigned __int64)v5[1];
  if ( !(3 * (4 * (__int64)v5[2] / v8)) )
    goto LABEL_19;
  v9 = 2 * v8;
  v10 = 16 * v8;
  if ( v6 )
  {
    v11 = (void *)((__int64 (__fastcall *)(__int64, size_t, unsigned __int64))v6)(v7, v10, 4 * (__int64)v5[2] % v8);
    v12 = memset(v11, 0, 16 * v8);
    v8 = (unsigned __int64)v5[1];
    v13 = v12;
  }
  else
  {
    v13 = calloc(1u, v10);
  }
  v14 = (void **)*v5;
  if ( !v13 )
    return -64;
  v5[1] = (void *)v9;
  v15 = 0;
  *v5 = v13;
  v5[2] = nullptr;
  if ( v8 )
  {
    do
    {
      v16 = (__int64)v14[v15];
      if ( v16 )
      {
        result = sub_618C0(v5, v16);
        if ( result > 0xFFFFFFFFFFFFFF88LL )
          return result;
      }
    }
    while ( ++v15 != v8 );
  }
  if ( v14 )
  {
    if ( v20 )
      v20(v7, v14);
    else
      free(v14);
  }
LABEL_19:
  result = sub_618C0(v5, a2);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
    return 0;
  return result;
}

