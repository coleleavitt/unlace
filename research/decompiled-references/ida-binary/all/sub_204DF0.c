__int64 __fastcall sub_204DF0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 i; // r12
  _QWORD *v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rdi
  double v17; // xmm0_8
  void (__fastcall *v18)(__int64, _QWORD, double); // rax
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 *v21; // rdi
  __int64 result; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rax

  sub_1F4990(7u, a1);
  v11 = *(_QWORD *)(a1 + 600);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 592);
    if ( v12 )
    {
      for ( i = 0; i != v11; ++i )
      {
        v14 = (_QWORD *)(v12 + 80 * i);
        v15 = v14[4];
        if ( v15 )
        {
          v14[5] = 0;
          qfree(v15, (const char *)a1);
        }
        v16 = v14[1];
        if ( v16 )
        {
          v14[2] = 0;
          qfree(v16, (const char *)a1);
        }
        v12 = *(_QWORD *)(a1 + 592);
      }
      *(_QWORD *)(a1 + 600) = 0;
      qfree(v12, (const char *)a1);
      *(_QWORD *)(a1 + 592) = 0;
      *(_QWORD *)(a1 + 608) = 0;
    }
    sub_459B60(a1 + 576);
  }
  v17 = qfree(*(_QWORD *)(a1 + 920), (const char *)a1);
  *(double *)a2.m128_u64 = qfree(*(_QWORD *)(a1 + 928), (const char *)a1, v17);
  v18 = *(void (__fastcall **)(__int64, _QWORD, double))(a1 + 320);
  if ( v18 )
    v18(a1, *(_QWORD *)(a1 + 376), *(double *)a2.m128_u64);
  sub_1F4250(a1);
  v21 = (__int64 *)qword_8CB508;
  if ( !qword_8CB508 )
  {
    v26 = operator new(0x18u);
    a2 = 0;
    *(_QWORD *)v26 = 0;
    v21 = (__int64 *)v26;
    qword_8CB508 = v26;
    *(_OWORD *)(v26 + 8) = 0;
  }
  result = sub_204D20(v21, a1, a2, a3, a4, a5, v19, v20, a8, a9);
  if ( !*(_BYTE *)(a1 + 556) )
  {
    *(_BYTE *)(a1 + 556) = 1;
    result = (__int64)sub_1F61A0((_BYTE *)(a1 + 528));
  }
  v23 = *(_QWORD *)(a1 + 888);
  if ( v23 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23);
  v24 = *(_QWORD *)(a1 + 904);
  *(_QWORD *)(a1 + 888) = 0;
  if ( v24 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
  v25 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 904) = 0;
  if ( v25 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
  *(_QWORD *)(a1 + 896) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_OWORD *)(a1 + 744) = 0;
  return result;
}
