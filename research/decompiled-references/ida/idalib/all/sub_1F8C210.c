void __fastcall sub_1F8C210(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 *v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 v16; // rbp
  _QWORD *v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 *v21; // rax
  __int64 v22; // rdx
  unsigned __int64 *v23; // r14
  unsigned __int64 *i; // rbp
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // esi
  int v32; // edi
  __int64 v33; // r9
  __int64 v34; // [rsp+0h] [rbp-58h]
  __m128 v35[4]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  if ( !v3 || *(_BYTE *)(v3 + 9267) )
    return;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v10 = v5;
  if ( *(char *)(v5 + 29) < 0 )
  {
    v35[0].m128_u64[0] = v5;
    v29 = *(_QWORD *)(*(_QWORD *)(v5 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v29 + 16) != 26 )
      v29 = sub_F63050(v29, a2, v6, v7);
    if ( ((*(_BYTE *)(v29 + 19) >> 1) & 0xFu) - 9 <= 1 )
    {
      v30 = sub_1F8B440(a1 + 1288, (__int64 *)v35, v6, v7, v8, v9);
      sub_1F705B0(v30, 9, 0);
    }
  }
  v11 = *(unsigned int *)(v3 + 12984);
  v12 = *(_QWORD *)(v3 + 12968);
  if ( !(_DWORD)v11 )
    goto LABEL_25;
  v13 = (v11 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
  v14 = (__int64 *)(v12 + 40LL * v13);
  v15 = *v14;
  if ( v10 != *v14 )
  {
    v31 = 1;
    if ( v15 != -4096 )
    {
      do
      {
        v32 = v31 + 1;
        v13 = (v11 - 1) & (v31 + v13);
        v14 = (__int64 *)(v12 + 40LL * v13);
        v33 = *v14;
        if ( v10 == *v14 )
          goto LABEL_6;
        v31 = v32;
      }
      while ( v33 != -4096 );
    }
LABEL_25:
    sub_1F75600(v35, (_QWORD *)(v12 + 40 * v11), (_QWORD *)(v12 + 40 * v11), v3 + 12968, 1);
    v16 = v35[0].m128_u64[0];
    goto LABEL_7;
  }
LABEL_6:
  sub_1F75600(v35, v14, (_QWORD *)(v12 + 40 * v11), v3 + 12968, 1);
  v16 = v35[0].m128_u64[0];
LABEL_7:
  v17 = (_QWORD *)(*(_QWORD *)(v3 + 12968) + 40LL * *(unsigned int *)(v3 + 12984));
  sub_1F75600(v35, v17, v17, v3 + 12968, 1);
  if ( v35[0].m128_u64[0] != v16 )
  {
    v21 = *(unsigned __int64 **)(v16 + 8);
    v22 = *(unsigned int *)(v16 + 16);
    v23 = &v21[v22];
    for ( i = v21; v23 != i; ++*(_DWORD *)(v27 + 8) )
    {
      while ( 1 )
      {
        v25 = *i;
        v35[0].m128_u64[0] = sub_1EDB740(v3, *i, v22, (__int64)v18, v19, v20);
        v26 = *(_QWORD *)(*(_QWORD *)(v35[0].m128_u64[0] + 48) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v26 + 16) != 26 )
          v26 = sub_F63050(v26, v25, v22, v18);
        if ( ((*(_BYTE *)(v26 + 19) >> 1) & 0xFu) - 9 <= 1 )
          break;
        if ( v23 == ++i )
          return;
      }
      v27 = sub_1F8B440(a1 + 1288, (__int64 *)v35, v22, (__int64)v18, v19, v20);
      v28 = *(unsigned int *)(v27 + 8);
      v2 = v2 & 0xFFFFFFFF00000000LL | 9;
      v22 = v28 + 1;
      v19 = v2;
      if ( v28 + 1 > (unsigned __int64)*(unsigned int *)(v27 + 12) )
      {
        v34 = v27;
        sub_2237220(v27, v27 + 16, v22, 16);
        v27 = v34;
        v19 = v2;
        v28 = *(unsigned int *)(v34 + 8);
      }
      ++i;
      v18 = (__int64 *)(*(_QWORD *)v27 + 16 * v28);
      *v18 = v19;
      v18[1] = 0;
    }
  }
}
