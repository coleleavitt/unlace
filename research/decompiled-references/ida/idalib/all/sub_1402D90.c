void __fastcall sub_1402D90(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 *v9; // rsi
  __int64 *v10; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rbp
  __int64 *v15; // r15
  __int64 v16; // rsi
  void **v17; // rdi
  void **v18; // rbp
  void **v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 *v24; // rsi
  _QWORD *v25; // r15
  __int64 *v26; // rdx
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 *v29; // rbp
  __int64 v30; // r14
  __int64 v31; // rsi
  void **v32; // rdi
  void **v33; // rbp
  void **v34; // rdi
  int v35; // r10d
  int v36; // r11d
  _QWORD *v37; // [rsp+8h] [rbp-50h]
  __m128 v38[4]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a1 + 392;
  v5 = *(unsigned int *)(a1 + 408);
  v6 = *(_QWORD *)(a2 + 32);
  v7 = *(_QWORD *)(a1 + 392);
  if ( (_DWORD)v5 )
  {
    v8 = (v5 - 1) & (37 * v6);
    v9 = (__int64 *)(v7 + 16LL * v8);
    if ( v6 == *v9 )
    {
LABEL_3:
      sub_13F9C40(v38, v9, (__int64 *)(16 * v5 + v7), v3, 1);
      v37 = (_QWORD *)v38[0].m128_u64[0];
      goto LABEL_4;
    }
    if ( *v9 != 0x7FFFFFFFFFFFFFFFLL )
    {
      v36 = 1;
      do
      {
        v8 = (v5 - 1) & (v36 + v8);
        v9 = (__int64 *)(v7 + 16LL * v8);
        if ( v6 == *v9 )
          goto LABEL_3;
        ++v36;
      }
      while ( *v9 != 0x7FFFFFFFFFFFFFFFLL );
    }
  }
  sub_13F9C40(v38, (__int64 *)(v7 + 16LL * (unsigned int)v5), (__int64 *)(v7 + 16LL * (unsigned int)v5), v3, 1);
  v37 = (_QWORD *)v38[0].m128_u64[0];
LABEL_4:
  v10 = (__int64 *)(*(_QWORD *)(a1 + 392) + 16LL * *(unsigned int *)(a1 + 408));
  sub_13F9C40(v38, v10, v10, v3, 1);
  if ( v37 == (_QWORD *)v38[0].m128_u64[0] )
    goto LABEL_18;
  v11 = v37[1];
  v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v11 & 4) != 0 )
  {
    v13 = *(__int64 **)v12;
    v14 = *(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8);
    goto LABEL_7;
  }
  v13 = v37 + 1;
  if ( v12 )
  {
    v14 = (__int64)(v37 + 2);
LABEL_7:
    if ( (__int64 *)v14 != v13 )
    {
      v15 = v13;
      do
      {
        v16 = *v15++;
        sub_1402B20(a1, v16, a2);
      }
      while ( (__int64 *)v14 != v15 );
      v11 = v37[1];
    }
  }
  if ( v11 )
  {
    if ( (v11 & 4) != 0 )
    {
      v17 = (void **)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      v18 = v17;
      if ( v17 )
      {
        v19 = (void **)*v17;
        if ( v19 != v18 + 2 )
          free(v19);
        operator delete(v18, 0x30u);
      }
    }
  }
  *v37 = 0x7FFFFFFFFFFFFFFELL;
  --*(_DWORD *)(a1 + 400);
  ++*(_DWORD *)(a1 + 404);
LABEL_18:
  v20 = *(unsigned int *)(a1 + 432);
  v21 = *(_QWORD *)(a2 + 40);
  v22 = *(_QWORD *)(a1 + 416);
  if ( (_DWORD)v20 )
  {
    v23 = (v20 - 1) & (37 * v21);
    v24 = (__int64 *)(v22 + 16LL * v23);
    if ( v21 == *v24 )
    {
LABEL_20:
      sub_13F9C40(v38, v24, (__int64 *)(v22 + 16 * v20), a1 + 416, 1);
      v25 = (_QWORD *)v38[0].m128_u64[0];
      goto LABEL_21;
    }
    if ( *v24 != 0x7FFFFFFFFFFFFFFFLL )
    {
      v35 = 1;
      do
      {
        v23 = (v20 - 1) & (v35 + v23);
        v24 = (__int64 *)(v22 + 16LL * v23);
        if ( v21 == *v24 )
          goto LABEL_20;
        ++v35;
      }
      while ( *v24 != 0x7FFFFFFFFFFFFFFFLL );
    }
  }
  sub_13F9C40(
    v38,
    (__int64 *)(v22 + 16LL * (unsigned int)v20),
    (__int64 *)(v22 + 16LL * (unsigned int)v20),
    a1 + 416,
    1);
  v25 = (_QWORD *)v38[0].m128_u64[0];
LABEL_21:
  v26 = (__int64 *)(*(_QWORD *)(a1 + 416) + 16LL * *(unsigned int *)(a1 + 432));
  sub_13F9C40(v38, v26, v26, a1 + 416, 1);
  if ( (_QWORD *)v38[0].m128_u64[0] == v25 )
    return;
  v27 = v25[1];
  v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v27 & 4) != 0 )
  {
    v29 = *(__int64 **)v28;
    v30 = *(_QWORD *)v28 + 8LL * *(unsigned int *)(v28 + 8);
    goto LABEL_24;
  }
  v29 = v25 + 1;
  if ( v28 )
  {
    v30 = (__int64)(v25 + 2);
LABEL_24:
    if ( (__int64 *)v30 != v29 )
    {
      do
      {
        v31 = *v29++;
        sub_1402B20(a1, v31, a2);
      }
      while ( (__int64 *)v30 != v29 );
      v27 = v25[1];
    }
  }
  if ( v27 )
  {
    if ( (v27 & 4) != 0 )
    {
      v32 = (void **)(v27 & 0xFFFFFFFFFFFFFFF8LL);
      v33 = v32;
      if ( v32 )
      {
        v34 = (void **)*v32;
        if ( v34 != v33 + 2 )
          free(v34);
        operator delete(v33, 0x30u);
      }
    }
  }
  *v25 = 0x7FFFFFFFFFFFFFFELL;
  --*(_DWORD *)(a1 + 424);
  ++*(_DWORD *)(a1 + 428);
}
