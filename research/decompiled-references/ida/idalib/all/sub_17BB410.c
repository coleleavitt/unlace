void __fastcall sub_17BB410(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 *v10; // rsi
  __int64 v11; // rdi
  _QWORD *v12; // r13
  _QWORD *v13; // rdx
  __int64 v14; // r15
  int v15; // esi
  int v16; // r9d
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v37; // [rsp+0h] [rbp-E8h]
  __int64 v38; // [rsp+0h] [rbp-E8h]
  __int64 v39; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v40; // [rsp+8h] [rbp-E0h]
  __int64 v41; // [rsp+18h] [rbp-D0h] BYREF
  __m128 v42; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v44[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v45; // [rsp+98h] [rbp-50h]
  unsigned int v46; // [rsp+A0h] [rbp-48h]
  char v47; // [rsp+A4h] [rbp-44h]

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
    return;
  if ( !*(_DWORD *)(a1 + 3176) )
    return;
  v4 = sub_BFBAE0(a2);
  if ( (*(_WORD *)v4 & 0x1FF) != 0x47 )
    return;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 16) + 32LL))(*(_QWORD *)(v4 + 16));
  v6 = *(_QWORD *)(a1 + 3168);
  v7 = v5;
  v8 = *(unsigned int *)(a1 + 3184);
  if ( (_DWORD)v8 )
  {
    v9 = (v8 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
    v10 = (__int64 *)(v6 + 16LL * v9);
    v11 = *v10;
    if ( v7 == *v10 )
    {
LABEL_6:
      sub_17A93C0(&v42, v10, (_QWORD *)(16 * v8 + v6), a1 + 3168, 1);
      v12 = (_QWORD *)v42.m128_u64[0];
      goto LABEL_7;
    }
    v15 = 1;
    if ( v11 != -4096 )
    {
      do
      {
        v16 = v15 + 1;
        v9 = (v8 - 1) & (v15 + v9);
        v10 = (__int64 *)(v6 + 16LL * v9);
        v17 = *v10;
        if ( v7 == *v10 )
          goto LABEL_6;
        v15 = v16;
      }
      while ( v17 != -4096 );
    }
  }
  sub_17A93C0(&v42, (_QWORD *)(v6 + 16LL * (unsigned int)v8), (_QWORD *)(v6 + 16LL * (unsigned int)v8), a1 + 3168, 1);
  v12 = (_QWORD *)v42.m128_u64[0];
LABEL_7:
  v13 = (_QWORD *)(*(_QWORD *)(a1 + 3168) + 16LL * *(unsigned int *)(a1 + 3184));
  sub_17A93C0(&v42, v13, v13, a1 + 3168, 1);
  if ( (_QWORD *)v42.m128_u64[0] == v12 )
    return;
  v14 = v12[1];
  v40 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
    v40 = *(_QWORD *)(*(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  sub_168B9F0((__int64)&v42, (__int64 *)(a1 + 8), a3, 0x1BCBu, 0);
  if ( v45 )
  {
    sub_AE9DF0(v44, v7, 0xAu);
LABEL_23:
    if ( v45 )
    {
      sub_AE9DF0(v44, v40, 0xCu);
    }
    else if ( v47 )
    {
      v30 = sub_168B9E0(&v42);
      v34 = v43;
      if ( v43 )
      {
        v39 = v30;
        v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
        v30 = v39;
      }
      v41 = v34;
      v35 = sub_1587BC0(v30, &v41, v30, v31, v32, v33);
      sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * v46 + 8), v40, 0xCu);
    }
    goto LABEL_12;
  }
  if ( v47 )
  {
    v24 = sub_168B9E0(&v42);
    v28 = v43;
    if ( v43 )
    {
      v38 = v24;
      v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
      v24 = v38;
    }
    v41 = v28;
    v29 = sub_1587BC0(v24, &v41, v24, v25, v26, v27);
    sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * v46 + 8), v7, 0xAu);
    goto LABEL_23;
  }
LABEL_12:
  sub_15F7200(&v42);
  sub_168B9F0((__int64)&v42, (__int64 *)(a1 + 8), *(_DWORD *)(v7 + 24), 0x193Eu, 0);
  if ( v45 )
  {
    sub_AE9DF0(v44, v7, 0xAu);
  }
  else if ( v47 )
  {
    v18 = sub_168B9E0(&v42);
    v22 = v43;
    if ( v43 )
    {
      v37 = v18;
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
      v18 = v37;
    }
    v41 = v22;
    v23 = sub_1587BC0(v18, &v41, v18, v19, v20, v21);
    sub_AE9DF0((unsigned __int8 **)(*v23 + 32LL * v46 + 8), v7, 0xAu);
  }
  sub_15F7200(&v42);
  sub_168B9F0((__int64)&v42, (__int64 *)(a1 + 8), *(_DWORD *)(v14 + 24), 0x70u, 0);
  sub_15F7200(&v42);
  *v12 = -8192;
  --*(_DWORD *)(a1 + 3176);
  ++*(_DWORD *)(a1 + 3180);
}
