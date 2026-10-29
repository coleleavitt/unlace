unsigned __int64 __fastcall sub_18455E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  double v20[5]; // [rsp+0h] [rbp-28h] BYREF

  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
  v11 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v11 + 32) & 1) != 0 )
    v12 = sub_B969C0(v11);
  else
    v12 = *(_QWORD *)(v11 + 32);
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v7, v8, v9, v10);
  v13 = v12 + 24LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 20LL);
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v14, v15, v16, v17);
  v18 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v18 + 32) & 1) != 0 )
    *(_QWORD *)&v20[0] = sub_B969C0(v18);
  *(_QWORD *)&v20[0] = v13;
  return _mm_loadh_ps(v20).m128_u64[0];
}
