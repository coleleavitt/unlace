__int64 __fastcall sub_C9FE60(__int64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v5; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned __int8 v6; // [rsp+17h] [rbp-21h] BYREF
  _QWORD v7[4]; // [rsp+18h] [rbp-20h] BYREF

  v5 = a2;
  v6 = 1;
  sub_C9FC00((__int64 *)(a1 + 440), &v5, &v6);
  if ( (*a3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v7[0] = *(_QWORD *)(a1 + 448) - *(_QWORD *)(a1 + 440);
    sub_C9FE10(a1 + 464, v7, a3);
  }
  return v6;
}
