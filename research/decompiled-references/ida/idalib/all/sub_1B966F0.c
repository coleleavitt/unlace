__int64 __fastcall sub_1B966F0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // r12
  __int64 v9; // r13
  int v11; // eax

  v4 = sub_1B90E50(a1, *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL, a3, a4);
  if ( !v4 )
    return 1;
  v8 = v4;
  v9 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 32), a3, a4, v5, v6, v7);
  if ( v9 == 1 )
    return 1;
  v11 = sub_EEC140(*(_QWORD *)(a2 + 32));
  return sub_18D9980(
           *a1,
           *(unsigned int *)(a2 + 16),
           v8,
           v11,
           (unsigned __int16 *)(v9 & 0xFFFFFFFFFFFFFFFELL),
           *(double *)a3.m128_u64);
}
