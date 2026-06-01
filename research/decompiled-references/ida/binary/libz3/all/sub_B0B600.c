__int64 *__fastcall sub_B0B600(__int64 *a1, __int64 a2, unsigned __int64 *a3, unsigned int a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // r13
  char v10; // al
  int v11; // eax
  unsigned __int64 v12; // rbx
  char v13; // dl
  __int64 v14; // rax
  _QWORD **v15; // rax
  _QWORD *v16; // rax
  char *v17; // rsi
  unsigned int v18; // r14d
  __int64 v19; // r15
  __m128 v20; // kr00_16
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v24; // r15
  __int64 v25; // rbx
  __int64 v26; // rbp
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r13
  _QWORD *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // [rsp+20h] [rbp-68h] BYREF
  __int64 v34; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v35[2]; // [rsp+30h] [rbp-58h] BYREF
  __m128 v36[4]; // [rsp+40h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 856LL);
  *(__m128 *)a1 = _mm_loadh_ps((const double *)(a2 + 24));
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v8 = *a3;
  v9 = *(_QWORD *)(a2 + 24);
  v10 = *a3;
  v33 = v9;
  v11 = v10 & 7;
  if ( v11 == 1 )
  {
    sub_B06250(v36, a2, (unsigned int)(v8 >> 3) ^ 1);
    v24 = v36[0].m128_i64[1];
    v25 = v36[0].m128_u64[0];
    sub_B06250(v35, a2, a4);
    v26 = v35[0];
    v27 = v35[1];
    v28 = sub_15E1B70(v9);
    v29 = v28;
    if ( v28 )
      ++*(_DWORD *)(v28 + 8);
    sub_B03590(*a1, a1[1]);
    *a1 = v29;
    sub_B03590(v26, v27);
    sub_B03590(v25, v24);
    goto LABEL_25;
  }
  if ( v11 == 3 )
  {
    if ( *(_DWORD *)(a2 + 8) == (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL)
                                                                                 + 40LL))(v8 & 0xFFFFFFFFFFFFFFF8LL)
      && v8 > 7 )
    {
      v30 = __dynamic_cast(
              (const void *)(v8 & 0xFFFFFFFFFFFFFFF8LL),
              (const struct __class_type_info *)&`typeinfo for'smt::justification,
              (const struct __class_type_info *)&`typeinfo for'smt::theory_pb::card_justification,
              0);
      if ( v30 )
      {
        sub_B0B420(v36, v30[2], a2);
        v31 = *a1;
        v32 = v36[0].m128_i64[1];
        *a1 = v36[0].m128_u64[0];
        sub_B03590(v31, v32);
      }
    }
    goto LABEL_25;
  }
  if ( v11 )
    goto LABEL_25;
  v12 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  v13 = *(_BYTE *)(v12 + 7);
  if ( (v13 & 0x40) != 0 )
  {
    v14 = v12 + 4LL * (*(_DWORD *)(v12 + 4) & 0xFFFFFF) + 8;
    if ( (v13 & 3u) - 2 < 2 )
      v14 = v12 + 4LL * (*(_DWORD *)(v12 + 4) & 0xFFFFFF) + 12;
    v15 = (_QWORD **)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_BYTE *)(v12 + 7) & 0x20) != 0 )
      ++v15;
    v16 = *v15;
    if ( v16 )
    {
      v17 = *(char **)(*(_QWORD *)(*v16 - 8LL) + 8LL);
      if ( "N3smt27justification_proof_wrapperE" != v17
        && (`typeinfo name for'smt::justification_proof_wrapper[0] == 42
         || strcmp("N3smt27justification_proof_wrapperE", &v17[*v17 == 42]))
        && !*(_DWORD *)(v9 + 712) )
      {
LABEL_25:
        v19 = 0;
        goto LABEL_26;
      }
    }
  }
  v18 = 0;
  v19 = 0;
  if ( *(_DWORD *)v12 )
  {
    do
    {
      sub_B06250(v36, a2, *(unsigned int *)(v12 + 4LL * v18 + 8));
      v20 = v36[0];
      v35[0] = v36[0].m128_u64[0];
      if ( v36[0].m128_u64[0] )
        ++*(_DWORD *)(v36[0].m128_u64[0] + 8);
      v34 = v19;
      sub_B08910(&v34, v35);
      v19 = v34;
      ++v18;
      sub_B03590(v20.m128_i64[0], v20.m128_i64[1]);
    }
    while ( v18 < *(_DWORD *)v12 );
    v9 = *(_QWORD *)(a2 + 24);
  }
  v21 = sub_15E1AF0(v9);
  v22 = v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  sub_B03590(*a1, a1[1]);
  *a1 = v22;
LABEL_26:
  v34 = v19;
  sub_2334C0(&v33);
  return a1;
}

