void __fastcall sub_18ADCB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rdi
  int v11; // eax
  int v12; // r8d
  unsigned int v13; // eax
  _QWORD *v14; // rsi
  unsigned __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  _QWORD *v22; // rbp
  _QWORD *v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // [rsp+8h] [rbp-60h]
  __int64 v35; // [rsp+18h] [rbp-50h] BYREF
  __m128 v36[4]; // [rsp+20h] [rbp-48h] BYREF

  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  v6 = *(_QWORD *)(a2 + 736);
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v7 = v6 + 64;
  v8 = *(_QWORD *)(v6 + 64);
  *(_QWORD *)(a1 + 40) = 0x400000000LL;
  v9 = *(unsigned int *)(v6 + 80);
  *(_QWORD *)(a1 + 8) = 0;
  v10 = *(_QWORD *)(a3 + 40);
  v35 = v10;
  if ( !(_DWORD)v9 )
    goto LABEL_18;
  v34 = v8;
  v11 = sub_FDE780(v10);
  v12 = v9 - 1;
  v13 = (v9 - 1) & v11;
  v9 = *(unsigned int *)(v6 + 80);
  v14 = (_QWORD *)(v34 + 40LL * v13);
  if ( v35 != *v14 )
  {
    if ( *v14 != -1 )
    {
      v33 = 1;
      do
      {
        v13 = v12 & (v33 + v13);
        v14 = (_QWORD *)(v34 + 40LL * v13);
        if ( v35 == *v14 )
          goto LABEL_3;
        ++v33;
      }
      while ( *v14 != -1 );
    }
    v8 = *(_QWORD *)(v6 + 64);
LABEL_18:
    sub_171EC50(v36, (_QWORD *)(v8 + 40 * v9), (_QWORD *)(v8 + 40 * v9), v7, 1);
    v15 = v36[0].m128_u64[0];
    goto LABEL_4;
  }
LABEL_3:
  sub_171EC50(v36, v14, (_QWORD *)(*(_QWORD *)(v6 + 64) + 40 * v9), v7, 1);
  v15 = v36[0].m128_u64[0];
LABEL_4:
  v16 = *(_QWORD *)(a2 + 736);
  sub_171EC50(
    v36,
    (_QWORD *)(*(_QWORD *)(v16 + 64) + 40LL * *(unsigned int *)(v16 + 80)),
    (_QWORD *)(*(_QWORD *)(v16 + 64) + 40LL * *(unsigned int *)(v16 + 80)),
    v16 + 64,
    1);
  if ( v36[0].m128_u64[0] != v15
    || *(_QWORD *)(a2 + 552)
    && (v30 = *(_QWORD *)(**(_QWORD **)(a2 + 736) + 552LL),
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 256LL))(v30, v35),
        v31 = sub_1897570(*(_QWORD *)(a2 + 736) + 64LL, &v35),
        v32 = *(_QWORD *)(a2 + 736),
        v15 = v31,
        sub_171EC50(
          v36,
          (_QWORD *)(*(_QWORD *)(v32 + 64) + 40LL * *(unsigned int *)(v32 + 80)),
          (_QWORD *)(*(_QWORD *)(v32 + 64) + 40LL * *(unsigned int *)(v32 + 80)),
          v32 + 64,
          1),
        v36[0].m128_u64[0] != v15) )
  {
    v21 = (_QWORD *)(v15 + 8);
    v22 = (_QWORD *)(v15 + 24);
    if ( (*(_BYTE *)(a3 + 58) & 2) != 0 )
      v22 = v21;
    if ( (*v22 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v23 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
        v23 = (_QWORD *)*v23;
      if ( !v23 )
        BUG();
      v24 = (__int64)(v23 - 6);
      if ( (*((_BYTE *)v23 - 20) & 0x7F) == 0x17 )
      {
        sub_18ADA90(a1, v24, v17, v18, v19, v20);
        v29 = v23[5];
        if ( v29 )
          sub_18ADA90(a1, v29, v25, v26, v27, v28);
      }
      else
      {
        sub_18ADA90(a1, v24, v17, v18, v19, v20);
      }
    }
  }
}
