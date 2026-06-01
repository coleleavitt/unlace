__int64 __fastcall sub_193DC60(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v7; // rbx

  v4 = *a1;
  sub_18C79E0(*a1, 0, 4);
  v5 = sub_1933BC0(a1, *(_QWORD *)(a2 + 16), *(double *)a3.m128_u64, a4);
  if ( v5 == 1 )
  {
    sub_190D5E0(v4, a3);
    return 1;
  }
  else
  {
    v7 = sub_19A4600(*a1, *(unsigned int *)(a2 + 24), v5 & 0xFFFFFFFFFFFFFFFELL, *(unsigned int *)(a2 + 28));
    sub_190D5E0(v4, a3);
    return v7;
  }
}
