unsigned __int64 *__fastcall sub_9A2500(__m128i *a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v4 = *(_QWORD *)(v4 + 40);
  v5 = a1->m128i_i64[1];
  v11[0] = a2;
  v11[1] = 3;
  v6 = sub_9A94C0(v5 + 32, v11, 0);
  sub_99C950((__int64)a1, v6, v4, v7, v8, v9);
  return sub_9A23B0(a1, a2, a3);
}
