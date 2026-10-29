unsigned __int64 __fastcall sub_1F78D20(__int64 a1)
{
  char v1; // al
  __int64 *v2; // rsi
  __int64 v3; // rdx
  __int64 v5; // rax
  __int64 v6; // rsi
  __m128 v7; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_BYTE *)a1 & 1;
  if ( *(_DWORD *)a1 >> 1 )
  {
    if ( v1 )
    {
      v2 = (__int64 *)(a1 + 8);
      v3 = 8;
    }
    else
    {
      v2 = *(__int64 **)(a1 + 8);
      v3 = 2LL * *(unsigned int *)(a1 + 16);
    }
    sub_ACC7B0(&v7, v2, &v2[v3], a1, 0);
    return v7.m128_u64[0];
  }
  else
  {
    if ( v1 )
    {
      v5 = a1 + 8;
      v6 = 64;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 8);
      v6 = 16LL * *(unsigned int *)(a1 + 16);
    }
    sub_ACC7B0(&v7, (__int64 *)(v5 + v6), (__int64 *)(v5 + v6), a1, 1);
    return v7.m128_u64[0];
  }
}
