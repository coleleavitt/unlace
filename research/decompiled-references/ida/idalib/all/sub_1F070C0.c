__int64 __fastcall sub_1F070C0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r12
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64); // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // r10
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int v26; // edx
  _QWORD *v27; // rsi
  __int64 v28; // r10
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  unsigned __int64 v31; // r13
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v36; // rdi
  int v37; // esi
  int v38; // r10d
  __int64 v39; // r11
  int v40; // esi
  int v41; // r10d
  __int64 v42; // r11
  unsigned __int64 v43; // [rsp+0h] [rbp-318h]
  unsigned __int64 v44; // [rsp+8h] [rbp-310h]
  __int64 v45; // [rsp+10h] [rbp-308h] BYREF
  __int64 v46; // [rsp+18h] [rbp-300h] BYREF
  __m128 v47; // [rsp+20h] [rbp-2F8h] BYREF
  _QWORD v48[4]; // [rsp+30h] [rbp-2E8h] BYREF
  __m128 v49; // [rsp+50h] [rbp-2C8h] BYREF
  _QWORD *v50; // [rsp+60h] [rbp-2B8h]
  __int64 *v51; // [rsp+68h] [rbp-2B0h]
  void *v52[2]; // [rsp+70h] [rbp-2A8h] BYREF
  int v53; // [rsp+80h] [rbp-298h]
  char v54; // [rsp+84h] [rbp-294h]
  char v55; // [rsp+88h] [rbp-290h] BYREF
  void *ptr; // [rsp+D0h] [rbp-248h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-240h]
  _BYTE v58[568]; // [rsp+E0h] [rbp-238h] BYREF

  LODWORD(v4) = 0;
  v46 = a2;
  v45 = a3;
  if ( !a3 )
    return (unsigned int)v4;
  v4 = &v45;
  v48[0] = a1;
  v48[1] = &v45;
  v52[0] = &v55;
  ptr = v58;
  v57 = 0x4000000000LL;
  v48[2] = v52;
  v43 = a1 + 24;
  v7 = *(_QWORD *)(a1 + 24);
  v52[1] = byte_8;
  v8 = *(__int64 (__fastcall **)(__int64))(v7 + 184);
  v54 = 1;
  v53 = 0;
  v48[3] = &ptr;
  if ( v8 == sub_1EA8950 )
  {
    v9 = *(_DWORD *)(a1 + 9408) + 1;
    *(_DWORD *)(a1 + 9408) = v9;
    if ( v9 == 1 )
    {
      v36 = *(_QWORD *)(a1 + 496);
      if ( v36 )
        sub_224E010(v36);
    }
  }
  else
  {
    v8(a1 + 24);
  }
  v10 = *(unsigned int *)(a1 + 3784);
  v11 = *(_QWORD *)(a1 + 3768);
  if ( (_DWORD)v10 )
  {
    v12 = (v10 - 1) & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
    v13 = (__int64 *)(v11 + 24LL * v12);
    v14 = *v13;
    if ( v46 == *v13 )
    {
LABEL_6:
      sub_1ECCF10(&v49, v13, (_QWORD *)(v11 + 24 * v10), a1 + 3768, 1);
      v15 = v49.m128_u64[0];
      goto LABEL_7;
    }
    v37 = 1;
    if ( v14 != -4096 )
    {
      do
      {
        v38 = v37 + 1;
        v12 = (v10 - 1) & (v37 + v12);
        v13 = (__int64 *)(v11 + 24LL * v12);
        v39 = *v13;
        if ( v46 == *v13 )
          goto LABEL_6;
        v37 = v38;
      }
      while ( v39 != -4096 );
    }
  }
  sub_1ECCF10(&v49, (_QWORD *)(v11 + 24 * v10), (_QWORD *)(v11 + 24 * v10), a1 + 3768, 1);
  v15 = v49.m128_u64[0];
LABEL_7:
  v44 = v15;
  v16 = (_QWORD *)(*(_QWORD *)(a1 + 3768) + 24LL * *(unsigned int *)(a1 + 3784));
  sub_1ECCF10(&v49, v16, v16, a1 + 3768, 1);
  if ( v49.m128_u64[0] != v44 )
  {
    ++*(_DWORD *)(a1 + 9372);
    sub_1F06AF0((__int64)v48, v44 + 8, &v45, v17, v18, v19);
  }
  v49.m128_u64[0] = a1;
  v49.m128_u64[1] = (unsigned __int64)&v46;
  v50 = v48;
  v51 = &v45;
  if ( a4 )
  {
    v20 = sub_B8C1B0(a4);
    v21 = sub_B8CB30(v20);
    if ( v21 )
      sub_1F043B0((__int64 *)&v49, v21);
  }
  v22 = *(_QWORD *)(a1 + 144);
  if ( v22 )
  {
    v23 = *(_QWORD *)(v22 + 1800);
    if ( v23 )
      sub_1F043B0((__int64 *)&v49, v23);
  }
  v24 = *(unsigned int *)(a1 + 3832);
  v25 = *(_QWORD *)(a1 + 3816);
  if ( !(_DWORD)v24 )
    goto LABEL_34;
  v26 = (v24 - 1) & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
  v27 = (_QWORD *)(v25 + 24LL * v26);
  v28 = *v27;
  if ( v46 != *v27 )
  {
    v40 = 1;
    if ( v28 != -4096 )
    {
      do
      {
        v41 = v40 + 1;
        v26 = (v24 - 1) & (v40 + v26);
        v27 = (_QWORD *)(v25 + 24LL * v26);
        v42 = *v27;
        if ( v46 == *v27 )
          goto LABEL_17;
        v40 = v41;
      }
      while ( v42 != -4096 );
    }
LABEL_34:
    v29 = a1 + 3816;
    v27 = (_QWORD *)(v25 + 24 * v24);
    v30 = v27;
    goto LABEL_18;
  }
LABEL_17:
  v29 = a1 + 3816;
  v30 = (_QWORD *)(v25 + 24 * v24);
LABEL_18:
  sub_1ECCF10(&v47, v27, v30, v29, 1);
  v31 = v47.m128_u64[0];
  sub_1ECCF10(
    &v47,
    (_QWORD *)(*(_QWORD *)(a1 + 3816) + 24LL * *(unsigned int *)(a1 + 3832)),
    (_QWORD *)(*(_QWORD *)(a1 + 3816) + 24LL * *(unsigned int *)(a1 + 3832)),
    a1 + 3816,
    1);
  if ( v47.m128_u64[0] != v31 )
  {
    ++*(_DWORD *)(a1 + 9388);
    sub_1F06AF0((__int64)v48, v31 + 8, &v45, v32, v33, v34);
  }
  sub_B92CE0(v46, v45, (__int64 *)ptr, (unsigned int)v57);
  LOBYTE(v4) = (_DWORD)v57 != 0;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(a1 + 24) + 192LL))(v43);
  if ( !v54 )
    free(v52[0]);
  if ( ptr != v58 )
    free(ptr);
  return (unsigned int)v4;
}
