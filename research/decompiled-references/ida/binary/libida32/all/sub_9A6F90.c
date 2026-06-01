unsigned __int64 __fastcall sub_9A6F90(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __m128 v4; // [rsp+0h] [rbp-18h] BYREF

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v1 = a1 + 8;
    v2 = 64;
  }
  else
  {
    v1 = *(_QWORD *)(a1 + 8);
    v2 = 16LL * *(unsigned int *)(a1 + 16);
  }
  sub_9A6F20(&v4, (_QWORD *)(v1 + v2), (_QWORD *)(v1 + v2), a1, 1);
  return v4.m128_u64[0];
}

