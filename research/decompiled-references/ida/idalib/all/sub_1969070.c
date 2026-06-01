__int64 __fastcall sub_1969070(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v4; // rax
  __int64 v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // r14

  v4 = sub_19425F0(a1, *(_QWORD *)(a2 + 40), a3, a4);
  if ( v4 )
  {
    v5 = *a1;
    v6 = v4;
    sub_18C79E0(*a1, 0, 4);
    v7 = sub_1933BC0(a1, *(_QWORD *)(a2 + 24), *(double *)a3.m128_u64, a4);
    if ( v7 != 1 )
    {
      sub_190D5E0(v5, a3);
      return sub_1E885A0(
               *a1,
               (*(_BYTE *)(a2 + 2) >> 3) & 3,
               *(unsigned int *)(a2 + 32),
               v6,
               v7 & 0xFFFFFFFFFFFFFFFELL,
               *(unsigned int *)(a2 + 36));
    }
    sub_190D5E0(v5, a3);
  }
  return 1;
}
