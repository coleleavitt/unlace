__int64 __fastcall sub_1984DB0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v4 = *a1;
  v5 = a2;
  sub_18C79E0(*a1, 0, 4);
  v6 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 16), *(double *)a3.m128_u64, a4);
  if ( v6 == 1 )
  {
    sub_190D5E0(v4, a3);
    return 1;
  }
  else
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
    if ( v7 != *(_QWORD *)(a2 + 16) )
      v5 = sub_19A4600(*a1, *(unsigned int *)(a2 + 24), v7, *(unsigned int *)(a2 + 28));
    sub_190D5E0(v4, a3);
    return v5;
  }
}
