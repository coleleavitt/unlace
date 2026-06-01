__int64 __fastcall sub_1983E20(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp

  v4 = a2;
  v5 = *a1;
  sub_18C79E0(*a1, 0, 4);
  v6 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 24), *(double *)a3.m128_u64, a4);
  if ( v6 == 1 )
  {
    v4 = 1;
  }
  else
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v6 & 0xFFFFFFFFFFFFFFFELL) != *(_QWORD *)(a2 + 24) )
    {
      sub_190D5E0(v5, a3);
      return sub_1E86580(
               *a1,
               *(_DWORD *)(a2 + 4) & 0x7FFFFFFF,
               *(unsigned int *)(a2 + 16),
               v7,
               *(unsigned int *)(a2 + 20));
    }
  }
  sub_190D5E0(v5, a3);
  return v4;
}
