unsigned __int64 __fastcall sub_16687B0(__int64 a1)
{
  int *v1; // rax
  __m128 v3; // [rsp+0h] [rbp-18h] BYREF

  v1 = (int *)(*(_QWORD *)a1 + 12LL * *(unsigned int *)(a1 + 16));
  if ( *(_DWORD *)(a1 + 8) )
    sub_152EEE0(&v3, *(int **)a1, v1, a1, 0);
  else
    sub_152EEE0(&v3, v1, v1, a1, 1);
  return v3.m128_u64[0];
}
