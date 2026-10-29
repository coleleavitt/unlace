__int64 __fastcall sub_1968B10(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v4; // rax
  __int64 *v5; // r12
  __int64 v6; // r13
  int v8; // eax

  v4 = sub_19425F0(a1, *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL, a3, a4);
  if ( !v4 )
    return 1;
  v5 = v4;
  v6 = sub_1933BC0(a1, *(_QWORD *)(a2 + 32), *(double *)a3.m128_u64, a4);
  if ( v6 == 1 )
    return 1;
  v8 = sub_EEC140(*(_QWORD *)(a2 + 32));
  return sub_18D9980(
           *a1,
           *(unsigned int *)(a2 + 16),
           v5,
           v8,
           (unsigned __int16 *)(v6 & 0xFFFFFFFFFFFFFFFELL),
           *(double *)a3.m128_u64);
}
