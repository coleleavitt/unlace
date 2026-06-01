__int64 __fastcall sub_1967D20(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r9

  v4 = sub_19425F0(a1, *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL, a3, a4);
  if ( v4 && (v5 = (__int64)v4, v6 = sub_1933BC0(a1, *(_QWORD *)(a2 + 16), *(double *)a3.m128_u64, a4), v6 != 1) )
    return sub_191BDF0(
             (__int64 *)*a1,
             *(unsigned int *)(a2 + 32),
             (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFELL),
             v5,
             *(unsigned int *)(a2 + 36),
             v7,
             a3,
             a4);
  else
    return 1;
}
