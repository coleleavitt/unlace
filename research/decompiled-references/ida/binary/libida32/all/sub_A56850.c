unsigned __int64 __fastcall sub_A56850(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rdi
  double v23[5]; // [rsp+0h] [rbp-28h] BYREF

  v7 = *(_QWORD *)(a1 + 104);
  sub_6E4DB0((__int64 *)(v7 + 96), v7, a3, a4, a5, a6);
  v12 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v12 + 24) & 1) != 0 )
    v13 = sub_B72C40(v12, v7, v8);
  else
    v13 = *(_QWORD *)(v12 + 24);
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v8, v9, v10, v11);
  v14 = *(_QWORD *)(a1 + 104);
  v15 = v13 + 24LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 16LL);
  sub_6E4DB0((__int64 *)(v14 + 96), v14, v16, v17, v18, v19);
  v21 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v21 + 24) & 1) != 0 )
    *(_QWORD *)&v23[0] = sub_B72C40(v21, v14, v20);
  *(_QWORD *)&v23[0] = v15;
  return _mm_loadh_ps(v23).m128_u64[0];
}

