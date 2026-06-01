__int64 __fastcall sub_359430(__int64 a1)
{
  __int64 v1; // rbp

  v1 = *(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 48);
  return (*(int *)(a1 + 56) >> 3) + v1 * ((int)nbits(*(_QWORD *)(a1 + 24)) >> 3);
}
