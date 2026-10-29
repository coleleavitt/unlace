__int64 __fastcall sub_1968B90(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r12
  __int64 v6; // rax

  v4 = sub_19425F0(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( v4 && (v5 = v4, v6 = sub_1933BC0(a1, *(_QWORD *)(a2 + 16), *(double *)a3.m128_u64, a4), v6 != 1) )
    return sub_19DD340(
             *(_QWORD *)(*a1 + 736),
             *(unsigned int *)(a2 + 32),
             *(_BYTE *)(a2 + 40) & 3,
             *(unsigned int *)(a2 + 36),
             v5,
             v6 & 0xFFFFFFFFFFFFFFFELL);
  else
    return 1;
}
