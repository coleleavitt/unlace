__int64 __fastcall sub_1CF6840(unsigned int *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rsi

  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 || (*(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) == 0 )
    return a2;
  v5 = sub_A81910(*(_QWORD **)(*(_QWORD *)a1 + 248LL), a2, a1[8]);
  v6 = sub_1CF6590((__int64)a1, (__int64)v5, a3, a4);
  v7 = 0;
  if ( v6 )
    return *v6;
  return v7;
}
